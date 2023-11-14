
ACTION Act_OptC0009Info:
	
	//Display
	IF EDGEPOS(p_bAlarmInfo) THEN
		fUIInRtStatOff(ADR(tyCommon.tyInfo.tyLyr.uiRtStat));
		
	ELSIF EDGENEG(p_bAlarmInfo) THEN
		fUIInRtStatHide(ADR(tyCommon.tyInfo.tyLyr.uiRtStat));
		tyCommon.tyInfo.tyStringInfo.sValue		:= '';
		tyCommon.tyInfo.tyHotspotClose.bRtCompl	:= FALSE;
		
	ELSIF tyCommon.tyInfo.tyHotspotClose.bRtCompl = TRUE THEN
		tyCommon.tyInfo.tyHotspotClose.bRtCompl	:= FALSE;
		fUIInRtStatHide(ADR(tyCommon.tyInfo.tyLyr.uiRtStat));
		
	ELSIF p_bAlarmInfo THEN
		tyCommon.tyInfo.tyStringInfo.sValue	:= p_sAlarmInfoMsg;
		
	END_IF
	
END_ACTION
