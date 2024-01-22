#ifndef __AS__TYPE_eHWInfoAction
#define __AS__TYPE_eHWInfoAction
typedef enum eHWInfoAction
{	HWInfoActIdle = 0,
	HWInfoActGetIPAddr = 1,
	HWInfoActGetSubnetMask = 2,
	HWInfoActGetMacAddr = 3,
	HWInfoActSetIPAddr = 4,
	HWInfoActSetSubnetMask = 5,
	HWInfoActGetEthConfigMode = 6,
	HWInfoActSetEthConfigMode = 7,
} eHWInfoAction;
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

struct CfgGetIPAddr
{	unsigned long pDevice;
	unsigned long pIPAddr;
	unsigned char Len;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgGetIPAddr(struct CfgGetIPAddr* inst);
struct CfgSetIPAddr
{	unsigned long pDevice;
	unsigned long pIPAddr;
	unsigned long Option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgSetIPAddr(struct CfgSetIPAddr* inst);
struct CfgGetSubnetMask
{	unsigned long pDevice;
	unsigned long pSubnetMask;
	unsigned char Len;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgGetSubnetMask(struct CfgGetSubnetMask* inst);
struct CfgSetSubnetMask
{	unsigned long pDevice;
	unsigned long pSubnetMask;
	unsigned long Option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgSetSubnetMask(struct CfgSetSubnetMask* inst);
struct CfgGetEthConfigMode
{	unsigned long pDevice;
	unsigned short status;
	unsigned long ConfigMode;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgGetEthConfigMode(struct CfgGetEthConfigMode* inst);
struct CfgSetEthConfigMode
{	unsigned long pDevice;
	unsigned long ConfigMode;
	unsigned long Option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgSetEthConfigMode(struct CfgSetEthConfigMode* inst);
struct CfgGetMacAddr
{	unsigned long pDevice;
	unsigned long pMacAddr;
	unsigned char Len;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void CfgGetMacAddr(struct CfgGetMacAddr* inst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eHWInfoAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcstring(* p_sSetIPAddr)[16];
_BUR_LOCAL plcstring(* p_sSetSubnetMask)[16];
_BUR_LOCAL plcstring(* p_sDevice)[4];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL unsigned char(* p_usiNetworkMod);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eHWInfoAction eAct;
_BUR_LOCAL eHWInfoAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL plcstring sSubnetMask[16];
_BUR_LOCAL unsigned char a_usiMacAddr[6];
_BUR_LOCAL unsigned long udiConfigMode;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcstring sSetIPAddr[16];
_BUR_LOCAL plcstring sSetSubnetMask[16];
_BUR_LOCAL plcstring sDevice[4];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL unsigned char usiNetworkMode;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL struct CfgGetIPAddr fbGetIPAddr;
_BUR_LOCAL struct CfgGetSubnetMask fbGetSubnetMask;
_BUR_LOCAL struct CfgGetMacAddr fbGetMacAddr;
_BUR_LOCAL struct CfgSetIPAddr fbSetIPAddr;
_BUR_LOCAL struct CfgSetSubnetMask fbSetSubnetMask;
_BUR_LOCAL struct CfgSetEthConfigMode fbSetETHConfigMode;
_BUR_LOCAL struct CfgGetEthConfigMode fbGetETHConfigMode;
_BUR_LOCAL unsigned long udiModuleNum;
