(** 2021-08-01 **)
ACTION Act_Background_SendBoardDepartedLane2: //Send after our machine send out "TransportFinished" message to downstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bDSHermesTransportFinished2) THEN
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardDeparted2);
				
				tyBoardDeparted2.tyData.sMachineId     	        := p_sMcId;
			    tyBoardDeparted2.tyData.iDownstreamLaneId    	:= p_tyHermesConfiguration.a_tyDSParam[1].iLaneID;
			    tyBoardDeparted2.tyData.sDownstreamInterfaceId  := p_tyHermesConfiguration.a_tyDSParam[1].sDownstreamInterfaceId;
                tyBoardDeparted2.tyData.sMagazineId           	:= sMagazineId;
		    	tyBoardDeparted2.tyData.iSlotId     	        := iSlotId; 
		    	tyBoardDeparted2.tyData.eBoadTransfer    	    := p_eBoardTransfer2;
	            tyBoardDeparted2.tyData.sBoardId     	        := p_tyDSBoardDeparted2.tyData.sBoardId;
		    	tyBoardDeparted2.tyData.sBoardIdCreatedBy     	:= p_tyDSBoardDeparted2.tyData.sBoardIdCreatedBy;
		    	tyBoardDeparted2.tyData.eFailedBoard			:= p_tyDSBoardDeparted2.tyData.eFailedBoard;
				tyBoardDeparted2.tyData.sProductTypeId			:= p_tyDSBoardDeparted2.tyData.sProductTypeId;
				tyBoardDeparted2.tyData.eFlippedBoard			:= p_tyDSBoardDeparted2.tyData.eFlippedBoard;
				tyBoardDeparted2.tyData.sTopBarcode				:= p_tyDSBoardDeparted2.tyData.sTopBarcode;
				tyBoardDeparted2.tyData.sBottomBarcode			:= p_tyDSBoardDeparted2.tyData.sBottomBarcode;
				tyBoardDeparted2.tyData.rLength					:= p_tyDSBoardDeparted2.tyData.rLength;
				tyBoardDeparted2.tyData.rWidth				    := p_tyDSBoardDeparted2.tyData.rWidth;
				tyBoardDeparted2.tyData.rThickness				:= p_tyDSBoardDeparted2.tyData.rThickness;
				tyBoardDeparted2.tyData.rConveyorSpeed		    := p_tyDSBoardDeparted2.tyData.rConveyorSpeed;
				tyBoardDeparted2.tyData.rTopClearanceHeight		:= p_tyDSBoardDeparted2.tyData.rTopClearanceHeight;
				tyBoardDeparted2.tyData.rBottomClearanceHeight	:= p_tyDSBoardDeparted2.tyData.rBottomClearanceHeight;
				tyBoardDeparted2.tyData.rWeight					:= p_tyDSBoardDeparted2.tyData.rWeight;
				tyBoardDeparted2.tyData.sWorkOrdedId            := p_tyDSBoardDeparted2.tyData.sWorkOrderId;
				tyBoardDeparted2.tyData.sBatchId                := p_tyDSBoardDeparted2.tyData.sBatchId;
			
			    tyBoardDeparted2.tyAvl.bMachineId				:= tyBoardDeparted2.tyData.sMachineId <> '';
		     	tyBoardDeparted2.tyAvl.bDownstreamLaneId		:= tyBoardDeparted2.tyData.iDownstreamLaneId <> 0;
		    	tyBoardDeparted2.tyAvl.bDownstreamInterfaceId	:= tyBoardDeparted2.tyData.sDownstreamInterfaceId <> '';
		    	tyBoardDeparted2.tyAvl.bMagazineId		    	:= tyBoardDeparted2.tyData.sMagazineId <> '';
		    	tyBoardDeparted2.tyAvl.bSlotId				    := tyBoardDeparted2.tyData.iSlotId <> 0;
		    	tyBoardDeparted2.tyAvl.bBoardTransfer		    := TRUE;
				tyBoardDeparted2.tyAvl.bBoardId					:= tyBoardDeparted2.tyData.sBoardId <> '';
				tyBoardDeparted2.tyAvl.bBoardIdCreatedBy		:= tyBoardDeparted2.tyData.sBoardIdCreatedBy <> '';
				tyBoardDeparted2.tyAvl.bFailedBoard				:= TRUE;
				tyBoardDeparted2.tyAvl.bProductTypeId		   	:= tyBoardDeparted2.tyData.sProductTypeId <> '';
				tyBoardDeparted2.tyAvl.bFlippedBoard			:= TRUE;
				tyBoardDeparted2.tyAvl.bTopBarcode			    := tyBoardDeparted2.tyData.sTopBarcode <> '';
				tyBoardDeparted2.tyAvl.bBottomBarcode		    := tyBoardDeparted2.tyData.sBottomBarcode <> '';
				tyBoardDeparted2.tyAvl.bLength				    := tyBoardDeparted2.tyData.rLength <> 0;
				tyBoardDeparted2.tyAvl.bWidth				    := (tyBoardDeparted2.tyData.rWidth <> 0);
				tyBoardDeparted2.tyAvl.bThickness			    := (tyBoardDeparted2.tyData.rThickness <> 0);
				tyBoardDeparted2.tyAvl.bConveyorSpeed		    := tyBoardDeparted2.tyData.rConveyorSpeed <> 0;
				tyBoardDeparted2.tyAvl.bTopClearanceHeight	    := (tyBoardDeparted2.tyData.rTopClearanceHeight <> 0);
				tyBoardDeparted2.tyAvl.bBottomClearanceHeight	:= (tyBoardDeparted2.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardDeparted2.tyAvl.bWeight				    := tyBoardDeparted2.tyData.rWeight <> 0;
				tyBoardDeparted2.tyAvl.bWorkOrderId				:= tyBoardDeparted2.tyData.sWorkOrdedId <> '';
				tyBoardDeparted2.tyAvl.bBatchId			    	:= tyBoardDeparted2.tyData.sBatchId <> '';
				
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
