
ACTION Act_OptP0600Alm:
	
	IF tyP0600Alm.tyAlm.tyBtnHistory.bRtCompl = TRUE THEN
		tyP0600Alm.tyAlm.tyBtnHistory.bRtCompl		:= FALSE;
		tyP0600Alm.tyAlm.tyBtnHistory.bValue		:= TRUE;
		tyP0600Alm.tyAlm.tyBtnCurr.bValue			:= FALSE;
	ELSIF tyP0600Alm.tyAlm.tyBtnCurr.bRtCompl = TRUE THEN
		tyP0600Alm.tyAlm.tyBtnCurr.bRtCompl			:= FALSE;
		tyP0600Alm.tyAlm.tyBtnCurr.bValue			:= TRUE;
		tyP0600Alm.tyAlm.tyBtnHistory.bValue		:= FALSE;
	END_IF
	
	IF NOT p_bAlarmErr THEN
		memset(ADR(tyUIAlmData.bAlm) , 0 , SIZEOF(tyUIAlmData.bAlm));
	END_IF 
	
	IF NOT p_bAlarmWarning THEN
		memset(ADR(tyUIAlmData.bWarning) , 0 , SIZEOF(tyUIAlmData.bWarning));
	ELSE
		IF (p_bUSHermesConnected) OR p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
			tyUIAlmData.bWarning[3114] := FALSE;
		END_IF
		IF (p_bDSHermesConnected) OR p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
			tyUIAlmData.bWarning[3363] := FALSE;
		END_IF	
	END_IF

	IF tyP0600Alm.tyAlm.tyBtnCurr.bValue = TRUE THEN
		
		fUIInRtStatOff(ADR(tyP0600Alm.tyAlm.tyAlarm.tyUIAlmCur.uiRtStat));
		fUIInRtStatHide(ADR(tyP0600Alm.tyAlm.tyAlarm.tyUIAlmHis.uiRtStat));	
		tyP0600Alm.tyAlm.tyBtnHistoryUp.uiMaskRtStat.0 		:= FALSE;
		tyP0600Alm.tyAlm.tyBtnHistoryDown.uiMaskRtStat.0 	:= FALSE;
		
		FOR i := 1 TO c_uiP0600TableSize DO
			IF p_bStartupUISettingsLoadDone THEN
				IF p_tyAlarmCurrList[i].eSeverity = AlmSeverityError THEN
					tyUIAlmData.bAlm[p_tyAlarmCurrList[i].udiErrorCode] := p_tyAlarmCurrList[i].bAlm;
				ELSIF p_tyAlarmCurrList[i].eSeverity = AlmSeverityWarning THEN
					tyUIAlmData.bWarning[p_tyAlarmCurrList[i].udiErrorCode] := p_tyAlarmCurrList[i].bWarning;
				END_IF
			END_IF
		END_FOR
		
		
	ELSIF tyP0600Alm.tyAlm.tyBtnHistory.bValue = TRUE THEN

		fUIInRtStatHide(ADR(tyP0600Alm.tyAlm.tyAlarm.tyUIAlmCur.uiRtStat));
		fUIInRtStatOff(ADR(tyP0600Alm.tyAlm.tyAlarm.tyUIAlmHis.uiRtStat));	
		tyP0600Alm.tyAlm.tyBtnHistoryUp.uiMaskRtStat.0 		:= TRUE;
		tyP0600Alm.tyAlm.tyBtnHistoryDown.uiMaskRtStat.0 	:= TRUE;
		
	END_IF
	

END_ACTION
