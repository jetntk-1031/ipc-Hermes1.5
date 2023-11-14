
(* Hermes Parse XML Table Data For Query Board Info *)
FUNCTION fHermesParseQueryWorkOrderInfo
	
	fHermesParseQueryWorkOrderInfo	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'queryid') THEN
						
		p_tyQueryWorkOrderInfo.tyAvl.bQueryId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryWorkOrderInfo.tyData.sQueryId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'machineid') THEN
						
		p_tyQueryWorkOrderInfo.tyAvl.bMachineId   := TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryWorkOrderInfo.tyData.sMachineId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'magazineid') THEN
						
		p_tyQueryWorkOrderInfo.tyAvl.bMagazineId   := TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryWorkOrderInfo.tyData.sMagazineId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'slotid') THEN
						
		p_tyQueryWorkOrderInfo.tyAvl.bSlotId   := TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryWorkOrderInfo.tyData.iSlotId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'barcode') THEN
						
		p_tyQueryWorkOrderInfo.tyAvl.bBarcode   := TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyQueryWorkOrderInfo.tyData.sBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	END_IF
	
END_FUNCTION
