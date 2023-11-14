(** 2020-10-08 **)
ACTION Act_InitGlobal:
	
	//Get Data from Global to Internal Use
	p_eAct ACCESS p_StartupUIAct;
	
	p_bStartupRun ACCESS p_StartupRun;
	p_eStartupStat ACCESS p_StartupStat;
	p_eStartupStatus ACCESS p_StartupStatus;
	p_sStartupStatTxt ACCESS p_StartupStatTxt;
	p_eStartupStep ACCESS p_StartupStep;
	p_sStartupStepTxt ACCESS p_StartupStepTxt;
	p_bStartupGetConfigDone ACCESS p_StartupGetConfigDone;
	p_bStartupMismatchSetConfigDone ACCESS p_StartupMismatchSetConfigDone;
	p_bStartupUISettingsLoadDone ACCESS p_StartupUISettingsLoadDone;
	
	p_eTLBuzStat ACCESS p_TLBuzStat;
	p_eTLBuzStatus ACCESS p_TLBuzStatus;
	p_sTLBuzStatTxt ACCESS p_TLBuzStatTxt;
	
	p_tyAlarmCurrList ACCESS p_AlarmCurrList;
	p_tyAlarmRcyList ACCESS p_AlarmRecoveryList;
	p_tyAlarmHistoryList ACCESS p_AlarmHistoryList;
	p_bAlarmWarning ACCESS p_AlarmWarning;
	p_bAlarmErr ACCESS p_AlarmErr;
	p_bAlarmInfo ACCESS p_AlarmInfo;
	p_bAlarmInfoLF ACCESS p_AlarmInfoLF;
	p_sAlarmInfoMsg ACCESS p_AlarmInfoMsg;
	
	p_eRstErrStat ACCESS p_RstErrStat;
	p_eRstErrStatus ACCESS p_RstErrStatus;
	p_sRstErrStatTxt ACCESS p_RstErrStatTxt;
	
	p_eHWInfoStat ACCESS p_HWInfoStat;
	p_eHWInfoStatus ACCESS p_HWInfoStatus;
	p_sHWInfoStatTxt ACCESS p_HWInfoStatTxt;
	p_sHWInfoIPAddr ACCESS p_HWInfoIPAddr;
	p_sHWInfoSubnetMask ACCESS p_HWInfoSubnetMask;
	p_udiHWInfoEthMode ACCESS p_HWInfoEthMode;
	
	p_eProdRcpStat ACCESS p_ProdRcpStat;
	p_eProdRcpStatus ACCESS p_ProdRcpStatus;
	p_sProdRcpStatTxt ACCESS p_ProdRcpStatTxt;
	p_tyProdRcpCurrList	ACCESS p_ProdRcpCurrList;
	p_tyProdRcpFilterList ACCESS p_ProdRcpFilterList;
	p_tyProdRcpSortedList ACCESS p_ProdRcpSortedList;
	p_bProdRcpNmEmpty ACCESS p_ProdRcpNmEmpty;
	p_bProdRcpListFull ACCESS p_ProdRcpListFull;
	p_bProdRcpNmNotExist ACCESS p_ProdRcpNmNotExist;
	p_tyProdRcpInfoOut ACCESS p_ProdRcpInfoOut;
	p_tyProdRcpCurrRcp0 ACCESS p_ProdRcpCurrRcp0;
	p_tyProdRcpCurrRcp1 ACCESS p_ProdRcpCurrRcp1;
	p_tyProdRcpCurrRcp2 ACCESS p_ProdRcpCurrRcp2;
	
	p_eMpProdRcpStat ACCESS p_MpProdRcpStat;
	p_eMpProdRcpStatus ACCESS p_MpProdRcpStatus;
	
	p_eMcParamStat ACCESS p_McParamStat;
	p_eMcParamStatus ACCESS p_McParamStatus;
	p_sMcParamStatTxt ACCESS p_McParamStatTxt;
	p_tyMcParamCurr	ACCESS p_McParamCurr;
	
	p_tyNtParamCurr ACCESS p_NtParamCurr;
	
	p_eUsrMgmtStat ACCESS p_UsrMgmtStat;
	p_eUsrMgmtStatus ACCESS p_UsrMgmtStatus;
	p_sUsrMgmtStatTxt ACCESS p_UsrMgmtStatTxt;
	p_tyUsrMgmtCurrUsr ACCESS p_UsrMgmtCurrUsr;
	p_tyUsrMgmtCurrAccessRgt ACCESS p_UsrMgmtCurrAccessRight;
	p_tyUsrMgmtAllList ACCESS p_UsrMgmtAllList;
	p_tyUsrMgmtLv2List ACCESS p_UsrMgmtLvl2List;
	p_tyUsrMgmtLv3List ACCESS p_UsrMgmtLvl3List;
	p_tyUsrMgmtAdminList ACCESS p_UsrMgmtAdminList;
	p_bUsrMgmtNmEmpty ACCESS p_UsrMgmtNmEmpty;
	p_bUsrMgmtListFull ACCESS p_UsrMgmtListFull;
	p_bUsrMgmtNmExist ACCESS p_UsrMgmtNmExist;
	p_bUsrMgmtNmNotExist ACCESS p_UsrMgmtNmNotExist;
	p_bUsrMgmtLastAdmin ACCESS p_UsrMgmtLastAdmin;
	p_bUsrMgmtLoginSuccess ACCESS p_UsrMgmtLoginSuccess;
	p_bUsrMgmtPwMismatch ACCESS p_UsrMgmtPwMismatch;
	p_bUsrMgmtUnableDelete ACCESS p_UsrMgmtUnableDelete;
	p_tyUsrMgmtFullData ACCESS p_UsrMgmtFullData;
	
	p_eUSSMEMAStat ACCESS p_USSMEMAStat;
	p_eUSSMEMAStatus ACCESS p_USSMEMAStatus;
	p_sUSSMEMAStatTxt ACCESS p_USSMEMAStatTxt;
	p_bUSSMEMAUSRdy ACCESS p_USSMEMAUSRdy;
	p_bUSSMEMAUSGdBrdRdy ACCESS p_USSMEMAUSGdBrdRdy;
	p_bUSSMEMADSRdy ACCESS p_USSMEMADSRdy;
	p_bUSSMEMAUSB ACCESS p_USSMEMAUSB;
	
	p_eDSSMEMAStat ACCESS p_DSSMEMAStat;
	p_eDSSMEMAStatus ACCESS p_DSSMEMAStatus;
	p_sDSSMEMAStatTxt ACCESS p_DSSMEMAStatTxt;
	p_bDSSMEMAUSRdy ACCESS p_DSSMEMAUSRdy;
	p_bDSSMEMAUSGdBrdRdy ACCESS p_DSSMEMAUSGdBrdRdy;
	p_bDSSMEMADSRdy	ACCESS p_DSSMEMADSRdy;
	p_bDSSMEMADBA ACCESS p_DSSMEMADBA;
	p_bDSSMEMADBAStat ACCESS p_DSSMEMADBAStat;
	
	//UpStreamSMEMA2
	p_eUSSMEMA2Stat ACCESS p_USSMEMA2Stat;
	p_eUSSMEMA2Status ACCESS p_USSMEMA2Status;
	p_sUSSMEMA2StatTxt ACCESS p_USSMEMA2StatTxt;
	p_bUSSMEMA2USRdy ACCESS p_USSMEMA2USRdy;
	p_bUSSMEMA2USGdBrdRdy ACCESS p_USSMEMA2USGdBrdRdy;
	p_bUSSMEMA2DSRdy ACCESS p_USSMEMA2DSRdy;
	p_bUSSMEMA2USB ACCESS p_USSMEMA2USB;
	p_bUSSMEMA2Transporting ACCESS p_USSMEMA2Transporting;
	
	p_bUSHermesUSRdy ACCESS p_USHermesUSRdy;
	p_bUSHermesDSRdy ACCESS p_USHermesDSRdy;
	p_bUSHermesUSGdRdy ACCESS p_USHermesUSGdRdy;
	p_bUSHermesDSGdRdy ACCESS p_USHermesDSGdRdy;
	p_bUSHermesConnected ACCESS p_USHermesConnected;
	p_bUSHermesAccDataMnl ACCESS p_USHermesAccDataMnl;
	
	p_bDSHermesUSRdy ACCESS p_DSHermesUSRdy;
	p_bDSHermesDSRdy ACCESS p_DSHermesDSRdy;
	p_bDSHermesUSGdRdy ACCESS p_DSHermesUSGdRdy;
	p_bDSHermesDSGdRdy ACCESS p_DSHermesDSGdRdy;
	p_bDSHermesConnected ACCESS p_DSHermesConnected;
	
	p_eConvStat ACCESS p_ConvStat;
	p_eConvStatus ACCESS p_ConvStatus;
	p_sConvStatTxt ACCESS p_ConvStatTxt;
	
	p_bConvHvBrd ACCESS p_OpsInvertHvBrd;
	p_bConvGdBrd ACCESS p_OpsInvertGdBrd;
	
	p_eAWOpenStat ACCESS p_AWOpenStat;
	p_eAWOpenStatus ACCESS p_AWOpenStatus;
	p_sAWOpenStatTxt ACCESS p_AWOpenStatTxt;
	p_udiAWOpenAxisErrID ACCESS p_AWOpenAxisErrID;
	p_bAWOpenAxisErr ACCESS p_AWOpenAxisErr;
	p_bAWOpenPwrOn ACCESS p_AWOpenPwrOn;
	p_bAWOpenIsHomed ACCESS p_AWOpenIsHomed;
	p_diAWOpenActualPos ACCESS p_AWOpenActualPos;
	p_bAWOpenFwdLmtSen ACCESS p_AWOpenFwdLmtSen;
	p_bAWOpenRevLmtSen ACCESS p_AWOpenRevLmtSen;
	p_sAWOpenAxisErrTxt ACCESS p_AWOpenAxisErrTxt;
	p_bAWOpenJogging ACCESS p_AWOpenJogging;
	p_bAWOpenOpenSen ACCESS p_AWOpenOpenSen;
	p_bAWOpenCloseSen ACCESS p_AWOpenCloseSen;
	
	p_eInvertStat ACCESS p_MotorBrkStat;
	p_eInvertStatus ACCESS p_MotorBrkStatus;
	p_sInvertStatTxt ACCESS p_MotorBrkStatTxt;
	
	p_eOpsStat ACCESS p_OpsStat;
	p_eOpsStatus ACCESS p_OpsStatus;
	p_sOpsStatTxt ACCESS p_OpsStatTxt;
	p_eOpsOpsStatus ACCESS p_OpsOpsStatus;

	p_sOpsInvertStepTxt ACCESS p_OpsInvertStepTxt;
	p_eOpsInvertCurrPos ACCESS p_OpsInvertInvertCurrPos;
	
	p_bOpsInvertStepInitConv ACCESS p_OpsInvertStepInitConv;
	p_bOpsInvertStepInitDone ACCESS p_OpsInvertStepInitDone;
	
	p_bOpsStatusRun ACCESS p_OpsStatusRun;
	p_bOpsStatusStop ACCESS p_OpsStatusStop;
	p_bOpsStatusCycleStop ACCESS p_OpsStatusCycleStop;
	p_bOpsStatusStep ACCESS p_OpsStatusStep;
	p_bOpsRun ACCESS p_OpsRun;
	
	p_bOpsUSStandby ACCESS p_OpsInvertStepUSStandby;
	p_bOpsDSStandby ACCESS p_OpsInvertStepDSStandby;
	
	// ADD safetySignal
	p_bOpsInvertStepAWMove ACCESS p_OpsInvertStepAWMove;
	p_bOpsSafeMode ACCESS p_OpsInvertStepOpsSafeMode;
	
	p_eHermesStat ACCESS p_HermesStat;
	p_eHermesStatus ACCESS p_HermesStatus;
	p_tyHermesConfiguration ACCESS p_HermesConfiguration;
	
	p_eLFLeaderStat ACCESS p_LFLeaderStat;
	p_eLFLeaderStatus ACCESS p_LFLeaderStatus;
	p_tyLFLeaderFollowerInfo ACCESS p_LFLeaderFollowerInfo;
	p_tyLFLeaderFollowerToLeaderTag ACCESS p_LFLeaderFollowerToLeaderTag;
	
	p_bLFFollowerProdAccDataMnl ACCESS p_LFFollowerProdAccDataMnl;
	p_bLFFollowerLdrSeqCtrlInActive ACCESS p_LFFollowerLdrSeqCtrlInActive;
	p_bLFFollowerUSAllow ACCESS p_LFFollowerUSAllow;
	p_bLFFollowerDSAllow ACCESS p_LFFollowerDSAllow;
	
	p_bFollower1WaitRlsProd ACCESS p_Follower1WaitRlsBrd;
	
	p_bLCSLFAccDataMnl ACCESS p_LCSLFAccDataMnl;
	
	p_tyDI ACCESS p_DI;
	
	p_tyDO ACCESS p_DO;
	p_eDOStat ACCESS p_DOStat;
	p_eDOStatus ACCESS p_DOStatus;
	
	//Stopper
	p_eStopperStat ACCESS p_PneuNoSenStopperStat;
	p_eStopperStatus ACCESS p_PneuNoSenStopperStatus;
	p_sStopperStatTxt ACCESS p_PneuNoSenStopperStatTxt;
	p_bStopperTwoCtrlOut ACCESS p_PneuNoSenStopperTwoCtrlOut;
	p_bStopperExtCtrl ACCESS p_PneuNoSenStopperExtCtrl;
	p_bStopperRetCtrl ACCESS p_PneuNoSenStopperRetCtrl;
	p_bStopperExtended ACCESS p_PneuNoSenStopperExtended;
	
	//Clamp
	p_eClampStat ACCESS p_PneuNoSenClampStat;
	p_eClampStatus ACCESS p_PneuNoSenClampStatus;
	p_sClampStatTxt ACCESS p_PneuNoSenClampStatTxt;
	p_bClampTwoCtrlOut ACCESS p_PneuNoSenClampTwoCtrlOut;
	p_bClampExtCtrl ACCESS p_PneuNoSenClampExtCtrl;
	p_bClampRetCtrl ACCESS p_PneuNoSenClampRetCtrl;
	
	//Shutter
	p_eInShutterStat ACCESS p_Pneu2SenInShutterStat;
	p_eInShutterStatus ACCESS p_Pneu2SenInShutterStatus;
	p_sInShutterStatTxt ACCESS p_Pneu2SenInShutterStatTxt;
	p_bInShutterExtCtrl ACCESS p_Pneu2SenInShutterExtCtrl;
	p_bInShutterRetCtrl ACCESS p_Pneu2SenInShutterRetCtrl;
	p_bInShutterTwoCtrlOut ACCESS p_Pneu2SenInShutterTwoCtrlOut;
	p_bInShutterExtended ACCESS p_Pneu2SenInShutterExtended;
	p_bInShutterRetracted ACCESS p_Pneu2SenInShutterRetracted;
	
	p_eOutShutterStat ACCESS p_Pneu2SenOutShutterStat;
	p_eOutShutterStatus ACCESS p_Pneu2SenOutShutterStatus;
	p_sOutShutterStatTxt ACCESS p_Pneu2SenOutShutterStatTxt;
	p_bOutShutterExtCtrl ACCESS p_Pneu2SenOutShutterExtCtrl;
	p_bOutShutterRetCtrl ACCESS p_Pneu2SenOutShutterRetCtrl;
	p_bOutShutterTwoCtrlOut ACCESS p_Pneu2SenOutShutterTwoCtrlOut;
	p_bOutShutterExtended ACCESS p_Pneu2SenOutShutterExtended;
	p_bOutShutterRetracted ACCESS p_Pneu2SenOutShutterRetracted;
	
	//Clamp1
	p_eClamp1Stat ACCESS p_Pneu2SenClamp1Stat;
	p_eClamp1Status ACCESS p_Pneu2SenClamp1Status;
	p_sClamp1StatTxt ACCESS p_Pneu2SenClamp1StatTxt;
	p_bClamp1ExtCtrl ACCESS p_Pneu2SenClamp1ExtCtrl;
	p_bClamp1RetCtrl ACCESS p_Pneu2SenClamp1RetCtrl;
	p_bClamp1TwoCtrlOut ACCESS p_Pneu2SenClamp1TwoCtrlOut;
	p_bClamp1Extended ACCESS p_Pneu2SenClamp1Extended;
	p_bClamp1Retracted ACCESS p_Pneu2SenClamp1Retracted;
	
	//Clamp2
	p_eClamp2Stat ACCESS p_Pneu2SenClamp2Stat;
	p_eClamp2Status ACCESS p_Pneu2SenClamp2Status;
	p_sClamp2StatTxt ACCESS p_Pneu2SenClamp2StatTxt;
	p_bClamp2ExtCtrl ACCESS p_Pneu2SenClamp2ExtCtrl;
	p_bClamp2RetCtrl ACCESS p_Pneu2SenClamp2RetCtrl;
	p_bClamp2TwoCtrlOut ACCESS p_Pneu2SenClamp2TwoCtrlOut;
	p_bClamp2Extended ACCESS p_Pneu2SenClamp2Extended;
	p_bClamp2Retracted ACCESS p_Pneu2SenClamp2Retracted;
	
	//Clamp3
	p_eClamp3Stat ACCESS p_Pneu2SenClamp3Stat;
	p_eClamp3Status ACCESS p_Pneu2SenClamp3Status;
	p_sClamp3StatTxt ACCESS p_Pneu2SenClamp3StatTxt;
	p_bClamp3ExtCtrl ACCESS p_Pneu2SenClamp3ExtCtrl;
	p_bClamp3RetCtrl ACCESS p_Pneu2SenClamp3RetCtrl;
	p_bClamp3TwoCtrlOut ACCESS p_Pneu2SenClamp3TwoCtrlOut;
	p_bClamp3Extended ACCESS p_Pneu2SenClamp3Extended;
	p_bClamp3Retracted ACCESS p_Pneu2SenClamp3Retracted;
	
	p_bMtrBrkRls ACCESS p_MotorBrkMtrBrkRls;	
	
	p_bLeftSen ACCESS p_DIConvLftSen;
	p_bRightSen	ACCESS p_DIConvRgtSen;
	p_diInitTm ACCESS p_McParamConvInitTm;
	p_eDirection ACCESS p_NtParamProjConvDir;
	
	p_bDSSMEMAAlmData ACCESS p_DSSMEMAAlmData;
	p_bConvAlmData ACCESS p_ConvAlmData;
	
	p_bUnlockCovPrep ACCESS p_NTParamUnlockCovPrep;
	p_bMachineSafetyPrep ACCESS p_NTParamMachineSafetySig;
	
	p_bOpsInvOnceTwicePCBOut ACCESS p_OpsInvertOnceTwicePCBOut;
	p_bOpsInvertStepUSStandby ACCESS p_OpsInvertStepUSStandby;
	
	//Simulation
	p_eSimuStat ACCESS p_SimuStat;
	p_eSimuStatus ACCESS p_SimuStatus;
	
	p_eSimuSimuStatus ACCESS p_SimuSimuStatus;
	p_bSimuStatusRun ACCESS p_SimuStatusRun;
	p_bSimuStatusStop ACCESS p_SimuStatusStop;
	p_bSimuStatusCycleStop ACCESS p_SimuStatusCycleStop;
	p_bSimuStatusStep ACCESS p_SimuStatusStep;
	
END_ACTION
