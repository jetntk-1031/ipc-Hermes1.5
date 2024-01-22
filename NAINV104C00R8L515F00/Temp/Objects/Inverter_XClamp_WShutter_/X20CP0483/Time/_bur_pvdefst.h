#ifndef __AS__TYPE_eTimeAction
#define __AS__TYPE_eTimeAction
typedef enum eTimeAction
{	TimeActIdle = 0,
	TimeActGetTime = 1,
	TimeActGetTimeZone = 2,
	TimeActSetTime = 3,
	TimeActSetTimeZone = 4,
} eTimeAction;
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
struct DTSetTime
{	plcdt DT1;
	unsigned short status;
	plcbit enable;
};
_BUR_PUBLIC void DTSetTime(struct DTSetTime* inst);
struct DTGetTime
{	unsigned short status;
	plcdt DT1;
	plcbit enable;
};
_BUR_PUBLIC void DTGetTime(struct DTGetTime* inst);
struct DTStructureGetTime
{	unsigned long pDTStructure;
	unsigned short status;
	plcbit enable;
};
_BUR_PUBLIC void DTStructureGetTime(struct DTStructureGetTime* inst);
struct CfgGetTimeZone
{	unsigned short timezoneID;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgGetTimeZone(struct CfgGetTimeZone* inst);
struct CfgSetTimeZone
{	unsigned short timezoneID;
	unsigned long option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgSetTimeZone(struct CfgSetTimeZone* inst);
_BUR_LOCAL eTimeAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcdt(* p_dtSetDT);
_BUR_LOCAL unsigned short(* p_uiSetTimeZone);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eTimeAction eAct;
_BUR_LOCAL eTimeAction eStat;
_BUR_LOCAL eFBStatus eMainStatus;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL eFBStatus eStatus1;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL unsigned short uiCurrTimeZone;
_BUR_LOCAL DTStructure tyCurrDTStruct;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcdt dtSetDT;
_BUR_LOCAL unsigned short uiSetTimeZone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL struct TON fbDlyTm;
_BUR_LOCAL struct DTGetTime fbGetTime;
_BUR_LOCAL struct DTGetTime fbGetTime1;
_BUR_LOCAL struct DTSetTime fbSetTime;
_BUR_LOCAL struct DTStructureGetTime fbGetTimeDT;
_BUR_LOCAL struct DTStructureGetTime fbGetTimeDT1;
_BUR_LOCAL struct CfgGetTimeZone fbGetTimeZone;
_BUR_LOCAL struct CfgSetTimeZone fbSetTimeZone;
_BUR_LOCAL unsigned long udiModuleNum;
