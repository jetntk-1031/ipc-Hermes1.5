
ACTION Act_OptP1080DelUsr:
	
	IF tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bRtCompl = TRUE THEN
		IF usiDelUsrMgmtStep = 0 THEN
			//Mask
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.uiMaskRtStat					:= FALSE;
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.uiMaskRtStat				:= FALSE;
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat				:= FALSE;
			tyP1080UsrMgmt.tyUsrMgmt.tyTableList.uiMaskRtStat					:= FALSE;
		
			p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxDelAsk);
		
			IF tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnYes.bRtCompl					:= FALSE;
				tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnYes.bValue					:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
				
				usiDelUsrMgmtStep			:= 1;
				
			ELSIF tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnNo.bRtCompl					:= FALSE;
				tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnNo.bValue					:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
			
				usiDelUsrMgmtStep			:= 99;
			END_IF

		ELSIF usiDelUsrMgmtStep = 1 THEN
			tyUsrMgmtInfoIn.sUsrNm			:= tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[tyP1080Table.uiSelectedRow].sValue;
			tyUsrMgmtInfoIn.eUsrLvl			:= USINT_TO_UDINT((tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[tyP1080Table.uiSelectedRow].usiValueIdx)- 1);
			
			eUsrMgmtAct 					:= UsrMgmtActDel;
			
			IF p_eUsrMgmtStat = UsrMgmtActDel AND p_eUsrMgmtStatus = Done THEN
				eUsrMgmtAct				:= UsrMgmtActIdle;
				
				IF p_bUsrMgmtUnableDelete = TRUE THEN
					usiDelUsrMgmtStep		:= 2;
				ELSIF p_bUsrMgmtNmEmpty = TRUE THEN
					usiDelUsrMgmtStep		:= 3;
				ELSIF p_bUsrMgmtNmNotExist = TRUE THEN
					usiDelUsrMgmtStep		:= 4;
				ELSE 
					bRefreshUsrMgmtTable	:= TRUE;
					usiDelUsrMgmtStep		:= 99;
				END_IF
			END_IF
		
		ELSIF usiDelUsrMgmtStep = 2 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr);
		
			IF tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr.tyBtnNo.bRtCompl 		:= FALSE;
				tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr.tyBtnNo.bValue 			:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
				
				usiDelUsrMgmtStep			:= 99;
			END_IF	
			
		// User Managment Param Invalid
		ELSIF usiDelUsrMgmtStep	= 3 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxDelParamErr);
		
			IF tyP1080UsrMgmt.tyMsgBoxDelParamErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1080UsrMgmt.tyMsgBoxDelParamErr.tyBtnNo.bRtCompl 			:= FALSE;
				tyP1080UsrMgmt.tyMsgBoxDelParamErr.tyBtnNo.bValue 				:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
				
				usiDelUsrMgmtStep			:= 99;
			END_IF	
			
		// Name Not Exist
		ELSIF usiDelUsrMgmtStep = 4 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxDelNmNotExist);
		
			IF tyP1080UsrMgmt.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl = TRUE THEN
				tyP1080UsrMgmt.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl 			:= FALSE;
				tyP1080UsrMgmt.tyMsgBoxDelNmNotExist.tyBtnNo.bValue 			:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
				
				usiDelUsrMgmtStep			:= 99;
			END_IF	
			
		ELSIF usiDelUsrMgmtStep = 99 THEN
			//Unmask
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.uiMaskRtStat					:= TRUE;
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.uiMaskRtStat				:= TRUE;
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat				:= TRUE;
			tyP1080UsrMgmt.tyUsrMgmt.tyTableList.uiMaskRtStat					:= TRUE;
					
			//Reset	
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bRtCompl					:= FALSE;
			tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bValue 						:= FALSE;
					
			usiDelUsrMgmtStep				:= 0;
		END_IF
		
	END_IF
	
END_ACTION