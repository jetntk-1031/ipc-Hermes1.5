
ACTION Act_EntP1080Disp:
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1080UsrMgmt.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1080UsrMgmt ACCESS ADR(tyP1080UsrMgmt.tyUsrMgmt);

	p_tyP1080UsrMgmtAct ACCESS ADR(tyP1080UsrMgmt.tyCreate);
	
	fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat));
	fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat));
	
	//Display
	IF tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx > tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMaxIdx THEN
		tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx			:= 0;
		tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.bRtCompl			:= TRUE;
	END_IF
	
END_ACTION
