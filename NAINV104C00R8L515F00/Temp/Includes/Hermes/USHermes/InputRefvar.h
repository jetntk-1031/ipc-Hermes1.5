/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_174_
#define _BUR_1700031253_174_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcstring (*p_sBottomBarcode)[255];
_BUR_LOCAL plcstring (*p_sTopBarcode)[255];
_BUR_LOCAL plcbit *p_bTransportFinished;
_BUR_LOCAL plcbit *p_bHermesSwitchtoRvrseTransport;
_BUR_LOCAL struct tyHermesBoardAvailable *p_tyDSHermesCurrBASnd;
_BUR_LOCAL plcbit *p_bReceiveReverseUSMcRdy;
_BUR_LOCAL plcbit *p_bReverseReceiveRoute;
_BUR_LOCAL plcbit *p_bNomRouteEn;
_BUR_LOCAL plcbit *p_bReturnRoute;
_BUR_LOCAL plcbit *p_bManualRmvRoute;
_BUR_LOCAL plcbit *p_bProcessRouteEn;
_BUR_LOCAL struct tyHermesDSParam (*pa_tyHermesDSParam)[4];
_BUR_LOCAL plcbit *p_bManualInsertEndSen;
_BUR_LOCAL plcbit *p_bManualInsertZoneHvBrd;
_BUR_LOCAL plcbit *p_bQueryBoardInfo;
_BUR_LOCAL plcbit *p_bConvHvBrd;
_BUR_LOCAL plcbit *p_bUIAccData;
_BUR_LOCAL plcbit *p_bMcParamMnlAccData;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpCurrRcp;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam (*pa_tyProdRcpList)[2000];
#else
/* Variable pa_tyProdRcpList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyHermesCommand *p_tyCommand;
_BUR_LOCAL plcstring (*p_sInternalRcv)[65536];
_BUR_LOCAL plcbit *p_bInternalUse;
_BUR_LOCAL plcstring (*p_sInfoMsg2)[201];
_BUR_LOCAL plcstring (*p_sInfoMsg1)[201];
_BUR_LOCAL plcstring (*p_sInfoMsg)[201];
_BUR_LOCAL plcbit *p_bAccNewRcpCond;
_BUR_LOCAL plcbit *p_bSvyEn;
_BUR_LOCAL plcbit *p_bSvyPrep;
_BUR_LOCAL plcbit *p_bRmtEn;
_BUR_LOCAL plcbit *p_bRmtPrep;
_BUR_LOCAL plcstring (*p_sRmtMcId)[81];
_BUR_LOCAL plcbit *p_bAccDataRdy;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL unsigned long *p_udiFileKeepDay;
_BUR_LOCAL plcbit *p_bInterruptSen;
_BUR_LOCAL plcbit *p_bOpsRun;
_BUR_LOCAL signed long *p_diTransferInTO;
_BUR_LOCAL plctime *p_tConnTimeOut;
_BUR_LOCAL unsigned long *p_udiAliveIdleTimeInSec;
_BUR_LOCAL unsigned long *p_udiRcvBffrSize;
_BUR_LOCAL unsigned long *p_udiSndBffrSize;
_BUR_LOCAL signed long *p_diSltToSltInUM;
_BUR_LOCAL signed long *p_diTtlSlt;
_BUR_LOCAL signed long *p_diPitch;
_BUR_LOCAL signed long *p_diMaxSltValue;
_BUR_LOCAL signed long *p_diMinSltValue;
_BUR_LOCAL signed long *p_diWidthInUM;
_BUR_LOCAL plcstring (*p_sRecipeNm)[255];
_BUR_LOCAL enum eHermesFlippedBoard *p_eFlippedBoard;
_BUR_LOCAL enum eHermesFailedBoard *p_eFailedBoard;
_BUR_LOCAL plcstring (*p_sVersion)[8];
_BUR_LOCAL plcstring (*p_sInterfaceId)[81];
_BUR_LOCAL plcstring (*p_sMcId)[81];
_BUR_LOCAL plcbit *p_bBFSltEn;
_BUR_LOCAL plcbit *p_bBFWidthEn;
_BUR_LOCAL plcbit *p_bBASltEn;
_BUR_LOCAL plcbit *p_bBAWidthEn;
_BUR_LOCAL plcbit *p_bRcvNotStart;
_BUR_LOCAL plcbit *p_bRcvIncompl;
_BUR_LOCAL plcbit *p_bRcvCompl;
_BUR_LOCAL plcbit *p_bRdyTransport;
_BUR_LOCAL plcbit *p_bRdyRcv;
_BUR_LOCAL plcdt *p_dtCurrDT;
_BUR_LOCAL struct DTStructure *p_tyDTStructure;
_BUR_LOCAL plcstring (*p_sIPAddr)[16];
_BUR_LOCAL struct tyHermesUSParam *p_tyParam;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eHermesAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_174_ */

