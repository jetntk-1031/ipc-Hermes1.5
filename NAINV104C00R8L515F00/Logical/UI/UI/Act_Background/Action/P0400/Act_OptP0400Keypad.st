
ACTION Act_OptP0400Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP0400ProdSel.tyProdSel.tyStringSearch.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP0400ProdSel.tyProdSel.tyStringSearch.sKeypadTitle;
		
	END_IF
	
END_ACTION
