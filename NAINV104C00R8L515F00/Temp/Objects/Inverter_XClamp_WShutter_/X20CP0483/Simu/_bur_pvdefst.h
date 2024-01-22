#ifndef __AS__TYPE_eSimulationsAction
#define __AS__TYPE_eSimulationsAction
typedef enum eSimulationsAction
{	SimulationsActIdle = 0,
	SimulationsActStart = 1,
	SimulationsActStop = 2,
	SimulationsActStep = 3,
	SimulationsActError = 4,
} eSimulationsAction;
#endif

#ifndef __AS__TYPE_eSimulationsStatus
#define __AS__TYPE_eSimulationsStatus
typedef enum eSimulationsStatus
{	SimulationsStatusRun = 0,
	SimulationsStatusStop = 1,
	SimulationsStatusCycleStopping = 2,
	SimulationsStatusStep = 3,
} eSimulationsStatus;
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

_BUR_LOCAL eSimulationsAction(* p_eUISimuAct);
_BUR_LOCAL plcbit(* p_bSimuInvPaused);
_BUR_LOCAL eSimulationsAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPaused);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eSimulationsAction eAct;
_BUR_LOCAL eSimulationsAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[101];
_BUR_LOCAL plcstring a_sStatText[51][101];
_BUR_LOCAL eSimulationsStatus eSimuStatus;
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
_BUR_LOCAL eSimulationsAction eStatOld;
_BUR_LOCAL unsigned char usiStep;
