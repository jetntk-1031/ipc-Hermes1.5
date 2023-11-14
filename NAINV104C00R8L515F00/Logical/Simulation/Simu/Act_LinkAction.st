(** 2019-03-29 **)
ACTION Act_LinkAction:
	
	//Operation Control
	IF p_eUISimuAct <> SimulationsActIdle THEN
		p_eAct ACCESS p_UISimuAct;
	
	ELSE
		p_eAct ACCESS p_UISimuAct;
		
	END_IF
	
END_ACTION
