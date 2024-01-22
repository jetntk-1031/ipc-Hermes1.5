#ifndef __AS__TYPE_
#define __AS__TYPE_
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

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
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

_BUR_LOCAL eHermesAction eStat;
_BUR_LOCAL eFBStatus eMainStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL tyAlmDat tyAlmData3;
_BUR_LOCAL tyAlmDat tyAlmData4;
_BUR_LOCAL plcbit bConnected;
_BUR_LOCAL plcbit bHandshakeDone;
_BUR_LOCAL plcbit bUSRdy;
_BUR_LOCAL plcbit bDSRdy;
_BUR_LOCAL plcbit bUSGdRdy;
_BUR_LOCAL plcbit bDSGdRdy;
_BUR_LOCAL plcbit bTransporting;
_BUR_LOCAL plcbit bStopTransport;
_BUR_LOCAL plcstring sInternalSnd[65536];
_BUR_LOCAL tyHermesBoardAvailable tyBoardAvailableSnd;
_BUR_LOCAL tyHermesTransportFinished tyTransportFinished;
_BUR_LOCAL tyHermesCommandParam tyCommandParam;
_BUR_LOCAL plcbit bTransportFinishedSnd;
_GLOBAL unsigned long p_DSHermes2Stat;
_GLOBAL unsigned long p_DSHermes2Status;
_GLOBAL unsigned long p_DSHermes2StatTxt;
_GLOBAL unsigned long p_DSHermes2AlmData;
_GLOBAL unsigned long p_DSHermes2AlmData1;
_GLOBAL unsigned long p_DSHermes2AlmData2;
_GLOBAL unsigned long p_DSHermes2AlmData3;
_GLOBAL unsigned long p_DSHermes2AlmData4;
_GLOBAL unsigned long p_DSHermes2Connected;
_GLOBAL unsigned long p_DSHermes2HandshakeDone;
_GLOBAL unsigned long p_DSHermes2USRdy;
_GLOBAL unsigned long p_DSHermes2DSRdy;
_GLOBAL unsigned long p_DSHermes2USGdRdy;
_GLOBAL unsigned long p_DSHermes2DSGdRdy;
_GLOBAL unsigned long p_DSHermes2Transporting;
_GLOBAL unsigned long p_DSHermes2StopTransport;
_GLOBAL unsigned long p_DSHermes2InternalSnd;
_GLOBAL unsigned long p_DSHermes2CommandParam;
_GLOBAL unsigned long p_DSHermes2BrdAvlSnd;
_GLOBAL unsigned long p_DSHermes2TransportFinish;
_GLOBAL unsigned long p_DSHermes2TransportFinishMsg;
