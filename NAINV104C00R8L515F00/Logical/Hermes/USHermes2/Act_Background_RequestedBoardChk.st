(** 2023-04-11 **)
ACTION Act_Background_RequestedBoardChk:

	IF eStatus2 <> Error  THEN
		bBoardChkReq := FALSE;
		memset(ADR(tyBoardAvailableReq),0,SIZEOF(tyBoardAvailableReq));
		IF bProcessBoardForecastId AND bNotAvlNotRdy  THEN //process boardforecast
			tyBoardAvailableReq.tyAvl.bProductTypeId	 		:= tyBoardForecastAcc.tyAvl.bProductTypeId;	
			tyBoardAvailableReq.tyData.sProductTypeId 			:= tyBoardForecastAcc.tyData.sProductTypeId	;
			tyBoardAvailableReq.tyAvl.bThickness 				:= tyBoardForecastAcc.tyAvl.bThickness;
			tyBoardAvailableReq.tyAvl.bWidth 					:= tyBoardForecastAcc.tyAvl.bWidth;
			tyBoardAvailableReq.tyData.rWidth 					:= tyBoardForecastAcc.tyData.rWidth;
			tyBoardAvailableReq.tyAvl.bTopClearanceHeight 		:= tyBoardForecastAcc.tyAvl.bTopClearanceHeight;
			tyBoardAvailableReq.tyAvl.bBottomClearanceHeight 	:= tyBoardForecastAcc.tyAvl.bBottomClearanceHeight;
			tyBoardAvailableReq.tyData.eFlippedBoard 			:= tyBoardForecastAcc.tyData.eFlippedBoard;
			tyBoardAvailableReq.tyData.rThickness 				:= tyBoardForecastAcc.tyData.rThickness;
			tyBoardAvailableReq.tyData.rTopClearanceHeight 		:= tyBoardForecastAcc.tyData.rTopClearanceHeight;
			tyBoardAvailableReq.tyData.rBottomClearanceHeight 	:= tyBoardForecastAcc.tyData.rBottomClearanceHeight;
			bBoardChkReq := TRUE;
		ELSIF  bRcvBoardInfoOk AND bManuallInsertLastZone THEN //process query board info
			tyBoardAvailableReq.tyAvl.bProductTypeId	 		:= tySendBoardInfoAcc.tyAvl.bProductTypeId;	
			tyBoardAvailableReq.tyData.sProductTypeId 			:= tySendBoardInfoAcc.tyData.sProductTypeId;	
			tyBoardAvailableReq.tyAvl.bThickness 				:= tySendBoardInfoAcc.tyAvl.bThickness;
			tyBoardAvailableReq.tyAvl.bWidth 					:= tySendBoardInfoAcc.tyAvl.bWidth;
			tyBoardAvailableReq.tyData.rWidth 					:= tySendBoardInfoAcc.tyData.rWidth;
			tyBoardAvailableReq.tyAvl.bTopClearanceHeight 		:= tySendBoardInfoAcc.tyAvl.bTopClearanceHeight;
			tyBoardAvailableReq.tyAvl.bBottomClearanceHeight 	:= tySendBoardInfoAcc.tyAvl.bBottomClearanceHeight;
			tyBoardAvailableReq.tyData.eFlippedBoard 			:= tySendBoardInfoAcc.tyData.eFlippedBoard;
			tyBoardAvailableReq.tyData.rThickness 				:= tySendBoardInfoAcc.tyData.rThickness;
			tyBoardAvailableReq.tyData.rTopClearanceHeight 		:= tySendBoardInfoAcc.tyData.rTopClearanceHeight;
			tyBoardAvailableReq.tyData.rBottomClearanceHeight 	:= tySendBoardInfoAcc.tyData.rBottomClearanceHeight;
			bBoardChkReq := TRUE;
		ELSIF p_bAccDataRdy THEN 
			memcpy(ADR(tyBoardAvailableReq),ADR(tyBoardAvailableRcv),SIZEOF(tyBoardAvailableRcv));
			bBoardChkReq := TRUE;
		END_IF
		//ADD
		IF bBoardChkReq AND (bTransporting = FALSE) AND (p_bOpsRun = TRUE) THEN    

			bAccDataReq		:= FALSE;
			bBABlkUS		:= FALSE;
			bOverWriteSlt	:= FALSE;
			bOverWriteWidth	:= FALSE;
		
			IF p_tyParam.bCmpTypeId = TRUE THEN	//"Compare Type ID" Ticked
				
				IF tyBoardAvailableReq.tyAvl.bProductTypeId = TRUE THEN	//Check if there is Product Type Id in B.A msg
					
					IF tyBoardAvailableReq.tyData.sProductTypeId <> p_sRecipeNm THEN	//Product Type Id Different
	
						bAccDataReq	    := TRUE;	//Require To Load New Recipe
						bBABlkUS		:= TRUE;
						
						sReqRecipeNm	:= tyBoardAvailableReq.tyData.sProductTypeId;
						diReqWidthInUM	:= REAL_TO_DINT(tyBoardAvailableReq.tyData.rWidth * 1000);
	
					ELSE	//Product Type Id Same (After accepted or Originally same)
	
						IF p_tyParam.bCmpParam = TRUE THEN	//"Compare Param" Ticked
							IF tyBoardAvailableReq.tyAvl.bThickness AND tyBoardAvailableReq.tyAvl.bTopClearanceHeight AND tyBoardAvailableReq.tyAvl.bBottomClearanceHeight AND p_bBASltEn THEN	//Camparing Slot Parameters if p_bBASltEn = TRUE
								udiStatus2	:= fHermesCmpSlt(tyBoardAvailableReq.tyData.eFlippedBoard , tyBoardAvailableReq.tyData.rThickness , tyBoardAvailableReq.tyData.rTopClearanceHeight , tyBoardAvailableReq.tyData.rBottomClearanceHeight , p_diMinSltValue , p_diMaxSltValue , p_diPitch , p_diSltToSltInUM , p_diTtlSlt);
								
								IF udiStatus2 <> 0 THEN
								
									bBABlkUS	:= TRUE;
									
									eStatus2	:= Error;
									
									IF udiStatus2 = 2914 THEN
										udiStatus2	:= 10108;	//Input First Slot Is Invalid
									ELSIF udiStatus2 = 2915 THEN
										udiStatus2	:= 10109;	//Input Last Slot Is Invalid
									ELSIF udiStatus2 = 2916 THEN
										udiStatus2	:= 10110;	//Input Pitch Is Invalid
									ELSIF udiStatus2 = 2917 THEN
										udiStatus2	:= 10111;	//Input Slot To Slot Distance Is Invalid
									ELSIF udiStatus2 = 2918 THEN
										udiStatus2	:= 10112;	//Input Total Slot Is Invalid
									ELSIF udiStatus2 = 2919 THEN
										udiStatus2	:= 10113;	//Input Thickness Is Invalid
									ELSIF udiStatus2 = 2920 THEN
										udiStatus2	:= 10114;	//Input Top Clearance Height Is Invalid
									ELSIF udiStatus2 = 2921 THEN
										udiStatus2	:= 10115;	//Input Bottom Clearance Height Is Invalid
									ELSIF udiStatus2 = 2922 THEN
										udiStatus2	:= 10116;	//Recipe First Slot Value & Board Available Data Not Match With Same Product Type Id
									ELSIF udiStatus2 = 2923 THEN
										udiStatus2	:= 10117;	//Recipe Last Slot Value & Board Available Data Not Match With Same Product Type Id
									ELSIF udiStatus2 = 2924 THEN
										udiStatus2	:= 10118;	//Recipe Pitch Value & Board Available Data Not Match With Same Product Type Id
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
							
							IF tyBoardAvailableReq.tyAvl.bWidth AND p_bBAWidthEn THEN	//Comparing Width Parameter if p_bBAWidthEn = TRUE
								IF REAL_TO_DINT(tyBoardAvailableReq.tyData.rWidth * 1000) <> p_diWidthInUM THEN
									
									bBABlkUS	:= TRUE;
									
									eStatus2	:= Error;
									udiStatus2	:= 10119;	//Width Different With Same Product Type Id
					
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
						
					END_IF
					
				ELSE
					
					eStatus2	:= Error;
					udiStatus2	:= 10158;	//Product Type Id Not Receive From Upstream
					
					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
					tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
					tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
					tyNotificationSnd.tyAvl.bDescription		:= TRUE;
					tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError; 
					tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
					tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
					
				END_IF
				
			ELSE	//"Compare Type ID" Not Ticked
				
				IF p_tyParam.bOverwrite THEN	//"Overwrite" Ticked
					
					IF tyBoardAvailableReq.tyAvl.bThickness AND tyBoardAvailableReq.tyAvl.bTopClearanceHeight AND tyBoardAvailableReq.tyAvl.bBottomClearanceHeight AND p_bBASltEn THEN	//Camparing Slot Parameters
						
						udiStatus2	:= fHermesCmpSlt(tyBoardAvailableReq.tyData.eFlippedBoard , tyBoardAvailableReq.tyData.rThickness , tyBoardAvailableReq.tyData.rTopClearanceHeight , tyBoardAvailableReq.tyData.rBottomClearanceHeight , p_diMinSltValue , p_diMaxSltValue , p_diPitch , p_diSltToSltInUM , p_diTtlSlt);
						
						IF udiStatus2 <> 0 THEN
							
							bAccDataReq		:= TRUE;
							bBABlkUS			:= TRUE;
							bOverWriteSlt	:= TRUE;
							
							fbGetSlt.eFlippedBrd				:= tyBoardAvailableReq.tyData.eFlippedBoard;
							fbGetSlt.rThicknessInMM				:= tyBoardAvailableReq.tyData.rThickness;
							fbGetSlt.rTopClearanceHeightInMM	:= tyBoardAvailableReq.tyData.rTopClearanceHeight;
							fbGetSlt.rBtmClearanceHeightInMM	:= tyBoardAvailableReq.tyData.rBottomClearanceHeight;
							fbGetSlt.diSltToSltInUM				:= p_diSltToSltInUM;
							fbGetSlt.diTtlSlt					:= p_diTtlSlt;
							fbGetSlt;
							
							diReqMinSltValue	:= fbGetSlt.diMinSltValue;
							diReqMaxSltValue	:= fbGetSlt.diMaxSltValue;
							diReqPitch			:= fbGetSlt.diPitch;
							
						END_IF
						
					END_IF
						
					IF tyBoardAvailableReq.tyAvl.bWidth  AND p_bBAWidthEn (*AND p_usiLinkProdRcpCurrRcpMcMod = 0*) THEN	//Comparing Width Parameter
						IF REAL_TO_DINT(tyBoardAvailableReq.tyData.rWidth * 1000) <> p_diWidthInUM THEN
							
							bAccDataReq		:= TRUE;
							bBABlkUS			:= TRUE;
							bOverWriteWidth	:= TRUE;
							
							diReqWidthInUM	:= REAL_TO_DINT(tyBoardAvailableReq.tyData.rWidth * 1000);

						END_IF
					END_IF
						
				ELSE	//"Compare Type ID" Not Ticked and "Overwrite" Not Ticked, Error if not same
					
					IF tyBoardAvailableReq.tyAvl.bThickness AND tyBoardAvailableReq.tyAvl.bTopClearanceHeight AND tyBoardAvailableReq.tyAvl.bBottomClearanceHeight AND p_bBASltEn AND p_bRdyRcv THEN	//Camparing Slot Parameters
						udiStatus2	:= fHermesCmpSlt(tyBoardAvailableReq.tyData.eFlippedBoard , tyBoardAvailableReq.tyData.rThickness , tyBoardAvailableReq.tyData.rTopClearanceHeight , tyBoardAvailableReq.tyData.rBottomClearanceHeight , p_diMinSltValue , p_diMaxSltValue , p_diPitch , p_diSltToSltInUM , p_diTtlSlt);
						
						IF udiStatus2 <> 0 THEN
							
							bBABlkUS		:= TRUE;
							
							eStatus2	:= Error;
							
							IF udiStatus2 = 2914 THEN
								udiStatus2	:= 10120;	//Input First Slot Is Invalid
							ELSIF udiStatus2 = 2915 THEN
								udiStatus2	:= 10121;	//Input Last Slot Is Invalid
							ELSIF udiStatus2 = 2916 THEN
								udiStatus2	:= 10122;	//Input Pitch Is Invalid
							ELSIF udiStatus2 = 2917 THEN
								udiStatus2	:= 10123;	//Input Slot To Slot Distance Is Invalid
							ELSIF udiStatus2 = 2918 THEN
								udiStatus2	:= 10124;	//Input Total Slot Is Invalid
							ELSIF udiStatus2 = 2919 THEN
								udiStatus2	:= 10125;	//Input Thickness Is Invalid
							ELSIF udiStatus2 = 2920 THEN
								udiStatus2	:= 10126;	//Input Top Clearance Height Is Invalid
							ELSIF udiStatus2 = 2921 THEN
								udiStatus2	:= 10127;	//Input Bottom Clearance Height Is Invalid
							ELSIF udiStatus2 = 2922 THEN
								udiStatus2	:= 10128;	//Recipe First Slot Value & Board Available Data Not Match With Same Product Type Id
							ELSIF udiStatus2 = 2923 THEN
								udiStatus2	:= 10129;	//Recipe Last Slot Value & Board Available Data Not Match With Same Product Type Id
							ELSIF udiStatus2 = 2924 THEN
								udiStatus2	:= 10130;	//Recipe Pitch Value & Board Available Data Not Match With Same Product Type Id
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
					
					IF tyBoardAvailableReq.tyAvl.bWidth AND p_bBAWidthEn AND p_bRdyRcv THEN	//Comparing Width Parameter
						IF REAL_TO_DINT(tyBoardAvailableReq.tyData.rWidth * 1000) <> p_diWidthInUM THEN
							
							bBABlkUS		:= TRUE;
							
							eStatus2	:= Error;
							udiStatus2	:= 10131;	//Width Different With Same Product Type Id
				
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
				
			END_IF
			                                                       //Add
		ELSIF NOT(bBoardChkReq) OR bTransporting = TRUE THEN //AND p_bUIInsertBrdPrep = FALSE THEN
			
			bAccDataReq		:= FALSE;
			bBABlkUS		:= FALSE;
			bOverWriteSlt	:= FALSE;
			bOverWriteWidth	:= FALSE;
			
		END_IF

		//reset bProcessBoardForecastId
		IF bProcessBoardForecastId = TRUE AND bBoardChkReq AND (bTransporting = FALSE) AND (p_bOpsRun = TRUE) THEN //reset condition
			IF bBABlkUS = FALSE OR  (bBFBlkUS AND eStatus2 = Error) THEN
				IF eStatus2 <> Error THEN
					bReplyMcRdyId := TRUE; 	
				END_IF
				bProcessBoardForecastId := FALSE;
			END_IF
		END_IF	
		
	ELSE
		
		bAccDataReq		:= FALSE;
		bBABlkUS		:= TRUE;
		bOverWriteSlt	:= FALSE;
		bOverWriteWidth	:= FALSE;
		bBoardChkReq  := FALSE;
	END_IF

END_ACTION
