/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700439178_1_
#define _BUR_1700439178_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
 #define usiMaxZoneSupported 5U
 #define usiMaxActionSupported 10U
#else
 _LOCAL_CONST unsigned char usiMaxZoneSupported;
 _LOCAL_CONST unsigned char usiMaxActionSupported;
#endif


/* Variables */
_BUR_LOCAL struct tyHermesBAMsgAttribAddr tyHermesBoardAvailableAttribAddr;
_BUR_LOCAL plcbit testresult2;
_BUR_LOCAL plcbit testresult1;
_BUR_LOCAL plcstring sAttribReadValue[255];
_BUR_LOCAL unsigned char dltpos;
_BUR_LOCAL unsigned char endpos;
_BUR_LOCAL unsigned char startpos;
_BUR_LOCAL plcbit bSimDelete;
_BUR_LOCAL plcbit bSimSearch;
_BUR_LOCAL signed short iActionAttributeIdx;
_BUR_LOCAL signed short iActionOnBrd;
_BUR_LOCAL plcbit bSimClear;
_BUR_LOCAL plcbit bSimShiftBoardFoward;
_BUR_LOCAL plcbit bSimBrdInZone3;
_BUR_LOCAL plcbit bSimBrdInZone2;
_BUR_LOCAL plcbit bSimBrdInZone1;
_BUR_LOCAL plcbit bCurrZoneOpsGConvHvBrd;
_BUR_LOCAL plcbit bCurrZoneConvInitDone;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyActionByZone a_tyActionReservedForZone[5];
#else
/* Variable a_tyActionReservedForZone not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bLinkOpsGConvStepInitDone[5];
#else
/* Variable a_bLinkOpsGConvStepInitDone not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bLinkOpsGConvHvBrd[5];
#else
/* Variable a_bLinkOpsGConvHvBrd not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned char usiLeftmostBlockedZone;
_BUR_LOCAL unsigned char usiBrdZone;
_BUR_LOCAL unsigned char usiBrdChkZone;
_BUR_LOCAL plcstring sTempBoardId[81];
_BUR_LOCAL signed short iActionIndex;
_BUR_LOCAL plcstring sSelectedActtoUpdate[81];
_BUR_LOCAL unsigned long udiSelectedModtoUpt;
_BUR_LOCAL struct tyHermesBoardAvailable tyBoardAvailableGenerated;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL enum eHermesBAMsgAction a_eModSelectedforCurrZone[5];
#else
/* Variable a_eModSelectedforCurrZone not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bOpsDsStandByStep[5];
#else
/* Variable a_bOpsDsStandByStep not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bBlkDSForAction[5];
#else
/* Variable a_bBlkDSForAction not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bUIZonePause[5];
#else
/* Variable a_bUIZonePause not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bUIPromptActionSelect[5];
#else
/* Variable a_bUIPromptActionSelect not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit tbActionSupportedByZone[5][10];
#else
/* Variable tbActionSupportedByZone not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned char usiZone;
_BUR_LOCAL unsigned char usiZoneSupported;
_BUR_LOCAL unsigned char usiReverseDS2SndBfWBrdID;
_BUR_LOCAL unsigned char usiReverseDS1SndBfWBrdID;
_BUR_LOCAL plcbit bNomRouteEn;
_BUR_LOCAL plcbit bReturnRoute;
_BUR_LOCAL plcbit bManualRmvRoute;
_BUR_LOCAL signed short iMinDis;
_BUR_LOCAL unsigned char usidx;
_BUR_LOCAL plcbit bManualRmvBrdCond;
_BUR_LOCAL struct TON fbRstReverseDSSndBF;
_BUR_LOCAL struct TON fbRstReverseRcvGate;
_BUR_LOCAL signed short iGotoLane;
_BUR_LOCAL plcbit bStopTransportFailed;
_BUR_LOCAL plcbit bStopTransportSucceed;
_BUR_LOCAL plcbit bRouteHaveBeenTriggerred;
_BUR_LOCAL plcbit bTriggerRouteReversal;
_BUR_LOCAL unsigned char bEntToReversePosition;
_BUR_LOCAL plcbit bProcessRouteReversal;
_BUR_LOCAL plcbit bTriggerRouteMachine;
_BUR_LOCAL plcbit bProcessRouteMachine;
_BUR_LOCAL plcbit bReverseSendRoute;
_BUR_LOCAL plcbit bReverseReceiveRoute;
_BUR_LOCAL plcbit bNotifyRstReverseRcvGate;
_BUR_LOCAL plcbit bPrevReversalCondition;
_BUR_LOCAL plcbit bSelfReverseAfterTransptFinished;
_BUR_LOCAL plcbit bReqReverseAfterTransptFinished;
_BUR_LOCAL plcbit bSwitchtoReverseTransport;
_BUR_LOCAL plcbit bBFWithoutBoardID;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bCmdInitialCompl;
_BUR_LOCAL unsigned char usiUSIdent2;
_BUR_LOCAL unsigned char usiUSIdent;
_BUR_LOCAL unsigned char usiDSIdent;
_BUR_LOCAL unsigned char usiPrevCmdIdx;
_BUR_LOCAL unsigned char usiCmpIdx;
_BUR_LOCAL unsigned char usiIdx;
_BUR_LOCAL unsigned char a_usiCommandIdx[7];
_BUR_LOCAL struct tyHermesCommandOvenInfeed a_tyCommandOvenInfeed[7];
_BUR_LOCAL struct tyHermesCommandLockConv a_tyCommandLockInputConv[7];
_BUR_LOCAL struct tyHermesCommandPause a_tyCommandPause[7];
_BUR_LOCAL struct tyHermesCmdProcessList a_tyCommandProcessList[7];
_BUR_LOCAL unsigned char usiProcessCmdBffr;
_BUR_LOCAL unsigned char usiDSHermesCommand;
_BUR_LOCAL unsigned char usiUSHermesCommand;
_BUR_LOCAL signed short i;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite5;
_BUR_LOCAL struct fbFileFullRead fbFileRead5;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite4;
_BUR_LOCAL struct fbFileFullRead fbFileRead4;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite3;
_BUR_LOCAL struct fbFileFullRead fbFileRead3;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite2;
_BUR_LOCAL struct fbFileFullRead fbFileRead2;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite1;
_BUR_LOCAL struct fbFileFullRead fbFileRead1;
_BUR_LOCAL struct fbDirCreate fbDirCreate4;
_BUR_LOCAL struct fbDirCreate fbDirCreate3;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;
_BUR_LOCAL enum eHermesAction eStatOld;
_BUR_LOCAL struct tyHermesConfiguration tyConfigurationHMI;
_BUR_LOCAL struct tyHermesConfiguration tyConfigurationLocal;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bHermesWriteRetainLane4;
_BUR_LOCAL plcbit bHermesWriteRetainLane3;
_BUR_LOCAL plcbit bHermesWriteRetainLane2;
_BUR_LOCAL plcbit bHermesWriteRetainLane1;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiSvyIndexDS4;
_BUR_LOCAL unsigned long udiSvyIndexDS3;
_BUR_LOCAL unsigned long udiSvyIndexDS2;
_BUR_LOCAL unsigned long udiSvyIndexDS1;
_BUR_LOCAL unsigned long udiSvyIndexUS4;
_BUR_LOCAL unsigned long udiSvyIndexUS3;
_BUR_LOCAL unsigned long udiSvyIndexUS2;
_BUR_LOCAL unsigned long udiSvyIndexUS1;
_BUR_LOCAL plcbit bSvyFoundIndexDS4;
_BUR_LOCAL plcbit bSvyFoundIndexDS3;
_BUR_LOCAL plcbit bSvyFoundIndexDS2;
_BUR_LOCAL plcbit bSvyFoundIndexDS1;
_BUR_LOCAL plcbit bSvyFoundIndexUS4;
_BUR_LOCAL plcbit bSvyFoundIndexUS3;
_BUR_LOCAL plcbit bSvyFoundIndexUS2;
_BUR_LOCAL plcbit bSvyFoundIndexUS1;
_BUR_LOCAL unsigned long udiRmtIndexDS4;
_BUR_LOCAL unsigned long udiRmtIndexDS3;
_BUR_LOCAL unsigned long udiRmtIndexDS2;
_BUR_LOCAL unsigned long udiRmtIndexDS1;
_BUR_LOCAL unsigned long udiRmtIndexUS4;
_BUR_LOCAL unsigned long udiRmtIndexUS3;
_BUR_LOCAL unsigned long udiRmtIndexUS2;
_BUR_LOCAL unsigned long udiRmtIndexUS1;
_BUR_LOCAL plcbit bRmtFoundIndexDS4;
_BUR_LOCAL plcbit bRmtFoundIndexDS3;
_BUR_LOCAL plcbit bRmtFoundIndexDS2;
_BUR_LOCAL plcbit bRmtFoundIndexDS1;
_BUR_LOCAL plcbit bRmtFoundIndexUS4;
_BUR_LOCAL plcbit bRmtFoundIndexUS3;
_BUR_LOCAL plcbit bRmtFoundIndexUS2;
_BUR_LOCAL plcbit bRmtFoundIndexUS1;
_BUR_LOCAL plcstring sMcId[31];
_BUR_LOCAL plcbit bUISaveHMISvyConfig;
_BUR_LOCAL plcbit bUISaveHMIConfigure;
_BUR_LOCAL plcbit bSvyHermesWriteConfig;
_BUR_LOCAL plcbit bRmtHermesWriteConfig;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sConfigFileName[81];
_BUR_LOCAL unsigned long udiRetainDataLen4;
_BUR_LOCAL unsigned long udiRetainDataAddr4;
_BUR_LOCAL unsigned long udiRetainDataLen3;
_BUR_LOCAL unsigned long udiRetainDataAddr3;
_BUR_LOCAL unsigned long udiRetainDataLen2;
_BUR_LOCAL unsigned long udiRetainDataAddr2;
_BUR_LOCAL unsigned long udiRetainDataLen1;
_BUR_LOCAL unsigned long udiRetainDataAddr1;
_BUR_LOCAL plcstring sRetainFileName4[81];
_BUR_LOCAL plcstring sRetainFileName3[81];
_BUR_LOCAL plcstring sRetainFileName2[81];
_BUR_LOCAL plcstring sRetainFileName1[81];
_BUR_LOCAL plcbit bSvyEn;
_BUR_LOCAL plcbit bSvyPrep;
_BUR_LOCAL struct tyHermesCurrentConfiguration tySvySetConfiguration;
_BUR_LOCAL struct tyHermesCurrentConfiguration tyRmtSetConfiguration;
_BUR_LOCAL struct tyHermesSvyParam tySvyParam;
_BUR_LOCAL struct tyHermesRmtParam tyRmtParam;
_BUR_LOCAL unsigned long udiRetainDataLen;
_BUR_LOCAL unsigned long udiRetainDataAddr;
_BUR_LOCAL plcstring sRetainFileName[81];
_BUR_LOCAL plcbit bRmtEn;
_BUR_LOCAL plcbit bRmtPrep;
_BUR_LOCAL struct tyHermesDSParam a_tyDSParam[4];
_BUR_LOCAL struct tyHermesUSParam a_tyUSParam[4];
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL struct tyHermesConfiguration tyConfigurationWr;
_BUR_LOCAL struct tyHermesConfiguration tyCurrConfiguration;
_BUR_LOCAL struct tyHermesConfiguration tyConfiguration;
_BUR_LOCAL plcbit bFileNotFound;

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
_BUR_LOCAL enum eHermesAction eStat;
_BUR_LOCAL enum eHermesAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700439178_1_ */

