
ACTION Act_OptP1050Oven:
	
	IF tyP1050LFSet.tyLdr.tyNumBeforeOven.bRtCompl = TRUE	OR tyP1050LFSet.tyLdr.tyNumAfterOven.bRtCompl = TRUE
		OR tyP1050LFSet.tyLdr.tyNumBeforeOven2.bRtCompl = TRUE	OR tyP1050LFSet.tyLdr.tyNumAfterOven2.bRtCompl = TRUE THEN
		
		tyMcParamWr.diLFMcIdxBeforeOven		:= tyP1050LFSet.tyLdr.tyNumBeforeOven.diValue;
		tyMcParamWr.diLFMcIdxAfterOven		:= tyP1050LFSet.tyLdr.tyNumAfterOven.diValue;
		tyMcParamWr.diLFMcIdxBeforeOven2	:= tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValue;
		tyMcParamWr.diLFMcIdxAfterOven2		:= tyP1050LFSet.tyLdr.tyNumAfterOven2.diValue;
		
		eMcParamAct	:= McParamActWrite;
		
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct	:= McParamActIdle;
			
			//BackUp Param
			tyP1050LFSet.tyLdrBkUp	:= tyP1050LFSet.tyLdr;
			
			tyP1050LFSet.tyLdr.tyNumBeforeOven.bRtCompl		:= FALSE;
			tyP1050LFSet.tyLdr.tyNumAfterOven.bRtCompl		:= FALSE;
			tyP1050LFSet.tyLdr.tyNumBeforeOven2.bRtCompl	:= FALSE;
			tyP1050LFSet.tyLdr.tyNumAfterOven2.bRtCompl		:= FALSE;
			
		ELSIF p_eMcParamStatus = Error THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxSaveErr);
			
			IF tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
				tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
				tyP1050LFSet.tyLdr.tyNumBeforeOven.bRtCompl		:= FALSE;
				tyP1050LFSet.tyLdr.tyNumAfterOven.bRtCompl		:= FALSE;
				tyP1050LFSet.tyLdr.tyNumBeforeOven2.bRtCompl	:= FALSE;
				tyP1050LFSet.tyLdr.tyNumAfterOven2.bRtCompl		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
				
				//Restore Param
				tyP1050LFSet.tyLdr	:= tyP1050LFSet.tyLdrBkUp;
				tyMcParamWr			:= p_tyMcParamCurr;
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
