
ACTION Act_OptC0007Notif:
	
	//Display
	//User Level
	tyCommon.tyNotif.tyStringUsrNm.sValue	:= p_tyUsrMgmtCurrUsr.sUsrNm;
	tyCommon.tyNotif.tyTxtUsrLv.usiValueIdx	:= UDINT_TO_USINT(p_tyUsrMgmtCurrUsr.eUsrLvl);
	tyCommon.tyNotif.tyTxtLFMc.uiRtStat.0	:= NOT (p_tyNtParamCurr.bLFPrep AND p_tyMcParamCurr.bLFEn);
	
	IF p_tyNtParamCurr.bLFUsrSetPrep = TRUE THEN
		IF p_tyMcParamCurr.bLFLeaderMc = TRUE THEN
			tyCommon.tyNotif.tyTxtLFMc.usiValueIdx		:= 0;
		ELSE
			IF p_tyMcParamCurr.bSectionLeader = TRUE THEN
				tyCommon.tyNotif.tyTxtLFMc.usiValueIdx		:= 2;
			ELSE
				tyCommon.tyNotif.tyTxtLFMc.usiValueIdx		:= 1;
			END_IF
		END_IF
	END_IF
	
	//Info
	tyCommon.tyNotif.tyBitmapShowInfo.uiRtStat.0	:= p_bAlarmInfo = FALSE;
	tyCommon.tyNotif.tyHotspotShowInfo.uiRtStat.0	:= p_bAlarmInfo = FALSE;
	
	//Control
	IF tyCommon.tyNotif.tyLyr.uiRtStat.0 = FALSE THEN
		
		IF tyCommon.tyNotif.tyHotspotClose.bRtCompl = TRUE THEN
			tyCommon.tyNotif.tyHotspotClose.bRtCompl	:= FALSE;
			
			fUIInRtStatHide(ADR(tyCommon.tyNotif.tyLyr.uiRtStat));
			
		ELSIF tyCommon.tyNotif.tyHotspotShowInfo.bRtCompl = TRUE THEN
			tyCommon.tyNotif.tyHotspotShowInfo.bRtCompl	:= FALSE;
			
			fUIInRtStatOff(ADR(tyCommon.tyInfo.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyCommon.tyNotif.tyLyr.uiRtStat));
			
		END_IF
		
	END_IF
	
END_ACTION
