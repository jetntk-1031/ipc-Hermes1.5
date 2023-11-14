(** 2021-08-01 **)
ACTION Act_Background_SendBoardDepartedLane4: //Send after our machine send out "TransportFinished" message to downstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bDSHermesTransportFinished4) THEN
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardDeparted4);
				
				tyBoardDeparted4.tyData.sMachineId     	        := p_sMcId;
			    tyBoardDeparted4.tyData.iDownstreamLaneId    	:= p_tyHermesConfiguration.a_tyDSParam[3].iLaneID;
			    tyBoardDeparted4.tyData.sDownstreamInterfaceId  := p_tyHermesConfiguration.a_tyDSParam[3].sDownstreamInterfaceId;
                tyBoardDeparted4.tyData.sMagazineId           	:= sMagazineId;
		    	tyBoardDeparted4.tyData.iSlotId     	        := iSlotId; 
		    	tyBoardDeparted4.tyData.eBoadTransfer    	    := p_eBoardTransfer4;
	            tyBoardDeparted4.tyData.sBoardId     	        := p_tyDSBoardDeparted4.tyData.sBoardId;
		    	tyBoardDeparted4.tyData.sBoardIdCreatedBy     	:= p_tyDSBoardDeparted4.tyData.sBoardIdCreatedBy;
		    	tyBoardDeparted4.tyData.eFailedBoard			:= p_tyDSBoardDeparted4.tyData.eFailedBoard;
				tyBoardDeparted4.tyData.sProductTypeId			:= p_tyDSBoardDeparted4.tyData.sProductTypeId;
				tyBoardDeparted4.tyData.eFlippedBoard			:= p_tyDSBoardDeparted4.tyData.eFlippedBoard;
				tyBoardDeparted4.tyData.sTopBarcode				:= p_tyDSBoardDeparted4.tyData.sTopBarcode;
				tyBoardDeparted4.tyData.sBottomBarcode			:= p_tyDSBoardDeparted4.tyData.sBottomBarcode;
				tyBoardDeparted4.tyData.rLength					:= p_tyDSBoardDeparted4.tyData.rLength;
				tyBoardDeparted4.tyData.rWidth				    := p_tyDSBoardDeparted4.tyData.rWidth;
				tyBoardDeparted4.tyData.rThickness				:= p_tyDSBoardDeparted4.tyData.rThickness;
				tyBoardDeparted4.tyData.rConveyorSpeed		    := p_tyDSBoardDeparted4.tyData.rConveyorSpeed;
				tyBoardDeparted4.tyData.rTopClearanceHeight		:= p_tyDSBoardDeparted4.tyData.rTopClearanceHeight;
				tyBoardDeparted4.tyData.rBottomClearanceHeight	:= p_tyDSBoardDeparted4.tyData.rBottomClearanceHeight;
				tyBoardDeparted4.tyData.rWeight					:= p_tyDSBoardDeparted4.tyData.rWeight;
				tyBoardDeparted4.tyData.sWorkOrdedId            := p_tyDSBoardDeparted4.tyData.sWorkOrderId;
				tyBoardDeparted4.tyData.sBatchId                := p_tyDSBoardDeparted4.tyData.sBatchId;
			
			    tyBoardDeparted4.tyAvl.bMachineId				:= tyBoardDeparted4.tyData.sMachineId <> '';
		     	tyBoardDeparted4.tyAvl.bDownstreamLaneId		:= tyBoardDeparted4.tyData.iDownstreamLaneId <> 0;
		    	tyBoardDeparted4.tyAvl.bDownstreamInterfaceId	:= tyBoardDeparted4.tyData.sDownstreamInterfaceId <> '';
		    	tyBoardDeparted4.tyAvl.bMagazineId		    	:= tyBoardDeparted4.tyData.sMagazineId <> '';
		    	tyBoardDeparted4.tyAvl.bSlotId				    := tyBoardDeparted4.tyData.iSlotId <> 0;
		    	tyBoardDeparted4.tyAvl.bBoardTransfer		    := TRUE;
				tyBoardDeparted4.tyAvl.bBoardId					:= tyBoardDeparted4.tyData.sBoardId <> '';
				tyBoardDeparted4.tyAvl.bBoardIdCreatedBy		:= tyBoardDeparted4.tyData.sBoardIdCreatedBy <> '';
				tyBoardDeparted4.tyAvl.bFailedBoard				:= TRUE;
				tyBoardDeparted4.tyAvl.bProductTypeId		   	:= tyBoardDeparted4.tyData.sProductTypeId <> '';
				tyBoardDeparted4.tyAvl.bFlippedBoard			:= TRUE;
				tyBoardDeparted4.tyAvl.bTopBarcode			    := tyBoardDeparted4.tyData.sTopBarcode <> '';
				tyBoardDeparted4.tyAvl.bBottomBarcode		    := tyBoardDeparted4.tyData.sBottomBarcode <> '';
				tyBoardDeparted4.tyAvl.bLength				    := tyBoardDeparted4.tyData.rLength <> 0;
				tyBoardDeparted4.tyAvl.bWidth				    := (tyBoardDeparted4.tyData.rWidth <> 0);
				tyBoardDeparted4.tyAvl.bThickness			    := (tyBoardDeparted4.tyData.rThickness <> 0);
				tyBoardDeparted4.tyAvl.bConveyorSpeed		    := tyBoardDeparted4.tyData.rConveyorSpeed <> 0;
				tyBoardDeparted4.tyAvl.bTopClearanceHeight	    := (tyBoardDeparted4.tyData.rTopClearanceHeight <> 0);
				tyBoardDeparted4.tyAvl.bBottomClearanceHeight	:= (tyBoardDeparted4.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardDeparted4.tyAvl.bWeight				    := tyBoardDeparted4.tyData.rWeight <> 0;
				tyBoardDeparted4.tyAvl.bWorkOrderId				:= tyBoardDeparted4.tyData.sWorkOrdedId <> '';
				tyBoardDeparted4.tyAvl.bBatchId			    	:= tyBoardDeparted4.tyData.sBatchId <> '';
				
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
