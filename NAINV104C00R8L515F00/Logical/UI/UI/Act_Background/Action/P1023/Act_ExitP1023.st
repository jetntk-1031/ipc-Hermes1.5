
ACTION Act_ExitP1023: 
	
	IF tyCommon.tySet.tyBtnSave.uiMaskRtStat.0 = FALSE THEN
		usiChgPage	:= 1;
		
	ELSE
		
		p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxExitAsk);
		
		IF tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl = TRUE THEN
			tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl	:= FALSE;
			tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bValue	:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxHide);
			
			//Restore Param
			tyP1023McSetHComm.tyUSSel		:= tyP1023McSetHComm.tyUSSelBkUp;
			tyP1023McSetHComm.tyUSSMEMA		:= tyP1023McSetHComm.tyUSSMEMABkUp;
			tyP1023McSetHComm.tyUSHermes	:= tyP1023McSetHComm.tyUSHermesBkUp;
			tyP1023McSetHComm.tyDSSel		:= tyP1023McSetHComm.tyDSSelBkUp;
			tyP1023McSetHComm.tyDSSMEMA		:= tyP1023McSetHComm.tyDSSMEMABkUp;
			tyP1023McSetHComm.tyDSHermes	:= tyP1023McSetHComm.tyDSHermesBkUp;
			tyP1023McSetHComm.tyUSSel2		:= tyP1023McSetHComm.tyUSSelBkUp2;
			tyP1023McSetHComm.tyUSSMEMA2	:= tyP1023McSetHComm.tyUSSMEMABkUp2;
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
			usiChgPage	:= 1;
			
		ELSIF tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl = TRUE THEN
			tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl	:= FALSE;
			tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnNo.bValue	:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxHide);
			
			eChgPage	:= eCurrPage;
			usiChgPage	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
