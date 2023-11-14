(** 2019-03-25 **)
ACTION Act_Action:
	
	//Set p_eAct
	IF eStatus = Idle OR eStatus = Busy OR eStatus = Done THEN
		eStat	:= p_eAct;
	END_IF

END_ACTION
