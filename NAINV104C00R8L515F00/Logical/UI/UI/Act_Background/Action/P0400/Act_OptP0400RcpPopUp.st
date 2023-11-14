
ACTION Act_OptP0400RcpPopUp:
	
	
	tyP0400ProdSel.tyProdSel.tyHotspotShowLRcp.uiRtStat.0	:= NOT(tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue <> ''); 
	
	IF tyP0400ProdSel.tyProdSel.tyHotspotShowLRcp.bRtCompl = TRUE THEN
		tyP0400ProdSel.tyProdSel.tyHotspotShowLRcp.bRtCompl  := FALSE;
		
		fUIInRtStatOff(ADR(tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat));
		
		tyP0400ProdSel.tyRcpPopUp.tyStringInfo.sValue  :=  tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue; // Show 254 Characters
		
	ELSIF tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl := FALSE;
		
		fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)); // Hide Pop Up Again
		
	END_IF
	
END_ACTION
