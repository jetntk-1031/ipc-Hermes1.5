(** 2021-08-01 **)
ACTION Act_Background_UpdtConfig:
	
	IF eStatus2 <> Error THEN
		IF tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureConfiguration AND p_tyParam.bFeatureConfiguration THEN
		
		    IF tyMsgTypeRcv.bSetConfiguration = TRUE THEN
			
				tySetConfiguration.tyAvl.bMachineId						:= tySetConfigurationRcv.tyAvl.bMachineId;
				tySetConfiguration.tyAvl.bSupervisorySystemPort			:= tySetConfigurationRcv.tyAvl.bSupervisorySystemPort;
				tySetConfiguration.tyAvl.bUpstreamConfigurations		:= tySetConfigurationRcv.tyAvl.bUpstreamConfigurations;
				tySetConfiguration.tyAvl.bDownstreamConfigurations		:= tySetConfigurationRcv.tyAvl.bDownstreamConfigurations;
				tySetConfiguration.tyAvl.iUpstreamConfigurations		:= tySetConfigurationRcv.tyAvl.iUpstreamConfigurations;
				tySetConfiguration.tyAvl.iDownstreamConfigurations		:= tySetConfigurationRcv.tyAvl.iDownstreamConfigurations;
				tySetConfiguration.tyAvl.a_tyUpstreamConfigurations		:= tySetConfigurationRcv.tyAvl.a_tyUpstreamConfigurations;
				tySetConfiguration.tyAvl.a_tyDownstreamConfigurations	:= tySetConfigurationRcv.tyAvl.a_tyDownstreamConfigurations;
			
				tySetConfiguration.tyData.sMachineId					:= tySetConfigurationRcv.tyData.sMachineId;
				tySetConfiguration.tyData.uiSupervisorySystemPort		:= tySetConfigurationRcv.tyData.uiSupervisorySystemPort;
				tySetConfiguration.tyData.a_tyUpstreamConfigurations	:= tySetConfigurationRcv.tyData.a_tyUpstreamConfigurations;
				tySetConfiguration.tyData.a_tyDownstreamConfigurations	:= tySetConfigurationRcv.tyData.a_tyDownstreamConfigurations;
				
				udiTargetAddress := ADR(tySetConfiguration.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId); //Start address
				udiSizeAddress   := SIZEOF(tySetConfiguration.tyData.a_tyUpstreamConfigurations[0]); //Size of one array
				
				udiTargetAddress1 := ADR(tySetConfiguration.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId); //Start address
				udiSizeAddress1   := SIZEOF(tySetConfiguration.tyData.a_tyDownstreamConfigurations[0]); //Size of one array
				
		
				FOR k := 0 TO c_diHermesConfigMaxIdx DO //Max configuration
									
					IF memcmp((udiTargetAddress)+(k*udiSizeAddress), ADR(j) , 1) = 0 THEN
						
						bFoundIndexUS1	:= TRUE;
						udiFoundIndexUS1  := k;
						
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].iUpstreamLaneId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].sHostAddress	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].sHostAddress;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].sUpstreamInterfaceId	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].sUpstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].uiPort              	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].uiPort;
					
					ELSIF memcmp((udiTargetAddress)+(k*udiSizeAddress), ADR(jj) , 1) = 0 THEN
						
						bFoundIndexUS2	:= TRUE;
						udiFoundIndexUS2  := k;
						
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].iUpstreamLaneId	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].iUpstreamLaneId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].sHostAddress	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].sHostAddress;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].sUpstreamInterfaceId	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].sUpstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].uiPort              	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].uiPort;
						
					ELSIF memcmp((udiTargetAddress)+(k*udiSizeAddress), ADR(jjj) , 1) = 0 THEN
						
						bFoundIndexUS3	:= TRUE;
						udiFoundIndexUS3  := k;
						
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].iUpstreamLaneId	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].iUpstreamLaneId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].sHostAddress	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sHostAddress;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].sUpstreamInterfaceId	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sUpstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].uiPort              	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].uiPort;
						
					ELSIF memcmp((udiTargetAddress)+(k*udiSizeAddress), ADR(jjjj) , 1) = 0 THEN
						
						bFoundIndexUS4	:= TRUE;
						udiFoundIndexUS4  := k;
						
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].iUpstreamLaneId	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].iUpstreamLaneId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].sHostAddress	        := tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sHostAddress;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].sUpstreamInterfaceId	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sUpstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].uiPort              	:= tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].uiPort;
						
					END_IF
					
				END_FOR		
			    
				FOR kk := 0 TO c_diHermesConfigMaxIdx DO //Max configuration
									
					IF memcmp((udiTargetAddress1)+(kk*udiSizeAddress1), ADR(j) , 1) = 0 THEN
						
						bFoundIndexDS1	:= TRUE;
						udiFoundIndexDS1  := kk;
						
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].iDownstreamLaneId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].sClientAddress	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].sClientAddress;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].sDownstreamInterfaceId	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].sDownstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].uiPort                 	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].uiPort;
						
					ELSIF memcmp((udiTargetAddress1)+(kk*udiSizeAddress1), ADR(jj) , 1) = 0 THEN
						
						bFoundIndexDS2	:= TRUE;
						udiFoundIndexDS2  := kk;
						
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].iDownstreamLaneId	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].iDownstreamLaneId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].sClientAddress	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].sClientAddress;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].sDownstreamInterfaceId	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].sDownstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].uiPort                 	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].uiPort;
						
					ELSIF memcmp((udiTargetAddress1)+(kk*udiSizeAddress1), ADR(jjj) , 1) = 0 THEN
						
						bFoundIndexDS3	:= TRUE;
						udiFoundIndexDS3  := kk;
						
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].iDownstreamLaneId	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].iDownstreamLaneId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].sClientAddress	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].sClientAddress;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].sDownstreamInterfaceId	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].sDownstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].uiPort                 	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].uiPort;
						
					ELSIF memcmp((udiTargetAddress1)+(kk*udiSizeAddress1), ADR(jjjj) , 1) = 0 THEN
						
						bFoundIndexDS4	:= TRUE;
						udiFoundIndexDS4  := kk;
						
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].iDownstreamLaneId	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].iDownstreamLaneId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].sClientAddress	        := tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].sClientAddress;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].sDownstreamInterfaceId	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].sDownstreamInterfaceId;
						tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].uiPort                 	:= tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].uiPort;
					END_IF
					
				END_FOR	
				
				tySetConfigurationModified.tyAvl.bMachineId				        := tySetConfiguration.tyAvl.bMachineId;
				tySetConfigurationModified.tyAvl.bSupervisorySystemPort			:= tySetConfiguration.tyAvl.bSupervisorySystemPort;
				tySetConfigurationModified.tyAvl.bUpstreamConfigurations		:= tySetConfiguration.tyAvl.bUpstreamConfigurations;
				tySetConfigurationModified.tyAvl.bDownstreamConfigurations		:= tySetConfiguration.tyAvl.bDownstreamConfigurations;
				tySetConfigurationModified.tyAvl.iUpstreamConfigurations		:= tySetConfiguration.tyAvl.iUpstreamConfigurations;
				tySetConfigurationModified.tyAvl.iDownstreamConfigurations		:= tySetConfiguration.tyAvl.iDownstreamConfigurations;
				tySetConfigurationModified.tyAvl.a_tyUpstreamConfigurations		:= tySetConfiguration.tyAvl.a_tyUpstreamConfigurations;
				tySetConfigurationModified.tyAvl.a_tyDownstreamConfigurations	:= tySetConfiguration.tyAvl.a_tyDownstreamConfigurations;
				
				tySetConfigurationModified.tyData.sMachineId					:= tySetConfiguration.tyData.sMachineId;
				tySetConfigurationModified.tyData.uiSupervisorySystemPort		:= tySetConfiguration.tyData.uiSupervisorySystemPort;			
					
				IF bUpdateUIData = FALSE THEN	
					bWriteConfig := TRUE;
					tyMsgTypeRcv.bSetConfiguration	:= FALSE;
				END_IF

						
			END_IF
		ELSE
			
			bWriteConfig := FALSE;
			tyMsgTypeRcv.bSetConfiguration := FALSE;
		END_IF
		
	END_IF
	


		
	
		
END_ACTION
