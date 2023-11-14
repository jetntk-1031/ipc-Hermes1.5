
(* ProcessCmd *)
FUNCTION fHermesRcvCmdReqFromPause
	
	IF	p_tyHermesCmdParam.eCommand = HermesCommandRequestPause THEN
			p_tyHermesCmdPause.bUnlockCoverSigFrom := TRUE ;
			p_usiCommandIdx := p_usiCommandIdx +1 ;
	ELSIF p_tyHermesCmdParam.eCommand = HermesCommandResumeOperation THEN
			p_tyHermesCmdPause.bUnlockCoverSigFrom := FALSE;
			p_usiCommandIdx := p_usiCommandIdx +1 ;
	END_IF
	

END_FUNCTION
