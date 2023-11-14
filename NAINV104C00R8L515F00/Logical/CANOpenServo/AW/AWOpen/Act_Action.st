(** 2020-03-16 **)
ACTION Act_Action: 

	//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		p_eAct	:= AWActIdle;
		eStat	:= AWActIdle;
		
		fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
	END_IF
	
	//Reset Done
	IF eStatus = Done AND p_eAct = AWActIdle THEN
		eStat	:= AWActIdle;
	END_IF
	
	//Set p_eAct
	IF (eStatus = Idle 
		AND eStatus1 = Idle 
		AND eStatus2 = Idle 
		AND eStatus3 = Idle) 
		OR p_eAct = AWActIdle 
		OR p_eAct = AWActStop
		OR (p_eAct = AWActJogStop AND eStatus = Done)
		THEN
		eStat	:= p_eAct;
	END_IF
	
	IF EDGEPOS(bModuleNotOK) THEN
		eStat := AWActIdle;
	END_IF
	
END_ACTION
