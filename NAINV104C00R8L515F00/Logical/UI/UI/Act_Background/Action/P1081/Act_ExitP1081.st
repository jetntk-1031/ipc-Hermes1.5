
ACTION Act_ExitP1081: 
	
	IF tyCommon.tySet.tyBtnSave.uiMaskRtStat.0 = FALSE THEN
		usiChgPage	:= 1;
		
	ELSE
		
		p_tyC0008MsgBox ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk);
		
		IF tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnYes.bRtCompl = TRUE THEN
			tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnYes.bRtCompl	:= FALSE;
			tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnYes.bValue		:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide);
			
			//Restore Param
			tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1BkUp;
			tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2BkUp;
			tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3BkUp;
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
			usiChgPage	:= 1;
			
		ELSIF tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnNo.bRtCompl = TRUE THEN
			tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnNo.bRtCompl	:= FALSE;
			tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnNo.bValue	:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide);
			
			eChgPage	:= eCurrPage;
			usiChgPage	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
