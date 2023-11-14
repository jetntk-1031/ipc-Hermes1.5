
ACTION Act_OptP1081Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sKeypadTitle;
		
	END_IF
	
END_ACTION
