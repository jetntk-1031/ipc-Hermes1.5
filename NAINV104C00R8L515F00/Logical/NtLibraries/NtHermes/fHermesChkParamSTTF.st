
(* Hermes Checking Parameter Start Transport & Transport Finished *)
FUNCTION fHermesChkParamSTTF
	
	fHermesChkParamSTTF	:= 0;
	
	IF tyStartTransport.tyAvl.bBoardId = TRUE AND tyTransportFinished.tyAvl.bBoardId = TRUE THEN
		
		IF tyStartTransport.tyData.sBoardId <> tyTransportFinished.tyData.sBoardId THEN
			
			fHermesChkParamSTTF	:= 2714;	//BoardId Mismatch While Checking Start Transport & Transport Finished
			
		END_IF
		
	ELSE
		
		fHermesChkParamSTTF	:= 2715;	//BoardId Missing While Checking Start Transport & Transport Finished
		
	END_IF
	
END_FUNCTION
