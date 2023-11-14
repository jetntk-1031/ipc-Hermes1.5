
ACTION Act_EntP0002Disp:
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	IF NOT bPromptSessionExp THEN
		p_tyC0008MsgBox ACCESS ADR(tyP0002Menu.tyMsgBoxHide);
	END_IF
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyP0002Menu ACCESS ADR(tyP0002Menu.tyMenu);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	//Display
	//Leader Follower
	IF p_tyNtParamCurr.bLFPrep = TRUE AND p_tyMcParamCurr.bLFEn = TRUE AND ((NOT p_tyNtParamCurr.bLFUsrSetPrep AND p_tyNtParamCurr.bLeaderMc) OR (p_tyNtParamCurr.bLFUsrSetPrep AND p_tyMcParamCurr.bLFLeaderMc)) AND p_tyMcParamCurr.eUSComm <> McSetCommModHermes THEN
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tyBtnLFSet.uiRtStat));
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tyBtnLFCtrl.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tyBtnLFSet.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tyBtnLFCtrl.uiRtStat));
	END_IF
		
	//Login/Logout 
	IF bLoginSuccess = FALSE THEN
		tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx	:= 0;
		tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx		:= 0;	
	ELSE
		tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx	:= 1;
		tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx		:= 1;
	END_IF
	
	//Mask
	Act_OptP0002Mask;
	
END_ACTION
