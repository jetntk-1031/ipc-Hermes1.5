(** 2020-09-10 **)
ACTION Act_Background_TCPConnect:
	
	IF eStatus1 <> Error AND eStatus2 <> Error THEN
		
		//Connect Server
		fbClntConnect.sClntIP		:= p_sIPAddr;
		fbClntConnect.sSvrIP		:= p_tyParam.sHostAddress;
		fbClntConnect.uiClntPort	:= p_tyParam.uiClntPort;
		fbClntConnect.uiSvrPort		:= p_tyParam.uiHostPort;
		fbClntConnect(bEn := TRUE);
		
		IF fbClntConnect.udiStatus = 0 THEN
			udiTCPIdent	:= fbClntConnect.udiTCPIdent;
			fbClntConnect(bEn := FALSE);
			
		ELSIF fbClntConnect.udiStatus = 2313 THEN
			fbClntConnect(bEn := FALSE);
			
		ELSIF fbClntConnect.udiStatus = 2323 OR bConnected= FALSE THEN
			udiStatus5	:= 10013;	//Client Connect Time Out Warning
	
		ELSIF fbClntConnect.udiStatus < 65534 THEN
			eStatus1	:= Error;
			
			IF fbClntConnect.udiStatus = 2300 THEN
				udiStatus1	:= 10000;	//Invalid Ident While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2302 THEN
				udiStatus1	:= 10001;	//Setting Keep Alive Interval Time Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2303 THEN
				udiStatus1	:= 10002;	//Setting Keep Alive Idle Time Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2304 THEN
				udiStatus1	:= 10003;	//Setting Keep Alive Count Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2305 THEN
				udiStatus1	:= 10004;	//Setting Keep Alive Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2306 THEN
				udiStatus1	:= 10005;	//Setting Receive Buffer Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2307 THEN
				udiStatus1	:= 10006;	//Setting Send Buffer Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2308 THEN
				udiStatus1	:= 10007;	//Setting No Waiting Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2309 THEN
				udiStatus1	:= 10008;	//TCP Open Port Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2310 THEN
				udiStatus1	:= 10009;	//Closing TCP Error While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2313 THEN
				udiStatus1	:= 10010;	//Server Connection Failed While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2314 THEN
				udiStatus1	:= 10011;	//Ident In Used While Client Connecting
			ELSIF fbClntConnect.udiStatus = 2315 THEN
				udiStatus1	:= 10012;	//Connect To Server Error While Client Connecting

			ELSE
				udiStatus1	:= fbClntConnect.udiStatus;
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
