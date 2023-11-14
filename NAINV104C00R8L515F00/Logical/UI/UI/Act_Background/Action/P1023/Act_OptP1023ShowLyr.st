
ACTION Act_OptP1023ShowLyr:
	
	IF tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat.0 = FALSE THEN
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat));
		
		IF tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat));
			
			tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.uiRtStat.0	:= NOT(tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueIdx = 2);
			
		ELSIF tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue = TRUE THEN
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat));
			
			//Mask
			tyP1023McSetHComm.tyUSHermes.tyBitmapMask.uiRtStat.0	:= NOT(p_tyNtParamCurr.bHermesRmtPrep = TRUE AND p_tyMcParamCurr.bHermesRmtEn = TRUE);
		END_IF
		
	ELSIF tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat.0 = FALSE THEN
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat));
		
		IF tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat));
			
			tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.uiRtStat.0	:= NOT(tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx = 2);
			
		ELSIF tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue = TRUE THEN
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat));
			
			//Mask
			tyP1023McSetHComm.tyUSHermes2.tyBitmapMask.uiRtStat.0	:= NOT(p_tyNtParamCurr.bHermesRmtPrep = TRUE AND p_tyMcParamCurr.bHermesRmtEn = TRUE);
		END_IF
		
	ELSIF tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat.0 = FALSE THEN
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat));
		
		IF tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue = TRUE THEN

			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
			
			tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.uiRtStat.0	:= NOT(tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueIdx = 2);
			
		ELSIF tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue = TRUE THEN

			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
			
			//Mask
			tyP1023McSetHComm.tyDSHermes.tyBitmapMask.uiRtStat.0	:= NOT(p_tyNtParamCurr.bHermesRmtPrep = TRUE AND p_tyMcParamCurr.bHermesRmtEn = TRUE);
		END_IF
	ELSIF tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat.0 = FALSE THEN
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
		
		IF tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat));
			
			tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.uiRtStat.0	:= NOT(tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx = 2);
			
		ELSIF tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue = TRUE THEN
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat));
			
			//Mask
			tyP1023McSetHComm.tyDSHermes2.tyBitmapMask.uiRtStat.0	:= NOT(p_tyNtParamCurr.bHermesRmtPrep = TRUE AND p_tyMcParamCurr.bHermesRmtEn = TRUE);
		END_IF		
	ELSE
		
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat));
	END_IF
	
END_ACTION
