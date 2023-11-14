
ACTION Act_OptP0400Preview:
	
	IF tyP0400ProdSel.tyProdSel.tyBtnPreview.bRtCompl = TRUE THEN
		
		tyProdRcpInfoIn.sRcpNm	:= tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow].sValue;
		
		eProdRcpAct	:= ProdRcpActGetInfo;
		
		IF	p_eProdRcpStat = ProdRcpActGetInfo AND p_eProdRcpStatus = Done THEN
			eProdRcpAct	:= ProdRcpActIdle;
			
			IF p_bProdRcpNmEmpty = TRUE AND p_bProdRcpNmNotExist = TRUE THEN
				tyP0400ProdSel.tyRcpDet.tyStringRecipeNm.sValue		:= '';
				tyP0400ProdSel.tyRcpDet.tyNumProdWidth.diValue		:= 100000;
				tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.diValue		:= 100000;
				tyP0400ProdSel.tyRcpDet.tyTxtMcMod.usiValueIdx		:= p_tyMcParamCurr.usiDefaultMcMod;
				tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.usiValueIdx	:= p_tyMcParamCurr.usiDefaultFlippedBrd;
				tyP0400ProdSel.tyRcpDet.tyStringMatchCode.sValue	:= '';
			ELSE
				tyP0400ProdSel.tyRcpDet.tyStringRecipeNm.sValue		:= p_tyProdRcpInfoOut.sRcpNm;
				tyP0400ProdSel.tyRcpDet.tyNumProdWidth.diValue		:= p_tyProdRcpInfoOut.diWidthInUM;
				tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.diValue		:= p_tyProdRcpInfoOut.diWidthInUM2;
				tyP0400ProdSel.tyRcpDet.tyTxtMcMod.usiValueIdx		:= p_tyProdRcpInfoOut.usiMcMod;
				tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.usiValueIdx	:= p_tyProdRcpInfoOut.usiFlippedBrd;
				tyP0400ProdSel.tyRcpDet.tyStringMatchCode.sValue	:= p_tyProdRcpInfoOut.sMatchCode;
			END_IF
			
			fUIInRtStatOff(ADR(tyP0400ProdSel.tyRcpDet.tyLyr.uiRtStat));
			
			tyP0400ProdSel.tyProdSel.tyBtnPreview.bRtCompl	:= FALSE;
			
		END_IF
		
	END_IF
	
	IF tyP0400ProdSel.tyRcpDet.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0400ProdSel.tyRcpDet.tyHotspotClose.bRtCompl	:= FALSE;
		tyP0400ProdSel.tyProdSel.tyBtnPreview.bValue	:= FALSE;
		
		//Hide Recipe Details
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpDet.tyLyr.uiRtStat));
		
	END_IF
	
	//254 Characters are Shown	
	IF tyP0400ProdSel.tyRcpDet.tyHotspotShowLRcp.bRtCompl = TRUE THEN
		tyP0400ProdSel.tyRcpDet.tyHotspotShowLRcp.bRtCompl  := FALSE;
		
		fUIInRtStatOff(ADR(tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat));
		
		tyP0400ProdSel.tyRcpPopUp.tyStringInfo.sValue  :=  tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow].sValue; // Show 254 Characters
		
	ELSIF tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl := FALSE;
		
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)); // Hide Pop Up Again
	
	END_IF 
	
END_ACTION
		
