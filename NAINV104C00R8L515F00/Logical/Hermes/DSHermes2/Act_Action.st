(** 2021-08-01 **)
ACTION Act_Action: 
	
	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= HermesActIdle;
		eStat	:= HermesActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle  OR eStatus = Done THEN //OR eStatus = Busy
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
