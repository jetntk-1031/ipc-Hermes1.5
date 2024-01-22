(*2020-10-06*)
(**)
(*Action*)

TYPE
	eNtParamAction : 
		(
		NtParamActIdle,
		NtParamActCreateDir,
		NtParamActRead,
		NtParamActWrite,
		NtParamActLoad,
		NtParamActSave
		);
END_TYPE

(**)
(*Data*)

TYPE
	tyNtParam : 	STRUCT 
		tyDISettings : tyDigitalInputSettings := (diSafetyRlySig:=1,diEStopSig:=2,diCoverSWSig:=3,diUBA:=4,diUBAStat:=0,diDSB:=5,diConvLftSen:=7,diConvRgtSen:=8,diPressureSW:=0,diCoatingSen:=0,diThermalPrtSig:=0,diUSWidthChkSen:=0,diDSWidthChkSen:=0,diInvertHomeSen:=9,diInvertRemoteSen:=10,diInShutterOpenRS:=14,diInShutterCloseRS:=13,diOutShutterOpenRS:=16,diOutShutterCloseRS:=15,diClamp2Sen:=19,diClamp3Sen:=20,diClampRS1:=22,diUnClampRS1:=21,diClampRS2:=24,diUnClampRS2:=23,diClampRS3:=26,diUnClampRS3:=25,diUSWidthChkSen1:=0,diCoverSWSig2:=17,diSafetySigFromUS:=29,diSafetySigFromDS:=30,diUnlockCoverSigFromUS:=27,diUnlockCoverSigFromDS:=28,diCoverUnlockPB1:=31,diUBA2:=0,diUBAStat2:=0,diSPARE9:=0,diSPARE10:=0,diSPARE11:=0,diSPARE12:=0);
		tyDOSettings : tyDigitalOutputSettings := (diSafetyRlyRst:=1,diTLRed:=4,diTLAmber:=3,diTLGreen:=2,diTLBlue:=0,diTLWhite:=0,diBuz:=5,diCoatingStprRet:=0,diUSB:=8,diDBA:=9,diDBAStat:=0,diConvMtrCW:=11,diConvMtrCCW:=12,diStprUnblkCtrl:=13,diStprBlkCtrl:=14,diInvertHome:=15,diInvertRemote:=16,diInvertBrake:=17,diMtrPwrRly:=0,diClampControl:=0,diUnclampControl:=0,diInShutterOpenCtrl:=20,diInShutterCloseCtrl:=19,diOutShutterOpenCtrl:=22,diOutShutterCloseCtrl:=21,diClamp1Ctrl:=23,diUnClamp1Ctrl:=24,diClamp2Ctrl:=25,diUnClamp2Ctrl:=26,diClamp3Ctrl:=27,diUnClamp3Ctrl:=28,diTopCvrUnlckToDS:=30,diTopCvrUnlckToUS:=0,diMachineSafetySigToDS:=29,diMachineSafetySigToUS:=0,diCoverPBLED1:=31,diBypassTopCover1:=32,diSafetyTopCoverSWCoil1:=33,diUSB2:=0,diSPARE9:=0,diSPARE10:=0,diSPARE11:=0,diSPARE12:=0);
		bAWPrep : BOOL := TRUE;
		bLFPrep : BOOL := TRUE;
		bLeaderMc : BOOL := FALSE;
		bLFUsrSetPrep : BOOL := TRUE;
		diLFWidthLimit : DINT := 3000;
		bLFProdWidthChk : BOOL := TRUE;
		bLFProdWidth2Prep : BOOL := FALSE;
		bUSWidthChkPrep : BOOL := FALSE;
		bDSWidthChkPrep : BOOL := FALSE;
		bLCSLFPrep : BOOL := FALSE;
		bLCSReqRcpPrep : BOOL := FALSE;
		bLCSManageRcpPrep : BOOL := FALSE;
		bLCSLiveDatPrep : BOOL := FALSE;
		bUSExtSMEMAPrep : BOOL := TRUE;
		bDSExtSMEMAPrep : BOOL := TRUE;
		bVSMEMAPrep : BOOL := TRUE;
		bHermesPrep : BOOL := TRUE;
		bHermesRmtPrep : BOOL := TRUE;
		bUnlockCoverPrep : BOOL := FALSE;
		bUSDSMachineSafetySig : BOOL := FALSE;
		bSSaverPrep : BOOL := TRUE;
		bAutoLogoutPrep : BOOL := TRUE;
		diWidthOffsetInUM : DINT := 0;
		tyUIAWOffset : tyUILmt := (diMax:=2000,diMin:=-2000);
		sJobNo : STRING[30] := '2022-0669Q01';
		usiNtAddr : USINT := 4;
		eProjConvDir : eConvDir := ConvDirLToR;
		bProjCoatingPrep : BOOL := FALSE;
		tComLoadRstTm : TIME := T#1s; (*Common Layer Loading Time*)
		bProjDBAOnRgtSen : BOOL := FALSE;
		bProjClampPrep : BOOL := TRUE;
		eProjClampOption : eClampType := ThreeClampsWithRS;
		bProjStopperPrep : BOOL := TRUE;
		bProjInletShutPrep : BOOL := TRUE;
		bProjOutletShutPrep : BOOL := TRUE;
		bProjBypsInitConvPrep : BOOL := TRUE;
		bProjRlsNewProdPrep : BOOL := FALSE;
		sUsrFolderProgNm : STRING[15] := 'UsrFolder';
		sLibVersionProgNm : STRING[15] := 'LibVer';
		sTimeProgNm : STRING[15] := 'Time';
		sHWInfoProgNm : STRING[15] := 'HWInfo';
		sHWInfoDevice : STRING[3] := 'IF2';
		sAlmProgNm : STRING[15] := 'Alarm';
		tTLChgRcpBlinkTm : TIME := T#500ms;
		tTLErrBlinkTm : TIME := T#500ms;
		tBuzErrOnTm : TIME := T#500ms;
		tBuzErrRestTm : TIME := T#500ms;
		usiBuzErrOnCntr : USINT := 3;
		bBuzErrStopSeqEn : BOOL := FALSE;
		usiBuzErrStopSeqCntr : USINT := 3;
		tTLWarnBlinkTm : TIME := T#500ms;
		tBuzWarnOnTm : TIME := T#500ms;
		tBuzWarnRestTm : TIME := T#5s;
		usiBuzWarnOnCntr : USINT := 3;
		bBuzWarnStopSeqEn : BOOL := FALSE;
		usiBuzWarnStopSeqCntr : USINT := 3;
		tTLWarn1BlinkTm : TIME := T#500ms;
		tBuzWarn1OnTm : TIME := T#500ms;
		tBuzWarn1RestTm : TIME := T#5s;
		usiBuzWarn1OnCntr : USINT := 3;
		bBuzWarn1StopSeqEn : BOOL := FALSE;
		usiBuzWarn1StopSeqCntr : USINT := 3;
		tTLWarn2BlinkTm : TIME := T#500ms;
		tBuzWarn2OnTm : TIME := T#500ms;
		tBuzWarn2RestTm : TIME := T#5s;
		usiBuzWarn2OnCntr : USINT := 3;
		bBuzWarn2StopSeqEn : BOOL := FALSE;
		usiBuzWarn2StopSeqCntr : USINT := 3;
		tTLWarn3BlinkTm : TIME := T#500ms;
		tBuzWarn3OnTm : TIME := T#500ms;
		tBuzWarn3RestTm : TIME := T#5s;
		usiBuzWarn3OnCntr : USINT := 3;
		bBuzWarn3StopSeqEn : BOOL := FALSE;
		usiBuzWarn3StopSeqCntr : USINT := 3;
		tTLWarn4BlinkTm : TIME := T#500ms;
		tBuzWarn4OnTm : TIME := T#500ms;
		tBuzWarn4RestTm : TIME := T#5s;
		usiBuzWarn4OnCntr : USINT := 3;
		bBuzWarn4StopSeqEn : BOOL := FALSE;
		usiBuzWarn4StopSeqCntr : USINT := 3;
		tTLWarn5BlinkTm : TIME := T#500ms;
		tBuzWarn5OnTm : TIME := T#500ms;
		tBuzWarn5RestTm : TIME := T#5s;
		usiBuzWarn5OnCntr : USINT := 3;
		bBuzWarn5StopSeqEn : BOOL := FALSE;
		usiBuzWarn5StopSeqCntr : USINT := 3;
		tBuzAlertOnTm : TIME := T#500ms;
		tBuzAlertRestTm : TIME := T#5s;
		usiBuzAlertOnCntr : USINT := 3;
		bBuzAlertStopSeqEn : BOOL := FALSE;
		usiBuzAlertStopSeqCntr : USINT := 3;
		tTLBlueBlinkTm : TIME := T#500ms;
		tTLAmberBlinkTm : TIME := T#500ms;
		tTLWhiteBlinkTm : TIME := T#500ms;
		tTLRedBlinkTm : TIME := T#500ms;
		tTLGreenBlinkTm : TIME := T#500ms;
		eTLBuzMode : eTLBuzMod := TLBuzModNutek;
		udiAlmFileKeepDay : UDINT := 30;
		sProdRcpProgNm : STRING[15] := 'ProdRcp';
		sProdRcpListFileNm : STRING[80] := 'ProductRecipeList.dat';
		sProdRcpSingleFileNm : STRING[80] := 'ProductRecipe.dat';
		sMpProdRcpProgNm : STRING[15] := 'MpProdRcp';
		sMpProdRcpFileNm : STRING[255] := 'MpProductRecipe.xml';
		sMpProdRcpPVNm : STRING[100] := 'MpProdRcp:a_tyMpProdRcp1';
		sMcParamProgNm : STRING[15] := 'McParam';
		sMcParamFileNm : STRING[80] := 'MachineParameter.dat';
		sUsrMgmtProgNm : STRING[15] := 'UsrMgmt';
		sUSSMEMAProgNm : STRING[15] := 'USSMEMA';
		tUSSMEMARstDlyTm : TIME := T#0s;
		tUSSMEMASigInChkTm : TIME := T#100ms;
		sDSSMEMAProgNm : STRING[15] := 'DSSMEMA';
		tDSSMEMARstDlyTm : TIME := T#0s;
		tDSSMEMASigInChkTm : TIME := T#100ms;
		sConvProgNm : STRING[15] := 'Conv';
		bConvOnDirMod : BOOL := FALSE;
		tConvMtrOffDlyTm : TIME := T#0s;
		diConvFwdDlyTm : DINT := 5000;
		diConvRevDlyTm : DINT := 5000;
		sStopperProgNm : STRING[15] := 'Stopper';
		bStopperTwoCtrlIn : BOOL := TRUE;
		tStopperExtDlyTm : TIME := T#1s;
		tStopperRetDlyTm : TIME := T#1s;
		sClampProgNm : STRING[15] := 'Clamp';
		bClampTwoCtrlIn : BOOL := TRUE;
		tClampExtDlyTm : TIME := T#1s;
		tClampRetDlyTm : TIME := T#1s;
		sInShutterProgNm : STRING[15] := 'Inlet Shutter';
		bInShutterTwoCtrlIn : BOOL := TRUE;
		tInShutterExtTO : TIME := T#20s;
		tInShutterRetTO : TIME := T#20s;
		sOutShutterProgNm : STRING[15] := 'Outlet Shutter';
		bOutShutterTwoCtrlIn : BOOL := TRUE;
		tOutShutterExtTO : TIME := T#20s;
		tOutShutterRetTO : TIME := T#20s;
		sClamp1ProgNm : STRING[15] := 'Clamp1'; (*c*)
		bClamp1TwoCtrlIn : BOOL := TRUE;
		tClamp1ExtTO : TIME := T#20s;
		tClamp1RetTO : TIME := T#20s;
		sClamp2ProgNm : STRING[15] := 'Clamp2';
		bClamp2TwoCtrlIn : BOOL := TRUE;
		tClamp2ExtTO : TIME := T#20s;
		tClamp2RetTO : TIME := T#20s;
		sClamp3ProgNm : STRING[15] := 'Clamp3';
		bClamp3TwoCtrlIn : BOOL := TRUE;
		tClamp3ExtTO : TIME := T#20s;
		tClamp3RetTO : TIME := T#20s;
		diMotorOnDlyTm : DINT := 500;
		diMotorOffDlyTm : DINT := 500;
		diBrakeOnDlyTm : DINT := 0;
		diBrakeOffDlyTm : DINT := 500;
		diTimeOut : DINT := 10000;
		sAWProgNm : STRING[15] := 'AW';
		sAWDevice : STRING[3] := 'IF7';
		usiAWNode : USINT := 16;
		bAWDir : BOOL := FALSE;
		bAWDirBl : BOOL := FALSE;
		diAWPitchInUM : DINT := 3000;
		diAWMovBlDistInUM : DINT := 3000;
		tyAWParamInHm : tyMotionCANParamInHm := (diStartVelInUMPS:=15000,diAcc:=25);
		tyAWParamInConvert : tyMotionCANParamInConvert := (diPitchInUM:=3000,diPulsePerRev:=1280000); (*estun 1048576 *)
		tyAWParam : tyMotionParam := (diAccInMS:=500,diDecInMS:=500,diAutoSpdInUMPS:=15000);
		tyAWTuning : tyMotionCANTuning := (diAsdaA2Inertia:=63,diAsdaA2PosLoopGain:=53,diAsdaA2PosFFGain:=50,diAsdaA2SpdLoopGain:=213,diAsdaA2SpdIntegral:=34,diAsdaA2LowPassFltr:=49,diAsdaA2AntiInterGain:=24,diAsdaA2FirstTorqueCmd:=300,diPronetInertia:=100,diPronetRealTimeAutoAdjSet:=0,diPronetPosLoopGain:=40,diPronetSpdLoopGain:=250,diPronetSpdIntegral:=200,diPronetTorqueFilter:=100,diPronetPosFeedForward:=0,diPronetLowSpeedTestFiltering:=0,diPronetStopMode:=5);
		eAWServoMotorType : eServoMotorType := DeltaAsdaA2; (*Selection of  Motor Brand*)
		sInvertProgNm : STRING[15] := 'Invert';
		sInvertDevice : STRING[3] := 'IF7';
		usiInvertNode : USINT := 17;
		bInvertDir : BOOL := TRUE;
		tyInvertParamInHm : tyMotionCANParamInHm := (diStartVelInUMPS:=25000,diAcc:=25);
		tyInvertParamInConvert : tyMotionCANParamInConvert;
		tyInvertParam : tyMotionParam := (diAccInMS:=500,diDecInMS:=500,diAutoSpdInUMPS:=50000);
		tyInvertTuning : tyMotionCANTuning := (diAsdaA2Inertia:=211,diAsdaA2PosLoopGain:=150,diAsdaA2PosFFGain:=50,diAsdaA2SpdLoopGain:=81,diAsdaA2SpdIntegral:=13,diAsdaA2LowPassFltr:=128,diAsdaA2AntiInterGain:=13,diAsdaA2FirstTorqueCmd:=300);
		eInvertServoMotorType : eServoMotorType := DeltaAsdaA2; (*Selection of  Motor Brand*)
		sDIProgNm : STRING[15] := 'DInput';
		sMcProgNm : STRING[15] := 'Machine';
		sHermesProgNm : STRING[15] := 'Hermes';
		sHermesRetainFileNm : STRING[80] := 'Hermes.dat';
		sHermesConfigFileNm : STRING[80] := 'Hermes.dat';
		sUSHermesProgNm : STRING[15] := 'USHermes';
		udiUSHermesFileKeepDay : UDINT := 7;
		udiUSHermesAliveTmInSec : UDINT := 5;
		tUSHermesConnTO : TIME := T#30s;
		sUSHermes2ProgNm : STRING[15] := 'USHermes';
		udiUSHermes2FileKeepDay : UDINT := 7;
		udiUSHermes2AliveTmInSec : UDINT := 5;
		tUSHermes2ConnTO : TIME := T#30s;
		sDSHermesProgNm : STRING[15] := 'DSHermes';
		udiDSHermesFileKeepDay : UDINT := 7;
		udiDSHermesAliveTmInSec : UDINT := 5;
		tDSHermesConnTO : TIME := T#30s;
		sDSHermes2ProgNm : STRING[15] := 'DSHermes';
		udiDSHermes2FileKeepDay : UDINT := 7;
		udiDSHermes2AliveTmInSec : UDINT := 5;
		tDSHermes2ConnTO : TIME := T#30s;
		sRmtHermesProgNm : STRING[15] := 'RmtHermes';
		sRmtHermesConfigFileNm : STRING[80] := 'RmtHermes.dat';
		udiRmtHermesFileKeepDay : UDINT := 7;
		udiRmtHermesAliveTmInSec : UDINT := 5;
		udiRmtHermesSndBffrSize : UDINT := 65536;
		udiRmtHermesRcvBffrSize : UDINT := 65536;
		sOpsAWProgNm : STRING[15] := 'OpsAW';
		sOpsInitConvProgNm : STRING[15] := 'Ops InitConv';
		sOpsInitPneuProgNm : STRING[15] := 'Ops InitPneu';
		sOpsConvProgNm : STRING[15] := 'Ops Conv';
		sOpsPneuProgNm : STRING[15] := 'Ops Pneu';
		sConvBffrProgNm : STRING[15] := 'ConvBuffer';
		sConvBffrFileNm : STRING[80] := 'ConvBuffer.dat';
		iConvBffrIdx : INT := 1;
		sLFLeaderProgNm : STRING[15] := 'Leader';
		tLFLeaderOnlineChkDlyTm : TIME := T#30s;
		tLFLeaderSetTmOffDlyTm : TIME := T#10s;
		sLFFollowerProgNm : STRING[15] := 'Follower';
		sFollower1ProgNm : STRING[15] := 'Follower1';
		tLFFollowerOnlineChkDlyTm : TIME := T#30s;
		sLCSProgNm : STRING[15] := 'LCS';
		sLCSMngRcpProgNm : STRING[15] := 'LCSMngRcp';
		sLCSLFProgNm : STRING[15] := 'LCSLF';
		tyProdRcpWidthLmt : tyUILmt := (diMax:=460000,diMin:=50000);
		tyProdRcpMcModLmt : tyUILmt := (diMax:=3,diMin:=0);
		tyProdRcpFlippedBrdLmt : tyUILmt := (diMax:=2,diMin:=0);
		tyUISSaverTm : tyUILmt := (diMax:=1800,diMin:=10);
		tyUIConvInitTm : tyUILmt := (diMax:=60000,diMin:=5000);
		tyUITranInErrDlyTm : tyUILmt := (diMax:=120000,diMin:=1000);
		tyUITranOutErrDlyTm : tyUILmt := (diMax:=120000,diMin:=1000);
		tyUIHermesSndAliveTm : tyUILmt := (diMax:=1800000,diMin:=5000);
		tyUIHermesLnID : tyUILmt := (diMax:=1000,diMin:=1);
		tyUIAntiGapSenOnTm : tyUILmt := (diMax:=5000,diMin:=0);
		tyUIAntiGapSenOffTm : tyUILmt := (diMax:=5000,diMin:=0);
		tyUILFIndexBeforeOven : tyUILmt := (diMax:=50,diMin:=1);
		tyUILFIndexAfterOven : tyUILmt := (diMax:=50,diMin:=1);
		tyUIAWTargetPos : tyUILmt := (diMax:=460000,diMin:=-3000);
		tyUIAWStepSize : tyUILmt := (diMax:=460000,diMin:=-460000);
		tyUIAWNomSpd : tyUILmt := (diMax:=15000,diMin:=5000);
		tyUIAWSlwSpd : tyUILmt := (diMax:=15000,diMin:=5000);
		tyUIInvertTargetPos : tyUILmt := (diMax:=110000,diMin:=-15000);
		tyUIInvertStepSize : tyUILmt := (diMax:=110000,diMin:=-110000);
		tyUIInvertNomSpd : tyUILmt := (diMax:=100000,diMin:=5000);
		tyUIInvertSlwSpd : tyUILmt := (diMax:=100000,diMin:=5000);
		tyUIHermesHostPort : tyUILmt := (diMax:=65535,diMin:=0);
		tyUIHermesSvrPort : tyUILmt := (diMax:=65535,diMin:=0);
		tyUIAutoLogoutTm : tyUILmt := (diMax:=1800000,diMin:=60000);
		tyNetworkMode : tyUILmt := (diMax:=1,diMin:=0);
		bUIConvDirRL : BOOL := FALSE;
		sMpNtParamFileNm : STRING[255] := 'NutekParameter.xml';
		sMpNtParamPVNm : STRING[100] := 'NtParam:tyMpNtParamCurr1';
		sUIDefaultLoginNm : STRING[30] := '';
		sUIDefaultLoginPw : STRING[30] := '';
		bProjInvertOncePrep : BOOL := TRUE;
		bProjInvertTwicePrep : BOOL := TRUE;
		bUSExtSMEMA2Prep : BOOL := TRUE;
		sUSSMEMA2ProgNm : STRING[15] := 'USSMEMA2';
		tUSSMEMA2RstDlyTm : TIME := T#0s;
		tUSSMEMA2SigInChkTm : TIME := T#100ms;
		eProjRtrnBrdConvDir : eConvDir := ConvDirRToR;
		bChinesePrep : BOOL := FALSE;
		bGemanPrep : BOOL := FALSE;
		bHermesSvyPrep : BOOL := TRUE; (*Supervisory Hermes Preparation*)
		bHermesSvyFirstMcInTheLine : BOOL := FALSE; (*Turn On this for Loader / Destacker Only. Other type of machine turns off.*)
		bHermesSvyQueryBoardInfo : BOOL := FALSE;
		sDSHermesRetainFileNm : STRING[80] := 'BoardData.dat';
		iInput : INT;
		iOutput : INT;
		sSvyHermesProgNm : STRING[15] := 'SvyHermes';
		sSvyHermesConfigFileNm : STRING[80] := 'SvyHermes.dat';
		udiSvyHermesFileKeepDay : UDINT := 30;
		udiSvyHermesAliveTmInSec : UDINT := 5;
		tSvyHermesConnTO : TIME := T#30s;
		sSvyHermesRetainFileNm : STRING[80] := 'WorkOrder.dat';
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUILmt : 	STRUCT 
		diMax : DINT;
		diMin : DINT;
	END_STRUCT;
END_TYPE
