(** 2019-04-25 **)
ACTION Act_Background:
	
	IF EDGEPOS(bRun1 AND bRun2) THEN
		
		FOR di := 1 TO c_diLFClntNum DO
			IF pa_sLFIPAddr[di] = '' THEN
				diMcNum	:= di - 1;
				EXIT;
			END_IF
		END_FOR
		
	END_IF
	
	Act_Background_OPCUA;
	Act_Background_Process;
	Act_Background_Disconnect;
	
END_ACTION
