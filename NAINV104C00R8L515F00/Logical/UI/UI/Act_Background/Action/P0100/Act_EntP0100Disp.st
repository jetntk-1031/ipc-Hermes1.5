
ACTION Act_EntP0100Disp:
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0100Login.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyP0100Login ACCESS ADR(tyP0100Login.tyLogin);
	p_tyP0100Logout ACCESS ADR(tyP0100Login.tyLogout);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	//Clear Input
	tyP0100Login.tyLogin.tyStringUsrNm.sValue	:= '';
	tyP0100Login.tyLogin.tyStringPw.sValue		:= '';
	
	//Login Logout Layer
	IF  bLoginSuccess = TRUE THEN
		fUIInRtStatOff(ADR(tyP0100Login.tyLogout.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0100Login.tyLogin.tyLyr.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0100Login.tyLogout.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0100Login.tyLogin.tyLyr.uiRtStat));
	END_IF
	
	//Bypass Hotspot
	IF p_tyUsrMgmtAdminList[1].sUsrNm = '' THEN
		fUIInRtStatOff(ADR(tyP0100Login.tyLogin.tyHotspotBypassLogin.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0100Login.tyLogin.tyHotspotBypassLogin.uiRtStat));
	END_IF
	
	//Reset User Level Hotspot
	tyP0100Login.tyLogin.tyBtnLogin.usiBitmapIdx	:= 0;
	
END_ACTION
