/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700038002_1_
#define _BUR_1700038002_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bManualInsertData;
_BUR_LOCAL plcbit *p_bHermesSwitchtoRvrseTransport;
_BUR_LOCAL plcbit *p_bReverseSentRoute;
_BUR_LOCAL plcbit *p_bProcessRouteEn;
_BUR_LOCAL signed short *p_ReviXMLTableDataBrdAvlTtlIdx;
_BUR_LOCAL struct tyXMLTableDat (*pa_RevtyXMLTableDataBrdAvl)[201];
_BUR_LOCAL struct tyHermesSendWorkOrderInfo *p_tySvyHermesSendWorkOrderInfo;
_BUR_LOCAL plcbit *p_bUSHermesProcessRouteTrigger;
_BUR_LOCAL unsigned char *p_usiUSHermesReverseDSSendBFId;
_BUR_LOCAL plcbit *p_bNomRouteEn;
_BUR_LOCAL plcbit *p_bReturnRoute;
_BUR_LOCAL plcbit *p_bManualRmvRoute;
_BUR_LOCAL plcbit *p_bConvInitDone;
_BUR_LOCAL float *p_rAWCycleTm;
_BUR_LOCAL float *p_rMcCycleTm;
_BUR_LOCAL plcbit *p_bReverseDSSendBFId;
_BUR_LOCAL plcbit *p_bNtParamProjInvertTwicePrep;
_BUR_LOCAL plcbit *p_bNtParamProjInvertOncePrep;
_BUR_LOCAL struct tyHermesBoardAvailable *p_tyUSHermestyBoardAvailable;
_BUR_LOCAL struct tyHermesSendBoardInfo *p_tyBoardInfoData;
_BUR_LOCAL plcbit *p_bRcvBoardInfo;
_BUR_LOCAL struct tyHermesBoardAvailable *p_tyUSBoardArrivedData;
_BUR_LOCAL plcstring (*p_sInternalRcv)[65536];
_BUR_LOCAL plcbit *p_bInternalUse;
_BUR_LOCAL plcbit *p_bUSHermesStopTransport;
_BUR_LOCAL plcbit *p_bRmtEn;
_BUR_LOCAL plcbit *p_bRmtPrep;
_BUR_LOCAL plcstring (*p_sRmtMcId)[81];
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcstring (*p_sRetainFileName)[81];
_BUR_LOCAL unsigned long *p_udiRetainDataLen;
_BUR_LOCAL unsigned long *p_udiRetainDataAddr;
_BUR_LOCAL unsigned long *p_udiFileKeepDay;
_BUR_LOCAL plcbit *p_bInterruptSen;
_BUR_LOCAL plcbit *p_bOpsRun;
_BUR_LOCAL plcbit *p_bNewBrdAvlLastZone;
_BUR_LOCAL plcbit *p_bNewBrdAvlFirstZone;
_BUR_LOCAL signed short *p_iXMLTableDataBrdAvlTtlIdx;
_BUR_LOCAL struct tyXMLTableDat (*pa_tyXMLTableDataBrdAvl)[201];
_BUR_LOCAL signed short *p_iXMLTableDataBrdAvlTtlIdx1stZ;
_BUR_LOCAL struct tyXMLTableDat (*pa_tyXMLTableDataBrdAvl1stZ)[201];
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
_BUR_LOCAL signed long *p_diWidthZone1InUM;
_BUR_LOCAL signed long *p_diWidthInUM;
_BUR_LOCAL plcstring (*p_sBatchId)[81];
_BUR_LOCAL plcstring (*p_sWorkOrderId)[81];
_BUR_LOCAL float *p_rWeight;
_BUR_LOCAL float *p_rBottomClearanceHeight;
_BUR_LOCAL float *p_rTopClearanceHeight;
_BUR_LOCAL float *p_rConveyorSpeed;
_BUR_LOCAL float *p_rThickness;
_BUR_LOCAL float *p_rLength;
_BUR_LOCAL plcstring (*p_sBottomBarcode)[255];
_BUR_LOCAL plcstring (*p_sTopBarcode)[255];
_BUR_LOCAL enum eHermesFlippedBoard *p_eFlippedBoard;
_BUR_LOCAL enum eHermesFailedBoard *p_eFailedBoard;
_BUR_LOCAL plcstring (*p_sVersion)[8];
_BUR_LOCAL plcstring (*p_sInterfaceId)[81];
_BUR_LOCAL plcstring (*p_sBoardId)[37];
_BUR_LOCAL plcstring (*p_sForecastId)[81];
_BUR_LOCAL plcstring (*p_sRecipeZone1Nm)[255];
_BUR_LOCAL plcstring (*p_sRecipeNm)[255];
_BUR_LOCAL plcbit *p_bBFSltEn;
_BUR_LOCAL plcbit *p_bBFWidthEn;
_BUR_LOCAL plcbit *p_bBASltEn;
_BUR_LOCAL plcbit *p_bBAWidthEn;
_BUR_LOCAL plcbit *p_bSndNotStart;
_BUR_LOCAL plcbit *p_bSndIncompl;
_BUR_LOCAL plcbit *p_bSndCompl;
_BUR_LOCAL plcbit *p_bRdySnd;
_BUR_LOCAL plcstring (*p_sMcId)[81];
_BUR_LOCAL plcdt *p_dtCurrDT;
_BUR_LOCAL struct DTStructure *p_tyDTStructure;
_BUR_LOCAL unsigned char (*pa_usiMacAddr)[6];
_BUR_LOCAL plcstring (*p_sIPAddr)[16];
_BUR_LOCAL struct tyHermesDSParam *p_tyParam;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eHermesAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700038002_1_ */

