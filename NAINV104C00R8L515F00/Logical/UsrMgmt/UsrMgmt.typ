(*2019-05-04*)
(**)
(*Action*)

TYPE
	eUsrMgmtAction : 
		(
		UsrMgmtActIdle,
		UsrMgmtActCreateDir,
		UsrMgmtActLogin,
		UsrMgmtActBypassLogin,
		UsrMgmtActLogout,
		UsrMgmtActAdd,
		UsrMgmtActEdit,
		UsrMgmtActDel,
		UsrMgmtActSaveAccessRight,
		UsrMgmtActReadData
		);
END_TYPE

(**)
(*Data*)

TYPE
	tyUsrMgmtParam : 	STRUCT 
		sUsrNm : STRING[30];
		sPw : STRING[30];
		eUsrLvl : eUsrMgmtAutLvl;
	END_STRUCT;
	eUsrMgmtAutLvl : 
		(
		UsrMgmtLvl1,
		UsrMgmtLvl2,
		UsrMgmtLvl3,
		UsrMgmtAdmin,
		UsrMgmtNtEngr,
		UsrMgmtNtAdmin
		);
	tyUsrMgmtAccessRight : 	STRUCT 
		bOpt : BOOL;
		bProdSel : BOOL;
		bMagSel : BOOL;
		bMcInfo : BOOL;
		bAlm : BOOL;
		bBffrInfo : BOOL;
		bOvenInfo : BOOL;
		bMagInfo : BOOL;
		bLFCtrl : BOOL;
		bManual : BOOL;
		bManualFBOnly : BOOL;
		bSimulation : BOOL;
		bProdSet : BOOL;
		bMagSet : BOOL;
		bMcSet : BOOL;
		bLang : BOOL;
		bUsrMgmt : BOOL;
		bLFSet : BOOL;
		bChgParam : BOOL;
		sNm : STRING[30];
	END_STRUCT;
	tyUsrMgmtFullDat : 	STRUCT 
		a_tyAllList : ARRAY[1..c_udiUsrMgmtMax]OF tyUsrMgmtParam;
		tyAccessRightLvl1 : tyUsrMgmtAccessRight := (bOpt:=TRUE,bProdSel:=TRUE,bMcInfo:=TRUE,bAlm:=TRUE,bLFCtrl:=TRUE);
		tyAccessRightLvl2 : tyUsrMgmtAccessRight := (bOpt:=TRUE,bProdSel:=TRUE,bMagSel:=TRUE,bMcInfo:=TRUE,bAlm:=TRUE,bBffrInfo:=TRUE,bOvenInfo:=TRUE,bMagInfo:=TRUE,bLFCtrl:=TRUE,bProdSet:=TRUE,bChgParam:=TRUE,sNm:='Line Leader');
		tyAccessRightLvl3 : tyUsrMgmtAccessRight := (bOpt:=TRUE,bProdSel:=TRUE,bMagSel:=TRUE,bMcInfo:=TRUE,bAlm:=TRUE,bBffrInfo:=TRUE,bOvenInfo:=TRUE,bMagInfo:=TRUE,bLFCtrl:=TRUE,bManual:=TRUE,bSimulation:=TRUE,bProdSet:=TRUE,bMagSet:=TRUE,bMcSet:=TRUE,bLang:=TRUE,bUsrMgmt:=TRUE,bLFSet:=TRUE,bChgParam:=TRUE,sNm:='Technician');
	END_STRUCT;
END_TYPE
