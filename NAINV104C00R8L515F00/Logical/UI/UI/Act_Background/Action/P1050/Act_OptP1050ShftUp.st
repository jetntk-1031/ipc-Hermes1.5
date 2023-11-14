
ACTION Act_OptP1050ShftUp: 

	IF tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl = TRUE THEN
		IF usiTableShftStep = 0 THEN
			IF tyP1050Table.uiSelectedRow = 1 AND tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[1].sValue = '1' THEN
				tyP1050LFSet.tyLdr.tyBtnShftUp.bValue	:= FALSE;
				tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl	:= FALSE;
			ELSE
				usiTableShftStep	:= 1;
			END_IF
			
		ELSIF usiTableShftStep = 1 THEN
			IF p_tyMcParamCurr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2] <> '' THEN
				sLFIPAddrTemp	:= p_tyMcParamCurr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2];
				
				tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2]	:= p_tyMcParamCurr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1];
				tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= sLFIPAddrTemp;
				
				bOnlineTemp		:= p_tyMcParamCurr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2];
				
				tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2]	:= p_tyMcParamCurr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1];
				tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= bOnlineTemp;
			ELSE
				tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2]	:= p_tyMcParamCurr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1];
				memset(ADR(tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]), 0, SIZEOF(tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]));
				
				tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 2]	:= p_tyMcParamCurr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1];
				tyMcParamWr.a_bLFOnline[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= FALSE;
			END_IF
			
			usiTableShftStep	:= 2;
			
		ELSIF usiTableShftStep = 2 THEN
			eMcParamAct	:= McParamActWrite;
			
			IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
				eMcParamAct	:= McParamActIdle;
				
				//Table
				IF tyP1050Table.uiSelectedRow <> 1 THEN
					fbP1050Table.bSelectedRowMnl	:= TRUE;
					fbP1050Table.uiSelectedRowMnl	:= tyP1050Table.uiSelectedRow - 1;
				ELSE
					fbP1050Table.bTablePosMinus		:= TRUE;
				END_IF
				
				usiTableShftStep	:= 3;
				
			ELSIF p_eMcParamStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxSaveErr);
			
				IF tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
					p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
					
					//Recover
					tyMcParamWr	:= p_tyMcParamCurr;
					
					usiTableShftStep	:= 0;
					
					tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl	:= FALSE;
					tyP1050LFSet.tyLdr.tyBtnShftUp.bValue	:= FALSE;
				END_IF
			END_IF
			
		ELSIF usiTableShftStep = 3 THEN
			//UIP0700 LF Control
			FOR i := 1 TO c_uiP0700TableSize DO
				tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0700Table.uiTablePos + i - 1);
				tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue	:= p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1];
			END_FOR
			
			//Rst Table Control
			fbP1050Table.bSelectedRowMnl	:= FALSE;
			fbP1050Table.bTablePosMinus		:= FALSE;
			
			usiTableShftStep	:= 0;
			
			tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl	:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnShftUp.bValue	:= FALSE;
		END_IF
	END_IF
	
END_ACTION
