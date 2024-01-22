/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700536045_1_
#define _BUR_1700536045_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL signed short i;
_BUR_LOCAL signed short iWriteLogStep;
_BUR_LOCAL signed long diReqWidthInUM;
_BUR_LOCAL unsigned long udiRetainDataLen;
_BUR_LOCAL unsigned long udiRetainDataAddr;
_BUR_LOCAL unsigned long udiSizeAddress1;
_BUR_LOCAL unsigned long udiSizeAddress;
_BUR_LOCAL unsigned long udiTargetAddress1;
_BUR_LOCAL unsigned long udiTargetAddress;
_BUR_LOCAL struct TON fbDelayTm1;
_BUR_LOCAL struct TON fbDelayTm;
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
_BUR_LOCAL struct tyHermesSvyParam tyParamOld;
_BUR_LOCAL enum eHermesAction eStatOld;
_BUR_LOCAL struct fbHermesSequenceSvyTO fbSequenceTO;
_BUR_LOCAL struct fbHermesSequenceSvy fbSequenceSvy;
_BUR_LOCAL struct fbHermesCheckAliveRcvPing fbCheckAliveRcvPing;
_BUR_LOCAL struct fbHermesCheckAliveSendPing fbCheckAliveSendPing;
_BUR_LOCAL struct fbHermesCheckAlive fbCheckAlive;
_BUR_LOCAL struct fbHermesParseXMLTable fbParseXMLTable;
_BUR_LOCAL struct fbTCPClose fbCloseClnt;
_BUR_LOCAL struct fbTCPClose fbCloseSvr;
_BUR_LOCAL struct fbTCPSnd fbSend;
_BUR_LOCAL struct fbTCPRcv fbRcv;
_BUR_LOCAL struct fbTCPListen fbListen;
_BUR_LOCAL struct fbTCPCreateSvr fbCreateSvr;
_BUR_LOCAL struct tyHermesReplyWorkOrderInfo tyReplyWorkOrderInfo;
_BUR_LOCAL struct tyHermesSendWorkOrderInfo tySendWorkOrderInfoRcv;
_BUR_LOCAL struct tyHermesSendWorkOrderInfo tySendWorkOrderInfoAcc;
_BUR_LOCAL struct tyHermesQueryWorkOrderInfo tyQueryWorkOrderInfo;
_BUR_LOCAL struct tyHermesSendBoardInfo tySendBoardInfo;
_BUR_LOCAL struct tyHermesQueryBoardInfo tyQueryBoardInfo;
_BUR_LOCAL struct tyHermesBoardDeparted tyBoardDeparted4;
_BUR_LOCAL struct tyHermesBoardDeparted tyBoardDeparted3;
_BUR_LOCAL struct tyHermesBoardDeparted tyBoardDeparted2;
_BUR_LOCAL struct tyHermesBoardDeparted tyBoardDeparted1;
_BUR_LOCAL struct tyHermesBoardDeparted tyBoardDepartedRcv;
_BUR_LOCAL struct tyHermesBoardArrived tyBoardArrived4;
_BUR_LOCAL struct tyHermesBoardArrived tyBoardArrived3;
_BUR_LOCAL struct tyHermesBoardArrived tyBoardArrived2;
_BUR_LOCAL struct tyHermesBoardArrived tyBoardArrived1;
_BUR_LOCAL struct tyHermesBoardArrived tyBoardArrivedRcv;
_BUR_LOCAL struct tyHermesBoardForecast tyBoardForecast;
_BUR_LOCAL struct tyHermesCurrentConfiguration tyCurrentConfigurationSnd;
_BUR_LOCAL struct tyHermesCurrentConfiguration tyCurrentConfigurationRcv;
_BUR_LOCAL struct tyHermesSetConfiguration tySetConfigurationModified;
_BUR_LOCAL struct tyHermesSetConfiguration tySetConfigurationRcv;
_BUR_LOCAL struct tyHermesSetConfiguration tySetConfiguration;
_BUR_LOCAL struct tyHermesTransportFinished tyTransportFinished;
_BUR_LOCAL struct tyHermesStopTransport tyStopTransport;
_BUR_LOCAL struct tyHermesStartTransport tyStartTransport;
_BUR_LOCAL struct tyHermesMachineReady tyMachineReady;
_BUR_LOCAL struct tyHermesBoardAvailable tyBoardAvailableRcv;
_BUR_LOCAL struct tyHermesNotification tyNotificationRcv;
_BUR_LOCAL struct tyHermesNotification tyNotificationSnd;
_BUR_LOCAL struct tyHermesSServiceDescription tySServiceDescriptionRcv;
_BUR_LOCAL struct tyHermesSServiceDescription tySServiceDescriptionSnd;
_BUR_LOCAL struct tyHermesServiceDescription tyServiceDescriptionRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePongRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePingRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAliveRcv;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePongSnd;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAlivePingSnd;
_BUR_LOCAL struct tyHermesCheckAlive tyCheckAliveSnd;
_BUR_LOCAL struct tyHermesMsgType tyMsgTypeRcv;
_BUR_LOCAL enum eHermesMsgType a_eMsgSend[51];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataSnd[201];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataRcv[201];
_BUR_LOCAL plcstring sRcv[65536];
_BUR_LOCAL plcstring sSnd[65536];
_BUR_LOCAL unsigned long udiSndMsgLen;
_BUR_LOCAL unsigned long udiMsgSendBffr;
_BUR_LOCAL unsigned long udiXMLTableWriteIdx;
_BUR_LOCAL unsigned long udiClntIdentExtra;
_BUR_LOCAL unsigned long udiClntIdent;
_BUR_LOCAL unsigned long udiSvrIdent;
_BUR_LOCAL signed short jjjj;
_BUR_LOCAL signed short jjj;
_BUR_LOCAL signed short jj;
_BUR_LOCAL signed short j;
_BUR_LOCAL unsigned long kk;
_BUR_LOCAL unsigned long k;
_BUR_LOCAL unsigned long udiFoundIndexDS4;
_BUR_LOCAL unsigned long udiFoundIndexDS3;
_BUR_LOCAL unsigned long udiFoundIndexDS2;
_BUR_LOCAL unsigned long udiFoundIndexDS1;
_BUR_LOCAL unsigned long udiFoundIndexUS4;
_BUR_LOCAL unsigned long udiFoundIndexUS3;
_BUR_LOCAL unsigned long udiFoundIndexUS2;
_BUR_LOCAL unsigned long udiFoundIndexUS1;
_BUR_LOCAL plcbit bFoundIndexDS4;
_BUR_LOCAL plcbit bFoundIndexDS3;
_BUR_LOCAL plcbit bFoundIndexDS2;
_BUR_LOCAL plcbit bFoundIndexDS1;
_BUR_LOCAL plcbit bFoundIndexUS4;
_BUR_LOCAL plcbit bFoundIndexUS3;
_BUR_LOCAL plcbit bFoundIndexUS2;
_BUR_LOCAL plcbit bFoundIndexUS1;
_BUR_LOCAL plcbit bReplyWorkOrderInfo;
_BUR_LOCAL plcbit bRstWorkOrderInfo;
_BUR_LOCAL plcbit bRcvInsertBoardInfo;
_BUR_LOCAL plcbit bRcvWorkOrderInfo2;
_BUR_LOCAL plcbit bRcvWorkOrderInfo1;
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
_BUR_LOCAL struct tyHermesBoardAvailable tyDSHermesBoardDepartedData4;
_BUR_LOCAL struct tyHermesBoardAvailable tyDSHermesBoardDepartedData3;
_BUR_LOCAL struct tyHermesBoardAvailable tyDSHermesBoardDepartedData2;
_BUR_LOCAL struct tyHermesBoardAvailable tyDSHermesBoardDepartedData1;
_BUR_LOCAL struct tyHermesBoardAvailable tyUSHermesBoardArrivedData4;
_BUR_LOCAL struct tyHermesBoardAvailable tyUSHermesBoardArrivedData3;
_BUR_LOCAL struct tyHermesBoardAvailable tyUSHermesBoardArrivedData2;
_BUR_LOCAL struct tyHermesBoardAvailable tyUSHermesBoardArrivedData1;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd4;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd3;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd2;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd1;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd4;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd3;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd2;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd1;
_BUR_LOCAL plcbit bFirstMcIntheLine;
_BUR_LOCAL plcbit bDeleteWorkOrder;
_BUR_LOCAL plcbit bAllZonesEmpty;
_BUR_LOCAL plcbit bAcceptCondition;
_BUR_LOCAL plcbit bQueryInsertBoard;
_BUR_LOCAL plcbit bManualInsertData;
_BUR_LOCAL plcbit bInsertBoard;
_BUR_LOCAL plcbit bReinsertBrd;
_BUR_LOCAL plcbit bQueryWorkOrderInfo;
_BUR_LOCAL struct tyHermesConfiguration tyHermesCurrConfiguration;
_BUR_LOCAL plcbit bEndSen;
_BUR_LOCAL plcstring sInfoMsg6[201];
_BUR_LOCAL plcstring sInfoMsg5[201];
_BUR_LOCAL plcstring sInfoMsg4[201];
_BUR_LOCAL plcstring sInfoMsg3[201];
_BUR_LOCAL plcstring sInfoMsg2[201];
_BUR_LOCAL plcstring sInfoMsg1[201];
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcbit bSvyEn;
_BUR_LOCAL plcbit bSvyPrep;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sRetainFileName[81];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sConfigFileName[81];
_BUR_LOCAL unsigned long udiFileKeepDay;
_BUR_LOCAL plcbit bOpsRun;
_BUR_LOCAL plcbit bNewBrdAvl;
_BUR_LOCAL signed long diTransferInTO;
_BUR_LOCAL plctime tConnTimeOut;
_BUR_LOCAL unsigned long udiAliveIdleTimeInSec;
_BUR_LOCAL unsigned long udiRcvBffrSize;
_BUR_LOCAL unsigned long udiSndBffrSize;
_BUR_LOCAL plcstring sRecipeNm[255];
_BUR_LOCAL plcstring sBatchId[81];
_BUR_LOCAL plcstring sWorkOrderId[81];
_BUR_LOCAL plcstring sVersion[8];
_BUR_LOCAL enum eHermesBoardTransfer eBoardTransfer4;
_BUR_LOCAL enum eHermesBoardTransfer eBoardTransfer3;
_BUR_LOCAL enum eHermesBoardTransfer eBoardTransfer2;
_BUR_LOCAL enum eHermesBoardTransfer eBoardTransfer1;
_BUR_LOCAL plcstring sBarcode[255];
_BUR_LOCAL signed short iSlotId;
_BUR_LOCAL plcstring sMagazineId[81];
_BUR_LOCAL plcstring sMcId[81];
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL struct DTStructure tyDTStructure;
_BUR_LOCAL unsigned char a_usiMacAddr[6];
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL struct tyHermesSvyParam tyParam;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bUpdateUIData;
_BUR_LOCAL plcbit bWriteConfig;
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL plcstring sInternalSnd[65536];
_BUR_LOCAL plcbit bHandshakeDone;
_BUR_LOCAL plcbit bTest2;
_BUR_LOCAL plcbit bTest1;
_BUR_LOCAL plcbit bTest;
_BUR_LOCAL plcbit bConnected;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[200];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyInfoData6;
_BUR_LOCAL struct tyAlmDat tyInfoData5;
_BUR_LOCAL struct tyAlmDat tyInfoData4;
_BUR_LOCAL struct tyAlmDat tyInfoData3;
_BUR_LOCAL struct tyAlmDat tyInfoData2;
_BUR_LOCAL struct tyAlmDat tyInfoData1;
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
_BUR_LOCAL enum eMcParamAction eMcParamAct;
_BUR_LOCAL enum eHermesAction eHermesAct;
_BUR_LOCAL enum eHermesAction eStat;
_BUR_LOCAL enum eHermesAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/SvyHermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtHermes/NtHermes.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTCP/NtTCP.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700536045_1_ */

