
(* Hermes Form Stop Transport Table Data (Total Index Written In Table) *)
FUNCTION fHermesFormStopTransport
	
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
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'StopTransport';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	IF tyParameter.tyAvl.bTransferState = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'TransferState';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= DINT_TO_STRING(UDINT_TO_DINT(tyParameter.tyData.eTransferState));
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	IF tyParameter.tyAvl.bBoardId = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'BoardId';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sBoardId;
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'ES';
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
	
	iTotalIdxWrite	:= fHermesFormStopTransport;
	
END_FUNCTION
