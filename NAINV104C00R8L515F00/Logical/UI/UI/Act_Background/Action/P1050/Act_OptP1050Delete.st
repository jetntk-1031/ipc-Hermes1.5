
ACTION Act_OptP1050Delete:
	
	IF tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl = TRUE THEN
		
		IF usiDelMcDetailsStep = 0 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxDelAsk);
			
			IF tyP1050LFSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP1050LFSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP1050LFSet.tyMsgBoxDelAsk.tyBtnYes.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
				
				usiDelMcDetailsStep	:= 1;
				
			ELSIF tyP1050LFSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl = TRUE THEN	
				tyP1050LFSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP1050LFSet.tyMsgBoxDelAsk.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
				
				tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl			:= FALSE;
				tyP1050LFSet.tyLdr.tyBtnDelete.bValue			:= FALSE;
			END_IF
				
		ELSIF usiDelMcDetailsStep = 1 THEN
//			tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= '';
//			tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= FALSE;
			
			IF bLFDeleteOn=FALSE THEN
				
				memcpy(ADR(tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]),ADR(tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow]),(SIZEOF(tyMcParamWr.a_sLFIPAddr[1]) * (50-(tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow-1))));
				memset(ADR(tyMcParamWr.a_sLFIPAddr[50]),0,SIZEOF(tyMcParamWr.a_sLFIPAddr[1]));
				
				memcpy(ADR(tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]),ADR(tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow]),(SIZEOF(tyMcParamWr.a_bLFOnline[1]) * (50-(tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow-1))));
				memset(ADR(tyMcParamWr.a_bLFOnline[50]),0,SIZEOF(tyMcParamWr.a_bLFOnline[1]));
				
				bLFDeleteOn:= TRUE;
				
			END_IF
			
			eMcParamAct	:= McParamActWrite;
			
			IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
				eMcParamAct	:= McParamActIdle;
				
				tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow].sValue	:= '';
				tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow].usiValueIdx	:= 0;
				
				//P0700 LF Control
				FOR i := 1 TO c_uiP1050TableSize DO
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0700Table.uiTablePos + i - 1);
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue	:= p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1];
				END_FOR
				
				usiDelMcDetailsStep	:= 0;
				
				tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl	:= FALSE;
				tyP1050LFSet.tyLdr.tyBtnDelete.bValue	:= FALSE;
				
				bLFDeleteOn			:=FALSE;
				bUpdateP1050Table	:=TRUE;
				
			ELSIF p_eMcParamStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxSaveErr);
				
				bLFDeleteOn			:=FALSE;
			
				IF tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
					p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
					
					//Recover
					tyMcParamWr	:= p_tyMcParamCurr;
					
					usiDelMcDetailsStep	:= 0;
					
					tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl	:= FALSE;
					tyP1050LFSet.tyLdr.tyBtnDelete.bValue	:= FALSE;
				END_IF
				
			END_IF	
			
		END_IF
		
	END_IF
	
END_ACTION
