
(* Hermes Checking Parameter Set Configuration *)
FUNCTION fHermesChkParamSC
	
	fHermesChkParamSC	:= 0;
	
	IF fHermesChkParamSC = 0 THEN
		
		IF tySetConfiguration.tyAvl.bMachineId = TRUE THEN
			
			IF tySetConfiguration.tyData.sMachineId <> sMachineId THEN
				
				fHermesChkParamSC	:= 2746;	//MachineId Mismatch While Checking Set Configuration
				
			END_IF
			
		ELSE
				
			fHermesChkParamSC	:= 2747;	//MachineId Missing While Checking Set Configuration
				
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamSC = 0 THEN
		
		FOR i := 0 TO tySetConfiguration.tyAvl.iUpstreamConfigurations DO
		
			IF tySetConfiguration.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId = TRUE THEN
				
				IF tySetConfiguration.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId <= 0 THEN

					fHermesChkParamSC	:= 2748;	//UpstreamLaneId Out Of Range While Checking Set Configuration
					EXIT;
					
				END_IF
		
			ELSE
				
				fHermesChkParamSC	:= 2749;	//UpstreamLaneId Missing While Checking Set Configuration
				EXIT;
				
			END_IF
		
			IF tySetConfiguration.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress = TRUE THEN
				
				IF (fIPValid(tySetConfiguration.tyData.a_tyUpstreamConfigurations[i].sHostAddress , ADR(a_iIPPart))) = FALSE THEN
				
					fHermesChkParamSC	:= 2750;	//HostAddress Invalid While Checking Set Configuration
					EXIT;	
				
				END_IF
		
			ELSE
				
				fHermesChkParamSC	:= 2751;	//HostAddress Missing While Checking Set Configuration
				EXIT;
				
			END_IF
		
		END_FOR
		
	END_IF
	
	
	IF fHermesChkParamSC = 0 THEN
		
		FOR i := 0 TO tySetConfiguration.tyAvl.iDownstreamConfigurations DO
		
			IF tySetConfiguration.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId = TRUE THEN
				
				IF tySetConfiguration.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId <= 0 THEN
				
					fHermesChkParamSC	:= 2752;	//DownstreamLaneId Out Of Range While Checking Set Configuration
					EXIT;
					
				END_IF
		
			ELSE
				
				fHermesChkParamSC	:= 2753;	//DownstreamLaneId Missing While Checking Set Configuration
				EXIT;
				
			END_IF
		
			IF tySetConfiguration.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress = TRUE THEN
				
				IF (fIPValid(tySetConfiguration.tyData.a_tyDownstreamConfigurations[i].sClientAddress , ADR(a_iIPPart))) = FALSE THEN
				
					fHermesChkParamSC	:= 2754;	//ClientAddress Invalid While Checking Set Configuration
					EXIT;	
				
				END_IF
		
			END_IF
		
		END_FOR
		
	END_IF
	
END_FUNCTION
