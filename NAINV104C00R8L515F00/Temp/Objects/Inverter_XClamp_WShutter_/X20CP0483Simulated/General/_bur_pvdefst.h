#ifndef __AS__TYPE_eGeneralAction
#define __AS__TYPE_eGeneralAction
typedef enum eGeneralAction
{	GeneralActIdle = 0,
	GeneralActIPValid = 1,
} eGeneralAction;
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

_BUR_LOCAL eGeneralAction(* p_eAct);
_BUR_LOCAL plcstring(* p_sIPAddr)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eGeneralAction eAct;
_BUR_LOCAL eGeneralAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL signed short a_iIPPart[4];
_BUR_LOCAL plcbit bIPValid;
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
