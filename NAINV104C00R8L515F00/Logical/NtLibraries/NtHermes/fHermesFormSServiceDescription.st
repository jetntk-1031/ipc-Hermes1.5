
(* Hermes Form Service Description Table Data (Total Index Written In Table) *)
FUNCTION fHermesFormSServiceDescription
	
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
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'SupervisoryServiceDescription';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	

	
	IF tyParameter.tyAvl.bSystemId = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'SystemId';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sSystemId;
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
	
	IF tyParameter.tyAvl.tySupportedFeatures.bFeatureConfiguration = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureBoardTracking = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureQueryWorkOrderInfo = TRUE OR tyParameter.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo = TRUE THEN
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'EN';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureConfiguration = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureConfiguration';
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
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureBoardTracking = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureBoardTracking';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
		END_IF
		
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureQueryWorkOrderInfo = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureQueryWorkOrderInfo';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= '';
			pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
			iTotalIdxWrite	:= iTotalIdxWrite + 1;
		END_IF
		
		IF tyParameter.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo = TRUE THEN
			pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ST';
			pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'FeatureSendWorkOrderInfo';
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
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'SupervisoryServiceDescription';
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
	
	iTotalIdxWrite	:= fHermesFormSServiceDescription;
	
END_FUNCTION
