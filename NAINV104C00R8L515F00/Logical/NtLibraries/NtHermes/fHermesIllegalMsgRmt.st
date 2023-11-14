
(* Hermes Illegal Message - Remote Configuration *)
FUNCTION fHermesIllegalMsgRmt //2925 - 2939
	
	IF tyMsgType.bCheckAlive = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2925;	//Receive Check Alive While In Remote Configuration
	
	ELSIF tyMsgType.bCheckAlivePing = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2926;	//Receive Check Alive Ping While In Remote Configuration
		
	ELSIF tyMsgType.bCheckAlivePong = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2927;	//Receive Check Alive Pong While In Remote Configuration
		
	ELSIF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2928;	//Receive ServiceDescription While In Remote Configuration
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2929;	//Receive BoardAvailable While In Remote Configuration
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2930;	//Receive RevokeBoardAvailable While In Remote Configuration
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2931;	//Receive MachineReady While In Remote Configuration
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2932;	//Receive RevokeMachineReady While In Remote Configuration
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2933;	//Receive StartTransport While In Remote Configuration
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2934;	//Receive StopTransport While In Remote Configuration
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2935;	//Receive TransportFinished While In Remote Configuration
		
	ELSIF tyMsgType.bCurrentConfiguration = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2936;	//Receive CurrentConfiguration While In Remote Configuration
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2937;	//Receive BoardForecast While In Remote Configuration
		
	ELSIF tyMsgType.bQueryBoardInfo = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2938;	//Receive QueryBoardInfo While In Remote Configuration
		
	ELSIF tyMsgType.bSendBoardInfo = TRUE THEN
		
		fHermesIllegalMsgRmt	:= 2939;	//Receive SendBoardInfo While In Remote Configuration
		
	ELSE
		
		fHermesIllegalMsgRmt	:= 0;
		
	END_IF
	
END_FUNCTION
