
ACTION Act_OptP1040RcpPopUp:
	
	
	tyP1040ProdSet.tyProdSet.tyHotspotShowLRcp.uiRtStat.0	:= NOT(tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue <> ''); 
	
	IF tyP1040ProdSet.tyProdSet.tyHotspotShowLRcp.bRtCompl = TRUE THEN
		tyP1040ProdSet.tyProdSet.tyHotspotShowLRcp.bRtCompl  := FALSE;
		
		fUIInRtStatOff(ADR(tyP1040ProdSet.tyRcpPopUp.tyLyr.uiRtStat));
		
		tyP1040ProdSet.tyRcpPopUp.tyStringInfo.sValue  :=  tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; // Show 254 Characters
		
	ELSIF tyP1040ProdSet.tyRcpPopUp.tyHotspotClose.bRtCompl = TRUE THEN
		tyP1040ProdSet.tyRcpPopUp.tyHotspotClose.bRtCompl := FALSE;
		
		fUIInRtStatHide(ADR(tyP1040ProdSet.tyRcpPopUp.tyLyr.uiRtStat)); // Hide Pop Up Again
		
	END_IF
	
END_ACTION
