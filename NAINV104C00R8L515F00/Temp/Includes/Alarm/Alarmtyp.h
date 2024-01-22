/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_19_
#define _BUR_1700031252_19_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eAlarmAction
{	AlarmActIdle,
	AlarmActCreateDir,
	AlarmActDeleteOldLog,
	AlarmActReadHistory,
	AlarmActWriteHistory,
	AlarmActAppendLog,
	AlarmActAppendLogWriteHistory,
	AlarmActResetHistory,
	AlarmActBGStartLog,
	AlarmActBGStopLog
} eAlarmAction;

typedef struct tyAlarmCurr
{	eAlmSeverity eSeverity;
	plcstring sMsg[301];
	plcbit bAlm;
	plcbit bWarning;
	unsigned long udiErrorCode;
	plcstring sProgNm[16];
	plcstring sDT[81];
	unsigned long udiModErrCode;
} tyAlarmCurr;

typedef struct tyHistory
{	plcstring sDT[81];
	plcstring sProgNm[16];
	unsigned long udiModErrCode;
	unsigned long udiErrorCode;
} tyHistory;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_19_ */

