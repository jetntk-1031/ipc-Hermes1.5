
ACTION Act_OptP1040Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP1040ProdSet.tyProdSet.tyStringRecipeNm.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sKeypadTitle;
			
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat)) THEN
		IF p_tyNtParamCurr.bLFProdWidth2Prep THEN
			tyProperty.tyKeypad.tyTxtTitle.sTxt	:= 'Product Width US';
		ELSE
			tyProperty.tyKeypad.tyTxtTitle.sTxt	:= 'Product Width DS';
		END_IF
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:='Product Width DS';
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1040ProdSet.tyProdSet.tyNumProdWidth.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1040ProdSet.tyProdSet.tyStringSearch.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1040ProdSet.tyProdSet.tyStringSearch.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1040ProdSet.tyProdSet.tyStringMatchCode.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1040ProdSet.tyProdSet.tyStringMatchCode.sKeypadTitle;	
		
	END_IF
	
END_ACTION
