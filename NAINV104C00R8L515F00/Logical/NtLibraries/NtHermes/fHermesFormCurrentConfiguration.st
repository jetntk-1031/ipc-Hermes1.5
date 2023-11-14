
(* Hermes Form Current Configuration Table Data (Total Index Written In Table) *)
FUNCTION fHermesFormCurrentConfiguration
	
	memset(ADR(pa_tyXMLTable) , 0 , SIZEOF(pa_tyXMLTable));
	iTotalIdxWrite	:= 0;
	
	fHermesGetTimestamp(ADR(sTimestamp) , tyDTStructure);
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'Hermes';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'Timestamp';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= sTimestamp;
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'CurrentConfiguration';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	IF tyParameter.tyAvl.bMachineId = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'MachineId';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sMachineId;
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	IF tyParameter.tyAvl.bMachineId = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'SupervisorySystemPort';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= UINT_TO_STRING(tyParameter.tyData.uiSupervisorySystemPort);
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	IF tyParameter.tyAvl.iUpstreamConfigurations > 0 THEN
		
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'UpstreamConfigurations';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
		IF tyParameter.tyAvl.iUpstreamConfigurations < 5 THEN
			iConfiguration	:= tyParameter.tyAvl.iUpstreamConfigurations - 1;
		ELSE
			iConfiguration	:= 4;
		END_IF 
		
		FOR i := 0 TO iConfiguration DO
			
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'UpstreamConfiguration';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			IF tyParameter.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'UpstreamLaneId';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= INT_TO_STRING(tyParameter.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId);
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			IF tyParameter.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamInterfaceId = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'UpstreamInterfaceId';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId;
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			IF tyParameter.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'HostAddress';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.a_tyUpstreamConfigurations[i].sHostAddress;
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			IF tyParameter.tyAvl.a_tyUpstreamConfigurations[i].bPort = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'Port';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= UINT_TO_STRING(tyParameter.tyData.a_tyUpstreamConfigurations[i].uiPort);
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		END_FOR
		
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ET';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'UpstreamConfigurations';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
	END_IF
	
	IF tyParameter.tyAvl.iDownstreamConfigurations > 0 THEN
		
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'DownstreamConfigurations';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
		IF tyParameter.tyAvl.iDownstreamConfigurations < 5 THEN
			iConfiguration1	:= tyParameter.tyAvl.iDownstreamConfigurations - 1;
		ELSE
			iConfiguration1	:= 4;
		END_IF
		
		FOR i := 0 TO iConfiguration1 DO
			
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'DownstreamConfiguration';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			IF tyParameter.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'DownstreamLaneId';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= INT_TO_STRING(tyParameter.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId);
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			IF tyParameter.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamInterfaceId = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'DownstreamInterfaceId';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId;
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			IF tyParameter.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'ClientAddress';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.a_tyDownstreamConfigurations[i].sClientAddress;
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			IF tyParameter.tyAvl.a_tyDownstreamConfigurations[i].bPort = TRUE THEN
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'Port';
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
				pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
				pa_tyXMLTable[iTotalIdxWrite].sValue	:= UINT_TO_STRING(tyParameter.tyData.a_tyDownstreamConfigurations[i].uiPort);
				pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
				iTotalIdxWrite	:= iTotalIdxWrite + 1;
			END_IF
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		END_FOR
		
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ET';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'DownstreamConfigurations';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
	END_IF
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ET';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'CurrentConfiguration';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ET';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'Hermes';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	iTotalIdxWrite	:= fHermesFormCurrentConfiguration;
	
END_FUNCTION
