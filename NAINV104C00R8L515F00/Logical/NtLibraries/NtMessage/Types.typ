
TYPE
	tyXMLConvertToTableInternal : 	STRUCT 
		udi : UDINT;
		udj : UDINT;
		udiTitleOffset : UDINT;
		udiValueOffset : UDINT;
		udiSizeOffset : UDINT;
		udiStartAddr : UDINT;
		udiEndAddr : UDINT;
		udiTableValueSize : UDINT;
		uiSize : UINT;
		bSymbolStart : BOOL;
		bSymbolEnd : BOOL;
		bSymbolQuestion : BOOL;
		bSymbolSlash : BOOL;
		bSymbolEqual : BOOL;
		bSymbolQuotation : BOOL;
		bSymbolSpace : BOOL;
		bSymbolChar : BOOL;
		bFirstStart : BOOL;
		bInTag : BOOL;
		bInStartTag : BOOL;
		bInEndTag : BOOL;
		bInDeclarationTag : BOOL;
		bInTagNm : BOOL;
		bInTagNmDone : BOOL;
		bInTagAttribute : BOOL;
		bInTagAttributeDone : BOOL;
		bInTagValue : BOOL;
		bInTagEndShort : BOOL;
		bInTagEndDeclaration : BOOL;
		bInElement : BOOL;
		bWriteStartTag : BOOL;
		bWriteEndTag : BOOL;
		bWriteDeclarationTag : BOOL;
		bWriteAttribute : BOOL;
		bWriteValue : BOOL;
		bWriteEnd : BOOL;
		bWriteEndShort : BOOL;
		bWriteEndDeclaration : BOOL;
		bWriteElement : BOOL;
	END_STRUCT;
	tyTableConvertToXMLInternal : 	STRUCT 
		udi : UDINT;
		udj : UDINT;
		udiTitleOffset : UDINT;
		udiValueOffset : UDINT;
		udiSizeOffset : UDINT;
		udiAddr : UDINT;
		udiLvl : UDINT;
		uiSize : UINT;
		udiSize : UDINT;
		udiCurrTitleAddr : UDINT;
		udiCurrValueAddr : UDINT;
	END_STRUCT;
	tyXMLTableDat : 	STRUCT 
		sTitle : STRING[2];
		sValue : STRING[254];
		uiSize : UINT;
	END_STRUCT;
END_TYPE
