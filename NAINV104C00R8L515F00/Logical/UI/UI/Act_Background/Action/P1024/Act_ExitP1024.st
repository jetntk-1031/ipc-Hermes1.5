
ACTION Act_ExitP1024: 
	
	IF tyCommon.tySet.tyBtnSave.uiMaskRtStat.0 = FALSE THEN
		usiChgPage	:= 1;
		
	ELSE
		
		p_tyC0008MsgBox ACCESS ADR(tyP1024McSetAntiGap.tyMsgBoxExitAsk);
		
		IF tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bRtCompl = TRUE THEN
			tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bRtCompl	:= FALSE;
			tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bValue		:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1024McSetAntiGap.tyMsgBoxHide);
			
			//Restore Param
			tyP1024McSetAntiGap.tyAntiGap	:= tyP1024McSetAntiGap.tyAntiGapBkUp;
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
			usiChgPage	:= 1;
			
		ELSIF tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnNo.bRtCompl = TRUE THEN
			tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnNo.bRtCompl	:= FALSE;
			tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnNo.bValue		:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1024McSetAntiGap.tyMsgBoxHide);
			
			eChgPage	:= eCurrPage;
			usiChgPage	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
