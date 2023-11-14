(*2020-10-08*)
(**)
(*Action*)

TYPE
	eDOAction : 
		(
		DOActIdle,
		DOActRstAll,
		DOActSetBypassCoverSwitch,
		DOActRstBypassCoverSwitch
		);
END_TYPE

(**)
(*Data*)

TYPE
	tyDigitalOutput : 	STRUCT 
		bSafetyRlyRst : BOOL;
		bTLRed : BOOL;
		bTLAmber : BOOL;
		bTLGreen : BOOL;
		bTLBlue : BOOL;
		bTLWhite : BOOL;
		bBuz : BOOL;
		bCoatingStprRet : BOOL;
		bUSB : BOOL;
		bDBA : BOOL;
		bDBAStat : BOOL;
		bConvMtrCW : BOOL;
		bConvMtrCCW : BOOL;
		bStprUnblkCtrl : BOOL;
		bStprBlkCtrl : BOOL;
		bInvertHome : BOOL;
		bInvertRemote : BOOL;
		bInvertBrake : BOOL;
		bMtrPwrRly : BOOL;
		bClampControl : BOOL;
		bUnclampControl : BOOL;
		bInShutterOpenCtrl : BOOL;
		bInShutterCloseCtrl : BOOL;
		bOutShutterOpenCtrl : BOOL;
		bOutShutterCloseCtrl : BOOL;
		bClamp1Ctrl : BOOL;
		bUnClamp1Ctrl : BOOL;
		bClamp2Ctrl : BOOL;
		bUnClamp2Ctrl : BOOL;
		bClamp3Ctrl : BOOL;
		bUnClamp3Ctrl : BOOL;
		bTopCvrUnlckToDS : BOOL;
		bTopCvrUnlckToUS : BOOL;
		bMachineSafetySigToDS : BOOL;
		bMachineSafetySigToUS : BOOL;
		bCoverPBLED1 : BOOL;
		bBypassTopCover1 : BOOL;
		bSafetyTopCoverSWCoil1 : BOOL;
		bUSB2 : BOOL;
		bSPARE9 : BOOL;
		bSPARE10 : BOOL;
		bSPARE11 : BOOL;
		bSPARE12 : BOOL;
	END_STRUCT;
	tyDigitalOutputSettings : 	STRUCT 
		diSafetyRlyRst : DINT;
		diTLRed : DINT;
		diTLAmber : DINT;
		diTLGreen : DINT;
		diTLBlue : DINT;
		diTLWhite : DINT;
		diBuz : DINT;
		diCoatingStprRet : DINT;
		diUSB : DINT;
		diDBA : DINT;
		diDBAStat : DINT;
		diConvMtrCW : DINT;
		diConvMtrCCW : DINT;
		diStprUnblkCtrl : DINT;
		diStprBlkCtrl : DINT;
		diInvertHome : DINT;
		diInvertRemote : DINT;
		diInvertBrake : DINT;
		diMtrPwrRly : DINT;
		diClampControl : DINT;
		diUnclampControl : DINT;
		diInShutterOpenCtrl : DINT;
		diInShutterCloseCtrl : DINT;
		diOutShutterOpenCtrl : DINT;
		diOutShutterCloseCtrl : DINT;
		diClamp1Ctrl : DINT;
		diUnClamp1Ctrl : DINT;
		diClamp2Ctrl : DINT;
		diUnClamp2Ctrl : DINT;
		diClamp3Ctrl : DINT;
		diUnClamp3Ctrl : DINT;
		diTopCvrUnlckToDS : DINT;
		diTopCvrUnlckToUS : DINT;
		diMachineSafetySigToDS : DINT;
		diMachineSafetySigToUS : DINT;
		diCoverPBLED1 : DINT;
		diBypassTopCover1 : DINT;
		diSafetyTopCoverSWCoil1 : DINT;
		diUSB2 : DINT;
		diSPARE9 : DINT;
		diSPARE10 : DINT;
		diSPARE11 : DINT;
		diSPARE12 : DINT;
	END_STRUCT;
END_TYPE
