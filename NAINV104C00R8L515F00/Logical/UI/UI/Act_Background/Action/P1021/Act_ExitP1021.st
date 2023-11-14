
ACTION Act_ExitP1021: 

	IF tyCommon.tySet.tyBtnSave.uiMaskRtStat.0 = FALSE THEN
		usiChgPage	:= 1;
	
	ELSE
		p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxExitAsk);
		
		IF tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bRtCompl = TRUE THEN
			tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bRtCompl	:= FALSE;
			tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bValue		:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
			
			//Recover Param
			tyP1021McSetGen.tyGen	:= tyP1021McSetGen.tyGenBkUp;
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
			bSaveNetworkPriority	:= FALSE;
			
			usiChgPage	:= 1;
			
		ELSIF tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnNo.bRtCompl = TRUE THEN
			tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnNo.bRtCompl	:= FALSE;
			tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnNo.bValue		:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
			
			eChgPage	:= eCurrPage;
			usiChgPage	:= 0;
			
		END_IF
			
	END_IF

END_ACTION
