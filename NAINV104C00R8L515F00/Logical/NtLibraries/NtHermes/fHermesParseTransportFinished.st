
(* Hermes Parse XML Table Data For Transport Finished *)
FUNCTION fHermesParseTransportFinished
	
	fHermesParseTransportFinished	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'transferstate') THEN
						
		p_tyTransportFinished.tyAvl.bTransferState	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyTransportFinished.tyData.eTransferState	:= HermesTransferStateNotStarted;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyTransportFinished.tyData.eTransferState	:= HermesTransferStateIncomplete;
			ELSE
				p_tyTransportFinished.tyData.eTransferState	:= HermesTransferStateComplete;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyTransportFinished.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyTransportFinished.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	END_IF
			
END_FUNCTION
