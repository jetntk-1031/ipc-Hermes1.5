
(* Hermes Illegal Message - Service Description For Upstream *)
FUNCTION fHermesIllegalMsgSrvcDescripUS
	
//	IF tyMsgType.bBoardAvailable = TRUE THEN //Commented due to ASM can send B.A message immediately (0.01 sec) after send us Service description before our machine can react and change Hermes eState from HermesStateServiceDescription to HermesStateNotAvailableNotReady
//	
//		fHermesIllegalMsgSrvcDescripUS	:= 2779;	//Receive BoardAvailable While Upstream In Service Description State 
		
	IF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripUS	:= 2780;	//Receive RevokeBoardAvailable While Upstream In Service Description State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripUS	:= 2781;	//Receive MachineReady While Upstream In Service Description State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripUS	:= 2782;	//Receive RevokeMachineReady While Upstream In Service Description State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripUS	:= 2783;	//Receive StartTransport While Upstream In Service Description State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripUS	:= 2784;	//Receive StopTransport While Upstream In Service Description State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripUS	:= 2785;	//Receive TransportFinished While Upstream In Service Description State
		
//	ELSIF tyMsgType.bBoardForecast = TRUE THEN //Commented due to ASM can send B.F message immediately (0.01 sec) after send us Service description before our machine can react and change Hermes eState from HermesStateServiceDescription to HermesStateNotAvailableNotReady
//		
//		fHermesIllegalMsgSrvcDescripUS	:= 2786;	//Receive BoardForecast While Upstream In Service Description State
		
	ELSE
		
		fHermesIllegalMsgSrvcDescripUS	:= 0;
		
	END_IF
	
END_FUNCTION
