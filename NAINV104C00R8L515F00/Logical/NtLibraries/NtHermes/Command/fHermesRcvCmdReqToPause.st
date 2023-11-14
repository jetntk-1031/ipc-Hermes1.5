
(* ProcessCmd *)
FUNCTION fHermesRcvCmdReqToPause
	
	IF p_tyHermesCmdParam.eCommand = HermesCommandConfirmPause THEN 
		p_tyHermesCmdPause.bMachineSafetySigFrom := TRUE;
		p_usiCommandIdx := p_usiCommandIdx +1 ;
	END_IF
	

END_FUNCTION
