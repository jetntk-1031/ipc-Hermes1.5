(** 2021-08-01 **)
ACTION Act_Background_TCPListen:
	
	IF eStatus1 <> Error AND eStatus2 <> Error THEN
		
		fbListen.udiSvrIdent	:= udiSvrIdent;
		fbListen(bEn := TRUE);
		
		IF fbListen.udiStatus = 0 THEN
			udiClntIdent	:= fbListen.udiClntIdent;
			fbListen(bEn := FALSE);
		
		ELSIF fbListen.udiStatus = 2311 THEN //No Client Connected
			fbListen(bEn := FALSE);
		
		ELSIF fbListen.udiStatus = 2312 OR (bConnected=FALSE) THEN
			udiStatus4	:= 10012;	//Supervisory Hermes Connection Lost
			fbListen(bEn := FALSE); //add

		ELSIF fbListen.udiStatus < 65534 THEN
			eStatus1	:= Error;
			
			IF fbListen.udiStatus = 2300 THEN
				udiStatus1	:= 10010;	//Invalid Ident While Listening Client
			ELSE
				udiStatus1	:= fbListen.udiStatus;
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
