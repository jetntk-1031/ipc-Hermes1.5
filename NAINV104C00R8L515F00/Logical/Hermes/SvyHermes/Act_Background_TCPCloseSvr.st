(** 2021-08-01 **)
ACTION Act_Background_TCPCloseSvr:
	
	//Close Server Connection
	IF p_bInternalUse = FALSE THEN
		fbCloseSvr.udiTCPIdent	:= udiSvrIdent;
		fbCloseSvr(bEn := TRUE);
		
		IF fbCloseSvr.udiStatus = 0 THEN
			udiSvrIdent		:= 0;
			fbCloseSvr(bEn := FALSE);
			
		ELSIF fbCloseSvr.udiStatus < 65534 THEN
			udiSvrIdent		:= 0;
			eStatus1		:= Error;
		
			IF fbCloseSvr.udiStatus = 2300 THEN
				udiStatus1	:= 10146;	//Invalid Ident While Closing TCP
			ELSIF fbCloseSvr.udiStatus = 2310 THEN
				udiStatus1	:= 10147;	//Closing TCP Error
			ELSE
				udiStatus1	:= fbCloseSvr.udiStatus;
			END_IF
			
		END_IF
		
	ELSE
		udiSvrIdent	:= 0;
		
	END_IF
	
END_ACTION
