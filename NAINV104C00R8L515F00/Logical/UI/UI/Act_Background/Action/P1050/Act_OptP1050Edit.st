
ACTION Act_OptP1050Edit:
	
	IF tyP1050LFSet.tyLdr.tyBtnEdit.bRtCompl = TRUE THEN
		
		FOR i := 1 TO UDINT_TO_UINT(c_diLFClntNum) DO
			IF tyMcParamWr.a_sLFIPAddr[i] = '' THEN
				uiLFStartEditNo	:= i;
				EXIT;
			END_IF
		END_FOR			

		tyP1050LFSet.tyLdr.tyBtnEdit.bRtCompl	:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnEdit.bValue		:= TRUE;
		
		fUIInRtStatOff(ADR(tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1050LFSet.tyLdr.tyLyr.uiRtStat));
		
		tyP1050LFSet.tyLdrEdit.tyNumMcNum.diValue		:= STRING_TO_DINT(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[tyP1050Table.uiSelectedRow].sValue);
		tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue	:= tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow].sValue;
		
	ELSIF tyP1050LFSet.tyLdr.tyBtnEdit.bValue = TRUE THEN
		
		IF tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl = TRUE THEN
			
			IF fIPValid(tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue , ADR(a_iIPPart1)) = TRUE AND bCheckDone = FALSE THEN
				FOR i := 1 TO UDINT_TO_UINT(c_diLFClntNum) DO
					IF i <>  tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1 THEN
						fIPValid(p_tyMcParamCurr.a_sLFIPAddr[i] , ADR(a_iIPPart2));
						
						IF (a_iIPPart1[1] = a_iIPPart2[1] AND a_iIPPart1[2] = a_iIPPart2[2] AND a_iIPPart1[3] = a_iIPPart2[3] AND a_iIPPart1[4] = a_iIPPart2[4]) 
							AND (tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue <> '') THEN
							
							bIPDuplicate	:= TRUE;
							EXIT;
							
						END_IF
					END_IF
				END_FOR
				bCheckDone := TRUE;
			END_IF	
			
			IF fIPValid(tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue , ADR(a_iIPPart1)) = FALSE THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxIPAddrInvalid);
						
				IF tyP1050LFSet.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl = TRUE THEN
					tyP1050LFSet.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl	:= FALSE;
					tyP1050LFSet.tyMsgBoxIPAddrInvalid.tyBtnNo.bValue	:= FALSE;
			
					p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
					
					tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl	:= FALSE;
					tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue	:= FALSE;
					bCheckDone := FALSE;
				END_IF
				
			ELSIF bIPDuplicate = TRUE THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxIPAddrDuplicate);
				
				IF tyP1050LFSet.tyMsgBoxIPAddrDuplicate.tyBtnNo.bRtCompl = TRUE THEN
					tyP1050LFSet.tyMsgBoxIPAddrDuplicate.tyBtnNo.bRtCompl	:= FALSE;
					tyP1050LFSet.tyMsgBoxIPAddrDuplicate.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
					
					bIPDuplicate							:= FALSE;
					tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl	:= FALSE;
					tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue	:= FALSE;
					bCheckDone := FALSE;
				END_IF
			ELSE
				tyMcParamWr.a_sLFIPAddr[tyP1050Table.uiTablePos + tyP1050Table.uiSelectedRow - 1]	:= tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue;
				
				eMcParamAct	:= McParamActWrite;
				
				IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
					eMcParamAct	:= McParamActIdle;																
					
					tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow].sValue		:= tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue;
					
					IF tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue = '0000' THEN
						tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow].usiValueIdx	:= 3;
					ELSE
						tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow].usiValueIdx	:= 1;
					END_IF
					
					//LF Control
					FOR i := 1 TO c_uiP1050TableSize DO
						tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0700Table.uiTablePos + i - 1);
						tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue	:= p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1];
					END_FOR
					
					tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl	:= FALSE;
					tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue	:= FALSE;
					tyP1050LFSet.tyLdr.tyBtnEdit.bValue		:= FALSE;
					bCheckDone								:= FALSE;
					
					fUIInRtStatHide(ADR(tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat));
					fUIInRtStatOff(ADR(tyP1050LFSet.tyLdr.tyLyr.uiRtStat));
					
				ELSIF p_eMcParamStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxSaveErr);
					
					IF tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
						p_tyC0008MsgBox ACCESS ADR(tyP1050LFSet.tyMsgBoxHide);
						
						//Recover
						tyMcParamWr	:= p_tyMcParamCurr;
						
						tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl	:= FALSE;
						tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue	:= FALSE;
						tyP1050LFSet.tyLdr.tyBtnEdit.bValue		:= FALSE;
						bCheckDone								:=FALSE;
						
						fUIInRtStatHide(ADR(tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat));
						fUIInRtStatOff(ADR(tyP1050LFSet.tyLdr.tyLyr.uiRtStat));						
					END_IF
				END_IF
			END_IF
		ELSIF tyP1050LFSet.tyLdrEdit.tyBtnCancel.bRtCompl = TRUE THEN
			tyP1050LFSet.tyLdrEdit.tyBtnCancel.bRtCompl	:= FALSE;
			tyP1050LFSet.tyLdrEdit.tyBtnCancel.bValue	:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnEdit.bValue			:= FALSE;
			
			fUIInRtStatHide(ADR(tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1050LFSet.tyLdr.tyLyr.uiRtStat));
		END_IF
	END_IF
	
	IF bLFSettingAutoFill THEN
		
		iIPExtract:= LEN(p_sHWInfoIPAddr)-10;
		sLFSettingCurrentIP := RIGHT(p_sHWInfoIPAddr,iIPExtract);
		iLFSettingCurrentIP	:= STRING_TO_INT(sLFSettingCurrentIP);
		
		FOR i:= 1 TO 20 DO
			sLFSettingAutoFill	:='192.168.0.';
			sLFSettingTemp		:=UINT_TO_STRING(iLFSettingCurrentIP+(i*2)-2);
			sLFSettingAutoFill	:=CONCAT(sLFSettingAutoFill,sLFSettingTemp);
			tyMcParamWr.a_sLFIPAddr[i]:= sLFSettingAutoFill;
			tyMcParamWr.a_bLFOnline[i]:= FALSE;
		END_FOR
		
		eMcParamAct	:= McParamActWrite;
				
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct	:= McParamActIdle;
			bUpdateP1050Table	:= TRUE;
			bLFSettingAutoFill	:= FALSE;
		ELSIF p_eMcParamStatus = Error THEN
			//Recover
			tyMcParamWr	:= p_tyMcParamCurr;
			bUpdateP1050Table	:= TRUE;
			bLFSettingAutoFill	:= FALSE;
		END_IF
		
	END_IF
	
	IF bLFSettingAutoClear THEN
		FOR i:= 1 TO 20 DO
			tyMcParamWr.a_sLFIPAddr[i]:= '';
			tyMcParamWr.a_bLFOnline[i]:= FALSE;
		END_FOR
		
		eMcParamAct	:= McParamActWrite;
				
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct	:= McParamActIdle;
			bUpdateP1050Table	:= TRUE;
			bLFSettingAutoClear	:= FALSE;
		ELSIF p_eMcParamStatus = Error THEN
			//Recover
			tyMcParamWr	:= p_tyMcParamCurr;
			bUpdateP1050Table	:= TRUE;
			bLFSettingAutoClear	:= FALSE;
		END_IF
		
	END_IF
	
END_ACTION
