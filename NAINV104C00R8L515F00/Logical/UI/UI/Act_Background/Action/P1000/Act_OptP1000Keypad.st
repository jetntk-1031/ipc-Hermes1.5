
ACTION Act_OptP1000Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP1000Lang.tyLang.tyNumDay.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt			:= tyP1000Lang.tyLang.tyNumDay.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1000Lang.tyLang.tyNumMonth.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt			:= tyP1000Lang.tyLang.tyNumMonth.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1000Lang.tyLang.tyNumYear.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt			:= tyP1000Lang.tyLang.tyNumYear.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1000Lang.tyLang.tyNumSecond.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt			:= tyP1000Lang.tyLang.tyNumSecond.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1000Lang.tyLang.tyNumMinute.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt			:= tyP1000Lang.tyLang.tyNumMinute.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1000Lang.tyLang.tyNumHour.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt			:= tyP1000Lang.tyLang.tyNumHour.sKeypadTitle;	
		
	END_IF
	
END_ACTION
