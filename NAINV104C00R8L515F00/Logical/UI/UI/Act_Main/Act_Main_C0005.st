(** 2018-12-21 **)
ACTION Act_Main_C0005:
	
//	tyCommon.tyMain.tyBtnMuteBuz.uiRtStat.0	:= p_tyNtParamCurr.tyDOSettings.diBuz = 0;
	
	IF p_tyNtParamCurr.tyDOSettings.diBuz = 0 THEN
		fUIInRtStatHide(ADR(tyCommon.tyMain.tyBtnMuteBuz.uiRtStat));
	ELSE
		fUIInRtStatOff(ADR(tyCommon.tyMain.tyBtnMuteBuz.uiRtStat));
	END_IF
	
//	fUIInRtStatHide(ADR(tyCommon.tyMain.tyHotspotNaviStart.uiRtStat));
	fUIInRtStatHide(ADR(tyCommon.tyMain.tyBtnAlarm.uiRtStat));
	
END_ACTION