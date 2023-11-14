
ACTION Act_OptP1024Save:
	
	IF 	tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.bRtCompl OR tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.bRtCompl THEN
	
		fUIInRtStatHide(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
		
		tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.bRtCompl	:= FALSE;
		tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.bRtCompl	:= FALSE;
		
	END_IF
	
	IF tyCommon.tySet.tyBtnSave.bRtCompl = TRUE THEN
		//Save Param
		tyMcParamWr.tyConvLftSenAntiGapDly.diSigOffTm	:= tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValue;
		tyMcParamWr.tyConvRgtSenAntiGapDly.diSigOffTm	:= tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValue;
		
		eMcParamAct	:= McParamActWrite;
		
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct	:= McParamActIdle;
			
			//Backup Param
			tyP1024McSetAntiGap.tyAntiGapBkUp	:= tyP1024McSetAntiGap.tyAntiGap;
			
			tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
		ELSIF p_eMcParamStatus = Error THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1024McSetAntiGap.tyMsgBoxSaveErr);
			
			IF tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
				tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1024McSetAntiGap.tyMsgBoxHide);
				
				//Restore Param
				tyP1024McSetAntiGap.tyAntiGap	:= tyP1024McSetAntiGap.tyAntiGapBkUp;
				tyMcParamWr						:= p_tyMcParamCurr;
				
				tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
				
				fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
