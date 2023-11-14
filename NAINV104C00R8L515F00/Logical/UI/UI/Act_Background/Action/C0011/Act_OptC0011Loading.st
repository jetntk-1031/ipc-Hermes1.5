
ACTION Act_OptC0011Loading:
	fbLoadingWarmUpTm.PT := p_tyNtParamCurr.tComLoadRstTm ;
	udiElapseTm := (TIME_TO_UDINT (fbLoadingWarmUpTm.PT )- TIME_TO_UDINT (fbLoadingWarmUpTm.ET))/1000;
	sElapseTm := UDINT_TO_STRING(udiElapseTm);
	
	//Loading When Reset pressed
	IF bLoadingScreen=TRUE THEN
		
		fUIInRtStatOff(ADR(tyCommon.tyLoading.tyLyr.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyCommon.tyLoading.tyLyr.uiRtStat));
	END_IF
	
	IF fbLoadingWarmUpTm.Q = FALSE THEN
		tyCommon.tyLoading.tyStringMsg.sValue := CONCAT('Please wait for ',sElapseTm);
		tyCommon.tyLoading.tyStringMsg.sValue := CONCAT(tyCommon.tyLoading.tyStringMsg.sValue,' seconds...');
	END_IF
	
	fbLoadingWarmUpTm (IN := TRUE);
	fbLoadingLogoTm	(IN := TRUE);

	
	// ADD
	IF fbLoadingWarmUpTm.Q = FALSE  AND tyCommon.tyLoading.tyLyr.uiRtStat = 0 THEN
		IF fbLoadingLogoTm.Q = TRUE AND tyCommon.tyLoading.tyUILoad.usiValueIdx <= 2 THEN
			tyCommon.tyLoading.tyUILoad.usiValueIdx := (tyCommon.tyLoading.tyUILoad.usiValueIdx) +1 ;
			fbLoadingLogoTm (IN := FALSE);
			fbLoadingLogoTm (IN := TRUE);
		ELSIF fbLoadingLogoTm.Q = TRUE AND tyCommon.tyLoading.tyUILoad.usiValueIdx > 2 THEN
			tyCommon.tyLoading.tyUILoad.usiValueIdx := 0;
			fbLoadingLogoTm (IN := FALSE);
			fbLoadingLogoTm (IN := TRUE);
		END_IF
	ELSE	// fbLoadingWarmUpTm.Q = TRUE									 
		//fUIInRtStatHide(ADR(tyCommon.tyLoading.tyLyr.uiRtStat));
		bLoadingScreen:= FALSE;
		fbLoadingWarmUpTm (IN := FALSE);
		fbLoadingLogoTm (IN := FALSE);
	END_IF
	

	
END_ACTION
