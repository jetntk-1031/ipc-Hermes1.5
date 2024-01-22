/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_171_
#define _BUR_1700031253_171_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long *p_udiComMode;
_BUR_LOCAL plcstring (*p_sInterface)[81];
_BUR_LOCAL plcstring (*p_sCmpInterface)[81];
_BUR_LOCAL struct tyHermesCommandOvenInfeed *p_tyHermesCmdOvenInfeed;
_BUR_LOCAL struct tyHermesCommandLockConv *p_tyHermesCmdLockConv;
_BUR_LOCAL struct tyHermesCommandPause *p_tyHermesCmdPause;
_BUR_LOCAL struct tyHermesCommandParam *p_udiHermesCmpCmdParam;
_BUR_LOCAL struct tyHermesCommandParam *p_tyHermesCmdParam;
_BUR_LOCAL unsigned long *p_udiSvyIndexDS4;
_BUR_LOCAL unsigned long *p_udiSvyIndexDS3;
_BUR_LOCAL unsigned long *p_udiSvyIndexDS2;
_BUR_LOCAL unsigned long *p_udiSvyIndexDS1;
_BUR_LOCAL unsigned long *p_udiSvyIndexUS4;
_BUR_LOCAL unsigned long *p_udiSvyIndexUS3;
_BUR_LOCAL unsigned long *p_udiSvyIndexUS2;
_BUR_LOCAL unsigned long *p_udiSvyIndexUS1;
_BUR_LOCAL plcbit *p_bSvyFoundIndexDS4;
_BUR_LOCAL plcbit *p_bSvyFoundIndexDS3;
_BUR_LOCAL plcbit *p_bSvyFoundIndexDS2;
_BUR_LOCAL plcbit *p_bSvyFoundIndexDS1;
_BUR_LOCAL plcbit *p_bSvyFoundIndexUS4;
_BUR_LOCAL plcbit *p_bSvyFoundIndexUS3;
_BUR_LOCAL plcbit *p_bSvyFoundIndexUS2;
_BUR_LOCAL plcbit *p_bSvyFoundIndexUS1;
_BUR_LOCAL unsigned long *p_udiRmtIndexDS4;
_BUR_LOCAL unsigned long *p_udiRmtIndexDS3;
_BUR_LOCAL unsigned long *p_udiRmtIndexDS2;
_BUR_LOCAL unsigned long *p_udiRmtIndexDS1;
_BUR_LOCAL unsigned long *p_udiRmtIndexUS4;
_BUR_LOCAL unsigned long *p_udiRmtIndexUS3;
_BUR_LOCAL unsigned long *p_udiRmtIndexUS2;
_BUR_LOCAL unsigned long *p_udiRmtIndexUS1;
_BUR_LOCAL plcbit *p_bRmtFoundIndexDS4;
_BUR_LOCAL plcbit *p_bRmtFoundIndexDS3;
_BUR_LOCAL plcbit *p_bRmtFoundIndexDS2;
_BUR_LOCAL plcbit *p_bRmtFoundIndexDS1;
_BUR_LOCAL plcbit *p_bRmtFoundIndexUS4;
_BUR_LOCAL plcbit *p_bRmtFoundIndexUS3;
_BUR_LOCAL plcbit *p_bRmtFoundIndexUS2;
_BUR_LOCAL plcbit *p_bRmtFoundIndexUS1;
_BUR_LOCAL struct DTStructure *p_tyDTStructure;
_BUR_LOCAL unsigned char (*pa_usiMacAddr)[6];
_BUR_LOCAL plcbit *p_bOpsInvertHvBrd;
_BUR_LOCAL plcbit *p_bOpsInvertStepInitDone;
_BUR_LOCAL struct tyHermesTransportFinished *p_tyDSHermesTransportFinished;
_BUR_LOCAL plcbit *p_bDSHermesTransportFinished;
_BUR_LOCAL unsigned char *p_usiReverseDSSndBfWBrdID;
_BUR_LOCAL plcbit *p_bReceiveReverseUSMcRdy;
_BUR_LOCAL plcbit *p_bNomRouteEn;
_BUR_LOCAL plcbit *p_bReturnRoute;
_BUR_LOCAL plcbit *p_bManualRmvRoute;
_BUR_LOCAL plcbit *p_bReverseSentRoute;
_BUR_LOCAL plcbit *p_bReverseReceiveRoute;
_BUR_LOCAL plcbit *p_bUSHermesStopTransport;
_BUR_LOCAL plcbit *p_bUSHermesBrdAvlRcved;
_BUR_LOCAL struct tyHermesStopTransport *p_tyUSHermesStopTransport;
_BUR_LOCAL struct tyHermesBoardForecast *p_tyUSCurrHermesBFRcv;
_BUR_LOCAL plcbit *p_bUSCurrHermesBrdForecastRcv;
_BUR_LOCAL struct tyHermesBoardForecast *p_tyUSRevHermesBFRcv;
_BUR_LOCAL plcbit *p_bUSRevHermesBrdForecastRcv;
_BUR_LOCAL struct tyHermesBoardAvailable *p_tyDSHermesCurrBASnd;
_BUR_LOCAL plcbit *p_bNTParamMachineSafetySig;
_BUR_LOCAL plcbit *p_bNTParamUnlockCovPrep;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcstring (*p_sConfigFileName)[81];
_BUR_LOCAL unsigned long *p_udiRetainDataLen4;
_BUR_LOCAL unsigned long *p_udiRetainDataAddr4;
_BUR_LOCAL unsigned long *p_udiRetainDataLen3;
_BUR_LOCAL unsigned long *p_udiRetainDataAddr3;
_BUR_LOCAL unsigned long *p_udiRetainDataLen2;
_BUR_LOCAL unsigned long *p_udiRetainDataAddr2;
_BUR_LOCAL unsigned long *p_udiRetainDataLen1;
_BUR_LOCAL unsigned long *p_udiRetainDataAddr1;
_BUR_LOCAL plcstring (*p_sRetainFileName4)[81];
_BUR_LOCAL plcstring (*p_sRetainFileName3)[81];
_BUR_LOCAL plcstring (*p_sRetainFileName2)[81];
_BUR_LOCAL plcstring (*p_sRetainFileName1)[81];
_BUR_LOCAL plcbit *p_bSvyEn;
_BUR_LOCAL plcbit *p_bSvyPrep;
_BUR_LOCAL struct tyHermesCurrentConfiguration *p_tySvySetConfiguration;
_BUR_LOCAL struct tyHermesCurrentConfiguration *p_tyRmtSetConfiguration;
_BUR_LOCAL plcbit *p_bUISaveHMISvyConfig;
_BUR_LOCAL plcbit *p_bUISaveHMIConfigure;
_BUR_LOCAL plcbit *p_bSvyHermesWriteConfig;
_BUR_LOCAL plcbit *p_bRmtHermesWriteConfig;
_BUR_LOCAL plcstring (*p_sMcId)[31];
_BUR_LOCAL struct tyHermesSvyParam *p_tySvyParam;
_BUR_LOCAL struct tyHermesRmtParam *p_tyRmtParam;
_BUR_LOCAL plcbit *p_bRmtEn;
_BUR_LOCAL plcbit *p_bRmtPrep;
_BUR_LOCAL struct tyHermesDSParam (*pa_tyDSParam)[4];
_BUR_LOCAL struct tyHermesUSParam (*pa_tyUSParam)[4];
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eHermesAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_171_ */

