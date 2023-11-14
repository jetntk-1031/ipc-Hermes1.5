(** 2019-03-15 **)
ACTION Act_Background_Err:
	
	IF bTransporting = TRUE THEN
		IF bStopTransport AND p_bInterruptSen THEN
			eStatus2	:= Error;
			udiStatus2	:= 10157;	//Board Jam At Sensor After Transfer Interrupted
		END_IF
	END_IF
	
END_ACTION
