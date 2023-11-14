
ACTION Act_OptP0100Keypad: 
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP0100Login.tyLogin.tyStringUsrNm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP0100Login.tyLogin.tyStringUsrNm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP0100Login.tyLogin.tyStringPw.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP0100Login.tyLogin.tyStringPw.sKeypadTitle;
		
	ELSE
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= '';
		
	END_IF
	
END_ACTION
