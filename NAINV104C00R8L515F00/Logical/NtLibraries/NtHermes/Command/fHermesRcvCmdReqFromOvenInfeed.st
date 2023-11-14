
(* ProcessCmd *)
FUNCTION fHermesRcvCmdReqFromOvenInfeed
	
	IF	p_tyHermesCmdParam.eCommand = HermesCommandOvenInfeed THEN
			p_tyHermesCmdOvenInfeed.bOvenInfeedFrom := TRUE ;
			p_usiCommandIdx := p_usiCommandIdx +1 ;
	ELSIF p_tyHermesCmdParam.eCommand = HermesCommandOvenInfeed THEN
			p_tyHermesCmdOvenInfeed.bOvenInfeedFrom := FALSE;
			p_usiCommandIdx := p_usiCommandIdx +1 ;
	END_IF
	

END_FUNCTION
