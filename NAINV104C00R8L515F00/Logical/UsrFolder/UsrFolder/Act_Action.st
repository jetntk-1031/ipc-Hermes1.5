(** 2019-03-25 **)
ACTION Act_Action: 

	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= UsrFolderActIdle;
		eStat	:= UsrFolderActIdle;
	END_IF
	
	//Reset Done. Done Only Exist One Cycle.
	IF eStatus = Done AND p_eAct = UsrFolderActIdle THEN
		eStat	:= UsrFolderActIdle;
	END_IF
	
	//Set p_eAct
	IF eStatus = Idle THEN
		eStat	:= p_eAct;
	END_IF
	
END_ACTION
