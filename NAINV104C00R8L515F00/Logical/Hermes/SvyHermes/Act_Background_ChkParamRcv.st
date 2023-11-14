(** 2021-08-01 **)
ACTION Act_Background_ChkParamRcv:
	
	IF eStatus2 <> Error THEN
		
		//Check Parameter Receive
		IF tyMsgTypeRcv.bSServiceDescription = TRUE THEN
			udiStatus2	:= fHermesChkParamSSD(tySServiceDescriptionRcv);
			
			IF udiStatus2 = 2731 THEN
				udiStatus2	:= 0;
			END_IF
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				
				IF udiStatus2 = 2719 THEN
					udiStatus2	:= 10087;	//SystemId Missing While Checking Service Description
               	ELSIF udiStatus2 = 2730 THEN
					udiStatus2	:= 10088;	//Version Missing While Checking Service Description
				ELSIF udiStatus2 = 2731 THEN
					udiStatus2	:= 10089;	//SupportedFeatures Missing While Checking Service Description
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
		
		IF tyMsgTypeRcv.bNotification = TRUE THEN
			udiStatus2	:= fHermesChkParamN(tyNotificationRcv);
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2732 THEN
					udiStatus2	:= 10092;	//NotificationCode Out Of Range While Checking Notification
				ELSIF udiStatus2 = 2733 THEN
					udiStatus2	:= 10093;	//NotificationCode Missing While Checking Notification
				ELSIF udiStatus2 = 2734 THEN
					udiStatus2	:= 10094;	//Severity Missing While Checking Notification
				ELSIF udiStatus2 = 2735 THEN
					udiStatus2	:= 10095;	//Description Missing While Checking Notification
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
		
	
		
	END_IF

END_ACTION
