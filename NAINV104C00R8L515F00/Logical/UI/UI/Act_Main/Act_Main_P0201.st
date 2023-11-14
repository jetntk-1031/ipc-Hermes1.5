(** 2018-12-21 **)
ACTION Act_Main_P0201:
	//LF width 2 
	IF p_tyNtParamCurr.bLFProdWidth2Prep THEN
		fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyNumProdWidth.uiRtStat));	
	ELSE
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyNumProdWidth2.uiRtStat));	
		fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyNumProdWidth.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
		IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
			tyP0201OpsConv.tyOps.tyBitmapMc.usiValueIdx := 200;
		ELSE
			tyP0201OpsConv.tyOps.tyBitmapMc.usiValueIdx := 100;
		END_IF
	ELSE
		tyP0201OpsConv.tyOps.tyBitmapMc.usiValueIdx := 0;
	END_IF
	
	fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
	fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
	
	//IO Monitor Standard
	//Digital Input Used
	IF p_tyNtParamCurr.tyDISettings.diSafetyRlySig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlySig.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diEStopSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnEStop.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diCoverSWSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnCoverSWSig.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBA = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnUBA.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diDSB = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnDSB.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBAStat = FALSE THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diConvLftSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnConvLftSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diConvRgtSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnConvRgtSen.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDISettings.diPressureSW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnPressureSW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diThermalPrtSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnThermalPrtSig.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diCoatingSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnCoatingSen.uiRtStat));
	END_IF
		
	IF p_tyNtParamCurr.tyDISettings.diUSWidthChkSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnUSWidthChkSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diDSWidthChkSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnDSWidthChkSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInvertHomeSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInvertHomeSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInvertRemoteSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemoteSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInShutterOpenRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterOpenRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInShutterCloseRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterCloseRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diOutShutterOpenRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterOpenRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diOutShutterCloseRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterCloseRS.uiRtStat));
	END_IF
	
	//Digital Output Selected
	IF p_tyNtParamCurr.tyDOSettings.diSafetyRlyRst = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlyRst.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnTLGreen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLAmber = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnTLAmber.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLRed = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnTLRed.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLWhite = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnTLWhite.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLBlue = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnTLBlue.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diBuz = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnBuzzer.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diCoatingStprRet = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnCoatingRetCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diUSB = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnUSB.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diDBA = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnDBA.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diDBAStat = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diConvMtrCW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diConvMtrCCW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCCW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diStprUnblkCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnStprUnblkCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diStprBlkCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnStprBlkCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertBrake = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInvertBrake.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertHome = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInvertHome.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertRemote = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemote.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diMtrPwrRly = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnMtrPwrRly.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClampControl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnClampCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diUnclampControl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnUnclampCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInShutterOpenCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInShutterOpenCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diInShutterCloseCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnInShutterCloseCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diOutShutterOpenCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterOpenCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diOutShutterCloseCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterCloseCtrl.uiRtStat));
	END_IF
	
	//IO Monitor Non Standard
	//Digital Input Used
	IF p_tyNtParamCurr.tyDISettings.diSafetyRlySig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlySig.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diEStopSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnEStop.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diCoverSWSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoverSWSig.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBA = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUBA2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA2.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diDSB = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSB.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBAStat = FALSE THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBAStat2 = FALSE THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat2.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diConvLftSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvLftSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diConvRgtSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvRgtSen.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDISettings.diPressureSW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnPressureSW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diThermalPrtSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnThermalPrtSig.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diCoatingSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingSen.uiRtStat));
	END_IF
		
	IF p_tyNtParamCurr.tyDISettings.diUSWidthChkSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSWidthChkSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diDSWidthChkSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSWidthChkSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInvertHomeSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHomeSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInvertRemoteSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemoteSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInShutterOpenRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterOpenRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInShutterCloseRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterCloseRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diOutShutterOpenRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterOpenRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diOutShutterCloseRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterCloseRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClamp2Sen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Sen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClamp3Sen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Sen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClampRS1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS1.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnClampRS1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS1.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClampRS2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS2.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnClampRS2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS2.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClampRS3 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS3.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnClampRS3 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS3.uiRtStat));
	END_IF
	
	
	//Digital Output Selected
	IF p_tyNtParamCurr.tyDOSettings.diSafetyRlyRst = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlyRst.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLGreen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLAmber = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLAmber.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLRed = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLRed.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLWhite = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLWhite.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLBlue = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLBlue.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diBuz = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnBuzzer.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diCoatingStprRet = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingRetCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diUSB = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diUSB2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB2.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diDBA = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBA.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diDBAStat = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diConvMtrCW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diConvMtrCCW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCCW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertBrake = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertBrake.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertHome = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHome.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertRemote = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemote.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diMtrPwrRly = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnMtrPwrRly.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInShutterOpenCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterOpenCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diInShutterCloseCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterCloseCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diOutShutterOpenCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterOpenCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diOutShutterCloseCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterCloseCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClamp1Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp1Ctrl.uiRtStat));
	END_IF
		
	IF p_tyNtParamCurr.tyDOSettings.diUnClamp1Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp1Ctrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClamp2Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Ctrl.uiRtStat));
	END_IF
			
	IF p_tyNtParamCurr.tyDOSettings.diUnClamp2Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp2Ctrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClamp3Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Ctrl.uiRtStat));
	END_IF
			
	IF p_tyNtParamCurr.tyDOSettings.diUnClamp3Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp3Ctrl.uiRtStat));
	END_IF
	
	
	//XStd Machine Safety
	//Digital Input Used
	IF p_tyNtParamCurr.tyDISettings.diSafetyRlySig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlySig.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diEStopSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnEStop.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diCoverSWSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBA = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBA.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diDSB = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSB.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diUBAStat = FALSE THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBAStat.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDISettings.diConvLftSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvLftSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diConvRgtSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvRgtSen.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDISettings.diPressureSW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPressureSW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diThermalPrtSig = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnThermalPrtSig.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diCoatingSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingSen.uiRtStat));
	END_IF
		
	IF p_tyNtParamCurr.tyDISettings.diUSWidthChkSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSWidthChkSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diDSWidthChkSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSWidthChkSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInvertHomeSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHomeSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInvertRemoteSen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemoteSen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInShutterOpenRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterOpenRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diInShutterCloseRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterCloseRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diOutShutterOpenRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterOpenRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diOutShutterCloseRS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterCloseRS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClamp2Sen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Sen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClamp3Sen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Sen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClampRS1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS1.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnClampRS1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS1.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClampRS2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS2.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnClampRS2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS2.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diClampRS3 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS3.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnClampRS3 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS3.uiRtStat));
	END_IF
	// ADD
	IF p_tyNtParamCurr.tyDISettings.diCoverSWSig2 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig2.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diSafetySigFromUS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromUS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diSafetySigFromDS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromDS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnlockCoverSigFromUS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromUS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diUnlockCoverSigFromDS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromDS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diCoverUnlockPB1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverUnlockPB1.uiRtStat));
	END_IF
	

	//Digital Output Selected
	IF p_tyNtParamCurr.tyDOSettings.diSafetyRlyRst = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlyRst.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLGreen.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLAmber = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLAmber.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLRed = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLRed.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLWhite = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLWhite.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diTLBlue = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLBlue.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diBuz = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBuzzer.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diCoatingStprRet = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingRetCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diUSB = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSB.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diDBA = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBA.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diDBAStat = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBAStat.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diConvMtrCW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diConvMtrCCW = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCCW.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertBrake = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertBrake.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertHome = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHome.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInvertRemote = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemote.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diMtrPwrRly = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMtrPwrRly.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diInShutterOpenCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterOpenCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diInShutterCloseCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterCloseCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diOutShutterOpenCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterOpenCtrl.uiRtStat));
	END_IF	
	
	IF p_tyNtParamCurr.tyDOSettings.diOutShutterCloseCtrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterCloseCtrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClamp1Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp1Ctrl.uiRtStat));
	END_IF
		
	IF p_tyNtParamCurr.tyDOSettings.diUnClamp1Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp1Ctrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClamp2Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Ctrl.uiRtStat));
	END_IF
			
	IF p_tyNtParamCurr.tyDOSettings.diUnClamp2Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp2Ctrl.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diClamp3Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Ctrl.uiRtStat));
	END_IF
			
	IF p_tyNtParamCurr.tyDOSettings.diUnClamp3Ctrl = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp3Ctrl.uiRtStat));
	END_IF
	
	// ADD
	IF p_tyNtParamCurr.tyDOSettings.diTopCvrUnlckToDS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToDS.uiRtStat)); 
	END_IF

	IF p_tyNtParamCurr.tyDOSettings.diTopCvrUnlckToUS = 0 THEN    //diTopCvrUnlckToUS
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToUS.uiRtStat)); // follow DS (single output)
	END_IF

	IF p_tyNtParamCurr.tyDOSettings.diMachineSafetySigToDS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtniMachineSafetySigToDS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diMachineSafetySigToUS = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMachineSafetySigToUS.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diCoverPBLED1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPBLED1.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDOSettings.diBypassTopCover1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBypassTopCover1.uiRtStat));
	END_IF

	IF p_tyNtParamCurr.tyDOSettings.diSafetyTopCoverSWCoil1 = 0 THEN
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyTopCoverSWCoil1.uiRtStat));
	END_IF

	
	
	
	
	
	
	
	
	
	//Change Parameter
	tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueMinIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMin);
	tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueMaxIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMax);
	
	tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValueMin		:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMin;
	tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValueMax		:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax;
	
	tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueMinIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMin);
	tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueMaxIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMax);
	
	//Display
	
	tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.uiRtStat.0 := NOT p_tyNtParamCurr.bHermesPrep;

	tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat.0 := NOT p_tyNtParamCurr.bHermesPrep;
	tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat.0 := NOT p_tyNtParamCurr.bHermesPrep;
	tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.uiRtStat.0 := NOT(p_tyNtParamCurr.bUnlockCoverPrep);
END_ACTION
