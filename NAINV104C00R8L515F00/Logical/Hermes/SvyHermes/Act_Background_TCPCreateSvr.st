(** 2021-08-01 **)
ACTION Act_Background_TCPCreateSvr:
	
	IF eStatus1 <> Error THEN
		
		//Create Server
		fbCreateSvr.sSvrIP				:= p_sIPAddr;
		fbCreateSvr.uiSvrPort			:= p_tyParam.uiSvySvstemPort;
		fbCreateSvr(bEn := TRUE);
		
		IF fbCreateSvr.udiStatus = 0 THEN
			udiSvrIdent	:= fbCreateSvr.udiTCPIdent;
			fbCreateSvr(bEn := FALSE);
			
		ELSIF fbCreateSvr.udiStatus < 65534 THEN
			eStatus1	:= Error;
			
			IF fbCreateSvr.udiStatus = 2300 THEN
				udiStatus1	:= 10000;	//Invalid Ident While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2302 THEN
				udiStatus1	:= 10001;	//Setting Keep Alive Interval Time Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2303 THEN
				udiStatus1	:= 10002;	//Setting Keep Alive Idle Time Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2304 THEN
				udiStatus1	:= 10003;	//Setting Keep Alive Count Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2305 THEN
				udiStatus1	:= 10004;	//Setting Keep Alive Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2306 THEN
				udiStatus1	:= 10005;	//Setting Receive Buffer Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2307 THEN
				udiStatus1	:= 10006;	//Setting Send Buffer Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2308 THEN
				udiStatus1	:= 10007;	//Setting No Waiting Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2309 THEN
				udiStatus1	:= 10008;	//TCP Open Port Error While Creating Server
			ELSIF fbCreateSvr.udiStatus = 2310 THEN
				udiStatus1	:= 10009;	//Closing TCP Error While Creating Server
			ELSE
				udiStatus1	:= fbCreateSvr.udiStatus;
			END_IF
			
		END_IF
	
	END_IF
	
END_ACTION
