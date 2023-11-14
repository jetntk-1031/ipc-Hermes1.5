
ACTION Act_EntP0201Disp:
	
	// Access Address
	p_tyC0004Navi ACCESS ADR(tyP0201OpsConv.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0201OpsConv.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyC0012RcpPopUp ACCESS ADR(tyP0201OpsConv.tyRcpPopUp);
	
	p_tyP0201OpsConv ACCESS ADR(tyP0201OpsConv.tyOps);
	
	p_tyP0201OpsConvIOMonitor ACCESS ADR(tyP0201OpsConv.tyIOMonitor);
	
	p_tyP0201OpsConvIOMonitorMacSafe ACCESS ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety);

	p_tyP0201OpsConvIOMonitorXStd ACCESS ADR(tyP0201OpsConv.tyIOMonitorXStd);
	
	p_tyP0201OpsConvChgParam ACCESS ADR(tyP0201OpsConv.tyChgParam);
	
	p_tyP0201OpsConvBypsInitConv ACCESS ADR(tyP0201OpsConv.tyBypsInitConv);
	
	//Display - IO Monitor
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat));
	
	
	tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.uiRtStat.0		:= NOT (p_tyNtParamCurr.tyDISettings.diUBAStat > 0);
	tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.uiRtStat.0		:= NOT (p_tyNtParamCurr.tyDOSettings.diDBAStat > 0);
	
	tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.uiRtStat.0	:= NOT (p_tyNtParamCurr.tyDISettings.diUBAStat > 0);
	tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.uiRtStat.0	:= NOT (p_tyNtParamCurr.tyDOSettings.diDBAStat > 0);
	
	//UBA Stat
	IF p_tyMcParamCurr.tyUSCommSMEMA.bStatSigSetGd = TRUE THEN
		tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.usiTxtIdx		:= 1;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.usiTxtIdx	:= 1;
	ELSE	
		tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.usiTxtIdx		:= 2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.usiTxtIdx	:= 2;
	END_IF
	
	//DBA Stat
	IF p_tyMcParamCurr.tyDSCommSMEMA.bStatSigSetGd = TRUE THEN
		tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.usiTxtIdx		:= 1;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.usiTxtIdx	:= 1;
	ELSE	
		tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.usiTxtIdx		:= 2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.usiTxtIdx	:= 2;
	END_IF
		
	//Backup Param
	tyP0201OpsConv.tyChgParamBkUp	:= tyP0201OpsConv.tyChgParam;
	
END_ACTION
