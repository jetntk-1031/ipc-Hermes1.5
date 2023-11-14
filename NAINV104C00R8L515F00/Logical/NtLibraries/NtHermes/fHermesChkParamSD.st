
(* Hermes Checking Parameter Service Description *)
FUNCTION fHermesChkParamSD
	
	fHermesChkParamSD	:= 0;
	
	IF fHermesChkParamSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bMachineId = FALSE THEN
			
			fHermesChkParamSD	:= 2727;	//MachineId Missing While Checking Service Description
				
		END_IF
		
	END_IF

	
	IF fHermesChkParamSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bLaneId = TRUE THEN
					
			IF tyServiceDescription.tyData.iLaneId <= 0 THEN
					
				fHermesChkParamSD	:= 2728;	//LandId Out Of Range While Checking Service Description
						
			ELSIF tyServiceDescription.tyData.iLaneId <> iLaneId THEN
				
				fHermesChkParamSD	:= 2726;	//LaneId Mismatch While Checking Service Description
			
			END_IF
			
		ELSE
					
			fHermesChkParamSD	:= 2729;	//LandId Missing While Checking Service Description
					
		END_IF
		
	END_IF
	
			
	IF fHermesChkParamSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bVersion = FALSE THEN
					
			fHermesChkParamSD	:= 2730;	//Version Missing While Checking Service Description
					
		END_IF
		
	END_IF
		
	
	IF fHermesChkParamSD = 0 THEN
		
		IF tyServiceDescription.tyAvl.bSupportedFeatures = FALSE THEN
					
			fHermesChkParamSD	:= 2731;	//SupportedFeatures Missing While Checking Service Description
					
		END_IF
		
	END_IF
			
END_FUNCTION
