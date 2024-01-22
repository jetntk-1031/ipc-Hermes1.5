/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_53_
#define _BUR_1700031252_53_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eDOAction
{	DOActIdle,
	DOActRstAll,
	DOActSetBypassCoverSwitch,
	DOActRstBypassCoverSwitch
} eDOAction;

typedef struct tyDigitalOutput
{	plcbit bSafetyRlyRst;
	plcbit bTLRed;
	plcbit bTLAmber;
	plcbit bTLGreen;
	plcbit bTLBlue;
	plcbit bTLWhite;
	plcbit bBuz;
	plcbit bCoatingStprRet;
	plcbit bUSB;
	plcbit bDBA;
	plcbit bDBAStat;
	plcbit bConvMtrCW;
	plcbit bConvMtrCCW;
	plcbit bStprUnblkCtrl;
	plcbit bStprBlkCtrl;
	plcbit bInvertHome;
	plcbit bInvertRemote;
	plcbit bInvertBrake;
	plcbit bMtrPwrRly;
	plcbit bClampControl;
	plcbit bUnclampControl;
	plcbit bInShutterOpenCtrl;
	plcbit bInShutterCloseCtrl;
	plcbit bOutShutterOpenCtrl;
	plcbit bOutShutterCloseCtrl;
	plcbit bClamp1Ctrl;
	plcbit bUnClamp1Ctrl;
	plcbit bClamp2Ctrl;
	plcbit bUnClamp2Ctrl;
	plcbit bClamp3Ctrl;
	plcbit bUnClamp3Ctrl;
	plcbit bTopCvrUnlckToDS;
	plcbit bTopCvrUnlckToUS;
	plcbit bMachineSafetySigToDS;
	plcbit bMachineSafetySigToUS;
	plcbit bCoverPBLED1;
	plcbit bBypassTopCover1;
	plcbit bSafetyTopCoverSWCoil1;
	plcbit bUSB2;
	plcbit bSPARE9;
	plcbit bSPARE10;
	plcbit bSPARE11;
	plcbit bSPARE12;
} tyDigitalOutput;

typedef struct tyDigitalOutputSettings
{	signed long diSafetyRlyRst;
	signed long diTLRed;
	signed long diTLAmber;
	signed long diTLGreen;
	signed long diTLBlue;
	signed long diTLWhite;
	signed long diBuz;
	signed long diCoatingStprRet;
	signed long diUSB;
	signed long diDBA;
	signed long diDBAStat;
	signed long diConvMtrCW;
	signed long diConvMtrCCW;
	signed long diStprUnblkCtrl;
	signed long diStprBlkCtrl;
	signed long diInvertHome;
	signed long diInvertRemote;
	signed long diInvertBrake;
	signed long diMtrPwrRly;
	signed long diClampControl;
	signed long diUnclampControl;
	signed long diInShutterOpenCtrl;
	signed long diInShutterCloseCtrl;
	signed long diOutShutterOpenCtrl;
	signed long diOutShutterCloseCtrl;
	signed long diClamp1Ctrl;
	signed long diUnClamp1Ctrl;
	signed long diClamp2Ctrl;
	signed long diUnClamp2Ctrl;
	signed long diClamp3Ctrl;
	signed long diUnClamp3Ctrl;
	signed long diTopCvrUnlckToDS;
	signed long diTopCvrUnlckToUS;
	signed long diMachineSafetySigToDS;
	signed long diMachineSafetySigToUS;
	signed long diCoverPBLED1;
	signed long diBypassTopCover1;
	signed long diSafetyTopCoverSWCoil1;
	signed long diUSB2;
	signed long diSPARE9;
	signed long diSPARE10;
	signed long diSPARE11;
	signed long diSPARE12;
} tyDigitalOutputSettings;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_53_ */

