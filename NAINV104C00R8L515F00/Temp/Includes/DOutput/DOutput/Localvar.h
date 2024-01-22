/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_169_
#define _BUR_1700031253_169_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit bHermesDummyMem;
_BUR_LOCAL enum eDOAction eStatOld;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bPhysicalDO[40];
#else
/* Variable a_bPhysicalDO not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bSafetyTopCoverSWCoil1;
_BUR_LOCAL plcbit bCoverPBLED1;
_BUR_LOCAL plcbit bMachineSafetySigToUS;
_BUR_LOCAL plcbit bMachineSafetySigToDS;
_BUR_LOCAL plcbit bTopCvrUnlckToUS;
_BUR_LOCAL plcbit bTopCvrUnlckToDS;
_BUR_LOCAL plcbit bBypassTopCover1;
_BUR_LOCAL plcbit bUnClamp3Ctrl;
_BUR_LOCAL plcbit bClamp3Ctrl;
_BUR_LOCAL plcbit bUnClamp2Ctrl;
_BUR_LOCAL plcbit bClamp2Ctrl;
_BUR_LOCAL plcbit bUnClamp1Ctrl;
_BUR_LOCAL plcbit bClamp1Ctrl;
_BUR_LOCAL plcbit bOutShutterCloseCtrl;
_BUR_LOCAL plcbit bOutShutterOpenCtrl;
_BUR_LOCAL plcbit bInShutterCloseCtrl;
_BUR_LOCAL plcbit bInShutterOpenCtrl;
_BUR_LOCAL plcbit bMtrPwrRly;
_BUR_LOCAL plcbit bUnclampControl;
_BUR_LOCAL plcbit bClampControl;
_BUR_LOCAL plcbit bInvertBrake;
_BUR_LOCAL plcbit bInvertRemote;
_BUR_LOCAL plcbit bInvertHome;
_BUR_LOCAL plcbit bStprBlkCtrl;
_BUR_LOCAL plcbit bStprUnblkCtrl;
_BUR_LOCAL plcbit bConvMtrCCW;
_BUR_LOCAL plcbit bConvMtrCW;
_BUR_LOCAL plcbit bUSB2;
_BUR_LOCAL plcbit bDBAStat;
_BUR_LOCAL plcbit bDBA;
_BUR_LOCAL plcbit bUSB;
_BUR_LOCAL plcbit bBuz;
_BUR_LOCAL plcbit bTLWhite;
_BUR_LOCAL plcbit bTLBlue;
_BUR_LOCAL plcbit bTLGreen;
_BUR_LOCAL plcbit bTLAmber;
_BUR_LOCAL plcbit bTLRed;
_BUR_LOCAL plcbit bSafetyRlyRst;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL struct tyDigitalOutputSettings tyDOSettings;
_BUR_LOCAL struct tyDigitalOutput tyDOutput;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eDOAction eStat;
_BUR_LOCAL enum eDOAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/DOutput/DOutput.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_169_ */

