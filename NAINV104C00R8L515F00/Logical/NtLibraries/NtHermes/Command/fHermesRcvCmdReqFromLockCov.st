
(* ProcessCmd *)
FUNCTION fHermesRcvCmdReqFromLockCov
	
	IF	p_tyHermesCmdParam.eCommand = HermesCommandLockInputConveyor THEN
			p_tyHermesCmdLockCov.bOvenInfoFrom := TRUE ;
			p_usiCommandIdx := p_usiCommandIdx +1 ;
	ELSIF p_tyHermesCmdParam.eCommand = HermesCommandUnLockInputConveyor THEN
			p_tyHermesCmdLockCov.bOvenInfoFrom := FALSE;
			p_usiCommandIdx := p_usiCommandIdx +1 ;
	END_IF
	

END_FUNCTION
