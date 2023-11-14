
(* Hermes Checking Parameter Machine Ready *)
FUNCTION fHermesChkParamMR
	
	fHermesChkParamMR	:= 0;
	
	IF fHermesChkParamMR = 0 THEN
		
		IF tyMachineReady.tyAvl.bFailedBoard = FALSE THEN
					
			fHermesChkParamMR	:= 2740;	//FailedBoard Missing While Checking Machine Ready
					
		END_IF
		
	END_IF
	
END_FUNCTION
