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

#ifndef __AS__TYPE_eMcParamAction
#define __AS__TYPE_eMcParamAction
typedef enum eMcParamAction
{	McParamActIdle = 0,
	McParamActCreateDir = 1,
	McParamActRead = 2,
	McParamActWrite = 3,
} eMcParamAction;
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

_BUR_LOCAL eHermesAction eStat;
_BUR_LOCAL eHermesAction eHermesAct;
_BUR_LOCAL eMcParamAction eMcParamAct;
_BUR_LOCAL eFBStatus eMainStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL tyAlmDat tyAlmData3;
_BUR_LOCAL tyAlmDat tyAlmData4;
_BUR_LOCAL tyAlmDat tyInfoData;
_BUR_LOCAL tyAlmDat tyInfoData1;
_BUR_LOCAL tyAlmDat tyInfoData2;
_BUR_LOCAL tyAlmDat tyInfoData3;
_BUR_LOCAL tyAlmDat tyInfoData4;
_BUR_LOCAL tyAlmDat tyInfoData5;
_BUR_LOCAL tyAlmDat tyInfoData6;
_BUR_LOCAL plcbit bConnected;
_BUR_LOCAL plcbit bHandshakeDone;
_BUR_LOCAL plcstring sInternalSnd[65536];
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL plcbit bWriteConfig;
_BUR_LOCAL plcbit bUpdateUIData;
_BUR_LOCAL plcstring sWorkOrderId[81];
_BUR_LOCAL plcstring sBatchId[81];
_BUR_LOCAL plcbit bManualInsertData;
_BUR_LOCAL plcbit bRcvWorkOrderInfo1;
_BUR_LOCAL plcbit bRcvInsertBoardInfo;
_BUR_LOCAL plcbit bFoundIndexUS1;
_BUR_LOCAL plcbit bFoundIndexUS2;
_BUR_LOCAL plcbit bFoundIndexUS3;
_BUR_LOCAL plcbit bFoundIndexUS4;
_BUR_LOCAL plcbit bFoundIndexDS1;
_BUR_LOCAL plcbit bFoundIndexDS2;
_BUR_LOCAL plcbit bFoundIndexDS3;
_BUR_LOCAL plcbit bFoundIndexDS4;
_BUR_LOCAL unsigned long udiFoundIndexUS1;
_BUR_LOCAL unsigned long udiFoundIndexUS2;
_BUR_LOCAL unsigned long udiFoundIndexUS3;
_BUR_LOCAL unsigned long udiFoundIndexUS4;
_BUR_LOCAL unsigned long udiFoundIndexDS1;
_BUR_LOCAL unsigned long udiFoundIndexDS2;
_BUR_LOCAL unsigned long udiFoundIndexDS3;
_BUR_LOCAL unsigned long udiFoundIndexDS4;
_BUR_LOCAL tyHermesSetConfiguration tySetConfigurationModified;
_BUR_LOCAL tyHermesSendWorkOrderInfo tySendWorkOrderInfoRcv;
_GLOBAL unsigned long p_SvyHermesStat;
_GLOBAL unsigned long p_SvyHermesStatus;
_GLOBAL unsigned long p_SvyHermesStatTxt;
_GLOBAL unsigned long p_SvyHermesAct;
_GLOBAL unsigned long p_SvyHermesMcParamAct;
_GLOBAL unsigned long p_SvyHermesAlmData;
_GLOBAL unsigned long p_SvyHermesAlmData1;
_GLOBAL unsigned long p_SvyHermesAlmData2;
_GLOBAL unsigned long p_SvyHermesAlmData3;
_GLOBAL unsigned long p_SvyHermesAlmData4;
_GLOBAL unsigned long p_SvyHermesInfoData;
_GLOBAL unsigned long p_SvyHermesInfoData1;
_GLOBAL unsigned long p_SvyHermesInfoData2;
_GLOBAL unsigned long p_SvyHermesInfoData3;
_GLOBAL unsigned long p_SvyHermesInfoData4;
_GLOBAL unsigned long p_SvyHermesInfoData5;
_GLOBAL unsigned long p_SvyHermesInfoData6;
_GLOBAL unsigned long p_SvyHermesConnected;
_GLOBAL unsigned long p_SvyHermesHandshakeDone;
_GLOBAL unsigned long p_SvyHermesFileNotFound;
_GLOBAL unsigned long p_SvyHermesSetConfiguration;
_GLOBAL unsigned long p_SvyHermesWriteConfig;
_GLOBAL unsigned long p_SvyHermesUpdateUIData;
_GLOBAL unsigned long p_SvyHermesInternalSnd;
_GLOBAL unsigned long p_SvyHermesWorkOrderId;
_GLOBAL unsigned long p_SvyHermesBatchId;
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
_GLOBAL unsigned long p_SvyHermesSendWorkOrderInfo;
_GLOBAL unsigned long p_SvyHermesRcvInsertBoardInfo;
_GLOBAL unsigned long p_RcvWorkOrderInfo1;
_GLOBAL unsigned long p_ManualInsertData;
_GLOBAL signed long c_diHermesConfigMaxIdx;
