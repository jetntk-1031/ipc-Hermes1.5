(** 2020-10-08 **)
ACTION Act_Background:
	
	//Resetting Physical Output
	memset(ADR(a_bPhysicalDO), 0, SIZEOF(a_bPhysicalDO));
	
	//Digital Output Mapping Physical Output With Config
	IF p_tyDOSettings.diSafetyRlyRst > 0 AND p_tyDOSettings.diSafetyRlyRst <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diSafetyRlyRst]	:= p_bSafetyRlyRst;
	END_IF
	
	IF p_tyDOSettings.diTLRed > 0 AND p_tyDOSettings.diTLRed <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diTLRed]			:= p_bTLRed;
	END_IF
	
	IF p_tyDOSettings.diTLAmber > 0 AND p_tyDOSettings.diTLAmber <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diTLAmber]			:= p_bTLAmber;
	END_IF
	
	IF p_tyDOSettings.diTLGreen > 0 AND p_tyDOSettings.diTLGreen <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diTLGreen]			:= p_bTLGreen;
	END_IF
	
	IF p_tyDOSettings.diTLWhite > 0 AND p_tyDOSettings.diTLWhite <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diTLWhite]			:= p_bTLWhite;
	END_IF
	
	IF p_tyDOSettings.diTLBlue > 0 AND p_tyDOSettings.diTLBlue <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diTLBlue]			:= p_bTLBlue;
	END_IF
	
	IF p_tyDOSettings.diBuz > 0 AND p_tyDOSettings.diBuz <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diBuz]				:= p_bBuz;
	END_IF
	
	IF p_tyDOSettings.diDBA > 0 AND p_tyDOSettings.diDBA <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diDBA]				:= p_bDBA;
	END_IF
	
	IF p_tyDOSettings.diDBAStat > 0 AND p_tyDOSettings.diDBAStat <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diDBAStat]			:= p_bDBAStat;
	END_IF
	
	IF p_tyDOSettings.diUSB > 0 AND p_tyDOSettings.diUSB <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diUSB]				:= p_bUSB;
	END_IF
	
	IF p_tyDOSettings.diUSB2 > 0 AND p_tyDOSettings.diUSB2 <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diUSB2]			:= p_bUSB2;
	END_IF
	
	IF p_tyDOSettings.diConvMtrCW > 0 AND p_tyDOSettings.diConvMtrCW <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diConvMtrCW]	:= p_bConvMtrCW;
	END_IF
	
	IF p_tyDOSettings.diConvMtrCCW > 0 AND p_tyDOSettings.diConvMtrCCW <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diConvMtrCCW]	:= p_bConvMtrCCW;
	END_IF
	
	IF p_tyDOSettings.diStprUnblkCtrl > 0 AND p_tyDOSettings.diStprUnblkCtrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diStprUnblkCtrl]	:= p_bStprUnblkCtrl;
	END_IF
	
	IF p_tyDOSettings.diStprBlkCtrl > 0 AND p_tyDOSettings.diStprBlkCtrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diStprBlkCtrl]		:= p_bStprBlkCtrl;
	END_IF
	
	IF p_tyDOSettings.diInvertHome > 0 AND p_tyDOSettings.diInvertHome <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diInvertHome]	:= p_bInvertHome;
	END_IF
	
	IF p_tyDOSettings.diInvertRemote > 0 AND p_tyDOSettings.diInvertRemote <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diInvertRemote]	:= p_bInvertRemote;
	END_IF
	
	IF p_tyDOSettings.diInvertBrake > 0 AND p_tyDOSettings.diInvertBrake <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diInvertBrake]	:= p_bInvertBrake;
	END_IF
	
	IF p_tyDOSettings.diClampControl > 0 AND p_tyDOSettings.diClampControl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diClampControl]	:= p_bClampControl;
	END_IF
	
	IF p_tyDOSettings.diUnclampControl > 0 AND p_tyDOSettings.diUnclampControl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diUnclampControl]	:= p_bUnclampControl;
	END_IF
	
	IF p_tyDOSettings.diMtrPwrRly > 0 AND p_tyDOSettings.diMtrPwrRly <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diMtrPwrRly]	:= p_bMtrPwrRly;
	END_IF
	
	IF p_tyDOSettings.diInShutterOpenCtrl > 0 AND p_tyDOSettings.diInShutterOpenCtrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diInShutterOpenCtrl]	:= p_bInShutterOpenCtrl;
	END_IF
	
	IF p_tyDOSettings.diInShutterCloseCtrl > 0 AND p_tyDOSettings.diInShutterCloseCtrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diInShutterCloseCtrl]	:= p_bInShutterCloseCtrl;
	END_IF
	
	IF p_tyDOSettings.diOutShutterOpenCtrl > 0 AND p_tyDOSettings.diOutShutterOpenCtrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diOutShutterOpenCtrl]	:= p_bOutShutterOpenCtrl;
	END_IF
	
	IF p_tyDOSettings.diOutShutterCloseCtrl > 0 AND p_tyDOSettings.diOutShutterCloseCtrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diOutShutterCloseCtrl]	:= p_bOutShutterCloseCtrl;
	END_IF
	
	IF p_tyDOSettings.diClamp1Ctrl > 0 AND p_tyDOSettings.diClamp1Ctrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diClamp1Ctrl]	:= p_bClamp1Ctrl;
	END_IF
	
	IF p_tyDOSettings.diUnClamp1Ctrl > 0 AND p_tyDOSettings.diUnClamp1Ctrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diUnClamp1Ctrl]	:= p_bUnClamp1Ctrl;
	END_IF
	
	IF p_tyDOSettings.diClamp2Ctrl > 0 AND p_tyDOSettings.diClamp2Ctrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diClamp2Ctrl]	:= p_bClamp2Ctrl;
	END_IF
	
	IF p_tyDOSettings.diUnClamp2Ctrl > 0 AND p_tyDOSettings.diUnClamp2Ctrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diUnClamp2Ctrl]	:= p_bUnClamp2Ctrl;
	END_IF
	
	IF p_tyDOSettings.diClamp3Ctrl > 0 AND p_tyDOSettings.diClamp3Ctrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diClamp3Ctrl]	:= p_bClamp3Ctrl; //
	END_IF
	
	IF p_tyDOSettings.diUnClamp3Ctrl > 0 AND p_tyDOSettings.diUnClamp3Ctrl <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diUnClamp3Ctrl]	:= p_bUnClamp3Ctrl;
	END_IF
	
	// ADD
	IF p_bHermesUSCmdFeaturePause THEN
		IF p_tyHermesUSCmdPause.bFeatureRequestFrom  THEN
			//a_bPhysicalDO[p_tyDOSettings.diMachineSafetySigToUS]	:= p_tyHermesUSCmdPause.bMachineSafetySigTo;
			p_tyHermesUSCmdPause.bMachineSafetySigTo				:= p_bMachineSafetySigToUS;
		END_IF	
		IF p_tyHermesUSCmdPause.bFeatureRequestTo THEN
			//a_bPhysicalDO[p_tyDOSettings.diTopCvrUnlckToUS]	:= p_tyHermesUSCmdPause.bUnlockCoverSigTo;
			p_tyHermesUSCmdPause.bUnlockCoverSigTo					:= p_bTopCvrUnlckToUS;
		END_IF
	ELSE
		IF p_tyDOSettings.diMachineSafetySigToUS > 0 AND p_tyDOSettings.diMachineSafetySigToUS  <= UDINT_TO_DINT(p_udiMax) THEN
			a_bPhysicalDO[p_tyDOSettings.diMachineSafetySigToUS]	:= p_bMachineSafetySigToUS;
		END_IF	
		IF p_tyDOSettings.diTopCvrUnlckToUS > 0 AND p_tyDOSettings.diTopCvrUnlckToUS  <= UDINT_TO_DINT(p_udiMax) THEN
			a_bPhysicalDO[p_tyDOSettings.diTopCvrUnlckToUS]	:= p_bTopCvrUnlckToUS;
		END_IF
	END_IF
	IF p_bHermesDSCmdFeaturePause THEN
		IF p_tyHermesDSCmdPause.bFeatureRequestTo THEN
			//a_bPhysicalDO[p_tyDOSettings.diMachineSafetySigToDS]	:= p_tyHermesDSCmdPause.bMachineSafetySigTo;
			p_tyHermesDSCmdPause.bMachineSafetySigTo  				:= p_bMachineSafetySigToDS;
		END_IF
		IF p_tyHermesDSCmdPause.bFeatureRequestFrom THEN
			//a_bPhysicalDO[p_tyDOSettings.diTopCvrUnlckToDS]	:= p_tyHermesDSCmdPause.bUnlockCoverSigTo;
			p_tyHermesDSCmdPause.bUnlockCoverSigTo					:= p_bTopCvrUnlckToDS;
		END_IF
	ELSE
		IF p_tyDOSettings.diMachineSafetySigToDS  > 0 AND p_tyDOSettings.diMachineSafetySigToDS  <= UDINT_TO_DINT(p_udiMax) THEN
			a_bPhysicalDO[p_tyDOSettings.diMachineSafetySigToDS]	:= p_bMachineSafetySigToDS;
		END_IF
		IF p_tyDOSettings.diTopCvrUnlckToDS > 0 AND p_tyDOSettings.diTopCvrUnlckToDS  <= UDINT_TO_DINT(p_udiMax) THEN
			a_bPhysicalDO[p_tyDOSettings.diTopCvrUnlckToDS]	:= p_bTopCvrUnlckToDS;
		END_IF
	END_IF
	
	IF p_tyDOSettings.diSafetyTopCoverSWCoil1  > 0 AND p_tyDOSettings.diSafetyTopCoverSWCoil1  <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diSafetyTopCoverSWCoil1]	:= p_bSafetyTopCoverSWCoil1;
	END_IF
	IF p_tyDOSettings.diCoverPBLED1 > 0 AND p_tyDOSettings.diCoverPBLED1  <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diCoverPBLED1]	:= p_bCoverPBLED1;
	END_IF	
	IF p_tyDOSettings.diBypassTopCover1 > 0 AND p_tyDOSettings.diBypassTopCover1  <= UDINT_TO_DINT(p_udiMax) THEN
		a_bPhysicalDO[p_tyDOSettings.diBypassTopCover1]	:= p_bBypsCoverSW1;
	END_IF
	

	
	//Update Output
	tyDOutput.bSafetyRlyRst			:= p_bSafetyRlyRst;
	tyDOutput.bTLWhite				:= p_bTLWhite;
	tyDOutput.bTLAmber				:= p_bTLAmber;
	tyDOutput.bTLGreen				:= p_bTLGreen;
	tyDOutput.bTLRed				:= p_bTLRed;
	tyDOutput.bTLBlue				:= p_bTLBlue;
	tyDOutput.bBuz					:= p_bBuz;
	tyDOutput.bUSB					:= p_bUSB;
	tyDOutput.bDBA					:= p_bDBA;
	tyDOutput.bDBAStat				:= p_bDBAStat;
	tyDOutput.bUSB2					:= p_bUSB2; //ADD_2023_0032B01
	tyDOutput.bConvMtrCW			:= p_bConvMtrCW;
	tyDOutput.bConvMtrCCW			:= p_bConvMtrCCW;
	tyDOutput.bStprUnblkCtrl		:= p_bStprUnblkCtrl;
	tyDOutput.bStprBlkCtrl			:= p_bStprBlkCtrl;
	tyDOutput.bInvertHome			:= p_bInvertHome;
	tyDOutput.bInvertRemote			:= p_bInvertRemote;
	tyDOutput.bInvertBrake			:= p_bInvertBrake;
	tyDOutput.bClampControl			:= p_bClampControl;
	tyDOutput.bUnclampControl		:= p_bUnclampControl;
	tyDOutput.bMtrPwrRly			:= p_bMtrPwrRly;
	tyDOutput.bInShutterOpenCtrl	:= p_bInShutterOpenCtrl;
	tyDOutput.bInShutterCloseCtrl	:= p_bInShutterCloseCtrl;
	tyDOutput.bOutShutterOpenCtrl	:= p_bOutShutterOpenCtrl;
	tyDOutput.bOutShutterCloseCtrl	:= p_bOutShutterCloseCtrl;
	tyDOutput.bClamp1Ctrl			:= p_bClamp1Ctrl;
	tyDOutput.bUnClamp1Ctrl			:= p_bUnClamp1Ctrl;
	tyDOutput.bClamp2Ctrl			:= p_bClamp2Ctrl;
	tyDOutput.bUnClamp2Ctrl			:= p_bUnClamp2Ctrl;
	tyDOutput.bClamp3Ctrl			:= p_bClamp3Ctrl;
	tyDOutput.bUnClamp3Ctrl			:= p_bUnClamp3Ctrl;
	
	
	// ADD
	tyDOutput.bMachineSafetySigToDS :=p_bMachineSafetySigToDS;
	tyDOutput.bMachineSafetySigToUS := p_bMachineSafetySigToUS;
	tyDOutput.bSafetyTopCoverSWCoil1 := p_bSafetyTopCoverSWCoil1;
	tyDOutput.bBypassTopCover1 := p_bBypsCoverSW1;
	tyDOutput.bCoverPBLED1 := p_bCoverPBLED1;
	tyDOutput.bTopCvrUnlckToDS := p_bMachineSafetySigToUS;
	tyDOutput.bTopCvrUnlckToUS := p_bMachineSafetySigToDS;
END_ACTION
