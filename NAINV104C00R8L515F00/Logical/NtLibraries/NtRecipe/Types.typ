
TYPE
	tyRecipeInternal : 	STRUCT  (*Local Variables*)
		bNmExist : BOOL;
		udi : UDINT;
		udiRecipeNmOffset : UDINT;
		udiRecipeToDelIdx : UDINT;
		udiFilterCntr : UDINT;
		bNmTemp : STRING[254];
		udiRcpCntr : UDINT;
		udiSortCntr : UDINT;
		udiSortCntr2 : UDINT;
		udiLastCharCntr : UDINT;
		sTempString : STRING[254];
		sSortAlphabetClass : STRING[254];
		sSortData1 : STRING[254];
		sSortData2 : STRING[254];
		j : INT;
		i : INT;
		iShorterNm : INT;
		diAlphabet1Class : DINT;
		diAlphabet2Class : DINT;
		bBypassChk : BOOL;
		bUpperCase1 : BOOL;
		bUpperCase2 : BOOL;
		bLowerCase1 : BOOL;
		bLowerCase2 : BOOL;
		iQuickSortNo : INT;
		sDebugFilter : STRING[100];
		sDebugString : STRING[100];
		sDebug : STRING[100];
	END_STRUCT;
END_TYPE
