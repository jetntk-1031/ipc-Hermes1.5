
(* Hermes Illegal Message - Not Available Not Ready For Upstream *)
FUNCTION fHermesIllegalMsgNotAvlNotRdyUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2787;	//Receive ServiceDescription While Upstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2788;	//Receive RevokeBoardAvailable While Upstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2789;	//Receive MachineReady While Upstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2790;	//Receive RevokeMachineReady While Upstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2791;	//Receive StartTransport While Upstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2792;	//Receive StopTransport While Upstream In Not Available Not Ready State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 2793;	//Receive TransportFinished While Upstream In Not Available Not Ready State
		
	ELSE
		
		fHermesIllegalMsgNotAvlNotRdyUS	:= 0;
		
	END_IF
	
END_FUNCTION
