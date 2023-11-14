(** 2021-08-01 **)
ACTION Act_Background_CmpParamRcv:
	
	IF eStatus2 <> Error THEN
		
		IF tyMsgTypeRcv.bStopTransport = TRUE THEN
			udiStatus2	:= fHermesChkParamSTST(tyStartTransport , tyStopTransport);
			
			IF udiStatus2 <> 0 THEN
				eStatus2	:= Error;
				
				IF udiStatus2 = 2712 THEN
					udiStatus2	:= 10104;	//BoardId Mismatch While Checking Start Transport & Stop Transport
				ELSIF udiStatus2 = 2713 THEN
					udiStatus2	:= 10105;	//BoardId Missing While Checking Start Transport & Stop Transport
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
		
		IF tyMsgTypeRcv.bStartTransport = TRUE THEN
			IF fHermesChkParamBAST(tyBoardAvailableSnd , tyStartTransport) <> 0 THEN
				p_bSndNotStart	:= TRUE;
			END_IF
		END_IF
		
		IF bFeatureBoardForecast THEN	//HermesMsgTypeBoardForecast
			IF fbSequenceDS.eState = HermesStateMachineReady   AND bSendBFId AND bBFIdSent THEN
				udiStatus2	:= fHermesChkParamBFMR(tyBoardForecastSnd , tyMachineReady); //Modify this if our machine need to Error when ForecastId in MachineReady(Id) received is different
	
				IF udiStatus2 <> 0 THEN //Alarm Info
					memset(ADR(sInfoMcRdyMsg),0,SIZEOF(sInfoMcRdyMsg));
					sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'Details mismatch between BoardForecast and MachineReady');
					sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , '$r$n');
					IF udiStatus2 = 2716 THEN 	//Forecast Id Mismatch While Checking BoardForecast & Machine Ready
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'ForecastID sent:');
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , tyBoardForecastSnd.tyData.sForecastId);
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , '$r$n');
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'ForecastID received:');
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , tyMachineReady.tyData.sForecastId);
					ELSIF udiStatus2 = 2717 THEN 	//Product Type Id Mismatch While Checking BoardForecast & Machine Ready
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'ProductType sent:');	
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , tyBoardForecastSnd.tyData.sProductTypeId);
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , '$r$n');
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'ProductType received:');
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , tyMachineReady.tyData.sProductTypeId);
					ELSIF udiStatus2 = 2718 THEN //Width Mismatch While Checking Board Forecast & Machine Ready
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'Width sent:');	
						sTempRealWidth := REAL_TO_STRING(tyBoardForecastSnd.tyData.rWidth);
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg ,sTempRealWidth );
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , '$r$n');
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'Width received:');
						sTempRealWidth := REAL_TO_STRING(tyMachineReady.tyData.rWidth);
						sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , sTempRealWidth);
					END_IF
					sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , '$r$n');
					sInfoMcRdyMsg := CONCAT(sInfoMcRdyMsg , 'Waiting New MachineReady or Ignore in:');

					
					tyInfoData.sProgNm		:= p_sProgNm;
					tyInfoData.udiCode		:= 10999;
					tyInfoData.eSeverity	:= AlmSeverityInfo;
					tyInfoData.sAlmMsg		:= sInfoMcRdyMsg;
			
				ELSE	
					bRstSendBFId := TRUE; //Reset bSendBFId if MachineReady(Id) or MachineReady() received is ok
				END_IF

			END_IF		
		END_IF

		
	END_IF

END_ACTION
