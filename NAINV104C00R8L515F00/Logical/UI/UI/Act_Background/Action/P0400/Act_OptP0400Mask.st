
ACTION Act_OptP0400Mask: 
	
	IF p_tyNtParamCurr.bLCSLFPrep AND p_tyMcParamCurr.bLCSLFEn THEN
		tyP0400ProdSel.tyProdSel.tyBtnLoad.uiMaskRtStat.0	:= FALSE;
	ELSE
		tyP0400ProdSel.tyProdSel.tyBtnLoad.uiMaskRtStat.0	:= (tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow].sValue <> '') AND (tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl = FALSE);
	END_IF
	
	tyP0400ProdSel.tyProdSel.tyBtnPreview.uiMaskRtStat.0	:= (tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow].sValue <> '') AND (tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl = FALSE) AND (tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl = FALSE);
	
	tyP0400ProdSel.tyProdSel.tyBtnSort.uiMaskRtStat.0		:= (tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[1].sValue <> '') AND (tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl = FALSE) AND (tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl = FALSE);
	
END_ACTION
