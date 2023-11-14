
(* Hermes Sequence For Downstream *)
FUNCTION_BLOCK fbHermesSequenceDS
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF (bRstState = TRUE) AND (eState <> HermesStateNotConnected) AND (eState <> HermesStateServiceDescription) THEN
			eState	:= HermesStateNotAvailableNotReady;
		END_IF
		
		eMsgTypeSnd	:= HermesMsgTypeNA;
		
		CASE eState OF
		
			HermesStateNotConnected:
				IF p_tyMsgTypeRcv.bServiceDescription = TRUE THEN
			
					p_tyMsgTypeRcv.bServiceDescription	:= FALSE;
				
					eState	:= HermesStateServiceDescription;
				
				END_IF
			
			HermesStateServiceDescription:
				eMsgTypeSnd	:= HermesMsgTypeServiceDescription;
				
				eState	:= HermesStateNotAvailableNotReady;
		
			HermesStateNotAvailableNotReady:
				
				IF bFeatureBoardForecast = TRUE THEN
					IF bOpsRun THEN
						IF  bSendBFId = TRUE AND bBFIdSent = FALSE THEN 
							eMsgTypeSnd	:= HermesMsgTypeBoardForecastId; //Send BoardForecast(Id) after a Changeover with all zones free
						
						ELSIF bSendBFId = FALSE  AND EDGEPOS(bSendBFNoID) THEN
							eMsgTypeSnd	:= HermesMsgTypeBoardForecastNoId; //Send BoardForecast() when PCB_In (Have Board) at first zone					
						
						END_IF
					END_IF
				END_IF
				
				
				IF bRdySnd = TRUE AND bBlkDS = FALSE AND bSendBFId = FALSE (*AND bFirstZoneEndSen*) AND bFeatureBoardForecast = TRUE THEN
				
					eMsgTypeSnd	:= HermesMsgTypeBoardAvailable;
				
					eState	:= HermesStateBoardAvailable;
					
				ELSIF bRdySnd = TRUE AND bBlkDS  = FALSE AND bSendBFId = FALSE AND bFeatureBoardForecast = FALSE  THEN
				
						eMsgTypeSnd	:= HermesMsgTypeBoardAvailable;
				
						eState	:= HermesStateBoardAvailable;	
				
				ELSIF p_tyMsgTypeRcv.bMachineReady = TRUE THEN
				
					p_tyMsgTypeRcv.bMachineReady	:= FALSE;
				
					eState	:= HermesStateMachineReady;
				
				END_IF
		
			HermesStateBoardAvailable:
				IF (bRdySnd = FALSE OR bBlkDS = TRUE) AND bSendBFId = FALSE THEN
				
					eMsgTypeSnd	:= HermesMsgTypeRevokeBoardAvl;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				ELSIF p_tyMsgTypeRcv.bMachineReady = TRUE THEN
				
					p_tyMsgTypeRcv.bMachineReady	:= FALSE;
				
					eState	:= HermesStateAvailableAndReady;
				
				END_IF
		
			HermesStateMachineReady:
				
				IF bFeatureBoardForecast = TRUE THEN
					IF bOpsRun THEN
						IF bSendBFId = TRUE AND bBFIdSent = FALSE  THEN 
							eMsgTypeSnd	:= HermesMsgTypeBoardForecastId; //Send BoardForecast(Id) after a Changeover with all zones free
			
						ELSIF  bSendBFId = FALSE  AND EDGEPOS(bSendBFNoID) THEN
					
							eMsgTypeSnd	:= HermesMsgTypeBoardForecastNoId; //Send BoardForecast() when PCB_In (Have Board) at first zone	
										
						END_IF
					END_IF

				END_IF
				
				
				IF (bRdySnd = TRUE AND bBlkDS = FALSE )AND bSendBFId = FALSE (*AND bFirstZoneEndSen*) AND bFeatureBoardForecast = TRUE THEN
				
					eMsgTypeSnd	:= HermesMsgTypeBoardAvailable;
				
					eState	:= HermesStateAvailableAndReady;
					
				ELSIF (bRdySnd = TRUE AND bBlkDS = FALSE ) AND bSendBFId = FALSE AND bFeatureBoardForecast = FALSE  THEN
				
					eMsgTypeSnd	:= HermesMsgTypeBoardAvailable;
					
							
					eState	:= HermesStateAvailableAndReady;
				
				ELSIF p_tyMsgTypeRcv.bRevokeMachineReady = TRUE THEN
				
					p_tyMsgTypeRcv.bRevokeMachineReady	:= FALSE;
				
					eState	:= HermesStateNotAvailableNotReady;
					
				ELSIF p_tyMsgTypeRcv.bStartTransport = TRUE AND bSendBFId = FALSE THEN
					
					p_tyMsgTypeRcv.bStartTransport	:= FALSE;
					bStopTransport					:= FALSE;
					
					eState	:= HermesStateTransporting;
				
				END_IF
			
			HermesStateAvailableAndReady:
				IF bRdySnd = FALSE  OR  bBlkDS = TRUE THEN
				
					eMsgTypeSnd	:= HermesMsgTypeRevokeBoardAvl;
				
					eState	:= HermesStateMachineReady;
				
				ELSIF p_tyMsgTypeRcv.bRevokeMachineReady = TRUE THEN
				
					p_tyMsgTypeRcv.bRevokeMachineReady	:= FALSE;
				
					eState	:= HermesStateBoardAvailable;
				
				ELSIF p_tyMsgTypeRcv.bStartTransport = TRUE THEN
				
					p_tyMsgTypeRcv.bStartTransport	:= FALSE;
					bStopTransport					:= FALSE;
				
					eState	:= HermesStateTransporting;
				
				END_IF
			
			HermesStateTransporting:
				IF bSndCompl OR bSndIncompl OR bSndNotStart THEN
				
					eMsgTypeSnd		:= HermesMsgTypeTransportFinished;
					bStopTransport	:= bSndIncompl OR bSndNotStart;
				
					eState	:= HermesStateTransportFinished;
				
				ELSIF p_tyMsgTypeRcv.bStopTransport = TRUE THEN
				
					p_tyMsgTypeRcv.bStopTransport	:= FALSE;
				
					eState	:= HermesStateTransportStopped;
				
				END_IF
		
			HermesStateTransportFinished:
				IF p_tyMsgTypeRcv.bStopTransport = TRUE THEN
				
					p_tyMsgTypeRcv.bStopTransport	:= FALSE;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				END_IF
		
			HermesStateTransportStopped:
				IF bSndCompl OR bSndIncompl OR bSndNotStart THEN
				
					eMsgTypeSnd		:= HermesMsgTypeTransportFinished;
					bStopTransport	:= bSndIncompl OR bSndNotStart;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				END_IF
		
		END_CASE
	
		bUSRdy			:= (eState = HermesStateBoardAvailable) OR (eState = HermesStateAvailableAndReady) OR (eState >= HermesStateTransporting);
		bDSRdy			:= (eState = HermesStateMachineReady) OR (eState = HermesStateAvailableAndReady) OR (eState >= HermesStateTransporting);
		bTransporting	:= eState >= HermesStateTransporting;
	
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		bUSRdy			:= FALSE;
		bDSRdy			:= FALSE;
		bTransporting	:= FALSE;
		bStopTransport	:= FALSE;
		
		eState	:= HermesStateNotConnected;
		
	END_IF
	
END_FUNCTION_BLOCK
