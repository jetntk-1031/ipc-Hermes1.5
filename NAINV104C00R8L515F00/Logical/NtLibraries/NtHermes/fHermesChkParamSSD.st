
(* Hermes Checking Parameter Supervisory Service Description *)
FUNCTION fHermesChkParamSSD
	
	fHermesChkParamSSD	:= 0;
	
	IF fHermesChkParamSSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bSystemId = FALSE THEN
			
			fHermesChkParamSSD	:= 2719;	//SystemId Missing While Checking Service Description
				
		END_IF
		
	END_IF

	
			
	IF fHermesChkParamSSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bVersion = FALSE THEN
					
			fHermesChkParamSSD	:= 2730;	//Version Missing While Checking Service Description
					
		END_IF
		
	END_IF
		
	
	IF fHermesChkParamSSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bSupportedFeatures = FALSE THEN
					
			fHermesChkParamSSD	:= 2731;	//SupportedFeatures Missing While Checking Service Description
					
		END_IF
		
	END_IF
			
END_FUNCTION
