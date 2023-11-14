
ACTION Act_ExitP1000:
	
	eMcParamAct	:= McParamActWrite;
	
	IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
		eMcParamAct	:= McParamActIdle;
		
		usiChgPage	:= 1;
		
	ELSIF p_eMcParamStatus = Error THEN
		p_tyC0008MsgBox ACCESS ADR(tyP1000Lang.tyMsgBoxSaveErr);
		
		IF tyP1000Lang.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
			tyP1000Lang.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
			tyP1000Lang.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1000Lang.tyMsgBoxHide);
			
			//Restore Param
			tyP1000Lang.tyLang				:= tyP1000Lang.tyLangBkUp;
			tyMcParamWr						:= p_tyMcParamCurr;
			tyProperty.tyVisu.usiChgLang	:= p_tyMcParamCurr.usiLang;
			
			usiChgPage	:= 1;
			
		END_IF
		
	END_IF
	
END_ACTION
