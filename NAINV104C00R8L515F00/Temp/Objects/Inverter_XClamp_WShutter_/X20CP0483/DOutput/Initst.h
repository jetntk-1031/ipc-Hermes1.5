#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_eDOAction
#define __AS__TYPE_eDOAction
typedef enum eDOAction
{	DOActIdle = 0,
	DOActRstAll = 1,
	DOActSetBypassCoverSwitch = 2,
	DOActRstBypassCoverSwitch = 3,
} eDOAction;
#endif

#ifndef __AS__TYPE_tyDigitalOutput
#define __AS__TYPE_tyDigitalOutput
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

_BUR_LOCAL eDOAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyDigitalOutput tyDOutput;
_GLOBAL unsigned long p_DOStat;
_GLOBAL unsigned long p_DOStatus;
_GLOBAL unsigned long p_DOStatTxt;
_GLOBAL unsigned long p_DO;
