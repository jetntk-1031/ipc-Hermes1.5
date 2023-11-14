
(* Hermes Checking Parameter Current Configuration *)
FUNCTION fHermesChkParamCC
	
	fHermesChkParamCC	:= 0;
	
	IF fHermesChkParamCC = 0 THEN
		
		IF tyCurrentConfiguration.tyAvl.bMachineId = TRUE THEN
			
			IF tyCurrentConfiguration.tyData.sMachineId <> sMachineId THEN
				
				fHermesChkParamCC	:= 2755;	//MachineId Mismatch While Checking Current Configuration
				
			END_IF
			
		ELSE
				
			fHermesChkParamCC	:= 2756;	//MachineId Missing While Checking Current Configuration
				
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamCC = 0 THEN
		
		FOR i := 0 TO tyCurrentConfiguration.tyAvl.iUpstreamConfigurations DO
		
			IF tyCurrentConfiguration.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId = TRUE THEN
				
				IF tyCurrentConfiguration.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId <= 0 THEN

					fHermesChkParamCC	:= 2757;	//UpstreamLaneId Out Of Range While Checking Current Configuration
					EXIT;
					
				END_IF
		
			ELSE
				
				fHermesChkParamCC	:= 2758;	//UpstreamLaneId Missing While Checking Current Configuration
				EXIT;
				
			END_IF
		
			IF tyCurrentConfiguration.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress = TRUE THEN
				
				IF (fIPValid(tyCurrentConfiguration.tyData.a_tyUpstreamConfigurations[i].sHostAddress , ADR(a_iIPPart))) = FALSE THEN
				
					fHermesChkParamCC	:= 2759;	//HostAddress Invalid While Checking Current Configuration
					EXIT;	
				
				END_IF
		
			ELSE
				
				fHermesChkParamCC	:= 2760;	//HostAddress Missing While Checking Current Configuration
				EXIT;
				
			END_IF
		
		END_FOR
		
	END_IF
	
	
	IF fHermesChkParamCC = 0 THEN
		
		FOR i := 0 TO tyCurrentConfiguration.tyAvl.iDownstreamConfigurations DO
		
			IF tyCurrentConfiguration.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId = TRUE THEN
				
				IF tyCurrentConfiguration.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId <= 0 THEN
				
					fHermesChkParamCC	:= 2761;	//DownstreamLaneId Out Of Range While Checking Current Configuration
					EXIT;
					
				END_IF
		
			ELSE
				
				fHermesChkParamCC	:= 2762;	//DownstreamLaneId Missing While Checking Current Configuration
				EXIT;
				
			END_IF
		
			IF tyCurrentConfiguration.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress = TRUE THEN
				
				IF (fIPValid(tyCurrentConfiguration.tyData.a_tyDownstreamConfigurations[i].sClientAddress , ADR(a_iIPPart))) = FALSE THEN
				
					fHermesChkParamCC	:= 2763;	//ClientAddress Invalid While Checking Current Configuration
					EXIT;	
				
				END_IF
		
			END_IF
		
		END_FOR
		
	END_IF
	
END_FUNCTION
