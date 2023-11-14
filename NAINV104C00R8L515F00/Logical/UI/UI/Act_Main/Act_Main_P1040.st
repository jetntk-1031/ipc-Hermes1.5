(** 2018-12-21 **)
ACTION Act_Main_P1040:
	
//	tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.uiRtStat := NOT p_tyNtParamCurr.bHermesPrep;
	tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.uiRtStat := TRUE;
//	tyP1040ProdSet.tyProdSet.tyTxtDrpDnFlippedBrd.uiRtStat := NOT p_tyNtParamCurr.bHermesPrep;
	tyP1040ProdSet.tyProdSet.tyTxtDrpDnFlippedBrd.uiRtStat := TRUE;
	
	tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueMinIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMin);
	tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueMaxIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMax);
	
	tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValueMin	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMin;
	tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValueMax	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax;
	
	tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueMinIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMin);
	tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueMaxIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMax);
	
	tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValueMin	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMin;
	tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValueMax	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax;
	
	FOR i := 1 TO c_uiP1040TableSize DO
		tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(i);
		tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpCurrList[i].sRcpNm;
		tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpCurrList[i].sDisplayInfo;
	END_FOR
	
	IF p_tyNtParamCurr.bLFProdWidth2Prep THEN
		fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat));	
		
		tyP1040ProdSet.tyProdSet.tyTableRecipe.tyStringTitle2Col2Row0.sValue:= 'US | DS Width';
	ELSE
		fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat));
		
		tyP1040ProdSet.tyProdSet.tyTableRecipe.tyStringTitle2Col2Row0.sValue:= 'Product Width';
	END_IF
	
END_ACTION
