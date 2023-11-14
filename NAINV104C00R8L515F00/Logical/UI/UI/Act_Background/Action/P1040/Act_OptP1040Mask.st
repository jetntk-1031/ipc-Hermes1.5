
ACTION Act_OptP1040Mask: 
	
	IF tyP1040ProdSet.tyProdSet.tyNumProdWidth.bRtCompl 			OR tyP1040ProdSet.tyProdSet.tyStringRecipeNm.bRtCompl
		OR tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.bRtCompl 			OR tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.bRtCompl 
		OR tyP1040ProdSet.tyProdSet.tyStringMatchCode.bRtCompl 		OR tyP1040ProdSet.tyProdSet.tyNumProdWidth2.bRtCompl THEN
		
		fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat));
		
		tyP1040ProdSet.tyProdSet.tyStringRecipeNm.bRtCompl	:= FALSE;
		tyP1040ProdSet.tyProdSet.tyNumProdWidth.bRtCompl	:= FALSE;
		tyP1040ProdSet.tyProdSet.tyNumProdWidth2.bRtCompl	:= FALSE;
		tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.bRtCompl		:= FALSE;
		tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.bRtCompl	:= FALSE;
		tyP1040ProdSet.tyProdSet.tyStringMatchCode.bRtCompl	:= FALSE;
	END_IF
	
	IF (tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow].sValue <> '') AND (tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl = FALSE) THEN
		fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat));
	ELSE
		fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat));
	END_IF
	
	tyP1040ProdSet.tyProdSet.tyBtnToXML.uiMaskRtStat.0		:= (tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat.0 = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl = FALSE);
	tyP1040ProdSet.tyProdSet.tyBtnFromXML.uiMaskRtStat.0	:= (tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat.0 = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl = FALSE);
	
	tyP1040ProdSet.tyProdSet.tyBtnSort.uiMaskRtStat.0		:= (tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[1].sValue <> '') AND (tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl = FALSE) 
																AND (tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat.0 = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl = FALSE) 
																AND (tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl = FALSE) AND (tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl = FALSE);

END_ACTION
