(** 2021-08-01 **)
ACTION Act_Background_ProcessData:
	
	//Write Config into "Hermes"
	fbDelayTm(IN := bWriteConfig, PT := T#0.5S); //Small Delay 0.5s to let Hermes take the Data, before WriteConfig
	
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
			
			udiStatus2 := 10199; //SetConfiguration Failed, Please Send Again
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
	
	//Auto Reset
	fbDelayTm1(IN := bUpdateUIData , PT := T#2S); //Auto reset the Info Msg C0009 page. No need press.
	IF fbDelayTm1.Q = TRUE THEN
		
		//Clear Info Message
		tyInfoData.sProgNm		:= '';
		tyInfoData.udiCode		:= 0;
		tyInfoData.eSeverity	:= AlmSeverityNA;
		tyInfoData.sAlmMsg		:= '';
		
		bUpdateUIData  := FALSE;
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
	
	//BatchId from Supervisory System 
	sBatchId := tySendWorkOrderInfoAcc.tyData.sBatchId;
	
	//Retain sWorkOrderId for machine power cycle
	p_udiRetainDataAddr	:= ADR(sWorkOrderId);
	p_udiRetainDataLen	:= SIZEOF(sWorkOrderId);
	
	//Write Retain
	IF EDGEPOS(bRcvWorkOrderInfo1) THEN
    	sWorkOrderId := tySendWorkOrderInfoAcc.tyData.sWorkOrderId; //Receive from Svy
		p_eAct := HermesActWriteRetain;
		
	ELSIF EDGENEG(p_bSvyEn = TRUE) OR EDGENEG(p_bSvyPrep = TRUE) THEN 
		sWorkOrderId := ''; //Empty if Supervisory Hermes disable
		p_eAct := HermesActWriteRetain;
		
	ELSIF EDGENEG(p_tyHermesConfiguration.tySvyParam.bFeatureQueryWorkOrderInfo = TRUE) THEN
		sWorkOrderId := ''; //Empty if no support 
		p_eAct := HermesActWriteRetain;
		
	ELSIF EDGEPOS(p_bDeleteWorkOrder) THEN 
		sWorkOrderId := ''; //Delete from UI
		p_eAct := HermesActWriteRetain;
		p_bDeleteWorkOrder := FALSE;
	END_IF
	
	IF eStatus = Done AND eStat = HermesActWriteRetain THEN			
		p_eAct		:= HermesActIdle;
	END_IF

//	//Testing -> Read Retain
//	IF EDGEPOS(bTest) THEN
//		p_eAct := HermesActReadRetain;
//	END_IF
//	
//	IF eStatus = Done AND eStat = HermesActReadRetain THEN			
//		p_eAct		:= HermesActIdle;
//	END_IF
	
	IF EDGEPOS(bTest) THEN
	
	
	
	END_IF
	
END_ACTION
