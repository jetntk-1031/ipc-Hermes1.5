
ACTION Act_OptP0934Keypad: 
		
	IF fUIOutRtStatTPIsOpen(ADR(tyP0934AW.tyAW.tyNumNewWidth.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt		:= tyP0934AW.tyAW.tyNumNewWidth.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP0934AW.tyMotionStd.tyNumTargetPos.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt		:= tyP0934AW.tyMotionStd.tyNumTargetPos.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP0934AW.tyMotionStd.tyNumStepSize.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt		:= tyP0934AW.tyMotionStd.tyNumStepSize.sKeypadTitle;
	
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP0934AW.tyMotionStd.tyNumNomSpd.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt		:= tyP0934AW.tyMotionStd.tyNumNomSpd.sKeypadTitle;
		
	ELSIF fUIOutRtStatTPIsOpen(ADR(tyP0934AW.tyMotionStd.tyNumSlwSpd.uiRtStat)) = TRUE THEN
		tyProperty.tyKeypad.tyTxtTitle.sTxt		:= tyP0934AW.tyMotionStd.tyNumSlwSpd.sKeypadTitle;
		
	END_IF
	
END_ACTION
