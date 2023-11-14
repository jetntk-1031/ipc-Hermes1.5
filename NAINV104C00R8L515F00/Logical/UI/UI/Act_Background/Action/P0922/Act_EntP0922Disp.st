

ACTION Act_EntP0922Disp:
	
	//Access Address
	p_tyC0003DualMask ACCESS ADR(tyP0922InletNOutletShutter.tyDualMaskHide);
	
	p_tyC0004Navi ACCESS ADR(tyP0922InletNOutletShutter.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0922InletNOutletShutter.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyP0922InletShutterCom ACCESS ADR(tyP0922InletNOutletShutter.tyInletShutterCom);
	p_tyP0922InletShutterDC ACCESS ADR(tyP0922InletNOutletShutter.tyInletShutterDC);
	p_tyP0922InletShutterFB ACCESS ADR(tyP0922InletNOutletShutter.tyInletShutterFB);
	p_tyP0922InletShutterDis ACCESS ADR(tyP0922InletNOutletShutter.tyInletShutterDis);
	
	p_tyP0922OutletShutterCom ACCESS ADR(tyP0922InletNOutletShutter.tyOutletShutterCom);
	p_tyP0922OutletShutterDC ACCESS ADR(tyP0922InletNOutletShutter.tyOutletShutterDC);
	p_tyP0922OutletShutterFB ACCESS ADR(tyP0922InletNOutletShutter.tyOutletShutterFB);
	p_tyP0922OutletShutterDis ACCESS ADR(tyP0922InletNOutletShutter.tyOutletShutterDis);
	
	//Display
	tyP0922InletNOutletShutter.tyInletShutterDis.tyLyr.uiRtStat.0	:= NOT(p_tyNtParamCurr.bProjInletShutPrep AND p_tyMcParamCurr.bInShutterDis);
	
	//Display
	IF tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat));
	ELSE	
		fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat));
	END_IF
	
	IF tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat));
	ELSE	
		fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat));
	END_IF
	
END_ACTION
