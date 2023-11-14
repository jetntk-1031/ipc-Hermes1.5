(** 2019-03-25 **)
ACTION Act_Action: 
	
	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= SMEMAActIdle;
		eStat	:= SMEMAActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle OR eStatus = Busy OR eStatus = Done THEN
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
