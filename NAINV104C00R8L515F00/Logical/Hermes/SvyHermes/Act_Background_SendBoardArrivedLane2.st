(** 2021-08-01 **)
ACTION Act_Background_SendBoardArrivedLane2: //Send after our machine send out "StopTransport" message to upstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bUSHermesStopTransport2) THEN
	
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardArrived2);
			
				tyBoardArrived2.tyData.sMachineId     	        := p_sMcId;
				tyBoardArrived2.tyData.iUpstreamLaneId    	    := p_tyHermesConfiguration.a_tyUSParam[1].iLaneID;
				tyBoardArrived2.tyData.sUpstreamInterfaceId     := p_tyHermesConfiguration.a_tyUSParam[1].sUpstreamInterfaceId;
				tyBoardArrived2.tyData.sMagazineId           	:= sMagazineId;
				tyBoardArrived2.tyData.iSlotId     	            := iSlotId; 
				tyBoardArrived2.tyData.eBoadTransfer    	    := HermesTransferred;
				tyBoardArrived2.tyData.sBoardId     	        := p_tyUSBoardArrived2.tyData.sBoardId;
				tyBoardArrived2.tyData.sBoardIdCreatedBy     	:= p_tyUSBoardArrived2.tyData.sBoardIdCreatedBy;
				tyBoardArrived2.tyData.eFailedBoard				:= p_tyUSBoardArrived2.tyData.eFailedBoard;
				tyBoardArrived2.tyData.sProductTypeId			:= p_tyUSBoardArrived2.tyData.sProductTypeId;
				tyBoardArrived2.tyData.eFlippedBoard		  	:= p_tyUSBoardArrived2.tyData.eFlippedBoard;
				tyBoardArrived2.tyData.sTopBarcode				:= p_tyUSBoardArrived2.tyData.sTopBarcode;
				tyBoardArrived2.tyData.sBottomBarcode			:= p_tyUSBoardArrived2.tyData.sBottomBarcode;
				tyBoardArrived2.tyData.rLength					:= p_tyUSBoardArrived2.tyData.rLength;
				tyBoardArrived2.tyData.rWidth				    := p_tyUSBoardArrived2.tyData.rWidth;
				tyBoardArrived2.tyData.rThickness				:= p_tyUSBoardArrived2.tyData.rThickness;
				tyBoardArrived2.tyData.rConveyorSpeed		    := p_tyUSBoardArrived2.tyData.rConveyorSpeed;
				tyBoardArrived2.tyData.rTopClearanceHeight		:= p_tyUSBoardArrived2.tyData.rTopClearanceHeight;
				tyBoardArrived2.tyData.rBottomClearanceHeight	:= p_tyUSBoardArrived2.tyData.rBottomClearanceHeight;
				tyBoardArrived2.tyData.rWeight					:= p_tyUSBoardArrived2.tyData.rWeight;
				tyBoardArrived2.tyData.sWorkOrdedId             := p_tyUSBoardArrived2.tyData.sWorkOrderId;
				tyBoardArrived2.tyData.sBatchId                 := p_tyUSBoardArrived2.tyData.sBatchId;
			 
			    tyBoardArrived2.tyAvl.bMachineId				:= tyBoardArrived2.tyData.sMachineId <> '';
		     	tyBoardArrived2.tyAvl.bUpstreamLaneId			:= tyBoardArrived2.tyData.iUpstreamLaneId <> 0;
		    	tyBoardArrived2.tyAvl.bUpstreamInterfaceId		:= tyBoardArrived2.tyData.sUpstreamInterfaceId <> '';
		    	tyBoardArrived2.tyAvl.bMagazineId		    	:= tyBoardArrived2.tyData.sMagazineId <> '';
		    	tyBoardArrived2.tyAvl.bSlotId				    := tyBoardArrived2.tyData.iSlotId <> 0;
		    	tyBoardArrived2.tyAvl.bBoardTransfer			:= TRUE;
				tyBoardArrived2.tyAvl.bBoardId					:= tyBoardArrived2.tyData.sBoardId <> '';
				tyBoardArrived2.tyAvl.bBoardIdCreatedBy			:= tyBoardArrived2.tyData.sBoardIdCreatedBy <> '';
				tyBoardArrived2.tyAvl.bFailedBoard				:= TRUE;
				tyBoardArrived2.tyAvl.bProductTypeId		  	:= tyBoardArrived2.tyData.sProductTypeId <> '';
				tyBoardArrived2.tyAvl.bFlippedBoard				:= TRUE;
				tyBoardArrived2.tyAvl.bTopBarcode			    := tyBoardArrived2.tyData.sTopBarcode <> '';
				tyBoardArrived2.tyAvl.bBottomBarcode		   	:= tyBoardArrived2.tyData.sBottomBarcode <> '';
				tyBoardArrived2.tyAvl.bLength				    := tyBoardArrived2.tyData.rLength <> 0;
				tyBoardArrived2.tyAvl.bWidth				  	:= (tyBoardArrived2.tyData.rWidth <> 0);
				tyBoardArrived2.tyAvl.bThickness			   	:= (tyBoardArrived2.tyData.rThickness <> 0);
				tyBoardArrived2.tyAvl.bConveyorSpeed		   	:= tyBoardArrived2.tyData.rConveyorSpeed <> 0;
				tyBoardArrived2.tyAvl.bTopClearanceHeight	    := (tyBoardArrived2.tyData.rTopClearanceHeight <> 0);
				tyBoardArrived2.tyAvl.bBottomClearanceHeight    := (tyBoardArrived2.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardArrived2.tyAvl.bWeight				    := tyBoardArrived2.tyData.rWeight <> 0;
				tyBoardArrived2.tyAvl.bWorkOrderId				:= tyBoardArrived2.tyData.sWorkOrdedId <> '';
				tyBoardArrived2.tyAvl.bBatchId			    	:= tyBoardArrived2.tyData.sBatchId <> '';
		
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
