
(* Hermes Sequence For Upstream *)
FUNCTION_BLOCK fbHermesSequenceUS
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF (bRstState = TRUE) AND (eState <> HermesStateNotConnected) AND (eState <> HermesStateServiceDescription) THEN
			eState			:= HermesStateNotAvailableNotReady;
			bBoardAvailable	:= FALSE;
		END_IF
		
		eMsgTypeSnd	:= HermesMsgTypeNA;
		
		CASE eState OF
		
			HermesStateNotConnected:
				eMsgTypeSnd	:= HermesMsgTypeServiceDescription;

				eState	:= HermesStateServiceDescription;
			
			HermesStateServiceDescription:
				IF p_tyMsgTypeRcv.bServiceDescription = TRUE THEN

					p_tyMsgTypeRcv.bServiceDescription	:= FALSE;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				END_IF
		
			HermesStateNotAvailableNotReady:
				
				IF  bProcessBoardForecastId THEN 
					
					eState	:= HermesStateNotAvailableNotReady;
				
				ELSIF bRdyRcv = TRUE AND bBlkUS = FALSE THEN //bRdyRcv = Machine in OpsG step USCommTmr (Have USB)
				
					eMsgTypeSnd	:= HermesMsgTypeMachineReady;
				
					eState	:= HermesStateMachineReady;
				
				ELSIF p_tyMsgTypeRcv.bBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= TRUE;
				
					eState	:= HermesStateBoardAvailable;
				
				END_IF
			
				
			HermesStateBoardAvailable:
				IF bRdyRcv = TRUE AND bBlkUS = FALSE THEN //bRdyRcv = Machine in OpsG step USCommTmr (Have USB)
				
					eMsgTypeSnd	:= HermesMsgTypeMachineReady;
				
					eState	:= HermesStateAvailableAndReady;
				
				ELSIF p_tyMsgTypeRcv.bRevokeBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bRevokeBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= FALSE;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				END_IF
			
			HermesStateMachineReady:
						
				IF  EDGEPOS(bProcessBoardForecastId) THEN 
						
					eMsgTypeSnd	:= HermesMsgTypeRevokeMachineReady;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				ELSIF bRdyRcv = FALSE OR bBlkUS = TRUE THEN //bRdyRcv = Machine in OpsG step USCommTmr (Have USB)
				
					eMsgTypeSnd	:= HermesMsgTypeRevokeMachineReady;
				
					eState	:= HermesStateNotAvailableNotReady;
					
				ELSIF p_tyMsgTypeRcv.bBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= TRUE;
				
					eState	:= HermesStateAvailableAndReady;
				
				END_IF
		
			HermesStateAvailableAndReady:
				IF bRdyRcv = FALSE OR bBlkUS = TRUE THEN
				
					eMsgTypeSnd	:= HermesMsgTypeRevokeMachineReady;
				
					eState	:= HermesStateBoardAvailable;
				
				ELSIF p_tyMsgTypeRcv.bRevokeBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bRevokeBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= FALSE;
				
					eState	:= HermesStateMachineReady;
				
				ELSIF bRdyTransport = TRUE AND bBlkUS = FALSE THEN
				
					eMsgTypeSnd		:= HermesMsgTypeStartTransport;
					bStopTransport	:= FALSE;
				
					eState	:= HermesStateTransporting;
				
				END_IF
			
			HermesStateTransporting:
				IF bRcvCompl OR bRcvIncompl OR bRcvNotStart THEN
				
					eMsgTypeSnd		:= HermesMsgTypeStopTransport;
					bStopTransport	:= bRcvIncompl OR bRcvNotStart;
				
					eState	:= HermesStateTransportStopped;
				
				ELSIF p_tyMsgTypeRcv.bTransportFinished = TRUE THEN
				
					p_tyMsgTypeRcv.bTransportFinished	:= FALSE;
				
					eState	:= HermesStateTransportFinished;
				
				END_IF
		
				IF p_tyMsgTypeRcv.bBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= TRUE;
				
				END_IF
		
				IF p_tyMsgTypeRcv.bRevokeBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bRevokeBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= FALSE;
				
				END_IF
		
			HermesStateTransportFinished:
				IF bRcvCompl OR bRcvIncompl OR bRcvNotStart THEN
				
					eMsgTypeSnd		:= HermesMsgTypeStopTransport;
					bStopTransport	:= bRcvIncompl OR bRcvNotStart;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				END_IF
		
			HermesStateTransportStopped:
				IF p_tyMsgTypeRcv.bTransportFinished = TRUE THEN
				
					p_tyMsgTypeRcv.bTransportFinished	:= FALSE;
				
					eState	:= HermesStateNotAvailableNotReady;
				
				END_IF
		
				IF p_tyMsgTypeRcv.bBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= TRUE;
				
				END_IF
		
				IF p_tyMsgTypeRcv.bRevokeBoardAvailable = TRUE THEN
				
					p_tyMsgTypeRcv.bRevokeBoardAvailable	:= FALSE;
				
					bBoardAvailable	:= FALSE;
				
				END_IF
		
		END_CASE
		
		bNotAvlNotRdy   := (eState = HermesStateNotAvailableNotReady);
		bUSRdy			:= (eState = HermesStateBoardAvailable) OR (eState = HermesStateAvailableAndReady) OR (eState >= HermesStateTransporting);
		bDSRdy			:= (eState = HermesStateMachineReady) OR (eState = HermesStateAvailableAndReady) OR (eState >= HermesStateTransporting);
		bTransporting	:= eState >= HermesStateTransporting;
	
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		bBoardAvailable	:= FALSE;
		bUSRdy			:= FALSE;
		bDSRdy			:= FALSE;
		bTransporting	:= FALSE;
		bStopTransport	:= FALSE;
		eState			:= HermesStateNotConnected;
		
	END_IF
	
END_FUNCTION_BLOCK
