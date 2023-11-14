
ACTION Act_OptC0005ChgPage:

	IF tyCommon.tyMain.tyHotspotNaviStart.bRtCompl = TRUE THEN
		tyCommon.tyMain.tyHotspotNaviStart.bRtCompl := FALSE;
		
		IF p_bAlarmErr = TRUE OR p_bAlarmWarning THEN
			eChgPage 	:=UIP0600Alm;
		END_IF
		
	END_IF
	
	//Display Alarm Button Control
	tyCommon.tyMain.tyHotspotNaviStart.uiRtStat.0	:=tyCommon.tyMain.tyBtnStart.uiMaskRtStat.0;
	
END_ACTION
