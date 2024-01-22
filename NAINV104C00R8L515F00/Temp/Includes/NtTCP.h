/* Automation Studio generated header file */
/* Do not edit ! */
/* NtTCP 5.00.2 */

#ifndef _NTTCP_
#define _NTTCP_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtTCP_VERSION
#define _NtTCP_VERSION 5.00.2
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define c_diTCPClntNum 50
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long c_diTCPClntNum;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum eTCPClntConnectStat
{	TCPClntConnectStatOpen,
	TCPClntConnectStatSetup,
	TCPClntConnectStatConnect,
	TCPClntConnectStatClose
} eTCPClntConnectStat;

typedef enum eTCPCreateSvrStat
{	TCPCreateSvrStatOpen,
	TCPCreateSvrStatSetup,
	TCPCreateSvrStatClose
} eTCPCreateSvrStat;

typedef enum eTCPSvrListenStat
{	TCPSvrListenStatListen,
	TCPSvrListenStatClose
} eTCPSvrListenStat;

typedef struct tyTCPOpenPortInternal
{	struct TcpOpen fbTCPOpen;
} tyTCPOpenPortInternal;

typedef struct fbTCPOpenPort
{
	/* VAR_INPUT (analog) */
	plcstring sIP[16];
	unsigned short uiPort;
	/* VAR_OUTPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPOpenPortInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPOpenPort_typ;

typedef struct tyTCPIoCtlSetInternal
{	struct TcpIoctl fbTCPIoCtl;
} tyTCPIoCtlSetInternal;

typedef struct fbTCPSndBffrSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiSndBffrSize;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPSndBffrSet_typ;

typedef struct fbTCPRcvBffrSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiRcvBffrSize;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPRcvBffrSet_typ;

typedef struct fbTCPAliveEnSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiEn;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPAliveEnSet_typ;

typedef struct fbTCPAliveCntSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiCnt;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPAliveCntSet_typ;

typedef struct fbTCPAliveIdleSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiIdleTmInSec;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPAliveIdleSet_typ;

typedef struct fbTCPAliveIntvlSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiIntvlTmInSec;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPAliveIntvlSet_typ;

typedef struct tyTCPKeepAliveSetInternal
{	struct fbTCPAliveEnSet fbTCPAliveEnSet;
	struct fbTCPAliveCntSet fbTCPAliveCntSet;
	struct fbTCPAliveIdleSet fbTCPAliveIdleSet;
	struct fbTCPAliveIntvlSet fbTCPAliveIntvlSet;
	unsigned char usiStep;
} tyTCPKeepAliveSetInternal;

typedef struct fbTCPKeepAliveSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiEn;
	unsigned long udiCnt;
	unsigned long udiIdleTmInSec;
	unsigned long udiIntvlTmInSec;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPKeepAliveSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPKeepAliveSet_typ;

typedef struct fbTCPListenNoWaitingSet
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bEnNoWaiting;
} fbTCPListenNoWaitingSet_typ;

typedef struct tyTCPConnectInternal
{	struct TcpClient fbTCPConnect;
} tyTCPConnectInternal;

typedef struct fbTCPConnect
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	plcstring sSvrIP[16];
	unsigned short uiSvrPort;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPConnectInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPConnect_typ;

typedef struct tyTCPCloseInternal
{	struct TcpClose fbTCPClose;
} tyTCPCloseInternal;

typedef struct fbTCPClose
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPCloseInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPClose_typ;

typedef struct tyTCPClntConnectInternal
{	enum eTCPClntConnectStat eStat;
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

typedef struct tyTCPCreateSvrInternal
{	enum eTCPCreateSvrStat eStat;
	struct fbTCPOpenPort fbTCPOpenPort;
	struct fbTCPSndBffrSet fbTCPSndBffrSet;
	struct fbTCPRcvBffrSet fbTCPRcvBffrSet;
	struct fbTCPKeepAliveSet fbTCPKeepAliveSet;
	struct fbTCPListenNoWaitingSet fbTCPListenNoWaitingSet;
	struct fbTCPClose fbTCPClose;
	unsigned char usiSetupStep;
	unsigned long udiErrStatus;
} tyTCPCreateSvrInternal;

typedef struct tyTCPListenInternal
{	struct TcpServer fbTCPListen;
} tyTCPListenInternal;

typedef struct fbTCPListen
{
	/* VAR_INPUT (analog) */
	unsigned long udiSvrIdent;
	/* VAR_OUTPUT (analog) */
	plcstring sConnectedIP[16];
	unsigned short uiConnectedPort;
	unsigned long udiClntIdent;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPListenInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPListen_typ;

typedef struct tyTCPSvrListenInternal
{	enum eTCPSvrListenStat eStat;
	struct fbTCPListen fbTCPListen;
	struct fbTCPClose fbTCPClose;
	signed long di;
	signed long diFltr;
} tyTCPSvrListenInternal;

typedef struct tyTCPSndInternal
{	struct TcpSend fbTCPSnd;
	unsigned char usiRetryCnt;
} tyTCPSndInternal;

typedef struct tyTCPRcvInternal
{	struct TcpRecv fbTCPRcv;
} tyTCPRcvInternal;

typedef struct fbTCPClntConnect
{
	/* VAR_INPUT (analog) */
	plcstring sClntIP[16];
	plcstring sSvrIP[16];
	unsigned short uiClntPort;
	unsigned short uiSvrPort;
	unsigned long udiSndBffrSize;
	unsigned long udiRcvBffrSize;
	unsigned long udiAliveIdleTmInSec;
	plctime tConnectTO;
	/* VAR_OUTPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	unsigned long udiErrorStatus;
	/* VAR (analog) */
	struct tyTCPClntConnectInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPClntConnect_typ;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbTCPSvrListenFltr
{
	/* VAR_INPUT (analog) */
	unsigned long udiSvrIdent;
	plcstring a_sConfigIP[50][16];
	unsigned short a_uiConfigPort[50];
	/* VAR_OUTPUT (analog) */
	plcstring sConnectedIP[16];
	unsigned short uiConnectedPort;
	unsigned long udiClntIdent;
	signed long diConnectedIdx;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPSvrListenInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bFltrIP;
	plcbit bFltrPort;
	/* VAR_OUTPUT (digital) */
	plcbit bRejected;
} fbTCPSvrListenFltr_typ;
#else
/* Data type fbTCPSvrListenFltr not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct fbTCPCreateSvr
{
	/* VAR_INPUT (analog) */
	plcstring sSvrIP[16];
	unsigned short uiSvrPort;
	unsigned long udiSndBffrSize;
	unsigned long udiRcvBffrSize;
	unsigned long udiAliveIdleTmInSec;
	/* VAR_OUTPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPCreateSvrInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPCreateSvr_typ;

typedef struct fbTCPSnd
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiSndSize;
	unsigned long p_BffrDest;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPSndInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPSnd_typ;

typedef struct fbTCPRcv
{
	/* VAR_INPUT (analog) */
	unsigned long udiTCPIdent;
	unsigned long udiBffrSize;
	unsigned long p_BffrDest;
	/* VAR_OUTPUT (analog) */
	unsigned long udiDataSizeRcv;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPRcvInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPRcv_typ;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbTCPIdentListGet
{
	/* VAR_OUTPUT (analog) */
	unsigned long a_udiIdent[50];
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyTCPIoCtlSetInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbTCPIdentListGet_typ;
#else
/* Data type fbTCPIdentListGet not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbTCPClntConnect(struct fbTCPClntConnect* inst);
_BUR_PUBLIC void fbTCPSvrListenFltr(struct fbTCPSvrListenFltr* inst);
_BUR_PUBLIC void fbTCPCreateSvr(struct fbTCPCreateSvr* inst);
_BUR_PUBLIC void fbTCPSnd(struct fbTCPSnd* inst);
_BUR_PUBLIC void fbTCPRcv(struct fbTCPRcv* inst);
_BUR_PUBLIC void fbTCPConnect(struct fbTCPConnect* inst);
_BUR_PUBLIC void fbTCPListen(struct fbTCPListen* inst);
_BUR_PUBLIC void fbTCPClose(struct fbTCPClose* inst);
_BUR_PUBLIC void fbTCPOpenPort(struct fbTCPOpenPort* inst);
_BUR_PUBLIC void fbTCPListenNoWaitingSet(struct fbTCPListenNoWaitingSet* inst);
_BUR_PUBLIC void fbTCPSndBffrSet(struct fbTCPSndBffrSet* inst);
_BUR_PUBLIC void fbTCPRcvBffrSet(struct fbTCPRcvBffrSet* inst);
_BUR_PUBLIC void fbTCPKeepAliveSet(struct fbTCPKeepAliveSet* inst);
_BUR_PUBLIC void fbTCPAliveEnSet(struct fbTCPAliveEnSet* inst);
_BUR_PUBLIC void fbTCPAliveCntSet(struct fbTCPAliveCntSet* inst);
_BUR_PUBLIC void fbTCPAliveIdleSet(struct fbTCPAliveIdleSet* inst);
_BUR_PUBLIC void fbTCPAliveIntvlSet(struct fbTCPAliveIntvlSet* inst);
_BUR_PUBLIC void fbTCPIdentListGet(struct fbTCPIdentListGet* inst);
#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC signed long fTCPFltr(plcbit bFltrIP, plcbit bFltrPort, plcstring* sIP, unsigned short uiPort, plcstring* a_sConfigIP[50], unsigned short a_uiConfigPort[50]);
#else
_BUR_PUBLIC signed long fTCPFltr(plcbit bFltrIP, plcbit bFltrPort, plcstring* sIP, unsigned short uiPort, void* a_sConfigIP, void* a_uiConfigPort);
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC signed long fTCPFltrIP(plcstring* sIP, plcstring* a_sConfigIP[50]);
#else
_BUR_PUBLIC signed long fTCPFltrIP(plcstring* sIP, void* a_sConfigIP);
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC signed long fTCPFltrPort(unsigned short uiPort, unsigned short a_uiConfigPort[50]);
#else
_BUR_PUBLIC signed long fTCPFltrPort(unsigned short uiPort, void* a_uiConfigPort);
#endif



#ifdef __cplusplus
};
#endif
#endif /* _NTTCP_ */

