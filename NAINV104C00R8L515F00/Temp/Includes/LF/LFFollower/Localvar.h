/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_193_
#define _BUR_1700031253_193_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bDBAOnWOAlign;
_BUR_LOCAL plcbit bProdRcpErrWidthMismatch;
_BUR_LOCAL plcbit bProdRcpErrNotExist;
_BUR_LOCAL plcbit bFollowerInfo;
_BUR_LOCAL plcbit bLeaderInfo;
_BUR_LOCAL plcbit bLeaderOnline;
_BUR_LOCAL enum eMachineStat eCurrMachineStat;
_BUR_LOCAL struct tyLFFollowerToLeaderTag tyFollowerToLeaderTag;
_BUR_LOCAL struct tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
_BUR_LOCAL struct fbLFFollower fbFollower;
_BUR_LOCAL struct fbLFFollowerOnlineChk fbOnlineChk;
_BUR_LOCAL plcbit bSetTm;
_BUR_LOCAL signed short i;
_BUR_LOCAL plcbit bOldBrdExited;
_BUR_LOCAL plcbit bNewBrdEntered;
_BUR_LOCAL struct tyProdRcpParam tyRlsBrdProdRcpNm;
_BUR_LOCAL unsigned char usiProdUpdtDatStep;
_BUR_LOCAL unsigned char usiMagAccDatStep;
_BUR_LOCAL unsigned char usiProdAccDatStep;
_BUR_LOCAL plcstring sReqMagRcpNm[31];
_BUR_LOCAL plcbit bMagAccDataReq;
_BUR_LOCAL signed long diReqProdRcpWidth;
_BUR_LOCAL plcstring sReqProdRcpNm[255];
_BUR_LOCAL plcbit bProdAccDataReq;
_BUR_LOCAL plcbit bSetTmErr;
_BUR_LOCAL plcbit bMagRcpErr;
_BUR_LOCAL plcbit bProdRcpErr;
_BUR_LOCAL plcbit bAutoAccData;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL enum eAWAction eAWStat;
_BUR_LOCAL plcbit bStandby;
_BUR_LOCAL plcbit bOps;
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL plcbit bErr;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plctime tOnlineChkDlyTm;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bRlsBrdProdRcpDiff;
_BUR_LOCAL plcbit bUpdtProdRcpDiff;
_BUR_LOCAL plcbit bInternalReqProdRcpDiff;
_BUR_LOCAL struct tyProdRcpParam tyToLeaderProdRcp;
_BUR_LOCAL plcbit bRlsBrd;
_BUR_LOCAL plcbit bOldBrdExitedCond;
_BUR_LOCAL plcbit bNewBrdEnteredCond;
_BUR_LOCAL struct tyProdRcpParam tyInternalReqProdRcp;
_BUR_LOCAL plcbit bInternalUse;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcbit bAutoUpdtData;
_BUR_LOCAL plcbit bUpdtNewRcpCond;
_BUR_LOCAL plcbit bAccNewRcpCond;
_BUR_LOCAL enum eFBStatus eTimeStatus;
_BUR_LOCAL enum eTimeAction eTimeStat;
_BUR_LOCAL plcstring sCurrMagRcpNm[31];
_BUR_LOCAL struct tyProdRcpParam tyCurrProdRcp;
_BUR_LOCAL struct tyProdRcpParam tyDispProdRcp;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tyProdRcpList[2000];
#else
/* Variable a_tyProdRcpList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit bUIMagAccData;
_BUR_LOCAL plcbit bUIProdUpdtData;
_BUR_LOCAL plcbit bUIProdAccData;
_BUR_LOCAL plcbit bProdWidthChk;
_BUR_LOCAL plcbit bDSWidthChkSen;
_BUR_LOCAL plcbit bDSWidthChkEn;
_BUR_LOCAL plcbit bDSWidthChkPrep;
_BUR_LOCAL plcbit bUSWidthChkSen;
_BUR_LOCAL plcbit bUSWidthChkEn;
_BUR_LOCAL plcbit bUSWidthChkPrep;
_BUR_LOCAL plcbit bWidth2Prep;
_BUR_LOCAL signed long diWidthLimit;
_BUR_LOCAL plcstring sMagRcpNm[31];
_BUR_LOCAL plcbit bSectionLeader;
_BUR_LOCAL plcbit bMnlAccData;
_BUR_LOCAL plcbit bAWDis;
_BUR_LOCAL plcbit bAWPrep;
_BUR_LOCAL plcstring sMcNm[31];
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL struct tyProdRcpParam tyUpdtProdRcp;
_BUR_LOCAL struct tyLFLeaderInfo tyLeaderInfo;
_BUR_LOCAL plcbit bWaitRlsBrd;
_BUR_LOCAL enum eTimeAction eTimeAct;
_BUR_LOCAL plcbit bMagAccDataMnl;
_BUR_LOCAL plcbit bProdUpdtDataMnl;
_BUR_LOCAL plcbit bProdAccDataMnl;
_BUR_LOCAL plcbit bLeaderSeqCtrlInActive;
_BUR_LOCAL plcbit bDSAllow;
_BUR_LOCAL plcbit bUSAllow;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyInfoData1;
_BUR_LOCAL struct tyAlmDat tyInfoData;
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LF/LFFollower/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLF/NtLF.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_193_ */

