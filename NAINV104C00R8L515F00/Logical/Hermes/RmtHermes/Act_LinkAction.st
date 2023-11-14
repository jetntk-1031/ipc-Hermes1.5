(** 2021-08-01 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupRmtHermesAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
		
		IF EDGEPOS(p_bRmtPrep AND p_bRmtEn) THEN
			bRmtHermesRun	:= TRUE;
			bRmtHermesStop	:= FALSE;
		END_IF
		
		IF EDGENEG(p_bRmtPrep) OR EDGENEG(p_bRmtEn) THEN
			bRmtHermesRun	:= FALSE;
			bRmtHermesStop	:= TRUE;
		END_IF
		
		IF bRmtHermesRun = TRUE THEN
			p_eAct	:= HermesActBGStartRun;
			
			IF (eStat = HermesActBGStartRun) AND (eStatus = Done) THEN
				p_eAct			:= HermesActIdle;
				bRmtHermesRun	:= FALSE;
			END_IF
		END_IF
		
		IF bRmtHermesStop = TRUE THEN
			p_eAct	:= HermesActBGStopRun;
			
			IF (eStat = HermesActBGStopRun) AND (eStatus = Done) THEN
				p_eAct			:= HermesActIdle;
				bRmtHermesStop	:= FALSE;
			END_IF
		END_IF
		
	END_IF
	
END_ACTION
