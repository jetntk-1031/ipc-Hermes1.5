/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_211_
#define _BUR_1700031253_211_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit btest;
_BUR_LOCAL enum eInvertStep eGotoOpsStepDummy;
_BUR_LOCAL signed short logIndexStep;
_BUR_LOCAL enum eInvertStep logStep[1000];
_BUR_LOCAL plcbit blog;
_BUR_LOCAL plcbit bClsLog;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bReverseStoppingPos;
_BUR_LOCAL plcbit bBoardInFromUS2;
_BUR_LOCAL plcbit bBoardInFromUS1;
_BUR_LOCAL plcbit bChangeInvertExtPneu;
_BUR_LOCAL plcbit bChangeBypassRetPneu;
_BUR_LOCAL plcbit bClampDisInitUnblk;
_BUR_LOCAL plcbit bInvertPosInvalidSkipInit;
_BUR_LOCAL struct TON fbRevTimer;
_BUR_LOCAL struct TON fbFwdTimer;
_BUR_LOCAL plcbit bReachedEnd;
_BUR_LOCAL plcbit bConvSen;
_BUR_LOCAL plcbit bUS2TimerRun;
_BUR_LOCAL struct TON fbUS2Timer;
_BUR_LOCAL plcbit bDSTimerRun;
_BUR_LOCAL plcbit bUSTimerRun;
_BUR_LOCAL struct TON fbDSTimer;
_BUR_LOCAL struct TON fbUSTimer;
_BUR_LOCAL enum eInvertStep eGotoOpsStep;
_BUR_LOCAL enum eInvertStep eOpsStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL signed long diRevDlyTm;
_BUR_LOCAL signed long diFwdDlyTm;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bUnClampRS3;
_BUR_LOCAL plcbit bClampRS3;
_BUR_LOCAL enum eFBStatus eClamp3Status;
_BUR_LOCAL enum ePneuAction eClamp3Stat;
_BUR_LOCAL plcbit bUnClampRS2;
_BUR_LOCAL plcbit bClampRS2;
_BUR_LOCAL enum eFBStatus eClamp2Status;
_BUR_LOCAL enum ePneuAction eClamp2Stat;
_BUR_LOCAL plcbit bUnClampRS1;
_BUR_LOCAL plcbit bClampRS1;
_BUR_LOCAL enum eFBStatus eClamp1Status;
_BUR_LOCAL enum ePneuAction eClamp1Stat;
_BUR_LOCAL plcbit bOutletShutterOpen;
_BUR_LOCAL plcbit bOutletShutterClose;
_BUR_LOCAL enum eFBStatus eOutletShutterStatus;
_BUR_LOCAL enum ePneuAction eOutletShutterStat;
_BUR_LOCAL plcbit bInletShutterOpen;
_BUR_LOCAL plcbit bInletShutterClose;
_BUR_LOCAL enum eFBStatus eInletShutterStatus;
_BUR_LOCAL enum ePneuAction eInletShutterStat;
_BUR_LOCAL enum eFBStatus eClampStatus;
_BUR_LOCAL enum ePneuAction eClampStat;
_BUR_LOCAL plcbit bStopperRetracted;
_BUR_LOCAL plcbit bStopperExtended;
_BUR_LOCAL enum eFBStatus eStopperStatus;
_BUR_LOCAL enum ePneuAction eStopperStat;
_BUR_LOCAL plcbit bConvLmtSenActivated;
_BUR_LOCAL plcbit bConvHvBrd;
_BUR_LOCAL enum eFBStatus eConvStatus;
_BUR_LOCAL enum eConvAction eConvStat;
_BUR_LOCAL plcbit bDSHermesStopTransport;
_BUR_LOCAL plcbit bDSHermesTransporting;
_BUR_LOCAL plcbit bUSHermesUSGdRdy;
_BUR_LOCAL plcbit bUSHermesUSRdy;
_BUR_LOCAL plcbit bUSHermesStopTransport;
_BUR_LOCAL plcbit bUSHermesTransporting;
_BUR_LOCAL plcbit bDSSMEMATimer;
_BUR_LOCAL plcbit bDSSMEMAConvStop;
_BUR_LOCAL plcbit bDSSMEMAConvStart;
_BUR_LOCAL enum eFBStatus eDSSMEMAStatus;
_BUR_LOCAL enum eSMEMAAction eDSSMEMAStat;
_BUR_LOCAL plcbit bUSSMEMAUSGdBrdRdy;
_BUR_LOCAL plcbit bUSSMEMAUSRdy;
_BUR_LOCAL plcbit bUSSMEMAConvStop;
_BUR_LOCAL plcbit bUSSMEMAConvStart;
_BUR_LOCAL plcbit bUSSMEMATransporting;
_BUR_LOCAL enum eFBStatus eUSSMEMAStatus;
_BUR_LOCAL enum eSMEMAAction eUSSMEMAStat;
_BUR_LOCAL plcbit bRtrnDSAllow;
_BUR_LOCAL plcbit bRtrnUSAllow;
_BUR_LOCAL plcbit bClamp3Sen;
_BUR_LOCAL plcbit bClamp2Sen;
_BUR_LOCAL plcbit bMidSen;
_BUR_LOCAL plcbit bRightSen;
_BUR_LOCAL plcbit bLeftSen;
_BUR_LOCAL plcbit bDSAllow;
_BUR_LOCAL plcbit bUSAllow;
_BUR_LOCAL plcbit bGoToStandby;
_BUR_LOCAL enum eMcSetCommMod eDSCommMod;
_BUR_LOCAL enum eMcSetCommMod eUSCommMod;
_BUR_LOCAL enum eConvDir eConvDirection;
_BUR_LOCAL plcbit bInsertGdBrd;
_BUR_LOCAL plcbit bInitGdBrd;
_BUR_LOCAL plcbit bGdBrd;
_BUR_LOCAL plcbit bHvBrd;
_BUR_LOCAL plcbit bBrdOnSen;
_BUR_LOCAL enum eClampType eClampOption;
_BUR_LOCAL plcbit bClampDis;
_BUR_LOCAL plcbit bClampPrep;
_BUR_LOCAL plcbit bOutletShutterDis;
_BUR_LOCAL plcbit bOutletShutterPrep;
_BUR_LOCAL plcbit bInletShutterDis;
_BUR_LOCAL plcbit bInletShutterPrep;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bStepInvRtrnUSCommTmr;
_BUR_LOCAL plcbit bStepInvRtrnUSStandby;
_BUR_LOCAL plcbit bStepInvRtrnEntToInOff;
_BUR_LOCAL plcbit bStepInvRtrnEntToEnd;
_BUR_LOCAL plcbit bInvOnceTwicePCBOut;
_BUR_LOCAL enum ePneuAction eClamp3Act;
_BUR_LOCAL enum ePneuAction eClamp2Act;
_BUR_LOCAL enum ePneuAction eClamp1Act;
_BUR_LOCAL enum ePneuAction eOutletShutterAct;
_BUR_LOCAL enum ePneuAction eInletShutterAct;
_BUR_LOCAL enum ePneuAction eClampAct;
_BUR_LOCAL enum eAWAction eAWAct;
_BUR_LOCAL enum eMotorBrkAction eInvertAct;
_BUR_LOCAL enum ePneuAction eStopperAct;
_BUR_LOCAL enum eConvAction eConvAct;
_BUR_LOCAL enum eSMEMAAction eUSSMEMA2Act;
_BUR_LOCAL enum eSMEMAAction eDSSMEMAAct;
_BUR_LOCAL enum eSMEMAAction eUSSMEMAAct;
_BUR_LOCAL plcbit bBrdRemoved;
_BUR_LOCAL plcbit bBrdInserted;
_BUR_LOCAL plcbit bStepSafeMode;
_BUR_LOCAL plcbit bStepAWMov;
_BUR_LOCAL plcbit bStepInvert;
_BUR_LOCAL plcbit bStepExitBrd;
_BUR_LOCAL plcbit bStepDSCommTmr;
_BUR_LOCAL plcbit bStepDSStandby;
_BUR_LOCAL plcbit bStepPreExit;
_BUR_LOCAL plcbit bStepRev;
_BUR_LOCAL plcbit bStepEntToInOff;
_BUR_LOCAL plcbit bStepEntToEnd;
_BUR_LOCAL plcbit bStepUSCommTmr;
_BUR_LOCAL plcbit bStepUSStandby;
_BUR_LOCAL plcbit bStepInitDone;
_BUR_LOCAL plcbit bStepInitTwdStopper;
_BUR_LOCAL plcbit bStepInitAwayStopper;
_BUR_LOCAL plcbit bStepInitConv;
_BUR_LOCAL plcbit bPaused;
_BUR_LOCAL plcstring sStepTxt[81];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData1;
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_211_ */

