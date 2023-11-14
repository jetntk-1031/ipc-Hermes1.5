
ACTION Act_OptP0100BypassLogin:
	
	IF tyP0100Login.tyLogin.tyHotspotBypassLogin.bRtCompl = TRUE THEN
		
		IF (tyP0100Login.tyLogin.tyStringUsrNm.sValue = p_tyNtParamCurr.sUIDefaultLoginNm) AND (tyP0100Login.tyLogin.tyStringPw.sValue = p_tyNtParamCurr.sUIDefaultLoginPw) THEN
			eUsrMgmtAct	:= UsrMgmtActBypassLogin;
		
			IF p_eUsrMgmtStat = UsrMgmtActBypassLogin AND p_eUsrMgmtStatus = Done THEN
				eUsrMgmtAct	:= UsrMgmtActIdle;
				
				bLoginSuccess	:= TRUE;
				
				//Update
				tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMinIdx	:= 0;
				tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMaxIdx	:= 3;
				
				tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMinIdx	:= 0;
				tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMaxIdx	:= 2;
				
				tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx		:= 0;
				tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx		:= 2;
				
				eChgPage	:= UIP0002Menu;
				
				tyP0100Login.tyLogin.tyHotspotBypassLogin.bRtCompl	:= FALSE;
				
			END_IF
		
		ELSE	
			p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxPwMismatch);
			
			IF tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl = TRUE THEN
				tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl	:= FALSE;
				tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxHide);
			
				tyP0100Login.tyLogin.tyStringPw.sValue		:= '';
				
				tyP0100Login.tyLogin.tyHotspotBypassLogin.bRtCompl	:= FALSE;
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
