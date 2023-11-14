(** 2021-08-01 **)
ACTION Act_Background_SendBoardDepartedLane3: //Send after our machine send out "TransportFinished" message to downstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bDSHermesTransportFinished3) THEN
				
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardDeparted3);
				
				tyBoardDeparted3.tyData.sMachineId     	        := p_sMcId;
			    tyBoardDeparted3.tyData.iDownstreamLaneId    	:= p_tyHermesConfiguration.a_tyDSParam[2].iLaneID;
			    tyBoardDeparted3.tyData.sDownstreamInterfaceId  := p_tyHermesConfiguration.a_tyDSParam[2].sDownstreamInterfaceId;
                tyBoardDeparted3.tyData.sMagazineId           	:= sMagazineId;
		    	tyBoardDeparted3.tyData.iSlotId     	        := iSlotId; 
		    	tyBoardDeparted3.tyData.eBoadTransfer    	    := p_eBoardTransfer3;
	            tyBoardDeparted3.tyData.sBoardId     	        := p_tyDSBoardDeparted3.tyData.sBoardId;
		    	tyBoardDeparted3.tyData.sBoardIdCreatedBy     	:= p_tyDSBoardDeparted3.tyData.sBoardIdCreatedBy;
		    	tyBoardDeparted3.tyData.eFailedBoard			:= p_tyDSBoardDeparted3.tyData.eFailedBoard;
				tyBoardDeparted3.tyData.sProductTypeId			:= p_tyDSBoardDeparted3.tyData.sProductTypeId;
				tyBoardDeparted3.tyData.eFlippedBoard			:= p_tyDSBoardDeparted3.tyData.eFlippedBoard;
				tyBoardDeparted3.tyData.sTopBarcode				:= p_tyDSBoardDeparted3.tyData.sTopBarcode;
				tyBoardDeparted3.tyData.sBottomBarcode			:= p_tyDSBoardDeparted3.tyData.sBottomBarcode;
				tyBoardDeparted3.tyData.rLength					:= p_tyDSBoardDeparted3.tyData.rLength;
				tyBoardDeparted3.tyData.rWidth				    := p_tyDSBoardDeparted3.tyData.rWidth;
				tyBoardDeparted3.tyData.rThickness				:= p_tyDSBoardDeparted3.tyData.rThickness;
				tyBoardDeparted3.tyData.rConveyorSpeed		    := p_tyDSBoardDeparted3.tyData.rConveyorSpeed;
				tyBoardDeparted3.tyData.rTopClearanceHeight		:= p_tyDSBoardDeparted3.tyData.rTopClearanceHeight;
				tyBoardDeparted3.tyData.rBottomClearanceHeight	:= p_tyDSBoardDeparted3.tyData.rBottomClearanceHeight;
				tyBoardDeparted3.tyData.rWeight					:= p_tyDSBoardDeparted3.tyData.rWeight;
				tyBoardDeparted3.tyData.sWorkOrdedId            := p_tyDSBoardDeparted3.tyData.sWorkOrderId;
				tyBoardDeparted3.tyData.sBatchId                := p_tyDSBoardDeparted3.tyData.sBatchId;
			
			    tyBoardDeparted3.tyAvl.bMachineId				:= tyBoardDeparted3.tyData.sMachineId <> '';
		     	tyBoardDeparted3.tyAvl.bDownstreamLaneId		:= tyBoardDeparted3.tyData.iDownstreamLaneId <> 0;
		    	tyBoardDeparted3.tyAvl.bDownstreamInterfaceId	:= tyBoardDeparted3.tyData.sDownstreamInterfaceId <> '';
		    	tyBoardDeparted3.tyAvl.bMagazineId		    	:= tyBoardDeparted3.tyData.sMagazineId <> '';
		    	tyBoardDeparted3.tyAvl.bSlotId				    := tyBoardDeparted3.tyData.iSlotId <> 0;
		    	tyBoardDeparted3.tyAvl.bBoardTransfer		    := TRUE;
				tyBoardDeparted3.tyAvl.bBoardId					:= tyBoardDeparted3.tyData.sBoardId <> '';
				tyBoardDeparted3.tyAvl.bBoardIdCreatedBy		:= tyBoardDeparted3.tyData.sBoardIdCreatedBy <> '';
				tyBoardDeparted3.tyAvl.bFailedBoard				:= TRUE;
				tyBoardDeparted3.tyAvl.bProductTypeId		   	:= tyBoardDeparted3.tyData.sProductTypeId <> '';
				tyBoardDeparted3.tyAvl.bFlippedBoard			:= TRUE;
				tyBoardDeparted3.tyAvl.bTopBarcode			    := tyBoardDeparted3.tyData.sTopBarcode <> '';
				tyBoardDeparted3.tyAvl.bBottomBarcode		    := tyBoardDeparted3.tyData.sBottomBarcode <> '';
				tyBoardDeparted3.tyAvl.bLength				    := tyBoardDeparted3.tyData.rLength <> 0;
				tyBoardDeparted3.tyAvl.bWidth				    := (tyBoardDeparted3.tyData.rWidth <> 0);
				tyBoardDeparted3.tyAvl.bThickness			    := (tyBoardDeparted3.tyData.rThickness <> 0);
				tyBoardDeparted3.tyAvl.bConveyorSpeed		    := tyBoardDeparted3.tyData.rConveyorSpeed <> 0;
				tyBoardDeparted3.tyAvl.bTopClearanceHeight	    := (tyBoardDeparted3.tyData.rTopClearanceHeight <> 0);
				tyBoardDeparted3.tyAvl.bBottomClearanceHeight	:= (tyBoardDeparted3.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardDeparted3.tyAvl.bWeight				    := tyBoardDeparted3.tyData.rWeight <> 0;
				tyBoardDeparted3.tyAvl.bWorkOrderId				:= tyBoardDeparted3.tyData.sWorkOrdedId <> '';
				tyBoardDeparted3.tyAvl.bBatchId			    	:= tyBoardDeparted3.tyData.sBatchId <> '';
				
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
