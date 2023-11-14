
(* Hermes Checking Parameter Transport Finished *)
FUNCTION fHermesChkParamTF
	
	fHermesChkParamTF	:= 0;
	
	IF fHermesChkParamTF = 0 THEN
		
		IF tyTransportFinished.tyAvl.bTransferState = FALSE THEN
					
			fHermesChkParamTF	:= 2744;	//TransferState Missing While Checking Transport Finished
					
		END_IF
		
	END_IF
	
		
	IF fHermesChkParamTF = 0 THEN
		
		IF tyTransportFinished.tyAvl.bBoardId = FALSE THEN
					
			fHermesChkParamTF	:= 2745;	//BoardId Missing While Checking Transport Finished
					
		END_IF
		
	END_IF
		
END_FUNCTION
