
ACTION Act_OptP0100NomLogin:
	
	IF tyP0100Login.tyLogin.tyBtnLogin.bRtCompl = TRUE THEN
		
		IF usiLoginStep = 0 THEN
			tyUsrMgmtInfoIn.sUsrNm	:= tyP0100Login.tyLogin.tyStringUsrNm.sValue;
			tyUsrMgmtInfoIn.sPw		:= tyP0100Login.tyLogin.tyStringPw.sValue;
			
			usiLoginStep	:= 1;
			
		ELSIF usiLoginStep = 1 THEN
			//User Login
			eUsrMgmtAct	:= UsrMgmtActLogin;
			
			IF p_eUsrMgmtStat = UsrMgmtActLogin AND p_eUsrMgmtStatus = Done THEN
				eUsrMgmtAct	:= UsrMgmtActIdle;
				
				IF p_bUsrMgmtNmNotExist = TRUE THEN
					usiLoginStep	:= 2;
				ELSE
					IF p_bUsrMgmtLoginSuccess = TRUE AND p_bUsrMgmtPwMismatch = FALSE THEN
						usiLoginStep	:= 3;
					ELSIF p_bUsrMgmtLoginSuccess = FALSE AND p_bUsrMgmtPwMismatch = TRUE THEN
						usiLoginStep	:= 4;
					END_IF
				END_IF
				
			END_IF
			
		ELSIF usiLoginStep = 2 THEN
			//Name Not Exist
			p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxNmNotExist);
			
			IF tyP0100Login.tyMsgBoxNmNotExist.tyBtnNo.bRtCompl = TRUE THEN
				tyP0100Login.tyMsgBoxNmNotExist.tyBtnNo.bRtCompl	:= FALSE;
				tyP0100Login.tyMsgBoxNmNotExist.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxHide);
				
				usiLoginStep	:= 97;
			END_IF
			
		ELSIF usiLoginStep = 3 THEN
			//User Login Success
			tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMinIdx 	:= 0;
			tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMaxIdx 	:= 3;
			
			tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMinIdx	:= 0;
			tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMaxIdx	:= 2;
			
			tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx		:= 0;
			tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx		:= 2;
			
			usiLoginStep	:= 99;
			
		ELSIF usiLoginStep = 4 THEN
			//Password Mismatch
			p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxPwMismatch);
			
			IF tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl = TRUE THEN
				tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl	:= FALSE;
				tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxHide);
				
				usiLoginStep	:= 98;
			END_IF
			
		ELSIF usiLoginStep = 97 THEN
			tyP0100Login.tyLogin.tyStringUsrNm.sValue	:= '';
			tyP0100Login.tyLogin.tyStringPw.sValue		:= '';
			
			tyP0100Login.tyLogin.tyBtnLogin.bRtCompl	:= FALSE;
			tyP0100Login.tyLogin.tyBtnLogin.bValue		:= FALSE;
			
			usiLoginStep	:= 0;
			
			
		ELSIF usiLoginStep = 98 THEN
			//tyP0100Login.tyLogin.tyStringUsrNm.sValue	:= '';
			tyP0100Login.tyLogin.tyStringPw.sValue		:= '';
			
			tyP0100Login.tyLogin.tyBtnLogin.bRtCompl	:= FALSE;
			tyP0100Login.tyLogin.tyBtnLogin.bValue		:= FALSE;
			
			usiLoginStep	:= 0;
			
		ELSIF usiLoginStep = 99 THEN
			eChgPage		:= UIP0002Menu;
			bLoginSuccess	:= TRUE;
			
			tyP0100Login.tyLogin.tyStringUsrNm.sValue	:= '';
			tyP0100Login.tyLogin.tyStringPw.sValue		:= '';
			
			tyP0100Login.tyLogin.tyBtnLogin.bRtCompl	:= FALSE;
			tyP0100Login.tyLogin.tyBtnLogin.bValue		:= FALSE;
			
			usiLoginStep	:= 0;
			
		END_IF
		
	END_IF
		
END_ACTION
