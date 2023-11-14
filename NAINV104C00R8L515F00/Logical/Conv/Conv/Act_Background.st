(** 2019-01-18 **)
ACTION Act_Background:
	
	IF p_bPshrExtSen = FALSE THEN
		bPshrExtended	:= FALSE;
	END_IF
	
	IF p_bPshrRetSen = FALSE THEN
		bPshrRetracted	:= FALSE;
	END_IF
	
	IF p_bPullerExtSen = FALSE THEN
		bPullerExtended	:= FALSE;
	END_IF
	
	IF p_bPullerRetSen = FALSE THEN
		bPullerRetracted	:= FALSE;
	END_IF
	
	IF p_bRotHomeSen = FALSE THEN
		bRotAtHome	:= FALSE;
	END_IF
	
	IF p_bRotRemoteSen = FALSE THEN
		bRotAtRemote	:= FALSE;
	END_IF
	
	IF p_bRejectUpSen = FALSE THEN
		bRejectAtUp	:= FALSE;
	END_IF
	
	IF p_bRejectDownSen = FALSE THEN
		bRejectAtDown	:= FALSE;
	END_IF
	
END_ACTION
