
ACTION Act_OptP0100Logout:
	
	IF tyP0100Login.tyLogout.tyBtnLogout.bRtCompl THEN
		eUsrMgmtAct	:= UsrMgmtActLogout;
		
		IF p_eUsrMgmtStat = UsrMgmtActLogout AND p_eUsrMgmtStatus = Done THEN
			eUsrMgmtAct	:= UsrMgmtActIdle;
			
			bLoginSuccess	:= FALSE;
			
			//Update
			tyP0100Login.tyLogin.tyStringUsrNm.sValue		:= '';
			tyP0100Login.tyLogin.tyStringPw.sValue			:= '';
			
			tyP0100Login.tyLogout.tyBtnLogout.bRtCompl		:= FALSE;
			tyP0100Login.tyLogout.tyBtnLogout.bValue		:= FALSE;
			
			fUIInRtStatHide(ADR(tyP0100Login.tyLogout.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0100Login.tyLogin.tyLyr.uiRtStat));
			
		END_IF
		
	END_IF
	
END_ACTION
