(*2020-06-08*)
(**)
(*Action*)

TYPE
	eProdRcpAction : 
		(
		ProdRcpActIdle,
		ProdRcpActCreateDir,
		ProdRcpActAddEdit,
		ProdRcpActDel,
		ProdRcpActGetInfo,
		ProdRcpActGetList,
		ProdRcpActFilter,
		ProdRcpActLoadRcp,
		ProdRcpActAdd,
		ProdRcpActEdit,
		ProdRcpActReadCurrRcp,
		ProdRcpActWriteCurrRcpParam,
		ProdRcpActSaveList,
		ProdRcpActSort,
		ProdRcpActEndCharFilter
		);
END_TYPE

(**)
(*Data*)

TYPE
	tyProdRcpParam : 	STRUCT 
		sRcpNm : STRING[254];
		diWidthInUM : DINT;
		diWidthInUM2 : DINT;
		usiMcMod : USINT;
		sDisplayInfo : STRING[30];
		dtLastModified : DATE_AND_TIME;
		usiFlippedBrd : USINT;
		sMatchCode : STRING[30];
	END_STRUCT;
END_TYPE
