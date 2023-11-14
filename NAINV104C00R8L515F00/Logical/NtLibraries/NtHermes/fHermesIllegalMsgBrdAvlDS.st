
(* Hermes Illegal Message - Board Available For Downstream *)
FUNCTION fHermesIllegalMsgBrdAvlDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2865;	//Receive ServiceDescription While Downstream In Board Available State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2866;	//Receive BoardAvailable While Downstream In Board Available State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2867;	//Receive RevokeBoardAvailable While Downstream In Board Available State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2868;	//Receive RevokeMachineReady While Downstream In Board Available State
		
	ELSIF (tyMsgType.bStartTransport = TRUE) AND (tyMsgType.bMachineReady = FALSE) THEN	//To Take Care When Machine Ready And StartTransport Receive In One Message
		
		fHermesIllegalMsgBrdAvlDS	:= 2869;	//Receive StartTransport While Downstream In Board Available State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2870;	//Receive StopTransport While Downstream In Board Available State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2871;	//Receive TransportFinished While Downstream In Board Available State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgBrdAvlDS	:= 2872;	//Receive BoardForecast While Downstream In Board Available State
		
	ELSE
		
		fHermesIllegalMsgBrdAvlDS	:= 0;
		
	END_IF
	
END_FUNCTION
