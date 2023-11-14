(** 2021-08-01 **)
ACTION Act_Background_SendBoardArrivedLane1: //Send after our machine send out "StopTransport" message to upstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bUSHermesStopTransport1) THEN
	
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardArrived1);
			
				tyBoardArrived1.tyData.sMachineId     	        := p_sMcId;
				tyBoardArrived1.tyData.iUpstreamLaneId    	    := p_tyHermesConfiguration.a_tyUSParam[0].iLaneID;
				tyBoardArrived1.tyData.sUpstreamInterfaceId     := p_tyHermesConfiguration.a_tyUSParam[0].sUpstreamInterfaceId;
				tyBoardArrived1.tyData.sMagazineId           	:= sMagazineId;
				tyBoardArrived1.tyData.iSlotId     	            := iSlotId; 
				tyBoardArrived1.tyData.eBoadTransfer    	    := HermesTransferred;
				tyBoardArrived1.tyData.sBoardId     	        := p_tyUSBoardArrived1.tyData.sBoardId;
				tyBoardArrived1.tyData.sBoardIdCreatedBy     	:= p_tyUSBoardArrived1.tyData.sBoardIdCreatedBy;
				tyBoardArrived1.tyData.eFailedBoard				:= p_tyUSBoardArrived1.tyData.eFailedBoard;
				tyBoardArrived1.tyData.sProductTypeId			:= p_tyUSBoardArrived1.tyData.sProductTypeId;
				tyBoardArrived1.tyData.eFlippedBoard		  	:= p_tyUSBoardArrived1.tyData.eFlippedBoard;
				tyBoardArrived1.tyData.sTopBarcode				:= p_tyUSBoardArrived1.tyData.sTopBarcode;
				tyBoardArrived1.tyData.sBottomBarcode			:= p_tyUSBoardArrived1.tyData.sBottomBarcode;
				tyBoardArrived1.tyData.rLength					:= p_tyUSBoardArrived1.tyData.rLength;
				tyBoardArrived1.tyData.rWidth				    := p_tyUSBoardArrived1.tyData.rWidth;
				tyBoardArrived1.tyData.rThickness				:= p_tyUSBoardArrived1.tyData.rThickness;
				tyBoardArrived1.tyData.rConveyorSpeed		    := p_tyUSBoardArrived1.tyData.rConveyorSpeed;
				tyBoardArrived1.tyData.rTopClearanceHeight		:= p_tyUSBoardArrived1.tyData.rTopClearanceHeight;
				tyBoardArrived1.tyData.rBottomClearanceHeight	:= p_tyUSBoardArrived1.tyData.rBottomClearanceHeight;
				tyBoardArrived1.tyData.rWeight					:= p_tyUSBoardArrived1.tyData.rWeight;
				tyBoardArrived1.tyData.sWorkOrdedId             := p_tyUSBoardArrived1.tyData.sWorkOrderId;
				tyBoardArrived1.tyData.sBatchId                 := p_tyUSBoardArrived1.tyData.sBatchId;
			 
			    tyBoardArrived1.tyAvl.bMachineId				:= tyBoardArrived1.tyData.sMachineId <> '';
		     	tyBoardArrived1.tyAvl.bUpstreamLaneId			:= tyBoardArrived1.tyData.iUpstreamLaneId <> 0;
		    	tyBoardArrived1.tyAvl.bUpstreamInterfaceId		:= tyBoardArrived1.tyData.sUpstreamInterfaceId <> '';
		    	tyBoardArrived1.tyAvl.bMagazineId		    	:= tyBoardArrived1.tyData.sMagazineId <> '';
		    	tyBoardArrived1.tyAvl.bSlotId				    := tyBoardArrived1.tyData.iSlotId <> 0;
		    	tyBoardArrived1.tyAvl.bBoardTransfer			:= TRUE;
				tyBoardArrived1.tyAvl.bBoardId					:= tyBoardArrived1.tyData.sBoardId <> '';
				tyBoardArrived1.tyAvl.bBoardIdCreatedBy			:= tyBoardArrived1.tyData.sBoardIdCreatedBy <> '';
				tyBoardArrived1.tyAvl.bFailedBoard				:= TRUE;
				tyBoardArrived1.tyAvl.bProductTypeId		  	:= tyBoardArrived1.tyData.sProductTypeId <> '';
				tyBoardArrived1.tyAvl.bFlippedBoard				:= TRUE;
				tyBoardArrived1.tyAvl.bTopBarcode			    := tyBoardArrived1.tyData.sTopBarcode <> '';
				tyBoardArrived1.tyAvl.bBottomBarcode		   	:= tyBoardArrived1.tyData.sBottomBarcode <> '';
				tyBoardArrived1.tyAvl.bLength				    := tyBoardArrived1.tyData.rLength <> 0;
				tyBoardArrived1.tyAvl.bWidth				  	:= (tyBoardArrived1.tyData.rWidth <> 0);
				tyBoardArrived1.tyAvl.bThickness			   	:= (tyBoardArrived1.tyData.rThickness <> 0);
				tyBoardArrived1.tyAvl.bConveyorSpeed		   	:= tyBoardArrived1.tyData.rConveyorSpeed <> 0;
				tyBoardArrived1.tyAvl.bTopClearanceHeight	    := (tyBoardArrived1.tyData.rTopClearanceHeight <> 0);
				tyBoardArrived1.tyAvl.bBottomClearanceHeight    := (tyBoardArrived1.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardArrived1.tyAvl.bWeight				    := tyBoardArrived1.tyData.rWeight <> 0;
				tyBoardArrived1.tyAvl.bWorkOrderId				:= tyBoardArrived1.tyData.sWorkOrdedId <> '';
				tyBoardArrived1.tyAvl.bBatchId			    	:= tyBoardArrived1.tyData.sBatchId <> '';
		
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
