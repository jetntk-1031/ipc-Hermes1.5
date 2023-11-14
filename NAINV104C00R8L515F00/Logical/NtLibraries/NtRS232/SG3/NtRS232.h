/* Automation Studio generated header file */
/* Do not edit ! */
/* NtRS232 5.00.2 */

#ifndef _NTRS232_
#define _NTRS232_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtRS232_VERSION
#define _NtRS232_VERSION 5.00.2
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
typedef enum eRS232BaudRate
{	RS232BaudRate2400,
	RS232BaudRate4800,
	RS232BaudRate9600,
	RS232BaudRate19200,
	RS232BaudRate38400,
	RS232BaudRate57600,
	RS232BaudRate115200
} eRS232BaudRate;

typedef enum eRS232Parity
{	RS232ParityNone,
	RS232ParityEven,
	RS232ParityOdd
} eRS232Parity;

typedef enum eRS232DataBits
{	RS232DataBits7,
	RS232DataBits8
} eRS232DataBits;

typedef enum eRS232StopBits
{	RS232StopBits1,
	RS232StopBits2
} eRS232StopBits;

typedef struct tyFrmInternal
{	plcstring sMode[81];
	struct FRM_xopen fbFrmXopen;
	struct FRM_read fbFrmRead;
	struct FRM_write fbFrmWrite;
	struct FRM_rbuf fbFrmRelBufRead;
	struct FRM_close fbFrmClose;
} tyFrmInternal;

typedef struct tyFrmParam
{	plcstring sDevice[31];
	enum eRS232BaudRate eBaudRate;
	enum eRS232Parity eParity;
	enum eRS232DataBits eDataBits;
	enum eRS232StopBits eStopBits;
} tyFrmParam;

typedef struct fbFrmOpen
{
	/* VAR_INPUT (analog) */
	struct tyFrmParam tyCommParam;
	struct XOPENCONFIG tyXOpenConfig;
	/* VAR_OUTPUT (analog) */
	unsigned long udiIdent;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFrmOpen_typ;

typedef struct fbFrmRead
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	/* VAR_OUTPUT (analog) */
	unsigned long p_Data;
	unsigned short uiLen;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bReadValid;
} fbFrmRead_typ;

typedef struct fbFrmWrite
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	unsigned long p_Data;
	unsigned short uiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFrmWrite_typ;

typedef struct fbFrmRlsBufRead
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	unsigned long p_Data;
	unsigned short uiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFrmRlsBufRead_typ;

typedef struct fbFrmClose
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFrmClose_typ;

typedef struct tyFrmInternal1
{	struct fbFrmOpen fbFrmOpen;
	struct fbFrmRead fbFrmRead;
	struct fbFrmWrite fbFrmWrite;
	struct fbFrmRlsBufRead fbFrmRlsBufRead;
	struct fbFrmClose fbFrmClose;
	unsigned char usiStep;
	unsigned long udiIdent;
	unsigned long p_DataRead;
} tyFrmInternal1;

typedef struct tyFltInternal
{	struct fltRead fbFltRead;
	struct fltWrite fbFltWrite;
} tyFltInternal;

typedef struct fbFltRead
{
	/* VAR_INPUT (analog) */
	unsigned long udiCfg;
	unsigned long p_Data;
	unsigned short uiMaxLen;
	unsigned long p_RxBytes;
	unsigned char usiRxBytesLen;
	/* VAR_OUTPUT (analog) */
	unsigned short uiPendBytes;
	unsigned char usiReadSequ;
	unsigned short uiLen;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFltInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bReadValid;
} fbFltRead_typ;

typedef struct fbFltWrite
{
	/* VAR_INPUT (analog) */
	unsigned long p_Data;
	unsigned short uiLen;
	unsigned char usiReadSequ;
	unsigned long p_TxBytes;
	unsigned char usiTxBytesLen;
	unsigned long p_Sequ;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFltInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFltWrite_typ;

typedef struct tyFltInternal1
{	struct fbFltRead fbFltRead;
	struct fbFltWrite fbFltWrite;
} tyFltInternal1;

typedef struct fbFrmFullReadUntilValid
{
	/* VAR_INPUT (analog) */
	struct tyFrmParam tyCommParam;
	struct XOPENCONFIG tyXOpenConfig;
	unsigned long p_Data;
	unsigned short uiMaxLen;
	/* VAR_OUTPUT (analog) */
	unsigned short uiLen;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFrmFullReadUntilValid_typ;

typedef struct fbFrmFullRead
{
	/* VAR_INPUT (analog) */
	struct tyFrmParam tyCommParam;
	struct XOPENCONFIG tyXOpenConfig;
	unsigned long p_Data;
	unsigned short uiMaxLen;
	/* VAR_OUTPUT (analog) */
	unsigned short uiLen;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bReadValid;
} fbFrmFullRead_typ;

typedef struct fbFrmFullWrite
{
	/* VAR_INPUT (analog) */
	struct tyFrmParam tyCommParam;
	struct XOPENCONFIG tyXOpenConfig;
	unsigned long p_Data;
	unsigned short uiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFrmInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFrmFullWrite_typ;

typedef struct fbFltFullReadUntilValid
{
	/* VAR_INPUT (analog) */
	unsigned long p_Data;
	unsigned short uiMaxLen;
	unsigned char (*pa_usiTxBytes)[8];
	unsigned char (*pa_usiRxBytes)[8];
	/* VAR_OUTPUT (analog) */
	unsigned short uiLen;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFltInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFltFullReadUntilValid_typ;

typedef struct fbFltFullRead
{
	/* VAR_INPUT (analog) */
	unsigned long p_Data;
	unsigned short uiMaxLen;
	unsigned char (*pa_usiTxBytes)[8];
	unsigned char (*pa_usiRxBytes)[8];
	/* VAR_OUTPUT (analog) */
	unsigned short uiLen;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFltInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bReadValid;
} fbFltFullRead_typ;

typedef struct fbFltFullWrite
{
	/* VAR_INPUT (analog) */
	unsigned long p_Data;
	unsigned short uiLen;
	unsigned char (*pa_usiTxBytes)[8];
	unsigned char (*pa_usiRxBytes)[8];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFltInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFltFullWrite_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbFrmFullReadUntilValid(struct fbFrmFullReadUntilValid* inst);
_BUR_PUBLIC void fbFrmFullRead(struct fbFrmFullRead* inst);
_BUR_PUBLIC void fbFrmFullWrite(struct fbFrmFullWrite* inst);
_BUR_PUBLIC void fbFrmOpen(struct fbFrmOpen* inst);
_BUR_PUBLIC void fbFrmWrite(struct fbFrmWrite* inst);
_BUR_PUBLIC void fbFrmRead(struct fbFrmRead* inst);
_BUR_PUBLIC void fbFrmRlsBufRead(struct fbFrmRlsBufRead* inst);
_BUR_PUBLIC void fbFrmClose(struct fbFrmClose* inst);
_BUR_PUBLIC void fbFltFullReadUntilValid(struct fbFltFullReadUntilValid* inst);
_BUR_PUBLIC void fbFltFullRead(struct fbFltFullRead* inst);
_BUR_PUBLIC void fbFltFullWrite(struct fbFltFullWrite* inst);
_BUR_PUBLIC void fbFltWrite(struct fbFltWrite* inst);
_BUR_PUBLIC void fbFltRead(struct fbFltRead* inst);


#ifdef __cplusplus
};
#endif
#endif /* _NTRS232_ */

