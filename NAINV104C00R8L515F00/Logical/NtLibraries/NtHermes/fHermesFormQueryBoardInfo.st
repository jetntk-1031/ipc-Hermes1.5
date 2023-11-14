
(* Hermes Form Query Board Info Table Data (Total Index Written In Table) *)
FUNCTION fHermesFormQueryBoardInfo
	
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
	pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'QueryBoardInfo';
	pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
	iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
	IF tyParameter.tyAvl.bTopBarcode = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'TopBarcode';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sTopBarcode;
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
	
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	END_IF
	
	IF tyParameter.tyAvl.bBottomBarcode = TRUE THEN
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AT';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= 'BottomBarcode';
		pa_tyXMLTable[iTotalIdxWrite].uiSize	:= LEN(pa_tyXMLTable[iTotalIdxWrite].sValue);
		
		iTotalIdxWrite	:= iTotalIdxWrite + 1;
	
		pa_tyXMLTable[iTotalIdxWrite].sTitle	:= 'AV';
		pa_tyXMLTable[iTotalIdxWrite].sValue	:= tyParameter.tyData.sBottomBarcode;
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
	
	iTotalIdxWrite	:= fHermesFormQueryBoardInfo;
	
END_FUNCTION
