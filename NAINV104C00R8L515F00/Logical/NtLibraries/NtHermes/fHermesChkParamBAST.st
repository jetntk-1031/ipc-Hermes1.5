
(* Hermes Checking Parameter Board Available & Start Transport *)
FUNCTION fHermesChkParamBAST
	
	fHermesChkParamBAST	:= 0;
	
	IF tyBoardAvailable.tyAvl.bBoardId = TRUE AND tyStartTransport.tyAvl.bBoardId = TRUE THEN
		
		IF tyBoardAvailable.tyData.sBoardId <> tyStartTransport.tyData.sBoardId THEN
			
			fHermesChkParamBAST	:= 2710;	//BoardId Mismatch While Checking Board Available & Start Transport
			
		END_IF
		
	ELSE
		
		fHermesChkParamBAST	:= 2711;	//BoardId Missing While Checking Board Available & Start Transport
		
	END_IF
	
END_FUNCTION
