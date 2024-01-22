/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_162_
#define _BUR_1700031253_162_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbRejectDownChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbRejectUpChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbRotRemoteChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbRotHomeChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbPullerRetChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbPullerExtChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbPshrRetChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbPshrExtChk;
_BUR_LOCAL struct fbConvMtrOff fbStop;
_BUR_LOCAL struct fbConvLongBrd fbLongBrd;
_BUR_LOCAL struct fbConvSenToSenOff1 fbExit1;
_BUR_LOCAL struct fbConvSenToSenOff fbExit;
_BUR_LOCAL struct fbConvSenToSenTm fbPreExit;
_BUR_LOCAL struct fbConvSenToSenTm1 fbRev;
_BUR_LOCAL struct fbConvSenToSen fbEnt;
_BUR_LOCAL struct fbConvSenToSenTm fbInit;
_BUR_LOCAL enum eConvAction eStatOld;
_BUR_LOCAL struct TON fbWaitTm;
_BUR_LOCAL plcbit bInletOff;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plctime tRejectDownTO;
_BUR_LOCAL plctime tRejectUpTO;
_BUR_LOCAL plctime tRotRemoteTO;
_BUR_LOCAL plctime tRotHomeTO;
_BUR_LOCAL plctime tPullerRetTO;
_BUR_LOCAL plctime tPullerExtTO;
_BUR_LOCAL plctime tPshrRetTO;
_BUR_LOCAL plctime tPshrExtTO;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bRejectDownSafetySen;
_BUR_LOCAL plcbit bRejectUpSafetySen;
_BUR_LOCAL plcbit bRejectDownSen;
_BUR_LOCAL plcbit bRejectUpSen;
_BUR_LOCAL plcbit bRotRemoteSafetySen;
_BUR_LOCAL plcbit bRotHomeSafetySen;
_BUR_LOCAL plcbit bRotRemoteSen;
_BUR_LOCAL plcbit bRotHomeSen;
_BUR_LOCAL plcbit bPullerRetSafetySen;
_BUR_LOCAL plcbit bPullerExtSafetySen;
_BUR_LOCAL plcbit bPullerRetSen;
_BUR_LOCAL plcbit bPullerExtSen;
_BUR_LOCAL plcbit bPshrRetSafetySen;
_BUR_LOCAL plcbit bPshrExtSafetySen;
_BUR_LOCAL plcbit bPshrRetSen;
_BUR_LOCAL plcbit bPshrExtSen;
_BUR_LOCAL plcbit bPullerChkSen;
_BUR_LOCAL plcbit bMiddleSen;
_BUR_LOCAL plcbit bRightSen;
_BUR_LOCAL plcbit bLeftSen;
_BUR_LOCAL plcbit bGdBrdEnt;
_BUR_LOCAL plcbit bGdBrdInit;
_BUR_LOCAL enum eConvDir eDirection;
_BUR_LOCAL signed long diTxOutTimeOut;
_BUR_LOCAL signed long diTxInTimeOut;
_BUR_LOCAL plctime tMtrOffDlyTm;
_BUR_LOCAL signed long diRevDlyTm;
_BUR_LOCAL signed long diInitTm;
_BUR_LOCAL plcbit bOnDirMod;
_BUR_LOCAL plcbit bLongBrdEn;
_BUR_LOCAL plcbit bLongBrdPrep;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bRejectAtDown;
_BUR_LOCAL plcbit bRejectAtUp;
_BUR_LOCAL plcbit bRejectTwoOutputControl;
_BUR_LOCAL plcbit bRejectDownCtrl;
_BUR_LOCAL plcbit bRejectUpCtrl;
_BUR_LOCAL plcbit bRotAtHome;
_BUR_LOCAL plcbit bRotAtRemote;
_BUR_LOCAL plcbit bRotTwoOutputControl;
_BUR_LOCAL plcbit bRotRemoteCtrl;
_BUR_LOCAL plcbit bPullerRetracted;
_BUR_LOCAL plcbit bPullerExtended;
_BUR_LOCAL plcbit bPullerTwoOutputControl;
_BUR_LOCAL plcbit bPullerRetCtrl;
_BUR_LOCAL plcbit bPullerExtCtrl;
_BUR_LOCAL plcbit bPshrRetracted;
_BUR_LOCAL plcbit bPshrExtended;
_BUR_LOCAL plcbit bPshrTwoOutputControl;
_BUR_LOCAL plcbit bPshrExtCtrl;
_BUR_LOCAL plcbit bMtrDirOrRToL;
_BUR_LOCAL plcbit bMtrSigOnOrLToR;
_BUR_LOCAL plcbit bLmtSenActivated;
_BUR_LOCAL plcbit bGdBrd;
_BUR_LOCAL plcbit bInspHvBrd;
_BUR_LOCAL plcbit bRejHvBrd;
_BUR_LOCAL plcbit bHvBrd;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[200];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[61][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eConvAction eStat;
_BUR_LOCAL enum eConvAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtPneu/NtPneu.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtConv/NtConv.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_162_ */

