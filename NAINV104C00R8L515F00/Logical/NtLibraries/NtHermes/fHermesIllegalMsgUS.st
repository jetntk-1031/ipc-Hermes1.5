
(* Hermes Illegal Message - Upstream *)
FUNCTION fHermesIllegalMsgUS
	
	CASE eState OF
		
		HermesStateNotConnected:			fHermesIllegalMsgUS	:= fHermesIllegalMsgNotConnectedUS(tyMsgType); //2770 - 2778
		HermesStateServiceDescription:		fHermesIllegalMsgUS	:= fHermesIllegalMsgSrvcDescripUS(tyMsgType); //2779 - 2786
		HermesStateNotAvailableNotReady:	fHermesIllegalMsgUS	:= fHermesIllegalMsgNotAvlNotRdyUS(tyMsgType); //2787 - 2793
		HermesStateBoardAvailable:			fHermesIllegalMsgUS	:= fHermesIllegalMsgBrdAvlUS(tyMsgType); //2794 - 2801
		HermesStateMachineReady:			fHermesIllegalMsgUS	:= fHermesIllegalMsgMcRdyUS(tyMsgType); //2802 - 2808
		HermesStateAvailableAndReady:		fHermesIllegalMsgUS	:= fHermesIllegalMsgAvlAndRdyUS(tyMsgType); //2809 - 2816
		HermesStateTransporting:			fHermesIllegalMsgUS	:= fHermesIllegalMsgTransportingUS(tyMsgType , bBoardAvailable); //2817-2823
		HermesStateTransportFinished:		fHermesIllegalMsgUS	:= fHermesIllegalMsgTransportFiniUS(tyMsgType); //2824 - 2832
		HermesStateTransportStopped:		fHermesIllegalMsgUS	:= fHermesIllegalMsgTransportStopUS(tyMsgType , bBoardAvailable); //2833 - 2839
		
	END_CASE
	
END_FUNCTION
