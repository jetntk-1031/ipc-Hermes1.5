(** 2020-10-14 **)
ACTION Act_Background:
	
	IF bNotInterruptible THEN
		IF p_bInterruptSensor = TRUE THEN
			eStatus	:= Error;
			udiStatus	:= 10008;	//Sensor Interrupt Motor Movement
		
			p_eAct	:= MotorBrkActIdle;
			eStat	:= MotorBrkActIdle;
		END_IF
	END_IF

	
END_ACTION
