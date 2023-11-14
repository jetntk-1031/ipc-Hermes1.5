(** 2020-10-14 **)
ACTION Act_Link:
	
	IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) AND (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
		p_bInterruptSensor := (p_bInletShutterCloseRS=FALSE) OR (p_bOutletShutterCloseRS=FALSE);
		
	ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) THEN
		p_bInterruptSensor := (p_bInletShutterCloseRS=FALSE);
		
	ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) THEN
		p_bInterruptSensor := (p_bOutletShutterCloseRS=FALSE);
		
	ELSE
		p_bInterruptSensor := FALSE;
	END_IF	
	
END_ACTION
