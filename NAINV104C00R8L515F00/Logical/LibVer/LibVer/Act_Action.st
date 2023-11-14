(** 2019-03-25 **)
ACTION Act_Action: 

	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= LibVerActIdle;
		eStat	:= LibVerActIdle;
	END_IF
	
	//Reset Done
	IF eStatus = Done AND p_eAct = LibVerActIdle THEN
		eStat	:= LibVerActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle THEN
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
