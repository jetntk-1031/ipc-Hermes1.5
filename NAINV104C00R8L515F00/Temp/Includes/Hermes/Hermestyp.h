/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700467268_1_
#define _BUR_1700467268_1_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eHermesAction
{	HermesActIdle,
	HermesActBGStartRun,
	HermesActBGStopRun,
	HermesActDeleteOldLog,
	HermesActCreateDir,
	HermesActWriteRetain,
	HermesActWriteRetainLane1,
	HermesActWriteRetainLane2,
	HermesActWriteRetainLane3,
	HermesActWriteRetainLane4,
	HermesActReadRetain,
	HermesActReadRetainLane1,
	HermesActReadRetainLane2,
	HermesActReadRetainLane3,
	HermesActReadRetainLane4,
	HermesActWriteConfig,
	HermesActReadConfig
} eHermesAction;

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

typedef struct tyHermesConfiguration
{	struct tyHermesUSParam a_tyUSParam[4];
	struct tyHermesDSParam a_tyDSParam[4];
	struct tyHermesSvyParam tySvyParam;
} tyHermesConfiguration;

typedef struct tyHermesRmtParam
{	unsigned short uiSvrPort;
} tyHermesRmtParam;

typedef struct tyActionByZone
{	plcstring sBoardId[255];
	signed short iAttributeIdx;
	signed short iAction;
	plcbit bActionCompl;
} tyActionByZone;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes.typ\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700467268_1_ */

