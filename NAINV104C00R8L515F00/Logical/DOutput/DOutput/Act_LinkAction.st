(** 2019-03-29 **)
ACTION Act_LinkAction:
	
	IF EDGENEG(p_bManual) THEN
		p_eAct	:= DOActIdle;
	END_IF
	
END_ACTION
