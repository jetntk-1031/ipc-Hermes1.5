/* Automation Studio generated header file */
/* Do not edit ! */
/* NtOPCUA 5.00.0 */

#ifndef _NTOPCUA_
#define _NTOPCUA_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtOPCUA_VERSION
#define _NtOPCUA_VERSION 5.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG4
		#include "NtGeneral.h"
#endif
#ifdef _SG3
		#include "NtGeneral.h"
#endif
#ifdef _SGC
		#include "NtGeneral.h"
#endif

/* Datatypes and datatypes of function blocks */
typedef struct tyOPCUAInternal
{	struct UA_Connect fbConnect;
	struct UA_Disconnect fbDisconnect;
	struct UA_NodeGetHandleList fbGetNodeHdlList;
	struct UA_NodeReleaseHandleList fbRlsNodeHdlList;
	struct UA_ReadList fbReadList;
	struct UA_WriteList fbWriteList;
	struct UA_ConnectionGetStatus fbGetConnectionStatus;
	unsigned short ui;
} tyOPCUAInternal;

typedef struct tyOPCUAParam
{	plcstring sIPAddr[16];
	plcstring sPort[11];
} tyOPCUAParam;

typedef struct fbOPCUAConnect
{
	/* VAR_INPUT (analog) */
	struct tyOPCUAParam tyOPCUAParam;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	plcdword dwConnectionHdl;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUAConnect_typ;

typedef struct fbOPCUADisconnect
{
	/* VAR_INPUT (analog) */
	plcdword dwConnectionHdl;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUADisconnect_typ;

typedef struct fbOPCUAGetConnectionStatus
{
	/* VAR_INPUT (analog) */
	plcdword dwConnectionHdl;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	UAConnectionStatus eConnectionStat;
	UAServerState eServerStat;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUAGetConnectionStatus_typ;

typedef struct fbOPCUAGetNodeHdlList
{
	/* VAR_INPUT (analog) */
	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcstring a_sServerTagNm[64][256];
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	plcdword a_dwNodeHdlList[64];
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUAGetNodeHdlList_typ;

typedef struct fbOPCUARlsNodeHdlList
{
	/* VAR_INPUT (analog) */
	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcdword a_dwNodeHdlList[64];
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUARlsNodeHdlList_typ;

typedef struct fbOPCUAReadList
{
	/* VAR_INPUT (analog) */
	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcdword a_dwNodeHdlList[64];
	plctime tTimeOut;
	plcstring a_sClientTagNm[64][256];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUAReadList_typ;

typedef struct fbOPCUAWriteList
{
	/* VAR_INPUT (analog) */
	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcdword a_dwNodeHdlList[64];
	plctime tTimeOut;
	plcstring a_sClientTagNm[64][256];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyOPCUAInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbOPCUAWriteList_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbOPCUAConnect(struct fbOPCUAConnect* inst);
_BUR_PUBLIC void fbOPCUADisconnect(struct fbOPCUADisconnect* inst);
_BUR_PUBLIC void fbOPCUAGetConnectionStatus(struct fbOPCUAGetConnectionStatus* inst);
_BUR_PUBLIC void fbOPCUAGetNodeHdlList(struct fbOPCUAGetNodeHdlList* inst);
_BUR_PUBLIC void fbOPCUARlsNodeHdlList(struct fbOPCUARlsNodeHdlList* inst);
_BUR_PUBLIC void fbOPCUAReadList(struct fbOPCUAReadList* inst);
_BUR_PUBLIC void fbOPCUAWriteList(struct fbOPCUAWriteList* inst);


__asm__(".section \".plc\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Libraries/AsOpcUac/AsOpcUac.var\\\" scope \\\"global\\\"\\n\"");

__asm__(".previous");

#ifdef __cplusplus
};
#endif
#endif /* _NTOPCUA_ */

