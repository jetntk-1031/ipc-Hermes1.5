
ACTION Act_OptP0950Control: 

	// Error
	IF EDGEPOS(p_bAlarmErr = TRUE AND p_bSimuStatusStop = FALSE) THEN
		
		tyP0950Simu.tySimu.tyBtnStart.bRtCompl	:= FALSE;
		tyP0950Simu.tySimu.tyBtnStop.bRtCompl	:= FALSE;
		
		tyP0950Simu.tySimu.tyBtnStart.bValue	:= FALSE;
		tyP0950Simu.tySimu.tyBtnStop.bValue		:= FALSE;
		
		eSimuAct	:= SimulationsActError;
		
	ELSE
		
		IF p_eSimuStat = SimulationsActError AND p_eSimuStatus = Done THEN
			eSimuAct	:= SimulationsActIdle;
			
			bSimuMod	:= FALSE;
			
		END_IF
		
	END_IF

	//Control
	IF tyP0950Simu.tySimu.tyBtnStart.bRtCompl = TRUE THEN
		tyP0950Simu.tySimu.tyBtnStop.bRtCompl	:= FALSE;
		
		eSimuAct		:= SimulationsActStart;
		
		bSimuMod		:= TRUE;
		
		IF p_eSimuStat = SimulationsActStart AND p_eSimuStatus = Done THEN
			eSimuAct	:= SimulationsActIdle;
			
			tyP0950Simu.tySimu.tyBtnStart.bRtCompl	:= FALSE;
			
		END_IF
			
	ELSIF tyP0950Simu.tySimu.tyBtnStop.bRtCompl = TRUE THEN
		tyP0950Simu.tySimu.tyBtnStart.bRtCompl	:= FALSE;
		
		eSimuAct			:= SimulationsActStop;
			
		IF p_eSimuStat = SimulationsActStop AND p_eSimuStatus = Done THEN
			eSimuAct		:= SimulationsActIdle;
			bSimuMod		:= FALSE;
			
			tyP0950Simu.tySimu.tyBtnStop.bRtCompl	:= FALSE;
		END_IF
		
	END_IF
	
	// Mask
	IF p_bAlarmErr = TRUE THEN
		fUIInRtStatOff(ADR(tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat));
		
	ELSIF p_bSimuStatusCycleStop = TRUE THEN
		fUIInRtStatHide(ADR(tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat));
		
		fbStopBlinkTm(IN := TRUE);
		IF fbStopBlinkTm.Q = TRUE THEN
			fbStopBlinkTm(IN := FALSE);
			
			tyP0950Simu.tySimu.tyBtnStart.bValue		:= NOT tyP0950Simu.tySimu.tyBtnStart.bValue;
		END_IF
		
	ELSIF p_bSimuStatusRun = TRUE THEN
		fUIInRtStatOff(ADR(tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat));
		
	ELSE
		fUIInRtStatHide(ADR(tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat));
		
	END_IF
	
END_ACTION
