#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
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

#ifndef __AS__TYPE_tyHermesSvyParam
#define __AS__TYPE_tyHermesSvyParam
typedef struct tyHermesSvyParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	unsigned short uiSvySvstemPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sClientAddress[16];
	unsigned short uiClientPort;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureInsertBrd;
} tyHermesSvyParam;
#endif

#ifndef __AS__TYPE_tyHermesConfiguration
#define __AS__TYPE_tyHermesConfiguration
typedef struct tyHermesConfiguration
{	struct tyHermesUSParam a_tyUSParam[4];
	struct tyHermesDSParam a_tyDSParam[4];
	tyHermesSvyParam tySvyParam;
} tyHermesConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesRmtParam
#define __AS__TYPE_tyHermesRmtParam
typedef struct tyHermesRmtParam
{	unsigned short uiSvrPort;
} tyHermesRmtParam;
#endif

#ifndef __AS__TYPE_tyActionByZone
#define __AS__TYPE_tyActionByZone
typedef struct tyActionByZone
{	plcstring sBoardId[81];
	signed short iAttributeIdx;
	signed short iAction;
	plcbit bActionCompl;
} tyActionByZone;
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
#ifndef __AS__TYPE_tyFileFullWriteInternal
#define __AS__TYPE_tyFileFullWriteInternal
typedef struct tyFileFullWriteInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileWrite fbFileWrite;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteInternal;
#endif

#ifndef __AS__TYPE_tyFileOpenInternal
#define __AS__TYPE_tyFileOpenInternal
typedef struct tyFileOpenInternal
{	struct FileOpen fbFileOpen;
} tyFileOpenInternal;
#endif

struct fbFileOpen
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileOpenInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOpen(struct fbFileOpen* inst);
struct FileReadEx
{	unsigned long ident;
	unsigned long offset;
	unsigned long pDest;
	unsigned long len;
	unsigned short status;
	unsigned long bytesread;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileReadEx(struct FileReadEx* inst);
#ifndef __AS__TYPE_tyFileReadInternal
#define __AS__TYPE_tyFileReadInternal
typedef struct tyFileReadInternal
{	struct FileReadEx fbFileRead;
} tyFileReadInternal;
#endif

struct fbFileRead
{	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileRead(struct fbFileRead* inst);
#ifndef __AS__TYPE_tyFileFullReadInternal
#define __AS__TYPE_tyFileFullReadInternal
typedef struct tyFileFullReadInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpen fbFileOpen;
	struct fbFileRead fbFileRead;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadInternal;
#endif

struct DirCreate
{	unsigned long pDevice;
	unsigned long pName;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirCreate(struct DirCreate* inst);
#ifndef __AS__TYPE_tyDirCreateInternal
#define __AS__TYPE_tyDirCreateInternal
typedef struct tyDirCreateInternal
{	struct DirCreate fbDirCreate;
} tyDirCreateInternal;
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

#ifndef __AS__TYPE_eHermesTransferState
#define __AS__TYPE_eHermesTransferState
typedef enum eHermesTransferState
{	HermesTransferStateNotStarted = 1,
	HermesTransferStateIncomplete = 2,
	HermesTransferStateComplete = 3,
} eHermesTransferState;
#endif

#ifndef __AS__TYPE_tyHermesBrdAvlDat
#define __AS__TYPE_tyHermesBrdAvlDat
typedef struct tyHermesBrdAvlDat
{	struct tyXMLTableDat a_tyXMLTableDataBrdAvl[201];
	signed short iXMLTableDataBrdAvlTtlIdx;
	plcbit bNewBrdAvl;
} tyHermesBrdAvlDat;
#endif

#ifndef __AS__TYPE_tyHermesBAMsgAttribAddr
#define __AS__TYPE_tyHermesBAMsgAttribAddr
typedef struct tyHermesBAMsgAttribAddr
{	unsigned long udiMacAddrForGUID;
	unsigned long udiDateTimeForGUID;
	unsigned long udiBoardIdCreatedBy;
	unsigned long udiFailedBoard;
	unsigned long udiProductTypeId;
	unsigned long udiFlippedBoard;
	unsigned long udiTopBarcode;
	unsigned long udiBtmBarcode;
	unsigned long udiLength;
	unsigned long udiWidth;
	unsigned long udiThickness;
	unsigned long udiConveyorSpeed;
	unsigned long udiTopClearanceHeight;
	unsigned long udiBottomClearanceHeight;
	unsigned long udiWeight;
	unsigned long udiWorkOrderId;
	unsigned long udiBathId;
} tyHermesBAMsgAttribAddr;
#endif

#ifndef __AS__TYPE_eHermesBAMsgAction
#define __AS__TYPE_eHermesBAMsgAction
typedef enum eHermesBAMsgAction
{	HermesActionNA = 0,
	HermesActionBypass = 1,
	HermesActionInspect = 2,
	HermesActionInvert = 3,
	HermesActionFIFO = 4,
	HermesActionLIFO = 5,
} eHermesBAMsgAction;
#endif

#ifndef __AS__TYPE_tyHermesCmdProcessList
#define __AS__TYPE_tyHermesCmdProcessList
typedef struct tyHermesCmdProcessList
{	plcbit bUSTrueDSFalse;
	unsigned long udiInterfaceString;
	unsigned long udiComMode;
	unsigned long udiCommandParam;
} tyHermesCmdProcessList;
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

#ifndef __AS__TYPE_tyHermesCommandPause
#define __AS__TYPE_tyHermesCommandPause
typedef struct tyHermesCommandPause
{	plcbit bFeatureRequestTo;
	plcbit bUnlockCoverSigTo;
	plcbit bPrevUnlockCoverSigTo;
	plcbit bMachineSafetySigFrom;
	plcbit bFeatureRequestFrom;
	plcbit bUnlockCoverSigFrom;
	plcbit bMachineSafetySigTo;
	plcbit bPrevMachineSafetySigTo;
} tyHermesCommandPause;
#endif

#ifndef __AS__TYPE_tyHermesCommandLockConv
#define __AS__TYPE_tyHermesCommandLockConv
typedef struct tyHermesCommandLockConv
{	plcbit bFeatureLockConvFrom;
	plcbit bOvenInfoFrom;
	plcbit bFeatureLockConvTo;
	plcbit bOvenInfoTo;
	plcbit bPrevOvenInfoTo;
} tyHermesCommandLockConv;
#endif

#ifndef __AS__TYPE_tyHermesCommandOvenInfeed
#define __AS__TYPE_tyHermesCommandOvenInfeed
typedef struct tyHermesCommandOvenInfeed
{	plcbit bFeatureOvenInfeedFrom;
	plcbit bOvenInfeedFrom;
	plcbit bFeatureOvenInfeedTo;
	plcbit bOvenInfeedTo;
	plcbit bPrevOvenInfeedTo;
} tyHermesCommandOvenInfeed;
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

#ifndef __AS__TYPE_tyHermesCurrentConfigurationData
#define __AS__TYPE_tyHermesCurrentConfigurationData
typedef struct tyHermesCurrentConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesCurrentConfigurationData;
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
struct fbFileFullWrite
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned long udiStatus;
	tyFileFullWriteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullWrite(struct fbFileFullWrite* inst);
struct fbFileFullRead
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileFullReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullRead(struct fbFileFullRead* inst);
struct fbDirCreate
{	plcstring sDevice[81];
	plcstring sDirName[81];
	unsigned long udiStatus;
	tyDirCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirCreate(struct fbDirCreate* inst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL plcbit(* p_bLinkUSHermesTransporting);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSComm2Mod);
_BUR_LOCAL struct tyXMLTableDat(* pa_tyLinkXMLTableDataBrdAvl)[201];
_BUR_LOCAL signed short(* p_iLinkXMLTableDataBrdAvlTtlIdx);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepInitDone);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepEntToEnd);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepEntToInOff);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepExitBrd);
_BUR_LOCAL plcbit(* p_bLinkConvHvBrd);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepInvert);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyUSHermestyBoardAvailable);
_BUR_LOCAL tyHermesBrdAvlDat tyHermesBrdAvlData;
_BUR_LOCAL struct tyHermesBrdAvlDat a_tyHermesBrdAvlData[7];
_BUR_LOCAL plcbit bHermesWriteRetain;
_BUR_LOCAL plcstring sLowerCase[255];
_BUR_LOCAL eHermesAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL struct tyHermesUSParam(* pa_tyUSParam)[4];
_BUR_LOCAL struct tyHermesDSParam(* pa_tyDSParam)[4];
_BUR_LOCAL plcbit(* p_bRmtPrep);
_BUR_LOCAL plcbit(* p_bRmtEn);
_BUR_LOCAL struct tyHermesRmtParam(* p_tyRmtParam);
_BUR_LOCAL struct tyHermesSvyParam(* p_tySvyParam);
_BUR_LOCAL plcstring(* p_sMcId)[31];
_BUR_LOCAL plcbit(* p_bRmtHermesWriteConfig);
_BUR_LOCAL plcbit(* p_bSvyHermesWriteConfig);
_BUR_LOCAL plcbit(* p_bUISaveHMIConfigure);
_BUR_LOCAL plcbit(* p_bUISaveHMISvyConfig);
_BUR_LOCAL struct tyHermesCurrentConfiguration(* p_tyRmtSetConfiguration);
_BUR_LOCAL struct tyHermesCurrentConfiguration(* p_tySvySetConfiguration);
_BUR_LOCAL plcbit(* p_bSvyPrep);
_BUR_LOCAL plcbit(* p_bSvyEn);
_BUR_LOCAL plcstring(* p_sRetainFileName1)[81];
_BUR_LOCAL plcstring(* p_sRetainFileName2)[81];
_BUR_LOCAL plcstring(* p_sRetainFileName3)[81];
_BUR_LOCAL plcstring(* p_sRetainFileName4)[81];
_BUR_LOCAL unsigned long(* p_udiRetainDataAddr1);
_BUR_LOCAL unsigned long(* p_udiRetainDataLen1);
_BUR_LOCAL unsigned long(* p_udiRetainDataAddr2);
_BUR_LOCAL unsigned long(* p_udiRetainDataLen2);
_BUR_LOCAL unsigned long(* p_udiRetainDataAddr3);
_BUR_LOCAL unsigned long(* p_udiRetainDataLen3);
_BUR_LOCAL unsigned long(* p_udiRetainDataAddr4);
_BUR_LOCAL unsigned long(* p_udiRetainDataLen4);
_BUR_LOCAL plcstring(* p_sConfigFileName)[81];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bNTParamUnlockCovPrep);
_BUR_LOCAL plcbit(* p_bNTParamMachineSafetySig);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyDSHermesCurrBASnd);
_BUR_LOCAL plcbit(* p_bUSRevHermesBrdForecastRcv);
_BUR_LOCAL struct tyHermesBoardForecast(* p_tyUSRevHermesBFRcv);
_BUR_LOCAL plcbit(* p_bUSCurrHermesBrdForecastRcv);
_BUR_LOCAL struct tyHermesBoardForecast(* p_tyUSCurrHermesBFRcv);
_BUR_LOCAL struct tyHermesStopTransport(* p_tyUSHermesStopTransport);
_BUR_LOCAL plcbit(* p_bUSHermesBrdAvlRcved);
_BUR_LOCAL plcbit(* p_bUSHermesStopTransport);
_BUR_LOCAL plcbit(* p_bReverseReceiveRoute);
_BUR_LOCAL plcbit(* p_bReverseSentRoute);
_BUR_LOCAL plcbit(* p_bManualRmvRoute);
_BUR_LOCAL plcbit(* p_bReturnRoute);
_BUR_LOCAL plcbit(* p_bNomRouteEn);
_BUR_LOCAL plcbit(* p_bReceiveReverseUSMcRdy);
_BUR_LOCAL unsigned char(* p_usiReverseDSSndBfWBrdID);
_BUR_LOCAL plcbit(* p_bDSHermesTransportFinished);
_BUR_LOCAL struct tyHermesTransportFinished(* p_tyDSHermesTransportFinished);
_BUR_LOCAL plcbit(* p_bOpsInvertStepInitDone);
_BUR_LOCAL plcbit(* p_bOpsInvertHvBrd);
_BUR_LOCAL unsigned char(* pa_usiMacAddr)[6];
_BUR_LOCAL struct DTStructure(* p_tyDTStructure);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexUS1);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexUS2);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexUS3);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexUS4);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexDS1);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexDS2);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexDS3);
_BUR_LOCAL plcbit(* p_bRmtFoundIndexDS4);
_BUR_LOCAL unsigned long(* p_udiRmtIndexUS1);
_BUR_LOCAL unsigned long(* p_udiRmtIndexUS2);
_BUR_LOCAL unsigned long(* p_udiRmtIndexUS3);
_BUR_LOCAL unsigned long(* p_udiRmtIndexUS4);
_BUR_LOCAL unsigned long(* p_udiRmtIndexDS1);
_BUR_LOCAL unsigned long(* p_udiRmtIndexDS2);
_BUR_LOCAL unsigned long(* p_udiRmtIndexDS3);
_BUR_LOCAL unsigned long(* p_udiRmtIndexDS4);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexUS1);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexUS2);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexUS3);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexUS4);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexDS1);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexDS2);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexDS3);
_BUR_LOCAL plcbit(* p_bSvyFoundIndexDS4);
_BUR_LOCAL unsigned long(* p_udiSvyIndexUS1);
_BUR_LOCAL unsigned long(* p_udiSvyIndexUS2);
_BUR_LOCAL unsigned long(* p_udiSvyIndexUS3);
_BUR_LOCAL unsigned long(* p_udiSvyIndexUS4);
_BUR_LOCAL unsigned long(* p_udiSvyIndexDS1);
_BUR_LOCAL unsigned long(* p_udiSvyIndexDS2);
_BUR_LOCAL unsigned long(* p_udiSvyIndexDS3);
_BUR_LOCAL unsigned long(* p_udiSvyIndexDS4);
_BUR_LOCAL struct tyHermesCommandParam(* p_tyHermesCmdParam);
_BUR_LOCAL struct tyHermesCommandParam(* p_udiHermesCmpCmdParam);
_BUR_LOCAL struct tyHermesCommandPause(* p_tyHermesCmdPause);
_BUR_LOCAL struct tyHermesCommandLockConv(* p_tyHermesCmdLockConv);
_BUR_LOCAL struct tyHermesCommandOvenInfeed(* p_tyHermesCmdOvenInfeed);
_BUR_LOCAL plcstring(* p_sCmpInterface)[81];
_BUR_LOCAL plcstring(* p_sInterface)[81];
_BUR_LOCAL unsigned long(* p_udiComMode);
_BUR_LOCAL eHermesAction eAct;
_BUR_LOCAL eHermesAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL tyHermesConfiguration tyConfiguration;
_BUR_LOCAL tyHermesConfiguration tyCurrConfiguration;
_BUR_LOCAL tyHermesConfiguration tyConfigurationWr;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL struct tyHermesUSParam a_tyUSParam[4];
_BUR_LOCAL struct tyHermesDSParam a_tyDSParam[4];
_BUR_LOCAL plcbit bRmtPrep;
_BUR_LOCAL plcbit bRmtEn;
_BUR_LOCAL plcstring sRetainFileName[81];
_BUR_LOCAL unsigned long udiRetainDataAddr;
_BUR_LOCAL unsigned long udiRetainDataLen;
_BUR_LOCAL tyHermesRmtParam tyRmtParam;
_BUR_LOCAL tyHermesSvyParam tySvyParam;
_BUR_LOCAL tyHermesCurrentConfiguration tyRmtSetConfiguration;
_BUR_LOCAL tyHermesCurrentConfiguration tySvySetConfiguration;
_BUR_LOCAL plcbit bSvyPrep;
_BUR_LOCAL plcbit bSvyEn;
_BUR_LOCAL plcstring sRetainFileName1[81];
_BUR_LOCAL plcstring sRetainFileName2[81];
_BUR_LOCAL plcstring sRetainFileName3[81];
_BUR_LOCAL plcstring sRetainFileName4[81];
_BUR_LOCAL unsigned long udiRetainDataAddr1;
_BUR_LOCAL unsigned long udiRetainDataLen1;
_BUR_LOCAL unsigned long udiRetainDataAddr2;
_BUR_LOCAL unsigned long udiRetainDataLen2;
_BUR_LOCAL unsigned long udiRetainDataAddr3;
_BUR_LOCAL unsigned long udiRetainDataLen3;
_BUR_LOCAL unsigned long udiRetainDataAddr4;
_BUR_LOCAL unsigned long udiRetainDataLen4;
_BUR_LOCAL plcstring sConfigFileName[81];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRmtHermesWriteConfig;
_BUR_LOCAL plcbit bSvyHermesWriteConfig;
_BUR_LOCAL plcbit bUISaveHMIConfigure;
_BUR_LOCAL plcbit bUISaveHMISvyConfig;
_BUR_LOCAL plcstring sMcId[31];
_BUR_LOCAL plcbit bRmtFoundIndexUS1;
_BUR_LOCAL plcbit bRmtFoundIndexUS2;
_BUR_LOCAL plcbit bRmtFoundIndexUS3;
_BUR_LOCAL plcbit bRmtFoundIndexUS4;
_BUR_LOCAL plcbit bRmtFoundIndexDS1;
_BUR_LOCAL plcbit bRmtFoundIndexDS2;
_BUR_LOCAL plcbit bRmtFoundIndexDS3;
_BUR_LOCAL plcbit bRmtFoundIndexDS4;
_BUR_LOCAL unsigned long udiRmtIndexUS1;
_BUR_LOCAL unsigned long udiRmtIndexUS2;
_BUR_LOCAL unsigned long udiRmtIndexUS3;
_BUR_LOCAL unsigned long udiRmtIndexUS4;
_BUR_LOCAL unsigned long udiRmtIndexDS1;
_BUR_LOCAL unsigned long udiRmtIndexDS2;
_BUR_LOCAL unsigned long udiRmtIndexDS3;
_BUR_LOCAL unsigned long udiRmtIndexDS4;
_BUR_LOCAL plcbit bSvyFoundIndexUS1;
_BUR_LOCAL plcbit bSvyFoundIndexUS2;
_BUR_LOCAL plcbit bSvyFoundIndexUS3;
_BUR_LOCAL plcbit bSvyFoundIndexUS4;
_BUR_LOCAL plcbit bSvyFoundIndexDS1;
_BUR_LOCAL plcbit bSvyFoundIndexDS2;
_BUR_LOCAL plcbit bSvyFoundIndexDS3;
_BUR_LOCAL plcbit bSvyFoundIndexDS4;
_BUR_LOCAL unsigned long udiSvyIndexUS1;
_BUR_LOCAL unsigned long udiSvyIndexUS2;
_BUR_LOCAL unsigned long udiSvyIndexUS3;
_BUR_LOCAL unsigned long udiSvyIndexUS4;
_BUR_LOCAL unsigned long udiSvyIndexDS1;
_BUR_LOCAL unsigned long udiSvyIndexDS2;
_BUR_LOCAL unsigned long udiSvyIndexDS3;
_BUR_LOCAL unsigned long udiSvyIndexDS4;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bHermesWriteRetainLane1;
_BUR_LOCAL plcbit bHermesWriteRetainLane2;
_BUR_LOCAL plcbit bHermesWriteRetainLane3;
_BUR_LOCAL plcbit bHermesWriteRetainLane4;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL tyHermesConfiguration tyConfigurationLocal;
_BUR_LOCAL tyHermesConfiguration tyConfigurationHMI;
_BUR_LOCAL eHermesAction eStatOld;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate3;
_BUR_LOCAL struct fbDirCreate fbDirCreate4;
_BUR_LOCAL struct fbFileFullRead fbFileRead1;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite1;
_BUR_LOCAL struct fbFileFullRead fbFileRead2;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite2;
_BUR_LOCAL struct fbFileFullRead fbFileRead3;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite3;
_BUR_LOCAL struct fbFileFullRead fbFileRead4;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite4;
_BUR_LOCAL struct fbFileFullRead fbFileRead5;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite5;
_BUR_LOCAL signed short i;
_BUR_LOCAL unsigned char usiUSHermesCommand;
_BUR_LOCAL unsigned char usiDSHermesCommand;
_BUR_LOCAL unsigned char usiProcessCmdBffr;
_BUR_LOCAL struct tyHermesCmdProcessList a_tyCommandProcessList[7];
_BUR_LOCAL struct tyHermesCommandPause a_tyCommandPause[7];
_BUR_LOCAL struct tyHermesCommandLockConv a_tyCommandLockInputConv[7];
_BUR_LOCAL struct tyHermesCommandOvenInfeed a_tyCommandOvenInfeed[7];
_BUR_LOCAL unsigned char a_usiCommandIdx[7];
_BUR_LOCAL unsigned char usiIdx;
_BUR_LOCAL unsigned char usiCmpIdx;
_BUR_LOCAL unsigned char usiPrevCmdIdx;
_BUR_LOCAL unsigned char usiDSIdent;
_BUR_LOCAL unsigned char usiUSIdent;
_BUR_LOCAL unsigned char usiUSIdent2;
_BUR_LOCAL plcbit bCmdInitialCompl;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bBFWithoutBoardID;
_BUR_LOCAL plcbit bSwitchtoReverseTransport;
_BUR_LOCAL plcbit bReqReverseAfterTransptFinished;
_BUR_LOCAL plcbit bSelfReverseAfterTransptFinished;
_BUR_LOCAL plcbit bPrevReversalCondition;
_BUR_LOCAL plcbit bNotifyRstReverseRcvGate;
_BUR_LOCAL plcbit bReverseReceiveRoute;
_BUR_LOCAL plcbit bReverseSendRoute;
_BUR_LOCAL plcbit bProcessRouteMachine;
_BUR_LOCAL plcbit bTriggerRouteMachine;
_BUR_LOCAL plcbit bProcessRouteReversal;
_BUR_LOCAL unsigned char bEntToReversePosition;
_BUR_LOCAL plcbit bTriggerRouteReversal;
_BUR_LOCAL plcbit bRouteHaveBeenTriggerred;
_BUR_LOCAL plcbit bStopTransportSucceed;
_BUR_LOCAL plcbit bStopTransportFailed;
_BUR_LOCAL signed short iGotoLane;
_BUR_LOCAL struct TON fbRstReverseRcvGate;
_BUR_LOCAL struct TON fbRstReverseDSSndBF;
_BUR_LOCAL plcbit bManualRmvBrdCond;
_BUR_LOCAL unsigned char usidx;
_BUR_LOCAL signed short iMinDis;
_BUR_LOCAL plcbit bManualRmvRoute;
_BUR_LOCAL plcbit bReturnRoute;
_BUR_LOCAL plcbit bNomRouteEn;
_BUR_LOCAL unsigned char usiReverseDS1SndBfWBrdID;
_BUR_LOCAL unsigned char usiReverseDS2SndBfWBrdID;
_BUR_LOCAL unsigned char usiMaxActionSupported;
_BUR_LOCAL unsigned char usiMaxZoneSupported;
_BUR_LOCAL unsigned char usiZoneSupported;
_BUR_LOCAL unsigned char usiZone;
_BUR_LOCAL plcbit tbActionSupportedByZone[5][10];
_BUR_LOCAL plcbit a_bUIPromptActionSelect[5];
_BUR_LOCAL plcbit a_bUIZonePause[5];
_BUR_LOCAL plcbit a_bBlkDSForAction[5];
_BUR_LOCAL plcbit a_bOpsDsStandByStep[5];
_BUR_LOCAL eHermesBAMsgAction a_eModSelectedforCurrZone[5];
_BUR_LOCAL tyHermesBoardAvailable tyBoardAvailableGenerated;
_BUR_LOCAL unsigned long udiSelectedModtoUpt;
_BUR_LOCAL plcstring sSelectedActtoUpdate[81];
_BUR_LOCAL signed short iActionIndex;
_BUR_LOCAL plcstring sTempBoardId[81];
_BUR_LOCAL unsigned char usiBrdChkZone;
_BUR_LOCAL unsigned char usiBrdZone;
_BUR_LOCAL unsigned char usiLeftmostBlockedZone;
_BUR_LOCAL plcbit a_bLinkOpsGConvHvBrd[2][5];
_BUR_LOCAL plcbit a_bLinkOpsGConvStepInitDone[2][5];
_BUR_LOCAL struct tyActionByZone a_tyActionReservedForZone[5];
_BUR_LOCAL plcbit bCurrZoneConvInitDone;
_BUR_LOCAL plcbit bCurrZoneOpsGConvHvBrd;
_BUR_LOCAL plcbit bSimBrdInZone1;
_BUR_LOCAL plcbit bSimBrdInZone2;
_BUR_LOCAL plcbit bSimBrdInZone3;
_BUR_LOCAL plcbit bSimShiftBoardFoward;
_BUR_LOCAL signed short iActionOnBrd;
_BUR_LOCAL tyHermesBAMsgAttribAddr tyHermesBoardAvailableAttribAddr;
_GLOBAL signed long c_diHermesConfigMaxIdx;
_GLOBAL unsigned char c_diHermesConfigMaxInterfaceIdx;
