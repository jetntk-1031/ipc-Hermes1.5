
(* Hermes Parse XML Table Data For Check Alive *)
FUNCTION fHermesParseCheckAlive
	
	fHermesParseCheckAlive	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'type') THEN
						
		p_tyCheckAlive.tyAvl.bType	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyCheckAlive.tyData.eType	:= HermesCheckAliveTypePing;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyCheckAlive.tyData.eType	:= HermesCheckAliveTypePong;
			ELSE
				p_tyCheckAlive.tyData.eType	:= HermesCheckAliveTypeUnknown;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'id') THEN
						
		p_tyCheckAlive.tyAvl.bId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyCheckAlive.tyData.sId	:= tyXMLTableNxt.sValue;
		END_IF
				
	END_IF
		
END_FUNCTION
