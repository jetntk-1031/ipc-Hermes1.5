(** 2019-03-29 **)
ACTION Act_Link:
	
	IF p_bLinkDISafetyRlySig = FALSE THEN
		bExtCtrl	:= FALSE;
		bRetCtrl	:= FALSE;
		bExtended	:= FALSE;
		bRetracted	:= FALSE;
	END_IF
	
END_ACTION
