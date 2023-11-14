
(* Hermes Parse XML Table Data For Stop Transport*)
FUNCTION fHermesParseStopTransport
	
	fHermesParseStopTransport	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'transferstate') THEN
						
		p_tyStopTransport.tyAvl.bTransferState	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyStopTransport.tyData.eTransferState	:= HermesTransferStateNotStarted;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyStopTransport.tyData.eTransferState	:= HermesTransferStateIncomplete;
			ELSE
				p_tyStopTransport.tyData.eTransferState	:= HermesTransferStateComplete;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyStopTransport.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyStopTransport.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	END_IF
			
END_FUNCTION
