
ACTION Act_OptP1023Keypad: 
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyUSHermes.tyNumLaneID.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyUSHermes.tyNumLaneID.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyUSHermes.tyNumHostPort.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyUSHermes.tyNumHostPort.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyDSHermes.tyNumLaneID.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyDSHermes.tyNumLaneID.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.sKeypadTitle;
		
	END_IF
	
END_ACTION
