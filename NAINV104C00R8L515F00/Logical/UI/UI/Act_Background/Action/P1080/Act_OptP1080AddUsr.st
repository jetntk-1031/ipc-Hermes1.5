
ACTION Act_OptP1080AddUsr:

	// Add New User Display Control
	IF tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bRtCompl = TRUE THEN
		p_tyP1080UsrMgmtAct ACCESS ADR(tyP1080UsrMgmt.tyCreate);
		
		fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
		
		tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue			:= '';
		tyP1080UsrMgmt.tyCreate.tyStringPw.sValue				:= '';
		tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx			:= 0;
		
		tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bRtCompl			:= FALSE;
		tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue				:= TRUE;
	END_IF
	
	// Add New User
	IF tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue = TRUE THEN
		IF tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl = TRUE THEN
			IF usiSaveUsrMgmtStep = 0 THEN
				tyUsrMgmtInfoIn.sUsrNm			:= tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue;
				tyUsrMgmtInfoIn.sPw				:= tyP1080UsrMgmt.tyCreate.tyStringPw.sValue;
				tyUsrMgmtInfoIn.eUsrLvl			:= tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx + 1;
			
				eUsrMgmtAct		:= UsrMgmtActAdd;
			
				IF p_eUsrMgmtStat = UsrMgmtActAdd AND p_eUsrMgmtStatus = Done THEN
					eUsrMgmtAct	:= UsrMgmtActIdle;
				
					IF p_bUsrMgmtNmEmpty = TRUE THEN
						usiSaveUsrMgmtStep		:= 1;
					ELSIF p_bUsrMgmtListFull = TRUE THEN
						usiSaveUsrMgmtStep		:= 2;
					ELSIF p_bUsrMgmtNmExist = TRUE THEN
						usiSaveUsrMgmtStep		:= 3;
					ELSE
						bRefreshUsrMgmtTable	:= TRUE;
						usiSaveUsrMgmtStep		:= 99;
					END_IF
				ELSIF p_eUsrMgmtStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxAddErr);
				
					IF tyP1080UsrMgmt.tyMsgBoxAddErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1080UsrMgmt.tyMsgBoxAddErr.tyBtnNo.bRtCompl 			:= FALSE;
						tyP1080UsrMgmt.tyMsgBoxAddErr.tyBtnNo.bValue 			:= FALSE;
						
						p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
						
						usiSaveUsrMgmtStep		:= 99;
					END_IF
				END_IF
				
			// Recipe No Name
			ELSIF usiSaveUsrMgmtStep = 1 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxAddParamErr);
				
				IF tyP1080UsrMgmt.tyMsgBoxAddParamErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1080UsrMgmt.tyMsgBoxAddParamErr.tyBtnNo.bRtCompl 		:= FALSE;
					tyP1080UsrMgmt.tyMsgBoxAddParamErr.tyBtnNo.bValue 			:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue				:= '';
					tyP1080UsrMgmt.tyCreate.tyStringPw.sValue					:= '';
					tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx				:= 0;
				
					tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl 					:= FALSE;
					tyP1080UsrMgmt.tyCreate.tyBtnOk.bValue 						:= FALSE;
					
					usiSaveUsrMgmtStep			:= 0;
				END_IF
				
			// User List Full
			ELSIF usiSaveUsrMgmtStep = 2 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxListFull);
				
				IF tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl = TRUE THEN
					tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl 			:= FALSE;
					tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bValue 				:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
					
					usiSaveUsrMgmtStep			:= 99;
				END_IF
				
			// User Name Exist
			ELSIF usiSaveUsrMgmtStep = 3 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxAddNmExist);
				
				IF tyP1080UsrMgmt.tyMsgBoxAddNmExist.tyBtnNo.bRtCompl = TRUE THEN
					tyP1080UsrMgmt.tyMsgBoxAddNmExist.tyBtnNo.bRtCompl 			:= FALSE;
					tyP1080UsrMgmt.tyMsgBoxAddNmExist.tyBtnNo.bValue 			:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue				:= '';
					tyP1080UsrMgmt.tyCreate.tyStringPw.sValue					:= '';
					tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx				:= 0;
				
					tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl 					:= FALSE;
					tyP1080UsrMgmt.tyCreate.tyBtnOk.bValue 						:= FALSE;
					
					usiSaveUsrMgmtStep			:= 0;
				END_IF
				
			ELSIF usiSaveUsrMgmtStep = 99 THEN
				tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue						:= FALSE;
				
				tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl						:= FALSE;
				tyP1080UsrMgmt.tyCreate.tyBtnOk.bValue							:= FALSE;
				
				tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue					:= '';
				tyP1080UsrMgmt.tyCreate.tyStringPw.sValue						:= '';
				tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx					:= 0;
				
				usiSaveUsrMgmtStep			:= 0;
				
				fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat));
				
			END_IF
			
		ELSIF tyP1080UsrMgmt.tyCreate.tyBtnCancel.bRtCompl = TRUE THEN
			fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat));
			
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue							:= FALSE;
			
			tyP1080UsrMgmt.tyCreate.tyBtnCancel.bRtCompl						:= FALSE;
			tyP1080UsrMgmt.tyCreate.tyBtnCancel.bValue							:= FALSE;	
		END_IF
		
	END_IF
				
END_ACTION
