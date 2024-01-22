#ifndef __AS__TYPE_eOperationsAction
#define __AS__TYPE_eOperationsAction
typedef enum eOperationsAction
{	OperationsActIdle = 0,
	OperationsActStart = 1,
	OperationsActStop = 2,
	OperationsActStep = 3,
	OperationsActError = 4,
} eOperationsAction;
#endif

#ifndef __AS__TYPE_eOperationsStatus
#define __AS__TYPE_eOperationsStatus
typedef enum eOperationsStatus
{	OperationsStatusRun = 0,
	OperationsStatusStop = 1,
	OperationsStatusCycleStopping = 2,
	OperationsStatusStep = 3,
} eOperationsStatus;
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

_BUR_LOCAL plcbit(* p_bOpsInvertPaused);
_BUR_LOCAL eOperationsAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPaused);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eOperationsAction eAct;
_BUR_LOCAL eOperationsAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL eOperationsStatus eOpsStatus;
_BUR_LOCAL plcbit bStatusRun;
_BUR_LOCAL plcbit bStatusStop;
_BUR_LOCAL plcbit bStatusCycleStop;
_BUR_LOCAL plcbit bStatusStep;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPaused;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL eOperationsAction eStatOld;
_BUR_LOCAL unsigned char usiStep;
