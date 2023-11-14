(** 2021-08-01 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupDSHermesAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
		
		IF EDGEPOS(p_eLinkMcParamDSCommMod = McSetCommModHermes) THEN
			bHermesRun	:= TRUE;
			bHermesStop	:= FALSE;
		END_IF
		
		IF EDGENEG(p_eLinkMcParamDSCommMod = McSetCommModHermes) THEN
			bHermesRun	:= FALSE;
			bHermesStop	:= TRUE;
		END_IF
		
		IF bHermesRun = TRUE THEN
			p_eAct	:= HermesActBGStartRun;
			
			IF (eStat = HermesActBGStartRun) AND (eStatus = Done) THEN
				p_eAct		:= HermesActIdle;
				bHermesRun	:= FALSE;
			END_IF
		END_IF
		
		IF bHermesStop = TRUE THEN
			p_eAct	:= HermesActBGStopRun;
			
			IF (eStat = HermesActBGStopRun) AND (eStatus = Done) THEN
				p_eAct		:= HermesActIdle;
				bHermesStop	:= FALSE;
			END_IF
		END_IF
		
	END_IF
	
	//Delete Old Hermese Log Files for 24 hours After Machine is Continuous Running 7 Days.
	fbDlyTmr(IN := TRUE);
	IF fbDlyTmr.Q THEN
		fbDeleteLogTmr (IN := TRUE);
		IF fbDeleteLogTmr.Q AND eStatus <> Busy THEN
			p_eAct := HermesActDeleteOldLog;
			IF eStat = HermesActDeleteOldLog AND eStatus = Done THEN
				p_eAct := HermesActIdle;
				fbDlyTmr (IN := FALSE);
				fbDeleteLogTmr (IN := FALSE);
			END_IF
		END_IF
	END_IF
	
END_ACTION
