(** 2021-08-01 **)
ACTION Act_Background_TCPCloseClnt:
	
	//Close Server Connection
	fbCloseClnt.udiTCPIdent	:= udiClntIdent;
	fbCloseClnt(bEn := TRUE);
		
	IF fbCloseClnt.udiStatus = 0 THEN
		udiClntIdent	:= 0;
		fbCloseClnt(bEn := FALSE);
		
	ELSIF fbCloseClnt.udiStatus < 65534 THEN
		udiClntIdent	:= 0;
		eStatus1		:= Error;
	
		IF fbCloseClnt.udiStatus = 2300 THEN
			udiStatus1	:= 10154;	//Invalid Ident While Closing TCP
		ELSIF fbCloseClnt.udiStatus = 2310 THEN
			udiStatus1	:= 10155;	//Closing TCP Error
		ELSE
			udiStatus1	:= fbCloseClnt.udiStatus;
		END_IF
		
	END_IF
	
END_ACTION
