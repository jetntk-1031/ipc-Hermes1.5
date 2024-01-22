/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528767_3_
#define _BUR_1700528767_3_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bLCSSectionLeaderEn;
_BUR_LOCAL plcbit *p_bUIBtnSectionLdr;
_BUR_LOCAL plcbit *p_bSimuStatusStep;
_BUR_LOCAL plcbit *p_bSimuStatusCycleStop;
_BUR_LOCAL plcbit *p_bSimuStatusStop;
_BUR_LOCAL plcbit *p_bSimuStatusRun;
_BUR_LOCAL enum eSimulationsStatus *p_eSimuSimuStatus;
_BUR_LOCAL enum eFBStatus *p_eSimuStatus;
_BUR_LOCAL enum eSimulationsAction *p_eSimuStat;
_BUR_LOCAL plcbit *p_bMachineSafetyPrep;
_BUR_LOCAL plcbit *p_bUnlockCovPrep;
_BUR_LOCAL struct tyAlmDat *p_bDSSMEMAAlmData;
_BUR_LOCAL struct tyAlmDat *p_bConvAlmData;
_BUR_LOCAL enum eConvDir *p_eDirection;
_BUR_LOCAL signed long *p_diInitTm;
_BUR_LOCAL plcbit *p_bRightSen;
_BUR_LOCAL plcbit *p_bLeftSen;
_BUR_LOCAL plcbit *p_bMtrBrkRls;
_BUR_LOCAL plcbit *p_bClamp3Retracted;
_BUR_LOCAL plcbit *p_bClamp3Extended;
_BUR_LOCAL plcbit *p_bClamp3TwoCtrlOut;
_BUR_LOCAL plcbit *p_bClamp3RetCtrl;
_BUR_LOCAL plcbit *p_bClamp3ExtCtrl;
_BUR_LOCAL plcstring (*p_sClamp3StatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eClamp3Status;
_BUR_LOCAL enum ePneuAction *p_eClamp3Stat;
_BUR_LOCAL plcbit *p_bClamp2Retracted;
_BUR_LOCAL plcbit *p_bClamp2Extended;
_BUR_LOCAL plcbit *p_bClamp2TwoCtrlOut;
_BUR_LOCAL plcbit *p_bClamp2RetCtrl;
_BUR_LOCAL plcbit *p_bClamp2ExtCtrl;
_BUR_LOCAL plcstring (*p_sClamp2StatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eClamp2Status;
_BUR_LOCAL enum ePneuAction *p_eClamp2Stat;
_BUR_LOCAL plcbit *p_bClamp1Retracted;
_BUR_LOCAL plcbit *p_bClamp1Extended;
_BUR_LOCAL plcbit *p_bClamp1TwoCtrlOut;
_BUR_LOCAL plcbit *p_bClamp1RetCtrl;
_BUR_LOCAL plcbit *p_bClamp1ExtCtrl;
_BUR_LOCAL plcstring (*p_sClamp1StatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eClamp1Status;
_BUR_LOCAL enum ePneuAction *p_eClamp1Stat;
_BUR_LOCAL plcbit *p_bOutShutterRetracted;
_BUR_LOCAL plcbit *p_bOutShutterExtended;
_BUR_LOCAL plcbit *p_bOutShutterTwoCtrlOut;
_BUR_LOCAL plcbit *p_bOutShutterRetCtrl;
_BUR_LOCAL plcbit *p_bOutShutterExtCtrl;
_BUR_LOCAL plcstring (*p_sOutShutterStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eOutShutterStatus;
_BUR_LOCAL enum ePneuAction *p_eOutShutterStat;
_BUR_LOCAL plcbit *p_bInShutterRetracted;
_BUR_LOCAL plcbit *p_bInShutterExtended;
_BUR_LOCAL plcbit *p_bInShutterTwoCtrlOut;
_BUR_LOCAL plcbit *p_bInShutterRetCtrl;
_BUR_LOCAL plcbit *p_bInShutterExtCtrl;
_BUR_LOCAL plcstring (*p_sInShutterStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eInShutterStatus;
_BUR_LOCAL enum ePneuAction *p_eInShutterStat;
_BUR_LOCAL plcbit *p_bClampRetCtrl;
_BUR_LOCAL plcbit *p_bClampExtCtrl;
_BUR_LOCAL plcbit *p_bClampTwoCtrlOut;
_BUR_LOCAL plcstring (*p_sClampStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eClampStatus;
_BUR_LOCAL enum ePneuAction *p_eClampStat;
_BUR_LOCAL plcbit *p_bStopperExtended;
_BUR_LOCAL plcbit *p_bStopperRetCtrl;
_BUR_LOCAL plcbit *p_bStopperExtCtrl;
_BUR_LOCAL plcbit *p_bStopperTwoCtrlOut;
_BUR_LOCAL plcstring (*p_sStopperStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eStopperStatus;
_BUR_LOCAL enum ePneuAction *p_eStopperStat;
_BUR_LOCAL enum eFBStatus *p_eDOStatus;
_BUR_LOCAL enum eDOAction *p_eDOStat;
_BUR_LOCAL struct tyDigitalOutput *p_tyDO;
_BUR_LOCAL struct tyDigitalInput *p_tyDI;
_BUR_LOCAL plcbit *p_bLCSLFAccDataMnl;
_BUR_LOCAL plcbit *p_bFollower1WaitRlsProd;
_BUR_LOCAL plcbit *p_bLFFollowerDSAllow;
_BUR_LOCAL plcbit *p_bLFFollowerUSAllow;
_BUR_LOCAL plcbit *p_bLFFollowerLdrSeqCtrlInActive;
_BUR_LOCAL plcbit *p_bLFFollowerProdAccDataMnl;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyLFFollowerToLeaderTag (*p_tyLFLeaderFollowerToLeaderTag)[50];
#else
/* Variable p_tyLFLeaderFollowerToLeaderTag not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyLFFollowerInfo (*p_tyLFLeaderFollowerInfo)[50];
#else
/* Variable p_tyLFLeaderFollowerInfo not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL enum eFBStatus *p_eLFLeaderStatus;
_BUR_LOCAL enum eLFAction *p_eLFLeaderStat;
_BUR_LOCAL struct tyHermesConfiguration *p_tyHermesConfiguration;
_BUR_LOCAL enum eFBStatus *p_eHermesStatus;
_BUR_LOCAL enum eHermesAction *p_eHermesStat;
_BUR_LOCAL plcbit *p_bOpsInvertStepUSStandby;
_BUR_LOCAL plcbit *p_bOpsInvOnceTwicePCBOut;
_BUR_LOCAL plcbit *p_bOpsSafeMode;
_BUR_LOCAL plcbit *p_bOpsInvertStepAWMove;
_BUR_LOCAL plcbit *p_bOpsInvertStepInitDone;
_BUR_LOCAL plcbit *p_bOpsInvertStepInitConv;
_BUR_LOCAL enum eInvertPos *p_eOpsInvertCurrPos;
_BUR_LOCAL plcstring (*p_sOpsInvertStepTxt)[81];
_BUR_LOCAL plcbit *p_bOpsRun;
_BUR_LOCAL plcbit *p_bOpsDSStandby;
_BUR_LOCAL plcbit *p_bOpsUSStandby;
_BUR_LOCAL plcbit *p_bOpsStatusStep;
_BUR_LOCAL plcbit *p_bOpsStatusCycleStop;
_BUR_LOCAL plcbit *p_bOpsStatusStop;
_BUR_LOCAL plcbit *p_bOpsStatusRun;
_BUR_LOCAL enum eOperationsStatus *p_eOpsOpsStatus;
_BUR_LOCAL plcstring (*p_sOpsStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eOpsStatus;
_BUR_LOCAL enum eOperationsAction *p_eOpsStat;
_BUR_LOCAL plcstring (*p_sInvertStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eInvertStatus;
_BUR_LOCAL enum eMotorBrkAction *p_eInvertStat;
_BUR_LOCAL plcbit *p_bAWOpenCloseSen;
_BUR_LOCAL plcbit *p_bAWOpenOpenSen;
_BUR_LOCAL plcbit *p_bAWOpenJogging;
_BUR_LOCAL plcstring (*p_sAWOpenAxisErrTxt)[81];
_BUR_LOCAL plcbit *p_bAWOpenRevLmtSen;
_BUR_LOCAL plcbit *p_bAWOpenFwdLmtSen;
_BUR_LOCAL signed long *p_diAWOpenActualPos;
_BUR_LOCAL plcbit *p_bAWOpenIsHomed;
_BUR_LOCAL plcbit *p_bAWOpenPwrOn;
_BUR_LOCAL plcbit *p_bAWOpenAxisErr;
_BUR_LOCAL unsigned long *p_udiAWOpenAxisErrID;
_BUR_LOCAL plcstring (*p_sAWOpenStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eAWOpenStatus;
_BUR_LOCAL enum eAWAction *p_eAWOpenStat;
_BUR_LOCAL plcbit *p_bConvGdBrd;
_BUR_LOCAL plcbit *p_bConvHvBrd;
_BUR_LOCAL plcstring (*p_sConvStatTxt)[81];
_BUR_LOCAL enum eFBStatus *p_eConvStatus;
_BUR_LOCAL enum eConvAction *p_eConvStat;
_BUR_LOCAL plcbit *p_bDSHermesConnected;
_BUR_LOCAL plcbit *p_bDSHermesDSGdRdy;
_BUR_LOCAL plcbit *p_bDSHermesUSGdRdy;
_BUR_LOCAL plcbit *p_bDSHermesDSRdy;
_BUR_LOCAL plcbit *p_bDSHermesUSRdy;
_BUR_LOCAL plcbit *p_bUSHermesAccDataMnl;
_BUR_LOCAL plcbit *p_bUSHermesConnected;
_BUR_LOCAL plcbit *p_bUSHermesDSGdRdy;
_BUR_LOCAL plcbit *p_bUSHermesUSGdRdy;
_BUR_LOCAL plcbit *p_bUSHermesDSRdy;
_BUR_LOCAL plcbit *p_bUSHermesUSRdy;
_BUR_LOCAL plcbit *p_bUSSMEMA2Transporting;
_BUR_LOCAL plcbit *p_bUSSMEMA2USB;
_BUR_LOCAL plcbit *p_bUSSMEMA2DSRdy;
_BUR_LOCAL plcbit *p_bUSSMEMA2USGdBrdRdy;
_BUR_LOCAL plcbit *p_bUSSMEMA2USRdy;
_BUR_LOCAL plcstring (*p_sUSSMEMA2StatTxt)[81];
_BUR_LOCAL enum eFBStatus *p_eUSSMEMA2Status;
_BUR_LOCAL enum eSMEMAAction *p_eUSSMEMA2Stat;
_BUR_LOCAL plcbit *p_bDSSMEMADBAStat;
_BUR_LOCAL plcbit *p_bDSSMEMADBA;
_BUR_LOCAL plcbit *p_bDSSMEMADSRdy;
_BUR_LOCAL plcbit *p_bDSSMEMAUSGdBrdRdy;
_BUR_LOCAL plcbit *p_bDSSMEMAUSRdy;
_BUR_LOCAL plcstring (*p_sDSSMEMAStatTxt)[81];
_BUR_LOCAL enum eFBStatus *p_eDSSMEMAStatus;
_BUR_LOCAL enum eSMEMAAction *p_eDSSMEMAStat;
_BUR_LOCAL plcbit *p_bUSSMEMAUSB;
_BUR_LOCAL plcbit *p_bUSSMEMADSRdy;
_BUR_LOCAL plcbit *p_bUSSMEMAUSGdBrdRdy;
_BUR_LOCAL plcbit *p_bUSSMEMAUSRdy;
_BUR_LOCAL plcstring (*p_sUSSMEMAStatTxt)[81];
_BUR_LOCAL enum eFBStatus *p_eUSSMEMAStatus;
_BUR_LOCAL enum eSMEMAAction *p_eUSSMEMAStat;
_BUR_LOCAL struct tyUsrMgmtFullDat *p_tyUsrMgmtFullData;
_BUR_LOCAL plcbit *p_bUsrMgmtUnableDelete;
_BUR_LOCAL plcbit *p_bUsrMgmtPwMismatch;
_BUR_LOCAL plcbit *p_bUsrMgmtLoginSuccess;
_BUR_LOCAL plcbit *p_bUsrMgmtLastAdmin;
_BUR_LOCAL plcbit *p_bUsrMgmtNmNotExist;
_BUR_LOCAL plcbit *p_bUsrMgmtNmExist;
_BUR_LOCAL plcbit *p_bUsrMgmtListFull;
_BUR_LOCAL plcbit *p_bUsrMgmtNmEmpty;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam (*p_tyUsrMgmtAdminList)[50];
#else
/* Variable p_tyUsrMgmtAdminList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam (*p_tyUsrMgmtLv3List)[50];
#else
/* Variable p_tyUsrMgmtLv3List not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam (*p_tyUsrMgmtLv2List)[50];
#else
/* Variable p_tyUsrMgmtLv2List not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam (*p_tyUsrMgmtAllList)[50];
#else
/* Variable p_tyUsrMgmtAllList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyUsrMgmtAccessRight *p_tyUsrMgmtCurrAccessRgt;
_BUR_LOCAL struct tyUsrMgmtParam *p_tyUsrMgmtCurrUsr;
_BUR_LOCAL plcstring (*p_sUsrMgmtStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eUsrMgmtStatus;
_BUR_LOCAL enum eUsrMgmtAction *p_eUsrMgmtStat;
_BUR_LOCAL struct tyNtParam *p_tyNtParamCurr;
_BUR_LOCAL struct tyMcParam *p_tyMcParamCurr;
_BUR_LOCAL plcstring (*p_sMcParamStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eMcParamStatus;
_BUR_LOCAL enum eMcParamAction *p_eMcParamStat;
_BUR_LOCAL enum eFBStatus *p_eMpProdRcpStatus;
_BUR_LOCAL enum eMpProdRcpAction *p_eMpProdRcpStat;
_BUR_LOCAL plcbit *p_bProdRcpNmNotExist;
_BUR_LOCAL plcbit *p_bProdRcpListFull;
_BUR_LOCAL plcbit *p_bProdRcpNmEmpty;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpCurrRcp2;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpCurrRcp1;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpCurrRcp0;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpInfoOut;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam (*p_tyProdRcpCurrList)[2000];
#else
/* Variable p_tyProdRcpCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam (*p_tyProdRcpSortedList)[2000];
#else
/* Variable p_tyProdRcpSortedList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam (*p_tyProdRcpFilterList)[2000];
#else
/* Variable p_tyProdRcpFilterList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcstring (*p_sProdRcpStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eProdRcpStatus;
_BUR_LOCAL enum eProdRcpAction *p_eProdRcpStat;
_BUR_LOCAL unsigned long *p_udiHWInfoEthMode;
_BUR_LOCAL plcstring (*p_sHWInfoSubnetMask)[16];
_BUR_LOCAL plcstring (*p_sHWInfoIPAddr)[16];
_BUR_LOCAL plcstring (*p_sHWInfoStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eHWInfoStatus;
_BUR_LOCAL enum eHWInfoAction *p_eHWInfoStat;
_BUR_LOCAL plcstring (*p_sRstErrStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eRstErrStatus;
_BUR_LOCAL enum eRstErrAction *p_eRstErrStat;
_BUR_LOCAL plcstring (*p_sAlarmInfoMsg)[201];
_BUR_LOCAL plcbit *p_bAlarmInfoLF;
_BUR_LOCAL plcbit *p_bAlarmInfo;
_BUR_LOCAL plcbit *p_bAlarmErr;
_BUR_LOCAL plcbit *p_bAlarmWarning;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring (*p_tyAlarmHistoryList)[300][201];
#else
/* Variable p_tyAlarmHistoryList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL unsigned long (*p_tyAlarmRcyList)[200];
#else
/* Variable p_tyAlarmRcyList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlarmCurr (*p_tyAlarmCurrList)[200];
#else
/* Variable p_tyAlarmCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcstring (*p_sTLBuzStatTxt)[81];
_BUR_LOCAL enum eFBStatus *p_eTLBuzStatus;
_BUR_LOCAL enum eTLBuzAction *p_eTLBuzStat;
_BUR_LOCAL plcbit *p_bStartupUISettingsLoadDone;
_BUR_LOCAL plcbit *p_bStartupMismatchSetConfigDone;
_BUR_LOCAL plcbit *p_bStartupGetConfigDone;
_BUR_LOCAL plcstring (*p_sStartupStepTxt)[81];
_BUR_LOCAL enum eStartupStep *p_eStartupStep;
_BUR_LOCAL plcstring (*p_sStartupStatTxt)[201];
_BUR_LOCAL enum eFBStatus *p_eStartupStatus;
_BUR_LOCAL enum eStartupAction *p_eStartupStat;
_BUR_LOCAL plcbit *p_bStartupRun;
_BUR_LOCAL enum eUIAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtLF/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecdep \\\"Logical/UsrMgmt/UsrMgmt.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecdep \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528767_3_ */

