
(* Filter Sensor With Time *)
FUNCTION_BLOCK fbSenFltr
	
	IF bSigIn = TRUE AND bSigOut = FALSE THEN
		tyInternal.fbSigFltrTm(IN := TRUE , PT := tSigOnFltrTm);
		IF tyInternal.fbSigFltrTm.Q = TRUE THEN
			bSigOut	:= TRUE;
		END_IF
		
	ELSIF bSigIn = FALSE AND bSigOut = TRUE THEN
		tyInternal.fbSigFltrTm(IN := TRUE , PT := tSigOffFltrTm);
		IF tyInternal.fbSigFltrTm.Q = TRUE THEN
			bSigOut	:= FALSE;
		END_IF
		
	ELSE
		tyInternal.fbSigFltrTm(IN := FALSE);
		
	END_IF
	
END_FUNCTION_BLOCK
