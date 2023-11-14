(** 2021-08-01 **)
ACTION Act_Background_IllegalMsg:
	
	IF eStatus2 <> Error THEN
		
		udiStatus2	:= fHermesIllegalMsgRmt(tyMsgTypeRcv);
		
		IF udiStatus2 <> 0 THEN
			eStatus2	:= Error;
			
			IF udiStatus2 = 2925 THEN
				udiStatus2	:= 10114;	//Receive Check Alive While In Remote Configuration
			ELSIF udiStatus2 = 2926 THEN
				udiStatus2	:= 10115;	//Receive Check Alive Ping While In Remote Configuration
			ELSIF udiStatus2 = 2927 THEN
				udiStatus2	:= 10116;	//Receive Check Alive Pong While In Remote Configuration
			ELSIF udiStatus2 = 2928 THEN
				udiStatus2	:= 10117;	//Receive ServiceDescription While In Remote Configuration
			ELSIF udiStatus2 = 2929 THEN
				udiStatus2	:= 10118;	//Receive BoardAvailable While In Remote Configuration
			ELSIF udiStatus2 = 2930 THEN
				udiStatus2	:= 10119;	//Receive RevokeBoardAvailable While In Remote Configuration
			ELSIF udiStatus2 = 2931 THEN
				udiStatus2	:= 10120;	//Receive MachineReady While In Remote Configuration
			ELSIF udiStatus2 = 2932 THEN
				udiStatus2	:= 10121;	//Receive RevokeMachineReady While In Remote Configuration
			ELSIF udiStatus2 = 2933 THEN
				udiStatus2	:= 10122;	//Receive StartTransport While In Remote Configuration
			ELSIF udiStatus2 = 2934 THEN
				udiStatus2	:= 10123;	//Receive StopTransport While In Remote Configuration
			ELSIF udiStatus2 = 2935 THEN
				udiStatus2	:= 10124;	//Receive TransportFinished While In Remote Configuration
			ELSIF udiStatus2 = 2936 THEN
				udiStatus2	:= 10125;	//Receive CurrentConfiguration While In Remote Configuration
			ELSIF udiStatus2 = 2937 THEN
				udiStatus2	:= 10126;	//Receive BoardForecast While In Remote Configuration
			ELSIF udiStatus2 = 2938 THEN
				udiStatus2	:= 10127;	//Receive QueryBoardInfo While In Remote Configuration
			ELSIF udiStatus2 = 2939 THEN
				udiStatus2	:= 10128;	//Receive SendBoardInfo While In Remote Configuration
			END_IF
			
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
			tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
			tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
			tyNotificationSnd.tyAvl.bDescription		:= TRUE;
			tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
			tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
			tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
		END_IF
		
	END_IF

END_ACTION
