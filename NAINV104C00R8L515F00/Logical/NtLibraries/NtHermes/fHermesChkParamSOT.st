
(* Hermes Checking Parameter Stop Transport *)
FUNCTION fHermesChkParamSOT
	
	fHermesChkParamSOT	:= 0;
	
	IF fHermesChkParamSOT = 0 THEN
		
		IF tyStopTransport.tyAvl.bTransferState = FALSE THEN
					
			fHermesChkParamSOT	:= 2742;	//TransferState Missing While Checking Stop Transport
					
		END_IF
		
	END_IF
	
		
	IF fHermesChkParamSOT = 0 THEN
		
		IF tyStopTransport.tyAvl.bBoardId = FALSE THEN
					
			fHermesChkParamSOT	:= 2743;	//BoardId Missing While Checking Stop Transport
					
		END_IF
		
	END_IF
	
END_FUNCTION
