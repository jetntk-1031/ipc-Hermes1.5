
ACTION Act_OptP1050Online:
	
	IF tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl = TRUE THEN
		tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= TRUE;
		
		eMcParamAct	:= McParamActWrite;
		
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct	:= McParamActIdle;
			
			tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow].usiValueIdx	:= 2;
			
			//Reset
			tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl		:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnOnline.bValue		:= FALSE;
			
		ELSIF p_eMcParamStatus = Error THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxSaveErr);
			
			IF tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
				tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
				
				//Recover
				tyMcParamWr	:= p_tyMcParamCurr;
				
				//Reset
				tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl	:= FALSE;
				tyP1050LFSet.tyLdr.tyBtnOnline.bValue	:= FALSE;
			END_IF
		END_IF
	END_IF
	
END_ACTION
