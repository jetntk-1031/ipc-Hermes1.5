
ACTION Act_OptP1024Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.sKeypadTitle;	
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.sKeypadTitle;		
		
	END_IF
	
END_ACTION
