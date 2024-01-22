/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_210_
#define _BUR_1700031253_210_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bHermesEntToReversePosition;
_BUR_LOCAL plcbit *p_bUSReversal;
_BUR_LOCAL signed short *p_iHermesAction;
_BUR_LOCAL plcbit *p_bLinkDIUnlockCoverSigFromUS;
_BUR_LOCAL plcbit *p_bLinkDISafetySigFromUS;
_BUR_LOCAL plcbit *p_bLinkDISafetySigFromDS;
_BUR_LOCAL plcbit *p_bLinkDIUnlockCoverSigFromDS;
_BUR_LOCAL plcbit *p_bLinkUIBypsCoverSWPress1;
_BUR_LOCAL plcbit *p_bLinkDICoverSwitchSig2;
_BUR_LOCAL plcbit *p_bUnlockCovPrep;
_BUR_LOCAL plcbit *p_bMachineSafetyPrep;
_BUR_LOCAL plcbit *p_bOutletShutterDis;
_BUR_LOCAL plcbit *p_bOutletShutterPrep;
_BUR_LOCAL plcbit *p_bInletShutterDis;
_BUR_LOCAL plcbit *p_bInletShutterPrep;
_BUR_LOCAL enum eClampType *p_eClampOption;
_BUR_LOCAL plcbit *p_bClampDis;
_BUR_LOCAL plcbit *p_bClampPrep;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcbit *p_bAWWidthPosDiff;
_BUR_LOCAL enum eFBStatus *p_eAWStatus;
_BUR_LOCAL enum eAWAction *p_eAWStat;
_BUR_LOCAL enum eFBStatus *p_eInvertStatus;
_BUR_LOCAL enum eMotorBrkAction *p_eInvertStat;
_BUR_LOCAL plcbit *p_bUnClampRS3;
_BUR_LOCAL plcbit *p_bClampRS3;
_BUR_LOCAL enum eFBStatus *p_eClamp3Status;
_BUR_LOCAL enum ePneuAction *p_eClamp3Stat;
_BUR_LOCAL plcbit *p_bUnClampRS2;
_BUR_LOCAL plcbit *p_bClampRS2;
_BUR_LOCAL enum eFBStatus *p_eClamp2Status;
_BUR_LOCAL enum ePneuAction *p_eClamp2Stat;
_BUR_LOCAL plcbit *p_bUnClampRS1;
_BUR_LOCAL plcbit *p_bClampRS1;
_BUR_LOCAL enum eFBStatus *p_eClamp1Status;
_BUR_LOCAL enum ePneuAction *p_eClamp1Stat;
_BUR_LOCAL plcbit *p_bOutletShutterClose;
_BUR_LOCAL plcbit *p_bOutletShutterOpen;
_BUR_LOCAL enum eFBStatus *p_eOutletShutterStatus;
_BUR_LOCAL enum ePneuAction *p_eOutletShutterStat;
_BUR_LOCAL plcbit *p_bInletShutterClose;
_BUR_LOCAL plcbit *p_bInletShutterOpen;
_BUR_LOCAL enum eFBStatus *p_eInletShutterStatus;
_BUR_LOCAL enum ePneuAction *p_eInletShutterStat;
_BUR_LOCAL enum eFBStatus *p_eClampStatus;
_BUR_LOCAL enum ePneuAction *p_eClampStat;
_BUR_LOCAL plcbit *p_bStopperRetracted;
_BUR_LOCAL plcbit *p_bStopperExtended;
_BUR_LOCAL enum eFBStatus *p_eStopperStatus;
_BUR_LOCAL enum ePneuAction *p_eStopperStat;
_BUR_LOCAL plcbit *p_bConvHvBrd;
_BUR_LOCAL enum eFBStatus *p_eConvStatus;
_BUR_LOCAL enum eConvAction *p_eConvStat;
_BUR_LOCAL plcbit *p_bDSHermesStopTransport;
_BUR_LOCAL plcbit *p_bDSHermesTransporting;
_BUR_LOCAL plcbit *p_bUSHermesUSGdRdy;
_BUR_LOCAL plcbit *p_bUSHermesUSRdy;
_BUR_LOCAL plcbit *p_bUSHermesStopTransport;
_BUR_LOCAL plcbit *p_bUSHermesTransporting;
_BUR_LOCAL plcbit *p_bDBAOnRgtSen;
_BUR_LOCAL plcbit *p_bDSSMEMATimer;
_BUR_LOCAL plcbit *p_bDSSMEMAConvStop;
_BUR_LOCAL plcbit *p_bDSSMEMAConvStart;
_BUR_LOCAL enum eFBStatus *p_eDSSMEMAStatus;
_BUR_LOCAL enum eSMEMAAction *p_eDSSMEMAStat;
_BUR_LOCAL plcbit *p_bUSSMEMA2USGdBrdRdy;
_BUR_LOCAL plcbit *p_bUSSMEMA2USRdy;
_BUR_LOCAL plcbit *p_bUSSMEMA2ConvStop;
_BUR_LOCAL plcbit *p_bUSSMEMA2ConvStart;
_BUR_LOCAL plcbit *p_bUSSMEMA2Transporting;
_BUR_LOCAL enum eFBStatus *p_eUSSMEMA2Status;
_BUR_LOCAL enum eSMEMAAction *p_eUSSMEMA2Stat;
_BUR_LOCAL plcbit *p_bUSSMEMAUSGdBrdRdy;
_BUR_LOCAL plcbit *p_bUSSMEMAUSRdy;
_BUR_LOCAL plcbit *p_bUSSMEMAConvStop;
_BUR_LOCAL plcbit *p_bUSSMEMAConvStart;
_BUR_LOCAL plcbit *p_bUSSMEMATransporting;
_BUR_LOCAL enum eFBStatus *p_eUSSMEMAStatus;
_BUR_LOCAL enum eSMEMAAction *p_eUSSMEMAStat;
_BUR_LOCAL plcbit *p_bClamp3Sen;
_BUR_LOCAL plcbit *p_bClamp2Sen;
_BUR_LOCAL plcbit *p_bMidSen;
_BUR_LOCAL plcbit *p_bRightSen;
_BUR_LOCAL plcbit *p_bLeftSen;
_BUR_LOCAL plcbit *p_bRtrnDSAllow;
_BUR_LOCAL plcbit *p_bRtrnUSAllow;
_BUR_LOCAL enum eMcSetCommMod *p_eUSComm2Mod;
_BUR_LOCAL plcbit *p_bDSAllow;
_BUR_LOCAL plcbit *p_bUSAllow;
_BUR_LOCAL plcbit *p_bGoToStandby;
_BUR_LOCAL enum eMcSetCommMod *p_eDSCommMod;
_BUR_LOCAL enum eMcSetCommMod *p_eUSCommMod;
_BUR_LOCAL enum eConvDir *p_eConvDirection;
_BUR_LOCAL plcbit *p_bInsertGdBrd;
_BUR_LOCAL plcbit *p_bInitGdBrd;
_BUR_LOCAL plcbit *p_bStep;
_BUR_LOCAL plcbit *p_bStop;
_BUR_LOCAL plcbit *p_bRun;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL unsigned long *p_udiRstErr;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_210_ */

