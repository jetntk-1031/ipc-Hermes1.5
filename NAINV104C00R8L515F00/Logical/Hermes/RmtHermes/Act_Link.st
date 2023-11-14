(** 2021-08-01 **)
ACTION Act_Link:
	
	//Info Message
	p_sInfoMsg		:= 'Hermes Configuration Received From Remote Station';
	
	IF	p_iInput > (DINT_TO_INT(c_diHermesConfigMaxIdx)+1) THEN 
		p_iInput := (DINT_TO_INT(c_diHermesConfigMaxIdx)+1); //capped at limit
	END_IF
	
	IF	p_iOutput > (DINT_TO_INT(c_diHermesConfigMaxIdx)+1) THEN 
		p_iOutput := (DINT_TO_INT(c_diHermesConfigMaxIdx)+1); //capped at limit	
	END_IF
	
END_ACTION
