(** 2019-04-28 **)
ACTION Act_Action: 

	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= MpProdRcpActIdle;
		eStat	:= MpProdRcpActIdle;
	END_IF
	
	//Reset Done
	IF eStatus = Done AND p_eAct = MpProdRcpActIdle THEN
		eStat	:= MpProdRcpActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle THEN
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
