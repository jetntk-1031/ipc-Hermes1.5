
(* Hermes Checking Parameter Start Transport *)
FUNCTION fHermesChkParamSAT
	
	fHermesChkParamSAT	:= 0;
	
	IF fHermesChkParamSAT = 0 THEN
		
		IF tyStartTransport.tyAvl.bBoardId = FALSE THEN
					
			fHermesChkParamSAT	:= 2741;	//BoardId Missing While Checking Start Transport
					
		END_IF
		
	END_IF
		
END_FUNCTION
