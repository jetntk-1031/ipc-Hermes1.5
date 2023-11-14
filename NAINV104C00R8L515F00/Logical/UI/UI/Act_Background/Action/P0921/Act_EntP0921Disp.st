
ACTION Act_EntP0921Disp:
	
	p_tyC0002FullMask ACCESS ADR(tyP0921ClampNoRS.tyFullMaskHide);
	
	p_tyC0004Navi ACCESS ADR(tyP0921ClampNoRS.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0921ClampNoRS.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0921ClampNoRSCom ACCESS ADR(tyP0921ClampNoRS.tyCom);
	
	p_tyP0921ClampNoRSDC ACCESS ADR(tyP0921ClampNoRS.tyDC);
	
	p_tyP0921ClampNoRSFB ACCESS ADR(tyP0921ClampNoRS.tyFB);
	
	//Display
	IF tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat));
	ELSE	
		fUIInRtStatHide(ADR(tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat));
	END_IF
		
END_ACTION