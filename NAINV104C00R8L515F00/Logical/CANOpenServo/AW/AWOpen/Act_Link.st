(** 2020-10-06 **)
ACTION Act_Link:
	
	IF p_bManual = TRUE THEN
		p_diGoWidth ACCESS p_UIMnlAWGoWidth;
		p_diMoveVelInUMPS ACCESS p_UIMnlAWNomSpd;
	ELSE
		p_diGoWidth ACCESS p_ProdRcpCurrRcp0Width;
		p_diMoveVelInUMPS ACCESS p_NtParamAWAutoSpd;
	END_IF
	
	IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) AND (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
		p_bInterruptSensor := p_bClamp2Sensor OR p_bClamp3Sensor OR (p_bInletShutterCloseRS=FALSE) OR (p_bOutletShutterCloseRS=FALSE);
		
	ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) THEN
		p_bInterruptSensor := p_bClamp2Sensor OR p_bClamp3Sensor OR (p_bInletShutterCloseRS=FALSE);
		
	ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) THEN
		p_bInterruptSensor := p_bClamp2Sensor OR p_bClamp3Sensor OR (p_bOutletShutterCloseRS=FALSE);
		
	ELSE
		p_bInterruptSensor := p_bClamp2Sensor OR p_bClamp3Sensor;
	END_IF	
	
END_ACTION
