/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528767_2_
#define _BUR_1700528767_2_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eLCSAction
{	LCSActIdle = 0,
	LCSActAddProd = 1,
	LCSActAddMultiProd = 2,
	LCSActEditProd = 3,
	LCSActEditMultiProd = 4,
	LCSActOverWriteProd = 5,
	LCSActOverWriteMultiProd = 6,
	LCSActDelProd = 7,
	LCSActDelMultiProd = 8,
	LCSActRunProd = 9,
	LCSActUploadProd = 10,
	LCSActUploadMultiProd = 11
} eLCSAction;

typedef enum eLCSOpsStatus
{	LCSOpsStatusAuto,
	LCSOpsStatusManual,
	LCSOpsStatusStop,
	LCSOpsStatusError,
	LCSOpsStatusWarning
} eLCSOpsStatus;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyLCSTagNm
{	enum eLCSAction eAct;
	enum eLCSAction eStat;
	unsigned long udiStatus;
	plcstring sErrMsg[201];
	signed short iIdxAct;
	signed short iIdxStat;
	struct tyProdRcpParam tyProdRcpInfo;
	struct tyProdRcpParam tyCurrProdRcpParam;
	plcstring sCurrRcpNm[31];
	float rCurrWidth;
	enum eLCSOpsStatus eCurrOpsStatus;
	unsigned char usiBrdStatus;
	unsigned char usiMode;
	plcstring sLastModified[81];
	plcbit bMngRcpEn;
	plcbit bLiveData;
	plcbit bLFEn;
	plcstring sMcAlmMsg[200][256];
	plcbit bSectionLeaderEn;
} tyLCSTagNm;
#else
/* Data type tyLCSTagNm not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS.typ\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528767_2_ */

