/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_181_
#define _BUR_1700031253_181_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit bTest2;
_BUR_LOCAL plcbit bTest1;
_BUR_LOCAL plcbit bReverseRcvBlkDS;
_BUR_LOCAL plcbit bDSHermesRcvReverseUSMcRdy;
_BUR_LOCAL signed short iAction;
_BUR_LOCAL signed short iRoute;
_BUR_LOCAL plcbit bUSHermesProcessRouteTrigger;
_BUR_LOCAL unsigned char usiUSHermesReverseDSSendBFId;
_BUR_LOCAL plcbit bReverseSentRoute;
_BUR_LOCAL plcbit bNomRouteEn;
_BUR_LOCAL plcbit bReturnRoute;
_BUR_LOCAL plcbit bManualRmvRoute;
_BUR_LOCAL plcbit bProcessRouteEn;
_BUR_LOCAL plcbit bBlkDS;
_BUR_LOCAL plcbit bNotifyRstReverseSndGate;
_BUR_LOCAL struct TON fbRstReverseSndGate;
_BUR_LOCAL plcbit bSwitchtoReverseSend;
_BUR_LOCAL plcbit bReverseDSSndBfWBrdID;
_BUR_LOCAL plcbit bTriggerRouteReversal;
_BUR_LOCAL plcbit bCompleteSearch;
_BUR_LOCAL signed char siFoundIdx;
_BUR_LOCAL signed char siSearhIdx;
_BUR_LOCAL signed char siBottomBarcodeIdx;
_BUR_LOCAL signed char siTopBarcodeIdx;
_BUR_LOCAL plcbit bSearchBottom;
_BUR_LOCAL plcbit bSearchTop;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcstring sRstTim[16];
_BUR_LOCAL plcstring sTempRealWidth[16];
_BUR_LOCAL plcstring sInfoMcRdyMsg[201];
_BUR_LOCAL struct TON fbTimerRstBFId;
_BUR_LOCAL plcbit bTransportFinishedSnd;
_BUR_LOCAL plcbit bAllZoneEmpty;
_BUR_LOCAL plcbit bFirstZoneEndSen;
_BUR_LOCAL plcbit bFirstZoneHaveBoard;
_BUR_LOCAL plcbit bRstSendBFId;
_BUR_LOCAL plcbit bSndReverseBF;
_BUR_LOCAL plcbit bSendBFNoID;
_BUR_LOCAL plcbit bBFIdSent;
_BUR_LOCAL plcbit bSendBFId;
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL float rAWCycleTm;
_BUR_LOCAL float rMachineCycleTime;
_BUR_LOCAL struct tyHermesSendBoardInfo tySendBoardInfoAcc;
_BUR_LOCAL plcbit bNewChangeOver;
_BUR_LOCAL plcbit bNewWidth;
_BUR_LOCAL plcbit bNewProduct;
_BUR_LOCAL plcbit bFeatureBoardForecast;
_BUR_LOCAL plcbit bDummy;
_BUR_LOCAL struct tyHermesCommandParam tyCommandParam;
_BUR_LOCAL struct tyHermesBoardAvailable tyUSHermestyBoardAvailable;
_BUR_LOCAL signed short iWriteLogStep;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite1;
_BUR_LOCAL struct fbFileFullRead fbFileRead1;
_BUR_LOCAL struct fbFileOldDel fbFileOldDel1;
_BUR_LOCAL struct fbFileFullAppend fbFileAppend1;
_BUR_LOCAL plcdt dtCurrDTTemp;
_BUR_LOCAL plcstring sDT[81];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring a_sLogList[10][65536];
#else
/* Variable a_sLogList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned long udiWriteLogCntr;
_BUR_LOCAL unsigned long udiLogCntr;
_BUR_LOCAL struct tyHermesDSParam tyParamOld;
_BUR_LOCAL enum eHermesAction eStatOld;
_BUR_LOCAL unsigned char usiPrevBAIndex;
_BUR_LOCAL_RETAIN unsigned char usiBAIndex;
_BUR_LOCAL struct fbHermesSequenceTO fbSequenceTO;
_BUR_LOCAL struct fbHermesSequenceDS fbSequenceDS;
_BUR_LOCAL struct fbHermesCheckAliveRcvPing fbCheckAliveRcvPing;
_BUR_LOCAL struct fbHermesCheckAliveSendPing fbCheckAliveSendPing;
_BUR_LOCAL struct fbHermesCheckAlive fbCheckAlive;
_BUR_LOCAL struct fbHermesParseXMLTable fbParseBrdAvlExternal;
_BUR_LOCAL struct fbHermesParseXMLTable fbParseXMLTable;
_BUR_LOCAL struct fbTCPClose fbCloseClnt;
_BUR_LOCAL struct fbTCPClose fbCloseSvr;
_BUR_LOCAL struct fbTCPSnd fbSend;
_BUR_LOCAL struct fbTCPRcv fbRcv;
_BUR_LOCAL struct fbTCPListen fbListen;
_BUR_LOCAL struct fbTCPCreateSvr fbCreateSvr;
_BUR_LOCAL struct tyHermesCommand tyCommandSnd;
_BUR_LOCAL struct tyHermesCommand tyCommandRcv;
_BUR_LOCAL struct tyHermesSendBoardInfo tySendBoardInfo;
_BUR_LOCAL struct tyHermesQueryBoardInfo tyQueryBoardInfo;
_BUR_LOCAL struct tyHermesBoardForecast tyBoardForecastSnd;
_BUR_LOCAL struct tyHermesBoardForecast tyBoardForecastRcv;
_BUR_LOCAL struct tyHermesCurrentConfiguration tyCurrentConfiguration;
_BUR_LOCAL struct tyHermesSetConfiguration tySetConfiguration;
_BUR_LOCAL struct tyHermesTransportFinished tyTransportFinished;
_BUR_LOCAL struct tyHermesStopTransport tyStopTransport;
_BUR_LOCAL struct tyHermesStartTransport tyStartTransport;
_BUR_LOCAL struct tyHermesMachineReady tyMachineReady;
_BUR_LOCAL struct tyHermesBoardAvailable a_tyBoardDepartedInfoWr[50];
_BUR_LOCAL struct tyHermesBoardAvailable a_tyBoardDepartedInfo[50];
_BUR_LOCAL struct tyHermesBoardAvailable tyBoardAvailableSnd;
_BUR_LOCAL struct tyHermesBoardAvailable tyBoardAvailableRcv;
_BUR_LOCAL struct tyHermesNotification tyNotificationRcv;
_BUR_LOCAL struct tyHermesNotification tyNotificationSnd;
_BUR_LOCAL struct tyHermesServiceDescription tyServiceDescriptionRcv;
_BUR_LOCAL struct tyHermesServiceDescription tyServiceDescriptionSnd;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePongRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePingRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAliveRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePongSnd;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePingSnd;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAliveSnd;
_BUR_LOCAL struct tyHermesMsgType tyMsgTypeRcv;
_BUR_LOCAL enum eHermesCommand a_eCommandSndQ[21];
_BUR_LOCAL enum eHermesMsgType a_eMsgSend[51];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataSnd[201];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataRcv[201];
_BUR_LOCAL plcstring sRcv[65536];
_BUR_LOCAL plcstring sSnd[65536];
_BUR_LOCAL unsigned long udiSndMsgLen;
_BUR_LOCAL unsigned long udiMsgCmdBffr;
_BUR_LOCAL unsigned long udiMsgSendBffr;
_BUR_LOCAL unsigned long udiXMLTableWriteIdx;
_BUR_LOCAL unsigned long udiClntIdentExtra;
_BUR_LOCAL unsigned long udiClntIdent;
_BUR_LOCAL unsigned long udiSvrIdent;
_BUR_LOCAL plcbit bRstState;
_BUR_LOCAL plcbit bRstConnection;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcstring sInternalRcv[65536];
_BUR_LOCAL plcbit bInternalUse;
_BUR_LOCAL plcbit bRmtEn;
_BUR_LOCAL plcbit bRmtPrep;
_BUR_LOCAL plcstring sRmtMcId[81];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL unsigned long udiFileKeepDay;
_BUR_LOCAL plcbit bInterruptSen;
_BUR_LOCAL plcbit bOpsRun;
_BUR_LOCAL plcbit bNewBrdAvl;
_BUR_LOCAL signed short iXMLTableDataBrdAvlTtlIdx;
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataBrdAvl[201];
_BUR_LOCAL signed long diTransferInTO;
_BUR_LOCAL plctime tConnTimeOut;
_BUR_LOCAL unsigned long udiAliveIdleTimeInSec;
_BUR_LOCAL unsigned long udiRcvBffrSize;
_BUR_LOCAL unsigned long udiSndBffrSize;
_BUR_LOCAL signed long diSltToSltInUM;
_BUR_LOCAL signed long diTtlSlt;
_BUR_LOCAL signed long diPitch;
_BUR_LOCAL signed long diMaxSltValue;
_BUR_LOCAL signed long diMinSltValue;
_BUR_LOCAL signed long diWidthInUM;
_BUR_LOCAL plcstring sBatchId[81];
_BUR_LOCAL plcstring sWorkOrderId[81];
_BUR_LOCAL float rWeight;
_BUR_LOCAL float rBottomClearanceHeight;
_BUR_LOCAL float rTopClearanceHeight;
_BUR_LOCAL float rConveyorSpeed;
_BUR_LOCAL float rThickness;
_BUR_LOCAL float rLength;
_BUR_LOCAL plcstring sBottomBarcode[255];
_BUR_LOCAL plcstring sTopBarcode[255];
_BUR_LOCAL enum eHermesFlippedBoard eFlippedBoard;
_BUR_LOCAL plcstring sRecipeNm[255];
_BUR_LOCAL enum eHermesFailedBoard eFailedBoard;
_BUR_LOCAL plcstring sVersion[8];
_BUR_LOCAL plcstring sInterfaceId[81];
_BUR_LOCAL plcstring sMcId[81];
_BUR_LOCAL plcbit bBFSltEn;
_BUR_LOCAL plcbit bBFWidthEn;
_BUR_LOCAL plcbit bBASltEn;
_BUR_LOCAL plcbit bBAWidthEn;
_BUR_LOCAL plcbit bSndNotStart;
_BUR_LOCAL plcbit bSndInCompl;
_BUR_LOCAL plcbit bSndCompl;
_BUR_LOCAL plcbit bRdySnd;
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL struct DTStructure tyDTStructure;
_BUR_LOCAL unsigned char a_usiMacAddr[6];
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL struct tyHermesDSParam tyParam;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcstring sInternalSnd[65536];
_BUR_LOCAL plcbit bStopTransport;
_BUR_LOCAL plcbit bTransporting;
_BUR_LOCAL plcbit bDSGdRdy;
_BUR_LOCAL plcbit bUSGdRdy;
_BUR_LOCAL plcbit bDSRdy;
_BUR_LOCAL plcbit bUSRdy;
_BUR_LOCAL plcbit bHandshakeDone;
_BUR_LOCAL plcbit bConnected;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[200];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyInfoData;
_BUR_LOCAL struct tyAlmDat tyAlmData4;
_BUR_LOCAL struct tyAlmDat tyAlmData3;
_BUR_LOCAL struct tyAlmDat tyAlmData2;
_BUR_LOCAL struct tyAlmDat tyAlmData1;
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus4;
_BUR_LOCAL unsigned long udiStatus3;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus3;
_BUR_LOCAL enum eFBStatus eStatus2;
_BUR_LOCAL enum eFBStatus eStatus1;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eFBStatus eMainStatus;
_BUR_LOCAL enum eHermesAction eStat;
_BUR_LOCAL enum eHermesAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtHermes/NtHermes.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTCP/NtTCP.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_181_ */

