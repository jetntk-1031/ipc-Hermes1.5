(** 2021-08-01 **)
ACTION Act_Background_SequenceTO:
	
	IF (eStatus1 <> Error) AND (eStatus2 <> Error) THEN
		
		//Time Out
		fbSequenceTO.eState				:= fbSequenceDS.eState;
		fbSequenceTO.tConnTimeOut		:= p_tConnTimeOut;
		fbSequenceTO.tTransportTimeOut	:= DINT_TO_TIME(p_diTransferInTO);
		fbSequenceTO(bEn := TRUE);
		
		IF fbSequenceTO.udiStatus > 0 AND fbSequenceTO.udiStatus < 65534 THEN
			
			IF fbSequenceTO.udiStatus = 2912 THEN
				eStatus1	:= Error;
				udiStatus1	:= 10106;	//Service Description Interchange Time Out
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
				tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus1);
				tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus1].sAlmText;
			
			ELSIF fbSequenceTO.udiStatus = 2913 THEN
				p_bSndIncompl	:= TRUE;
				
				eStatus2	:= Error;
				udiStatus2	:= 10107;	//Transport Time Out
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
				tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
				tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
			ELSE
				eStatus2	:= Error;
				udiStatus2	:= fbSequenceTO.udiStatus;
				
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
