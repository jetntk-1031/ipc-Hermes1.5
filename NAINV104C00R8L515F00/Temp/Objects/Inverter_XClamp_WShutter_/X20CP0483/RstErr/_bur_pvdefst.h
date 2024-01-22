#ifndef __AS__TYPE_eRstErrAction
#define __AS__TYPE_eRstErrAction
typedef enum eRstErrAction
{	RstErrActIdle = 0,
	RstErrActRun = 1,
	RstErrActSetSafetyRlyRst = 2,
	RstErrActRstSafetyRlyRst = 3,
} eRstErrAction;
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
_BUR_LOCAL eRstErrAction(* p_eAct);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL plcbit(* p_bSafetyRlySig);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eRstErrAction eAct;
_BUR_LOCAL eRstErrAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bSafetyRlyRst;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bSafetyRlySig;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL struct TON fbSafetyRlyRstTm;
