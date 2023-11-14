(** 2020-10-08 **)
ACTION Act_Background:
	
	//Digital Input Mapping With Physical Input
	IF p_tyDISettings.diSafetyRlySig > 0 AND p_tyDISettings.diSafetyRlySig <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bSafetyRlySig	:= a_bPhysicalDI[p_tyDISettings.diSafetyRlySig];
	ELSE
		tyDInput.bSafetyRlySig	:= TRUE;
	END_IF
	
	IF p_tyDISettings.diEStopSig > 0 AND p_tyDISettings.diEStopSig <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bEStopSig	:= a_bPhysicalDI[p_tyDISettings.diEStopSig];
	ELSE
		tyDInput.bEStopSig	:= TRUE;
	END_IF
	
	IF p_tyDISettings.diCoverSWSig > 0 AND p_tyDISettings.diCoverSWSig <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bCoverSWSig	:= a_bPhysicalDI[p_tyDISettings.diCoverSWSig];
	ELSE
		tyDInput.bCoverSWSig	:= TRUE;
	END_IF
	
	IF p_tyDISettings.diUBA > 0 AND p_tyDISettings.diUBA <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUBA	:= a_bPhysicalDI[p_tyDISettings.diUBA];
	ELSE
		tyDInput.bUBA	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diUBAStat > 0 AND p_tyDISettings.diUBAStat <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUBAStat	:= a_bPhysicalDI[p_tyDISettings.diUBAStat];
	ELSE
		tyDInput.bUBAStat	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diDSB > 0 AND p_tyDISettings.diDSB <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bDSB	:= a_bPhysicalDI[p_tyDISettings.diDSB];
	ELSE
		tyDInput.bDSB	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diUBA2 > 0 AND p_tyDISettings.diUBA2 <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUBA2	:= a_bPhysicalDI[p_tyDISettings.diUBA2];
	ELSE
		tyDInput.bUBA2	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diUBAStat2 > 0 AND p_tyDISettings.diUBAStat2 <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUBAStat2	:= a_bPhysicalDI[p_tyDISettings.diUBAStat2];
	ELSE
		tyDInput.bUBAStat2	:= FALSE;
	END_IF
		
	IF p_tyDISettings.diConvLftSen > 0 AND p_tyDISettings.diConvLftSen <= UDINT_TO_DINT(p_udiMax) THEN
		//Digital Input Filter
		fbConvLftSigFltr.tSigOnFltrTm	:= DINT_TO_TIME(p_diConvLftSenOnTm);
		fbConvLftSigFltr.tSigOffFltrTm	:= DINT_TO_TIME(p_diConvLftSenOffTm);
		fbConvLftSigFltr(bSigIn := a_bPhysicalDI[p_tyDISettings.diConvLftSen]);
		tyDInput.bConvLftSen	:= fbConvLftSigFltr.bSigOut;
	ELSE
		tyDInput.bConvLftSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diConvRgtSen > 0 AND p_tyDISettings.diConvRgtSen <= UDINT_TO_DINT(p_udiMax) THEN
		//Digital Input Filter
		fbConvRgtSigFltr.tSigOnFltrTm	:= DINT_TO_TIME(p_diConvRgtSenOnTm);
		fbConvRgtSigFltr.tSigOffFltrTm	:= DINT_TO_TIME(p_diConvRgtSenOffTm);
		fbConvRgtSigFltr(bSigIn := a_bPhysicalDI[p_tyDISettings.diConvRgtSen]);
		tyDInput.bConvRgtSen	:= fbConvRgtSigFltr.bSigOut;
	ELSE
		tyDInput.bConvRgtSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diThermalPrtSig > 0 AND p_tyDISettings.diThermalPrtSig <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bThermalPrtSig	:= a_bPhysicalDI[p_tyDISettings.diThermalPrtSig];
	ELSE
		tyDInput.bThermalPrtSig	:= TRUE;
	END_IF
	
	IF p_tyDISettings.diUSWidthChkSen > 0 AND p_tyDISettings.diUSWidthChkSen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUSWidthChkSen	:= a_bPhysicalDI[p_tyDISettings.diUSWidthChkSen];
	ELSE
		tyDInput.bUSWidthChkSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diDSWidthChkSen > 0 AND p_tyDISettings.diDSWidthChkSen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bDSWidthChkSen	:= a_bPhysicalDI[p_tyDISettings.diDSWidthChkSen];
	ELSE
		tyDInput.bDSWidthChkSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diInvertHomeSen > 0 AND p_tyDISettings.diInvertHomeSen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bInvertHomeSen	:= a_bPhysicalDI[p_tyDISettings.diInvertHomeSen];
	ELSE
		tyDInput.bInvertHomeSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diInvertRemoteSen > 0 AND p_tyDISettings.diInvertRemoteSen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bInvertRemoteSen	:= a_bPhysicalDI[p_tyDISettings.diInvertRemoteSen];
	ELSE
		tyDInput.bInvertRemoteSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diCoatingSen > 0 AND p_tyDISettings.diCoatingSen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bCoatingSen	:= a_bPhysicalDI[p_tyDISettings.diCoatingSen];
	ELSE
		tyDInput.bCoatingSen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diInShutterCloseRS > 0 AND p_tyDISettings.diInShutterCloseRS <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bInShutterCloseRS	:= a_bPhysicalDI[p_tyDISettings.diInShutterCloseRS];
	ELSE
		tyDInput.bInShutterCloseRS	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diInShutterOpenRS > 0 AND p_tyDISettings.diInShutterOpenRS <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bInShutterOpenRS	:= a_bPhysicalDI[p_tyDISettings.diInShutterOpenRS];
	ELSE
		tyDInput.bInShutterOpenRS	:= FALSE;
	END_IF

	IF p_tyDISettings.diOutShutterCloseRS > 0 AND p_tyDISettings.diOutShutterCloseRS <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bOutShutterCloseRS	:= a_bPhysicalDI[p_tyDISettings.diOutShutterCloseRS];
	ELSE
		tyDInput.bOutShutterCloseRS	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diOutShutterOpenRS > 0 AND p_tyDISettings.diOutShutterOpenRS <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bOutShutterOpenRS	:= a_bPhysicalDI[p_tyDISettings.diOutShutterOpenRS];
	ELSE
		tyDInput.bOutShutterOpenRS	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diClamp2Sen > 0 AND p_tyDISettings.diClamp2Sen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bClamp2Sen	:= a_bPhysicalDI[p_tyDISettings.diClamp2Sen];
	ELSE
		tyDInput.bClamp2Sen	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diClamp3Sen > 0 AND p_tyDISettings.diClamp3Sen <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bClamp3Sen	:= a_bPhysicalDI[p_tyDISettings.diClamp3Sen];
	ELSE
		tyDInput.bClamp3Sen	:= FALSE;
	END_IF		
	
	IF p_tyDISettings.diClampRS1 > 0 AND p_tyDISettings.diClampRS1 <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bClampRS1	:= a_bPhysicalDI[p_tyDISettings.diClampRS1];
	ELSE
		tyDInput.bClampRS1	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diUnClampRS1 > 0 AND p_tyDISettings.diUnClampRS1 <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUnClampRS1	:= a_bPhysicalDI[p_tyDISettings.diUnClampRS1];
	ELSE
		tyDInput.bUnClampRS1	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diClampRS2> 0 AND p_tyDISettings.diClampRS2<= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bClampRS2	:= a_bPhysicalDI[p_tyDISettings.diClampRS2];
	ELSE
		tyDInput.bClampRS2	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diUnClampRS2> 0 AND p_tyDISettings.diUnClampRS2<= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUnClampRS2	:= a_bPhysicalDI[p_tyDISettings.diUnClampRS2];
	ELSE
		tyDInput.bUnClampRS2	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diClampRS3> 0 AND p_tyDISettings.diClampRS3<= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bClampRS3	:= a_bPhysicalDI[p_tyDISettings.diClampRS3];
	ELSE
		tyDInput.bClampRS3	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diUnClampRS3> 0 AND p_tyDISettings.diUnClampRS3<= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUnClampRS3	:= a_bPhysicalDI[p_tyDISettings.diUnClampRS3];
	ELSE
		tyDInput.bUnClampRS3	:= FALSE;
	END_IF
	
	IF p_tyDISettings.diPressureSW > 0 AND p_tyDISettings.diPressureSW <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bPressureSW	:= a_bPhysicalDI[p_tyDISettings.diPressureSW];
	ELSE
		tyDInput.bPressureSW	:= FALSE;
	END_IF
		
	IF p_tyDISettings.diUSWidthChkSen1 > 0 AND p_tyDISettings.diUSWidthChkSen1 <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bUSWidthChkSen1	:= a_bPhysicalDI[p_tyDISettings.diUSWidthChkSen1];
	ELSE
		tyDInput.bUSWidthChkSen1	:= FALSE;
	END_IF

	// ADD
	IF p_tyDISettings.diCoverSWSig2 > 0 AND p_tyDISettings.diCoverSWSig2 <= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bCoverSWSig2	:= a_bPhysicalDI[p_tyDISettings.diCoverSWSig2];
	ELSE
		tyDInput.bCoverSWSig2	:= FALSE;
	END_IF
	
	IF p_bHermesUSCmdFeaturePause THEN
		tyDInput.bSafetySigFromUS	:= p_tyHermesUSCmdPause.bMachineSafetySigFrom;
	ELSIF (p_tyDISettings.diSafetySigFromUS> 0 AND p_tyDISettings.diSafetySigFromUS<= UDINT_TO_DINT(p_udiMax)) THEN
		tyDInput.bSafetySigFromUS	:= a_bPhysicalDI[p_tyDISettings.diSafetySigFromUS];
	ELSE
		tyDInput.bSafetySigFromUS	:= FALSE;
	END_IF
	
	IF p_bHermesUSCmdFeaturePause THEN
		tyDInput.bUnlockCoverSigFromUS	:= p_tyHermesUSCmdPause.bUnlockCoverSigFrom;
	ELSIF (p_tyDISettings.diUnlockCoverSigFromUS> 0 AND p_tyDISettings.diUnlockCoverSigFromUS<= UDINT_TO_DINT(p_udiMax)) THEN
		tyDInput.bUnlockCoverSigFromUS	:= a_bPhysicalDI[p_tyDISettings.diUnlockCoverSigFromUS];
	ELSE
		tyDInput.bUnlockCoverSigFromUS	:= FALSE;
	END_IF
	
	
	IF p_bHermesDSCmdFeaturePause THEN 
		tyDInput.bSafetySigFromDS	:= p_tyHermesDSCmdPause.bMachineSafetySigFrom;
	ELSIF (p_tyDISettings.diSafetySigFromDS> 0 AND p_tyDISettings.diSafetySigFromDS<= UDINT_TO_DINT(p_udiMax)) THEN
		tyDInput.bSafetySigFromDS	:= a_bPhysicalDI[p_tyDISettings.diSafetySigFromDS];
	ELSE
		tyDInput.bSafetySigFromDS	:= FALSE;
	END_IF
	
	IF p_bHermesDSCmdFeaturePause THEN
		tyDInput.bUnlockCoverSigFromDS	:= p_tyHermesDSCmdPause.bUnlockCoverSigFrom;		
	ELSIF (p_tyDISettings.diUnlockCoverSigFromDS> 0 AND p_tyDISettings.diUnlockCoverSigFromDS<= UDINT_TO_DINT(p_udiMax))  THEN 
		tyDInput.bUnlockCoverSigFromDS	:= a_bPhysicalDI[p_tyDISettings.diUnlockCoverSigFromDS];
	ELSE
		tyDInput.bUnlockCoverSigFromDS	:= FALSE;
	END_IF
	
	
	IF p_tyDISettings.diCoverUnlockPB1> 0 AND p_tyDISettings.diCoverUnlockPB1<= UDINT_TO_DINT(p_udiMax) THEN
		tyDInput.bCoverUnlockPB1	:= a_bPhysicalDI[p_tyDISettings.diCoverUnlockPB1];
	ELSE
		tyDInput.bCoverUnlockPB1	:= FALSE;
	END_IF	
	
	//For Simulation Only
	IF DiagCpuIsSimulated() = TRUE THEN
		tyDInput.bSafetyRlySig	:= TRUE;
		tyDInput.bEStopSig		:= TRUE;
		tyDInput.bCoverSWSig	:= TRUE;
		tyDInput.bThermalPrtSig	:= TRUE;
		tyDInput.bPressureSW	:= TRUE;
	END_IF
	//Estop
	IF (tyDInput.bEStopSig = FALSE) AND (eStatus1 <> Error) THEN
		eStatus1	:= Error;
		udiStatus1	:= 10000;	//Emergency Stop Button Pressed
	END_IF
	
	//Cover Switch
	IF (tyDInput.bCoverSWSig = FALSE) AND (eStatus2 <> Error) THEN
		eStatus2	:= Error;
		udiStatus2	:= 10001;	//Door / Conver Opened
	END_IF

	IF p_bLinkStartupRun THEN
		fbSafetyRlyRstTm(IN := NOT(p_bRstErrSafetyRlyRst));
		IF (tyDInput.bSafetyRlySig = FALSE) AND fbSafetyRlyRstTm.Q THEN
			bSafetySigErrNoBuz	:= TRUE;
		END_IF	
	ELSIF bSafetySigErrNoBuz = FALSE THEN	
		fbSafetyRlyRstTm(IN := NOT(p_bRstErrSafetyRlyRst));
		IF (tyDInput.bSafetyRlySig = FALSE) AND (eStatus2<>Error AND eStatus1<>Error) AND fbSafetyRlyRstTm.Q AND tyDInput.bEStopSig AND tyDInput.bCoverSWSig THEN
			eStatus2	:= Error;
			udiStatus2	:= 10002; //Safety Relay Signal is Off
		END_IF
	END_IF

	//Reset Error
	IF (eStatus1 = Error) AND bRstErr THEN
		eStatus1	:= Idle;
		udiStatus1	:= 0;
	END_IF
	
	IF (eStatus2 = Error) AND bRstErr THEN
		eStatus2	:= Idle;
		udiStatus2	:= 0;
	END_IF
	
	IF bRstErr AND bSafetySigErrNoBuz THEN	
		bSafetySigErrNoBuz	:= FALSE;
	END_IF
	
//	fbSafetyRlyRstTm (IN := NOT(p_bRstErrSafetyRlyRst));
//	IF (tyDInput.bSafetyRlySig = FALSE) AND (eStatus2 <> Error) AND fbSafetyRlyRstTm.Q AND tyDInput.bEStopSig AND tyDInput.bCoverSWSig THEN
//		eStatus2 := Error;
//		udiStatus2 := 10002; 
//	END_IF 
	
END_ACTION
