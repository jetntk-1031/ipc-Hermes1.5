 (** 2019-05-04 **)
ACTION Act_Background_Sequence:
	
	IF eStatus1 <> Error THEN
		
		IF p_bOpsRun = FALSE THEN
			p_bSndIncompl	:= TRUE;
		END_IF
		
		IF tyMsgTypeRcv.bStopTransport = TRUE THEN
			IF tyStopTransport.tyData.eTransferState = HermesTransferStateNotStarted THEN
				p_bSndNotStart	:= TRUE;
			ELSIF tyStopTransport.tyData.eTransferState = HermesTransferStateIncomplete THEN
				p_bSndIncompl	:= TRUE;
			END_IF
		END_IF
		
		bBlkDS := NOT(p_bHermesSwitchtoRvrseTransport);
		//Sequence
		fbSequenceDS.bRstState		:= bRstState;
		fbSequenceDS.bRdySnd		:= p_bRdySnd;
		fbSequenceDS.bBlkDS			:= bBlkDS;
		fbSequenceDS.bSndCompl		:= p_bSndCompl;
		fbSequenceDS.bSndIncompl	:= p_bSndIncompl;
		fbSequenceDS.bSndNotStart	:= p_bSndNotStart;
		fbSequenceDS.bFeatureBoardForecast	:= bFeatureBoardForecast; //Feature BoardForecast
		fbSequenceDS.bOpsRun	        	:= p_bOpsRun; //Machine in AutoMode
		fbSequenceDS.bSendBFId              := bSendBFId; //Send B.F with forecast ID, then block Hermes.eState until Downstream reply a MachineReady(Id) or MachineReady()
		fbSequenceDS.bBFIdSent              := bBFIdSent;
		fbSequenceDS.bSendBFNoID			:= bSendBFNoID;
		fbSequenceDS(bEn := TRUE);
		bUSRdy			:= fbSequenceDS.bUSRdy;
		bDSRdy			:= fbSequenceDS.bDSRdy;
		bTransporting	:= fbSequenceDS.bTransporting;
		bStopTransport	:= fbSequenceDS.bStopTransport;
		

		bUSGdRdy	:= (tyBoardAvailableSnd.tyAvl.bFailedBoard = FALSE) OR ((tyBoardAvailableSnd.tyAvl.bFailedBoard = TRUE) AND (tyBoardAvailableSnd.tyData.eFailedBoard <> HermesFailedBoard));

			
		bDSGdRdy	:= (tyMachineReady.tyAvl.bFailedBoard = FALSE) OR ((tyMachineReady.tyAvl.bFailedBoard = TRUE) AND (tyMachineReady.tyData.eFailedBoard <> HermesFailedBoard));
		
		IF fbSequenceDS.eState >= HermesStateNotAvailableNotReady THEN
			bHandshakeDone	:= TRUE;
		ELSE
			bHandshakeDone	:= FALSE;
		END_IF
		
		IF EDGEPOS(fbSequenceDS.eState = HermesStateTransporting) THEN
			p_bSndCompl		:= FALSE;
			p_bSndIncompl	:= FALSE;
			p_bSndNotStart	:= FALSE;
		END_IF
		
		IF fbSequenceDS.eMsgTypeSnd = HermesMsgTypeServiceDescription THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeServiceDescription);
			
			tyServiceDescriptionSnd.tyData.sMachineId								    	:= p_sMcId; 
			tyServiceDescriptionSnd.tyData.iLaneId											:= p_tyParam.iLaneID;
			tyServiceDescriptionSnd.tyData.sInterfaceId										:= p_sInterfaceId;
			tyServiceDescriptionSnd.tyData.sVersion											:= p_sVersion;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCheckAliveResponse	:= (p_tyParam.bFeatureCheckAliveResponse) AND (p_tyParam.tRcvAlive <> T#0s) AND (p_tyParam.tSndAlive <> T#0s);
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureBoardForecast		:= p_tyParam.bFeatureBoardForecast;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureQueryBoardInfo		:= FALSE;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureSendBoardInfo		:= p_tyParam.bFeatureSendBoardInfo;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCommand				:= p_tyParam.bFeatureCommand;
			
			tyServiceDescriptionSnd.tyAvl.bMachineId										:= tyServiceDescriptionSnd.tyData.sMachineId <> '';
			tyServiceDescriptionSnd.tyAvl.bLaneId											:= tyServiceDescriptionSnd.tyData.iLaneId<>0;
			tyServiceDescriptionSnd.tyAvl.bInterfaceId										:= tyServiceDescriptionSnd.tyData.sInterfaceId <> '';
			tyServiceDescriptionSnd.tyAvl.bVersion											:= TRUE;
			tyServiceDescriptionSnd.tyAvl.bSupportedFeatures								:= p_tyParam.bFeatureCheckAliveResponse OR p_tyParam.bFeatureBoardForecast OR p_tyParam.bFeatureSendBoardInfo OR p_tyParam.bFeatureCommand;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse	:= (p_tyParam.bFeatureCheckAliveResponse) AND (p_tyParam.tRcvAlive <> T#0s) AND (p_tyParam.tSndAlive <> T#0s);
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureBoardForecast			:= p_tyParam.bFeatureBoardForecast;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo		:= FALSE;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo			:= p_tyParam.bFeatureSendBoardInfo;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCommand				:= p_tyParam.bFeatureCommand;
		ELSIF fbSequenceDS.eMsgTypeSnd = HermesMsgTypeBoardForecastId THEN //Properties changed
			//need to mantain at one
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardForecast);
			fHermesGenerateUUID(ADR(tyBoardForecastSnd.tyData.sForecastId) , p_tyDTStructure , pa_usiMacAddr); //Generate ForecastID if there is new Product Changeover
			bBFIdSent := TRUE;
			
			IF p_bManualInsertData = FALSE THEN //insert board function (from SvyHermes)
				tyBoardForecastSnd.tyData.rTimeUntilAvailable       := p_rMcCycleTm + p_rAWCycleTm;
				tyBoardForecastSnd.tyData.sBoardId 			        := ''; //no need to send BoardId for HermesMsgTypeBoardForecastId.	
				tyBoardForecastSnd.tyData.sBoardIdCreatedBy			:= ''; //no need to send BoardIdCreatedBy since no BoardId.		    
				tyBoardForecastSnd.tyData.eFailedBoard 			    := p_eFailedBoard;			
				tyBoardForecastSnd.tyData.sProductTypeId 			:= p_sRecipeNm; //recipe0 name = running recipe name			
				tyBoardForecastSnd.tyData.eFlippedBoard 			:= p_eFlippedBoard;			
				tyBoardForecastSnd.tyData.sTopBarcode 		    	:= p_sTopBarcode;			
				tyBoardForecastSnd.tyData.sBottomBarcode 			:= p_sBottomBarcode; 	
				tyBoardForecastSnd.tyData.rLength 				    := p_rLength;	
				tyBoardForecastSnd.tyData.rWidth 			    	:= DINT_TO_REAL(p_diWidthInUM) / 1000; //recipe 0 width	 = running recipe width
				tyBoardForecastSnd.tyData.rThickness 		    	:= p_rThickness; 			
				tyBoardForecastSnd.tyData.rConveyorSpeed 			:= p_rConveyorSpeed; 				
				tyBoardForecastSnd.tyData.rTopClearanceHeight 		:= p_rTopClearanceHeight;			
				tyBoardForecastSnd.tyData.rBottomClearanceHeight 	:= p_rBottomClearanceHeight; 	
				tyBoardForecastSnd.tyData.rWeight 			    	:= p_rWeight; 	 		
				tyBoardForecastSnd.tyData.sWorkOrderId 			    := p_sWorkOrderId;	
				tyBoardForecastSnd.tyData.sBatchId 			        := p_sBatchId;
	
				tyBoardForecastSnd.tyAvl.bForecastId 			    := TRUE;
				tyBoardForecastSnd.tyAvl.bTimeUntilAvailable		:= tyBoardForecastSnd.tyData.rTimeUntilAvailable <> 0;
				tyBoardForecastSnd.tyAvl.bBoardId 				    := tyBoardForecastSnd.tyData.sBoardId <> '';			
				tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy 		    := TRUE;			
				tyBoardForecastSnd.tyAvl.bFailedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bProductTypeId 			:= tyBoardForecastSnd.tyData.sProductTypeId <> '';			
				tyBoardForecastSnd.tyAvl.bFlippedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bTopBarcode 			    := tyBoardForecastSnd.tyData.sTopBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bBottomBarcode 			:= tyBoardForecastSnd.tyData.sBottomBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bLength 				    := tyBoardForecastSnd.tyData.rLength <> 0;			
				tyBoardForecastSnd.tyAvl.bWidth 				    := tyBoardForecastSnd.tyData.rWidth <> 0 AND (p_bBFWidthEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bThickness 			    := tyBoardForecastSnd.tyData.rThickness <> 0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bConveyorSpeed 			:= tyBoardForecastSnd.tyData.rConveyorSpeed <> 0;			
				tyBoardForecastSnd.tyAvl.bTopClearanceHeight 		:= tyBoardForecastSnd.tyData.rTopClearanceHeight <> 0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bBottomClearanceHeight 	:= tyBoardForecastSnd.tyData.rBottomClearanceHeight <> 0 AND (p_bBFSltEn = TRUE);	
				tyBoardForecastSnd.tyAvl.bWeight 			    	:= tyBoardForecastSnd.tyData.rWeight <> 0;			
				tyBoardForecastSnd.tyAvl.bWorkOrderId 		    	:= tyBoardForecastSnd.tyData.sWorkOrderId <> '';	
				tyBoardForecastSnd.tyAvl.bBatchId 		        	:= tyBoardForecastSnd.tyData.sBatchId <> '';    
			ELSE //from Rcp
				tyBoardForecastSnd.tyData.rTimeUntilAvailable       := p_rMcCycleTm + p_rAWCycleTm;
				tyBoardForecastSnd.tyData.sBoardId 			        := ''; //no need to send BoardId for HermesMsgTypeBoardForecastId.	
				tyBoardForecastSnd.tyData.sBoardIdCreatedBy			:= ''; //no need to send BoardIdCreatedBy since no BoardId.		    
				tyBoardForecastSnd.tyData.eFailedBoard 			    := p_tySvyHermesSendWorkOrderInfo.tyData.eFailedBoard;			
				tyBoardForecastSnd.tyData.sProductTypeId 			:= p_tySvyHermesSendWorkOrderInfo.tyData.sProductTypeId;			
				tyBoardForecastSnd.tyData.eFlippedBoard 			:= p_tySvyHermesSendWorkOrderInfo.tyData.eFlippedBoard;	
				tyBoardForecastSnd.tyData.sTopBarcode 		    	:= p_tySvyHermesSendWorkOrderInfo.tyData.sTopBarcode;		
				tyBoardForecastSnd.tyData.sBottomBarcode 			:= p_tySvyHermesSendWorkOrderInfo.tyData.sBottomBarcode;	
				tyBoardForecastSnd.tyData.rLength 				    := p_tySvyHermesSendWorkOrderInfo.tyData.rLength;
				tyBoardForecastSnd.tyData.rWidth 			    	:= DINT_TO_REAL(p_diWidthInUM) / 1000; //recipe 0 width	 = running recipe width
				tyBoardForecastSnd.tyData.rThickness 		    	:= p_tySvyHermesSendWorkOrderInfo.tyData.rThickness; 			
				tyBoardForecastSnd.tyData.rConveyorSpeed 			:= p_tySvyHermesSendWorkOrderInfo.tyData.rConveyorSpeed; 				
				tyBoardForecastSnd.tyData.rTopClearanceHeight 		:= p_tySvyHermesSendWorkOrderInfo.tyData.rTopClearanceHeight;			
				tyBoardForecastSnd.tyData.rBottomClearanceHeight 	:= p_tySvyHermesSendWorkOrderInfo.tyData.rBottomClearanceHeight; 	
				tyBoardForecastSnd.tyData.rWeight 			    	:= p_tySvyHermesSendWorkOrderInfo.tyData.rWeight; 	 		
				tyBoardForecastSnd.tyData.sWorkOrderId 			    := p_tySvyHermesSendWorkOrderInfo.tyData.sWorkOrderId;	
				tyBoardForecastSnd.tyData.sBatchId 			        := p_tySvyHermesSendWorkOrderInfo.tyData.sBatchId;
	
				tyBoardForecastSnd.tyAvl.bForecastId 			    := TRUE;
				tyBoardForecastSnd.tyAvl.bTimeUntilAvailable		:= tyBoardForecastSnd.tyData.rTimeUntilAvailable <> 0;
				tyBoardForecastSnd.tyAvl.bBoardId 				    := tyBoardForecastSnd.tyData.sBoardId <> '';			
				tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy 		    := TRUE;			
				tyBoardForecastSnd.tyAvl.bFailedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bProductTypeId 			:= tyBoardForecastSnd.tyData.sProductTypeId <> '';			
				tyBoardForecastSnd.tyAvl.bFlippedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bTopBarcode 			    := tyBoardForecastSnd.tyData.sTopBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bBottomBarcode 			:= tyBoardForecastSnd.tyData.sBottomBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bLength 				    := tyBoardForecastSnd.tyData.rLength <> 0;			
				tyBoardForecastSnd.tyAvl.bWidth 				    := tyBoardForecastSnd.tyData.rWidth <> 0 AND (p_bBFWidthEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bThickness 			    := tyBoardForecastSnd.tyData.rThickness <> 0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bConveyorSpeed 			:= tyBoardForecastSnd.tyData.rConveyorSpeed <> 0;			
				tyBoardForecastSnd.tyAvl.bTopClearanceHeight 		:= tyBoardForecastSnd.tyData.rTopClearanceHeight <> 0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bBottomClearanceHeight 	:= tyBoardForecastSnd.tyData.rBottomClearanceHeight <> 0 AND (p_bBFSltEn = TRUE);	
				tyBoardForecastSnd.tyAvl.bWeight 			    	:= tyBoardForecastSnd.tyData.rWeight <> 0;			
				tyBoardForecastSnd.tyAvl.bWorkOrderId 		    	:= tyBoardForecastSnd.tyData.sWorkOrderId <> '';	
				tyBoardForecastSnd.tyAvl.bBatchId 		        	:= tyBoardForecastSnd.tyData.sBatchId <> '';
			
			END_IF
			
		ELSIF fbSequenceDS.eMsgTypeSnd = HermesMsgTypeBoardForecastNoId THEN 
			//do not need to count 
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardForecast);
			tyBoardForecastSnd.tyData.sForecastId		        := ''; //Do not need to generate ForecastID to downstream

			IF p_bNewBrdAvlFirstZone AND p_usiUSHermesReverseDSSendBFId <> 0 THEN //Tigger by US hermes to Reverse DS Hermes
				
				IF p_usiUSHermesReverseDSSendBFId = 1 THEN //up pulse trigger with BrdId
					fbParseBrdAvlExternal.p_XMLTable		:= ADR(pa_RevtyXMLTableDataBrdAvl);//last zone B.A
					fbParseBrdAvlExternal.iTotalIdxWrite	:= p_ReviXMLTableDataBrdAvlTtlIdx; //last zone
					fbParseBrdAvlExternal;
					fHermesBrdAvltoBF(ADR(tyBoardForecastSnd),ADR(fbParseBrdAvlExternal.tyBoardAvailable));
				ELSIF p_usiUSHermesReverseDSSendBFId = 2 THEN  //downpulse , reset 
					memset(ADR(tyBoardForecastSnd),0,SIZEOF(tyBoardForecastSnd));
				
					tyBoardForecastSnd.tyAvl.bFailedBoard 			    := TRUE;
					tyBoardForecastSnd.tyAvl.bFlippedBoard 			    := TRUE;
				END_IF	
			ELSIF p_bNewBrdAvlFirstZone AND p_bManualInsertData = FALSE THEN
				fHermesGenerateUUID(ADR(tyBoardForecastSnd.tyData.sBoardId) , p_tyDTStructure , pa_usiMacAddr);
				tyBoardForecastSnd.tyData.sBoardIdCreatedBy         := p_sMcId; 
				tyBoardForecastSnd.tyData.eFailedBoard 		    	:= p_eFailedBoard;			
				tyBoardForecastSnd.tyData.sProductTypeId 			:= p_sRecipeNm;	 //recipe 0 name = running recipe name			
				tyBoardForecastSnd.tyData.eFlippedBoard 			:= p_eFlippedBoard;			
				tyBoardForecastSnd.tyData.sTopBarcode 		    	:= p_sTopBarcode;			
				tyBoardForecastSnd.tyData.sBottomBarcode 			:= p_sBottomBarcode;			
				tyBoardForecastSnd.tyData.rLength 				    := p_rLength;			
				tyBoardForecastSnd.tyData.rWidth 			    	:= DINT_TO_REAL(p_diWidthInUM) / 1000;	//recipe 0 width = running recipe width			
				tyBoardForecastSnd.tyData.rThickness 		    	:= p_rThickness;			
				tyBoardForecastSnd.tyData.rConveyorSpeed 			:= p_rConveyorSpeed;			
				tyBoardForecastSnd.tyData.rTopClearanceHeight 		:= p_rTopClearanceHeight;			
				tyBoardForecastSnd.tyData.rBottomClearanceHeight 	:= p_rBottomClearanceHeight;	
				tyBoardForecastSnd.tyData.rWeight 			    	:= p_rWeight;			
				tyBoardForecastSnd.tyData.sWorkOrderId 		    	:= p_sWorkOrderId;	
				tyBoardForecastSnd.tyData.sBatchId	    	    	:= p_sBatchId;	

				tyBoardForecastSnd.tyAvl.bForecastId 			    := tyBoardForecastSnd.tyData.sForecastId <> '';
				tyBoardForecastSnd.tyAvl.bTimeUntilAvailable		:= tyBoardForecastSnd.tyData.rTimeUntilAvailable <> 0;
				tyBoardForecastSnd.tyAvl.bBoardId 				    := tyBoardForecastSnd.tyData.sBoardId <> '';			
				tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy 	    	:= tyBoardForecastSnd.tyData.sBoardIdCreatedBy <> '';			
				tyBoardForecastSnd.tyAvl.bFailedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bProductTypeId 			:= tyBoardForecastSnd.tyData.sProductTypeId <> '';			
				tyBoardForecastSnd.tyAvl.bFlippedBoard 		    	:= TRUE;			
				tyBoardForecastSnd.tyAvl.bTopBarcode 			    := tyBoardForecastSnd.tyData.sTopBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bBottomBarcode 			:= tyBoardForecastSnd.tyData.sBottomBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bLength 				    := tyBoardForecastSnd.tyData.rLength <> 0;			
				tyBoardForecastSnd.tyAvl.bWidth 				    := tyBoardForecastSnd.tyData.rWidth <> 0 AND (p_bBFWidthEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bThickness 			    := tyBoardForecastSnd.tyData.rThickness <> 0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bConveyorSpeed 			:= tyBoardForecastSnd.tyData.rConveyorSpeed <> 0;			
				tyBoardForecastSnd.tyAvl.bTopClearanceHeight 		:= tyBoardForecastSnd.tyData.rTopClearanceHeight <>0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bBottomClearanceHeight 	:= tyBoardForecastSnd.tyData.rBottomClearanceHeight <>0 AND (p_bBFSltEn = TRUE);	
				tyBoardForecastSnd.tyAvl.bWeight 			    	:= tyBoardForecastSnd.tyData.rWeight <> 0;			
				tyBoardForecastSnd.tyAvl.bWorkOrderId 		    	:= tyBoardForecastSnd.tyData.sWorkOrderId <> '';	
				tyBoardForecastSnd.tyAvl.bBatchId 		        	:= tyBoardForecastSnd.tyData.sBatchId <> '';
			ELSIF p_bNewBrdAvlFirstZone AND p_bManualInsertData THEN //insert board data
				fHermesGenerateUUID(ADR(tyBoardForecastSnd.tyData.sBoardId) , p_tyDTStructure , pa_usiMacAddr);
				tyBoardForecastSnd.tyData.sBoardIdCreatedBy         := p_sMcId; 
				tyBoardForecastSnd.tyData.eFailedBoard 		    	:= p_tySvyHermesSendWorkOrderInfo.tyData.eFailedBoard;			
				tyBoardForecastSnd.tyData.sProductTypeId 			:= p_tySvyHermesSendWorkOrderInfo.tyData.sProductTypeId;			
				tyBoardForecastSnd.tyData.eFlippedBoard 			:= p_tySvyHermesSendWorkOrderInfo.tyData.eFlippedBoard;			
				tyBoardForecastSnd.tyData.sTopBarcode 		    	:= p_tySvyHermesSendWorkOrderInfo.tyData.sTopBarcode;			
				tyBoardForecastSnd.tyData.sBottomBarcode 			:= p_tySvyHermesSendWorkOrderInfo.tyData.sBottomBarcode;			
				tyBoardForecastSnd.tyData.rLength 				    := p_tySvyHermesSendWorkOrderInfo.tyData.rLength;			
				tyBoardForecastSnd.tyData.rWidth 			    	:= DINT_TO_REAL(p_diWidthInUM) / 1000;	//recipe 0 width = running recipe width			
				tyBoardForecastSnd.tyData.rThickness 		    	:= p_tySvyHermesSendWorkOrderInfo.tyData.rThickness;			
				tyBoardForecastSnd.tyData.rConveyorSpeed 			:= p_tySvyHermesSendWorkOrderInfo.tyData.rConveyorSpeed;			
				tyBoardForecastSnd.tyData.rTopClearanceHeight 		:= p_tySvyHermesSendWorkOrderInfo.tyData.rTopClearanceHeight;			
				tyBoardForecastSnd.tyData.rBottomClearanceHeight 	:= p_tySvyHermesSendWorkOrderInfo.tyData.rBottomClearanceHeight;	
				tyBoardForecastSnd.tyData.rWeight 			    	:= p_tySvyHermesSendWorkOrderInfo.tyData.rWeight;			
				tyBoardForecastSnd.tyData.sWorkOrderId 		    	:= p_tySvyHermesSendWorkOrderInfo.tyData.sWorkOrderId;	
				tyBoardForecastSnd.tyData.sBatchId	    	    	:= p_tySvyHermesSendWorkOrderInfo.tyData.sBatchId;	

				tyBoardForecastSnd.tyAvl.bForecastId 			    := tyBoardForecastSnd.tyData.sForecastId <> '';
				tyBoardForecastSnd.tyAvl.bTimeUntilAvailable		:= tyBoardForecastSnd.tyData.rTimeUntilAvailable <> 0;
				tyBoardForecastSnd.tyAvl.bBoardId 				    := tyBoardForecastSnd.tyData.sBoardId <> '';			
				tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy 	    	:= tyBoardForecastSnd.tyData.sBoardIdCreatedBy <> '';			
				tyBoardForecastSnd.tyAvl.bFailedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bProductTypeId 			:= tyBoardForecastSnd.tyData.sProductTypeId <> '';			
				tyBoardForecastSnd.tyAvl.bFlippedBoard 		    	:= TRUE;			
				tyBoardForecastSnd.tyAvl.bTopBarcode 			    := tyBoardForecastSnd.tyData.sTopBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bBottomBarcode 			:= tyBoardForecastSnd.tyData.sBottomBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bLength 				    := tyBoardForecastSnd.tyData.rLength <> 0;			
				tyBoardForecastSnd.tyAvl.bWidth 				    := tyBoardForecastSnd.tyData.rWidth <> 0 AND (p_bBFWidthEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bThickness 			    := tyBoardForecastSnd.tyData.rThickness <> 0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bConveyorSpeed 			:= tyBoardForecastSnd.tyData.rConveyorSpeed <> 0;			
				tyBoardForecastSnd.tyAvl.bTopClearanceHeight 		:= tyBoardForecastSnd.tyData.rTopClearanceHeight <>0 AND (p_bBFSltEn = TRUE);			
				tyBoardForecastSnd.tyAvl.bBottomClearanceHeight 	:= tyBoardForecastSnd.tyData.rBottomClearanceHeight <>0 AND (p_bBFSltEn = TRUE);	
				tyBoardForecastSnd.tyAvl.bWeight 			    	:= tyBoardForecastSnd.tyData.rWeight <> 0;			
				tyBoardForecastSnd.tyAvl.bWorkOrderId 		    	:= tyBoardForecastSnd.tyData.sWorkOrderId <> '';	
				tyBoardForecastSnd.tyAvl.bBatchId 		        	:= tyBoardForecastSnd.tyData.sBatchId <> '';

			ELSE   //have brd detail 
				
				//fBrdAvltoBFcast(ADR(),ADR());
				tyBoardForecastSnd.tyData.sBoardId                  := p_tyUSBoardArrivedData.tyData.sBoardId;			
				tyBoardForecastSnd.tyData.sBoardIdCreatedBy         := p_tyUSBoardArrivedData.tyData.sBoardIdCreatedBy;			
				tyBoardForecastSnd.tyData.eFailedBoard 		    	:= p_tyUSBoardArrivedData.tyData.eFailedBoard;			
				tyBoardForecastSnd.tyData.sProductTypeId 			:= p_tyUSBoardArrivedData.tyData.sProductTypeId;			
				tyBoardForecastSnd.tyData.eFlippedBoard 			:= p_tyUSBoardArrivedData.tyData.eFlippedBoard;			
				tyBoardForecastSnd.tyData.sTopBarcode 		    	:= p_tyUSBoardArrivedData.tyData.sTopBarcode;			
				tyBoardForecastSnd.tyData.sBottomBarcode 			:= p_tyUSBoardArrivedData.tyData.sBottomBarcode;			
				tyBoardForecastSnd.tyData.rLength 				    := p_tyUSBoardArrivedData.tyData.rLength;			
				tyBoardForecastSnd.tyData.rWidth 			    	:= p_tyUSBoardArrivedData.tyData.rWidth;			
				tyBoardForecastSnd.tyData.rThickness 		    	:= p_tyUSBoardArrivedData.tyData.rThickness;			
				tyBoardForecastSnd.tyData.rConveyorSpeed 			:= p_tyUSBoardArrivedData.tyData.rConveyorSpeed;			
				tyBoardForecastSnd.tyData.rTopClearanceHeight 		:= p_tyUSBoardArrivedData.tyData.rTopClearanceHeight;			
				tyBoardForecastSnd.tyData.rBottomClearanceHeight 	:= p_tyUSBoardArrivedData.tyData.rBottomClearanceHeight;	
				tyBoardForecastSnd.tyData.rWeight 			    	:= p_tyUSBoardArrivedData.tyData.rWeight;			
				tyBoardForecastSnd.tyData.sWorkOrderId 		    	:= p_tyUSBoardArrivedData.tyData.sWorkOrderId;	
				tyBoardForecastSnd.tyData.sBatchId 		        	:= p_tyUSBoardArrivedData.tyData.sBatchId;	

				tyBoardForecastSnd.tyAvl.bForecastId 			    := tyBoardForecastSnd.tyData.sForecastId <> '';
				tyBoardForecastSnd.tyAvl.bTimeUntilAvailable		:= tyBoardForecastSnd.tyData.rTimeUntilAvailable <> 0;
				tyBoardForecastSnd.tyAvl.bBoardId 				    := tyBoardForecastSnd.tyData.sBoardId <> '';			
				tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy 	    	:= tyBoardForecastSnd.tyData.sBoardIdCreatedBy <> '';			
				tyBoardForecastSnd.tyAvl.bFailedBoard 			    := TRUE;			
				tyBoardForecastSnd.tyAvl.bProductTypeId 			:= tyBoardForecastSnd.tyData.sProductTypeId <> '';			
				tyBoardForecastSnd.tyAvl.bFlippedBoard 		    	:= TRUE;			
				tyBoardForecastSnd.tyAvl.bTopBarcode 			    := tyBoardForecastSnd.tyData.sTopBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bBottomBarcode 			:= tyBoardForecastSnd.tyData.sBottomBarcode <> '';			
				tyBoardForecastSnd.tyAvl.bLength 				    := tyBoardForecastSnd.tyData.rLength <> 0;			
				tyBoardForecastSnd.tyAvl.bWidth 				    := tyBoardForecastSnd.tyData.rWidth <> 0;			
				tyBoardForecastSnd.tyAvl.bThickness 			    := tyBoardForecastSnd.tyData.rThickness <> 0;			
				tyBoardForecastSnd.tyAvl.bConveyorSpeed 			:= tyBoardForecastSnd.tyData.rConveyorSpeed <> 0;			
				tyBoardForecastSnd.tyAvl.bTopClearanceHeight 		:= tyBoardForecastSnd.tyData.rTopClearanceHeight <> 0;			
				tyBoardForecastSnd.tyAvl.bBottomClearanceHeight 	:= tyBoardForecastSnd.tyData.rBottomClearanceHeight <> 0;	
				tyBoardForecastSnd.tyAvl.bWeight 			    	:= tyBoardForecastSnd.tyData.rWeight <> 0;			
				tyBoardForecastSnd.tyAvl.bWorkOrderId 		    	:= tyBoardForecastSnd.tyData.sWorkOrderId <> '';	
				tyBoardForecastSnd.tyAvl.bBatchId 		        	:= tyBoardForecastSnd.tyData.sBatchId <> '';
				
				
			END_IF
		ELSIF fbSequenceDS.eMsgTypeSnd = HermesMsgTypeBoardAvailable THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardAvailable);
			
			tyBoardAvailableSnd.tyData.iRoute	:= iRoute;
			tyBoardAvailableSnd.tyData.iAction	:= iAction;
				
			tyBoardAvailableSnd.tyAvl.bRoute := tyBoardAvailableSnd.tyData.iRoute <> 0;
			tyBoardAvailableSnd.tyAvl.bAction:= tyBoardAvailableSnd.tyData.iAction <> 0 ;
			
			IF p_bNewBrdAvlLastZone = TRUE AND p_bRcvBoardInfo = FALSE THEN //Generate New B.A for Unknown PCB
				IF bFeatureBoardForecast AND bBFIdSent THEN 
					tyBoardAvailableSnd.tyData.sBoardId :=	 tyBoardForecastSnd.tyData.sBoardId;
				ELSE
					fHermesGenerateUUID(ADR(tyBoardAvailableSnd.tyData.sBoardId) , p_tyDTStructure , pa_usiMacAddr);
				END_IF
				
				tyBoardAvailableSnd.tyData.sBoardIdCreatedBy        := p_sMcId; //Generate by our Machine
				tyBoardAvailableSnd.tyData.eFailedBoard				:= p_eFailedBoard;
				tyBoardAvailableSnd.tyData.sProductTypeId			:= p_sRecipeNm;
				tyBoardAvailableSnd.tyData.eFlippedBoard			:= p_eFlippedBoard;
				tyBoardAvailableSnd.tyData.sTopBarcode				:= p_sTopBarcode;
				tyBoardAvailableSnd.tyData.sBottomBarcode			:= p_sBottomBarcode;
				tyBoardAvailableSnd.tyData.rLength					:= p_rLength;
				tyBoardAvailableSnd.tyData.rWidth					:= DINT_TO_REAL(p_diWidthInUM) / 1000;
				tyBoardAvailableSnd.tyData.rThickness				:= p_rThickness;
				tyBoardAvailableSnd.tyData.rConveyorSpeed			:= p_rConveyorSpeed;
				tyBoardAvailableSnd.tyData.rTopClearanceHeight		:= p_rTopClearanceHeight;
				tyBoardAvailableSnd.tyData.rBottomClearanceHeight	:= p_rBottomClearanceHeight;
				tyBoardAvailableSnd.tyData.rWeight					:= p_rWeight;
				tyBoardAvailableSnd.tyData.sWorkOrderId			    := p_sWorkOrderId; 
				tyBoardAvailableSnd.tyData.sBatchId			        := p_sBatchId;
				
				tyBoardAvailableSnd.tyAvl.bBoardId					:= tyBoardAvailableSnd.tyData.sBoardId<>'';
				tyBoardAvailableSnd.tyAvl.bBoardIdCreatedBy			:= tyBoardAvailableSnd.tyData.sBoardIdCreatedBy <> '';
				tyBoardAvailableSnd.tyAvl.bFailedBoard				:= TRUE;
				tyBoardAvailableSnd.tyAvl.bProductTypeId			:= tyBoardAvailableSnd.tyData.sProductTypeId <> '';
				tyBoardAvailableSnd.tyAvl.bFlippedBoard				:= TRUE;
				tyBoardAvailableSnd.tyAvl.bTopBarcode				:= tyBoardAvailableSnd.tyData.sTopBarcode <> '';
				tyBoardAvailableSnd.tyAvl.bBottomBarcode			:= tyBoardAvailableSnd.tyData.sBottomBarcode <> '';
				tyBoardAvailableSnd.tyAvl.bLength					:= tyBoardAvailableSnd.tyData.rLength <> 0;
				tyBoardAvailableSnd.tyAvl.bWidth					:= (tyBoardAvailableSnd.tyData.rWidth <> 0) AND (p_bBAWidthEn = TRUE);
				tyBoardAvailableSnd.tyAvl.bThickness				:= (tyBoardAvailableSnd.tyData.rThickness <> 0) AND (p_bBASltEn = TRUE);
				tyBoardAvailableSnd.tyAvl.bConveyorSpeed			:= tyBoardAvailableSnd.tyData.rConveyorSpeed <> 0;
				tyBoardAvailableSnd.tyAvl.bTopClearanceHeight		:= (tyBoardAvailableSnd.tyData.rTopClearanceHeight <> 0) AND (p_bBASltEn = TRUE);
				tyBoardAvailableSnd.tyAvl.bBottomClearanceHeight	:= (tyBoardAvailableSnd.tyData.rBottomClearanceHeight <> 0) AND (p_bBASltEn = TRUE);
				tyBoardAvailableSnd.tyAvl.bWeight					:= tyBoardAvailableSnd.tyData.rWeight <> 0;
				tyBoardAvailableSnd.tyAvl.bWorkOrderId				:= tyBoardAvailableSnd.tyData.sWorkOrderId <> '';
				tyBoardAvailableSnd.tyAvl.bBatchId			    	:= tyBoardAvailableSnd.tyData.sBatchId <> '';
			
			ELSIF p_bNewBrdAvlLastZone = TRUE AND p_bRcvBoardInfo = TRUE THEN //Take BoardInfo From "SendBoardInfo", for Manual Insert PCB
			
				tyBoardAvailableSnd.tyData.sBoardId                 := p_tyBoardInfoData.tyData.sBoardId;            
				tyBoardAvailableSnd.tyData.sBoardIdCreatedBy        := p_tyBoardInfoData.tyData.sBoardIdCreatedBy;
				tyBoardAvailableSnd.tyData.eFailedBoard				:= p_tyBoardInfoData.tyData.eFailedBoard;
				tyBoardAvailableSnd.tyData.sProductTypeId			:= p_tyBoardInfoData.tyData.sProductTypeId;
				tyBoardAvailableSnd.tyData.eFlippedBoard			:= p_tyBoardInfoData.tyData.eFlippedBoard;
				tyBoardAvailableSnd.tyData.sTopBarcode				:= p_tyBoardInfoData.tyData.sTopBarcode;
				tyBoardAvailableSnd.tyData.sBottomBarcode			:= p_tyBoardInfoData.tyData.sBottomBarcode;
				tyBoardAvailableSnd.tyData.rLength					:= p_tyBoardInfoData.tyData.rLength;
				tyBoardAvailableSnd.tyData.rWidth					:= p_tyBoardInfoData.tyData.rWidth;
				tyBoardAvailableSnd.tyData.rThickness				:= p_tyBoardInfoData.tyData.rThickness;
				tyBoardAvailableSnd.tyData.rConveyorSpeed			:= p_rConveyorSpeed; //dont have
				tyBoardAvailableSnd.tyData.rTopClearanceHeight		:= p_tyBoardInfoData.tyData.rTopClearanceHeight;
				tyBoardAvailableSnd.tyData.rBottomClearanceHeight	:= p_tyBoardInfoData.tyData.rBottomClearanceHeight;
				tyBoardAvailableSnd.tyData.rWeight					:= p_tyBoardInfoData.tyData.rWeight;
				tyBoardAvailableSnd.tyData.sWorkOrderId			    := p_tyBoardInfoData.tyData.sWorkOrderId;
				tyBoardAvailableSnd.tyData.sBatchId		            := p_tyBoardInfoData.tyData.sBatchId;
				
				tyBoardAvailableSnd.tyAvl.bBoardId					:= tyBoardAvailableSnd.tyData.sBoardId <> '';
				tyBoardAvailableSnd.tyAvl.bBoardIdCreatedBy			:= tyBoardAvailableSnd.tyData.sBoardIdCreatedBy <> '';
				tyBoardAvailableSnd.tyAvl.bFailedBoard				:= TRUE;
				tyBoardAvailableSnd.tyAvl.bProductTypeId			:= tyBoardAvailableSnd.tyData.sProductTypeId <> '';
				tyBoardAvailableSnd.tyAvl.bFlippedBoard				:= TRUE;
				tyBoardAvailableSnd.tyAvl.bTopBarcode				:= tyBoardAvailableSnd.tyData.sTopBarcode <> '';
				tyBoardAvailableSnd.tyAvl.bBottomBarcode			:= tyBoardAvailableSnd.tyData.sBottomBarcode <> '';
				tyBoardAvailableSnd.tyAvl.bLength					:= tyBoardAvailableSnd.tyData.rLength <> 0;
				tyBoardAvailableSnd.tyAvl.bWidth					:= (tyBoardAvailableSnd.tyData.rWidth <> 0);
				tyBoardAvailableSnd.tyAvl.bThickness				:= (tyBoardAvailableSnd.tyData.rThickness <> 0);
				tyBoardAvailableSnd.tyAvl.bConveyorSpeed			:= tyBoardAvailableSnd.tyData.rConveyorSpeed <> 0;
				tyBoardAvailableSnd.tyAvl.bTopClearanceHeight		:= (tyBoardAvailableSnd.tyData.rTopClearanceHeight <> 0);
				tyBoardAvailableSnd.tyAvl.bBottomClearanceHeight	:= (tyBoardAvailableSnd.tyData.rBottomClearanceHeight <> 0);
				tyBoardAvailableSnd.tyAvl.bWeight					:= tyBoardAvailableSnd.tyData.rWeight <> 0;
				tyBoardAvailableSnd.tyAvl.bWorkOrderId				:= tyBoardAvailableSnd.tyData.sWorkOrderId <> ''; 	
				tyBoardAvailableSnd.tyAvl.bBatchId			    	:= tyBoardAvailableSnd.tyData.sBatchId <> ''; 	
				
			ELSE //Take from PCB_In Board Data
				
				fbParseBrdAvlExternal.p_XMLTable		:= ADR(pa_tyXMLTableDataBrdAvl); //last zone B.A
				fbParseBrdAvlExternal.iTotalIdxWrite	:= p_iXMLTableDataBrdAvlTtlIdx; //last zone
				fbParseBrdAvlExternal;
				tyBoardAvailableSnd	:= fbParseBrdAvlExternal.tyBoardAvailable;
			END_IF	
			
		ELSIF fbSequenceDS.eMsgTypeSnd = HermesMsgTypeRevokeBoardAvl THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeRevokeBoardAvl);
		
		ELSIF fbSequenceDS.eMsgTypeSnd = HermesMsgTypeTransportFinished THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeTransportFinished);
			
			IF p_bSndCompl = TRUE THEN
				tyTransportFinished.tyData.eTransferState	:= HermesTransferStateComplete;
			ELSIF p_bSndIncompl = TRUE THEN
				tyTransportFinished.tyData.eTransferState	:= HermesTransferStateIncomplete;
			ELSE
				tyTransportFinished.tyData.eTransferState	:= HermesTransferStateNotStarted;
			END_IF
			tyTransportFinished.tyData.sBoardId				:= tyStartTransport.tyData.sBoardId;
			
			tyTransportFinished.tyAvl.bTransferState		:= TRUE;
			tyTransportFinished.tyAvl.bBoardId				:= TRUE;
		
		END_IF
		
	END_IF

END_ACTION
