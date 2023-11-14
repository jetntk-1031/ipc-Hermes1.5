(** 2018-12-21 **)
ACTION Act_Main_P0400:
	//Display
//	tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.uiRtStat.0	:= NOT p_tyNtParamCurr.bHermesPrep;
//	tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.uiRtStat.0	:= NOT p_tyNtParamCurr.bHermesPrep;
	tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.uiRtStat.0	:= TRUE;
	tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.uiRtStat.0	:= TRUE;
	
	//Product Selection
	tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue		:= p_tyProdRcpCurrRcp0.sRcpNm;
	tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue			:= p_tyProdRcpCurrRcp0.diWidthInUM;
	tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx			:= p_tyProdRcpCurrRcp0.usiMcMod;
	tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx	:= p_tyProdRcpCurrRcp0.usiFlippedBrd;
	tyP0400ProdSel.tyProdSel.tyStringMatchCode.sValue		:= p_tyProdRcpCurrRcp0.sMatchCode;
	
		
	IF p_tyNtParamCurr.bLFProdWidth2Prep THEN
		fUIInRtStatOff(ADR(tyP0400ProdSel.tyProdSel.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyProdSel.tyNumProdWidth.uiRtStat));
		
		fUIInRtStatOff(ADR(tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpDet.tyNumProdWidth.uiRtStat));
		
		tyP0400ProdSel.tyProdSel.tyTableRecipe.tyStringTitle2Col2Row0.sValue:= 'US | DS Width';
		
		
	ELSE
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyProdSel.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatOff(ADR(tyP0400ProdSel.tyProdSel.tyNumProdWidth.uiRtStat));
		
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatOff(ADR(tyP0400ProdSel.tyRcpDet.tyNumProdWidth.uiRtStat));	
		
		tyP0400ProdSel.tyProdSel.tyTableRecipe.tyStringTitle2Col2Row0.sValue:= 'Product Width';
	END_IF

END_ACTION
