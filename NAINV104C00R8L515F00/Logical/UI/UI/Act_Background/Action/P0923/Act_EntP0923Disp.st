
ACTION Act_EntP0923Disp:
	
	//Access Address
	p_tyC0002FullMask ACCESS ADR(tyP0923Stopper.tyFullMaskHide);
	
	p_tyC0004Navi ACCESS ADR(tyP0923Stopper.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0923Stopper.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0923StopperCom ACCESS ADR(tyP0923Stopper.tyCom);
	
	p_tyP0923StopperDC ACCESS ADR(tyP0923Stopper.tyDC);
	
	p_tyP0923StopperFB ACCESS ADR(tyP0923Stopper.tyFB);
	
	//Display
	IF tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0923Stopper.tyDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0923Stopper.tyFB.tyLyr.uiRtStat));
	ELSE	
		fUIInRtStatHide(ADR(tyP0923Stopper.tyDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0923Stopper.tyFB.tyLyr.uiRtStat));
	END_IF
		
END_ACTION
