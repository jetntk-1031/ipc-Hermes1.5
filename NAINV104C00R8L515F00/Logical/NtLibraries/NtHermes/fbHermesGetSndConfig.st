
(* Hermes Get & Send Configuration *)
FUNCTION_BLOCK fbHermesGetSndConfig
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF p_tyMsgTypeRcv.bGetConfiguration = TRUE THEN
			
			p_tyMsgTypeRcv.bGetConfiguration	:= FALSE;
			
			
			p_tyMsgTypeSnd.bCurrentConfiguration	:= TRUE;
			
			tyCurrentConfiguration.tyData	:= tyCurrentConfigurationData;
			
			IF tyCurrentConfiguration.tyData.sMachineId <> '' THEN
				tyCurrentConfiguration.tyAvl.bMachineId	:= TRUE;
			END_IF

			FOR di := 0 TO c_diHermesConfigMaxIdx DO
				
				IF tyCurrentConfiguration.tyData.a_tyUpstreamConfigurations[di].iUpstreamLaneId <> 0 THEN
					tyCurrentConfiguration.tyAvl.a_tyUpstreamConfigurations[di].bUpstreamLaneId	:= TRUE;
					tyCurrentConfiguration.tyAvl.bUpstreamConfigurations	:= TRUE;
					tyCurrentConfiguration.tyAvl.iUpstreamConfigurations	:= DINT_TO_INT(di) + 1;
					
					IF tyCurrentConfiguration.tyData.a_tyUpstreamConfigurations[di].sUpstreamInterfaceId <> '' THEN
						tyCurrentConfiguration.tyAvl.a_tyUpstreamConfigurations[di].bUpstreamInterfaceId	:= TRUE;
					END_IF
					
					IF tyCurrentConfiguration.tyData.a_tyUpstreamConfigurations[di].sHostAddress <> '' THEN
						tyCurrentConfiguration.tyAvl.a_tyUpstreamConfigurations[di].bHostAddress	:= TRUE;
					END_IF
					
					IF tyCurrentConfiguration.tyData.a_tyUpstreamConfigurations[di].uiPort <> 0 THEN
						tyCurrentConfiguration.tyAvl.a_tyUpstreamConfigurations[di].bPort	:= TRUE;
					END_IF
					
				ELSE
					
					EXIT;
					
				END_IF
			
			END_FOR
			
			FOR di := 0 TO c_diHermesConfigMaxIdx DO
				
				IF tyCurrentConfiguration.tyData.a_tyDownstreamConfigurations[di].iDownstreamLaneId <> 0 THEN
					tyCurrentConfiguration.tyAvl.a_tyDownstreamConfigurations[di].bDownstreamLaneId	:= TRUE;
					tyCurrentConfiguration.tyAvl.bDownstreamConfigurations	:= TRUE;
					tyCurrentConfiguration.tyAvl.iDownstreamConfigurations	:= DINT_TO_INT(di) + 1;
					
					IF tyCurrentConfiguration.tyData.a_tyDownstreamConfigurations[di].sDownstreamInterfaceId <> '' THEN
						tyCurrentConfiguration.tyAvl.a_tyDownstreamConfigurations[di].bDownstreamInterfaceId	:= TRUE;
					END_IF
					
					IF tyCurrentConfiguration.tyData.a_tyDownstreamConfigurations[di].sClientAddress <> '' THEN
						tyCurrentConfiguration.tyAvl.a_tyDownstreamConfigurations[di].bClientAddress	:= TRUE;
					END_IF
					
					IF tyCurrentConfiguration.tyData.a_tyDownstreamConfigurations[di].uiPort <> 0 THEN
						tyCurrentConfiguration.tyAvl.a_tyDownstreamConfigurations[di].bPort	:= TRUE;
					END_IF
					
				ELSE
					
					EXIT;
					
				END_IF
			
			END_FOR
			
		END_IF
		
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		memset(ADR(tyCurrentConfiguration) , 0 , SIZEOF(tyCurrentConfiguration));
		
	END_IF
	
END_FUNCTION_BLOCK
