
ACTION Act_ExitP1022: 
	
	IF tyCommon.tySet.tyBtnSave.uiMaskRtStat.0 = FALSE THEN
		usiChgPage	:= 1;
		
	ELSE
		
		p_tyC0008MsgBox ACCESS ADR(tyP1022McSetVComm.tyMsgBoxExitAsk);
		
		IF tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl = TRUE THEN
			tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl	:= FALSE;
			tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bValue	:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1022McSetVComm.tyMsgBoxHide);
			
			//Restore Param
			tyP1022McSetVComm.tyVComSel	:= tyP1022McSetVComm.tyVComSelBkUp;
			tyP1022McSetVComm.tyLF		:= tyP1022McSetVComm.tyLFBkUp;
			tyP1022McSetVComm.tyVComSvy	:= tyP1022McSetVComm.tyVComSvyBkUp; //new for Hermes 1.3
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
			usiChgPage	:= 1;
			
		ELSIF tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl = TRUE THEN
			tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl	:= FALSE;
			tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnNo.bValue	:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1022McSetVComm.tyMsgBoxHide);
			
			eChgPage	:= eCurrPage;
			usiChgPage	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
