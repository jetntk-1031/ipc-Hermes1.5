
(* Hermes Sequence Time Out *)
FUNCTION_BLOCK fbHermesSequenceTO
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF (eState = HermesStateNotConnected) OR (eState = HermesStateServiceDescription) THEN
			fbConnTimeOut(IN := TRUE , PT := tConnTimeOut);
		END_IF
		
		IF (eState = HermesStateTransporting) OR (eState = HermesStateTransportFinished) OR (eState = HermesStateTransportStopped) THEN
			fbTransportTimeOut(IN := TRUE , PT := tTransportTimeOut);
		END_IF
			
		IF eState = HermesStateNotAvailableNotReady THEN
			fbConnTimeOut(IN := FALSE);
			fbTransportTimeOut(IN := FALSE);
		END_IF
		
		
		IF fbConnTimeOut.Q = TRUE THEN
			udiStatus	:= 2912;	//Connection Time Out
		ELSIF fbTransportTimeOut.Q = TRUE THEN
			udiStatus	:= 2913;	//Transport Time Out	
		END_IF
		
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		fbConnTimeOut(IN := FALSE);
		fbTransportTimeOut(IN := FALSE);
	END_IF
	
END_FUNCTION_BLOCK
