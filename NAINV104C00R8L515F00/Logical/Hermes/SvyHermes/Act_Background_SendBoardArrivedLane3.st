(** 2021-08-01 **)
ACTION Act_Background_SendBoardArrivedLane3: //Send after our machine send out "StopTransport" message to upstream
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking = TRUE AND p_tyParam.bFeatureBoardTracking AND bHandshakeDone THEN
			IF EDGEPOS(p_bUSHermesStopTransport3) THEN
	
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeBoardArrived3);
			
				tyBoardArrived3.tyData.sMachineId     	        := p_sMcId;
				tyBoardArrived3.tyData.iUpstreamLaneId    	    := p_tyHermesConfiguration.a_tyUSParam[2].iLaneID;
				tyBoardArrived3.tyData.sUpstreamInterfaceId     := p_tyHermesConfiguration.a_tyUSParam[2].sUpstreamInterfaceId;
				tyBoardArrived3.tyData.sMagazineId           	:= sMagazineId;
				tyBoardArrived3.tyData.iSlotId     	            := iSlotId; 
				tyBoardArrived3.tyData.eBoadTransfer    	    := HermesTransferred;
				tyBoardArrived3.tyData.sBoardId     	        := p_tyUSBoardArrived3.tyData.sBoardId;
				tyBoardArrived3.tyData.sBoardIdCreatedBy     	:= p_tyUSBoardArrived3.tyData.sBoardIdCreatedBy;
				tyBoardArrived3.tyData.eFailedBoard				:= p_tyUSBoardArrived3.tyData.eFailedBoard;
				tyBoardArrived3.tyData.sProductTypeId			:= p_tyUSBoardArrived3.tyData.sProductTypeId;
				tyBoardArrived3.tyData.eFlippedBoard		  	:= p_tyUSBoardArrived3.tyData.eFlippedBoard;
				tyBoardArrived3.tyData.sTopBarcode				:= p_tyUSBoardArrived3.tyData.sTopBarcode;
				tyBoardArrived3.tyData.sBottomBarcode			:= p_tyUSBoardArrived3.tyData.sBottomBarcode;
				tyBoardArrived3.tyData.rLength					:= p_tyUSBoardArrived3.tyData.rLength;
				tyBoardArrived3.tyData.rWidth				    := p_tyUSBoardArrived3.tyData.rWidth;
				tyBoardArrived3.tyData.rThickness				:= p_tyUSBoardArrived3.tyData.rThickness;
				tyBoardArrived3.tyData.rConveyorSpeed		    := p_tyUSBoardArrived3.tyData.rConveyorSpeed;
				tyBoardArrived3.tyData.rTopClearanceHeight		:= p_tyUSBoardArrived3.tyData.rTopClearanceHeight;
				tyBoardArrived3.tyData.rBottomClearanceHeight	:= p_tyUSBoardArrived3.tyData.rBottomClearanceHeight;
				tyBoardArrived3.tyData.rWeight					:= p_tyUSBoardArrived3.tyData.rWeight;
				tyBoardArrived3.tyData.sWorkOrdedId             := p_tyUSBoardArrived3.tyData.sWorkOrderId;
				tyBoardArrived3.tyData.sBatchId                 := p_tyUSBoardArrived3.tyData.sBatchId;
			 
			    tyBoardArrived3.tyAvl.bMachineId				:= tyBoardArrived3.tyData.sMachineId <> '';
		     	tyBoardArrived3.tyAvl.bUpstreamLaneId			:= tyBoardArrived3.tyData.iUpstreamLaneId <> 0;
		    	tyBoardArrived3.tyAvl.bUpstreamInterfaceId		:= tyBoardArrived3.tyData.sUpstreamInterfaceId <> '';
		    	tyBoardArrived3.tyAvl.bMagazineId		    	:= tyBoardArrived3.tyData.sMagazineId <> '';
		    	tyBoardArrived3.tyAvl.bSlotId				    := tyBoardArrived3.tyData.iSlotId <> 0;
		    	tyBoardArrived3.tyAvl.bBoardTransfer			:= TRUE;
				tyBoardArrived3.tyAvl.bBoardId					:= tyBoardArrived3.tyData.sBoardId <> '';
				tyBoardArrived3.tyAvl.bBoardIdCreatedBy			:= tyBoardArrived3.tyData.sBoardIdCreatedBy <> '';
				tyBoardArrived3.tyAvl.bFailedBoard				:= TRUE;
				tyBoardArrived3.tyAvl.bProductTypeId		  	:= tyBoardArrived3.tyData.sProductTypeId <> '';
				tyBoardArrived3.tyAvl.bFlippedBoard				:= TRUE;
				tyBoardArrived3.tyAvl.bTopBarcode			    := tyBoardArrived3.tyData.sTopBarcode <> '';
				tyBoardArrived3.tyAvl.bBottomBarcode		   	:= tyBoardArrived3.tyData.sBottomBarcode <> '';
				tyBoardArrived3.tyAvl.bLength				    := tyBoardArrived3.tyData.rLength <> 0;
				tyBoardArrived3.tyAvl.bWidth				  	:= (tyBoardArrived3.tyData.rWidth <> 0);
				tyBoardArrived3.tyAvl.bThickness			   	:= (tyBoardArrived3.tyData.rThickness <> 0);
				tyBoardArrived3.tyAvl.bConveyorSpeed		   	:= tyBoardArrived3.tyData.rConveyorSpeed <> 0;
				tyBoardArrived3.tyAvl.bTopClearanceHeight	    := (tyBoardArrived3.tyData.rTopClearanceHeight <> 0);
				tyBoardArrived3.tyAvl.bBottomClearanceHeight    := (tyBoardArrived3.tyData.rBottomClearanceHeight <> 0);
		    	tyBoardArrived3.tyAvl.bWeight				    := tyBoardArrived3.tyData.rWeight <> 0;
				tyBoardArrived3.tyAvl.bWorkOrderId				:= tyBoardArrived3.tyData.sWorkOrdedId <> '';
				tyBoardArrived3.tyAvl.bBatchId			    	:= tyBoardArrived3.tyData.sBatchId <> '';
		
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
