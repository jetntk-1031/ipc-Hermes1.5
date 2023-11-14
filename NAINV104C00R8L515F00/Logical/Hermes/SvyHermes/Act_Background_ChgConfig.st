(** 2021-08-01 **)
ACTION Act_Background_ChgConfig:
	
	IF eStatus2 <> Error THEN
		
		IF (tyParamOld.uiSvySvstemPort <> p_tyParam.uiSvySvstemPort) 
			OR (tyParamOld.bFeatureBoardTracking <> p_tyParam.bFeatureBoardTracking) OR (tyParamOld.bFeatureCheckAliveResponse <> p_tyParam.bFeatureCheckAliveResponse) OR (tyParamOld.bFeatureConfiguration <> p_tyParam.bFeatureConfiguration) 
			OR (tyParamOld.bFeatureQueryWorkOrderInfo <> p_tyParam.bFeatureQueryWorkOrderInfo) (*OR (tyParamOld.bFeatureSendWorkOrderInfo <> p_tyParam.bFeatureSendWorkOrderInfo)*) THEN
			
			IF udiClntIdent <> 0 THEN
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
				
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
				tyNotificationSnd.tyData.iNotificationCode	:= 3;
				tyNotificationSnd.tyData.sDescription		:= 'Configuration Changed';
			
			END_IF
				
			bRstConnection	:= TRUE;
			
		END_IF
		
	END_IF

END_ACTION
