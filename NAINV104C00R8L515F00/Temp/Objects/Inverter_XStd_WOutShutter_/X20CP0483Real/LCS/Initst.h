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

#ifndef __AS__TYPE_tyProdRcpParam
#define __AS__TYPE_tyProdRcpParam
typedef struct tyProdRcpParam
{	plcstring sRcpNm[255];
	signed long diWidthInUM;
	signed long diWidthInUM2;
	unsigned char usiMcMod;
	plcstring sDisplayInfo[31];
	plcdt dtLastModified;
	unsigned char usiFlippedBrd;
	plcstring sMatchCode[31];
} tyProdRcpParam;
#endif

#ifndef __AS__TYPE_eLCSAction
#define __AS__TYPE_eLCSAction
typedef enum eLCSAction
{	LCSActIdle = 0,
	LCSActAddProd = 1,
	LCSActAddMultiProd = 2,
	LCSActEditProd = 3,
	LCSActEditMultiProd = 4,
	LCSActOverWriteProd = 5,
	LCSActOverWriteMultiProd = 6,
	LCSActDelProd = 7,
	LCSActDelMultiProd = 8,
	LCSActRunProd = 9,
	LCSActUploadProd = 10,
	LCSActUploadMultiProd = 11,
} eLCSAction;
#endif

#ifndef __AS__TYPE_eLCSOpsStatus
#define __AS__TYPE_eLCSOpsStatus
typedef enum eLCSOpsStatus
{	LCSOpsStatusAuto = 0,
	LCSOpsStatusManual = 1,
	LCSOpsStatusStop = 2,
	LCSOpsStatusError = 3,
	LCSOpsStatusWarning = 4,
} eLCSOpsStatus;
#endif

#ifndef __AS__TYPE_tyLCSTagNm
#define __AS__TYPE_tyLCSTagNm
typedef struct tyLCSTagNm
{	eLCSAction eAct;
	eLCSAction eStat;
	unsigned long udiStatus;
	plcstring sErrMsg[201];
	signed short iIdxAct;
	signed short iIdxStat;
	tyProdRcpParam tyProdRcpInfo;
	tyProdRcpParam tyCurrProdRcpParam;
	plcstring sCurrRcpNm[31];
	float rCurrWidth;
	eLCSOpsStatus eCurrOpsStatus;
	unsigned char usiBrdStatus;
	unsigned char usiMode;
	plcstring sLastModified[81];
	plcbit bMngRcpEn;
	plcbit bLiveData;
	plcbit bLFEn;
	plcstring sMcAlmMsg[200][256];
	plcbit bSectionLeaderEn;
} tyLCSTagNm;
#endif

_BUR_LOCAL eLCSAction eLCSMngRcp_LCSAct;
_BUR_LOCAL signed short iLCSMngRcp_LCSIdxAct;
_BUR_LOCAL signed short iLCSMngRcp_LCSIdxStat;
_BUR_LOCAL tyProdRcpParam tyLCSMngRcp_LCSProdRcpInfo;
_BUR_LOCAL eLCSAction eLCSLF_LCSAct;
_BUR_LOCAL tyProdRcpParam tyLCSLF_LCSProdRcpInfo;
_BUR_LOCAL plcbit bChkLmtOK;
_BUR_LOCAL plcbit bChkLmtNG;
_BUR_LOCAL tyLCSTagNm tyTagNm;
_GLOBAL unsigned long c_udiAlarmCurrMax;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSAct;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSIdxAct;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSIdxStat;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSProdRcpInfo;
_GLOBAL unsigned long p_LCS_LCSLF_LCSAct;
_GLOBAL unsigned long p_LCS_LCSLF_LCSProdRcpInfo;
_GLOBAL unsigned long p_LCSChkLmtOK;
_GLOBAL unsigned long p_LCSChkLmtNG;
_GLOBAL unsigned long p_LCSSectionLeaderEn;
