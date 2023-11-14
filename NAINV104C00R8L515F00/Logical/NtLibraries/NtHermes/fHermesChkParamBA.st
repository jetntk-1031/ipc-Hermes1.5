
(* Hermes Checking Parameter Board Available *)
FUNCTION fHermesChkParamBA
	
	fHermesChkParamBA	:= 0;
	
	IF fHermesChkParamBA = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bBoardId = FALSE THEN
					
			fHermesChkParamBA	:= 2736;	//BoardId Missing While Checking Board Available
					
		END_IF
			
	END_IF
	
	
	IF fHermesChkParamBA = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bBoardIdCreatedBy = FALSE THEN
					
			fHermesChkParamBA	:= 2737;	//BoardIdCreatedBy Missing While Checking Board Available
					
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBA = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bFailedBoard = FALSE THEN
					
			fHermesChkParamBA	:= 2738;	//FailedBoard Missing While Checking Board Available
					
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBA = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bFlippedBoard = FALSE THEN
					
			fHermesChkParamBA	:= 2739;	//FlippedBoard Missing While Checking Board Available
					
		END_IF
		
	END_IF
	
END_FUNCTION
