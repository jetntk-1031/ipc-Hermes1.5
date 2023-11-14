(** 2023-08-01 **)
ACTION Act_Background_BoardForecast:

	//Process BoardForecast(Id) or BoardForecast()
	bFeatureBoardForecast := (p_tyParam.bFeatureBoardForecast = TRUE) AND (tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureBoardForecast = TRUE);
	
	
	IF bFeatureBoardForecast THEN //if board forecast check message receive
		bBrdForecastRcv := tyMsgTypeRcv.bBoardForecast;
		
		IF tyMsgTypeRcv.bBoardForecast AND tyBoardForecastRcv.tyData.sForecastId <> '' AND bProcessBoardForecastId = FALSE  AND bBFAccDataReq = FALSE AND bManuallInsertLastZone = FALSE THEN
			bProcessBoardForecastId := TRUE; //Process BoardForecast(Id)
			tyBoardForecastAcc := tyBoardForecastRcv; //capture to process that particular BF
			tyMsgTypeRcv.bBoardForecast := FALSE;
			
		ELSIF tyMsgTypeRcv.bBoardForecast AND tyBoardForecastRcv.tyData.sForecastId = '' AND bProcessBoardForecastId = FALSE THEN //Process BoardForecast()
			tyBoardForecastAcc := tyBoardForecastRcv;
			tyMsgTypeRcv.bBoardForecast := FALSE;
		END_IF
	ELSE
		bProcessBoardForecastId := FALSE;
	END_IF
	
	
	

	//BF Check
//	IF eStatus2 <> Error THEN
//	
//		IF bProcessBoardForecastId AND bNotAvlNotRdy AND (bTransporting = FALSE) AND (p_bOpsRun = TRUE) THEN 
//
//			bBFAccDataReq		:= FALSE;
//			bBFBlkUS			:= FALSE;
//			bBFOverWriteSlt  	:= FALSE;
//			bBFOverWriteWidth	:= FALSE;
//		
//			IF p_tyParam.bCmpTypeId = TRUE THEN	//"Compare Type ID" Ticked
//			
//				IF tyBoardForecastAcc.tyAvl.bProductTypeId = TRUE THEN	//Check if there is Product Type Id in B.F msg
//				
//					IF tyBoardForecastAcc.tyData.sProductTypeId <> p_sRecipeNm THEN	//Product Type Id Different
//
//						bBFAccDataReq	:= TRUE;	//Require To Load New Recipe
//						bBFBlkUS		:= TRUE;
//					
//						sReqRecipeNm	:= tyBoardForecastAcc.tyData.sProductTypeId;
//						diReqWidthInUM	:= REAL_TO_DINT(tyBoardForecastAcc.tyData.rWidth * 1000);
//
//					ELSE	//Product Type Id Same (After accepted or Originally same)
//
//						IF p_tyParam.bCmpParam = TRUE THEN	//"Compare Param" Ticked
//							IF tyBoardForecastAcc.tyAvl.bThickness AND tyBoardForecastAcc.tyAvl.bTopClearanceHeight AND tyBoardForecastAcc.tyAvl.bBottomClearanceHeight AND p_bBFSltEn THEN	//Camparing Slot Parameters if p_bBFSltEn = TRUE
//								udiStatus2	:= fHermesCmpSlt(tyBoardForecastAcc.tyData.eFlippedBoard , tyBoardForecastAcc.tyData.rThickness , tyBoardForecastAcc.tyData.rTopClearanceHeight , tyBoardForecastAcc.tyData.rBottomClearanceHeight , p_diMinSltValue , p_diMaxSltValue , p_diPitch , p_diSltToSltInUM , p_diTtlSlt);
//							
//								IF udiStatus2 <> 0 THEN
//							
//									bBFBlkUS		:= TRUE;
//									bProcessBoardForecastId := FALSE;//add
//									eStatus2	:= Error;
//								
//									IF udiStatus2 = 2914 THEN
//										udiStatus2	:= 10108;	//Input First Slot Is Invalid
//									ELSIF udiStatus2 = 2915 THEN
//										udiStatus2	:= 10109;	//Input Last Slot Is Invalid
//									ELSIF udiStatus2 = 2916 THEN
//										udiStatus2	:= 10110;	//Input Pitch Is Invalid
//									ELSIF udiStatus2 = 2917 THEN
//										udiStatus2	:= 10111;	//Input Slot To Slot Distance Is Invalid
//									ELSIF udiStatus2 = 2918 THEN
//										udiStatus2	:= 10112;	//Input Total Slot Is Invalid
//									ELSIF udiStatus2 = 2919 THEN
//										udiStatus2	:= 10113;	//Input Thickness Is Invalid
//									ELSIF udiStatus2 = 2920 THEN
//										udiStatus2	:= 10114;	//Input Top Clearance Height Is Invalid
//									ELSIF udiStatus2 = 2921 THEN
//										udiStatus2	:= 10115;	//Input Bottom Clearance Height Is Invalid
//									ELSIF udiStatus2 = 2922 THEN
//										udiStatus2	:= 10116;	//Recipe First Slot Value & Board Available Data Not Match With Same Product Type Id
//									ELSIF udiStatus2 = 2923 THEN
//										udiStatus2	:= 10117;	//Recipe Last Slot Value & Board Available Data Not Match With Same Product Type Id
//									ELSIF udiStatus2 = 2924 THEN
//										udiStatus2	:= 10118;	//Recipe Pitch Value & Board Available Data Not Match With Same Product Type Id
//									END_IF
//				
//									fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
//			
//									tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
//									tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
//									tyNotificationSnd.tyAvl.bDescription		:= TRUE;
//									tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
//									tyNotificationSnd.tyData.iNotificationCode	:= 6; //BoardForecast Error
//									tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
//			
//								END_IF
//							END_IF
//						
//							IF tyBoardForecastAcc.tyAvl.bWidth AND p_bBFWidthEn THEN	//Comparing Width Parameter if p_bBFWidthEn = TRUE
//								IF REAL_TO_DINT(tyBoardForecastAcc.tyData.rWidth * 1000) <> p_diWidthInUM THEN
//								
//									bBFBlkUS	:= TRUE;
//									bProcessBoardForecastId := FALSE;//add
//									eStatus2	:= Error;
//									udiStatus2	:= 10119;	//Width Different With Same Product Type Id
//				
//									fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
//			
//									tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
//									tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
//									tyNotificationSnd.tyAvl.bDescription		:= TRUE;
//									tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
//									tyNotificationSnd.tyData.iNotificationCode	:= 6; //BoardForecast Error
//									tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
//								ELSE
//									bReplyMcRdyId           := TRUE; //add
//									bProcessBoardForecastId := FALSE; //add
//								END_IF
//							END_IF
//			
//						END_IF
//					
//					END_IF
//				
//				ELSE
//				
//					eStatus2	:= Error;
//					udiStatus2	:= 10158;	//Product Type Id Not Receive From Upstream
//					bProcessBoardForecastId := FALSE;//add
//				
//					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
//		
//					tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
//					tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
//					tyNotificationSnd.tyAvl.bDescription		:= TRUE;
//					tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError; 
//					tyNotificationSnd.tyData.iNotificationCode	:= 6; //BoardForecast Error
//					tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
//			
//				END_IF
//			
//			ELSE	//"Compare Type ID" Not Ticked
//			
//				IF p_tyParam.bOverwrite THEN	//"Overwrite" Ticked
//				
//					IF tyBoardForecastAcc.tyAvl.bThickness AND tyBoardForecastAcc.tyAvl.bTopClearanceHeight AND tyBoardForecastAcc.tyAvl.bBottomClearanceHeight AND p_bBFSltEn THEN	//Camparing Slot Parameters
//					
//						udiStatus2	:= fHermesCmpSlt(tyBoardForecastAcc.tyData.eFlippedBoard , tyBoardForecastAcc.tyData.rThickness , tyBoardForecastAcc.tyData.rTopClearanceHeight , tyBoardForecastAcc.tyData.rBottomClearanceHeight , p_diMinSltValue , p_diMaxSltValue , p_diPitch , p_diSltToSltInUM , p_diTtlSlt);
//					
//						IF udiStatus2 <> 0 THEN
//						
//							bBFAccDataReq		:= TRUE;
//							bBFBlkUS			:= TRUE;
//							bBFOverWriteSlt	    := TRUE;
//						
//							fbGetSlt.eFlippedBrd				:= tyBoardForecastAcc.tyData.eFlippedBoard;
//							fbGetSlt.rThicknessInMM				:= tyBoardForecastAcc.tyData.rThickness;
//							fbGetSlt.rTopClearanceHeightInMM	:= tyBoardForecastAcc.tyData.rTopClearanceHeight;
//							fbGetSlt.rBtmClearanceHeightInMM	:= tyBoardForecastAcc.tyData.rBottomClearanceHeight;
//							fbGetSlt.diSltToSltInUM				:= p_diSltToSltInUM;
//							fbGetSlt.diTtlSlt					:= p_diTtlSlt;
//							fbGetSlt;
//						
//							diReqMinSltValue	:= fbGetSlt.diMinSltValue;
//							diReqMaxSltValue	:= fbGetSlt.diMaxSltValue;
//							diReqPitch			:= fbGetSlt.diPitch;
//						
//						END_IF
//					
//					END_IF
//					
//					IF tyBoardForecastAcc.tyAvl.bWidth AND p_bBFWidthEn THEN	//Comparing Width Parameter
//						IF REAL_TO_DINT(tyBoardForecastAcc.tyData.rWidth * 1000) <> p_diWidthInUM THEN
//						
//							bBFAccDataReq		:= TRUE;
//							bBFBlkUS			:= TRUE;
//							bBFOverWriteWidth	:= TRUE;
//						
//							diReqWidthInUM	:= REAL_TO_DINT(tyBoardForecastAcc.tyData.rWidth * 1000);
//						ELSE
//							bReplyMcRdyId           := TRUE; //add
//							bProcessBoardForecastId := FALSE; //add
//						END_IF
//					END_IF
//					
//				ELSE	//"Compare Type ID" Not Ticked and "Overwrite" Not Ticked, Error if not same
//				
//					IF tyBoardForecastAcc.tyAvl.bThickness AND tyBoardForecastAcc.tyAvl.bTopClearanceHeight AND tyBoardForecastAcc.tyAvl.bBottomClearanceHeight AND p_bBFSltEn AND p_bRdyRcv THEN	//Camparing Slot Parameters
//						udiStatus2	:= fHermesCmpSlt(tyBoardForecastAcc.tyData.eFlippedBoard , tyBoardForecastAcc.tyData.rThickness , tyBoardForecastAcc.tyData.rTopClearanceHeight , tyBoardForecastAcc.tyData.rBottomClearanceHeight , p_diMinSltValue , p_diMaxSltValue , p_diPitch , p_diSltToSltInUM , p_diTtlSlt);
//					
//						IF udiStatus2 <> 0 THEN
//						
//							bBFBlkUS		:= TRUE;
//							bProcessBoardForecastId := FALSE;//add
//							eStatus2	:= Error;
//						
//							IF udiStatus2 = 2914 THEN
//								udiStatus2	:= 10120;	//Input First Slot Is Invalid
//							ELSIF udiStatus2 = 2915 THEN
//								udiStatus2	:= 10121;	//Input Last Slot Is Invalid
//							ELSIF udiStatus2 = 2916 THEN
//								udiStatus2	:= 10122;	//Input Pitch Is Invalid
//							ELSIF udiStatus2 = 2917 THEN
//								udiStatus2	:= 10123;	//Input Slot To Slot Distance Is Invalid
//							ELSIF udiStatus2 = 2918 THEN
//								udiStatus2	:= 10124;	//Input Total Slot Is Invalid
//							ELSIF udiStatus2 = 2919 THEN
//								udiStatus2	:= 10125;	//Input Thickness Is Invalid
//							ELSIF udiStatus2 = 2920 THEN
//								udiStatus2	:= 10126;	//Input Top Clearance Height Is Invalid
//							ELSIF udiStatus2 = 2921 THEN
//								udiStatus2	:= 10127;	//Input Bottom Clearance Height Is Invalid
//							ELSIF udiStatus2 = 2922 THEN
//								udiStatus2	:= 10128;	//Recipe First Slot Value & Board Available Data Not Match With Same Product Type Id
//							ELSIF udiStatus2 = 2923 THEN
//								udiStatus2	:= 10129;	//Recipe Last Slot Value & Board Available Data Not Match With Same Product Type Id
//							ELSIF udiStatus2 = 2924 THEN
//								udiStatus2	:= 10130;	//Recipe Pitch Value & Board Available Data Not Match With Same Product Type Id
//							END_IF
//			
//							fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
//		
//							tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
//							tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
//							tyNotificationSnd.tyAvl.bDescription		:= TRUE;
//							tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
//							tyNotificationSnd.tyData.iNotificationCode	:= 6; //BoardForecast Error
//							tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
//		
//						END_IF
//					END_IF
//				
//					IF tyBoardForecastAcc.tyAvl.bWidth AND p_bBFWidthEn AND p_bRdyRcv THEN	//Comparing Width Parameter
//						IF REAL_TO_DINT(tyBoardForecastAcc.tyData.rWidth * 1000) <> p_diWidthInUM THEN
//						
//							bBFBlkUS		:= TRUE;
//							bProcessBoardForecastId := FALSE;//add
//							eStatus2	:= Error;
//							udiStatus2	:= 10131;	//Width Different With Same Product Type Id
//			
//							fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
//		
//							tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
//							tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
//							tyNotificationSnd.tyAvl.bDescription		:= TRUE;
//							tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError;
//							tyNotificationSnd.tyData.iNotificationCode	:= 6; //BoardForecast Error
//							tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
//						ELSE
//							bReplyMcRdyId           := TRUE; //add
//							bProcessBoardForecastId := FALSE; //add
//						END_IF
//					END_IF
//				
//				END_IF
//			
//			END_IF
//		
//		
//		
//		ELSIF bProcessBoardForecastId = FALSE OR bNotAvlNotRdy =FALSE OR bTransporting = TRUE THEN
//		
//			bBFAccDataReq		:= FALSE;
//			bBFBlkUS			:= FALSE;
//			bBFOverWriteSlt	    := FALSE;
//			bBFOverWriteWidth	:= FALSE;
//		
//		END_IF
//	
//	ELSE
//	
//		bBFAccDataReq		:= FALSE;
//		bBFBlkUS			:= TRUE;
//		bBFOverWriteSlt	    := FALSE;
//		bBFOverWriteWidth	:= FALSE;
//	
//	END_IF

END_ACTION
	
