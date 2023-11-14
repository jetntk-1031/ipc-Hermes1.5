
(* Hermes Sequence For Supervisory System *)
FUNCTION_BLOCK fbHermesSequenceSvy
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF (bRstState = TRUE) AND (eState <> HermesStateNotConnected) AND (eState <> HermesStateSServiceDescription) THEN
			eState	:= HermesStateConnected;
		END_IF
		
		eMsgTypeSnd	:= HermesMsgTypeNA;
		
		CASE eState OF
		
			HermesStateNotConnected:
				IF p_tyMsgTypeRcv.bSServiceDescription = TRUE THEN
			
					p_tyMsgTypeRcv.bSServiceDescription	:= FALSE;
				
					eState	:= HermesStateSServiceDescription;
				
				END_IF
			
			HermesStateSServiceDescription:
				eMsgTypeSnd	:= HermesMsgTypeSServiceDescription;
				
				eState	:= HermesStateConnected;
		
			HermesStateConnected:
				IF p_tyMsgTypeRcv.bGetConfiguration = TRUE THEN
			
					p_tyMsgTypeRcv.bGetConfiguration	:= FALSE;
					
					eMsgTypeSnd	:= HermesMsgTypeCurrConfiguration;
				
				END_IF
				
		END_CASE
	
	
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		eState	:= HermesStateNotConnected;
		
	END_IF
	
END_FUNCTION_BLOCK
