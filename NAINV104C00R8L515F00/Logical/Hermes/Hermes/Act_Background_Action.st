(** 2021-08-01 **)
ACTION Act_Background_Action:
	//Action function



	
	
//	In state Below
//	Zone    0 | 1 | 2
//	Brd    A | B | C
	
	//following action
	FOR usiZone := usiZoneSupported TO 1 BY -1 DO
		IF  NOT(a_bUIZonePause[usiZone]) THEN
			a_bBlkDSForAction[usiZone] := FALSE;
			a_bUIPromptActionSelect[usiZone] := FALSE;
		ELSE
			a_bBlkDSForAction[usiZone] := TRUE;
			IF EDGEPOS(a_bOpsDsStandByStep[usiZone]) THEN
				a_bUIPromptActionSelect[usiZone] := TRUE ;
			END_IF
			
			IF EDGENEG(a_bUIPromptActionSelect[usiZone])  THEN
				a_bUIZonePause[usiZone] := FALSE;
//				IF a_tyHermesBrdAvlData[usiZone].bNewBrdAvl THEN						
//					fHermesGenerateUUID(ADR(tyBoardAvailableGenerated.tyData.sBoardId) , p_tyDTStructure , pa_usiMacAddr);
//					tyBoardAvailableGenerated.tyData.sBoardIdCreatedBy        := p_sMcId; //Generate by our Machine
//					tyBoardAvailableGenerated.tyData.eFailedBoard				:= p_eFailedBoard;
//					tyBoardAvailableGenerated.tyData.sProductTypeId			:= p_sRecipeNm;
//					tyBoardAvailableGenerated.tyData.eFlippedBoard			:= p_eFlippedBoard;
//					tyBoardAvailableGenerated.tyData.sTopBarcode				:= p_sTopBarcode;
//					tyBoardAvailableGenerated.tyData.sBottomBarcode			:= p_sBottomBarcode;
//					tyBoardAvailableGenerated.tyData.rLength					:= p_rLength;
//					tyBoardAvailableGenerated.tyData.rWidth					:= DINT_TO_REAL(p_diWidthInUM) / 1000;
//					tyBoardAvailableGenerated.tyData.rThickness				:= p_rThickness;
//					tyBoardAvailableGenerated.tyData.rConveyorSpeed			:= p_rConveyorSpeed;
//					tyBoardAvailableGenerated.tyData.rTopClearanceHeight		:= p_rTopClearanceHeight;
//					tyBoardAvailableGenerated.tyData.rBottomClearanceHeight	:= p_rBottomClearanceHeight;
//					tyBoardAvailableGenerated.tyData.rWeight					:= p_rWeight;
//					tyBoardAvailableGenerated.tyData.sWorkOrderId			    := p_sWorkOrderId; 
//					tyBoardAvailableGenerated.tyData.sBatchId			        := p_sBatchId;
//				
//					tyBoardAvailableGenerated.tyAvl.bBoardId					:= tyBoardAvailableGenerated.tyData.sBoardId<>'';
//					tyBoardAvailableGenerated.tyAvl.bBoardIdCreatedBy			:= tyBoardAvailableGenerated.tyData.sBoardIdCreatedBy <> '';
//					tyBoardAvailableGenerated.tyAvl.bFailedBoard				:= TRUE;
//					tyBoardAvailableGenerated.tyAvl.bProductTypeId			:= tyBoardAvailableGenerated.tyData.sProductTypeId <> '';
//					tyBoardAvailableGenerated.tyAvl.bFlippedBoard				:= TRUE;
//					tyBoardAvailableGenerated.tyAvl.bTopBarcode				:= tyBoardAvailableGenerated.tyData.sTopBarcode <> '';
//					tyBoardAvailableGenerated.tyAvl.bBottomBarcode			:= tyBoardAvailableGenerated.tyData.sBottomBarcode <> '';
//					tyBoardAvailableGenerated.tyAvl.bLength					:= tyBoardAvailableGenerated.tyData.rLength <> 0;
//					tyBoardAvailableGenerated.tyAvl.bWidth					:= (tyBoardAvailableGenerated.tyData.rWidth <> 0) AND (p_bBAWidthEn = TRUE);
//					tyBoardAvailableGenerated.tyAvl.bThickness				:= (tyBoardAvailableGenerated.tyData.rThickness <> 0) AND (p_bBASltEn = TRUE);
//					tyBoardAvailableGenerated.tyAvl.bConveyorSpeed			:= tyBoardAvailableGenerated.tyData.rConveyorSpeed <> 0;
//					tyBoardAvailableGenerated.tyAvl.bTopClearanceHeight		:= (tyBoardAvailableGenerated.tyData.rTopClearanceHeight <> 0) AND (p_bBASltEn = TRUE);
//					tyBoardAvailableGenerated.tyAvl.bBottomClearanceHeight	:= (tyBoardAvailableGenerated.tyData.rBottomClearanceHeight <> 0) AND (p_bBASltEn = TRUE);
//					tyBoardAvailableGenerated.tyAvl.bWeight					:= tyBoardAvailableGenerated.tyData.rWeight <> 0;
//					tyBoardAvailableGenerated.tyAvl.bWorkOrderId				:= tyBoardAvailableGenerated.tyData.sWorkOrderId <> '';
//					tyBoardAvailableGenerated.tyAvl.bBatchId			    	:= tyBoardAvailableGenerated.tyData.sBatchId <> '';
//					
//					fHermesFormBoardAvailable(ADR(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl) , p_tyDTStructure , tyBoardAvailableGenerated);	
//				END_IF
				udiSelectedModtoUpt := a_eModSelectedforCurrZone[usiZone];
				FOR i := 0 TO 200 DO //search for the board action and update
					IF (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
						fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sValue);
						IF (sLowerCase = 'action') THEN
							IF a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
								a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sValue	:= UDINT_TO_STRING(udiSelectedModtoUpt) ; //if Action already in XMLTable
								EXIT;
							END_IF
						END_IF
					ELSIF (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sTitle = 'EN') AND (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'ST') THEN //with subboard tag
						fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sValue);
						IF (sLowerCase = 'subboards') THEN
							udiHermesAttributeEndIdx := i;
						END_IF
					ELSIF (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sTitle = 'ES') AND (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'ET') THEN //no subboard tag
						fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sValue);
						IF (sLowerCase = 'hermes') THEN
							udiHermesAttributeEndIdx := i;
						END_IF
					ELSIF (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sTitle = 'ET') AND (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'EN') THEN //very end
						fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sValue);
						IF (sLowerCase = 'hermes') THEN
							udiHermesBAEndIdx := i+1;
						END_IF
					END_IF
				END_FOR
				IF i = 201 THEN //if not found attibute action
					memcpy(ADR(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx])+SIZEOF(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[0])*2,
					ADR(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx]),
					(udiHermesBAEndIdx - udiHermesAttributeEndIdx)*SIZEOF(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[0]));
					a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].sTitle := 'AT';
					a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].sValue := 'Action';
					a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].uiSize := LEN(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].sValue);
					a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].sTitle := 'AV';
					a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].sValue := UDINT_TO_STRING(udiSelectedModtoUpt) ; 
					a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].uiSize := LEN(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].sValue);
				END_IF
			END_IF
		END_IF 

	END_FOR 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	FOR usiZone := usiZoneSupported TO 1 BY -1 DO
//		//update action to next zone only when current action complete
//		//a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[tyZonesReqedAction[usiZone].usiAttributeIndex].sValue	:= '0';
//		IF  a_bUIZonePause[usiZone] THEN
//			tyZonesReqedAction[usiZone].bBlkDsToDecideAct := TRUE;
//		END_IF 
//		IF tyZonesReqedAction[usiZone].bBlkDsToDecideAct AND bOpsPausedStep[usiZone] THEN
//			a_bUIPrompt[usiZone] := TRUE ;
//		END_IF
//		IF a_bModSelectedforDSZone[usiZone] THEN
//			tyZonesReqedAction[usiZone].bBlkDsToDecideAct := FALSE;
//			FOR i := 0 TO 200 DO //search for the board action and update
//				IF (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
//					fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sValue);
//					IF (sLowerCase = 'action') THEN
//						IF a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
//							a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sValue	= a_usiOpsModToUpdate[usiZone]; 
//						END_IF
//					END_IF
//				END_IF
//			END_FOR
//		END_IF
//		
//		
//		//
//		FOR usiZone := usiLeftmostBlockedZone TO usiZone BY -1 DO
//			//reset
//			IF EDGEPOS(p_bLinkOpsInitGConv1StepInitDone[usiZone]) AND p_bLinkOpsGConv1HvBrd[usiZone] = FALSE THEN
//				memset(ADR(tyZonesReqedAction[usiZone]),0,SIZEOF(tyZonesReqedAction[usiZone]));
//			END_IF 
//			//check available action zone
//			IF  EDGEPOS(p_bLinkOpsGConv1HvBrd[usiZone]) AND (p_bLinkOpsInitGConv1StepInitDone[usiZone] = TRUE) THEN //when board entering to corresponding zone
//				usiLeftmostBlockedZone := usiZone; //it block for all case
//				IF a_tyHermesBrdAvlData[usiZone].bNewBrdAvl THEN //if a unknown board skip searching
//					EXIT;
//				END_IF
//				FOR i := 0 TO 200 DO //search for the board action
//					IF (a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
//						fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sValue);
//						IF (sLowerCase = 'action') THEN
//							IF a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
//								IF a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sValue	= '0' THEN
//									EXIT;
//								ELSE
//									FOR iActionIndex := 1 TO SIZEOF(tbActionSupportedByZone[usiZone]) DO 
//										IF STRING_TO_UDINT(a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[i+1].sValue) =  tbActionSupportedByZone[usiZone][iActionIndex]  THEN
//											tyZonesReqedAction[usiZone].iAction := tbActionSupportedByZone[usiZone][iActionIndex]; //found support on this zone
//											tyZonesReqedAction[usiZone].usiAttributeIndex := i+1;
//										END_IF
//									END_FOR
//								END_IF
//							END_IF
//						END_IF
//					END_IF
//				END_FOR
//			END_IF
//			IF (p_bLinkOpsGConv1HvBrd[usiZone]) AND (p_bLinkOpsInitGConv1StepInitDone = TRUE) THEN
//				usiLeftmostBlockedZone := usiZone;
//			END_IF
//			
//			//monitor if the action is completed
//			IF tyZonesReqedAction[usiZone].iAction <> 0 AND tyZonesReqedAction[usiZone].bActionCompl THEN
//				a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[tyZonesReqedAction[usiZone].usiAttributeIndex].sValue	:= '0';
//			END_IF
//		END_FOR
//	END_FOR
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	

END_ACTION