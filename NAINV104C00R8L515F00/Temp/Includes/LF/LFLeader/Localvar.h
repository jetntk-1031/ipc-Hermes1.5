/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_190_
#define _BUR_1700031253_190_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL struct fbOPCUAReadList fbReadList;
_BUR_LOCAL struct fbOPCUADisconnect fbDisconnect;
_BUR_LOCAL struct fbOPCUAWriteList fbWriteList;
_BUR_LOCAL struct fbOPCUAGetNodeHdlList fbGetNodeHdlListRd;
_BUR_LOCAL struct fbOPCUAGetNodeHdlList fbGetNodeHdlListWr;
_BUR_LOCAL struct fbOPCUAConnect fbConnect;
_BUR_LOCAL enum eLFOPCUAStep eOPCUAStep;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyOPCUAHdlList a_tyReadHdls[50];
#else
/* Variable a_tyReadHdls not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyOPCUAHdlList a_tyWriteHdls[50];
#else
/* Variable a_tyWriteHdls not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bNodeRd[50];
#else
/* Variable a_bNodeRd not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bNodeWr[50];
#else
/* Variable a_bNodeWr not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcdword a_dwConnectionHdl[50];
#else
/* Variable a_dwConnectionHdl not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcstring sNodeCntr[81];
_BUR_LOCAL unsigned long udiNodeCntr;
_BUR_LOCAL struct fbLFLeaderDataUpdt fbDataUpdt;
_BUR_LOCAL struct fbLFLeaderBlkUSDS fbBlkUSDS;
_BUR_LOCAL struct fbLFLeaderChgSeq fbChgSeq;
_BUR_LOCAL struct fbLFLeaderChgAll fbChgAll;
_BUR_LOCAL struct fbLFLeaderSyncTm fbSyncTm;
_BUR_LOCAL struct fbLFLeaderOnlineChk fbOnlineChk;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyLFLeaderToFollowerTag a_tyLeaderToFollowerTag[50];
#else
/* Variable a_tyLeaderToFollowerTag not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL enum eLFAction eStatOld;
_BUR_LOCAL plcbit bDisconnecting;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring a_sLFIPAddrOld[50][16];
#else
/* Variable a_sLFIPAddrOld not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL signed long diMcNum;
_BUR_LOCAL signed long diDisconnectIdx;
_BUR_LOCAL signed long di;
_BUR_LOCAL plcbit bCntr;
_BUR_LOCAL plcbit bStop2Done;
_BUR_LOCAL plcbit bStop1Done;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRun2;
_BUR_LOCAL plcbit bRun1;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sFollowerProgTagNm[16];
_BUR_LOCAL plcstring sLeaderProgTagNm[16];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bLFOnline[50];
#else
/* Variable a_bLFOnline not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring a_sLFIPAddr[50][16];
#else
/* Variable a_sLFIPAddr not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL plctime tSetTmOffDlyTm;
_BUR_LOCAL plctime tOnlineChkDlyTm;
_BUR_LOCAL plcbit bWidth2Prep;
_BUR_LOCAL signed long diAfterOven2;
_BUR_LOCAL signed long diBeforeOven2;
_BUR_LOCAL signed long diAfterOven;
_BUR_LOCAL signed long diBeforeOven;
_BUR_LOCAL plcstring sReqMagRcpNm[16];
_BUR_LOCAL signed long diReqProdWidth;
_BUR_LOCAL plcstring sReqProdRcpNm[255];
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
#else
/* Variable a_tyFollowerToLeaderTag not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyLFFollowerInfo a_tyFollowerInfo[50];
#else
/* Variable a_tyFollowerInfo not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eLFAction eStat;
_BUR_LOCAL enum eLFAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LF/LFLeader/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtOPCUA/NtOPCUA.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLF/NtLF.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtLF/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_190_ */

