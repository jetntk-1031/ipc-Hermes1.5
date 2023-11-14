
(* Hermes Parse XML Table Data For Set Configuration*)
FUNCTION fHermesParseSetConfiguration
	
	fHermesParseSetConfiguration	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'machineid') THEN
						
		p_tySetConfiguration.tyAvl.bMachineId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySetConfiguration.tyData.sMachineId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'supervisorysystemport') THEN
				
		p_tySetConfiguration.tyAvl.bSupervisorySystemPort	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySetConfiguration.tyData.uiSupervisorySystemPort	:= STRING_TO_UINT(tyXMLTableNxt.sValue);
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'upstreamconfigurations') THEN
				
		bUpstream	:= TRUE;
		bDownstream	:= FALSE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ET') AND (sCurrValueLowerCase = 'upstreamconfigurations') THEN
						
		bUpstream	:= FALSE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'downstreamconfigurations') THEN
						
		bUpstream	:= FALSE;
		bDownstream	:= TRUE;
						
	ELSIF (tyXMLTableCurr.sTitle = 'ET') AND (sCurrValueLowerCase = 'downstreamconfigurations') THEN
						
		bDownstream	:= FALSE;
						
	ELSIF bUpstream = TRUE THEN
						
		IF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'upstreamconfiguration') THEN
			
			p_tySetConfiguration.tyAvl.bUpstreamConfigurations	:= TRUE;
			
			p_tySetConfiguration.tyAvl.iUpstreamConfigurations	:= p_tySetConfiguration.tyAvl.iUpstreamConfigurations + 1;
//			IF p_tySetConfiguration.tyAvl.iUpstreamConfigurations > 3 THEN
//				p_tySetConfiguration.tyAvl.iUpstreamConfigurations	:= 3;
//			END_IF
							
		ELSIF p_tySetConfiguration.tyAvl.iUpstreamConfigurations <> 0 THEN
							
			IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'upstreamlaneid') THEN
						
				p_tySetConfiguration.tyAvl.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].bUpstreamLaneId	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].iUpstreamLaneId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
				END_IF
								
			ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'upstreaminterfaceid') THEN
						
				p_tySetConfiguration.tyAvl.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].bUpstreamInterfaceId	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].sUpstreamInterfaceId	:= tyXMLTableNxt.sValue;
				END_IF
								
			ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'hostaddress') THEN
						
				p_tySetConfiguration.tyAvl.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].bHostAddress	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].sHostAddress	:= tyXMLTableNxt.sValue;
				END_IF
								
			ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'port') THEN
						
				p_tySetConfiguration.tyAvl.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].bPort	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyUpstreamConfigurations[p_tySetConfiguration.tyAvl.iUpstreamConfigurations - 1].uiPort	:= STRING_TO_UINT(tyXMLTableNxt.sValue);
				END_IF
								
			END_IF
							
		END_IF
						
	ELSIF bDownstream = TRUE THEN
							
		IF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'downstreamconfiguration') THEN
			
			p_tySetConfiguration.tyAvl.bDownstreamConfigurations	:= TRUE;
			
			p_tySetConfiguration.tyAvl.iDownstreamConfigurations	:= p_tySetConfiguration.tyAvl.iDownstreamConfigurations + 1;
//			IF p_tySetConfiguration.tyAvl.iDownstreamConfigurations > 3 THEN
//				p_tySetConfiguration.tyAvl.iDownstreamConfigurations	:= 3;
//			END_IF
							
		ELSIF p_tySetConfiguration.tyAvl.iDownstreamConfigurations <> 0 THEN
							
			IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'downstreamlaneid') THEN
						
				p_tySetConfiguration.tyAvl.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].bDownstreamLaneId	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].iDownstreamLaneId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
				END_IF
								
			ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'downstreaminterfaceid') THEN
						
				p_tySetConfiguration.tyAvl.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].bDownstreamInterfaceId	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].sDownstreamInterfaceId	:= tyXMLTableNxt.sValue;
				END_IF
								
			ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'clientaddress') THEN
						
				p_tySetConfiguration.tyAvl.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].bClientAddress	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].sClientAddress	:= tyXMLTableNxt.sValue;
				END_IF
								
			ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'port') THEN
						
				p_tySetConfiguration.tyAvl.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].bPort	:= TRUE;
						
				IF tyXMLTableNxt.sTitle = 'AV' THEN
					p_tySetConfiguration.tyData.a_tyDownstreamConfigurations[p_tySetConfiguration.tyAvl.iDownstreamConfigurations - 1].uiPort	:= STRING_TO_UINT(tyXMLTableNxt.sValue);
				END_IF
								
			END_IF
							
		END_IF
						
	END_IF
			
END_FUNCTION
