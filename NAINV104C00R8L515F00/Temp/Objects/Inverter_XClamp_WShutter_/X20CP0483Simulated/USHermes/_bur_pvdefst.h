#ifndef __AS__TYPE_tyProdRcpParam
#define __AS__TYPE_tyProdRcpParam
typedef struct tyProdRcpParam
{	plcstring sRcpNm[255];
	signed long diWidthInUM;
	signed long diWidthInUM2;
	unsigned char usiMcMod;
	plcstring sDisplayInfo[31];
	plcdt dtLastModified;
	unsigned char usiFlippedBrd;
	plcstring sMatchCode[31];
} tyProdRcpParam;
#endif

#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
#endif

#ifndef __AS__TYPE_eConvDir
#define __AS__TYPE_eConvDir
typedef enum eConvDir
{	ConvDirLToR = 0,
	ConvDirRToL = 1,
	ConvDirLToL = 2,
	ConvDirRToR = 3,
} eConvDir;
#endif

#ifndef __AS__TYPE_eHermesAction
#define __AS__TYPE_eHermesAction
typedef enum eHermesAction
{	HermesActIdle = 0,
	HermesActBGStartRun = 1,
	HermesActBGStopRun = 2,
	HermesActDeleteOldLog = 3,
	HermesActCreateDir = 4,
	HermesActWriteRetain = 5,
	HermesActWriteRetainLane1 = 6,
	HermesActWriteRetainLane2 = 7,
	HermesActWriteRetainLane3 = 8,
	HermesActWriteRetainLane4 = 9,
	HermesActReadRetain = 10,
	HermesActReadRetainLane1 = 11,
	HermesActReadRetainLane2 = 12,
	HermesActReadRetainLane3 = 13,
	HermesActReadRetainLane4 = 14,
	HermesActWriteConfig = 15,
	HermesActReadConfig = 16,
} eHermesAction;
#endif

#ifndef __AS__TYPE_tyHermesDSParam
#define __AS__TYPE_tyHermesDSParam
typedef struct tyHermesDSParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	plcstring sDownstreamInterfaceId[81];
	unsigned short uiSvrPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sClientAddress[16];
	unsigned short uiClientPort;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesDSParam;
#endif

#ifndef __AS__TYPE_tyHermesUSParam
#define __AS__TYPE_tyHermesUSParam
typedef struct tyHermesUSParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	unsigned short uiClntPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sHostAddress[16];
	unsigned short uiHostPort;
	plcstring sUpstreamInterfaceId[81];
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureCommand;
	plcbit bCmpTypeId;
	plcbit bCmpParam;
	plcbit bOverwrite;
} tyHermesUSParam;
#endif

#ifndef __AS__TYPE_DTStructure
#define __AS__TYPE_DTStructure
typedef struct DTStructure
{	unsigned short year;
	unsigned char month;
	unsigned char day;
	unsigned char wday;
	unsigned char hour;
	unsigned char minute;
	unsigned char second;
	unsigned short millisec;
	unsigned short microsec;
} DTStructure;
#endif

#ifndef __AS__TYPE_fiDIR_READ_DATA
#define __AS__TYPE_fiDIR_READ_DATA
typedef struct fiDIR_READ_DATA
{	unsigned char Filename[260];
	plcdt Date;
	unsigned long Filelength;
} fiDIR_READ_DATA;
#endif

#ifndef __AS__TYPE_fiFILE_INFO
#define __AS__TYPE_fiFILE_INFO
typedef struct fiFILE_INFO
{	unsigned long size;
	unsigned long linkCnt;
	plcdt accTime;
	plcdt modTime;
	plcdt chgTime;
	unsigned long reserved[21];
} fiFILE_INFO;
#endif

struct DirInfo
{	unsigned long pDevice;
	unsigned long pPath;
	unsigned short status;
	unsigned long dirnum;
	unsigned long filenum;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirInfo(struct DirInfo* inst);
#ifndef __AS__TYPE_tyDirInfoInternal
#define __AS__TYPE_tyDirInfoInternal
typedef struct tyDirInfoInternal
{	struct DirInfo fbDirInfo;
} tyDirInfoInternal;
#endif

struct fbDirInfo
{	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiSubDirNum;
	unsigned long udiFileNum;
	unsigned long udiStatus;
	tyDirInfoInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirInfo(struct fbDirInfo* inst);
struct DirRead
{	unsigned long pDevice;
	unsigned long pPath;
	unsigned long entry;
	unsigned char option;
	unsigned long pData;
	unsigned long data_len;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirRead(struct DirRead* inst);
#ifndef __AS__TYPE_tyDirReadInternal
#define __AS__TYPE_tyDirReadInternal
typedef struct tyDirReadInternal
{	struct DirRead fbDirRead;
} tyDirReadInternal;
#endif

struct fbDirRead
{	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiEntry;
	unsigned char usiOption;
	fiDIR_READ_DATA tyDirReadData;
	unsigned long udiStatus;
	tyDirReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirRead(struct fbDirRead* inst);
struct FileDelete
{	unsigned long pDevice;
	unsigned long pName;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileDelete(struct FileDelete* inst);
#ifndef __AS__TYPE_tyFileDeleteInternal
#define __AS__TYPE_tyFileDeleteInternal
typedef struct tyFileDeleteInternal
{	struct FileDelete fbFileDelete;
} tyFileDeleteInternal;
#endif

struct fbFileDelete
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiStatus;
	tyFileDeleteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileDelete(struct fbFileDelete* inst);
#ifndef __AS__TYPE_tyFileOldDelInternal
#define __AS__TYPE_tyFileOldDelInternal
typedef struct tyFileOldDelInternal
{	struct fbDirInfo fbDirInfo;
	struct fbDirRead fbDirRead;
	struct fbFileDelete fbFileDel;
	plcstring sFileNm[261];
	fiDIR_READ_DATA tyfiDIR_READ_DATA;
	unsigned long udiDTNow;
	unsigned long udiFileDT;
	unsigned long udiFileKeep;
	unsigned long udiFileNum;
	unsigned long udiKeywordLen;
	unsigned char usiStep;
} tyFileOldDelInternal;
#endif

struct FileClose
{	unsigned long ident;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileClose(struct FileClose* inst);
#ifndef __AS__TYPE_tyFileCloseInternal
#define __AS__TYPE_tyFileCloseInternal
typedef struct tyFileCloseInternal
{	struct FileClose fbFileClose;
} tyFileCloseInternal;
#endif

struct fbFileClose
{	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileCloseInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileClose(struct fbFileClose* inst);
struct FileCreate
{	unsigned long pDevice;
	unsigned long pFile;
	unsigned short status;
	unsigned long ident;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileCreate(struct FileCreate* inst);
struct FileOpen
{	unsigned long pDevice;
	unsigned long pFile;
	unsigned char mode;
	unsigned short status;
	unsigned long ident;
	unsigned long filelen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileOpen(struct FileOpen* inst);
#ifndef __AS__TYPE_tyFileOpenCreateInternal
#define __AS__TYPE_tyFileOpenCreateInternal
typedef struct tyFileOpenCreateInternal
{	struct FileCreate fbFileCreate;
	struct FileOpen fbFileOpen;
	unsigned char usiStep;
} tyFileOpenCreateInternal;
#endif

struct fbFileOpenCreate
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileOpenCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOpenCreate(struct fbFileOpenCreate* inst);
struct FileInfo
{	unsigned long pDevice;
	unsigned long pName;
	unsigned long pInfo;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileInfo(struct FileInfo* inst);
#ifndef __AS__TYPE_tyFileInfoInternal
#define __AS__TYPE_tyFileInfoInternal
typedef struct tyFileInfoInternal
{	struct FileInfo fbFileInfo;
} tyFileInfoInternal;
#endif

struct fbFileInfo
{	plcstring sDevice[81];
	plcstring sFile[81];
	fiFILE_INFO tyFileInfo;
	unsigned long udiStatus;
	tyFileInfoInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileInfo(struct fbFileInfo* inst);
struct FileWriteEx
{	unsigned long ident;
	unsigned long offset;
	unsigned long pSrc;
	unsigned long len;
	unsigned long option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileWriteEx(struct FileWriteEx* inst);
#ifndef __AS__TYPE_tyFileWriteInternal
#define __AS__TYPE_tyFileWriteInternal
typedef struct tyFileWriteInternal
{	struct FileWriteEx fbFileWrite;
} tyFileWriteInternal;
#endif

struct fbFileWrite
{	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned long udiStatus;
	tyFileWriteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileWrite(struct fbFileWrite* inst);
#ifndef __AS__TYPE_tyFileFullAppendInternal
#define __AS__TYPE_tyFileFullAppendInternal
typedef struct tyFileFullAppendInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileInfo fbFileInfo;
	struct fbFileWrite fbFileWrite;
	fiFILE_INFO tyFileInfo;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullAppendInternal;
#endif

#ifndef __AS__TYPE_eTCPClntConnectStat
#define __AS__TYPE_eTCPClntConnectStat
typedef enum eTCPClntConnectStat
{	TCPClntConnectStatOpen = 0,
	TCPClntConnectStatSetup = 1,
	TCPClntConnectStatConnect = 2,
	TCPClntConnectStatClose = 3,
} eTCPClntConnectStat;
#endif

struct TcpOpen
{	unsigned long pIfAddr;
	unsigned short port;
	unsigned long options;
	unsigned short status;
	unsigned long ident;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpOpen(struct TcpOpen* inst);
#ifndef __AS__TYPE_tyTCPOpenPortInternal
#define __AS__TYPE_tyTCPOpenPortInternal
typedef struct tyTCPOpenPortInternal
{	struct TcpOpen fbTCPOpen;
} tyTCPOpenPortInternal;
#endif

struct fbTCPOpenPort
{	plcstring sIP[16];
	unsigned short uiPort;
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPOpenPortInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPOpenPort(struct fbTCPOpenPort* inst);
struct TcpIoctl
{	unsigned long ident;
	unsigned long ioctl;
	unsigned long pData;
	unsigned long datalen;
	unsigned short status;
	unsigned long outlen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpIoctl(struct TcpIoctl* inst);
#ifndef __AS__TYPE_tyTCPIoCtlSetInternal
#define __AS__TYPE_tyTCPIoCtlSetInternal
typedef struct tyTCPIoCtlSetInternal
{	struct TcpIoctl fbTCPIoCtl;
} tyTCPIoCtlSetInternal;
#endif

struct fbTCPSndBffrSet
{	unsigned long udiTCPIdent;
	unsigned long udiSndBffrSize;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPSndBffrSet(struct fbTCPSndBffrSet* inst);
struct fbTCPRcvBffrSet
{	unsigned long udiTCPIdent;
	unsigned long udiRcvBffrSize;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPRcvBffrSet(struct fbTCPRcvBffrSet* inst);
struct fbTCPAliveEnSet
{	unsigned long udiTCPIdent;
	unsigned long udiEn;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveEnSet(struct fbTCPAliveEnSet* inst);
struct fbTCPAliveCntSet
{	unsigned long udiTCPIdent;
	unsigned long udiCnt;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveCntSet(struct fbTCPAliveCntSet* inst);
struct fbTCPAliveIdleSet
{	unsigned long udiTCPIdent;
	unsigned long udiIdleTmInSec;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveIdleSet(struct fbTCPAliveIdleSet* inst);
struct fbTCPAliveIntvlSet
{	unsigned long udiTCPIdent;
	unsigned long udiIntvlTmInSec;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveIntvlSet(struct fbTCPAliveIntvlSet* inst);
#ifndef __AS__TYPE_tyTCPKeepAliveSetInternal
#define __AS__TYPE_tyTCPKeepAliveSetInternal
typedef struct tyTCPKeepAliveSetInternal
{	struct fbTCPAliveEnSet fbTCPAliveEnSet;
	struct fbTCPAliveCntSet fbTCPAliveCntSet;
	struct fbTCPAliveIdleSet fbTCPAliveIdleSet;
	struct fbTCPAliveIntvlSet fbTCPAliveIntvlSet;
	unsigned char usiStep;
} tyTCPKeepAliveSetInternal;
#endif

struct fbTCPKeepAliveSet
{	unsigned long udiTCPIdent;
	unsigned long udiEn;
	unsigned long udiCnt;
	unsigned long udiIdleTmInSec;
	unsigned long udiIntvlTmInSec;
	unsigned long udiStatus;
	tyTCPKeepAliveSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPKeepAliveSet(struct fbTCPKeepAliveSet* inst);
struct fbTCPListenNoWaitingSet
{	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
	plcbit bEnNoWaiting;
};
_BUR_PUBLIC void fbTCPListenNoWaitingSet(struct fbTCPListenNoWaitingSet* inst);
struct TcpClient
{	unsigned long ident;
	unsigned long pServer;
	unsigned short portserv;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpClient(struct TcpClient* inst);
#ifndef __AS__TYPE_tyTCPConnectInternal
#define __AS__TYPE_tyTCPConnectInternal
typedef struct tyTCPConnectInternal
{	struct TcpClient fbTCPConnect;
} tyTCPConnectInternal;
#endif

struct fbTCPConnect
{	unsigned long udiTCPIdent;
	plcstring sSvrIP[16];
	unsigned short uiSvrPort;
	unsigned long udiStatus;
	tyTCPConnectInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPConnect(struct fbTCPConnect* inst);
struct TcpClose
{	unsigned long ident;
	unsigned long how;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpClose(struct TcpClose* inst);
#ifndef __AS__TYPE_tyTCPCloseInternal
#define __AS__TYPE_tyTCPCloseInternal
typedef struct tyTCPCloseInternal
{	struct TcpClose fbTCPClose;
} tyTCPCloseInternal;
#endif

struct fbTCPClose
{	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPCloseInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPClose(struct fbTCPClose* inst);
struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
#ifndef __AS__TYPE_tyTCPClntConnectInternal
#define __AS__TYPE_tyTCPClntConnectInternal
typedef struct tyTCPClntConnectInternal
{	eTCPClntConnectStat eStat;
	struct fbTCPOpenPort fbTCPOpenPort;
	struct fbTCPSndBffrSet fbTCPSndBffrSet;
	struct fbTCPRcvBffrSet fbTCPRcvBffrSet;
	struct fbTCPKeepAliveSet fbTCPKeepAliveSet;
	struct fbTCPListenNoWaitingSet fbTCPListenNoWaitingSet;
	struct fbTCPConnect fbTCPConnect;
	struct fbTCPClose fbTCPClose;
	struct TON fbConnectTO;
	unsigned char usiSetupStep;
	unsigned long udiErrStatus;
} tyTCPClntConnectInternal;
#endif

struct TcpSend
{	unsigned long ident;
	unsigned long pData;
	unsigned long datalen;
	unsigned long flags;
	unsigned short status;
	unsigned long sentlen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpSend(struct TcpSend* inst);
#ifndef __AS__TYPE_tyTCPSndInternal
#define __AS__TYPE_tyTCPSndInternal
typedef struct tyTCPSndInternal
{	struct TcpSend fbTCPSnd;
	unsigned char usiRetryCnt;
} tyTCPSndInternal;
#endif

struct TcpRecv
{	unsigned long ident;
	unsigned long pData;
	unsigned long datamax;
	unsigned long flags;
	unsigned short status;
	unsigned long recvlen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpRecv(struct TcpRecv* inst);
#ifndef __AS__TYPE_tyTCPRcvInternal
#define __AS__TYPE_tyTCPRcvInternal
typedef struct tyTCPRcvInternal
{	struct TcpRecv fbTCPRcv;
} tyTCPRcvInternal;
#endif

#ifndef __AS__TYPE_tyXMLTableDat
#define __AS__TYPE_tyXMLTableDat
typedef struct tyXMLTableDat
{	plcstring sTitle[3];
	plcstring sValue[255];
	unsigned short uiSize;
} tyXMLTableDat;
#endif

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
#endif

#ifndef __AS__TYPE_tyAlmTxt
#define __AS__TYPE_tyAlmTxt
typedef struct tyAlmTxt
{	plcstring sAlmText[201];
	plcstring sRcyText[201];
} tyAlmTxt;
#endif

#ifndef __AS__TYPE_eAlmSeverity
#define __AS__TYPE_eAlmSeverity
typedef enum eAlmSeverity
{	AlmSeverityNA = 0,
	AlmSeverityError = 1,
	AlmSeverityWarning = 2,
	AlmSeverityInfo = 3,
} eAlmSeverity;
#endif

#ifndef __AS__TYPE_tyAlmDat
#define __AS__TYPE_tyAlmDat
typedef struct tyAlmDat
{	unsigned long udiCode;
	eAlmSeverity eSeverity;
	plcstring sProgNm[16];
	plcstring sAlmMsg[201];
	plcstring sRcyMsg[201];
	unsigned long udiRunTime;
	unsigned long udiModuleNum;
	plcbit bAlm;
	plcbit bWarning;
} tyAlmDat;
#endif

#ifndef __AS__TYPE_eHermesState
#define __AS__TYPE_eHermesState
typedef enum eHermesState
{	HermesStateNotConnected = 0,
	HermesStateConnected = 1,
	HermesStateServiceDescription = 2,
	HermesStateSServiceDescription = 3,
	HermesStateNotAvailableNotReady = 4,
	HermesStateBoardAvailable = 5,
	HermesStateMachineReady = 6,
	HermesStateAvailableAndReady = 7,
	HermesStateTransporting = 8,
	HermesStateTransportStopped = 9,
	HermesStateTransportFinished = 10,
} eHermesState;
#endif

#ifndef __AS__TYPE_tyHermesMsgType
#define __AS__TYPE_tyHermesMsgType
typedef struct tyHermesMsgType
{	plcbit bCheckAlive;
	plcbit bCheckAlivePing;
	plcbit bCheckAlivePong;
	plcbit bServiceDescription;
	plcbit bSServiceDescription;
	plcbit bNotification;
	plcbit bBoardAvailable;
	plcbit bRevokeBoardAvailable;
	plcbit bMachineReady;
	plcbit bRevokeMachineReady;
	plcbit bStartTransport;
	plcbit bStopTransport;
	plcbit bTransportFinished;
	plcbit bSetConfiguration;
	plcbit bGetConfiguration;
	plcbit bCurrentConfiguration;
	plcbit bBoardForecast;
	plcbit bBoardArrived;
	plcbit bBoardDeparted;
	plcbit bQueryBoardInfo;
	plcbit bSendBoardInfo;
	plcbit bQueryWorkOrderInfo;
	plcbit bSendWorkOrderInfo;
	plcbit bCommand;
} tyHermesMsgType;
#endif

#ifndef __AS__TYPE_eHermesMsgType
#define __AS__TYPE_eHermesMsgType
typedef enum eHermesMsgType
{	HermesMsgTypeNA = 0,
	HermesMsgTypeCheckAlive = 1,
	HermesMsgTypeCheckAlivePing = 2,
	HermesMsgTypeCheckAlivePong = 3,
	HermesMsgTypeServiceDescription = 4,
	HermesMsgTypeSServiceDescription = 5,
	HermesMsgTypeNotification = 6,
	HermesMsgTypeBoardAvailable = 7,
	HermesMsgTypeRevokeBoardAvl = 8,
	HermesMsgTypeMachineReady = 9,
	HermesMsgTypeRevokeMachineReady = 10,
	HermesMsgTypeStartTransport = 11,
	HermesMsgTypeStopTransport = 12,
	HermesMsgTypeTransportFinished = 13,
	HermesMsgTypeSetConfiguration = 14,
	HermesMsgTypeGetConfiguration = 15,
	HermesMsgTypeCurrConfiguration = 16,
	HermesMsgTypeBoardForecast = 17,
	HermesMsgTypeBoardForecastId = 18,
	HermesMsgTypeBoardForecastNoId = 19,
	HermesMsgTypeBoardArrived = 20,
	HermesMsgTypeBoardArrived1 = 21,
	HermesMsgTypeBoardArrived2 = 22,
	HermesMsgTypeBoardArrived3 = 23,
	HermesMsgTypeBoardArrived4 = 24,
	HermesMsgTypeBoardDeparted = 25,
	HermesMsgTypeBoardDeparted1 = 26,
	HermesMsgTypeBoardDeparted2 = 27,
	HermesMsgTypeBoardDeparted3 = 28,
	HermesMsgTypeBoardDeparted4 = 29,
	HermesMsgTypeQueryBoardInfo = 30,
	HermesMsgTypeSendBoardInfo = 31,
	HermesMsgTypeQueryWorkOrderInfo = 32,
	HermesMsgTypeSendWorkOrderInfo = 33,
	HermesMsgTypeReplyWorkOrderInfo = 34,
	HermesMsgTypeCommand = 35,
} eHermesMsgType;
#endif

#ifndef __AS__TYPE_eHermesCheckAliveType
#define __AS__TYPE_eHermesCheckAliveType
typedef enum eHermesCheckAliveType
{	HermesCheckAliveTypeUnknown = 0,
	HermesCheckAliveTypePing = 1,
	HermesCheckAliveTypePong = 2,
} eHermesCheckAliveType;
#endif

#ifndef __AS__TYPE_eHermesBoardTransfer
#define __AS__TYPE_eHermesBoardTransfer
typedef enum eHermesBoardTransfer
{	HermesTransferred = 1,
	HermesLoaded = 2,
	HermesInserted = 3,
} eHermesBoardTransfer;
#endif

#ifndef __AS__TYPE_eHermesFailedBoard
#define __AS__TYPE_eHermesFailedBoard
typedef enum eHermesFailedBoard
{	HermesUnknownBoard = 0,
	HermesGoodBoard = 1,
	HermesFailedBoard = 2,
} eHermesFailedBoard;
#endif

#ifndef __AS__TYPE_eHermesFlippedBoard
#define __AS__TYPE_eHermesFlippedBoard
typedef enum eHermesFlippedBoard
{	HermesFlippedBoardUnknownSide = 0,
	HermesFlippedBoardTopSideUp = 1,
	HermesFlippedBoardBtmSideUp = 2,
} eHermesFlippedBoard;
#endif

#ifndef __AS__TYPE_eHermesSeverity
#define __AS__TYPE_eHermesSeverity
typedef enum eHermesSeverity
{	HermesSeverityFatalError = 1,
	HermesSeverityError = 2,
	HermesSeverityWarning = 3,
	HermesSeverityInfo = 4,
} eHermesSeverity;
#endif

#ifndef __AS__TYPE_eHermesTransferState
#define __AS__TYPE_eHermesTransferState
typedef enum eHermesTransferState
{	HermesTransferStateNotStarted = 1,
	HermesTransferStateIncomplete = 2,
	HermesTransferStateComplete = 3,
} eHermesTransferState;
#endif

#ifndef __AS__TYPE_eHermesCommand
#define __AS__TYPE_eHermesCommand
typedef enum eHermesCommand
{	HermesCommandUndefined = 0,
	HermesCommandLockInputConveyor = 1,
	HermesCommandUnLockInputConveyor = 2,
	HermesCommandRequestPause = 3,
	HermesCommandConfirmPause = 4,
	HermesCommandResumeOperation = 5,
	HermesCommandOvenInfeed = 1000,
	HermesCommandSelfDefine = 1001,
} eHermesCommand;
#endif

#ifndef __AS__TYPE_tyHermesCommandParam
#define __AS__TYPE_tyHermesCommandParam
typedef struct tyHermesCommandParam
{	unsigned char usiCommandIdx;
	eHermesCommand eCommand;
	unsigned long udiMsgCmdBffr;
	eHermesCommand a_eCommandSndQ[21];
} tyHermesCommandParam;
#endif

#ifndef __AS__TYPE_tyHermesNotificationData
#define __AS__TYPE_tyHermesNotificationData
typedef struct tyHermesNotificationData
{	signed short iNotificationCode;
	eHermesSeverity eSeverity;
	plcstring sDescription[255];
} tyHermesNotificationData;
#endif

#ifndef __AS__TYPE_tyHermesNotificationAvl
#define __AS__TYPE_tyHermesNotificationAvl
typedef struct tyHermesNotificationAvl
{	plcbit bNotificationCode;
	plcbit bSeverity;
	plcbit bDescription;
} tyHermesNotificationAvl;
#endif

#ifndef __AS__TYPE_tyHermesNotification
#define __AS__TYPE_tyHermesNotification
typedef struct tyHermesNotification
{	tyHermesNotificationData tyData;
	tyHermesNotificationAvl tyAvl;
} tyHermesNotification;
#endif

#ifndef __AS__TYPE_tyHermesFeature
#define __AS__TYPE_tyHermesFeature
typedef struct tyHermesFeature
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeature;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescriptionData
#define __AS__TYPE_tyHermesServiceDescriptionData
typedef struct tyHermesServiceDescriptionData
{	plcstring sMachineId[81];
	plcstring sSystemId[81];
	signed short iLaneId;
	plcstring sInterfaceId[81];
	plcstring sVersion[8];
	tyHermesFeature tySupportedFeatures;
} tyHermesServiceDescriptionData;
#endif

#ifndef __AS__TYPE_tyHermesFeatureAvl
#define __AS__TYPE_tyHermesFeatureAvl
typedef struct tyHermesFeatureAvl
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeatureAvl;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescriptionAvl
#define __AS__TYPE_tyHermesServiceDescriptionAvl
typedef struct tyHermesServiceDescriptionAvl
{	plcbit bMachineId;
	plcbit bSystemId;
	plcbit bLaneId;
	plcbit bInterfaceId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	tyHermesFeatureAvl tySupportedFeatures;
} tyHermesServiceDescriptionAvl;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescription
#define __AS__TYPE_tyHermesServiceDescription
typedef struct tyHermesServiceDescription
{	tyHermesServiceDescriptionData tyData;
	tyHermesServiceDescriptionAvl tyAvl;
} tyHermesServiceDescription;
#endif

#ifndef __AS__TYPE_tyHermesSvyFeature
#define __AS__TYPE_tyHermesSvyFeature
typedef struct tyHermesSvyFeature
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
} tyHermesSvyFeature;
#endif

#ifndef __AS__TYPE_tyHermesSServiceDescriptionData
#define __AS__TYPE_tyHermesSServiceDescriptionData
typedef struct tyHermesSServiceDescriptionData
{	plcstring sSystemId[81];
	plcstring sMachineId[81];
	plcstring sVersion[8];
	tyHermesSvyFeature tySupportedFeatures;
} tyHermesSServiceDescriptionData;
#endif

#ifndef __AS__TYPE_tyHermesSvyFeatureAvl
#define __AS__TYPE_tyHermesSvyFeatureAvl
typedef struct tyHermesSvyFeatureAvl
{	plcbit bFeatureConfiguration;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
} tyHermesSvyFeatureAvl;
#endif

#ifndef __AS__TYPE_tyHermesSServiceDescriptionAvl
#define __AS__TYPE_tyHermesSServiceDescriptionAvl
typedef struct tyHermesSServiceDescriptionAvl
{	plcbit bSystemId;
	plcbit bMachineId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	tyHermesSvyFeatureAvl tySupportedFeatures;
} tyHermesSServiceDescriptionAvl;
#endif

#ifndef __AS__TYPE_tyHermesSServiceDescription
#define __AS__TYPE_tyHermesSServiceDescription
typedef struct tyHermesSServiceDescription
{	tyHermesSServiceDescriptionData tyData;
	tyHermesSServiceDescriptionAvl tyAvl;
} tyHermesSServiceDescription;
#endif

#ifndef __AS__TYPE_tyHermesCheckAliveData
#define __AS__TYPE_tyHermesCheckAliveData
typedef struct tyHermesCheckAliveData
{	eHermesCheckAliveType eType;
	plcstring sId[81];
} tyHermesCheckAliveData;
#endif

#ifndef __AS__TYPE_tyHermesCheckAliveAvl
#define __AS__TYPE_tyHermesCheckAliveAvl
typedef struct tyHermesCheckAliveAvl
{	plcbit bType;
	plcbit bId;
} tyHermesCheckAliveAvl;
#endif

#ifndef __AS__TYPE_tyHermesCheckAlive
#define __AS__TYPE_tyHermesCheckAlive
typedef struct tyHermesCheckAlive
{	tyHermesCheckAliveData tyData;
	tyHermesCheckAliveAvl tyAvl;
} tyHermesCheckAlive;
#endif

#ifndef __AS__TYPE_tyHermesBASubBoardsData
#define __AS__TYPE_tyHermesBASubBoardsData
typedef struct tyHermesBASubBoardsData
{	signed short iSubBoardsPos[5];
	plcstring sSubBoardsBc[5][81];
	signed short iSubBoardsSt[5];
} tyHermesBASubBoardsData;
#endif

#ifndef __AS__TYPE_tyHermesBoardAvailableData
#define __AS__TYPE_tyHermesBoardAvailableData
typedef struct tyHermesBoardAvailableData
{	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	signed short iRoute;
	signed short iAction;
	tyHermesBASubBoardsData tySubBoards;
} tyHermesBoardAvailableData;
#endif

#ifndef __AS__TYPE_tyHermesBASubBoardsAvl
#define __AS__TYPE_tyHermesBASubBoardsAvl
typedef struct tyHermesBASubBoardsAvl
{	plcbit bSubBoardsPos[5];
	plcbit bSubBoardsBc[5];
	plcbit bSubBoardsSt[5];
} tyHermesBASubBoardsAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardAvailableAvl
#define __AS__TYPE_tyHermesBoardAvailableAvl
typedef struct tyHermesBoardAvailableAvl
{	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bRoute;
	plcbit bAction;
	tyHermesBASubBoardsAvl tySubBoards;
} tyHermesBoardAvailableAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardAvailable
#define __AS__TYPE_tyHermesBoardAvailable
typedef struct tyHermesBoardAvailable
{	tyHermesBoardAvailableData tyData;
	tyHermesBoardAvailableAvl tyAvl;
} tyHermesBoardAvailable;
#endif

#ifndef __AS__TYPE_tyHermesMachineReadyData
#define __AS__TYPE_tyHermesMachineReadyData
typedef struct tyHermesMachineReadyData
{	eHermesFailedBoard eFailedBoard;
	plcstring sForecastId[81];
	plcstring sBoardId[37];
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
} tyHermesMachineReadyData;
#endif

#ifndef __AS__TYPE_tyHermesMachineReadyAvl
#define __AS__TYPE_tyHermesMachineReadyAvl
typedef struct tyHermesMachineReadyAvl
{	plcbit bFailedBoard;
	plcbit bForecastId;
	plcbit bBoardId;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
} tyHermesMachineReadyAvl;
#endif

#ifndef __AS__TYPE_tyHermesMachineReady
#define __AS__TYPE_tyHermesMachineReady
typedef struct tyHermesMachineReady
{	tyHermesMachineReadyData tyData;
	tyHermesMachineReadyAvl tyAvl;
} tyHermesMachineReady;
#endif

#ifndef __AS__TYPE_tyHermesStartTransportData
#define __AS__TYPE_tyHermesStartTransportData
typedef struct tyHermesStartTransportData
{	plcstring sBoardId[37];
	float rConveyorSpeed;
} tyHermesStartTransportData;
#endif

#ifndef __AS__TYPE_tyHermesStartTransportAvl
#define __AS__TYPE_tyHermesStartTransportAvl
typedef struct tyHermesStartTransportAvl
{	plcbit bBoardId;
	plcbit bConveyorSpeed;
} tyHermesStartTransportAvl;
#endif

#ifndef __AS__TYPE_tyHermesStartTransport
#define __AS__TYPE_tyHermesStartTransport
typedef struct tyHermesStartTransport
{	tyHermesStartTransportData tyData;
	tyHermesStartTransportAvl tyAvl;
} tyHermesStartTransport;
#endif

#ifndef __AS__TYPE_tyHermesStopTransportData
#define __AS__TYPE_tyHermesStopTransportData
typedef struct tyHermesStopTransportData
{	eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesStopTransportData;
#endif

#ifndef __AS__TYPE_tyHermesStopTransportAvl
#define __AS__TYPE_tyHermesStopTransportAvl
typedef struct tyHermesStopTransportAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesStopTransportAvl;
#endif

#ifndef __AS__TYPE_tyHermesStopTransport
#define __AS__TYPE_tyHermesStopTransport
typedef struct tyHermesStopTransport
{	tyHermesStopTransportData tyData;
	tyHermesStopTransportAvl tyAvl;
} tyHermesStopTransport;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinishedData
#define __AS__TYPE_tyHermesTransportFinishedData
typedef struct tyHermesTransportFinishedData
{	eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesTransportFinishedData;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinishedAvl
#define __AS__TYPE_tyHermesTransportFinishedAvl
typedef struct tyHermesTransportFinishedAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesTransportFinishedAvl;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinished
#define __AS__TYPE_tyHermesTransportFinished
typedef struct tyHermesTransportFinished
{	tyHermesTransportFinishedData tyData;
	tyHermesTransportFinishedAvl tyAvl;
} tyHermesTransportFinished;
#endif

#ifndef __AS__TYPE_tyHermesBoardForecastData
#define __AS__TYPE_tyHermesBoardForecastData
typedef struct tyHermesBoardForecastData
{	plcstring sForecastId[81];
	float rTimeUntilAvailable;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
} tyHermesBoardForecastData;
#endif

#ifndef __AS__TYPE_tyHermesBoardForecastAvl
#define __AS__TYPE_tyHermesBoardForecastAvl
typedef struct tyHermesBoardForecastAvl
{	plcbit bForecastId;
	plcbit bTimeUntilAvailable;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
} tyHermesBoardForecastAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardForecast
#define __AS__TYPE_tyHermesBoardForecast
typedef struct tyHermesBoardForecast
{	tyHermesBoardForecastData tyData;
	tyHermesBoardForecastAvl tyAvl;
} tyHermesBoardForecast;
#endif

#ifndef __AS__TYPE_tyHermesQueryBoardInfoData
#define __AS__TYPE_tyHermesQueryBoardInfoData
typedef struct tyHermesQueryBoardInfoData
{	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
} tyHermesQueryBoardInfoData;
#endif

#ifndef __AS__TYPE_tyHermesQueryBoardInfoAvl
#define __AS__TYPE_tyHermesQueryBoardInfoAvl
typedef struct tyHermesQueryBoardInfoAvl
{	plcbit bTopBarcode;
	plcbit bBottomBarcode;
} tyHermesQueryBoardInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesQueryBoardInfo
#define __AS__TYPE_tyHermesQueryBoardInfo
typedef struct tyHermesQueryBoardInfo
{	tyHermesQueryBoardInfoData tyData;
	tyHermesQueryBoardInfoAvl tyAvl;
} tyHermesQueryBoardInfo;
#endif

#ifndef __AS__TYPE_tyHermesSendBoardInfoData
#define __AS__TYPE_tyHermesSendBoardInfoData
typedef struct tyHermesSendBoardInfoData
{	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
} tyHermesSendBoardInfoData;
#endif

#ifndef __AS__TYPE_tyHermesSendBoardInfoAvl
#define __AS__TYPE_tyHermesSendBoardInfoAvl
typedef struct tyHermesSendBoardInfoAvl
{	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
} tyHermesSendBoardInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesSendBoardInfo
#define __AS__TYPE_tyHermesSendBoardInfo
typedef struct tyHermesSendBoardInfo
{	tyHermesSendBoardInfoData tyData;
	tyHermesSendBoardInfoAvl tyAvl;
} tyHermesSendBoardInfo;
#endif

#ifndef __AS__TYPE_tyHermesBoardArrivedData
#define __AS__TYPE_tyHermesBoardArrivedData
typedef struct tyHermesBoardArrivedData
{	plcstring sMachineId[81];
	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	eHermesBoardTransfer eBoadTransfer;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrdedId[81];
	plcstring sBatchId[81];
	signed short iRoute;
	signed short iAction;
} tyHermesBoardArrivedData;
#endif

#ifndef __AS__TYPE_tyHermesBoardArrivedAvl
#define __AS__TYPE_tyHermesBoardArrivedAvl
typedef struct tyHermesBoardArrivedAvl
{	plcbit bMachineId;
	plcbit bUpstreamLaneId;
	plcbit bUpstreamInterfaceId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBoardTransfer;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bRoute;
	plcbit bAction;
} tyHermesBoardArrivedAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardArrived
#define __AS__TYPE_tyHermesBoardArrived
typedef struct tyHermesBoardArrived
{	tyHermesBoardArrivedData tyData;
	tyHermesBoardArrivedAvl tyAvl;
} tyHermesBoardArrived;
#endif

#ifndef __AS__TYPE_tyHermesBoardDepartedData
#define __AS__TYPE_tyHermesBoardDepartedData
typedef struct tyHermesBoardDepartedData
{	plcstring sMachineId[81];
	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	eHermesBoardTransfer eBoadTransfer;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrdedId[81];
	plcstring sBatchId[81];
	signed short iRoute;
	signed short iAction;
} tyHermesBoardDepartedData;
#endif

#ifndef __AS__TYPE_tyHermesBoardDepartedAvl
#define __AS__TYPE_tyHermesBoardDepartedAvl
typedef struct tyHermesBoardDepartedAvl
{	plcbit bMachineId;
	plcbit bDownstreamLaneId;
	plcbit bDownstreamInterfaceId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBoardTransfer;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bRoute;
	plcbit bAction;
} tyHermesBoardDepartedAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardDeparted
#define __AS__TYPE_tyHermesBoardDeparted
typedef struct tyHermesBoardDeparted
{	tyHermesBoardDepartedData tyData;
	tyHermesBoardDepartedAvl tyAvl;
} tyHermesBoardDeparted;
#endif

#ifndef __AS__TYPE_tyHermesUpstreamConfiguration
#define __AS__TYPE_tyHermesUpstreamConfiguration
typedef struct tyHermesUpstreamConfiguration
{	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sHostAddress[255];
	unsigned short uiPort;
} tyHermesUpstreamConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesDownstreamConfiguration
#define __AS__TYPE_tyHermesDownstreamConfiguration
typedef struct tyHermesDownstreamConfiguration
{	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sClientAddress[255];
	unsigned short uiPort;
} tyHermesDownstreamConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesSetConfigurationData
#define __AS__TYPE_tyHermesSetConfigurationData
typedef struct tyHermesSetConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationData;
#endif

#ifndef __AS__TYPE_tyHermesUpstreamConfigurationAvl
#define __AS__TYPE_tyHermesUpstreamConfigurationAvl
typedef struct tyHermesUpstreamConfigurationAvl
{	plcbit bUpstreamLaneId;
	plcbit bUpstreamInterfaceId;
	plcbit bHostAddress;
	plcbit bPort;
} tyHermesUpstreamConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesDnstreamConfigurationAvl
#define __AS__TYPE_tyHermesDnstreamConfigurationAvl
typedef struct tyHermesDnstreamConfigurationAvl
{	plcbit bDownstreamLaneId;
	plcbit bDownstreamInterfaceId;
	plcbit bClientAddress;
	plcbit bPort;
} tyHermesDnstreamConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesSetConfigurationAvl
#define __AS__TYPE_tyHermesSetConfigurationAvl
typedef struct tyHermesSetConfigurationAvl
{	plcbit bMachineId;
	plcbit bSupervisorySystemPort;
	plcbit bUpstreamConfigurations;
	plcbit bDownstreamConfigurations;
	signed short iUpstreamConfigurations;
	signed short iDownstreamConfigurations;
	struct tyHermesUpstreamConfigurationAvl a_tyUpstreamConfigurations[4];
	struct tyHermesDnstreamConfigurationAvl a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesSetConfiguration
#define __AS__TYPE_tyHermesSetConfiguration
typedef struct tyHermesSetConfiguration
{	tyHermesSetConfigurationData tyData;
	tyHermesSetConfigurationAvl tyAvl;
} tyHermesSetConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesCurrentConfigurationData
#define __AS__TYPE_tyHermesCurrentConfigurationData
typedef struct tyHermesCurrentConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesCurrentConfigurationData;
#endif

#ifndef __AS__TYPE_tyHermesCurrentConfigurationAvl
#define __AS__TYPE_tyHermesCurrentConfigurationAvl
typedef struct tyHermesCurrentConfigurationAvl
{	plcbit bMachineId;
	plcbit bSupervisorySystemPort;
	plcbit bUpstreamConfigurations;
	plcbit bDownstreamConfigurations;
	signed short iUpstreamConfigurations;
	signed short iDownstreamConfigurations;
	struct tyHermesUpstreamConfigurationAvl a_tyUpstreamConfigurations[4];
	struct tyHermesDnstreamConfigurationAvl a_tyDownstreamConfigurations[4];
} tyHermesCurrentConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesCurrentConfiguration
#define __AS__TYPE_tyHermesCurrentConfiguration
typedef struct tyHermesCurrentConfiguration
{	tyHermesCurrentConfigurationData tyData;
	tyHermesCurrentConfigurationAvl tyAvl;
} tyHermesCurrentConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesQueryWorkOrderInfoData
#define __AS__TYPE_tyHermesQueryWorkOrderInfoData
typedef struct tyHermesQueryWorkOrderInfoData
{	plcstring sQueryId[81];
	plcstring sMachineId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	plcstring sBarcode[255];
} tyHermesQueryWorkOrderInfoData;
#endif

#ifndef __AS__TYPE_tyHermesQueryWorkOrderInfoAvl
#define __AS__TYPE_tyHermesQueryWorkOrderInfoAvl
typedef struct tyHermesQueryWorkOrderInfoAvl
{	plcbit bQueryId;
	plcbit bMachineId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBarcode;
} tyHermesQueryWorkOrderInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesQueryWorkOrderInfo
#define __AS__TYPE_tyHermesQueryWorkOrderInfo
typedef struct tyHermesQueryWorkOrderInfo
{	tyHermesQueryWorkOrderInfoData tyData;
	tyHermesQueryWorkOrderInfoAvl tyAvl;
} tyHermesQueryWorkOrderInfo;
#endif

#ifndef __AS__TYPE_tyHermesSendWorkOrderInfoData
#define __AS__TYPE_tyHermesSendWorkOrderInfoData
typedef struct tyHermesSendWorkOrderInfoData
{	plcstring sQueryId[81];
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	signed short iRoute;
} tyHermesSendWorkOrderInfoData;
#endif

#ifndef __AS__TYPE_tyHermesSendWorkOrderInfoAvl
#define __AS__TYPE_tyHermesSendWorkOrderInfoAvl
typedef struct tyHermesSendWorkOrderInfoAvl
{	plcbit bQueryId;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bRoute;
} tyHermesSendWorkOrderInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesSendWorkOrderInfo
#define __AS__TYPE_tyHermesSendWorkOrderInfo
typedef struct tyHermesSendWorkOrderInfo
{	tyHermesSendWorkOrderInfoData tyData;
	tyHermesSendWorkOrderInfoAvl tyAvl;
} tyHermesSendWorkOrderInfo;
#endif

#ifndef __AS__TYPE_tyHermesCommandData
#define __AS__TYPE_tyHermesCommandData
typedef struct tyHermesCommandData
{	eHermesCommand eCommand;
} tyHermesCommandData;
#endif

#ifndef __AS__TYPE_tyHermesCommandAvl
#define __AS__TYPE_tyHermesCommandAvl
typedef struct tyHermesCommandAvl
{	plcbit bCommand;
} tyHermesCommandAvl;
#endif

#ifndef __AS__TYPE_tyHermesCommand
#define __AS__TYPE_tyHermesCommand
typedef struct tyHermesCommand
{	tyHermesCommandData tyData;
	tyHermesCommandAvl tyAvl;
} tyHermesCommand;
#endif

struct fbFileOldDel
{	plcstring sDevice[81];
	plcstring sPath[81];
	plcstring sKeyword[81];
	plcdt dtDTNow;
	unsigned long udiFileKeepDay;
	unsigned long udiStatus;
	tyFileOldDelInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOldDel(struct fbFileOldDel* inst);
struct fbFileFullAppend
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiStatus;
	tyFileFullAppendInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullAppend(struct fbFileFullAppend* inst);
struct fbTCPClntConnect
{	plcstring sClntIP[16];
	plcstring sSvrIP[16];
	unsigned short uiClntPort;
	unsigned short uiSvrPort;
	unsigned long udiSndBffrSize;
	unsigned long udiRcvBffrSize;
	unsigned long udiAliveIdleTmInSec;
	plctime tConnectTO;
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	unsigned long udiErrorStatus;
	tyTCPClntConnectInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPClntConnect(struct fbTCPClntConnect* inst);
struct fbTCPSnd
{	unsigned long udiTCPIdent;
	unsigned long udiSndSize;
	unsigned long p_BffrDest;
	unsigned long udiStatus;
	tyTCPSndInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPSnd(struct fbTCPSnd* inst);
struct fbTCPRcv
{	unsigned long udiTCPIdent;
	unsigned long udiBffrSize;
	unsigned long p_BffrDest;
	unsigned long udiDataSizeRcv;
	unsigned long udiStatus;
	tyTCPRcvInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPRcv(struct fbTCPRcv* inst);
struct fbHermesSequenceUS
{	struct tyHermesMsgType(* p_tyMsgTypeRcv);
	eHermesMsgType eMsgTypeSnd;
	eHermesState eState;
	unsigned long udiStatus;
	plcbit bEn;
	plcbit bRstState;
	plcbit bRdyRcv;
	plcbit bBlkUS;
	plcbit bRdyTransport;
	plcbit bRcvCompl;
	plcbit bRcvIncompl;
	plcbit bRcvNotStart;
	plcbit bProcessBoardForecastId;
	plcbit bNotAvlNotRdy;
	plcbit bUSRdy;
	plcbit bDSRdy;
	plcbit bTransporting;
	plcbit bStopTransport;
	plcbit bBoardAvailable;
	plcbit zzEdge00000;
};
_BUR_PUBLIC void fbHermesSequenceUS(struct fbHermesSequenceUS* inst);
struct fbHermesSequenceTO
{	eHermesState eState;
	plctime tConnTimeOut;
	plctime tTransportTimeOut;
	unsigned long udiStatus;
	struct TON fbConnTimeOut;
	struct TON fbTransportTimeOut;
	plcbit bEn;
};
_BUR_PUBLIC void fbHermesSequenceTO(struct fbHermesSequenceTO* inst);
struct fbHermesGetSlt
{	eHermesFlippedBoard eFlippedBrd;
	float rThicknessInMM;
	float rTopClearanceHeightInMM;
	float rBtmClearanceHeightInMM;
	signed long diSltToSltInUM;
	signed long diTtlSlt;
	signed long diMinSltValue;
	signed long diMaxSltValue;
	signed long diPitch;
	signed long diThicknessInUM;
	signed long diTopClearanceHeightInUM;
	signed long diBtmClearanceHeightInUM;
};
_BUR_PUBLIC void fbHermesGetSlt(struct fbHermesGetSlt* inst);
struct fbHermesParseXMLTable
{	unsigned long p_XMLTable;
	signed short iTotalIdxWrite;
	tyHermesMsgType tyMsgType;
	tyHermesCheckAlive tyCheckAlive;
	signed short iCheckAliveFirstIdx;
	signed short iCheckAliveLastIdx;
	tyHermesCheckAlive tyCheckAlivePing;
	signed short iCheckAlivePingFirstIdx;
	signed short iCheckAlivePingLastIdx;
	tyHermesCheckAlive tyCheckAlivePong;
	signed short iCheckAlivePongFirstIdx;
	signed short iCheckAlivePongLastIdx;
	tyHermesServiceDescription tyServiceDescription;
	signed short iServiceDescriptionFirstIdx;
	signed short iServiceDescriptionLastIdx;
	tyHermesSServiceDescription tySServiceDescription;
	signed short iSServiceDescriptionFirstIdx;
	signed short iSServiceDescriptionLastIdx;
	tyHermesNotification tyNotification;
	signed short iNotificationFirstIdx;
	signed short iNotificationLastIdx;
	tyHermesBoardAvailable tyBoardAvailable;
	signed short iBoardAvailableFirstIdx;
	signed short iBoardAvailableLastIdx;
	signed short iRevokeBoardAvailableFirstIdx;
	signed short iRevokeBoardAvailableLastIdx;
	tyHermesMachineReady tyMachineReady;
	signed short iMachineReadyFirstIdx;
	signed short iMachineReadyLastIdx;
	signed short iRevokeMachineReadyFirstIdx;
	signed short iRevokeMachineReadyLastIdx;
	tyHermesStartTransport tyStartTransport;
	signed short iStartTransportFirstIdx;
	signed short iStartTransportLastIdx;
	tyHermesStopTransport tyStopTransport;
	signed short iStopTransportFirstIdx;
	signed short iStopTransportLastIdx;
	tyHermesTransportFinished tyTransportFinished;
	signed short iTransportFinishedFirstIdx;
	signed short iTransportFinishedLastIdx;
	tyHermesSetConfiguration tySetConfiguration;
	signed short iSetConfigurationFirstIdx;
	signed short iSetConfigurationLastIdx;
	signed short iGetConfigurationFirstIdx;
	signed short iGetConfigurationLastIdx;
	tyHermesCurrentConfiguration tyCurrentConfiguration;
	signed short iCurrentConfigurationFirstIdx;
	signed short iCurrentConfigurationLastIdx;
	tyHermesBoardForecast tyBoardForecast;
	signed short iBoardForecastFirstIdx;
	signed short iBoardForecastLastIdx;
	tyHermesBoardArrived tyBoardArrived;
	signed short iBoardArrivedFirstIdx;
	signed short iBoardArrivedLastIdx;
	tyHermesBoardDeparted tyBoardDeparted;
	signed short iBoardDepartedFirstIdx;
	signed short iBoardDepartedLastIdx;
	tyHermesQueryBoardInfo tyQueryBoardInfo;
	signed short iQueryBoardInfoFirstIdx;
	signed short iQueryBoardInfoLastIdx;
	tyHermesSendBoardInfo tySendBoardInfo;
	signed short iSendBoardInfoFirstIdx;
	signed short iSendBoardInfoLastIdx;
	tyHermesQueryWorkOrderInfo tyQueryWorkOrderInfo;
	signed short iQueryWorkOrderInfoFirstIdx;
	signed short iQueryWorkOrderInfoLastIdx;
	tyHermesSendWorkOrderInfo tySendWorkOrderInfo;
	signed short iSendWorkOrderInfoFirstIdx;
	signed short iSendWorkOrderInfoLastIdx;
	tyHermesCommand tyCommand;
	signed short iCommandFirstIdx;
	signed short iCommandLastIdx1;
	struct tyXMLTableDat(* p_tyXMLTable);
	struct tyXMLTableDat(* p_tyXMLTable1);
	unsigned long udi;
	signed short iHermesIdx;
	eHermesMsgType eMsgType;
	plcstring sLowerCase[255];
	signed short iSubBoardCntr;
	plcbit bSetUpstream;
	plcbit bSetDownstream;
	plcbit bCurrUpstream;
	plcbit bCurrDownstream;
};
_BUR_PUBLIC void fbHermesParseXMLTable(struct fbHermesParseXMLTable* inst);
struct fbHermesCheckAlive
{	plctime tSendTm;
	plctime tRcvTimeOut;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	struct TON fbSendTm;
	struct TON fbRcvTO;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
};
_BUR_PUBLIC void fbHermesCheckAlive(struct fbHermesCheckAlive* inst);
struct fbHermesCheckAliveSendPing
{	tyHermesCheckAlive tyDataRcv;
	DTStructure tyDTStructure;
	plctime tSendTm;
	plctime tRcvTimeOut;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	struct TON fbSendTm;
	struct TON fbRcvTO;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
	plcbit zzEdge00001;
};
_BUR_PUBLIC void fbHermesCheckAliveSendPing(struct fbHermesCheckAliveSendPing* inst);
struct fbHermesCheckAliveRcvPing
{	tyHermesCheckAlive tyDataRcv;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
};
_BUR_PUBLIC void fbHermesCheckAliveRcvPing(struct fbHermesCheckAliveRcvPing* inst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSCommMod);
_BUR_LOCAL plcbit bHermesRun;
_BUR_LOCAL plcbit bHermesStop;
_BUR_LOCAL eConvDir(* p_eLinkConvDir);
_BUR_LOCAL plcbit(* p_bLinkDILeftSen);
_BUR_LOCAL plcbit(* p_bLinkDIRightSen);
_BUR_LOCAL struct tyProdRcpParam(* pa_tyLinkProdRcpList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyLinkProdRcpCurrRcp);
_BUR_LOCAL plcbit(* p_bLinkMcParamMnlAccData);
_BUR_LOCAL plcbit(* p_bLinkOpsStop);
_BUR_LOCAL plcbit(* p_bLinkUIAccData);
_BUR_LOCAL plcstring sWidthInUMTemp[81];
_BUR_LOCAL plcbit(* p_bLinkConvHvBrd);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepInitDone);
_BUR_LOCAL struct TON fbDlyTmr;
_BUR_LOCAL struct TON fbDeleteLogTmr;
_BUR_LOCAL eHermesAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL struct tyHermesUSParam(* p_tyParam);
_BUR_LOCAL plcstring(* p_sIPAddr)[16];
_BUR_LOCAL struct DTStructure(* p_tyDTStructure);
_BUR_LOCAL plcdt(* p_dtCurrDT);
_BUR_LOCAL plcbit(* p_bRdyRcv);
_BUR_LOCAL plcbit(* p_bRdyTransport);
_BUR_LOCAL plcbit(* p_bRcvCompl);
_BUR_LOCAL plcbit(* p_bRcvIncompl);
_BUR_LOCAL plcbit(* p_bRcvNotStart);
_BUR_LOCAL plcbit(* p_bBAWidthEn);
_BUR_LOCAL plcbit(* p_bBASltEn);
_BUR_LOCAL plcbit(* p_bBFWidthEn);
_BUR_LOCAL plcbit(* p_bBFSltEn);
_BUR_LOCAL plcstring(* p_sMcId)[81];
_BUR_LOCAL plcstring(* p_sInterfaceId)[81];
_BUR_LOCAL plcstring(* p_sVersion)[8];
_BUR_LOCAL eHermesFailedBoard(* p_eFailedBoard);
_BUR_LOCAL eHermesFlippedBoard(* p_eFlippedBoard);
_BUR_LOCAL plcstring(* p_sRecipeNm)[255];
_BUR_LOCAL signed long(* p_diWidthInUM);
_BUR_LOCAL signed long(* p_diMinSltValue);
_BUR_LOCAL signed long(* p_diMaxSltValue);
_BUR_LOCAL signed long(* p_diPitch);
_BUR_LOCAL signed long(* p_diTtlSlt);
_BUR_LOCAL signed long(* p_diSltToSltInUM);
_BUR_LOCAL unsigned long(* p_udiSndBffrSize);
_BUR_LOCAL unsigned long(* p_udiRcvBffrSize);
_BUR_LOCAL unsigned long(* p_udiAliveIdleTimeInSec);
_BUR_LOCAL plctime(* p_tConnTimeOut);
_BUR_LOCAL signed long(* p_diTransferInTO);
_BUR_LOCAL plcbit(* p_bOpsRun);
_BUR_LOCAL plcbit(* p_bInterruptSen);
_BUR_LOCAL unsigned long(* p_udiFileKeepDay);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bAccDataRdy);
_BUR_LOCAL plcstring(* p_sRmtMcId)[81];
_BUR_LOCAL plcbit(* p_bRmtPrep);
_BUR_LOCAL plcbit(* p_bRmtEn);
_BUR_LOCAL plcbit(* p_bSvyPrep);
_BUR_LOCAL plcbit(* p_bSvyEn);
_BUR_LOCAL plcbit(* p_bAccNewRcpCond);
_BUR_LOCAL plcstring(* p_sInfoMsg)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg1)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg2)[201];
_BUR_LOCAL plcbit(* p_bInternalUse);
_BUR_LOCAL plcstring(* p_sInternalRcv)[65536];
_BUR_LOCAL struct tyHermesCommand(* p_tyCommand);
_BUR_LOCAL struct tyProdRcpParam(* pa_tyProdRcpList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcp);
_BUR_LOCAL plcbit(* p_bMcParamMnlAccData);
_BUR_LOCAL plcbit(* p_bUIAccData);
_BUR_LOCAL plcbit(* p_bConvHvBrd);
_BUR_LOCAL plcbit(* p_bQueryBoardInfo);
_BUR_LOCAL plcbit(* p_bManualInsertZoneHvBrd);
_BUR_LOCAL plcbit(* p_bManualInsertEndSen);
_BUR_LOCAL struct tyHermesDSParam(* pa_tyHermesDSParam)[4];
_BUR_LOCAL plcbit(* p_bProcessRouteEn);
_BUR_LOCAL plcbit(* p_bManualRmvRoute);
_BUR_LOCAL plcbit(* p_bReturnRoute);
_BUR_LOCAL plcbit(* p_bNomRouteEn);
_BUR_LOCAL plcbit(* p_bReverseReceiveRoute);
_BUR_LOCAL plcbit(* p_bReceiveReverseUSMcRdy);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyDSHermesCurrBASnd);
_BUR_LOCAL plcbit(* p_bHermesSwitchtoRvrseTransport);
_BUR_LOCAL plcbit(* p_bTransportFinished);
_BUR_LOCAL plcstring(* p_sTopBarcode)[255];
_BUR_LOCAL plcstring(* p_sBottomBarcode)[255];
_BUR_LOCAL eHermesAction eAct;
_BUR_LOCAL eHermesAction eStat;
_BUR_LOCAL eFBStatus eMainStatus;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL eFBStatus eStatus1;
_BUR_LOCAL eFBStatus eStatus2;
_BUR_LOCAL eFBStatus eStatus3;
_BUR_LOCAL eFBStatus eStatus4;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL unsigned long udiStatus3;
_BUR_LOCAL unsigned long udiStatus4;
_BUR_LOCAL unsigned long udiStatus5;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL tyAlmDat tyAlmData3;
_BUR_LOCAL tyAlmDat tyAlmData4;
_BUR_LOCAL tyAlmDat tyAlmData5;
_BUR_LOCAL tyAlmDat tyInfoData;
_BUR_LOCAL tyAlmDat tyInfoData1;
_BUR_LOCAL tyAlmDat tyInfoData2;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[200];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataBrdAvl[201];
_BUR_LOCAL signed short iXMLTableDataBrdAvlTtlIdx;
_BUR_LOCAL plcbit bConnected;
_BUR_LOCAL plcbit bHandshakeDone;
_BUR_LOCAL plcbit bBoardChkReq;
_BUR_LOCAL plcbit bAccDataReq;
_BUR_LOCAL plcbit bProcessBoardForecastId;
_BUR_LOCAL plcbit bBFAccDataReq;
_BUR_LOCAL plcbit bOverWriteSlt;
_BUR_LOCAL plcbit bBFOverWriteSlt;
_BUR_LOCAL plcbit bBFOverWriteWidth;
_BUR_LOCAL plcbit bOverWriteWidth;
_BUR_LOCAL plcstring sReqRecipeNm[255];
_BUR_LOCAL signed long diReqWidthInUM;
_BUR_LOCAL signed long diReqMinSltValue;
_BUR_LOCAL signed long diReqMaxSltValue;
_BUR_LOCAL signed long diReqPitch;
_BUR_LOCAL plcbit bNotAvlNotRdy;
_BUR_LOCAL plcbit bUSRdy;
_BUR_LOCAL plcbit bDSRdy;
_BUR_LOCAL plcbit bUSGdRdy;
_BUR_LOCAL plcbit bDSGdRdy;
_BUR_LOCAL signed short iAction;
_BUR_LOCAL plcbit bTransporting;
_BUR_LOCAL plcbit bStopTransport;
_BUR_LOCAL tyHermesBoardAvailable tyBoardAvailableRcv;
_BUR_LOCAL tyHermesBoardAvailable tyBoardAvailableReq;
_BUR_LOCAL plcbit bBlkUS;
_BUR_LOCAL plcbit bBABlkUS;
_BUR_LOCAL plcbit bBFBlkUS;
_BUR_LOCAL plcbit bManuallInsertLastZone;
_BUR_LOCAL plcbit bReverseRcvBlkUS;
_BUR_LOCAL plcstring sInternalSnd[65536];
_BUR_LOCAL plcbit bRcvBoardInfoOk;
_BUR_LOCAL plcbit bRcvBoardInfoIncompl;
_BUR_LOCAL tyHermesSendBoardInfo tySendBoardInfoAcc;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL tyHermesUSParam tyParam;
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL DTStructure tyDTStructure;
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL plcbit bRdyRcv;
_BUR_LOCAL plcbit bRdyTransport;
_BUR_LOCAL plcbit bRcvCompl;
_BUR_LOCAL plcbit bRcvInCompl;
_BUR_LOCAL plcbit bRcvNotStart;
_BUR_LOCAL plcbit bBAWidthEn;
_BUR_LOCAL plcbit bBASltEn;
_BUR_LOCAL plcbit bBFWidthEn;
_BUR_LOCAL plcbit bBFSltEn;
_BUR_LOCAL plcstring sMcId[81];
_BUR_LOCAL plcstring sInterfaceId[81];
_BUR_LOCAL plcstring sVersion[8];
_BUR_LOCAL eHermesFailedBoard eFailedBoard;
_BUR_LOCAL plcstring sRecipeNm[255];
_BUR_LOCAL signed long diWidthInUM;
_BUR_LOCAL signed long diMinSltValue;
_BUR_LOCAL signed long diMaxSltValue;
_BUR_LOCAL signed long diPitch;
_BUR_LOCAL signed long diTtlSlt;
_BUR_LOCAL signed long diSltToSltInUM;
_BUR_LOCAL unsigned long udiSndBffrSize;
_BUR_LOCAL unsigned long udiRcvBffrSize;
_BUR_LOCAL unsigned long udiAliveIdleTimeInSec;
_BUR_LOCAL plctime tConnTimeOut;
_BUR_LOCAL signed long diTransferInTO;
_BUR_LOCAL plcbit bOpsRun;
_BUR_LOCAL plcbit bInterruptSen;
_BUR_LOCAL unsigned long udiFileKeepDay;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bAccDataRdy;
_BUR_LOCAL plcstring sRmtMcId[81];
_BUR_LOCAL plcbit bRmtPrep;
_BUR_LOCAL plcbit bRmtEn;
_BUR_LOCAL plcbit bAccNewRcpCond;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcstring sInfoMsg1[201];
_BUR_LOCAL plcstring sInfoMsg2[201];
_BUR_LOCAL plcbit bInternalUse;
_BUR_LOCAL plcstring sInternalRcv[65536];
_BUR_LOCAL struct tyProdRcpParam a_tyProdRcpList[2000];
_BUR_LOCAL tyProdRcpParam tyProdRcpCurrRcp;
_BUR_LOCAL plcbit bMcParamMnlAccData;
_BUR_LOCAL plcbit bUIAccData;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRstConnection;
_BUR_LOCAL plcbit bRstState;
_BUR_LOCAL unsigned long udiTCPIdent;
_BUR_LOCAL unsigned long udiXMLTableWriteIdx;
_BUR_LOCAL unsigned long udiMsgSendBffr;
_BUR_LOCAL unsigned long udiSndMsgLen;
_BUR_LOCAL plcstring sSnd[65536];
_BUR_LOCAL plcstring sRcv[65536];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataRcv[201];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataSnd[201];
_BUR_LOCAL eHermesMsgType a_eMsgSend[51];
_BUR_LOCAL tyHermesMsgType tyMsgTypeRcv;
_BUR_LOCAL tyHermesCheckAlive tyCheckAliveSnd;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePingSnd;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePongSnd;
_BUR_LOCAL tyHermesCheckAlive tyCheckAliveRcv;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePingRcv;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePongRcv;
_BUR_LOCAL tyHermesServiceDescription tyServiceDescriptionSnd;
_BUR_LOCAL tyHermesServiceDescription tyServiceDescriptionRcv;
_BUR_LOCAL tyHermesNotification tyNotificationSnd;
_BUR_LOCAL tyHermesNotification tyNotificationRcv;
_BUR_LOCAL tyHermesBoardAvailable tyBoardAvailableDummy;
_BUR_LOCAL tyHermesBoardAvailable tyBoardArrivedInfo;
_BUR_LOCAL tyHermesMachineReady tyMachineReady;
_BUR_LOCAL tyHermesStartTransport tyStartTransport;
_BUR_LOCAL tyHermesStopTransport tyStopTransport;
_BUR_LOCAL tyHermesTransportFinished tyTransportFinished;
_BUR_LOCAL tyHermesSetConfiguration tySetConfiguration;
_BUR_LOCAL tyHermesCurrentConfiguration tyCurrentConfiguration;
_BUR_LOCAL tyHermesBoardForecast tyBoardForecastRcv;
_BUR_LOCAL tyHermesBoardForecast tyBoardForecastAcc;
_BUR_LOCAL tyHermesQueryBoardInfo tyQueryBoardInfo;
_BUR_LOCAL tyHermesSendBoardInfo tySendBoardInfoRcv;
_BUR_LOCAL tyHermesCommand tyCommandRcv;
_BUR_LOCAL tyHermesCommand tyCommandSnd;
_BUR_LOCAL struct fbTCPClntConnect fbClntConnect;
_BUR_LOCAL struct fbTCPRcv fbRcv;
_BUR_LOCAL struct fbTCPSnd fbSend;
_BUR_LOCAL struct fbTCPClose fbClose;
_BUR_LOCAL struct fbHermesParseXMLTable fbParseXMLTable;
_BUR_LOCAL struct fbHermesCheckAlive fbCheckAlive;
_BUR_LOCAL struct fbHermesCheckAliveSendPing fbCheckAliveSendPing;
_BUR_LOCAL struct fbHermesCheckAliveRcvPing fbCheckAliveRcvPing;
_BUR_LOCAL struct fbHermesSequenceUS fbSequenceUS;
_BUR_LOCAL struct fbHermesSequenceTO fbSequenceTO;
_BUR_LOCAL struct fbHermesGetSlt fbGetSlt;
_BUR_LOCAL eHermesAction eStatOld;
_BUR_LOCAL tyHermesUSParam tyParamOld;
_BUR_LOCAL unsigned long udiLogCntr;
_BUR_LOCAL unsigned long udiWriteLogCntr;
_BUR_LOCAL plcstring a_sLogList[10][65536];
_BUR_LOCAL plcstring sDT[81];
_BUR_LOCAL plcdt dtCurrDTTemp;
_BUR_LOCAL struct fbFileFullAppend fbFileAppend1;
_BUR_LOCAL struct fbFileOldDel fbFileOldDel1;
_BUR_LOCAL signed short iWriteLogStep;
_BUR_LOCAL signed short i;
_BUR_LOCAL unsigned char usiBFAccDataStep;
_BUR_LOCAL unsigned char usiAccDataStep;
_BUR_LOCAL plcbit bFeatureBoardForecast;
_BUR_LOCAL plcbit bAccDataMnl;
_BUR_LOCAL plcbit bStopTransportSnd;
_BUR_LOCAL tyHermesCommandParam tyCommandParam;
_BUR_LOCAL unsigned char a_usiHermesCommandIdx[8];
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bReplyMcRdyId;
_BUR_LOCAL plcbit bBrdForecastRcv;
_BUR_LOCAL plcbit bProcessRouteMachine;
_BUR_LOCAL plcbit bTriggerRouteMachine;
_BUR_LOCAL plcbit bProcessRouteReversal;
_BUR_LOCAL plcbit bTriggerRouteReversal;
_BUR_LOCAL signed short iGotoLane;
_BUR_LOCAL plcbit bManualRmvBrdCond;
_BUR_LOCAL plcbit bReverseDSSndBfWBrdID;
_BUR_LOCAL plcbit bTriggerUpdateRoute;
_BUR_LOCAL plcbit bNotifyRstReverseRcvGate;
_BUR_LOCAL struct TON fbRstReverseRcvGate;
_BUR_LOCAL struct TON fbRstReverseDSSndBF;
_BUR_LOCAL unsigned char usidx;
_BUR_LOCAL signed short iMinDis;
_BUR_LOCAL plcbit bSwitchtoReverseReceive;
_BUR_LOCAL struct TON fbRstSndBF;
_BUR_LOCAL plcbit bStopTransportSent;
_BUR_LOCAL plcbit bBoardAvailableRcved;
_BUR_LOCAL plcbit bManualRmvRoute;
_BUR_LOCAL plcbit bReturnRoute;
_BUR_LOCAL plcbit bNomRouteEn;
_BUR_LOCAL plcbit bProcessRouteEn;
_BUR_LOCAL plcbit bReverseReceiveRoute;
_BUR_LOCAL plcbit bReceiveReverseUSMcRdy;
_BUR_LOCAL plcbit bReverseSentRoute;
_BUR_LOCAL plcstring sUITopBarcode[255];
_BUR_LOCAL plcstring sUIBottomBarcode[255];
_GLOBAL unsigned long c_udiProdRcpMax;
_GLOBAL signed long c_diHermesConfigMaxIdx;
