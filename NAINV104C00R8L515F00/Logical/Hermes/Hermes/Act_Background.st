(** 2021-08-01 **)
ACTION Act_Background:
	
	//Update Configuration
	
	IF p_bSvyPrep = TRUE AND p_bSvyEn = TRUE AND p_bSvyHermesWriteConfig THEN
				
		IF p_bSvyFoundIndexUS1 THEN
			tyConfigurationWr.a_tyUSParam[0].iLaneID		            := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId;		//change from p_udiSvyIndexUS1
			tyConfigurationWr.a_tyUSParam[0].sHostAddress           	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[0].sHostAddress;			//
			tyConfigurationWr.a_tyUSParam[0].uiHostPort	                := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[0].uiPort;					//
			tyConfigurationWr.a_tyUSParam[0].sUpstreamInterfaceId   	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[0].sUpstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexUS2 THEN
			tyConfigurationWr.a_tyUSParam[1].iLaneID		            := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[1].iUpstreamLaneId;		//change from p_udiSvyIndexUS2
			tyConfigurationWr.a_tyUSParam[1].sHostAddress           	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[1].sHostAddress;			//
			tyConfigurationWr.a_tyUSParam[1].uiHostPort	                := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[1].uiPort;					//
			tyConfigurationWr.a_tyUSParam[1].sUpstreamInterfaceId   	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[1].sUpstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexUS3 THEN
			tyConfigurationWr.a_tyUSParam[2].iLaneID		            := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[2].iUpstreamLaneId;		//change from p_udiSvyIndexUS3
			tyConfigurationWr.a_tyUSParam[2].sHostAddress           	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[2].sHostAddress;			//
			tyConfigurationWr.a_tyUSParam[2].uiHostPort	                := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[2].uiPort;					//
			tyConfigurationWr.a_tyUSParam[2].sUpstreamInterfaceId   	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[2].sUpstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexUS4 THEN
			tyConfigurationWr.a_tyUSParam[3].iLaneID		            := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[3].iUpstreamLaneId;		//change from p_udiSvyIndexUS4
			tyConfigurationWr.a_tyUSParam[3].sHostAddress           	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[3].sHostAddress;			//
			tyConfigurationWr.a_tyUSParam[3].uiHostPort	                := p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[3].uiPort;					//
			tyConfigurationWr.a_tyUSParam[3].sUpstreamInterfaceId   	:= p_tySvySetConfiguration.tyData.a_tyUpstreamConfigurations[3].sUpstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexDS1 THEN
			tyConfigurationWr.a_tyDSParam[0].iLaneID	            	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId;		//change from p_udiSvyIndexDS1
			tyConfigurationWr.a_tyDSParam[0].uiSvrPort               	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[0].uiPort;					//
			tyConfigurationWr.a_tyDSParam[0].sDownstreamInterfaceId  	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[0].sDownstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexDS2 THEN
			tyConfigurationWr.a_tyDSParam[1].iLaneID	            	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[1].iDownstreamLaneId;		//change from p_udiSvyIndexDS2
			tyConfigurationWr.a_tyDSParam[1].uiSvrPort               	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[1].uiPort;					//
			tyConfigurationWr.a_tyDSParam[1].sDownstreamInterfaceId  	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[1].sDownstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexDS3 THEN
			tyConfigurationWr.a_tyDSParam[2].iLaneID	            	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[2].iDownstreamLaneId;		//change from p_udiSvyIndexDS3
			tyConfigurationWr.a_tyDSParam[2].uiSvrPort               	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[2].uiPort;					//
			tyConfigurationWr.a_tyDSParam[2].sDownstreamInterfaceId  	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[2].sDownstreamInterfaceId;	//
		END_IF
		
		IF p_bSvyFoundIndexDS4 THEN
			tyConfigurationWr.a_tyDSParam[3].iLaneID	            	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[3].iDownstreamLaneId;		//change from p_udiSvyIndexDS4
			tyConfigurationWr.a_tyDSParam[3].uiSvrPort               	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[3].uiPort;					//
			tyConfigurationWr.a_tyDSParam[3].sDownstreamInterfaceId  	:= p_tySvySetConfiguration.tyData.a_tyDownstreamConfigurations[3].sDownstreamInterfaceId;	//
		END_IF
		
		IF p_tySvySetConfiguration.tyAvl.bMachineId = TRUE THEN
			
			tyConfigurationWr.a_tyUSParam[0].sMachineId		:= p_tySvySetConfiguration.tyData.sMachineId;
			tyConfigurationWr.a_tyDSParam[0].sMachineId		:= p_tySvySetConfiguration.tyData.sMachineId;
			tyConfigurationWr.tySvyParam.sMachineId		    := p_tySvySetConfiguration.tyData.sMachineId;
			
		END_IF
		
		IF p_tySvySetConfiguration.tyAvl.bSupervisorySystemPort = TRUE THEN
			
			tyConfigurationWr.tySvyParam.uiSvySvstemPort	:= p_tySvySetConfiguration.tyData.uiSupervisorySystemPort;
			
		END_IF
		
	
	
	ELSIF p_bRmtPrep = TRUE AND p_bRmtEn = TRUE AND p_bRmtHermesWriteConfig THEN
		
		IF p_bRmtFoundIndexUS1 THEN
			tyConfigurationWr.a_tyUSParam[0].iLaneID		            := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS1].iUpstreamLaneId;
			tyConfigurationWr.a_tyUSParam[0].sHostAddress           	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS1].sHostAddress;
			tyConfigurationWr.a_tyUSParam[0].uiHostPort	                := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS1].uiPort;
			tyConfigurationWr.a_tyUSParam[0].sUpstreamInterfaceId   	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS1].sUpstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexUS2 THEN
			tyConfigurationWr.a_tyUSParam[1].iLaneID		            := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS2].iUpstreamLaneId;
			tyConfigurationWr.a_tyUSParam[1].sHostAddress           	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS2].sHostAddress;
			tyConfigurationWr.a_tyUSParam[1].uiHostPort	                := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS2].uiPort;
			tyConfigurationWr.a_tyUSParam[1].sUpstreamInterfaceId   	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS2].sUpstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexUS3 THEN
			tyConfigurationWr.a_tyUSParam[2].iLaneID		            := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS3].iUpstreamLaneId;
			tyConfigurationWr.a_tyUSParam[2].sHostAddress           	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS3].sHostAddress;
			tyConfigurationWr.a_tyUSParam[2].uiHostPort	                := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS3].uiPort;
			tyConfigurationWr.a_tyUSParam[2].sUpstreamInterfaceId   	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS3].sUpstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexUS4 THEN
			tyConfigurationWr.a_tyUSParam[3].iLaneID		            := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS4].iUpstreamLaneId;
			tyConfigurationWr.a_tyUSParam[3].sHostAddress           	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS4].sHostAddress;
			tyConfigurationWr.a_tyUSParam[3].uiHostPort	                := p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS4].uiPort;
			tyConfigurationWr.a_tyUSParam[3].sUpstreamInterfaceId   	:= p_tyRmtSetConfiguration.tyData.a_tyUpstreamConfigurations[p_udiRmtIndexUS4].sUpstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexDS1 THEN
			tyConfigurationWr.a_tyDSParam[0].iLaneID	            	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS1].iDownstreamLaneId;
			tyConfigurationWr.a_tyDSParam[0].uiSvrPort               	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS1].uiPort;
			tyConfigurationWr.a_tyDSParam[0].sDownstreamInterfaceId  	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS1].sDownstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexDS2 THEN
			tyConfigurationWr.a_tyDSParam[1].iLaneID	            	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS2].iDownstreamLaneId;
			tyConfigurationWr.a_tyDSParam[1].uiSvrPort               	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS2].uiPort;
			tyConfigurationWr.a_tyDSParam[1].sDownstreamInterfaceId  	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS2].sDownstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexDS3 THEN
			tyConfigurationWr.a_tyDSParam[2].iLaneID	            	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS3].iDownstreamLaneId;
			tyConfigurationWr.a_tyDSParam[2].uiSvrPort               	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS3].uiPort;
			tyConfigurationWr.a_tyDSParam[2].sDownstreamInterfaceId  	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS3].sDownstreamInterfaceId;
		END_IF
		
		IF p_bRmtFoundIndexDS4 THEN
			tyConfigurationWr.a_tyDSParam[3].iLaneID	            	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS4].iDownstreamLaneId;
			tyConfigurationWr.a_tyDSParam[3].uiSvrPort               	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS4].uiPort;
			tyConfigurationWr.a_tyDSParam[3].sDownstreamInterfaceId  	:= p_tyRmtSetConfiguration.tyData.a_tyDownstreamConfigurations[p_udiRmtIndexDS4].sDownstreamInterfaceId;
		END_IF
		
		IF p_tyRmtSetConfiguration.tyAvl.bMachineId = TRUE THEN
		
			tyConfigurationWr.a_tyUSParam[0].sMachineId		:= p_tyRmtSetConfiguration.tyData.sMachineId;
			tyConfigurationWr.a_tyDSParam[0].sMachineId		:= p_tyRmtSetConfiguration.tyData.sMachineId;
			tyConfigurationWr.tySvyParam.sMachineId		    := p_tyRmtSetConfiguration.tyData.sMachineId;
			
		END_IF
		
		IF p_tyRmtSetConfiguration.tyAvl.bSupervisorySystemPort = TRUE THEN
			
			tyConfigurationWr.tySvyParam.uiSvySvstemPort	:= p_tyRmtSetConfiguration.tyData.uiSupervisorySystemPort;
			
		END_IF

	
	ELSIF p_bUISaveHMIConfigure THEN //Save US, DS Configure in HMI
		
		tyConfigurationWr.a_tyUSParam[0]  := pa_tyUSParam[0]; //lane 1 US
		tyConfigurationWr.a_tyDSParam[0]  := pa_tyDSParam[0]; //lane 1 DS
		tyConfigurationWr.a_tyUSParam[1]  := pa_tyUSParam[1]; //lane 2 US
		tyConfigurationWr.a_tyDSParam[1]  := pa_tyDSParam[1]; //lane 2 DS
		tyConfigurationWr.a_tyUSParam[2]  := pa_tyUSParam[2]; //lane 3 US
		tyConfigurationWr.a_tyDSParam[2]  := pa_tyDSParam[2]; //lane 3 DS
		tyConfigurationWr.a_tyUSParam[3]  := pa_tyUSParam[3]; //lane 4 US
		tyConfigurationWr.a_tyDSParam[3]  := pa_tyDSParam[3]; //lane 4 DS
		
	
	ELSIF p_bUISaveHMISvyConfig THEN //Save Supervisory Configure in HMI
		
		tyConfigurationWr.tySvyParam  := p_tySvyParam;

	END_IF
	

END_ACTION
