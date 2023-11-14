
ACTION Act_EntP0940Disp:
	
	//Access Address
	p_tyC0002FullMask ACCESS ADR(tyP0940CommCtrl.tyFullMaskHide);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0940CommCtrl.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0940CommCtrlUSSMEMA ACCESS ADR(tyP0940CommCtrl.tyUSSMEMA);
	
	p_tyP0940CommCtrlDSSMEMA ACCESS ADR(tyP0940CommCtrl.tyDSSMEMA);
	
	p_tyP0940CommCtrlUSSMEMA2 ACCESS ADR(tyP0940CommCtrl.tyUSSMEMA2);
	
	//Display - Upstream
	fUIInRtStatOff(ADR(tyP0940CommCtrl.tyUSSMEMA.tyLyr.uiRtStat));
	
	IF p_tyMcParamCurr.tyUSCommSMEMA.eSelection = SMEMASelIPC9851Ext THEN
		fUIInRtStatOff(ADR(tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.uiRtStat));
		
		IF p_tyMcParamCurr.tyUSCommSMEMA.bStatSigSetGd = TRUE THEN
			tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.usiTxtIdx	:= 1;
		ELSE	
			tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.usiTxtIdx	:= 2;
		END_IF	
	ELSE
		fUIInRtStatHide(ADR(tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.uiRtStat));
	END_IF	
	
	//Display - Upstream 2
	fUIInRtStatOff(ADR(tyP0940CommCtrl.tyUSSMEMA2.tyLyr.uiRtStat));
	
	IF p_tyMcParamCurr.tyUSCommSMEMA2.eSelection = SMEMASelIPC9851Ext THEN
		fUIInRtStatOff(ADR(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.uiRtStat));
		
		IF p_tyMcParamCurr.tyUSCommSMEMA2.bStatSigSetGd = TRUE THEN
			tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.usiTxtIdx	:= 1;
		ELSE	
			tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.usiTxtIdx	:= 2;
		END_IF	
	ELSE
		fUIInRtStatHide(ADR(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.uiRtStat));
	END_IF	
	
	//Display - Downstream
	fUIInRtStatOff(ADR(tyP0940CommCtrl.tyDSSMEMA.tyLyr.uiRtStat));
	
	IF p_tyMcParamCurr.tyDSCommSMEMA.eSelection = SMEMASelIPC9851Ext THEN
		fUIInRtStatOff(ADR(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.uiRtStat));
		
		IF p_tyMcParamCurr.tyDSCommSMEMA.bStatSigSetGd = TRUE THEN
			tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.usiTxtIdx	:= 1;
		ELSE	
			tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.usiTxtIdx	:= 2;
		END_IF	
	ELSE	
		fUIInRtStatHide(ADR(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.uiRtStat));
	END_IF	
		
END_ACTION
