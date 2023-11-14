(** 2019-03-25 **)
ACTION Act_Background_CmpParamRcv:
	
	IF eStatus2 <> Error THEN
		
		IF tyMsgTypeRcv.bTransportFinished = TRUE THEN
			udiStatus2	:= fHermesChkParamSTTF(tyStartTransport , tyTransportFinished);
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2714 THEN
					udiStatus2	:= 10104;	//BoardId Mismatch While Checking Start Transport & Transport Finished
				ELSIF udiStatus2 = 2715 THEN
					udiStatus2	:= 10105;	//BoardId Missing While Checking Start Transport & Transport Finished
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
		
		//SendBoardInfo
		IF tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo = TRUE AND p_tyParam.bFeatureQueryBoardInfo THEN
			IF tyMsgTypeRcv.bSendBoardInfo = TRUE THEN //AND p_bQueryBoardInfo THEN
				udiStatus2	:= fHermesChkParamSBIQBI(tySendBoardInfoRcv , tyQueryBoardInfo);
			
				IF udiStatus2 <> 0 THEN
					eStatus2	:= Error;
				
					IF udiStatus2 = 2769 THEN
						udiStatus2	:= 10170;	//Top Barcode Mismatch While Checking SendBoardInfo & QueryBoardInfo
					ELSIF udiStatus2 = 2770 THEN
						udiStatus2	:= 10171;	//Top Barcode Missing While Checking SendBoardInfo & QueryBoardInfo
					ELSIF udiStatus2 = 2771 THEN
						udiStatus2	:= 10172;	//Bottom Barcode Mismatch While Checking SendBoardInfo & QueryBoardInfo
					ELSIF udiStatus2 = 2772 THEN
						udiStatus2	:= 10173;	//Bottom Barcode Missing While Checking SendBoardInfo & QueryBoardInfo
					END_IF
				
				
					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
					tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
					tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
					tyNotificationSnd.tyAvl.bDescription		:= TRUE;
					tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
					tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
					tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
					
					tyMsgTypeRcv.bSendBoardInfo := FALSE; //reset, else will latching
				END_IF
			END_IF
		END_IF		
	
		//check for route where reverse route, the board-id of forecast match with machine ready 
		fHermesChkParamBFMR(tyBoardForecastRcv , tyMachineReady);
		
	END_IF

END_ACTION
