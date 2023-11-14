(** 2018-12-21 **)
ACTION Act_Main_P0920:
	
	//Display
	//Auto-Width
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.uiRtStat.0				:= NOT p_tyNtParamCurr.bAWPrep;
	
	//Stopper
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.uiRtStat.0			:= NOT p_tyNtParamCurr.bProjStopperPrep;
	
	//Shutter
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.uiRtStat.0			:= NOT (p_tyNtParamCurr.bProjInletShutPrep OR p_tyNtParamCurr.bProjOutletShutPrep);
	
	//Clamp No RS
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.uiRtStat.0		:= NOT (p_tyNtParamCurr.bProjClampPrep AND (p_tyNtParamCurr.eProjClampOption=ClampNoRS));
	
	//Clamp With RS
	tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.uiRtStat.0		:= NOT (p_tyNtParamCurr.bProjClampPrep AND (p_tyNtParamCurr.eProjClampOption=ThreeClampsWithRS));

	IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
		IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
			tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapConv.usiValueIdx 	:= 200;
			tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapShutter.usiValueIdx 	:= 200;
			tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapAW.usiValueIdx 		:= 200;
		ELSE
			tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapConv.usiValueIdx 	:= 100;
			tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapShutter.usiValueIdx 	:= 100;
			tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapAW.usiValueIdx 		:= 100;
		END_IF
	ELSE
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapConv.usiValueIdx 	:= 0;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapShutter.usiValueIdx 	:= 0;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapAW.usiValueIdx 		:= 0;
	END_IF
END_ACTION
