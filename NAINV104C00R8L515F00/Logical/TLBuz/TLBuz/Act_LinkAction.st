(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bManual = TRUE THEN
		p_eAct ACCESS p_UITLBuzAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
