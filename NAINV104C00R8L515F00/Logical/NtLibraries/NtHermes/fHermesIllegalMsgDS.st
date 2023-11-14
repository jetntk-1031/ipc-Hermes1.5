
(* Hermes Illegal Message - Downstream *)
FUNCTION fHermesIllegalMsgDS
	
	CASE eState OF
		
		HermesStateNotConnected:			fHermesIllegalMsgDS	:= fHermesIllegalMsgNotConnectedDS(tyMsgType); //2840 - 2847
		HermesStateServiceDescription:		fHermesIllegalMsgDS	:= fHermesIllegalMsgSrvcDescripDS(tyMsgType); //2848 - 2856
		HermesStateNotAvailableNotReady:	fHermesIllegalMsgDS	:= fHermesIllegalMsgNotAvlNotRdyDS(tyMsgType); //2857 - 2864
		HermesStateBoardAvailable:			fHermesIllegalMsgDS	:= fHermesIllegalMsgBrdAvlDS(tyMsgType);  //2865 - 2872
		HermesStateMachineReady:			fHermesIllegalMsgDS	:= fHermesIllegalMsgMcRdyDS(tyMsgType); //2873 - 2879
		HermesStateAvailableAndReady:		fHermesIllegalMsgDS	:= fHermesIllegalMsgAvlAndRdyDS(tyMsgType); //2880 - 2886
		HermesStateTransporting:			fHermesIllegalMsgDS	:= fHermesIllegalMsgTransportingDS(tyMsgType); //2887 - 2894
		HermesStateTransportStopped:		fHermesIllegalMsgDS	:= fHermesIllegalMsgTransportStopDS(tyMsgType); //2903 - 2911
		HermesStateTransportFinished:		fHermesIllegalMsgDS	:= fHermesIllegalMsgTransportFiniDS(tyMsgType); //2895 - 2902
		
	END_CASE
	
END_FUNCTION
