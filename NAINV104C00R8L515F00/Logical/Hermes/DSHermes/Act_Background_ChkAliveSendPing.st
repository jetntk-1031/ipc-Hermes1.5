(** 2021-08-01 **)
ACTION Act_Background_ChkAliveSendPing:
	
	IF eStatus1 <> Error THEN
	
		//Check Alive Send Ping	
		fbCheckAliveSendPing.bDataRcv		:= tyMsgTypeRcv.bCheckAlivePong;
		fbCheckAliveSendPing.tyDataRcv		:= tyCheckAlivePongRcv;
		fbCheckAliveSendPing.tyDTStructure	:= p_tyDTStructure;
		fbCheckAliveSendPing.tSendTm		:= p_tyParam.tSndAlive;
		fbCheckAliveSendPing.tRcvTimeOut	:= p_tyParam.tRcvAlive;
		fbCheckAliveSendPing(bEn := TRUE);
			
		IF fbCheckAliveSendPing.udiStatus > 0 AND fbCheckAliveSendPing.udiStatus < 65534 THEN
			eStatus1	:= Error;
				
			IF fbCheckAliveSendPing.udiStatus = 2768 THEN
				udiStatus1	:= 10133;	//Waiting Check Alive Time Out
			ELSIF fbCheckAliveSendPing.udiStatus = 2769 THEN
				udiStatus1	:= 10134;	//Check Alive Id Mismatch
			ELSE
				udiStatus1	:= fbCheckAliveSendPing.udiStatus;
			END_IF
			
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
		
			tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
			tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
			tyNotificationSnd.tyAvl.bDescription		:= TRUE;
			tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
			tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus1);
			tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus1].sAlmText;
				
		ELSE
			IF EDGEPOS(fbCheckAliveSendPing.bDataSend) THEN
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeCheckAlivePing);
				tyCheckAlivePingSnd	:= fbCheckAliveSendPing.tyDataSend;
			END_IF
				
		END_IF
		
		tyMsgTypeRcv.bCheckAlivePong	:= FALSE;	//Reset Check Alive Pong
		
	END_IF

END_ACTION
