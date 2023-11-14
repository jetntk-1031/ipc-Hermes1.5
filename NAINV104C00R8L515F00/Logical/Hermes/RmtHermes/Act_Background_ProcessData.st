(** 2021-08-01 **)
ACTION Act_Background_ProcessData:
	
	//Write Config into "Hermes"
	fbDelayTm(IN := bWriteConfig, PT := T#0.5S); //Delay 0.5s to let Hermes take the Data, before WriteConfig
	
	IF fbDelayTm.Q THEN
	
		eHermesAct := HermesActWriteConfig;
		eMcParamAct := McParamActWrite;

		
		IF p_eHermesStatus = Done AND p_eHermesStat = HermesActWriteConfig AND p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			
			eMcParamAct     := McParamActIdle;		
			eHermesAct		:= HermesActIdle;
			bWriteConfig    := FALSE;
			bUpdateUIData   := TRUE;
			fbDelayTm(IN := FALSE);	
			tyInfoData.sProgNm		:= p_sProgNm;
			tyInfoData.udiCode		:= 10000;
			tyInfoData.eSeverity	:= AlmSeverityInfo;
			tyInfoData.sAlmMsg		:= p_sInfoMsg;
		
			
		ELSIF  (p_eHermesStatus = Error AND p_eHermesStat = HermesActWriteConfig) OR (p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Error)  THEN
			
			eMcParamAct     := McParamActIdle;					
			eHermesAct		:= HermesActIdle;
			bWriteConfig    := FALSE;
			bUpdateUIData   := FALSE;
			fbDelayTm(IN := FALSE);	
			
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
			udiStatus2 := 10199; //SetConfiguration Failed, Please Send Again Or Set in Machine HMI back
			tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
			tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
			tyNotificationSnd.tyAvl.bDescription		:= TRUE;
			tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
			tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
			tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
		END_IF
	END_IF
	
	//Update UI
	IF bUpdateUIData THEN
		tyInfoData.sProgNm		:= p_sProgNm;
		tyInfoData.udiCode		:= 10000;
		tyInfoData.eSeverity	:= AlmSeverityInfo;
		tyInfoData.sAlmMsg		:= p_sInfoMsg;
	END_IF
	
	//Auto Reset Info Pop Up
	fbDelayTm1(IN := bUpdateUIData , PT := T#2S); //Auto reset at the Moment (Can Be Changed if need)
	IF fbDelayTm1.Q = TRUE THEN
		
		//Clear Info Message
		tyInfoData.sProgNm		:= '';
		tyInfoData.udiCode		:= 0;
		tyInfoData.eSeverity	:= AlmSeverityNA;
		tyInfoData.sAlmMsg		:= '';
		
		bUpdateUIData := FALSE;
		bFoundIndexUS1 := FALSE;
		bFoundIndexUS2 := FALSE;
		bFoundIndexUS3 := FALSE;
		bFoundIndexUS4 := FALSE;
		bFoundIndexDS1 := FALSE;
		bFoundIndexDS2 := FALSE;
		bFoundIndexDS3 := FALSE;
		bFoundIndexDS4 := FALSE;
		fbDelayTm1(IN := FALSE);	
	END_IF 
	

END_ACTION
