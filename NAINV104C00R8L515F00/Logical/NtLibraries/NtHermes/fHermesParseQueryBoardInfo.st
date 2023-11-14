
(* Hermes Parse XML Table Data For Query Board Info *)
FUNCTION fHermesParseQueryBoardInfo
	
	fHermesParseQueryBoardInfo	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topbarcode') THEN
						
		p_tyQueryBoardInfo.tyAvl.bTopBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryBoardInfo.tyData.sTopBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottombarcode') THEN
						
		p_tyQueryBoardInfo.tyAvl.bBottomBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryBoardInfo.tyData.sBottomBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	END_IF
	
END_FUNCTION
