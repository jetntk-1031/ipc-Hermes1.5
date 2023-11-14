
(* Hermes Checking Parameter Board Forecast *)
FUNCTION fHermesChkParamBF
	
	fHermesChkParamBF	:= 0;
	
	IF fHermesChkParamBF = 0 THEN
		
		IF tyBoardForecast.tyAvl.bFailedBoard = FALSE THEN
					
			fHermesChkParamBF	:= 2764;	//FailedBoard Missing While Checking Board Forecast
					
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBF = 0 THEN
		
		IF tyBoardForecast.tyAvl.bFlippedBoard = FALSE THEN
					
			fHermesChkParamBF	:= 2765;	//FlippedBoard Missing While Checking Board Forecast
					
		END_IF
		
	END_IF
	
END_FUNCTION
