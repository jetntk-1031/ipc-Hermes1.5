(** 2021-08-01 **)
ACTION Act_Background_SendBoardDepartedLane1: //Send after our machine send out "TransportFinished" message to downstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bDSHermesTransportFinished1) THEN
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardDeparted1);
				
				tyBoardDeparted1.tyData.sMachineId     	        := p_sMcId;
			    tyBoardDeparted1.tyData.iDownstreamLaneId    	:= p_tyHermesConfiguration.a_tyDSParam[0].iLaneID;
			    tyBoardDeparted1.tyData.sDownstreamInterfaceId  := p_tyHermesConfiguration.a_tyDSParam[0].sDownstreamInterfaceId;
                tyBoardDeparted1.tyData.sMagazineId           	:= sMagazineId;
		    	tyBoardDeparted1.tyData.iSlotId     	        := iSlotId; 
		    	tyBoardDeparted1.tyData.eBoadTransfer    	    := p_eBoardTransfer1;
	            tyBoardDeparted1.tyData.sBoardId     	        := p_tyDSBoardDeparted1.tyData.sBoardId;
		    	tyBoardDeparted1.tyData.sBoardIdCreatedBy     	:= p_tyDSBoardDeparted1.tyData.sBoardIdCreatedBy;
		    	tyBoardDeparted1.tyData.eFailedBoard			:= p_tyDSBoardDeparted1.tyData.eFailedBoard;
				tyBoardDeparted1.tyData.sProductTypeId			:= p_tyDSBoardDeparted1.tyData.sProductTypeId;
				tyBoardDeparted1.tyData.eFlippedBoard			:= p_tyDSBoardDeparted1.tyData.eFlippedBoard;
				tyBoardDeparted1.tyData.sTopBarcode				:= p_tyDSBoardDeparted1.tyData.sTopBarcode;
				tyBoardDeparted1.tyData.sBottomBarcode			:= p_tyDSBoardDeparted1.tyData.sBottomBarcode;
				tyBoardDeparted1.tyData.rLength					:= p_tyDSBoardDeparted1.tyData.rLength;
				tyBoardDeparted1.tyData.rWidth				    := p_tyDSBoardDeparted1.tyData.rWidth;
				tyBoardDeparted1.tyData.rThickness				:= p_tyDSBoardDeparted1.tyData.rThickness;
				tyBoardDeparted1.tyData.rConveyorSpeed		    := p_tyDSBoardDeparted1.tyData.rConveyorSpeed;
				tyBoardDeparted1.tyData.rTopClearanceHeight		:= p_tyDSBoardDeparted1.tyData.rTopClearanceHeight;
				tyBoardDeparted1.tyData.rBottomClearanceHeight	:= p_tyDSBoardDeparted1.tyData.rBottomClearanceHeight;
				tyBoardDeparted1.tyData.rWeight					:= p_tyDSBoardDeparted1.tyData.rWeight;
				tyBoardDeparted1.tyData.sWorkOrdedId            := p_tyDSBoardDeparted1.tyData.sWorkOrderId;
				tyBoardDeparted1.tyData.sBatchId                := p_tyDSBoardDeparted1.tyData.sBatchId;
			
			    tyBoardDeparted1.tyAvl.bMachineId				:= tyBoardDeparted1.tyData.sMachineId <> '';
		     	tyBoardDeparted1.tyAvl.bDownstreamLaneId		:= tyBoardDeparted1.tyData.iDownstreamLaneId <> 0;
		    	tyBoardDeparted1.tyAvl.bDownstreamInterfaceId	:= tyBoardDeparted1.tyData.sDownstreamInterfaceId <> '';
		    	tyBoardDeparted1.tyAvl.bMagazineId		    	:= tyBoardDeparted1.tyData.sMagazineId <> '';
		    	tyBoardDeparted1.tyAvl.bSlotId				    := tyBoardDeparted1.tyData.iSlotId <> 0;
		    	tyBoardDeparted1.tyAvl.bBoardTransfer		    := TRUE;
				tyBoardDeparted1.tyAvl.bBoardId					:= tyBoardDeparted1.tyData.sBoardId <> '';
				tyBoardDeparted1.tyAvl.bBoardIdCreatedBy		:= tyBoardDeparted1.tyData.sBoardIdCreatedBy <> '';
				tyBoardDeparted1.tyAvl.bFailedBoard				:= TRUE;
				tyBoardDeparted1.tyAvl.bProductTypeId		   	:= tyBoardDeparted1.tyData.sProductTypeId <> '';
				tyBoardDeparted1.tyAvl.bFlippedBoard			:= TRUE;
				tyBoardDeparted1.tyAvl.bTopBarcode			    := tyBoardDeparted1.tyData.sTopBarcode <> '';
				tyBoardDeparted1.tyAvl.bBottomBarcode		    := tyBoardDeparted1.tyData.sBottomBarcode <> '';
				tyBoardDeparted1.tyAvl.bLength				    := tyBoardDeparted1.tyData.rLength <> 0;
				tyBoardDeparted1.tyAvl.bWidth				    := (tyBoardDeparted1.tyData.rWidth <> 0);
				tyBoardDeparted1.tyAvl.bThickness			    := (tyBoardDeparted1.tyData.rThickness <> 0);
				tyBoardDeparted1.tyAvl.bConveyorSpeed		    := tyBoardDeparted1.tyData.rConveyorSpeed <> 0;
				tyBoardDeparted1.tyAvl.bTopClearanceHeight	    := (tyBoardDeparted1.tyData.rTopClearanceHeight <> 0);
				tyBoardDeparted1.tyAvl.bBottomClearanceHeight	:= (tyBoardDeparted1.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardDeparted1.tyAvl.bWeight				    := tyBoardDeparted1.tyData.rWeight <> 0;
				tyBoardDeparted1.tyAvl.bWorkOrderId				:= tyBoardDeparted1.tyData.sWorkOrdedId <> '';
				tyBoardDeparted1.tyAvl.bBatchId			    	:= tyBoardDeparted1.tyData.sBatchId <> '';
				
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
