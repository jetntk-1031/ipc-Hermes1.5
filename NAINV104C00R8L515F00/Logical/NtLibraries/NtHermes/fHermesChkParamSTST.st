
(* Hermes Checking Parameter Start Transport & Stop Transport *)
FUNCTION fHermesChkParamSTST
	
	fHermesChkParamSTST	:= 0;
	
	IF tyStartTransport.tyAvl.bBoardId = TRUE AND tyStopTransport.tyAvl.bBoardId = TRUE THEN
		
		IF tyStartTransport.tyData.sBoardId <> tyStopTransport.tyData.sBoardId THEN
			
			fHermesChkParamSTST	:= 2712;	//BoardId Mismatch While Checking Start Transport & Stop Transport
			
		END_IF
		
	ELSE
		
		fHermesChkParamSTST	:= 2713;	//BoardId Missing While Checking Start Transport & Stop Transport
		
	END_IF
	
END_FUNCTION
