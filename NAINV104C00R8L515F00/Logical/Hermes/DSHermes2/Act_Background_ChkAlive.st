(** 2019-05-30 **)
ACTION Act_Background_ChkAlive:
	
	IF eStatus1 <> Error THEN
		
		//Standard Check Alive (Without Ping & Pong)
		fbCheckAlive.bDataRcv		:= tyMsgTypeRcv.bCheckAlive OR tyMsgTypeRcv.bMachineReady OR tyMsgTypeRcv.bRevokeMachineReady OR tyMsgTypeRcv.bStartTransport OR tyMsgTypeRcv.bStopTransport OR tyMsgTypeRcv.bQueryBoardInfo;
		fbCheckAlive.tSendTm		:= p_tyParam.tSndAlive;
		fbCheckAlive.tRcvTimeOut	:= p_tyParam.tRcvAlive;
		fbCheckAlive(bEn := TRUE);
			
		IF fbCheckAlive.udiStatus > 0 AND fbCheckAlive.udiStatus < 65534 THEN
			eStatus1	:= Error;
				
			IF fbCheckAlive.udiStatus = 2767 THEN
				udiStatus1	:= 10132;	//Check Alive Time Out
			ELSE
				udiStatus1	:= fbCheckAlive.udiStatus;
			END_IF
			
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
		
			tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
			tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
			tyNotificationSnd.tyAvl.bDescription		:= TRUE;
			tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
			tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus1);
			tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus1].sAlmText;
				
		ELSE
			IF EDGEPOS(fbCheckAlive.bDataSend) THEN
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeCheckAlive);
				tyCheckAliveSnd	:= fbCheckAlive.tyDataSend;
			END_IF
				
		END_IF
					
		tyMsgTypeRcv.bCheckAlive	:= FALSE;	//Reset Check Alive
		
	END_IF

END_ACTION
