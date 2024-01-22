/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_168_
#define _BUR_1700031253_168_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct tyHermesCommandPause *p_tyHermesDSCmdPause;
_BUR_LOCAL plcbit *p_bHermesDSCmdFeaturePause;
_BUR_LOCAL struct tyHermesCommandPause *p_tyHermesUSCmdPause;
_BUR_LOCAL plcbit *p_bHermesUSCmdFeaturePause;
_BUR_LOCAL plcbit *p_bHermesCmdInitialCompl;
_BUR_LOCAL plcbit *p_bCoverPBLED1;
_BUR_LOCAL plcbit *p_bSafetyTopCoverSWCoil1;
_BUR_LOCAL plcbit *p_bMachineSafetySigToUS;
_BUR_LOCAL plcbit *p_bMachineSafetySigToDS;
_BUR_LOCAL plcbit *p_bTopCvrUnlckToUS;
_BUR_LOCAL plcbit *p_bTopCvrUnlckToDS;
_BUR_LOCAL plcbit *p_bBypsCoverSW1;
_BUR_LOCAL struct tyDigitalInput *p_tyDI;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepInitAwayStpr;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepInitTwdStpr;
_BUR_LOCAL enum eFBStatus *p_eConvStatus;
_BUR_LOCAL unsigned char *p_usiLinkProdRcpCurrRcpMcMod;
_BUR_LOCAL plcbit *p_bLinkUIInvertDCCtrl;
_BUR_LOCAL plcbit *p_bLinkUIConvDCCtrl;
_BUR_LOCAL enum eInvertPos *p_eLinkOpsInvertInvertCurrPos;
_BUR_LOCAL plcbit *p_bLinkConvMtrDirOrRToL;
_BUR_LOCAL plcbit *p_bLinkConvMtrSigOnOrLToR;
_BUR_LOCAL plcbit *p_bUnClamp3Ctrl;
_BUR_LOCAL plcbit *p_bClamp3Ctrl;
_BUR_LOCAL plcbit *p_bUnClamp2Ctrl;
_BUR_LOCAL plcbit *p_bClamp2Ctrl;
_BUR_LOCAL plcbit *p_bUnClamp1Ctrl;
_BUR_LOCAL plcbit *p_bClamp1Ctrl;
_BUR_LOCAL plcbit *p_bOutShutterCloseCtrl;
_BUR_LOCAL plcbit *p_bOutShutterOpenCtrl;
_BUR_LOCAL plcbit *p_bInShutterCloseCtrl;
_BUR_LOCAL plcbit *p_bInShutterOpenCtrl;
_BUR_LOCAL plcbit *p_bMtrPwrRly;
_BUR_LOCAL plcbit *p_bUnclampControl;
_BUR_LOCAL plcbit *p_bClampControl;
_BUR_LOCAL plcbit *p_bInvertRemote;
_BUR_LOCAL plcbit *p_bInvertHome;
_BUR_LOCAL plcbit *p_bInvertBrake;
_BUR_LOCAL plcbit *p_bStprBlkCtrl;
_BUR_LOCAL plcbit *p_bStprUnblkCtrl;
_BUR_LOCAL plcbit *p_bConvMtrCCW;
_BUR_LOCAL plcbit *p_bConvMtrCW;
_BUR_LOCAL plcbit *p_bUSB2;
_BUR_LOCAL plcbit *p_bDBAStat;
_BUR_LOCAL plcbit *p_bDBA;
_BUR_LOCAL plcbit *p_bUSB;
_BUR_LOCAL plcbit *p_bBuz;
_BUR_LOCAL plcbit *p_bTLBlue;
_BUR_LOCAL plcbit *p_bTLWhite;
_BUR_LOCAL plcbit *p_bTLGreen;
_BUR_LOCAL plcbit *p_bTLAmber;
_BUR_LOCAL plcbit *p_bTLRed;
_BUR_LOCAL plcbit *p_bSafetyRlyRst;
_BUR_LOCAL plcbit *p_bManual;
_BUR_LOCAL struct tyDigitalOutputSettings *p_tyDOSettings;
_BUR_LOCAL unsigned long *p_udiMax;
_BUR_LOCAL enum eDOAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_168_ */

