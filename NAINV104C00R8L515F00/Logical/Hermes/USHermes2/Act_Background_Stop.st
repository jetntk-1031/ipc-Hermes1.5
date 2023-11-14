(** 2019-03-15 **)
ACTION Act_Background_Stop:

	IF EDGEPOS(bStop) THEN
		
		fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
		tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
		tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
		tyNotificationSnd.tyAvl.bDescription		:= TRUE;
		tyNotificationSnd.tyData.eSeverity			:= HermesSeverityInfo;
		tyNotificationSnd.tyData.iNotificationCode	:= 5;
		tyNotificationSnd.tyData.sDescription		:= 'Machine Shutdown';
		
	END_IF
		
	IF bStop = TRUE THEN
	
		IF a_eMsgSend[0] = HermesMsgTypeNA THEN
			
			bRstConnection	:= TRUE;
			
			IF udiTCPIdent = 0 THEN
				
				bRun	:= FALSE;
				
			END_IF
			
		END_IF
	
	END_IF
	
END_ACTION
