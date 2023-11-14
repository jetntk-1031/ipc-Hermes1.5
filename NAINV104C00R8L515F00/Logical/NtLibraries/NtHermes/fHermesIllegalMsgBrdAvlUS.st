
(* Hermes Illegal Message - Board Available For Upstream *)
FUNCTION fHermesIllegalMsgBrdAvlUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2794;	//Receive ServiceDescription While Upstream In Board Available State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2795;	//Receive BoardAvailable While Upstream In Board Available State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2796;	//Receive MachineReady While Upstream In Board Available State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2797;	//Receive RevokeMachineReady While Upstream In Board Available State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2798;	//Receive StartTransport While Upstream In Board Available State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2799;	//Receive StopTransport While Upstream In Board Available State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgBrdAvlUS	:= 2800;	//Receive TransportFinished While Upstream In Board Available State
		
//	ELSIF tyMsgType.bBoardForecast = TRUE THEN
//		
//		fHermesIllegalMsgBrdAvlUS	:= 2801;	//Receive BoardForecast While Upstream In Board Available State
		
	ELSE
		
		fHermesIllegalMsgBrdAvlUS	:= 0;
		
	END_IF
	
END_FUNCTION
