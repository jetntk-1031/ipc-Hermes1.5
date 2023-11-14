(** 2019-03-25 **)
ACTION Act_Action: 

	//Reset Done
	IF eStatus = Done AND p_eAct = UIActIdle THEN
		eStat	:= UIActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle THEN
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
