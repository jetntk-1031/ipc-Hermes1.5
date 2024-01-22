#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
static unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length);
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

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
	plcbit bFeatureReplyWorkOrderInfo;
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
{	plcstring sBoardId[255];
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
_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC unsigned long memmove(unsigned long pDest, unsigned long pSrc, unsigned long length);
_BUR_PUBLIC plcstring* udint2str(unsigned long IN, plcstring pStr[81], unsigned long len);
_BUR_PUBLIC signed short str2int(plcstring IN[81]);
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
_BUR_PUBLIC plcbit fConvertToLower_254(plcstring p_sOutput[255], plcstring sInput[255]);
_BUR_PUBLIC plcbit fHermesGenerateBrdAvlDat(struct tyHermesBrdAvlDat(* p_tyHermesBrdAvlDat), struct tyHermesBAMsgAttribAddr(* tyHermesBAMsgAttribAddr));
_BUR_PUBLIC plcbit fHermesAddEditAttribBrdAvlDat(struct tyHermesBrdAvlDat(* p_tyHermesBrdAvlDat), plcstring sAttributeTiltle[81], plcstring sAttributeValue[81]);
_BUR_PUBLIC signed short fHermesSrchAttribValueBrdAvlDat(struct tyHermesBrdAvlDat(* p_tyHermesBrdAvlDat), plcstring sAttributeTiltle[81], plcstring sAttributeValue[255]);
_BUR_PUBLIC plcbit fHermesAddOneCmdTyp(eHermesCommand pa_eCmd[21], unsigned long(* p_udiIdx), eHermesCommand eCmd);
_BUR_PUBLIC unsigned char fHermesAddOneCommandGate(plcbit bUsTrueDsFalse, struct tyHermesCommandParam(* tyHermesCmdParam), plcstring sInterface[81], unsigned long(* udiComMode), struct tyHermesCmdProcessList tyCommandProcessList[7], unsigned char(* p_udiIdx));
_BUR_PUBLIC plcbit fHermesRcvCmdReqToPause(unsigned char(* p_usiCommandIdx), struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandPause(* p_tyHermesCmdPause));
_BUR_PUBLIC plcbit fHermesSndCmdReqToPause(struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandPause(* p_tyHermesCmdPause));
_BUR_PUBLIC plcbit fHermesRcvCmdReqFromPause(unsigned char(* p_usiCommandIdx), struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandPause(* p_tyHermesCmdPause));
_BUR_PUBLIC plcbit fHermesSndCmdReqFromPause(struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandPause(* p_tyHermesCmdPause));
_BUR_PUBLIC plcbit fHermesRcvCmdReqFromLockCov(unsigned char(* p_usiCommandIdx), struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandLockConv(* p_tyHermesCmdLockCov));
_BUR_PUBLIC plcbit fHermesSndCmdReqToLockConv(struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandLockConv(* p_tyHermesCmdLockCov));
_BUR_PUBLIC plcbit fHermesRcvCmdReqFromOvenInfeed(unsigned char(* p_usiCommandIdx), struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandOvenInfeed(* p_tyHermesCmdOvenInfeed));
_BUR_PUBLIC plcbit fHermesSndCmdReqToOvenInfeed(struct tyHermesCommandParam(* p_tyHermesCmdParam), struct tyHermesCommandOvenInfeed(* p_tyHermesCmdOvenInfeed));
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
_BUR_LOCAL struct tyHermesBrdAvlDat a_tyHermesBrdAvlData[7];
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
_BUR_LOCAL unsigned char usiStep;
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
_BUR_LOCAL unsigned long udiSelectedModtoUpt;
_BUR_LOCAL plcstring sSelectedActtoUpdate[81];
_BUR_LOCAL unsigned char usiBrdZone;
_BUR_LOCAL unsigned char usiLeftmostBlockedZone;
_BUR_LOCAL plcbit a_bLinkOpsGConvHvBrd[5];
_BUR_LOCAL plcbit a_bLinkOpsGConvStepInitDone[5];
_BUR_LOCAL struct tyActionByZone a_tyActionReservedForZone[5];
_BUR_LOCAL plcbit bSimBrdInZone1;
_BUR_LOCAL plcbit bSimBrdInZone2;
_BUR_LOCAL plcbit bSimBrdInZone3;
_BUR_LOCAL plcbit bSimShiftBoardFoward;
_BUR_LOCAL plcbit bSimClear;
_BUR_LOCAL signed short iActionOnBrd;
_BUR_LOCAL signed short iActionAttributeIdx;
_BUR_LOCAL unsigned char startpos;
_BUR_LOCAL unsigned char endpos;
_BUR_LOCAL unsigned char dltpos;
_BUR_LOCAL plcstring sAttribReadValue[255];
_BUR_LOCAL tyHermesBAMsgAttribAddr tyHermesBoardAvailableAttribAddr;
_GLOBAL unsigned long p_UIHermesAct;
_GLOBAL unsigned long p_UIHermesUSParamWr;
_GLOBAL unsigned long p_UIHermesDSParamWr;
_GLOBAL unsigned long p_UIHermesSvyParamWr;
_GLOBAL unsigned long p_UISaveHMIConfigure;
_GLOBAL unsigned long p_UISaveHMISvyConfig;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupHermesAct;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_TimeCurrDTStruct;
_GLOBAL unsigned long p_HWInfoMacAddr;
_GLOBAL plcstring g_sHermesProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width;
_GLOBAL unsigned long p_McParamMcNm;
_GLOBAL unsigned long p_McParamHermesRmtEn;
_GLOBAL unsigned long p_McParamUSCommMod;
_GLOBAL unsigned long p_McParamDSCommMod;
_GLOBAL unsigned long p_McParamUSComm2Mod;
_GLOBAL unsigned long p_McParamHermesSvyEn;
_GLOBAL unsigned long p_NtParamHermesPrep;
_GLOBAL unsigned long p_NtParamHermesRmtPrep;
_GLOBAL unsigned long p_NtParamHermesProgNm;
_GLOBAL unsigned long p_NtParamHermesConfigFileNm;
_GLOBAL unsigned long p_NTParamUnlockCovPrep;
_GLOBAL unsigned long p_NTParamMachineSafetySig;
_GLOBAL unsigned long p_NtParamHermesSvyPrep;
_GLOBAL unsigned long p_HermesUSCmdFeaturePause;
_GLOBAL unsigned long p_HermesUSCmdPause;
_GLOBAL unsigned long p_HermesDSCmdFeaturePause;
_GLOBAL unsigned long p_HermesDSCmdPause;
_GLOBAL unsigned long p_USHermesTableDataBrdAvl;
_GLOBAL unsigned long p_USHermesTableDataBrdAvlTtlIdx;
_GLOBAL unsigned long p_USHermesTransporting;
_GLOBAL unsigned long p_USHermestyBoardAvailable;
_GLOBAL unsigned long p_USHermesCommandParam;
_GLOBAL unsigned long p_USHermesBrdForecastRcv;
_GLOBAL unsigned long p_USHermesBoardAvailableRcved;
_GLOBAL unsigned long p_USHermesStopTransportSent;
_GLOBAL unsigned long p_USHermesStopTransportSentMsg;
_GLOBAL unsigned long p_USHermesBrdForecast;
_GLOBAL unsigned long p_USHermes2TableDataBrdAvl;
_GLOBAL unsigned long p_USHermes2TableDataBrdAvlTtlIdx;
_GLOBAL unsigned long p_USHermes2Transporting;
_GLOBAL unsigned long p_USHermes2tyBoardAvailable;
_GLOBAL unsigned long p_USHermes2CommandParam;
_GLOBAL unsigned long p_USHermes2BrdForecastRcv;
_GLOBAL unsigned long p_USHermes2BoardAvailableRcved;
_GLOBAL unsigned long p_USHermes2StopTransportSent;
_GLOBAL unsigned long p_USHermes2StopTransportSentMsg;
_GLOBAL unsigned long p_USHermes2BrdForecast;
_GLOBAL unsigned long p_DSHermesUSRdy;
_GLOBAL unsigned long p_DSHermesCommandParam;
_GLOBAL unsigned long p_DSHermesBrdAvlSnd;
_GLOBAL unsigned long p_DSHermesTransportFinish;
_GLOBAL unsigned long p_DSHermesTransportFinishMsg;
_GLOBAL unsigned long p_DSHermes2USRdy;
_GLOBAL unsigned long p_DSHermes2BrdAvlSnd;
_GLOBAL unsigned long p_DSHermes2TransportFinish;
_GLOBAL unsigned long p_DSHermes2TransportFinishMsg;
_GLOBAL unsigned long p_RmtHermesAct;
_GLOBAL unsigned long p_RmtHermesWriteConfig;
_GLOBAL unsigned long p_RmtHermesSetConfiguration;
_GLOBAL unsigned long p_RmtHermesFoundIndexUS1;
_GLOBAL unsigned long p_RmtHermesFoundIndexUS2;
_GLOBAL unsigned long p_RmtHermesFoundIndexUS3;
_GLOBAL unsigned long p_RmtHermesFoundIndexUS4;
_GLOBAL unsigned long p_RmtHermesFoundIndexDS1;
_GLOBAL unsigned long p_RmtHermesFoundIndexDS2;
_GLOBAL unsigned long p_RmtHermesFoundIndexDS3;
_GLOBAL unsigned long p_RmtHermesFoundIndexDS4;
_GLOBAL unsigned long p_RmtHermesIndexUS1;
_GLOBAL unsigned long p_RmtHermesIndexUS2;
_GLOBAL unsigned long p_RmtHermesIndexUS3;
_GLOBAL unsigned long p_RmtHermesIndexUS4;
_GLOBAL unsigned long p_RmtHermesIndexDS1;
_GLOBAL unsigned long p_RmtHermesIndexDS2;
_GLOBAL unsigned long p_RmtHermesIndexDS3;
_GLOBAL unsigned long p_RmtHermesIndexDS4;
_GLOBAL unsigned long p_SvyHermesAct;
_GLOBAL unsigned long p_SvyHermesSetConfiguration;
_GLOBAL unsigned long p_SvyHermesWriteConfig;
_GLOBAL unsigned long p_SvyHermesFoundIndexUS1;
_GLOBAL unsigned long p_SvyHermesFoundIndexUS2;
_GLOBAL unsigned long p_SvyHermesFoundIndexUS3;
_GLOBAL unsigned long p_SvyHermesFoundIndexUS4;
_GLOBAL unsigned long p_SvyHermesFoundIndexDS1;
_GLOBAL unsigned long p_SvyHermesFoundIndexDS2;
_GLOBAL unsigned long p_SvyHermesFoundIndexDS3;
_GLOBAL unsigned long p_SvyHermesFoundIndexDS4;
_GLOBAL unsigned long p_SvyHermesIndexUS1;
_GLOBAL unsigned long p_SvyHermesIndexUS2;
_GLOBAL unsigned long p_SvyHermesIndexUS3;
_GLOBAL unsigned long p_SvyHermesIndexUS4;
_GLOBAL unsigned long p_SvyHermesIndexDS1;
_GLOBAL unsigned long p_SvyHermesIndexDS2;
_GLOBAL unsigned long p_SvyHermesIndexDS3;
_GLOBAL unsigned long p_SvyHermesIndexDS4;
_GLOBAL unsigned long p_OpsInvertHvBrd;
_GLOBAL unsigned long p_OpsInvertStepInitDone;
_GLOBAL unsigned long p_OpsInvertStepEntToEnd;
_GLOBAL unsigned long p_OpsInvertStepEntToInOff;
_GLOBAL unsigned long p_OpsInvertStepExitBrd;
_GLOBAL unsigned long p_OpsInvertStepInvert;
_GLOBAL signed long c_diHermesConfigMaxIdx;
_GLOBAL unsigned char c_diHermesConfigMaxInterfaceIdx;
_LOCAL plcbit Edge0001000000;
_LOCAL plcbit Edge0001000001;
_LOCAL plcbit Edge0001000002;
_LOCAL plcbit Edge0001000003;
_LOCAL plcbit Edge0000600000;
_LOCAL plcbit Edge0000600001;
_LOCAL plcbit Edge0000600002;
_LOCAL plcbit Edge0000600003;
_LOCAL plcbit Edge0000600004;
_LOCAL plcbit Edge0000600005;
_LOCAL plcbit Edge0000600006;
_LOCAL plcbit Edge0000600007;
_LOCAL plcbit Edge0000600008;
_LOCAL plcbit Edge0000600009;
_LOCAL plcbit Edge0000600010;
_LOCAL plcbit Edge0000400000;
_LOCAL plcbit Edge0000400001;
_LOCAL plcbit Edge0000400002;
_LOCAL plcbit Edge0000400003;
_LOCAL plcbit Edge0000400004;
_LOCAL plcbit Edge0000400005;
_LOCAL plcbit Edge0000400006;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_LinkEn(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Background_Command(void);
static void __AS__Action__Act_Background_Route(void);
static void __AS__Action__Act_Background_Action(void);
static void __AS__Action__Act_Alarm(void);
