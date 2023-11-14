(** 2020-10-08 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_udiMax ACCESS ADR(c_udiDOutputMax);
	p_eAct ACCESS ADR(eAct);
	p_tyDOSettings ACCESS ADR(tyDOSettings);
	p_bManual ACCESS ADR(bManual);
	p_bSafetyRlyRst ACCESS ADR(bSafetyRlyRst);
	p_bTLRed ACCESS ADR(bTLRed);
	p_bTLAmber ACCESS ADR(bTLAmber);
	p_bTLGreen ACCESS ADR(bTLGreen);
	p_bTLWhite ACCESS ADR(bTLWhite);
	p_bTLBlue ACCESS ADR(bTLBlue);
	p_bBuz ACCESS ADR(bBuz);
	p_bUSB ACCESS ADR(bUSB);
	p_bDBA ACCESS ADR(bDBA);
	p_bDBAStat ACCESS ADR(bDBAStat);
	p_bUSB2 ACCESS ADR(bUSB2);
	p_bConvMtrCW ACCESS ADR(bConvMtrCW);
	p_bConvMtrCCW ACCESS ADR(bConvMtrCCW);
	p_bStprUnblkCtrl ACCESS ADR(bStprUnblkCtrl);
	p_bStprBlkCtrl ACCESS ADR(bStprBlkCtrl);
	p_bInvertHome ACCESS ADR(bInvertHome);
	p_bInvertRemote ACCESS ADR(bInvertRemote);
	p_bInvertBrake ACCESS ADR(bInvertBrake);
	p_bClampControl ACCESS ADR(bClampControl);
	p_bUnclampControl ACCESS ADR(bUnclampControl);
	p_bMtrPwrRly ACCESS ADR (bMtrPwrRly);
	p_bInShutterOpenCtrl ACCESS ADR(bInShutterOpenCtrl);
	p_bInShutterCloseCtrl ACCESS ADR(bInShutterCloseCtrl);
	p_bOutShutterOpenCtrl ACCESS ADR(bOutShutterOpenCtrl);
	p_bOutShutterCloseCtrl ACCESS ADR(bOutShutterCloseCtrl);
	p_bClamp1Ctrl ACCESS ADR(bClamp1Ctrl);
	p_bUnClamp1Ctrl ACCESS ADR(bUnClamp1Ctrl);
	p_bClamp2Ctrl ACCESS ADR(bClamp2Ctrl);
	p_bUnClamp2Ctrl ACCESS ADR(bUnClamp2Ctrl);
	p_bClamp3Ctrl ACCESS ADR(bClamp3Ctrl);
	p_bUnClamp3Ctrl ACCESS ADR(bUnClamp3Ctrl);
	
	p_bBypsCoverSW1 ACCESS ADR(bBypassTopCover1);			// ADD
	p_bTopCvrUnlckToDS ACCESS ADR(bTopCvrUnlckToDS);			//
	p_bTopCvrUnlckToUS ACCESS ADR(bTopCvrUnlckToUS);			//
	p_bMachineSafetySigToDS ACCESS ADR(bMachineSafetySigToDS);	// ADD
	p_bMachineSafetySigToUS ACCESS ADR(bMachineSafetySigToUS);	// ADD
	p_bSafetyTopCoverSWCoil1 ACCESS ADR(bSafetyTopCoverSWCoil1);	//
	p_bCoverPBLED1 ACCESS ADR(bCoverPBLED1);				//
	
	p_bHermesUSCmdFeaturePause ACCESS ADR(bHermesDummyMem);
	p_bHermesDSCmdFeaturePause ACCESS ADR(bHermesDummyMem);
END_ACTION
