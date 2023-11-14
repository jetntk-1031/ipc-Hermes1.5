
ACTION Act_OptP0201Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP0201OpsConv.tyChgParam.tyNumProdWidth.uiRtStat)) THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP0201OpsConv.tyChgParam.tyNumProdWidth.sKeypadTitle;
		
	END_IF
	
END_ACTION
