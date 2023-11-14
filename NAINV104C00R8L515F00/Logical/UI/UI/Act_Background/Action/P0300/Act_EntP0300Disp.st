
ACTION Act_EntP0300Disp: 
	
	//Access Addres
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0300McInfo.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyP0300McInfo ACCESS ADR(tyP0300McInfo.tyMcInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	//Display
	tyP0300McInfo.tyMcInfo.tyStringMcNm.sValue	:= p_tyMcParamCurr.sMcNm;
	
	fUIInRtStatHide(ADR(tyP0300McInfo.tyMcInfo.tyBtnPlaySong.uiRtStat));
	fUIInRtStatHide(ADR(tyP0300McInfo.tyMcInfo.tyDrpDnSong.uiRtStat));
	
END_ACTION
