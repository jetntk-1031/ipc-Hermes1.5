(** 2019-03-25 **)
ACTION Act_Background_ChkParamRcv:
	
	IF eStatus2 <> Error THEN
		
		//Check Parameter Receive
		IF tyMsgTypeRcv.bServiceDescription = TRUE THEN
			udiStatus2	:= fHermesChkParamSD(tyServiceDescriptionRcv , p_tyParam.iLaneID);
			
			IF udiStatus2 = 2731 THEN
				udiStatus2	:= 0;
			END_IF
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2726 THEN
					udiStatus2	:= 10086;	//LaneId Mismatch While Checking Service Description
				ELSIF udiStatus2 = 2727 THEN
					udiStatus2	:= 10087;	//MachineId Missing While Checking Service Description
				ELSIF udiStatus2 = 2728 THEN
					udiStatus2	:= 10088;	//LandId Out Of Range While Checking Service Description
				ELSIF udiStatus2 = 2729 THEN
					udiStatus2	:= 10089;	//LandId Missing While Checking Service Description
				ELSIF udiStatus2 = 2730 THEN
					udiStatus2	:= 10090;	//Version Missing While Checking Service Description
				ELSIF udiStatus2 = 2731 THEN
					udiStatus2	:= 10091;	//SupportedFeatures Missing While Checking Service Description
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
		
		IF tyMsgTypeRcv.bMachineReady = TRUE THEN
			udiStatus2	:= fHermesChkParamMR(tyMachineReady);
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2740 THEN
					udiStatus2	:= 10098;	//FailedBoard Missing While Checking Machine Ready
				END_IF
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
				tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
				tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
			END_IF
		END_IF
		
		IF tyMsgTypeRcv.bStartTransport = TRUE THEN
			udiStatus2	:= fHermesChkParamSAT(tyStartTransport);
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2745 THEN
					udiStatus2	:= 10101;	//BoardId Missing While Checking Start Transport
				END_IF
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
				tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
				tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
			END_IF
		END_IF
		
		IF tyMsgTypeRcv.bStopTransport = TRUE THEN
			udiStatus2	:= fHermesChkParamSOT(tyStopTransport);
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2742 THEN
					udiStatus2	:= 10099;	//TransferState Missing While Checking Stop Transport
				ELSIF udiStatus2 = 2743 THEN
					udiStatus2	:= 10100;	//BoardId Missing While Checking Stop Transport
				END_IF
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
				tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
				tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
			END_IF
		END_IF
		
		IF tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo = TRUE AND p_tyParam.bFeatureSendBoardInfo THEN
			IF tyMsgTypeRcv.bQueryBoardInfo = TRUE THEN
				udiStatus2	:= fHermesChkParamQBI(tyQueryBoardInfo);
			
				IF udiStatus2 <> 0 THEN
					eStatus2	:= Error;
				
					IF udiStatus2 = 2766 THEN
						udiStatus2	:= 10102;	//Barcode Missing While Checking Query Board Info
					END_IF
				
					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
					tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
					tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
					tyNotificationSnd.tyAvl.bDescription		:= TRUE;
					tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
					tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
					tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
					
		        	tyMsgTypeRcv.bQueryBoardInfo := FALSE; //reset, else will latching
				END_IF
			END_IF
		END_IF
		
		
		IF tyMsgTypeRcv.bCommand = TRUE THEN
			udiStatus2 := fHermesChkParamCommand(tyCommandRcv);
			
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				//				IF udiStatus2 = 2764 THEN
				//					udiStatus2	:= 10102;	//FailedBoard Missing While Checking Board Forecast
				//				
				//				ELSIF udiStatus2 = 2765 THEN
				//					udiStatus2	:= 10103;	//FlippedBoard Missing While Checking Board Forecast
				//				END_IF
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
				tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
				tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
				tyNotificationSnd.tyAvl.bDescription		:= TRUE;
				tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
				tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
				tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
			END_IF
			
			
		END_IF
	END_IF

END_ACTION
