(** 2020-10-06 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_NtParamStat		:= ADR(eStat);
	p_NtParamStatus		:= ADR(eStatus);
	p_NtParamStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_NtParamAlmData	:= ADR(tyAlmData);
	
	//Output
	p_NtParamFileNotFound			:= ADR(bFileNotFound);
	
	p_NtParamCurr					:= ADR(tyNtParamCurr);
	p_NtParamDISettings				:= ADR(tyNtParamCurr.tyDISettings);
	p_NtParamDOSettings				:= ADR(tyNtParamCurr.tyDOSettings);
	p_NtParamAWPrep					:= ADR(tyNtParamCurr.bAWPrep);
	p_NtParamLFPrep					:= ADR(tyNtParamCurr.bLFPrep);
	p_NtParamLeaderMc				:= ADR(tyNtParamCurr.bLeaderMc);
	p_NtParamLFUsrSetPrep			:= ADR(tyNtParamCurr.bLFUsrSetPrep);
	p_NtParamLFWidthLimit			:= ADR(tyNtParamCurr.diLFWidthLimit);
	p_NtParamLFProdWidthChk			:= ADR(tyNtParamCurr.bLFProdWidthChk);
	p_NtParamUSWidthChkPrep			:= ADR(tyNtParamCurr.bUSWidthChkPrep);
	p_NtParamDSWidthChkPrep			:= ADR(tyNtParamCurr.bDSWidthChkPrep);
	p_NtParamLCSLFPrep				:= ADR(tyNtParamCurr.bLCSLFPrep);
	p_NtParamLCSReqRcpPrep			:= ADR(tyNtParamCurr.bLCSReqRcpPrep);
	p_NtParamLCSManageRcpPrep		:= ADR(tyNtParamCurr.bLCSManageRcpPrep);
	p_NtParamLCSLiveDatPrep			:= ADR(tyNtParamCurr.bLCSLiveDatPrep);
	p_NtParamUSExtSMEMAPrep			:= ADR(tyNtParamCurr.bUSExtSMEMAPrep);
	p_NtParamDSExtSMEMAPrep			:= ADR(tyNtParamCurr.bDSExtSMEMAPrep);
	p_NtParamVSMEMAPrep				:= ADR(tyNtParamCurr.bVSMEMAPrep);
	p_NtParamHermesPrep				:= ADR(tyNtParamCurr.bHermesPrep);
	p_NtParamHermesRmtPrep			:= ADR(tyNtParamCurr.bHermesRmtPrep);
	p_NtParamSSaverPrep				:= ADR(tyNtParamCurr.bSSaverPrep);
	p_NtParamWidthOffset			:= ADR(tyNtParamCurr.diWidthOffsetInUM);
	p_NtParamJobNo					:= ADR(tyNtParamCurr.sJobNo);
	p_NtParamNtAddr					:= ADR(tyNtParamCurr.usiNtAddr);
	
	p_NtParamProjConvDir			:= ADR(tyNtParamCurr.eProjConvDir);
	p_NtParamProjBypsInitConvPrep	:= ADR(tyNtParamCurr.bProjBypsInitConvPrep);
	p_NtParamProjCoatingPrep		:= ADR(tyNtParamCurr.bProjCoatingPrep);
	p_NtParamProjStopperPrep		:= ADR(tyNtParamCurr.bProjStopperPrep);
	p_NtParamProjClampPrep			:= ADR(tyNtParamCurr.bProjClampPrep);
	p_NtParamProjClampOption		:= ADR(tyNtParamCurr.eProjClampOption);
	p_NtParamProjInletShutPrep		:= ADR(tyNtParamCurr.bProjInletShutPrep);
	p_NtParamProjOutletShutPrep		:= ADR(tyNtParamCurr.bProjOutletShutPrep);
	p_NtParamProjRlsNewProdPrep		:= ADR(tyNtParamCurr.bProjRlsNewProdPrep);
	
	p_NtParamUsrFolderProgNm		:= ADR(tyNtParamCurr.sUsrFolderProgNm);
	
	p_NtParamLibVersionProgNm		:= ADR(tyNtParamCurr.sLibVersionProgNm);
	
	p_NtParamTimeProgNm				:= ADR(tyNtParamCurr.sTimeProgNm);
	
	p_NtParamHWInfoProgNm			:= ADR(tyNtParamCurr.sHWInfoProgNm);
	p_NtParamHWInfoDevice			:= ADR(tyNtParamCurr.sHWInfoDevice);
	
	p_NtParamTLChgRcpBlinkTm		:= ADR(tyNtParamCurr.tTLChgRcpBlinkTm);
	
	p_NtParamTLErrBlinkTm			:= ADR(tyNtParamCurr.tTLErrBlinkTm);
	p_NtParamBuzErrOnTm				:= ADR(tyNtParamCurr.tBuzErrOnTm);
	p_NtParamBuzErrRestTm			:= ADR(tyNtParamCurr.tBuzErrRestTm);
	p_NtParamBuzErrOnCntr			:= ADR(tyNtParamCurr.usiBuzErrOnCntr);
	p_NtParamBuzErrStopSeqEn		:= ADR(tyNtParamCurr.bBuzErrStopSeqEn);
	p_NtParamBuzErrStopSeqCntr		:= ADR(tyNtParamCurr.usiBuzErrStopSeqCntr);
	
	p_NtParamTLWarnBlinkTm			:= ADR(tyNtParamCurr.tTLWarnBlinkTm);
	p_NtParamBuzWarnOnTm			:= ADR(tyNtParamCurr.tBuzWarnOnTm);
	p_NtParamBuzWarnRestTm			:= ADR(tyNtParamCurr.tBuzWarnRestTm);
	p_NtParamBuzWarnOnCntr			:= ADR(tyNtParamCurr.usiBuzWarnOnCntr);
	p_NtParamBuzWarnStopSeqEn		:= ADR(tyNtParamCurr.bBuzWarnStopSeqEn);
	p_NtParamBuzWarnStopSeqCntr		:= ADR(tyNtParamCurr.usiBuzWarnStopSeqCntr);
	
	p_NtParamTLWarn1BlinkTm			:= ADR(tyNtParamCurr.tTLWarn1BlinkTm);
	p_NtParamBuzWarn1OnTm			:= ADR(tyNtParamCurr.tBuzWarn1OnTm);
	p_NtParamBuzWarn1RestTm			:= ADR(tyNtParamCurr.tBuzWarn1RestTm);
	p_NtParamBuzWarn1OnCntr			:= ADR(tyNtParamCurr.usiBuzWarn1OnCntr);
	p_NtParamBuzWarn1StopSeqEn		:= ADR(tyNtParamCurr.bBuzWarn1StopSeqEn);
	p_NtParamBuzWarn1StopSeqCntr	:= ADR(tyNtParamCurr.usiBuzWarn1StopSeqCntr);
	
	p_NtParamTLWarn2BlinkTm			:= ADR(tyNtParamCurr.tTLWarn2BlinkTm);
	p_NtParamBuzWarn2OnTm			:= ADR(tyNtParamCurr.tBuzWarn2OnTm);
	p_NtParamBuzWarn2RestTm			:= ADR(tyNtParamCurr.tBuzWarn2RestTm);
	p_NtParamBuzWarn2OnCntr			:= ADR(tyNtParamCurr.usiBuzWarn2OnCntr);
	p_NtParamBuzWarn2StopSeqEn		:= ADR(tyNtParamCurr.bBuzWarn2StopSeqEn);
	p_NtParamBuzWarn2StopSeqCntr	:= ADR(tyNtParamCurr.usiBuzWarn2StopSeqCntr);
	
	p_NtParamTLWarn3BlinkTm			:= ADR(tyNtParamCurr.tTLWarn3BlinkTm);
	p_NtParamBuzWarn3OnTm			:= ADR(tyNtParamCurr.tBuzWarn3OnTm);
	p_NtParamBuzWarn3RestTm			:= ADR(tyNtParamCurr.tBuzWarn3RestTm);
	p_NtParamBuzWarn3OnCntr			:= ADR(tyNtParamCurr.usiBuzWarn3OnCntr);
	p_NtParamBuzWarn3StopSeqEn		:= ADR(tyNtParamCurr.bBuzWarn3StopSeqEn);
	p_NtParamBuzWarn3StopSeqCntr	:= ADR(tyNtParamCurr.usiBuzWarn3StopSeqCntr);
	
	p_NtParamTLWarn4BlinkTm			:= ADR(tyNtParamCurr.tTLWarn4BlinkTm);
	p_NtParamBuzWarn4OnTm			:= ADR(tyNtParamCurr.tBuzWarn4OnTm);
	p_NtParamBuzWarn4RestTm			:= ADR(tyNtParamCurr.tBuzWarn4RestTm);
	p_NtParamBuzWarn4OnCntr			:= ADR(tyNtParamCurr.usiBuzWarn4OnCntr);
	p_NtParamBuzWarn4StopSeqEn		:= ADR(tyNtParamCurr.bBuzWarn4StopSeqEn);
	p_NtParamBuzWarn4StopSeqCntr	:= ADR(tyNtParamCurr.usiBuzWarn4StopSeqCntr);
	
	p_NtParamTLWarn5BlinkTm			:= ADR(tyNtParamCurr.tTLWarn5BlinkTm);
	p_NtParamBuzWarn5OnTm			:= ADR(tyNtParamCurr.tBuzWarn5OnTm);
	p_NtParamBuzWarn5RestTm			:= ADR(tyNtParamCurr.tBuzWarn5RestTm);
	p_NtParamBuzWarn5OnCntr			:= ADR(tyNtParamCurr.usiBuzWarn5OnCntr);
	p_NtParamBuzWarn5StopSeqEn		:= ADR(tyNtParamCurr.bBuzWarn5StopSeqEn);
	p_NtParamBuzWarn5StopSeqCntr	:= ADR(tyNtParamCurr.usiBuzWarn5StopSeqCntr);
	
	p_NtParamBuzAlertOnTm			:= ADR(tyNtParamCurr.tBuzAlertOnTm);
	p_NtParamBuzAlertRestTm			:= ADR(tyNtParamCurr.tBuzAlertRestTm);
	p_NtParamBuzAlertOnCntr			:= ADR(tyNtParamCurr.usiBuzAlertOnCntr);
	p_NtParamBuzAlertStopSeqEn		:= ADR(tyNtParamCurr.bBuzAlertStopSeqEn);
	p_NtParamBuzAlertStopSeqCntr	:= ADR(tyNtParamCurr.usiBuzAlertStopSeqCntr);
	
	p_NtParamTLBlueBlinkTm			:= ADR(tyNtParamCurr.tTLBlueBlinkTm);
	p_NtParamTLAmberBlinkTm			:= ADR(tyNtParamCurr.tTLAmberBlinkTm);
	p_NtParamTLWhiteBlinkTm			:= ADR(tyNtParamCurr.tTLWhiteBlinkTm);
	p_NtParamTLRedBlinkTm			:= ADR(tyNtParamCurr.tTLRedBlinkTm);
	p_NtParamTLGreenBlinkTm			:= ADR(tyNtParamCurr.tTLGreenBlinkTm);

	p_NtParamTLBuzMode				:= ADR(tyNtParamCurr.eTLBuzMode);
	
	p_NtParamAlmProgNm				:= ADR(tyNtParamCurr.sAlmProgNm);
	p_NtParamAlmFileKeepDay			:= ADR(tyNtParamCurr.udiAlmFileKeepDay);
	
	p_NtParamProdRcpProgNm			:= ADR(tyNtParamCurr.sProdRcpProgNm);
	p_NtParamProdRcpListFileNm		:= ADR(tyNtParamCurr.sProdRcpListFileNm);
	p_NtParamProdRcpSingleFileNm	:= ADR(tyNtParamCurr.sProdRcpSingleFileNm);
	
	p_NtParamMpProdRcpProgNm		:= ADR(tyNtParamCurr.sMpProdRcpProgNm);
	p_NtParamMpProdRcpFileNm		:= ADR(tyNtParamCurr.sMpProdRcpFileNm);
	p_NtParamMpProdRcpPVNm			:= ADR(tyNtParamCurr.sMpProdRcpPVNm);
	
	p_NtParamMcParamProgNm			:= ADR(tyNtParamCurr.sMcParamProgNm);
	p_NtParamMcParamFileNm			:= ADR(tyNtParamCurr.sMcParamFileNm);
	
	p_NtParamUsrMgmtProgNm			:= ADR(tyNtParamCurr.sUsrMgmtProgNm);
	
	p_NtParamUSSMEMAProgNm			:= ADR(tyNtParamCurr.sUSSMEMAProgNm);
	p_NtParamUSSMEMARstDlyTm		:= ADR(tyNtParamCurr.tUSSMEMARstDlyTm);
	p_NtParamUSSMEMASigInChkTm		:= ADR(tyNtParamCurr.tUSSMEMASigInChkTm);
	
	p_NtParamDSSMEMAProgNm			:= ADR(tyNtParamCurr.sDSSMEMAProgNm);
	p_NtParamDSSMEMARstDlyTm		:= ADR(tyNtParamCurr.tDSSMEMARstDlyTm);
	p_NtParamDSSMEMASigInChkTm		:= ADR(tyNtParamCurr.tDSSMEMASigInChkTm);
				
	p_NtParamConvProgNm				:= ADR(tyNtParamCurr.sConvProgNm);
	p_NtParamConvOnDirMod			:= ADR(tyNtParamCurr.bConvOnDirMod);
	p_NtParamConvMtrOffDlyTm		:= ADR(tyNtParamCurr.tConvMtrOffDlyTm);
	p_NtParamConvFwdDlyTm			:= ADR(tyNtParamCurr.diConvFwdDlyTm);
	p_NtParamConvRevDlyTm			:= ADR(tyNtParamCurr.diConvRevDlyTm);
	
	p_NtParamStopperProgNm			:= ADR(tyNtParamCurr.sStopperProgNm);
	p_NtParamStopperTwoCtrlIn		:= ADR(tyNtParamCurr.bStopperTwoCtrlIn);
	p_NtParamStopperExtDlyTm		:= ADR(tyNtParamCurr.tStopperExtDlyTm);
	p_NtParamStopperRetDlyTm		:= ADR(tyNtParamCurr.tStopperRetDlyTm);
	
	p_NtParamClampProgNm			:= ADR(tyNtParamCurr.sClampProgNm);
	p_NtParamClampTwoCtrlIn			:= ADR(tyNtParamCurr.bClampTwoCtrlIn);
	p_NtParamClampExtDlyTm			:= ADR(tyNtParamCurr.tClampExtDlyTm);
	p_NtParamClampRetDlyTm			:= ADR(tyNtParamCurr.tClampRetDlyTm);
	
	p_NtParamInShutterProgNm		:= ADR(tyNtParamCurr.sInShutterProgNm);
	p_NtParamInShutterTwoCtrlIn		:= ADR(tyNtParamCurr.bInShutterTwoCtrlIn);
	p_NtParamInShutterExtTO			:= ADR(tyNtParamCurr.tInShutterExtTO);
	p_NtParamInShutterRetTO			:= ADR(tyNtParamCurr.tInShutterRetTO);
	
	p_NtParamOutShutterProgNm		:= ADR(tyNtParamCurr.sOutShutterProgNm);
	p_NtParamOutShutterTwoCtrlIn	:= ADR(tyNtParamCurr.bOutShutterTwoCtrlIn);
	p_NtParamOutShutterExtTO		:= ADR(tyNtParamCurr.tOutShutterExtTO);
	p_NtParamOutShutterRetTO		:= ADR(tyNtParamCurr.tOutShutterRetTO);
	
	p_NtParamClamp1ProgNm			:= ADR(tyNtParamCurr.sClamp1ProgNm);
	p_NtParamClamp1TwoCtrlIn		:= ADR(tyNtParamCurr.bClamp1TwoCtrlIn);
	p_NtParamClamp1ExtTO			:= ADR(tyNtParamCurr.tClamp1ExtTO);
	p_NtParamClamp1RetTO			:= ADR(tyNtParamCurr.tClamp1RetTO);

	p_NtParamClamp2ProgNm			:= ADR(tyNtParamCurr.sClamp2ProgNm);
	p_NtParamClamp2TwoCtrlIn		:= ADR(tyNtParamCurr.bClamp2TwoCtrlIn);
	p_NtParamClamp2ExtTO			:= ADR(tyNtParamCurr.tClamp2ExtTO);
	p_NtParamClamp2RetTO			:= ADR(tyNtParamCurr.tClamp2RetTO);
	
	p_NtParamClamp3ProgNm			:= ADR(tyNtParamCurr.sClamp3ProgNm);
	p_NtParamClamp3TwoCtrlIn		:= ADR(tyNtParamCurr.bClamp3TwoCtrlIn);
	p_NtParamClamp3ExtTO			:= ADR(tyNtParamCurr.tClamp3ExtTO);
	p_NtParamClamp3RetTO			:= ADR(tyNtParamCurr.tClamp3RetTO);
	
	p_NtParamMotorOnDlyTm			:= ADR(tyNtParamCurr.diMotorOnDlyTm);
	p_NtParamMotorOffDlyTm			:= ADR(tyNtParamCurr.diMotorOffDlyTm);
	p_NtParamBrakeOnDlyTm			:= ADR(tyNtParamCurr.diBrakeOnDlyTm);
	p_NtParamBrakeOffDlyTm			:= ADR(tyNtParamCurr.diBrakeOffDlyTm);
	p_NtParamTimeOut				:= ADR(tyNtParamCurr.diTimeOut);
	
	p_NtParamAWProgNm				:= ADR(tyNtParamCurr.sAWProgNm);
	p_NtParamAWDevice				:= ADR(tyNtParamCurr.sAWDevice);
	p_NtParamAWNode					:= ADR(tyNtParamCurr.usiAWNode);
	p_NtParamAWDir					:= ADR(tyNtParamCurr.bAWDir);
	p_NtParamAWDirBl				:= ADR(tyNtParamCurr.bAWDirBl);
	p_NtParamAWPitchInUM			:= ADR(tyNtParamCurr.diAWPitchInUM);
	p_NtParamAWMovBlDistInUM		:= ADR(tyNtParamCurr.diAWMovBlDistInUM);
	p_NtParamAWParamInHm			:= ADR(tyNtParamCurr.tyAWParamInHm);
	p_NtParamAWParamInConvert		:= ADR(tyNtParamCurr.tyAWParamInConvert);
	p_NtParamAWParam				:= ADR(tyNtParamCurr.tyAWParam);
	p_NtParamAWAcc					:= ADR(tyNtParamCurr.tyAWParam.diAccInMS);
	p_NtParamAWDec					:= ADR(tyNtParamCurr.tyAWParam.diDecInMS);
	p_NtParamAWAutoSpd				:= ADR(tyNtParamCurr.tyAWParam.diAutoSpdInUMPS);
	p_NtParamAWTuning				:= ADR(tyNtParamCurr.tyAWTuning);
	p_NtParamAWMotorType			:= ADR(tyNtParamCurr.eAWServoMotorType);
	
	p_NtParamInvertProgNm			:= ADR(tyNtParamCurr.sInvertProgNm);
	p_NtParamInvertDevice			:= ADR(tyNtParamCurr.sInvertDevice);
	p_NtParamInvertNode				:= ADR(tyNtParamCurr.usiInvertNode);
	p_NtParamInvertDir				:= ADR(tyNtParamCurr.bInvertDir);
	p_NtParamInvertParamInHm		:= ADR(tyNtParamCurr.tyInvertParamInHm);
	p_NtParamInvertParamInConvert	:= ADR(tyNtParamCurr.tyInvertParamInConvert);
	p_NtParamInvertParam			:= ADR(tyNtParamCurr.tyInvertParam);
	p_NtParamInvertAcc				:= ADR(tyNtParamCurr.tyInvertParam.diAccInMS);
	p_NtParamInvertDec				:= ADR(tyNtParamCurr.tyInvertParam.diDecInMS);
	p_NtParamInvertAutoSpd			:= ADR(tyNtParamCurr.tyInvertParam.diAutoSpdInUMPS);
	p_NtParamInvertTuning			:= ADR(tyNtParamCurr.tyInvertTuning);
	p_NtParamInvertMotorType		:= ADR(tyNtParamCurr.eInvertServoMotorType);
	
	p_NtParamDInputProgNm			:= ADR(tyNtParamCurr.sDIProgNm);
	
	p_NtParamMcProgNm				:= ADR(tyNtParamCurr.sMcProgNm);
	
	p_NtParamHermesProgNm			:= ADR(tyNtParamCurr.sHermesProgNm);
	p_NtParamHermesRetainFileNm		:= ADR(tyNtParamCurr.sHermesRetainFileNm);
	p_NtParamHermesConfigFileNm		:= ADR(tyNtParamCurr.sHermesConfigFileNm);
	
	p_NtParamUSHermesProgNm			:= ADR(tyNtParamCurr.sUSHermesProgNm);
	p_NtParamUSHermesFileKeepDay	:= ADR(tyNtParamCurr.udiUSHermesFileKeepDay);
	p_NtParamUSHermesAliveTmInSec	:= ADR(tyNtParamCurr.udiUSHermesAliveTmInSec);
	p_NtParamUSHermesConnTO			:= ADR(tyNtParamCurr.tUSHermesConnTO);
	//US Hermes 2
	p_NtParamUSHermes2ProgNm			:= ADR(tyNtParamCurr.sUSHermes2ProgNm);
	p_NtParamUSHermes2FileKeepDay		:= ADR(tyNtParamCurr.udiUSHermes2FileKeepDay);
	p_NtParamUSHermes2AliveTmInSec		:= ADR(tyNtParamCurr.udiUSHermes2AliveTmInSec);
	p_NtParamUSHermes2ConnTO			:= ADR(tyNtParamCurr.tUSHermes2ConnTO);
	
	p_NtParamDSHermesProgNm			:= ADR(tyNtParamCurr.sDSHermesProgNm);
	p_NtParamDSHermesFileKeepDay	:= ADR(tyNtParamCurr.udiDSHermesFileKeepDay);
	p_NtParamDSHermesAliveTmInSec	:= ADR(tyNtParamCurr.udiDSHermesAliveTmInSec);
	p_NtParamDSHermesConnTO			:= ADR(tyNtParamCurr.tDSHermesConnTO);
	//DS Hermes2
	p_NtParamDSHermes2ProgNm		:= ADR(tyNtParamCurr.sDSHermesProgNm);
	p_NtParamDSHermes2FileKeepDay	:= ADR(tyNtParamCurr.udiDSHermesFileKeepDay);
	p_NtParamDSHermes2AliveTmInSec	:= ADR(tyNtParamCurr.udiDSHermesAliveTmInSec);
	p_NtParamDSHermes2ConnTO		:= ADR(tyNtParamCurr.tDSHermesConnTO);
	
	p_NtParamRmtHermesProgNm		:= ADR(tyNtParamCurr.sRmtHermesProgNm);
	p_NtParamRmtHermesConfigFileNm	:= ADR(tyNtParamCurr.sRmtHermesConfigFileNm);
	p_NtParamRmtHermesFileKeepDay	:= ADR(tyNtParamCurr.udiRmtHermesFileKeepDay);
	p_NtParamRmtHermesAliveTmInSec	:= ADR(tyNtParamCurr.udiRmtHermesAliveTmInSec);
	p_NtParamRmtHermesSndBffrSize	:= ADR(tyNtParamCurr.udiRmtHermesSndBffrSize);
	p_NtParamRmtHermesRcvBffrSize	:= ADR(tyNtParamCurr.udiRmtHermesRcvBffrSize);
	
	
	
	
	p_NtParamOpsAWProgNm			:= ADR(tyNtParamCurr.sOpsAWProgNm);
	p_NtParamOpsInitConvProgNm		:= ADR(tyNtParamCurr.sOpsInitConvProgNm);
	p_NtParamOpsInitPneuProgNm		:= ADR(tyNtParamCurr.sOpsInitPneuProgNm);
	p_NtParamOpsConvProgNm			:= ADR(tyNtParamCurr.sOpsConvProgNm);
	p_NtParamOpsPneuProgNm			:= ADR(tyNtParamCurr.sOpsPneuProgNm);
	
	p_NtParamConvBffrProgNm			:= ADR(tyNtParamCurr.sConvBffrProgNm);
	p_NtParamConvBffrFileNm			:= ADR(tyNtParamCurr.sConvBffrFileNm);
	p_NtParamConvBffrIdx			:= ADR(tyNtParamCurr.iConvBffrIdx);
	
	p_NtParamLFLeaderProgNm			:= ADR(tyNtParamCurr.sLFLeaderProgNm);
	p_NtParamLFLeaderOnlineChkDlyTm	:= ADR(tyNtParamCurr.tLFLeaderOnlineChkDlyTm);
	p_NtParamLFLeaderSetTmOffDlyTm	:= ADR(tyNtParamCurr.tLFLeaderSetTmOffDlyTm);
	
	p_NtParamLFFollowerProgNm		:= ADR(tyNtParamCurr.sLFFollowerProgNm);
	
	p_NtParamFollower1ProgNm		:= ADR(tyNtParamCurr.sFollower1ProgNm);
	
	p_NtParamLCSProgNm				:= ADR(tyNtParamCurr.sLCSProgNm);
	
	p_NtParamLCSMngRcpProgNm		:= ADR(tyNtParamCurr.sLCSMngRcpProgNm);
	
	p_NtParamLCSLFProgNm			:= ADR(tyNtParamCurr.sLCSLFProgNm);
	
	p_NtParamProdRcpMinWidth		:= ADR(tyNtParamCurr.tyProdRcpWidthLmt.diMin);
	p_NtParamProdRcpMaxWidth		:= ADR(tyNtParamCurr.tyProdRcpWidthLmt.diMax);
	p_NtParamProdRcpMinMcMod		:= ADR(tyNtParamCurr.tyProdRcpMcModLmt.diMin);
	p_NtParamProdRcpMaxMcMod		:= ADR(tyNtParamCurr.tyProdRcpMcModLmt.diMax);
	p_NtParamProdRcpMinFlippedBrd	:= ADR(tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMin);
	p_NtParamProdRcpMaxFlippedBrd	:= ADR(tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMax);

	// UI Direction L o R / R to L
	p_NtParamUIConvDirRL			:= ADR(tyNtParamCurr.bUIConvDirRL);
	
	//DBA on Right Sensor
	p_NtParamProjDBAOnRgtSen 		:=ADR(tyNtParamCurr.bProjDBAOnRgtSen);
	
	//LF new
	p_NtParamLFWidth2Prep			:= ADR(tyNtParamCurr.bLFProdWidth2Prep);	
	p_NtParamLFFllowerOnlineChkDlyTm:= ADR(tyNtParamCurr.tLFFollowerOnlineChkDlyTm);
	
	//machine safety US/DS signal // ADD
	p_NTParamUnlockCovPrep			:= ADR(tyNtParamCurr.bUnlockCoverPrep);
	p_NTParamMachineSafetySig		:= ADR(tyNtParamCurr.bUSDSMachineSafetySig);
	
	//InvertOnce & InvertTwice_2023_0032B01
	p_NtParamProjInvertOncePrep		:= ADR(tyNtParamCurr.bProjInvertOncePrep);
	p_NtParamProjInvertTwicePrep	:= ADR(tyNtParamCurr.bProjInvertTwicePrep);
	p_NtParamUSExtSMEMA2Prep		:= ADR(tyNtParamCurr.bUSExtSMEMA2Prep);
	p_NtParamUSSMEMA2ProgNm			:= ADR(tyNtParamCurr.sUSSMEMA2ProgNm);
	p_NtParamUSSMEMA2RstDlyTm		:= ADR(tyNtParamCurr.tUSSMEMA2RstDlyTm);
	p_NtParamUSSMEMA2SigInChkTm		:= ADR(tyNtParamCurr.tUSSMEMA2SigInChkTm);
	p_NtParamProjRtrnBrdConvDir		:= ADR(tyNtParamCurr.eProjRtrnBrdConvDir);
	
	p_NtParamProjChinesePrep		:= ADR(tyNtParamCurr.bChinesePrep);
	p_NtParamProjGermanPrep			:= ADR(tyNtParamCurr.bGemanPrep);
	
	
	//Rmt Hermes
	p_NtParamHermesInput            := ADR(tyNtParamCurr.iInput);//Total Input = How many inlet
	p_NtParamHermesOutput           := ADR(tyNtParamCurr.iOutput);//Total Outlet  = How many outlet
	
	//Svy Hermes
	p_NtParamHermesSvyPrep			:= ADR(tyNtParamCurr.bHermesSvyPrep);
	p_NtParamDSHermesRetainFileNm	:= ADR(tyNtParamCurr.sDSHermesRetainFileNm);
	(* Always Change If Project Change *)
	
END_PROGRAM