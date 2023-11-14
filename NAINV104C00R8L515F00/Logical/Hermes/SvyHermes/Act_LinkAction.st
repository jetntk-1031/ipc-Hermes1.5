(** 2021-08-01 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupSvyHermesAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
		
		IF EDGEPOS(p_bSvyPrep AND p_bSvyEn) THEN
			bHermesRun	:= TRUE;
			bHermesStop	:= FALSE;
		END_IF
		
		IF EDGENEG(p_bSvyPrep AND p_bSvyEn) THEN
			bHermesRun	:= FALSE;
			bHermesStop	:= TRUE;
		END_IF
		
		IF bHermesRun = TRUE THEN
			p_eAct	:= HermesActBGStartRun;
			
			IF (eStat = HermesActBGStartRun) AND (eStatus = Done) THEN
				p_eAct			:= HermesActIdle;
				bHermesRun	:= FALSE;
			END_IF
		END_IF
		
		IF bHermesStop = TRUE THEN
			p_eAct	:= HermesActBGStopRun;
			
			IF (eStat = HermesActBGStopRun) AND (eStatus = Done) THEN
				p_eAct	    := HermesActIdle;
				bHermesStop	:= FALSE;
			END_IF
		END_IF
		
	END_IF
	
END_ACTION
