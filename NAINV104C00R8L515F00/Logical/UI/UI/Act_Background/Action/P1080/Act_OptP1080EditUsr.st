
ACTION Act_OptP1080EditUsr:
	
	// Edit User Display Control
	IF tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bRtCompl = TRUE THEN
		p_tyP1080UsrMgmtAct ACCESS ADR(tyP1080UsrMgmt.tyEdit);
		
		fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyEdit.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
		
		udiP1080SelectedRow		:= STRING_TO_UDINT(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol0[tyP1080Table.uiSelectedRow].sValue);
		usiP1080SelectedLvl		:= tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[tyP1080Table.uiSelectedRow].usiValueIdx;
		
		CASE tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx OF
			0:
				tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue			:= p_tyUsrMgmtAllList[udiP1080SelectedRow].sUsrNm;
				tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx		:= UDINT_TO_USINT((p_tyUsrMgmtAllList[udiP1080SelectedRow].eUsrLvl) - 1);
				
			1:
				tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue			:= p_tyUsrMgmtLv2List[udiP1080SelectedRow].sUsrNm;
				tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx		:= UDINT_TO_USINT((p_tyUsrMgmtLv2List[udiP1080SelectedRow].eUsrLvl) - 1);
			
			2:
				tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue			:= p_tyUsrMgmtLv3List[udiP1080SelectedRow].sUsrNm;
				tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx		:= UDINT_TO_USINT((p_tyUsrMgmtLv3List[udiP1080SelectedRow].eUsrLvl) - 1);
				
			3:
				tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue			:= p_tyUsrMgmtAdminList[udiP1080SelectedRow].sUsrNm;
				tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx		:= UDINT_TO_USINT((p_tyUsrMgmtAdminList[udiP1080SelectedRow].eUsrLvl) - 1);
		END_CASE
	
		tyP1080UsrMgmt.tyEdit.tyStringPw.sValue						:= '';
		
		IF usiP1080SelectedLvl = 5 OR usiP1080SelectedLvl = 6 THEN
			tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx			:= 3;
			tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx			:= 4;
		ELSE
			tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx			:= 0;
			tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx			:= 2;
		END_IF

		tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bRtCompl			:= FALSE;
		tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue				:= TRUE;
		
	END_IF
	
	// Edit User
	IF tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue = TRUE THEN
		IF tyP1080UsrMgmt.tyEdit.tyBtnOk.bRtCompl = TRUE THEN
			IF usiEditUsrMgmtStep = 0 THEN
				tyUsrMgmtInfoIn.sUsrNm			:= tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue;
				tyUsrMgmtInfoIn.sPw				:= tyP1080UsrMgmt.tyEdit.tyStringPw.sValue;
				tyUsrMgmtInfoIn.eUsrLvl			:= tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx + 1;
			
				eUsrMgmtAct					:= UsrMgmtActEdit;
			
				IF p_eUsrMgmtStat = UsrMgmtActEdit AND p_eUsrMgmtStatus = Done THEN
					eUsrMgmtAct				:= UsrMgmtActIdle;
					
					IF p_bUsrMgmtNmEmpty = TRUE THEN
						usiEditUsrMgmtStep		:= 1;
					ELSIF p_bUsrMgmtListFull = TRUE THEN
						usiEditUsrMgmtStep		:= 2;
					ELSE
						bRefreshUsrMgmtTable	:= TRUE;
						usiEditUsrMgmtStep		:= 99;
					END_IF
				ELSIF p_eUsrMgmtStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxEditErr);
				
					IF tyP1080UsrMgmt.tyMsgBoxEditErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1080UsrMgmt.tyMsgBoxEditErr.tyBtnNo.bRtCompl 		:= FALSE;
						tyP1080UsrMgmt.tyMsgBoxEditErr.tyBtnNo.bValue 			:= FALSE;
						
						p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
						
						usiEditUsrMgmtStep		:= 99;
					END_IF
				END_IF
				
			// User Managment Param Invalid
			ELSIF usiEditUsrMgmtStep = 1 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxEditParamErr);
				
				IF tyP1080UsrMgmt.tyMsgBoxEditParamErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1080UsrMgmt.tyMsgBoxEditParamErr.tyBtnNo.bRtCompl 		:= FALSE;
					tyP1080UsrMgmt.tyMsgBoxEditParamErr.tyBtnNo.bValue 			:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);

					tyP1080UsrMgmt.tyEdit.tyStringPw.sValue						:= '';
					tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx				:= 0;
				
					tyP1080UsrMgmt.tyEdit.tyBtnOk.bRtCompl 						:= FALSE;
					tyP1080UsrMgmt.tyEdit.tyBtnOk.bValue 						:= FALSE;
					
					usiEditUsrMgmtStep			:= 0;
				END_IF
				
			// User Managment List Full
			ELSIF usiEditUsrMgmtStep = 2 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxListFull);
				
				IF tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl = TRUE THEN
					tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl 			:= FALSE;
					tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bValue 				:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
					
					usiEditUsrMgmtStep			:= 99;
				END_IF
					
			ELSIF usiEditUsrMgmtStep = 99 THEN
				fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyEdit.tyLyr.uiRtStat));
		
				tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue					:= FALSE;
				
				tyP1080UsrMgmt.tyEdit.tyBtnOk.bRtCompl							:= FALSE;
				tyP1080UsrMgmt.tyEdit.tyBtnOk.bValue							:= FALSE;
				
				usiEditUsrMgmtStep				:= 0;
			END_IF
			
		ELSIF tyP1080UsrMgmt.tyEdit.tyBtnCancel.bRtCompl = TRUE THEN
			fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyEdit.tyLyr.uiRtStat));
		
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue						:= FALSE;
			
			tyP1080UsrMgmt.tyEdit.tyBtnCancel.bRtCompl							:= FALSE;
			tyP1080UsrMgmt.tyEdit.tyBtnCancel.bValue							:= FALSE;	
		END_IF
	END_IF
	
END_ACTION		