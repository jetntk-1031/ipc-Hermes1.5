(** 2019-05-04 **)
ACTION Act_Background_ChgConfig:
	
	IF eStatus2 <> Error THEN
		
		IF (tyParamOld.iLaneID <> p_tyParam.iLaneID) OR (tyParamOld.sHostAddress <> p_tyParam.sHostAddress) OR (tyParamOld.uiHostPort <> p_tyParam.uiHostPort) 
			OR (tyParamOld.bFeatureBoardForecast <> p_tyParam.bFeatureBoardForecast) OR (tyParamOld.bFeatureCheckAliveResponse <> p_tyParam.bFeatureCheckAliveResponse) OR (tyParamOld.bFeatureQueryBoardInfo <> p_tyParam.bFeatureQueryBoardInfo) 
			OR (tyParamOld.bFeatureCommand <> p_tyParam.bFeatureCommand)
			THEN
			
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
			tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
			tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
			tyNotificationSnd.tyAvl.bDescription		:= TRUE;
			tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
			tyNotificationSnd.tyData.iNotificationCode	:= 3;
			tyNotificationSnd.tyData.sDescription		:= 'Configuration Changed';
			
			bRstConnection	:= TRUE;
			
		END_IF
		
	END_IF

END_ACTION
