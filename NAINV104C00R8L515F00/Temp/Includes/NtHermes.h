/* Automation Studio generated header file */
/* Do not edit ! */
/* NtHermes 5.00.4 */

#ifndef _NTHERMES_
#define _NTHERMES_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtHermes_VERSION
#define _NtHermes_VERSION 5.00.4
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "NtGeneral.h"
#endif
#ifdef _SG4
		#include "NtGeneral.h"
#endif
#ifdef _SGC
		#include "NtGeneral.h"
#endif


/* Constants */
#ifdef _REPLACE_CONST
 #define c_diHermesConfigMaxInterfaceIdx 6U
 #define c_diHermesConfigMaxIdx 3
#else
 _GLOBAL_CONST unsigned char c_diHermesConfigMaxInterfaceIdx;
 _GLOBAL_CONST signed long c_diHermesConfigMaxIdx;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum eHermesState
{	HermesStateNotConnected,
	HermesStateConnected,
	HermesStateServiceDescription,
	HermesStateSServiceDescription,
	HermesStateNotAvailableNotReady,
	HermesStateBoardAvailable,
	HermesStateMachineReady,
	HermesStateAvailableAndReady,
	HermesStateTransporting,
	HermesStateTransportStopped,
	HermesStateTransportFinished
} eHermesState;

typedef enum eHermesMsgType
{	HermesMsgTypeNA,
	HermesMsgTypeCheckAlive,
	HermesMsgTypeCheckAlivePing,
	HermesMsgTypeCheckAlivePong,
	HermesMsgTypeServiceDescription,
	HermesMsgTypeSServiceDescription,
	HermesMsgTypeNotification,
	HermesMsgTypeBoardAvailable,
	HermesMsgTypeRevokeBoardAvl,
	HermesMsgTypeMachineReady,
	HermesMsgTypeRevokeMachineReady,
	HermesMsgTypeStartTransport,
	HermesMsgTypeStopTransport,
	HermesMsgTypeTransportFinished,
	HermesMsgTypeSetConfiguration,
	HermesMsgTypeGetConfiguration,
	HermesMsgTypeCurrConfiguration,
	HermesMsgTypeBoardForecast,
	HermesMsgTypeBoardForecastId,
	HermesMsgTypeBoardForecastNoId,
	HermesMsgTypeBoardArrived,
	HermesMsgTypeBoardArrived1,
	HermesMsgTypeBoardArrived2,
	HermesMsgTypeBoardArrived3,
	HermesMsgTypeBoardArrived4,
	HermesMsgTypeBoardDeparted,
	HermesMsgTypeBoardDeparted1,
	HermesMsgTypeBoardDeparted2,
	HermesMsgTypeBoardDeparted3,
	HermesMsgTypeBoardDeparted4,
	HermesMsgTypeQueryBoardInfo,
	HermesMsgTypeSendBoardInfo,
	HermesMsgTypeQueryWorkOrderInfo,
	HermesMsgTypeSendWorkOrderInfo,
	HermesMsgTypeReplyWorkOrderInfo,
	HermesMsgTypeCommand
} eHermesMsgType;

typedef enum eHermesCheckAliveType
{	HermesCheckAliveTypeUnknown = 0,
	HermesCheckAliveTypePing = 1,
	HermesCheckAliveTypePong = 2
} eHermesCheckAliveType;

typedef enum eHermesBoardTransfer
{	HermesTransferred = 1,
	HermesLoaded = 2,
	HermesInserted = 3
} eHermesBoardTransfer;

typedef enum eHermesFailedBoard
{	HermesUnknownBoard = 0,
	HermesGoodBoard = 1,
	HermesFailedBoard = 2
} eHermesFailedBoard;

typedef enum eHermesFlippedBoard
{	HermesFlippedBoardUnknownSide = 0,
	HermesFlippedBoardTopSideUp = 1,
	HermesFlippedBoardBtmSideUp = 2
} eHermesFlippedBoard;

typedef enum eHermesSeverity
{	HermesSeverityFatalError = 1,
	HermesSeverityError = 2,
	HermesSeverityWarning = 3,
	HermesSeverityInfo = 4
} eHermesSeverity;

typedef enum eHermesTransferState
{	HermesTransferStateNotStarted = 1,
	HermesTransferStateIncomplete = 2,
	HermesTransferStateComplete = 3
} eHermesTransferState;

typedef enum eHermesBAMsgAction
{	HermesActionNA,
	HermesActionBypass,
	HermesActionInspect,
	HermesActionInvert,
	HermesActionFIFO,
	HermesActionLIFO
} eHermesBAMsgAction;

typedef enum eHermesCommand
{	HermesCommandUndefined = 0,
	HermesCommandLockInputConveyor = 1,
	HermesCommandUnLockInputConveyor = 2,
	HermesCommandRequestPause = 3,
	HermesCommandConfirmPause = 4,
	HermesCommandResumeOperation = 5,
	HermesCommandOvenInfeed = 1000,
	HermesCommandSelfDefine = 1001
} eHermesCommand;

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

typedef struct tyHermesBrdAvlDat
{	struct tyXMLTableDat a_tyXMLTableDataBrdAvl[201];
	signed short iXMLTableDataBrdAvlTtlIdx;
	plcbit bNewBrdAvl;
} tyHermesBrdAvlDat;

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

typedef struct tyHermesCmdProcessList
{	plcbit bUSTrueDSFalse;
	unsigned long udiInterfaceString;
	unsigned long udiComMode;
	unsigned long udiCommandParam;
} tyHermesCmdProcessList;

typedef struct tyHermesCommandParam
{	unsigned char usiCommandIdx;
	enum eHermesCommand eCommand;
	unsigned long udiMsgCmdBffr;
	enum eHermesCommand a_eCommandSndQ[21];
} tyHermesCommandParam;

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

typedef struct tyHermesCommandLockConv
{	plcbit bFeatureLockConvFrom;
	plcbit bOvenInfoFrom;
	plcbit bFeatureLockConvTo;
	plcbit bOvenInfoTo;
	plcbit bPrevOvenInfoTo;
} tyHermesCommandLockConv;

typedef struct tyHermesCommandOvenInfeed
{	plcbit bFeatureOvenInfeedFrom;
	plcbit bOvenInfeedFrom;
	plcbit bFeatureOvenInfeedTo;
	plcbit bOvenInfeedTo;
	plcbit bPrevOvenInfeedTo;
} tyHermesCommandOvenInfeed;

typedef struct tyHermesNotificationData
{	signed short iNotificationCode;
	enum eHermesSeverity eSeverity;
	plcstring sDescription[255];
} tyHermesNotificationData;

typedef struct tyHermesNotificationAvl
{	plcbit bNotificationCode;
	plcbit bSeverity;
	plcbit bDescription;
} tyHermesNotificationAvl;

typedef struct tyHermesNotification
{	struct tyHermesNotificationData tyData;
	struct tyHermesNotificationAvl tyAvl;
} tyHermesNotification;

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

typedef struct tyHermesServiceDescriptionData
{	plcstring sMachineId[81];
	plcstring sSystemId[81];
	signed short iLaneId;
	plcstring sInterfaceId[81];
	plcstring sVersion[8];
	struct tyHermesFeature tySupportedFeatures;
} tyHermesServiceDescriptionData;

typedef struct tyHermesFeatureAvl
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeatureAvl;

typedef struct tyHermesServiceDescriptionAvl
{	plcbit bMachineId;
	plcbit bSystemId;
	plcbit bLaneId;
	plcbit bInterfaceId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	struct tyHermesFeatureAvl tySupportedFeatures;
} tyHermesServiceDescriptionAvl;

typedef struct tyHermesServiceDescription
{	struct tyHermesServiceDescriptionData tyData;
	struct tyHermesServiceDescriptionAvl tyAvl;
} tyHermesServiceDescription;

typedef struct tyHermesSvyFeature
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
} tyHermesSvyFeature;

typedef struct tyHermesSServiceDescriptionData
{	plcstring sSystemId[81];
	plcstring sMachineId[81];
	plcstring sVersion[8];
	struct tyHermesSvyFeature tySupportedFeatures;
} tyHermesSServiceDescriptionData;

typedef struct tyHermesSvyFeatureAvl
{	plcbit bFeatureConfiguration;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
} tyHermesSvyFeatureAvl;

typedef struct tyHermesSServiceDescriptionAvl
{	plcbit bSystemId;
	plcbit bMachineId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	struct tyHermesSvyFeatureAvl tySupportedFeatures;
} tyHermesSServiceDescriptionAvl;

typedef struct tyHermesSServiceDescription
{	struct tyHermesSServiceDescriptionData tyData;
	struct tyHermesSServiceDescriptionAvl tyAvl;
} tyHermesSServiceDescription;

typedef struct tyHermesCheckAliveData
{	enum eHermesCheckAliveType eType;
	plcstring sId[81];
} tyHermesCheckAliveData;

typedef struct tyHermesCheckAliveAvl
{	plcbit bType;
	plcbit bId;
} tyHermesCheckAliveAvl;

typedef struct tyHermesCheckAlive
{	struct tyHermesCheckAliveData tyData;
	struct tyHermesCheckAliveAvl tyAvl;
} tyHermesCheckAlive;

typedef struct tyHermesBASubBoardsData
{	signed short iSubBoardsPos[5];
	plcstring sSubBoardsBc[5][81];
	signed short iSubBoardsSt[5];
} tyHermesBASubBoardsData;

typedef struct tyHermesBoardAvailableData
{	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	enum eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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
	struct tyHermesBASubBoardsData tySubBoards;
} tyHermesBoardAvailableData;

typedef struct tyHermesBASubBoardsAvl
{	plcbit bSubBoardsPos[5];
	plcbit bSubBoardsBc[5];
	plcbit bSubBoardsSt[5];
} tyHermesBASubBoardsAvl;

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
	struct tyHermesBASubBoardsAvl tySubBoards;
} tyHermesBoardAvailableAvl;

typedef struct tyHermesBoardAvailable
{	struct tyHermesBoardAvailableData tyData;
	struct tyHermesBoardAvailableAvl tyAvl;
} tyHermesBoardAvailable;

typedef struct tyHermesMachineReadyData
{	enum eHermesFailedBoard eFailedBoard;
	plcstring sForecastId[81];
	plcstring sBoardId[37];
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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

typedef struct tyHermesMachineReady
{	struct tyHermesMachineReadyData tyData;
	struct tyHermesMachineReadyAvl tyAvl;
} tyHermesMachineReady;

typedef struct tyHermesStartTransportData
{	plcstring sBoardId[37];
	float rConveyorSpeed;
} tyHermesStartTransportData;

typedef struct tyHermesStartTransportAvl
{	plcbit bBoardId;
	plcbit bConveyorSpeed;
} tyHermesStartTransportAvl;

typedef struct tyHermesStartTransport
{	struct tyHermesStartTransportData tyData;
	struct tyHermesStartTransportAvl tyAvl;
} tyHermesStartTransport;

typedef struct tyHermesStopTransportData
{	enum eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesStopTransportData;

typedef struct tyHermesStopTransportAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesStopTransportAvl;

typedef struct tyHermesStopTransport
{	struct tyHermesStopTransportData tyData;
	struct tyHermesStopTransportAvl tyAvl;
} tyHermesStopTransport;

typedef struct tyHermesTransportFinishedData
{	enum eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesTransportFinishedData;

typedef struct tyHermesTransportFinishedAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesTransportFinishedAvl;

typedef struct tyHermesTransportFinished
{	struct tyHermesTransportFinishedData tyData;
	struct tyHermesTransportFinishedAvl tyAvl;
} tyHermesTransportFinished;

typedef struct tyHermesBoardForecastData
{	plcstring sForecastId[81];
	float rTimeUntilAvailable;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	enum eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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

typedef struct tyHermesBoardForecast
{	struct tyHermesBoardForecastData tyData;
	struct tyHermesBoardForecastAvl tyAvl;
} tyHermesBoardForecast;

typedef struct tyHermesQueryBoardInfoData
{	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
} tyHermesQueryBoardInfoData;

typedef struct tyHermesQueryBoardInfoAvl
{	plcbit bTopBarcode;
	plcbit bBottomBarcode;
} tyHermesQueryBoardInfoAvl;

typedef struct tyHermesQueryBoardInfo
{	struct tyHermesQueryBoardInfoData tyData;
	struct tyHermesQueryBoardInfoAvl tyAvl;
} tyHermesQueryBoardInfo;

typedef struct tyHermesSendBoardInfoData
{	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	enum eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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

typedef struct tyHermesSendBoardInfo
{	struct tyHermesSendBoardInfoData tyData;
	struct tyHermesSendBoardInfoAvl tyAvl;
} tyHermesSendBoardInfo;

typedef struct tyHermesBoardArrivedData
{	plcstring sMachineId[81];
	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	enum eHermesBoardTransfer eBoadTransfer;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	enum eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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

typedef struct tyHermesBoardArrived
{	struct tyHermesBoardArrivedData tyData;
	struct tyHermesBoardArrivedAvl tyAvl;
} tyHermesBoardArrived;

typedef struct tyHermesBoardDepartedData
{	plcstring sMachineId[81];
	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	enum eHermesBoardTransfer eBoadTransfer;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	enum eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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

typedef struct tyHermesBoardDeparted
{	struct tyHermesBoardDepartedData tyData;
	struct tyHermesBoardDepartedAvl tyAvl;
} tyHermesBoardDeparted;

typedef struct tyHermesUpstreamConfiguration
{	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sHostAddress[255];
	unsigned short uiPort;
} tyHermesUpstreamConfiguration;

typedef struct tyHermesDownstreamConfiguration
{	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sClientAddress[255];
	unsigned short uiPort;
} tyHermesDownstreamConfiguration;

typedef struct tyHermesSetConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationData;

typedef struct tyHermesUpstreamConfigurationAvl
{	plcbit bUpstreamLaneId;
	plcbit bUpstreamInterfaceId;
	plcbit bHostAddress;
	plcbit bPort;
} tyHermesUpstreamConfigurationAvl;

typedef struct tyHermesDnstreamConfigurationAvl
{	plcbit bDownstreamLaneId;
	plcbit bDownstreamInterfaceId;
	plcbit bClientAddress;
	plcbit bPort;
} tyHermesDnstreamConfigurationAvl;

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

typedef struct tyHermesSetConfiguration
{	struct tyHermesSetConfigurationData tyData;
	struct tyHermesSetConfigurationAvl tyAvl;
} tyHermesSetConfiguration;

typedef struct tyHermesCurrentConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesCurrentConfigurationData;

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

typedef struct tyHermesCurrentConfiguration
{	struct tyHermesCurrentConfigurationData tyData;
	struct tyHermesCurrentConfigurationAvl tyAvl;
} tyHermesCurrentConfiguration;

typedef struct tyHermesQueryWorkOrderInfoData
{	plcstring sQueryId[81];
	plcstring sMachineId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	plcstring sBarcode[255];
} tyHermesQueryWorkOrderInfoData;

typedef struct tyHermesQueryWorkOrderInfoAvl
{	plcbit bQueryId;
	plcbit bMachineId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBarcode;
} tyHermesQueryWorkOrderInfoAvl;

typedef struct tyHermesQueryWorkOrderInfo
{	struct tyHermesQueryWorkOrderInfoData tyData;
	struct tyHermesQueryWorkOrderInfoAvl tyAvl;
} tyHermesQueryWorkOrderInfo;

typedef struct tyHermesSendWorkOrderInfoData
{	plcstring sQueryId[81];
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	enum eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	enum eHermesFlippedBoard eFlippedBoard;
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

typedef struct tyHermesSendWorkOrderInfo
{	struct tyHermesSendWorkOrderInfoData tyData;
	struct tyHermesSendWorkOrderInfoAvl tyAvl;
} tyHermesSendWorkOrderInfo;

typedef struct tyHermesReplyWorkOrderInfoData
{	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	signed short iStatus;
} tyHermesReplyWorkOrderInfoData;

typedef struct tyHermesReplyWorkOrderInfoAvl
{	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bStatus;
} tyHermesReplyWorkOrderInfoAvl;

typedef struct tyHermesReplyWorkOrderInfo
{	struct tyHermesReplyWorkOrderInfoData tyData;
	struct tyHermesReplyWorkOrderInfoAvl tyAvl;
} tyHermesReplyWorkOrderInfo;

typedef struct tyHermesCommandData
{	enum eHermesCommand eCommand;
} tyHermesCommandData;

typedef struct tyHermesCommandAvl
{	plcbit bCommand;
} tyHermesCommandAvl;

typedef struct tyHermesCommand
{	struct tyHermesCommandData tyData;
	struct tyHermesCommandAvl tyAvl;
} tyHermesCommand;

typedef struct fbHermesSequenceUS
{
	/* VAR_INPUT (analog) */
	struct tyHermesMsgType* p_tyMsgTypeRcv;
	/* VAR_OUTPUT (analog) */
	enum eHermesMsgType eMsgTypeSnd;
	enum eHermesState eState;
	unsigned long udiStatus;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bRstState;
	plcbit bRdyRcv;
	plcbit bBlkUS;
	plcbit bRdyTransport;
	plcbit bRcvCompl;
	plcbit bRcvIncompl;
	plcbit bRcvNotStart;
	plcbit bProcessBoardForecastId;
	/* VAR_OUTPUT (digital) */
	plcbit bNotAvlNotRdy;
	plcbit bUSRdy;
	plcbit bDSRdy;
	plcbit bTransporting;
	plcbit bStopTransport;
	plcbit bBoardAvailable;
	/* VAR (digital) */
	plcbit zzEdge00000;
} fbHermesSequenceUS_typ;

typedef struct fbHermesSequenceDS
{
	/* VAR_INPUT (analog) */
	struct tyHermesMsgType* p_tyMsgTypeRcv;
	/* VAR_OUTPUT (analog) */
	enum eHermesMsgType eMsgTypeSnd;
	enum eHermesState eState;
	unsigned long udiStatus;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bRstState;
	plcbit bRdyRcv;
	plcbit bRdySnd;
	plcbit bBlkDS;
	plcbit bSndCompl;
	plcbit bSndIncompl;
	plcbit bSndNotStart;
	plcbit bFeatureBoardForecast;
	plcbit bOpsRun;
	plcbit bSendBFId;
	plcbit bBFIdSent;
	plcbit bSendBFNoID;
	/* VAR_OUTPUT (digital) */
	plcbit bUSRdy;
	plcbit bDSRdy;
	plcbit bTransporting;
	plcbit bStopTransport;
	/* VAR (digital) */
	plcbit zzEdge00000;
	plcbit zzEdge00001;
	plcbit zzEdge00002;
	plcbit zzEdge00003;
	plcbit zzEdge00004;
	plcbit zzEdge00005;
} fbHermesSequenceDS_typ;

typedef struct fbHermesSequenceSvy
{
	/* VAR_INPUT (analog) */
	struct tyHermesMsgType* p_tyMsgTypeRcv;
	/* VAR_OUTPUT (analog) */
	enum eHermesMsgType eMsgTypeSnd;
	enum eHermesState eState;
	unsigned long udiStatus;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bRstState;
} fbHermesSequenceSvy_typ;

typedef struct fbHermesSequenceTO
{
	/* VAR_INPUT (analog) */
	enum eHermesState eState;
	plctime tConnTimeOut;
	plctime tTransportTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct TON fbConnTimeOut;
	struct TON fbTransportTimeOut;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbHermesSequenceTO_typ;

typedef struct fbHermesSequenceSvyTO
{
	/* VAR_INPUT (analog) */
	enum eHermesState eState;
	plctime tConnTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct TON fbConnTimeOut;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbHermesSequenceSvyTO_typ;

typedef struct fbHermesGetSlt
{
	/* VAR_INPUT (analog) */
	enum eHermesFlippedBoard eFlippedBrd;
	float rThicknessInMM;
	float rTopClearanceHeightInMM;
	float rBtmClearanceHeightInMM;
	signed long diSltToSltInUM;
	signed long diTtlSlt;
	/* VAR_OUTPUT (analog) */
	signed long diMinSltValue;
	signed long diMaxSltValue;
	signed long diPitch;
	/* VAR (analog) */
	signed long diThicknessInUM;
	signed long diTopClearanceHeightInUM;
	signed long diBtmClearanceHeightInUM;
} fbHermesGetSlt_typ;

typedef struct fbHermesGetSndConfig
{
	/* VAR_INPUT (analog) */
	struct tyHermesMsgType* p_tyMsgTypeRcv;
	struct tyHermesMsgType* p_tyMsgTypeSnd;
	struct tyHermesCurrentConfigurationData tyCurrentConfigurationData;
	/* VAR_OUTPUT (analog) */
	struct tyHermesCurrentConfiguration tyCurrentConfiguration;
	unsigned long udiStatus;
	/* VAR (analog) */
	signed long di;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbHermesGetSndConfig_typ;

typedef struct fbHermesParseXMLTable
{
	/* VAR_INPUT (analog) */
	unsigned long p_XMLTable;
	signed short iTotalIdxWrite;
	/* VAR_OUTPUT (analog) */
	struct tyHermesMsgType tyMsgType;
	struct tyHermesCheckAlive tyCheckAlive;
	signed short iCheckAliveFirstIdx;
	signed short iCheckAliveLastIdx;
	struct tyHermesCheckAlive tyCheckAlivePing;
	signed short iCheckAlivePingFirstIdx;
	signed short iCheckAlivePingLastIdx;
	struct tyHermesCheckAlive tyCheckAlivePong;
	signed short iCheckAlivePongFirstIdx;
	signed short iCheckAlivePongLastIdx;
	struct tyHermesServiceDescription tyServiceDescription;
	signed short iServiceDescriptionFirstIdx;
	signed short iServiceDescriptionLastIdx;
	struct tyHermesSServiceDescription tySServiceDescription;
	signed short iSServiceDescriptionFirstIdx;
	signed short iSServiceDescriptionLastIdx;
	struct tyHermesNotification tyNotification;
	signed short iNotificationFirstIdx;
	signed short iNotificationLastIdx;
	struct tyHermesBoardAvailable tyBoardAvailable;
	signed short iBoardAvailableFirstIdx;
	signed short iBoardAvailableLastIdx;
	signed short iRevokeBoardAvailableFirstIdx;
	signed short iRevokeBoardAvailableLastIdx;
	struct tyHermesMachineReady tyMachineReady;
	signed short iMachineReadyFirstIdx;
	signed short iMachineReadyLastIdx;
	signed short iRevokeMachineReadyFirstIdx;
	signed short iRevokeMachineReadyLastIdx;
	struct tyHermesStartTransport tyStartTransport;
	signed short iStartTransportFirstIdx;
	signed short iStartTransportLastIdx;
	struct tyHermesStopTransport tyStopTransport;
	signed short iStopTransportFirstIdx;
	signed short iStopTransportLastIdx;
	struct tyHermesTransportFinished tyTransportFinished;
	signed short iTransportFinishedFirstIdx;
	signed short iTransportFinishedLastIdx;
	struct tyHermesSetConfiguration tySetConfiguration;
	signed short iSetConfigurationFirstIdx;
	signed short iSetConfigurationLastIdx;
	signed short iGetConfigurationFirstIdx;
	signed short iGetConfigurationLastIdx;
	struct tyHermesCurrentConfiguration tyCurrentConfiguration;
	signed short iCurrentConfigurationFirstIdx;
	signed short iCurrentConfigurationLastIdx;
	struct tyHermesBoardForecast tyBoardForecast;
	signed short iBoardForecastFirstIdx;
	signed short iBoardForecastLastIdx;
	struct tyHermesBoardArrived tyBoardArrived;
	signed short iBoardArrivedFirstIdx;
	signed short iBoardArrivedLastIdx;
	struct tyHermesBoardDeparted tyBoardDeparted;
	signed short iBoardDepartedFirstIdx;
	signed short iBoardDepartedLastIdx;
	struct tyHermesQueryBoardInfo tyQueryBoardInfo;
	signed short iQueryBoardInfoFirstIdx;
	signed short iQueryBoardInfoLastIdx;
	struct tyHermesSendBoardInfo tySendBoardInfo;
	signed short iSendBoardInfoFirstIdx;
	signed short iSendBoardInfoLastIdx;
	struct tyHermesQueryWorkOrderInfo tyQueryWorkOrderInfo;
	signed short iQueryWorkOrderInfoFirstIdx;
	signed short iQueryWorkOrderInfoLastIdx;
	struct tyHermesSendWorkOrderInfo tySendWorkOrderInfo;
	signed short iSendWorkOrderInfoFirstIdx;
	signed short iSendWorkOrderInfoLastIdx;
	struct tyHermesCommand tyCommand;
	signed short iCommandFirstIdx;
	signed short iCommandLastIdx1;
	/* VAR (analog) */
	struct tyXMLTableDat* p_tyXMLTable;
	struct tyXMLTableDat* p_tyXMLTable1;
	unsigned long udi;
	signed short iHermesIdx;
	enum eHermesMsgType eMsgType;
	plcstring sLowerCase[255];
	signed short iSubBoardCntr;
	/* VAR (digital) */
	plcbit bSetUpstream;
	plcbit bSetDownstream;
	plcbit bCurrUpstream;
	plcbit bCurrDownstream;
} fbHermesParseXMLTable_typ;

typedef struct fbHermesCheckAlive
{
	/* VAR_INPUT (analog) */
	plctime tSendTm;
	plctime tRcvTimeOut;
	/* VAR_OUTPUT (analog) */
	struct tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct TON fbSendTm;
	struct TON fbRcvTO;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDataRcv;
	/* VAR_OUTPUT (digital) */
	plcbit bDataSend;
	/* VAR (digital) */
	plcbit zzEdge00000;
} fbHermesCheckAlive_typ;

typedef struct fbHermesCheckAliveSendPing
{
	/* VAR_INPUT (analog) */
	struct tyHermesCheckAlive tyDataRcv;
	struct DTStructure tyDTStructure;
	plctime tSendTm;
	plctime tRcvTimeOut;
	/* VAR_OUTPUT (analog) */
	struct tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct TON fbSendTm;
	struct TON fbRcvTO;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDataRcv;
	/* VAR_OUTPUT (digital) */
	plcbit bDataSend;
	/* VAR (digital) */
	plcbit zzEdge00000;
	plcbit zzEdge00001;
} fbHermesCheckAliveSendPing_typ;

typedef struct fbHermesCheckAliveRcvPing
{
	/* VAR_INPUT (analog) */
	struct tyHermesCheckAlive tyDataRcv;
	/* VAR_OUTPUT (analog) */
	struct tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDataRcv;
	/* VAR_OUTPUT (digital) */
	plcbit bDataSend;
	/* VAR (digital) */
	plcbit zzEdge00000;
} fbHermesCheckAliveRcvPing_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbHermesSequenceUS(struct fbHermesSequenceUS* inst);
_BUR_PUBLIC void fbHermesSequenceDS(struct fbHermesSequenceDS* inst);
_BUR_PUBLIC void fbHermesSequenceSvy(struct fbHermesSequenceSvy* inst);
_BUR_PUBLIC void fbHermesSequenceTO(struct fbHermesSequenceTO* inst);
_BUR_PUBLIC void fbHermesSequenceSvyTO(struct fbHermesSequenceSvyTO* inst);
_BUR_PUBLIC void fbHermesGetSlt(struct fbHermesGetSlt* inst);
_BUR_PUBLIC void fbHermesGetSndConfig(struct fbHermesGetSndConfig* inst);
_BUR_PUBLIC void fbHermesParseXMLTable(struct fbHermesParseXMLTable* inst);
_BUR_PUBLIC void fbHermesCheckAlive(struct fbHermesCheckAlive* inst);
_BUR_PUBLIC void fbHermesCheckAliveSendPing(struct fbHermesCheckAliveSendPing* inst);
_BUR_PUBLIC void fbHermesCheckAliveRcvPing(struct fbHermesCheckAliveRcvPing* inst);
_BUR_PUBLIC unsigned long fHermesCmpSlt(enum eHermesFlippedBoard eHermesFlippedBrd, float rHermesThicknessInMM, float rHermesTopClearanceHeightInMM, float rHermesBtmClearanceHeightInMM, signed long diRcpMinSltValue, signed long diRcpMaxSltValue, signed long diRcpPitch, signed long diRcpSltToSltInUM, signed long diRcpTtlSlt);
_BUR_PUBLIC plcbit fHermesParseCheckAlive(struct tyHermesCheckAlive** p_tyCheckAlive, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseServiceDescription(struct tyHermesServiceDescription** p_tyServiceDescription, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseSServiceDescription(struct tyHermesSServiceDescription** p_tySServiceDescription, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseNotification(struct tyHermesNotification** p_tyNotification, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseBoardAvailable(struct tyHermesBoardAvailable** p_tyBoardAvailable, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase, signed short* iSubBoardCntr);
_BUR_PUBLIC plcbit fHermesParseMachineReady(struct tyHermesMachineReady** p_tyMachineReady, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseStartTransport(struct tyHermesStartTransport** p_tyStartTransport, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseStopTransport(struct tyHermesStopTransport** p_tyStopTransport, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseTransportFinished(struct tyHermesTransportFinished** p_tyTransportFinished, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseSetConfiguration(struct tyHermesSetConfiguration** p_tySetConfiguration, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase, plcbit* bUpstream, plcbit* bDownstream);
_BUR_PUBLIC plcbit fHermesParseCurrentConfiguration(struct tyHermesCurrentConfiguration** p_tyCurrentConfiguration, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase, plcbit* bUpstream, plcbit* bDownstream);
_BUR_PUBLIC plcbit fHermesParseBoardForecast(struct tyHermesBoardForecast** p_tyBoardForecast, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseQueryBoardInfo(struct tyHermesQueryBoardInfo** p_tyQueryBoardInfo, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseSendBoardInfo(struct tyHermesSendBoardInfo** p_tySendBoardInfo, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseBoardArrived(struct tyHermesBoardArrived** p_tyBoardArrived, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseBoardDeparted(struct tyHermesBoardDeparted** p_tyBoardDeparted, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseQueryWorkOrderInfo(struct tyHermesQueryWorkOrderInfo** p_tyQueryWorkOrderInfo, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseSendWorkOrderInfo(struct tyHermesSendWorkOrderInfo** p_tySendWorkOrderInfo, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC plcbit fHermesParseCommand(struct tyHermesCommand** p_tyCommand, struct tyXMLTableDat* tyXMLTableCurr, struct tyXMLTableDat* tyXMLTableNxt, plcstring* sCurrValueLowerCase);
_BUR_PUBLIC signed short fHermesFormCheckAlive(struct tyXMLTableDat (*pa_tyXMLTable)[12], struct DTStructure* tyDTStructure, struct tyHermesCheckAlive* tyParameter);
_BUR_PUBLIC signed short fHermesFormServiceDescription(struct tyXMLTableDat (*pa_tyXMLTable)[30], struct DTStructure* tyDTStructure, struct tyHermesServiceDescription* tyParameter);
_BUR_PUBLIC signed short fHermesFormSServiceDescription(struct tyXMLTableDat (*pa_tyXMLTable)[30], struct DTStructure* tyDTStructure, struct tyHermesSServiceDescription* tyParameter);
_BUR_PUBLIC signed short fHermesFormNotification(struct tyXMLTableDat (*pa_tyXMLTable)[14], struct DTStructure* tyDTStructure, struct tyHermesNotification* tyParameter);
_BUR_PUBLIC signed short fHermesFormBoardAvailable(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesBoardAvailable* tyParameter);
_BUR_PUBLIC signed short fHermesFormRevokeBoardAvailable(struct tyXMLTableDat (*pa_tyXMLTable)[8], struct DTStructure* tyDTStructure);
_BUR_PUBLIC signed short fHermesFormMachineReady(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesMachineReady* tyParameter);
_BUR_PUBLIC signed short fHermesFormRevokeMachineReady(struct tyXMLTableDat (*pa_tyXMLTable)[8], struct DTStructure* tyDTStructure);
_BUR_PUBLIC signed short fHermesFormStartTransport(struct tyXMLTableDat (*pa_tyXMLTable)[12], struct DTStructure* tyDTStructure, struct tyHermesStartTransport* tyParameter);
_BUR_PUBLIC signed short fHermesFormStopTransport(struct tyXMLTableDat (*pa_tyXMLTable)[12], struct DTStructure* tyDTStructure, struct tyHermesStopTransport* tyParameter);
_BUR_PUBLIC signed short fHermesFormTransportFinished(struct tyXMLTableDat (*pa_tyXMLTable)[12], struct DTStructure* tyDTStructure, struct tyHermesTransportFinished* tyParameter);
_BUR_PUBLIC signed short fHermesFormSetConfiguration(struct tyXMLTableDat (*pa_tyXMLTable)[80], struct DTStructure* tyDTStructure, struct tyHermesSetConfiguration* tyParameter);
_BUR_PUBLIC signed short fHermesFormGetConfiguration(struct tyXMLTableDat (*pa_tyXMLTable)[8], struct DTStructure* tyDTStructure);
_BUR_PUBLIC signed short fHermesFormCurrentConfiguration(struct tyXMLTableDat (*pa_tyXMLTable)[200], struct DTStructure* tyDTStructure, struct tyHermesCurrentConfiguration* tyParameter);
_BUR_PUBLIC signed short fHermesFormBoardForecast(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesBoardForecast* tyParameter);
_BUR_PUBLIC signed short fHermesFormQueryBoardInfo(struct tyXMLTableDat (*pa_tyXMLTable)[12], struct DTStructure* tyDTStructure, struct tyHermesQueryBoardInfo* tyParameter);
_BUR_PUBLIC signed short fHermesFormSendBoardInfo(struct tyXMLTableDat (*pa_tyXMLTable)[40], struct DTStructure* tyDTStructure, struct tyHermesSendBoardInfo* tyParameter);
_BUR_PUBLIC signed short fHermesFormBoardArrived(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesBoardArrived* tyParameter);
_BUR_PUBLIC signed short fHermesFormBoardDeparted(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesBoardDeparted* tyParameter);
_BUR_PUBLIC signed short fHermesFormQueryWorkOrderInfo(struct tyXMLTableDat (*pa_tyXMLTable)[20], struct DTStructure* tyDTStructure, struct tyHermesQueryWorkOrderInfo* tyParameter);
_BUR_PUBLIC signed short fHermesFormSendWorkOrderInfo(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesSendWorkOrderInfo* tyParameter);
_BUR_PUBLIC signed short fHermesFormReplyWorkOrderInfo(struct tyXMLTableDat (*pa_tyXMLTable)[50], struct DTStructure* tyDTStructure, struct tyHermesReplyWorkOrderInfo* tyParameter);
_BUR_PUBLIC signed short fHermesFormCommand(struct tyXMLTableDat (*pa_tyXMLTable)[12], struct DTStructure* tyDTStructure, struct tyHermesCommand* tyParameter);
_BUR_PUBLIC unsigned long fHermesChkParamBAMR(struct tyHermesBoardAvailable* tyBoardAvailable, struct tyHermesMachineReady* tyMachineReady);
_BUR_PUBLIC unsigned long fHermesChkParamBAST(struct tyHermesBoardAvailable* tyBoardAvailable, struct tyHermesStartTransport* tyStartTransport);
_BUR_PUBLIC unsigned long fHermesChkParamSTST(struct tyHermesStartTransport* tyStartTransport, struct tyHermesStopTransport* tyStopTransport);
_BUR_PUBLIC unsigned long fHermesChkParamSTTF(struct tyHermesStartTransport* tyStartTransport, struct tyHermesTransportFinished* tyTransportFinished);
_BUR_PUBLIC unsigned long fHermesChkParamBFMR(struct tyHermesBoardForecast* tyBoardForecast, struct tyHermesMachineReady* tyMachineReady);
_BUR_PUBLIC unsigned long fHermesChkParamSD(struct tyHermesServiceDescription* tyServiceDescription, signed short iLaneId);
_BUR_PUBLIC unsigned long fHermesChkParamSSD(struct tyHermesSServiceDescription* tyServiceDescription);
_BUR_PUBLIC unsigned long fHermesChkParamN(struct tyHermesNotification* tyNotification);
_BUR_PUBLIC unsigned long fHermesChkParamBA(struct tyHermesBoardAvailable* tyBoardAvailable);
_BUR_PUBLIC unsigned long fHermesChkParamMR(struct tyHermesMachineReady* tyMachineReady);
_BUR_PUBLIC unsigned long fHermesChkParamSAT(struct tyHermesStartTransport* tyStartTransport);
_BUR_PUBLIC unsigned long fHermesChkParamSOT(struct tyHermesStopTransport* tyStopTransport);
_BUR_PUBLIC unsigned long fHermesChkParamTF(struct tyHermesTransportFinished* tyTransportFinished);
#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC unsigned long fHermesChkParamSC(struct tyHermesSetConfiguration* tySetConfiguration, plcstring* sMachineId);
#else
_BUR_PUBLIC unsigned long fHermesChkParamSC(struct tyHermesSetConfiguration* tySetConfiguration, plcstring* sMachineId);
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC unsigned long fHermesChkParamCC(struct tyHermesCurrentConfiguration* tyCurrentConfiguration, plcstring* sMachineId);
#else
_BUR_PUBLIC unsigned long fHermesChkParamCC(struct tyHermesCurrentConfiguration* tyCurrentConfiguration, plcstring* sMachineId);
#endif

_BUR_PUBLIC unsigned long fHermesChkParamBF(struct tyHermesBoardForecast* tyBoardForecast);
_BUR_PUBLIC unsigned long fHermesChkParamQBI(struct tyHermesQueryBoardInfo* tyQueryBoardInfo);
_BUR_PUBLIC unsigned long fHermesChkParamSBIQBI(struct tyHermesSendBoardInfo* tySendBoardInfo, struct tyHermesQueryBoardInfo* tyQueryBoardInfo);
_BUR_PUBLIC unsigned long fHermesChkParamSWQW(struct tyHermesSendWorkOrderInfo* tySendWorkOrderInfo, struct tyHermesQueryWorkOrderInfo* tyQueryWorkOrderInfo);
_BUR_PUBLIC unsigned long fHermesChkParamCommand(struct tyHermesCommand* tyCommand);
_BUR_PUBLIC plcbit fHermesNotificationRstConn(struct tyHermesNotification* tyNotification);
_BUR_PUBLIC plcbit fHermesNotificationRstState(struct tyHermesNotification* tyNotification);
_BUR_PUBLIC unsigned long fHermesIllegalMsgUS(enum eHermesState eState, struct tyHermesMsgType* tyMsgType, plcbit bBoardAvailable);
_BUR_PUBLIC unsigned long fHermesIllegalMsgDS(enum eHermesState eState, struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgRmt(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgSvy(enum eHermesState eState, struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgNotConnectedUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgSrvcDescripUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgNotAvlNotRdyUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgBrdAvlUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgMcRdyUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgAvlAndRdyUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgTransportingUS(struct tyHermesMsgType* tyMsgType, plcbit bBoardAvailable);
_BUR_PUBLIC unsigned long fHermesIllegalMsgTransportStopUS(struct tyHermesMsgType* tyMsgType, plcbit bBoardAvailable);
_BUR_PUBLIC unsigned long fHermesIllegalMsgTransportFiniUS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgNotConnectedDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgSrvcDescripDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgNotAvlNotRdyDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgBrdAvlDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgMcRdyDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgAvlAndRdyDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgTransportingDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgTransportStopDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgTransportFiniDS(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgNotConnectedSvy(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgSrvcDescripSvy(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC unsigned long fHermesIllegalMsgConnectedSvy(struct tyHermesMsgType* tyMsgType);
_BUR_PUBLIC plcbit fHermesGenerateUUID(plcstring** p_sUUID, struct DTStructure* tyDTStructure, unsigned char a_usiMacAddr[6]);
_BUR_PUBLIC plcbit fHermesGetTimestamp(plcstring** p_sTimestamp, struct DTStructure* tyDTStructure);
_BUR_PUBLIC plcbit fHermesRmvOneMsgSend(enum eHermesMsgType (*pa_eMsgSend)[51], unsigned long* p_udiIdx);
_BUR_PUBLIC plcbit fHermesAddOneMsgSend(enum eHermesMsgType (*pa_eMsgSend)[51], unsigned long* p_udiIdx, enum eHermesMsgType eMsgType);
_BUR_PUBLIC plcbit fHermesBrdAvltoBF(struct tyHermesBoardForecast** tyHermesBoardForecast, struct tyHermesBoardAvailable** tyHermesBoardAvailable);
_BUR_PUBLIC plcbit fHermesGenerateBrdAvlDat(struct tyHermesBrdAvlDat** p_tyHermesBrdAvlDat, struct tyHermesBAMsgAttribAddr* tyHermesBAMsgAttribAddr);
_BUR_PUBLIC plcbit fHermesAddEditAttribBrdAvlDat(struct tyHermesBrdAvlDat** p_tyHermesBrdAvlDat, plcstring* sAttributeTiltle, plcstring* sAttributeValue);
_BUR_PUBLIC signed short fHermesSrchAttribValueBrdAvlDat(struct tyHermesBrdAvlDat** p_tyHermesBrdAvlDat, plcstring* sAttributeTiltle, plcstring** sAttributeValue);
_BUR_PUBLIC plcbit fHermesDeleteAttribBrdAvlDat(struct tyHermesBrdAvlDat** p_tyHermesBrdAvlDat, plcstring* sAttributeTiltle);
_BUR_PUBLIC plcbit fHermesRmvOneCmdTyp(enum eHermesCommand (*pa_eCmd)[21], unsigned long* p_udiIdx);
_BUR_PUBLIC plcbit fHermesAddOneCmdTyp(enum eHermesCommand (*pa_eCmd)[21], unsigned long* p_udiIdx, enum eHermesCommand eCmd);
_BUR_PUBLIC unsigned char fHermesAddOneCommandGate(plcbit bUsTrueDsFalse, struct tyHermesCommandParam** tyHermesCmdParam, plcstring** sInterface, unsigned long* udiComMode, struct tyHermesCmdProcessList (*tyCommandProcessList)[7], unsigned char* p_udiIdx);
_BUR_PUBLIC plcbit fHermesProcessCmd(struct tyHermesCmdProcessList (*tyCommandProcessList)[7], struct tyHermesCommandPause (*tyHermesCmdPause)[7], unsigned char (*a_usiCommandIdx)[7]);
_BUR_PUBLIC plcbit fHermesBroadCastCommand(struct tyHermesCmdProcessList (*tyCommandProcessList)[7], unsigned char (*a_usiCommandIdx)[7]);
_BUR_PUBLIC plcbit fHermesRcvCmdReqToPause(unsigned char* p_usiCommandIdx, struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandPause** p_tyHermesCmdPause);
_BUR_PUBLIC plcbit fHermesSndCmdReqToPause(struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandPause** p_tyHermesCmdPause);
_BUR_PUBLIC plcbit fHermesRcvCmdReqFromPause(unsigned char* p_usiCommandIdx, struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandPause** p_tyHermesCmdPause);
_BUR_PUBLIC plcbit fHermesSndCmdReqFromPause(struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandPause** p_tyHermesCmdPause);
_BUR_PUBLIC plcbit fHermesRcvCmdReqFromLockCov(unsigned char* p_usiCommandIdx, struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandLockConv** p_tyHermesCmdLockCov);
_BUR_PUBLIC plcbit fHermesSndCmdReqToLockConv(struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandLockConv** p_tyHermesCmdLockCov);
_BUR_PUBLIC plcbit fHermesRcvCmdReqFromOvenInfeed(unsigned char* p_usiCommandIdx, struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandOvenInfeed** p_tyHermesCmdOvenInfeed);
_BUR_PUBLIC plcbit fHermesSndCmdReqToOvenInfeed(struct tyHermesCommandParam** p_tyHermesCmdParam, struct tyHermesCommandOvenInfeed** p_tyHermesCmdOvenInfeed);


#ifdef __cplusplus
};
#endif
#endif /* _NTHERMES_ */

