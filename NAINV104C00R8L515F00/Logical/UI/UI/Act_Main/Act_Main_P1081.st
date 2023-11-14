
ACTION Act_Main_P1081:
	
	//User Managment User Acces Right
	//Level 1
	IF p_tyUsrMgmtFullData.tyAccessRightLvl1.sNm <> '' THEN
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.sNm;
		tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv1Nm						:= p_tyUsrMgmtFullData.tyAccessRightLvl1.sNm;
	ELSE
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sValue	:= tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv1Nm;
	END_IF
	
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOps.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bOpt;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSel.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bProdSel;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSel.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bMagSel;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bMcInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnAlm.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bAlm;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnBffrInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bBffrInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOvenInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bOvenInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bMagInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFCtrl.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bLFCtrl;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManual.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bManual;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnSimu.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bSimulation;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSet.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bProdSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSet.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bMagSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcSet.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bMcSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLang.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bLang;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFSet.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bLFSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnChgParam.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl1.bChgParam;
	
	//Level 2
	IF p_tyUsrMgmtFullData.tyAccessRightLvl2.sNm <> '' THEN
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.sNm;
		tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv2Nm						:= p_tyUsrMgmtFullData.tyAccessRightLvl2.sNm;
	ELSE
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sValue	:= tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv2Nm;
	END_IF
	
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOps.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bOpt;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSel.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bProdSel;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSel.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bMagSel;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bMcInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnAlm.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bAlm;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnBffrInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bBffrInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOvenInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bOvenInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bMagInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFCtrl.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bLFCtrl;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManual.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bManual;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnSimu.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bSimulation;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSet.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bProdSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSet.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bMagSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcSet.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bMcSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLang.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bLang;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFSet.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bLFSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnChgParam.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl2.bChgParam;
	
	//Level 3
	IF p_tyUsrMgmtFullData.tyAccessRightLvl3.sNm <> '' THEN
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.sNm;
		tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv3Nm						:= p_tyUsrMgmtFullData.tyAccessRightLvl3.sNm;
	ELSE
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sValue	:= tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv3Nm;
	END_IF
	
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOps.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bOpt;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSel.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bProdSel;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSel.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bMagSel;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bMcInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnAlm.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bAlm;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnBffrInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bBffrInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOvenInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bOvenInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagInfo.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bMagInfo;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFCtrl.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bLFCtrl;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManual.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bManual;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnSimu.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bSimulation;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSet.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bProdSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSet.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bMagSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcSet.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bMcSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLang.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bLang;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFSet.bValue		:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bLFSet;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnChgParam.bValue	:= p_tyUsrMgmtFullData.tyAccessRightLvl3.bChgParam;
	
END_ACTION
