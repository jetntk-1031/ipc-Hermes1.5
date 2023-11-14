(*2020-10-08*)
(**)
(*Data*)

TYPE
	tyDigitalInput : 	STRUCT 
		bSafetyRlySig : BOOL;
		bEStopSig : BOOL;
		bCoverSWSig : BOOL;
		bUBA : BOOL;
		bUBAStat : BOOL;
		bDSB : BOOL;
		bConvLftSen : BOOL;
		bConvRgtSen : BOOL;
		bPressureSW : BOOL;
		bThermalPrtSig : BOOL;
		bCoatingSen : BOOL;
		bUSWidthChkSen : BOOL;
		bDSWidthChkSen : BOOL;
		bInvertHomeSen : BOOL;
		bInvertRemoteSen : BOOL;
		bInShutterOpenRS : BOOL;
		bInShutterCloseRS : BOOL;
		bOutShutterOpenRS : BOOL;
		bOutShutterCloseRS : BOOL;
		bClamp2Sen : BOOL;
		bClamp3Sen : BOOL;
		bClampRS1 : BOOL;
		bUnClampRS1 : BOOL;
		bClampRS2 : BOOL;
		bUnClampRS2 : BOOL;
		bClampRS3 : BOOL;
		bUnClampRS3 : BOOL;
		bUSWidthChkSen1 : BOOL;
		bCoverSWSig2 : BOOL;
		bSafetySigFromUS : BOOL;
		bSafetySigFromDS : BOOL;
		bUnlockCoverSigFromUS : BOOL;
		bUnlockCoverSigFromDS : BOOL;
		bCoverUnlockPB1 : BOOL;
		bUBA2 : BOOL;
		bUBAStat2 : BOOL;
		bSPARE9 : BOOL;
		bSPARE10 : BOOL;
		bSPARE11 : BOOL;
		bSPARE12 : BOOL;
	END_STRUCT;
	tyDigitalInputSettings : 	STRUCT 
		diSafetyRlySig : DINT;
		diEStopSig : DINT;
		diCoverSWSig : DINT;
		diUBA : DINT;
		diUBAStat : DINT;
		diDSB : DINT;
		diConvLftSen : DINT;
		diConvRgtSen : DINT;
		diPressureSW : DINT;
		diCoatingSen : DINT;
		diThermalPrtSig : DINT;
		diUSWidthChkSen : DINT;
		diDSWidthChkSen : DINT;
		diInvertHomeSen : DINT;
		diInvertRemoteSen : DINT;
		diInShutterOpenRS : DINT;
		diInShutterCloseRS : DINT;
		diOutShutterOpenRS : DINT;
		diOutShutterCloseRS : DINT;
		diClamp2Sen : DINT;
		diClamp3Sen : DINT;
		diClampRS1 : DINT;
		diUnClampRS1 : DINT;
		diClampRS2 : DINT;
		diUnClampRS2 : DINT;
		diClampRS3 : DINT;
		diUnClampRS3 : DINT;
		diUSWidthChkSen1 : DINT;
		diCoverSWSig2 : DINT;
		diSafetySigFromUS : DINT;
		diSafetySigFromDS : DINT;
		diUnlockCoverSigFromUS : DINT;
		diUnlockCoverSigFromDS : DINT;
		diCoverUnlockPB1 : DINT;
		diUBA2 : DINT;
		diUBAStat2 : DINT;
		diSPARE9 : DINT;
		diSPARE10 : DINT;
		diSPARE11 : DINT;
		diSPARE12 : DINT;
	END_STRUCT;
END_TYPE
