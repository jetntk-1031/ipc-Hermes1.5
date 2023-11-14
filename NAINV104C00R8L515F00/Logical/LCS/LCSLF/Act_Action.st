(** 2019-04-24 **)
ACTION Act_Action: 

	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= LCSActIdle;
		eStat	:= LCSActIdle;
	END_IF
	
	//Reset Done
	IF eStatus = Done AND p_eAct = LCSActIdle THEN
		eStat	:= LCSActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle THEN
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
