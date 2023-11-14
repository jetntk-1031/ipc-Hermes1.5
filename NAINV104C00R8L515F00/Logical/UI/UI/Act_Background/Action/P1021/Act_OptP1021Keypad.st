
ACTION Act_OptP1021Keypad:
	
	IF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyStringMcNm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyStringMcNm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumSSaverTm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumSSaverTm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyStringIPAddr.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyStringIPAddr.sKeypadTitle;
			
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyStringSubnetMask.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumWidthAtHm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumWidthAtHm.sKeypadTitle;	
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumWidthOffset.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumWidthOffset.sKeypadTitle;		
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumConvInitTm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumConvInitTm.sKeypadTitle;				
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.sKeypadTitle;	
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.sKeypadTitle;	
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyNetwork.tyStringIPAddr.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyNetwork.tyStringIPAddr.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP1021McSetGen.tyNetwork.tyStringSubnetMask.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt	:= tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sKeypadTitle;
		
	END_IF


END_ACTION
