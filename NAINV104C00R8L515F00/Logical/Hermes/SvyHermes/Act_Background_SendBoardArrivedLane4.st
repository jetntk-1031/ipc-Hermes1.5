(** 2021-08-01 **)
ACTION Act_Background_SendBoardArrivedLane4: //Send after our machine send out "StopTransport" message to upstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bUSHermesStopTransport4) THEN
	
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardArrived4);
			
				tyBoardArrived4.tyData.sMachineId     	        := p_sMcId;
				tyBoardArrived4.tyData.iUpstreamLaneId    	    := p_tyHermesConfiguration.a_tyUSParam[3].iLaneID;
				tyBoardArrived4.tyData.sUpstreamInterfaceId     := p_tyHermesConfiguration.a_tyUSParam[3].sUpstreamInterfaceId;
				tyBoardArrived4.tyData.sMagazineId           	:= sMagazineId;
				tyBoardArrived4.tyData.iSlotId     	            := iSlotId; 
				tyBoardArrived4.tyData.eBoadTransfer    	    := HermesTransferred;
				tyBoardArrived4.tyData.sBoardId     	        := p_tyUSBoardArrived4.tyData.sBoardId;
				tyBoardArrived4.tyData.sBoardIdCreatedBy     	:= p_tyUSBoardArrived4.tyData.sBoardIdCreatedBy;
				tyBoardArrived4.tyData.eFailedBoard				:= p_tyUSBoardArrived4.tyData.eFailedBoard;
				tyBoardArrived4.tyData.sProductTypeId			:= p_tyUSBoardArrived4.tyData.sProductTypeId;
				tyBoardArrived4.tyData.eFlippedBoard		  	:= p_tyUSBoardArrived4.tyData.eFlippedBoard;
				tyBoardArrived4.tyData.sTopBarcode				:= p_tyUSBoardArrived4.tyData.sTopBarcode;
				tyBoardArrived4.tyData.sBottomBarcode			:= p_tyUSBoardArrived4.tyData.sBottomBarcode;
				tyBoardArrived4.tyData.rLength					:= p_tyUSBoardArrived4.tyData.rLength;
				tyBoardArrived4.tyData.rWidth				    := p_tyUSBoardArrived4.tyData.rWidth;
				tyBoardArrived4.tyData.rThickness				:= p_tyUSBoardArrived4.tyData.rThickness;
				tyBoardArrived4.tyData.rConveyorSpeed		    := p_tyUSBoardArrived4.tyData.rConveyorSpeed;
				tyBoardArrived4.tyData.rTopClearanceHeight		:= p_tyUSBoardArrived4.tyData.rTopClearanceHeight;
				tyBoardArrived4.tyData.rBottomClearanceHeight	:= p_tyUSBoardArrived4.tyData.rBottomClearanceHeight;
				tyBoardArrived4.tyData.rWeight					:= p_tyUSBoardArrived4.tyData.rWeight;
				tyBoardArrived4.tyData.sWorkOrdedId             := p_tyUSBoardArrived4.tyData.sWorkOrderId;
				tyBoardArrived4.tyData.sBatchId                 := p_tyUSBoardArrived4.tyData.sBatchId;
			 
			    tyBoardArrived4.tyAvl.bMachineId				:= tyBoardArrived4.tyData.sMachineId <> '';
		     	tyBoardArrived4.tyAvl.bUpstreamLaneId			:= tyBoardArrived4.tyData.iUpstreamLaneId <> 0;
		    	tyBoardArrived4.tyAvl.bUpstreamInterfaceId		:= tyBoardArrived4.tyData.sUpstreamInterfaceId <> '';
		    	tyBoardArrived4.tyAvl.bMagazineId		    	:= tyBoardArrived4.tyData.sMagazineId <> '';
		    	tyBoardArrived4.tyAvl.bSlotId				    := tyBoardArrived4.tyData.iSlotId <> 0;
		    	tyBoardArrived4.tyAvl.bBoardTransfer			:= TRUE;
				tyBoardArrived4.tyAvl.bBoardId					:= tyBoardArrived4.tyData.sBoardId <> '';
				tyBoardArrived4.tyAvl.bBoardIdCreatedBy			:= tyBoardArrived4.tyData.sBoardIdCreatedBy <> '';
				tyBoardArrived4.tyAvl.bFailedBoard				:= TRUE;
				tyBoardArrived4.tyAvl.bProductTypeId		  	:= tyBoardArrived4.tyData.sProductTypeId <> '';
				tyBoardArrived4.tyAvl.bFlippedBoard				:= TRUE;
				tyBoardArrived4.tyAvl.bTopBarcode			    := tyBoardArrived4.tyData.sTopBarcode <> '';
				tyBoardArrived4.tyAvl.bBottomBarcode		   	:= tyBoardArrived4.tyData.sBottomBarcode <> '';
				tyBoardArrived4.tyAvl.bLength				    := tyBoardArrived4.tyData.rLength <> 0;
				tyBoardArrived4.tyAvl.bWidth				  	:= (tyBoardArrived4.tyData.rWidth <> 0);
				tyBoardArrived4.tyAvl.bThickness			   	:= (tyBoardArrived4.tyData.rThickness <> 0);
				tyBoardArrived4.tyAvl.bConveyorSpeed		   	:= tyBoardArrived4.tyData.rConveyorSpeed <> 0;
				tyBoardArrived4.tyAvl.bTopClearanceHeight	    := (tyBoardArrived4.tyData.rTopClearanceHeight <> 0);
				tyBoardArrived4.tyAvl.bBottomClearanceHeight    := (tyBoardArrived4.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardArrived4.tyAvl.bWeight				    := tyBoardArrived4.tyData.rWeight <> 0;
				tyBoardArrived4.tyAvl.bWorkOrderId				:= tyBoardArrived4.tyData.sWorkOrdedId <> '';
				tyBoardArrived4.tyAvl.bBatchId			    	:= tyBoardArrived4.tyData.sBatchId <> '';
		
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
