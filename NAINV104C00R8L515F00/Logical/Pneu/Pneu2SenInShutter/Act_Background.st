(** 2018-12-14 **)
ACTION Act_Background:
	
	IF p_bExtSen = FALSE THEN
		bExtended	:= FALSE;
	END_IF
	
	IF p_bRetSen = FALSE THEN
		bRetracted	:= FALSE;
	END_IF
	
END_ACTION
