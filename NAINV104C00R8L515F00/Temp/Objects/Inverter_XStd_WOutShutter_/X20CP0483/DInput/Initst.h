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

#ifndef __AS__TYPE_tyDigitalInput
#define __AS__TYPE_tyDigitalInput
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

_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL tyDigitalInput tyDInput;
_GLOBAL unsigned long p_DIAlmData1;
_GLOBAL unsigned long p_DIAlmData2;
_GLOBAL unsigned long p_DI;
_GLOBAL unsigned long p_DISafetyRlySig;
_GLOBAL unsigned long p_DIEStopSig;
_GLOBAL unsigned long p_DICoverSWSig;
_GLOBAL unsigned long p_DIUBA;
_GLOBAL unsigned long p_DIUBAStat;
_GLOBAL unsigned long p_DIDSB;
_GLOBAL unsigned long p_DIUBA2;
_GLOBAL unsigned long p_DIUBAStat2;
_GLOBAL unsigned long p_DIConvLftSen;
_GLOBAL unsigned long p_DIConvRgtSen;
_GLOBAL unsigned long p_DIPressureSW;
_GLOBAL unsigned long p_DIThermalPrtSig;
_GLOBAL unsigned long p_DIUSWidthChkSen;
_GLOBAL unsigned long p_DIUSWidthChkSen1;
_GLOBAL unsigned long p_DIDSWidthChkSen;
_GLOBAL unsigned long p_DIInvertHomeSen;
_GLOBAL unsigned long p_DIInvertRemoteSen;
_GLOBAL unsigned long p_DICoatingSen;
_GLOBAL unsigned long p_DIInShutterOpenRS;
_GLOBAL unsigned long p_DIInShutterCloseRS;
_GLOBAL unsigned long p_DIOutShutterOpenRS;
_GLOBAL unsigned long p_DIOutShutterCloseRS;
_GLOBAL unsigned long p_DIClamp2Sen;
_GLOBAL unsigned long p_DIClamp3Sen;
_GLOBAL unsigned long p_DIClampRS1;
_GLOBAL unsigned long p_DIUnClampRS1;
_GLOBAL unsigned long p_DIClampRS2;
_GLOBAL unsigned long p_DIUnClampRS2;
_GLOBAL unsigned long p_DIClampRS3;
_GLOBAL unsigned long p_DIUnClampRS3;
_GLOBAL unsigned long p_DICoverSWSig2;
_GLOBAL unsigned long p_DIUnlockCoverSigFromDS;
_GLOBAL unsigned long p_DIUnlockSafetySigFromDS;
_GLOBAL unsigned long p_DIUnlockSafetySigFromUS;
_GLOBAL unsigned long p_DIUnlockCoverSigFromUS;
