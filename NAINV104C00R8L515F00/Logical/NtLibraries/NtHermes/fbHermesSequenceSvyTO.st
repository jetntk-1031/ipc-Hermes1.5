
(* Hermes Sequence Supervisory Time Out *)
FUNCTION_BLOCK fbHermesSequenceSvyTO
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF (eState = HermesStateNotConnected) OR (eState = HermesStateSServiceDescription) THEN
			fbConnTimeOut(IN := TRUE , PT := tConnTimeOut);
		END_IF
		
		
		IF  eState = HermesStateConnected THEN
			fbConnTimeOut(IN := FALSE);
		END_IF
		
		
		IF fbConnTimeOut.Q = TRUE THEN
			udiStatus	:= 2912;	//Connection Time Out
		END_IF
		
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		fbConnTimeOut(IN := FALSE);
	END_IF
	
END_FUNCTION_BLOCK
