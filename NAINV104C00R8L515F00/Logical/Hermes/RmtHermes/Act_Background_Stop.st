(** 2021-08-01 **)
ACTION Act_Background_Stop:

	IF bStop = TRUE THEN //Note: Rmt Station only connect to our Server(udiClntIdent >0) when sending msg to us, after that udiClntIdent will bcome 0. So notification cannot be send out.
		
		bRstConnection	:= TRUE;
			
		IF udiSvrIdent = 0 THEN
			
			bRun	:= FALSE;
			
		END_IF
	
	END_IF
	
END_ACTION
