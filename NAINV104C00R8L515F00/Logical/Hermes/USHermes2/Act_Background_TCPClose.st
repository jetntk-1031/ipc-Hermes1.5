(** 2019-06-10 **)
ACTION Act_Background_TCPClose:
	
	//Close TCP Connection
	IF p_bInternalUse = FALSE THEN
		fbClose.udiTCPIdent	:= udiTCPIdent;
		fbClose(bEn := TRUE);
			
		IF fbClose.udiStatus = 0 THEN
			udiTCPIdent	:= 0;
			fbClose(bEn := FALSE);
			
		ELSIF fbClose.udiStatus < 65534 THEN
			udiTCPIdent	:= 0;
			eStatus1	:= Error;
		
			IF fbClose.udiStatus = 2300 THEN
				udiStatus1	:= 10146;	//Invalid Ident While Closing TCP
			ELSIF fbClose.udiStatus = 2310 THEN
				udiStatus1	:= 10147;	//Closing TCP Error
			ELSE
				udiStatus1	:= fbClose.udiStatus;
			END_IF
			
		END_IF
		
	ELSE
		udiTCPIdent	:= 0;
		
	END_IF
	
END_ACTION
