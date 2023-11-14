
ACTION Act_OptC0005RstErr:

	//Control
	IF tyCommon.tyMain.tyBtnReset.bRtCompl = TRUE THEN
		eRstErrAct	:= RstErrActRun;
		
		IF p_eRstErrStat = RstErrActRun AND p_eRstErrStatus =  Done THEN
			eRstErrAct	:= RstErrActIdle;
			
			IF p_tyNtParamCurr.bProjCoatingPrep THEN
				bLoadingScreen:= TRUE;
			END_IF
			
			tyCommon.tyMain.tyBtnReset.bRtCompl	:= FALSE;
		END_IF	

	END_IF
	
	//Mask
	IF p_bAlarmErr = TRUE OR p_bAlarmWarning = TRUE OR p_bAlarmInfo = TRUE OR p_tyDI.bSafetyRlySig = FALSE THEN
		fUIInRtStatHide(ADR(tyCommon.tyMain.tyBtnReset.uiMaskRtStat));
		bLoadingScreen:= FALSE;
	ELSE
		fUIInRtStatOff(ADR(tyCommon.tyMain.tyBtnReset.uiMaskRtStat));
	END_IF
	
END_ACTION
