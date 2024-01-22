/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_105_
#define _BUR_1700031253_105_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL struct CfgGetEthConfigMode fbGetETHConfigMode;
_BUR_LOCAL struct CfgSetEthConfigMode fbSetETHConfigMode;
_BUR_LOCAL struct CfgSetSubnetMask fbSetSubnetMask;
_BUR_LOCAL struct CfgSetIPAddr fbSetIPAddr;
_BUR_LOCAL struct CfgGetMacAddr fbGetMacAddr;
_BUR_LOCAL struct CfgGetSubnetMask fbGetSubnetMask;
_BUR_LOCAL struct CfgGetIPAddr fbGetIPAddr;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned char usiNetworkMode;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sDevice[4];
_BUR_LOCAL plcstring sSetSubnetMask[16];
_BUR_LOCAL plcstring sSetIPAddr[16];
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL unsigned long udiConfigMode;
_BUR_LOCAL unsigned char a_usiMacAddr[6];
_BUR_LOCAL plcstring sSubnetMask[16];
_BUR_LOCAL plcstring sIPAddr[16];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eHWInfoAction eStat;
_BUR_LOCAL enum eHWInfoAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/HWInfo/HWInfo/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsARCfg/AsARCfg.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_105_ */

