
ACTION Act_EntP0920Disp:
	
	//Access Address
	p_tyC0002FullMask ACCESS ADR(tyP0920MtrNPneuCtrl.tyFullMaskHide);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0920MtrNPneuCtrl.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0920MtrNPneuCtrl ACCESS ADR(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl);
	
	//AW Display
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.uiMaskRtStat.0		:= NOT(p_tyNtParamCurr.bAWPrep AND p_tyMcParamCurr.bAWDis);
	
	//Stopper Display
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.uiMaskRtStat.0	:= NOT(p_tyNtParamCurr.bProjStopperPrep AND p_tyMcParamCurr.bStopperDis);
	
	//Clamp No RS Display
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.uiMaskRtStat.0	:= NOT(p_tyNtParamCurr.bProjClampPrep AND (p_tyNtParamCurr.eProjClampOption=ClampNoRS) AND p_tyMcParamCurr.bClampDis);
	
	//Clamp With RS Display
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.uiMaskRtStat.0	:= NOT(p_tyNtParamCurr.bProjClampPrep AND (p_tyNtParamCurr.eProjClampOption=ThreeClampsWithRS) AND p_tyMcParamCurr.bClampDis);
	
	//Shutter Display
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.uiMaskRtStat.0		:= NOT((p_tyNtParamCurr.bProjInletShutPrep AND p_tyMcParamCurr.bInShutterDis) OR (p_tyNtParamCurr.bProjOutletShutPrep AND p_tyMcParamCurr.bOutShutterDis));
	
END_ACTION
