
(* Hermes Checking Parameter Board Forecast & Machine Ready *)
FUNCTION fHermesChkParamBFMR
	
	
	
      fHermesChkParamBFMR :=0;		
						
	    IF tyBoardForecast.tyData.sForecastId <> tyMachineReady.tyData.sForecastId THEN
							
				fHermesChkParamBFMR	:= 2716;	//ForecastId Mismatch While Checking Board Forecast & Machine Ready
							
		END_IF
						
		
					
			
		IF tyBoardForecast.tyAvl.bProductTypeId = TRUE AND tyMachineReady.tyAvl.bProductTypeId = TRUE THEN
				
			IF tyBoardForecast.tyData.sProductTypeId <> tyMachineReady.tyData.sProductTypeId THEN
					
					fHermesChkParamBFMR	:= 2717;	//ProductTypeId Mismatch While Checking Board Forecast & Machine Ready
					
			END_IF
				
		END_IF

	
	
		IF tyBoardForecast.tyAvl.bWidth = TRUE AND tyMachineReady.tyAvl.bWidth = TRUE THEN
				
			IF tyBoardForecast.tyData.rWidth <> tyMachineReady.tyData.rWidth THEN
					
				fHermesChkParamBFMR	:= 2718;	//Width Mismatch While Checking Board Forecast & Machine Ready
					
			END_IF
				
		END_IF
			


	
		
END_FUNCTION
