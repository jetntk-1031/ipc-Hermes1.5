(** 2019-04-25 **)
ACTION Act_LinkAction:
	
	IF (p_bLinkUILeaderRun = TRUE) AND ((bRun1 = FALSE) OR (bRun2 = FALSE)) THEN
		bUILeaderStart	:= TRUE;
		bUILeaderStop	:= FALSE;
	END_IF
	
	IF (p_bLinkUILeaderRun = FALSE) AND ((bRun1 = TRUE) OR (bRun2 = TRUE)) THEN
		bUILeaderStart	:= FALSE;
		bUILeaderStop	:= TRUE;
	END_IF
	
	IF bUILeaderStart = TRUE THEN
		p_eAct	:= LFActBGStartRun;
		
		IF (eStat = LFActBGStartRun) AND (eStatus = Done) THEN
			p_eAct			:= LFActIdle;
			bUILeaderStart	:= FALSE;
		END_IF
		
	ELSIF bUILeaderStop = TRUE THEN
		p_eAct	:= LFActBGStopRun;
		
		IF (eStat = LFActBGStopRun) AND (eStatus = Done) THEN
			p_eAct			:= LFActIdle;
			bUILeaderStop	:= FALSE;
		END_IF
		
	END_IF
	
END_ACTION
