(** 2021-08-01 **)
ACTION Act_Background_SendBoardInfo:
	// back-up to array when finished transport 
	
	IF NOT(tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo = TRUE AND p_tyParam.bFeatureSendBoardInfo AND bHandshakeDone) THEN
		bSearchTop := FALSE;
		bSearchBottom := FALSE;
		siTopBarcodeIdx := -1;
		siBottomBarcodeIdx := -1;
		siFoundIdx	:= -1;
	ELSE
		IF eStatus2  <> Error THEN
			//search 
			IF tyMsgTypeRcv.bQueryBoardInfo THEN
				tyMsgTypeRcv.bQueryBoardInfo := FALSE;

				bSearchTop := tyQueryBoardInfo.tyData.sTopBarcode <> '';
				bSearchBottom := tyQueryBoardInfo.tyData.sBottomBarcode <> '';
		
				siTopBarcodeIdx := -1;
				siBottomBarcodeIdx := -1;
				FOR siSearhIdx := 0 TO SIZEOF(a_tyBoardDepartedInfo)/SIZEOF(a_tyBoardDepartedInfo[0])-1 DO
					IF bSearchTop THEN
						IF memcmp(ADR(tyQueryBoardInfo.tyData.sTopBarcode),
							ADR(a_tyBoardDepartedInfo[0].tyData.sTopBarcode)+siSearhIdx*SIZEOF(a_tyBoardDepartedInfo[0]),
							SIZEOF(tyQueryBoardInfo.tyData.sTopBarcode)) = 0 THEN
								siTopBarcodeIdx	:= siSearhIdx;
						END_IF 
					END_IF
					
					IF bSearchBottom THEN
						IF memcmp(ADR(tyQueryBoardInfo.tyData.sBottomBarcode),
							ADR(a_tyBoardDepartedInfo[0].tyData.sBottomBarcode)+siSearhIdx*SIZEOF(a_tyBoardDepartedInfo[0]),
							SIZEOF(tyQueryBoardInfo.tyData.sBottomBarcode)) = 0 THEN
								siBottomBarcodeIdx := siSearhIdx;
						END_IF 
					END_IF
					
					IF (NOT(bSearchTop) OR ( bSearchTop AND siTopBarcodeIdx <> -1 ) ) AND
						(NOT(bSearchBottom) OR( bSearchBottom AND siBottomBarcodeIdx <> -1 ))THEN
						EXIT;
					END_IF
				END_FOR 
				
				 	
				bCompleteSearch 	:= NOT(bSearchTop AND siTopBarcodeIdx =  -1)
										AND NOT(bSearchBottom AND siBottomBarcodeIdx = -1) 
										AND NOT(bSearchTop AND bSearchBottom AND siTopBarcodeIdx <> siBottomBarcodeIdx );
				IF bCompleteSearch THEN
					IF siTopBarcodeIdx <> -1 THEN
						siFoundIdx := siTopBarcodeIdx;
					ELSIF siBottomBarcodeIdx <> -1 THEN
						siFoundIdx := siBottomBarcodeIdx;
					END_IF
					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeSendBoardInfo);
		
					tySendBoardInfo.tyData.sBoardId                     := a_tyBoardDepartedInfo[siFoundIdx].tyData.sBoardId;			
					tySendBoardInfo.tyData.sBoardIdCreatedBy            := a_tyBoardDepartedInfo[siFoundIdx].tyData.sBoardIdCreatedBy;			
					tySendBoardInfo.tyData.eFailedBoard 		    	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.eFailedBoard;			
					tySendBoardInfo.tyData.sProductTypeId 			    := a_tyBoardDepartedInfo[siFoundIdx].tyData.sProductTypeId;	 //current recipe0 name			
					tySendBoardInfo.tyData.eFlippedBoard 		    	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.eFlippedBoard;			
					tySendBoardInfo.tyData.sTopBarcode 		        	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.sTopBarcode;			
					tySendBoardInfo.tyData.sBottomBarcode 		    	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.sBottomBarcode;			
					tySendBoardInfo.tyData.rLength 			        	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.rLength;			
					tySendBoardInfo.tyData.rWidth 			        	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.rWidth;	//current recipe 0 width			
					tySendBoardInfo.tyData.rThickness 		        	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.rThickness;				
					tySendBoardInfo.tyData.rTopClearanceHeight 	    	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.rTopClearanceHeight;			
					tySendBoardInfo.tyData.rBottomClearanceHeight 	    := a_tyBoardDepartedInfo[siFoundIdx].tyData.rBottomClearanceHeight;	
					tySendBoardInfo.tyData.rWeight 			        	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.rWeight;			
					tySendBoardInfo.tyData.sWorkOrderId 		    	:= a_tyBoardDepartedInfo[siFoundIdx].tyData.sWorkOrderId;				

					tySendBoardInfo.tyAvl.bBoardId 				        := tySendBoardInfo.tyData.sBoardId <> '';			
					tySendBoardInfo.tyAvl.bBoardIdCreatedBy 	        := tySendBoardInfo.tyData.sBoardIdCreatedBy <> '';			
					tySendBoardInfo.tyAvl.bFailedBoard 			        := TRUE;			
					tySendBoardInfo.tyAvl.bProductTypeId 		    	:= tySendBoardInfo.tyData.sProductTypeId <> '';			
					tySendBoardInfo.tyAvl.bFlippedBoard 		        := TRUE;			
					tySendBoardInfo.tyAvl.bTopBarcode 		    	    := tySendBoardInfo.tyData.sTopBarcode <> '';			
					tySendBoardInfo.tyAvl.bBottomBarcode 		    	:= tySendBoardInfo.tyData.sBottomBarcode <> '';			
					tySendBoardInfo.tyAvl.bLength 			        	:= tySendBoardInfo.tyData.rLength <> 0;		
					tySendBoardInfo.tyAvl.bWidth						:= tySendBoardInfo.tyData.rWidth <> 0;	
					tySendBoardInfo.tyAvl.bThickness 		        	:= tySendBoardInfo.tyData.rThickness <> 0;						
					tySendBoardInfo.tyAvl.bTopClearanceHeight 	    	:= tySendBoardInfo.tyData.rTopClearanceHeight <> 0;			
					tySendBoardInfo.tyAvl.bBottomClearanceHeight 	    := tySendBoardInfo.tyData.rBottomClearanceHeight <> 0;	
					tySendBoardInfo.tyAvl.bWeight 			        	:= tySendBoardInfo.tyData.rWeight <> 0;			
					tySendBoardInfo.tyAvl.bWorkOrderId 		        	:= tySendBoardInfo.tyData.sWorkOrderId <> '';
					
				ELSE
					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeSendBoardInfo);

					tySendBoardInfo.tyData.sBoardId                     := '';			
					tySendBoardInfo.tyData.sBoardIdCreatedBy            := '';			
					tySendBoardInfo.tyData.eFailedBoard 		    	:= HermesUnknownBoard;			
					tySendBoardInfo.tyData.sProductTypeId 			    := '';
					tySendBoardInfo.tyData.eFlippedBoard 		    	:= HermesFlippedBoardUnknownSide;			
					tySendBoardInfo.tyData.sTopBarcode 		        	:= tyQueryBoardInfo.tyData.sTopBarcode;			
					tySendBoardInfo.tyData.sBottomBarcode 		    	:= tyQueryBoardInfo.tyData.sBottomBarcode;			
					tySendBoardInfo.tyData.rLength 			        	:= 0;			
					tySendBoardInfo.tyData.rWidth 			        	:= 0;		
					tySendBoardInfo.tyData.rThickness 		        	:= 0;				
					tySendBoardInfo.tyData.rTopClearanceHeight 	    	:= 0;			
					tySendBoardInfo.tyData.rBottomClearanceHeight 	    := 0;	
					tySendBoardInfo.tyData.rWeight 			        	:= 0;			
					tySendBoardInfo.tyData.sWorkOrderId 		    	:= '';
					tySendBoardInfo.tyData.sBatchId      		    	:= '';

					tySendBoardInfo.tyAvl.bBoardId 				        := tySendBoardInfo.tyData.sBoardId <> '';			
					tySendBoardInfo.tyAvl.bBoardIdCreatedBy 	        := tySendBoardInfo.tyData.sBoardIdCreatedBy <> '';			
					tySendBoardInfo.tyAvl.bFailedBoard 			        := FALSE; //no need send			
					tySendBoardInfo.tyAvl.bProductTypeId 		    	:= tySendBoardInfo.tyData.sProductTypeId <> '';			
					tySendBoardInfo.tyAvl.bFlippedBoard 	    	    := FALSE; //no need send			
					tySendBoardInfo.tyAvl.bTopBarcode 		        	:= tySendBoardInfo.tyData.sTopBarcode <> '';			
					tySendBoardInfo.tyAvl.bBottomBarcode 	    		:= tySendBoardInfo.tyData.sBottomBarcode <> '';			
					tySendBoardInfo.tyAvl.bLength 			        	:= tySendBoardInfo.tyData.rLength <> 0;			
					tySendBoardInfo.tyAvl.bWidth 			        	:= tySendBoardInfo.tyData.rWidth <> 0;			
					tySendBoardInfo.tyAvl.bThickness 		        	:= tySendBoardInfo.tyData.rThickness <> 0;						
					tySendBoardInfo.tyAvl.bTopClearanceHeight 	    	:= tySendBoardInfo.tyData.rTopClearanceHeight <> 0;			
					tySendBoardInfo.tyAvl.bBottomClearanceHeight     	:= tySendBoardInfo.tyData.rBottomClearanceHeight <> 0;	
					tySendBoardInfo.tyAvl.bWeight 			        	:= tySendBoardInfo.tyData.rWeight <> 0;			
					tySendBoardInfo.tyAvl.bWorkOrderId 		        	:= tySendBoardInfo.tyData.sWorkOrderId <> '';
					tySendBoardInfo.tyAvl.bBatchId 		            	:= tySendBoardInfo.tyData.sBatchId <> '';
					
				END_IF
				
				
			END_IF
		END_IF
	END_IF
	//search
	
		
END_ACTION
