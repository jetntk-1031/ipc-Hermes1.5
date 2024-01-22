/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_51_
#define _BUR_1700031252_51_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct tyDigitalInput
{	plcbit bSafetyRlySig;
	plcbit bEStopSig;
	plcbit bCoverSWSig;
	plcbit bUBA;
	plcbit bUBAStat;
	plcbit bDSB;
	plcbit bConvLftSen;
	plcbit bConvRgtSen;
	plcbit bPressureSW;
	plcbit bThermalPrtSig;
	plcbit bCoatingSen;
	plcbit bUSWidthChkSen;
	plcbit bDSWidthChkSen;
	plcbit bInvertHomeSen;
	plcbit bInvertRemoteSen;
	plcbit bInShutterOpenRS;
	plcbit bInShutterCloseRS;
	plcbit bOutShutterOpenRS;
	plcbit bOutShutterCloseRS;
	plcbit bClamp2Sen;
	plcbit bClamp3Sen;
	plcbit bClampRS1;
	plcbit bUnClampRS1;
	plcbit bClampRS2;
	plcbit bUnClampRS2;
	plcbit bClampRS3;
	plcbit bUnClampRS3;
	plcbit bUSWidthChkSen1;
	plcbit bCoverSWSig2;
	plcbit bSafetySigFromUS;
	plcbit bSafetySigFromDS;
	plcbit bUnlockCoverSigFromUS;
	plcbit bUnlockCoverSigFromDS;
	plcbit bCoverUnlockPB1;
	plcbit bUBA2;
	plcbit bUBAStat2;
	plcbit bSPARE9;
	plcbit bSPARE10;
	plcbit bSPARE11;
	plcbit bSPARE12;
} tyDigitalInput;

typedef struct tyDigitalInputSettings
{	signed long diSafetyRlySig;
	signed long diEStopSig;
	signed long diCoverSWSig;
	signed long diUBA;
	signed long diUBAStat;
	signed long diDSB;
	signed long diConvLftSen;
	signed long diConvRgtSen;
	signed long diPressureSW;
	signed long diCoatingSen;
	signed long diThermalPrtSig;
	signed long diUSWidthChkSen;
	signed long diDSWidthChkSen;
	signed long diInvertHomeSen;
	signed long diInvertRemoteSen;
	signed long diInShutterOpenRS;
	signed long diInShutterCloseRS;
	signed long diOutShutterOpenRS;
	signed long diOutShutterCloseRS;
	signed long diClamp2Sen;
	signed long diClamp3Sen;
	signed long diClampRS1;
	signed long diUnClampRS1;
	signed long diClampRS2;
	signed long diUnClampRS2;
	signed long diClampRS3;
	signed long diUnClampRS3;
	signed long diUSWidthChkSen1;
	signed long diCoverSWSig2;
	signed long diSafetySigFromUS;
	signed long diSafetySigFromDS;
	signed long diUnlockCoverSigFromUS;
	signed long diUnlockCoverSigFromDS;
	signed long diCoverUnlockPB1;
	signed long diUBA2;
	signed long diUBAStat2;
	signed long diSPARE9;
	signed long diSPARE10;
	signed long diSPARE11;
	signed long diSPARE12;
} tyDigitalInputSettings;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_51_ */

