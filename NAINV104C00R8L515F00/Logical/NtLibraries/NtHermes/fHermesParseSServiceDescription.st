
(* Hermes Parse XML Table Data For Supervisory ServiceDescription *)
FUNCTION fHermesParseSServiceDescription
	
	fHermesParseSServiceDescription	:= TRUE;
	
    IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'systemid') THEN
						
		p_tySServiceDescription.tyAvl.bSystemId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySServiceDescription.tyData.sSystemId	:= tyXMLTableNxt.sValue;
		END_IF
						
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'version') THEN
						
		p_tySServiceDescription.tyAvl.bVersion	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySServiceDescription.tyData.sVersion	:= tyXMLTableNxt.sValue;
		END_IF
							
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'supportedfeatures') THEN
						
		p_tySServiceDescription.tyAvl.bSupportedFeatures	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featureconfiguration') THEN
						
		p_tySServiceDescription.tyAvl.tySupportedFeatures.bFeatureConfiguration	:= TRUE;
		p_tySServiceDescription.tyData.tySupportedFeatures.bFeatureConfiguration	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featurecheckaliveresponse') THEN
						
		p_tySServiceDescription.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse		:= TRUE;
		p_tySServiceDescription.tyData.tySupportedFeatures.bFeatureCheckAliveResponse	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featureboardtracking') THEN
						
		p_tySServiceDescription.tyAvl.tySupportedFeatures.bFeatureBoardTracking		:= TRUE;
		p_tySServiceDescription.tyData.tySupportedFeatures.bFeatureBoardTracking	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featurequeryworkorderinfo') THEN
						
		p_tySServiceDescription.tyAvl.tySupportedFeatures.bFeatureQueryWorkOrderInfo	:= TRUE;
		p_tySServiceDescription.tyData.tySupportedFeatures.bFeatureQueryWorkOrderInfo	:= TRUE;
		
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featuresendworkorderinfo') THEN
						
		p_tySServiceDescription.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo	:= TRUE;
		p_tySServiceDescription.tyData.tySupportedFeatures.bFeatureSendWorkOrderInfo	:= TRUE;
		
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'featurereplyworkorderinfo') THEN
						
		p_tySServiceDescription.tyAvl.tySupportedFeatures.bFeatureReplyWorkOrderInfo	:= TRUE;
		p_tySServiceDescription.tyData.tySupportedFeatures.bFeatureReplyWorkOrderInfo	:= TRUE;
						
	END_IF
	
END_FUNCTION
