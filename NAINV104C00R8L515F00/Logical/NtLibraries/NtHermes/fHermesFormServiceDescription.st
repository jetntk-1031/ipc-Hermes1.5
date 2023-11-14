
(* Hermes Form Service Description Table Data (Total Index Written In Table) *)
FUNCTION fHermesFormServiceDescription
	
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
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'ServiceDescription';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	IF tyParameter.tyAvl.bLaneId = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'LaneId';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= INT_TO_STRING(tyParameter.tyData.iLaneId);
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
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
	
	IF tyParameter.tyAvl.bInterfaceId = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'InterfaceId';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sInterfaceId;
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	IF tyParameter.tyAvl.bVersion = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'Version';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sVersion;
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'SupportedFeatures';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	IF tyParameter.tyAvl.tySupportedFeatures.bFeatureBoardForecast = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureCommand = TRUE THEN
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureBoardForecast = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureBoardForecast';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
		END_IF
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureCheckAliveResponse';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
		END_IF
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureQueryBoardInfo';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
		END_IF
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureSendBoardInfo';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
		END_IF
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureCommand = TRUE  THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureCommand';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
			
		END_IF
		
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ET';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'SupportedFeatures';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
	ELSE
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ET';
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'ServiceDescription';
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
	
	iTotalIdxWrite	:= fHermesFormServiceDescription;
	
END_FUNCTION
