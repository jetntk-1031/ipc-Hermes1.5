
(* Hermes Illegal Message - Not Available Not Ready For Downstream *)
FUNCTION fHermesIllegalMsgNotAvlNotRdyDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2857;	//Receive ServiceDescription While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2858;	//Receive BoardAvailable While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2859;	//Receive RevokeBoardAvailable While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2860;	//Receive RevokeMachineReady While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2861;	//Receive StartTransport While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2862;	//Receive StopTransport While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2863;	//Receive TransportFinished While Downstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 2864;	//Receive BoardForecast While Downstream In Not Available Not Ready State
		
	ELSE
		
		fHermesIllegalMsgNotAvlNotRdyDS	:= 0;
		
	END_IF
	
END_FUNCTION
