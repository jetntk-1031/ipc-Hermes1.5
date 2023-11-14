

(* Hermes Parse XML Table Data For Start Transport*)
FUNCTION fHermesParseStartTransport
	
	fHermesParseStartTransport	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyStartTransport.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyStartTransport.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'conveyorspeed') THEN
						
		p_tyStartTransport.tyAvl.bConveyorSpeed	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyStartTransport.tyData.rConveyorSpeed	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	END_IF
		
END_FUNCTION
