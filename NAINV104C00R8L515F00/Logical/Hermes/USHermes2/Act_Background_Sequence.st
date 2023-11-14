 (** 2019-05-04 **)
ACTION Act_Background_Sequence:
	
	IF eStatus1 <> Error THEN
		
		IF p_bOpsRun = FALSE THEN
			p_bRcvIncompl	:= TRUE;
		END_IF
		
		IF tyMsgTypeRcv.bTransportFinished = TRUE THEN
			IF tyTransportFinished.tyData.eTransferState = HermesTransferStateNotStarted THEN
				p_bRcvNotStart	:= TRUE;
			ELSIF tyTransportFinished.tyData.eTransferState = HermesTransferStateIncomplete THEN
				p_bRcvIncompl	:= TRUE;
			END_IF
		END_IF
		
		bBlkUS := bBABlkUS OR  bBFBlkUS OR bManuallInsertLastZone
			OR bReverseDSSndBfWBrdID
			OR bReverseRcvBlkUS 
			OR NOT(p_bHermesSwitchtoRvrseTransport); //no for reversal gate
		
		bBoardAvailableRcved := tyMsgTypeRcv.bBoardAvailable;
		
		//Sequence
		fbSequenceUS.bRstState		:= bRstState;
		fbSequenceUS.bRdyRcv		:= (p_bRdyRcv) AND (eStatus2 <> Error);
		fbSequenceUS.bBlkUS			:= bBlkUS;
		fbSequenceUS.bRdyTransport	:= p_bRdyTransport;
		fbSequenceUS.bRcvCompl		:= p_bRcvCompl;
		fbSequenceUS.bRcvIncompl	:= p_bRcvIncompl;
		fbSequenceUS.bRcvNotStart	:= p_bRcvNotStart;
		fbSequenceUS.bProcessBoardForecastId     	:= bProcessBoardForecastId; //Received BoardForecastId
		
		fbSequenceUS(bEn := TRUE);
		
		bNotAvlNotRdy                               := fbSequenceUS.bNotAvlNotRdy;
		
		bUSRdy		                               	:= fbSequenceUS.bUSRdy; //bUSRdy:= (eState = HermesStateBoardAvailable) OR (eState = HermesStateAvailableAndReady) OR (eState >= HermesStateTransporting);
		bDSRdy		                               	:= fbSequenceUS.bDSRdy;
		bTransporting                             	:= fbSequenceUS.bTransporting;
		bStopTransport                            	:= fbSequenceUS.bStopTransport;	
		bUSGdRdy                                   	:= (tyBoardAvailableRcv.tyAvl.bFailedBoard = FALSE) OR ((tyBoardAvailableRcv.tyAvl.bFailedBoard = TRUE) AND (tyBoardAvailableRcv.tyData.eFailedBoard <> HermesFailedBoard));
		bDSGdRdy                                   	:= (tyMachineReady.tyAvl.bFailedBoard = FALSE) OR ((tyMachineReady.tyAvl.bFailedBoard = TRUE) AND (tyMachineReady.tyData.eFailedBoard <> HermesFailedBoard));
		
		//Action (defined 1 as bypass, 2 as flip)
		iAction										:= (tyBoardAvailableRcv.tyAvl.bAction = TRUE)*(tyBoardAvailableRcv.tyData.iAction);
		
		IF fbSequenceUS.eState >= HermesStateNotAvailableNotReady THEN
			bHandshakeDone	:= TRUE;
		ELSE
			bHandshakeDone	:= FALSE;
		END_IF
		
		IF EDGEPOS(fbSequenceUS.eState = HermesStateTransporting) THEN
			p_bRcvCompl		:= FALSE;
			p_bRcvIncompl	:= FALSE;
			p_bRcvNotStart	:= FALSE;
		END_IF
		
		IF fbSequenceUS.eMsgTypeSnd = HermesMsgTypeServiceDescription THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeServiceDescription);
			
			tyServiceDescriptionSnd.tyData.sMachineId                                       := p_sMcId;
			tyServiceDescriptionSnd.tyData.iLaneId											:= p_tyParam.iLaneID;
			tyServiceDescriptionSnd.tyData.sInterfaceId										:= p_tyParam.sUpstreamInterfaceId;
			tyServiceDescriptionSnd.tyData.sVersion											:= p_sVersion;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCheckAliveResponse	:= (p_tyParam.bFeatureCheckAliveResponse) AND (p_tyParam.tRcvAlive <> T#0s) AND (p_tyParam.tSndAlive <> T#0s);
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureBoardForecast		:= p_tyParam.bFeatureBoardForecast;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureQueryBoardInfo		:= p_tyParam.bFeatureQueryBoardInfo;
			tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureSendBoardInfo		:= FALSE;
			
			tyServiceDescriptionSnd.tyAvl.bMachineId										:= TRUE;
			tyServiceDescriptionSnd.tyAvl.bLaneId											:= tyServiceDescriptionSnd.tyData.iLaneId <> 0;
			tyServiceDescriptionSnd.tyAvl.bInterfaceId										:= tyServiceDescriptionSnd.tyData.sInterfaceId <> '';
			tyServiceDescriptionSnd.tyAvl.bVersion											:= TRUE;
			tyServiceDescriptionSnd.tyAvl.bSupportedFeatures								:= p_tyParam.bFeatureCheckAliveResponse OR p_tyParam.bFeatureBoardForecast OR p_tyParam.bFeatureQueryBoardInfo;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse	:= (p_tyParam.bFeatureCheckAliveResponse) AND (p_tyParam.tRcvAlive <> T#0s) AND (p_tyParam.tSndAlive <> T#0s);
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureBoardForecast			:= p_tyParam.bFeatureBoardForecast;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo		:= p_tyParam.bFeatureQueryBoardInfo;
			tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo			:= FALSE;
			
		ELSIF fbSequenceUS.eMsgTypeSnd = HermesMsgTypeMachineReady THEN
			IF bReplyMcRdyId = FALSE THEN
				
			    fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeMachineReady);
			
		    	tyMachineReady.tyData.eFailedBoard			:= p_eFailedBoard;			
				tyMachineReady.tyAvl.bFailedBoard			:= TRUE;
			    tyMachineReady.tyAvl.bForecastId			:= FALSE;
				tyMachineReady.tyAvl.bBoardId				:= FALSE;
			    tyMachineReady.tyAvl.bProductTypeId			:= FALSE;
			    tyMachineReady.tyAvl.bFlippedBoard			:= FALSE;
			    tyMachineReady.tyAvl.bLength				:= FALSE;
			    tyMachineReady.tyAvl.bWidth					:= FALSE;
			    tyMachineReady.tyAvl.bThickness				:= FALSE;
			    tyMachineReady.tyAvl.bConveyorSpeed			:= FALSE;
			    tyMachineReady.tyAvl.bTopClearanceHeight	:= FALSE;
			    tyMachineReady.tyAvl.bBottomClearanceHeight	:= FALSE;
		    	tyMachineReady.tyAvl.bWeight				:= FALSE;
				tyMachineReady.tyAvl.bWorkOrderId			:= FALSE;
				tyMachineReady.tyAvl.bBatchId    			:= FALSE;

			ELSE
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeMachineReady);
			
				tyMachineReady.tyData.eFailedBoard			:= p_eFailedBoard;
				tyMachineReady.tyData.sForecastId	        := tyBoardForecastAcc.tyData.sForecastId;
				tyMachineReady.tyData.sProductTypeId	    := p_sRecipeNm;
				tyMachineReady.tyData.rWidth	            := DINT_TO_REAL(p_diWidthInUM) / 1000;
				tyMachineReady.tyAvl.bFailedBoard			:= TRUE;
				tyMachineReady.tyAvl.bForecastId			:= tyBoardForecastAcc.tyData.sForecastId<>'';
				tyMachineReady.tyAvl.bBoardId				:= FALSE;
				tyMachineReady.tyAvl.bProductTypeId			:= tyBoardForecastAcc.tyData.sProductTypeId<>'';
				tyMachineReady.tyAvl.bFlippedBoard			:= FALSE;
				tyMachineReady.tyAvl.bLength				:= FALSE;
				tyMachineReady.tyAvl.bWidth					:= tyMachineReady.tyData.rWidth<>0;
				tyMachineReady.tyAvl.bThickness				:= FALSE;
				tyMachineReady.tyAvl.bConveyorSpeed			:= FALSE;
				tyMachineReady.tyAvl.bTopClearanceHeight	:= FALSE;
				tyMachineReady.tyAvl.bBottomClearanceHeight	:= FALSE;
				tyMachineReady.tyAvl.bWeight				:= FALSE;
				tyMachineReady.tyAvl.bWorkOrderId			:= FALSE;
				tyMachineReady.tyAvl.bBatchId		    	:= FALSE;
						
			END_IF	
				
		ELSIF fbSequenceUS.eMsgTypeSnd = HermesMsgTypeRevokeMachineReady THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeRevokeMachineReady);
		
		ELSIF fbSequenceUS.eMsgTypeSnd = HermesMsgTypeStartTransport THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeStartTransport);
			
			tyStartTransport.tyData.sBoardId		:= tyBoardAvailableRcv.tyData.sBoardId;
			
			tyStartTransport.tyAvl.bBoardId			:= TRUE;
			tyStartTransport.tyAvl.bConveyorSpeed	:= FALSE;
		
		ELSIF fbSequenceUS.eMsgTypeSnd = HermesMsgTypeStopTransport THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeStopTransport);
			
			IF p_bRcvCompl = TRUE THEN
				tyStopTransport.tyData.eTransferState	:= HermesTransferStateComplete;
			ELSIF p_bRcvIncompl = TRUE THEN
				tyStopTransport.tyData.eTransferState	:= HermesTransferStateIncomplete;
			ELSE
				tyStopTransport.tyData.eTransferState	:= HermesTransferStateNotStarted;
			END_IF
			tyStopTransport.tyData.sBoardId				:= tyStartTransport.tyData.sBoardId;
			
			tyStopTransport.tyAvl.bTransferState		:= TRUE;
			tyStopTransport.tyAvl.bBoardId				:= TRUE;
		
		END_IF
		
	END_IF

	bStopTransportSent := fbSequenceUS.eMsgTypeSnd = HermesMsgTypeStopTransport;

	
END_ACTION
