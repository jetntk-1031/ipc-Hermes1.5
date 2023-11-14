
(* Hermes Parse XML Table Data For ServiceDescription *)
FUNCTION fHermesParseServiceDescription
	
	fHermesParseServiceDescription	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'laneid') THEN
						
		p_tyServiceDescription.tyAvl.bLaneId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyServiceDescription.tyData.iLaneId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'machineid') THEN
						
		p_tyServiceDescription.tyAvl.bMachineId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyServiceDescription.tyData.sMachineId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'interfaceid') THEN
						
		p_tyServiceDescription.tyAvl.bInterfaceId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyServiceDescription.tyData.sInterfaceId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'version') THEN
						
		p_tyServiceDescription.tyAvl.bVersion	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyServiceDescription.tyData.sVersion	:= tyXMLTableNxt.sValue;
		END_IF
							
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'supportedfeatures') THEN
						
		p_tyServiceDescription.tyAvl.bSupportedFeatures	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featureboardforecast') THEN
						
		p_tyServiceDescription.tyAvl.tySupportedFeatures.bFeatureBoardForecast	:= TRUE;
		p_tyServiceDescription.tyData.tySupportedFeatures.bFeatureBoardForecast	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featurecheckaliveresponse') THEN
						
		p_tyServiceDescription.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse		:= TRUE;
		p_tyServiceDescription.tyData.tySupportedFeatures.bFeatureCheckAliveResponse	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featurequeryboardinfo') THEN
						
		p_tyServiceDescription.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo		:= TRUE;
		p_tyServiceDescription.tyData.tySupportedFeatures.bFeatureQueryBoardInfo	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featuresendboardinfo') THEN
						
		p_tyServiceDescription.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo	:= TRUE;
		p_tyServiceDescription.tyData.tySupportedFeatures.bFeatureSendBoardInfo	:= TRUE;
		
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featurecommand') THEN
						
		p_tyServiceDescription.tyAvl.tySupportedFeatures.bFeatureCommand	:= TRUE;
		p_tyServiceDescription.tyData.tySupportedFeatures.bFeatureCommand	:= TRUE;					
	END_IF
	
END_FUNCTION
