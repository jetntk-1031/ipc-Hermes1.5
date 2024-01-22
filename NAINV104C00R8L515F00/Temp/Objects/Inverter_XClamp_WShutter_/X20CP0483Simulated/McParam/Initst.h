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

#ifndef __AS__TYPE_eNetworkConfigMod
#define __AS__TYPE_eNetworkConfigMod
typedef enum eNetworkConfigMod
{	SetIPManually = 0,
	IPFromDHCPServer = 1,
} eNetworkConfigMod;
#endif

#ifndef __AS__TYPE_eMcParamAction
#define __AS__TYPE_eMcParamAction
typedef enum eMcParamAction
{	McParamActIdle = 0,
	McParamActCreateDir = 1,
	McParamActRead = 2,
	McParamActWrite = 3,
} eMcParamAction;
#endif

#ifndef __AS__TYPE_tyAntiGapDly
#define __AS__TYPE_tyAntiGapDly
typedef struct tyAntiGapDly
{	signed long diSigOnTm;
	signed long diSigOffTm;
} tyAntiGapDly;
#endif

#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
#endif

#ifndef __AS__TYPE_eSMEMASelection
#define __AS__TYPE_eSMEMASelection
typedef enum eSMEMASelection
{	SMEMASelStandard = 0,
	SMEMASelIPC9851 = 1,
	SMEMASelIPC9851Ext = 2,
} eSMEMASelection;
#endif

#ifndef __AS__TYPE_tySMEMAParam
#define __AS__TYPE_tySMEMAParam
typedef struct tySMEMAParam
{	eSMEMASelection eSelection;
	plcbit bStatSigSetGd;
} tySMEMAParam;
#endif

#ifndef __AS__TYPE_tyMcParam
#define __AS__TYPE_tyMcParam
typedef struct tyMcParam
{	plcbit a_bLFOnline[50];
	plcstring a_sLFIPAddr[50][16];
	plcstring sMcNm[31];
	signed long diWidthAtHmPosInUM;
	plcstring sIPAddr[16];
	plcstring sSubnetMask[16];
	eNetworkConfigMod eNetworkMod;
	plcbit bSSaverEn;
	unsigned short uiSSaverTmInSec;
	signed long diConvInitTmInMS;
	signed long diTranInErrDlyTmInMS;
	signed long diTranOutErrDlyTmInMS;
	signed long diStopperAtLftPos;
	signed long diStopperAtRgtPos;
	unsigned char usiDefaultMcMod;
	unsigned char usiDefaultFlippedBrd;
	plcbit bAutoStepEn;
	plcbit bAWDis;
	plcbit bVSMEMAEn;
	plcbit bMnlAccDat;
	plcbit bChgParamEn;
	plcbit bHermesRmtEn;
	plcbit bHermesSvyEn;
	plcbit bClampDis;
	plcbit bStopperDis;
	plcbit bInShutterDis;
	plcbit bOutShutterDis;
	unsigned char usiLang;
	plcbit bLFEn;
	plcbit bLCSLFEn;
	plcbit bLCSReqRcpEn;
	plcbit bLCSManageRcpEn;
	plcbit bLCSLiveDatEn;
	plcbit bSectionLeader;
	plcbit bUSWidthChkEn;
	plcbit bDSWidthChkEn;
	tyAntiGapDly tyConvLftSenAntiGapDly;
	tyAntiGapDly tyConvRgtSenAntiGapDly;
	eMcSetCommMod eUSComm;
	tySMEMAParam tyUSCommSMEMA;
	eMcSetCommMod eDSComm;
	tySMEMAParam tyDSCommSMEMA;
	eMcSetCommMod eUSComm2;
	tySMEMAParam tyUSCommSMEMA2;
	eMcSetCommMod eDSComm2;
	tySMEMAParam tyDSCommSMEMA2;
	plcbit bLFLeaderMc;
	signed long diLFMcIdxBeforeOven;
	signed long diLFMcIdxAfterOven;
	signed long diLFMcIdxBeforeOven2;
	signed long diLFMcIdxAfterOven2;
	signed long diWidthOffsetInUM;
	plcbit bAutoLogoutEn;
	signed long diAutoLogoutTmInSec;
	plcbit bLFSeqStayActive;
	plcbit bLFBuzMute;
	plcbit bDBAOnWOAlign;
} tyMcParam;
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

_BUR_LOCAL eMcParamAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyMcParam tyMcParamCurr;
_BUR_LOCAL plcbit bFileNotFound;
_GLOBAL unsigned long p_McParamStat;
_GLOBAL unsigned long p_McParamStatus;
_GLOBAL unsigned long p_McParamStatTxt;
_GLOBAL unsigned long p_McParamAlmData;
_GLOBAL unsigned long p_McParamFileNotFound;
_GLOBAL unsigned long p_McParamCurr;
_GLOBAL unsigned long p_McParamLFOnline;
_GLOBAL unsigned long p_McParamLFIPAddr;
_GLOBAL unsigned long p_McParamMcNm;
_GLOBAL unsigned long p_McParamWidthAtHmPos;
_GLOBAL unsigned long p_McParamWidthOffset;
_GLOBAL unsigned long p_McParamSSaverEn;
_GLOBAL unsigned long p_McParamSSaverTm;
_GLOBAL unsigned long p_McParamConvInitTm;
_GLOBAL unsigned long p_McParamTranInErrDlyTm;
_GLOBAL unsigned long p_McParamTranOutErrDlyTm;
_GLOBAL unsigned long p_McParamDefaultMcMod;
_GLOBAL unsigned long p_McParamDefaultFlippedBrd;
_GLOBAL unsigned long p_McParamAutoStepEn;
_GLOBAL unsigned long p_McParamAWDis;
_GLOBAL unsigned long p_McParamVSMEMAEn;
_GLOBAL unsigned long p_McParamMnlAccDat;
_GLOBAL unsigned long p_McParamChgParamEn;
_GLOBAL unsigned long p_McParamHermesRmtEn;
_GLOBAL unsigned long p_McParamLang;
_GLOBAL unsigned long p_McParamLFEn;
_GLOBAL unsigned long p_McParamLCSLFEn;
_GLOBAL unsigned long p_McParamLCSReqRcpEn;
_GLOBAL unsigned long p_McParamLCSManageRcpEn;
_GLOBAL unsigned long p_McParamLCSLiveDatEn;
_GLOBAL unsigned long p_McParamSectionLeader;
_GLOBAL unsigned long p_McParamUSWidthChkEn;
_GLOBAL unsigned long p_McParamDSWidthChkEn;
_GLOBAL unsigned long p_McParamConvLftSenAntiGap;
_GLOBAL unsigned long p_McParamConvLftSenOnTm;
_GLOBAL unsigned long p_McParamConvLftSenOffTm;
_GLOBAL unsigned long p_McParamConvRgtSenAntiGap;
_GLOBAL unsigned long p_McParamConvRgtSenOnTm;
_GLOBAL unsigned long p_McParamConvRgtSenOffTm;
_GLOBAL unsigned long p_McParamUSCommMod;
_GLOBAL unsigned long p_McParamUSSMEMAParam;
_GLOBAL unsigned long p_McParamUSSMEMASelection;
_GLOBAL unsigned long p_McParamUBAStatSetGd;
_GLOBAL unsigned long p_McParamDSCommMod;
_GLOBAL unsigned long p_McParamDSSMEMAParam;
_GLOBAL unsigned long p_McParamDSSMEMASelection;
_GLOBAL unsigned long p_McParamDBAStatSetGd;
_GLOBAL unsigned long p_McParamUSComm2Mod;
_GLOBAL unsigned long p_McParamUSSMEMA2Param;
_GLOBAL unsigned long p_McParamUSSMEMA2Selection;
_GLOBAL unsigned long p_McParamUBAStat2SetGd;
_GLOBAL unsigned long p_McParamDSComm2Mod;
_GLOBAL unsigned long p_McParamDSSMEMA2Param;
_GLOBAL unsigned long p_McParamDSSMEMA2Selection;
_GLOBAL unsigned long p_McParamDBAStat2SetGd;
_GLOBAL unsigned long p_McParamStopperDis;
_GLOBAL unsigned long p_McParamClampDis;
_GLOBAL unsigned long p_McParamInShutterDis;
_GLOBAL unsigned long p_McParamOutShutterDis;
_GLOBAL unsigned long p_McParamStopperAtLftPos;
_GLOBAL unsigned long p_McParamStopperAtRgtPos;
_GLOBAL unsigned long p_McParamLFLeaderMc;
_GLOBAL unsigned long p_McParamLFMcIdxBeforeOven;
_GLOBAL unsigned long p_McParamLFMcIdxAfterOven;
_GLOBAL unsigned long p_McParamLFMcIdxBeforeOven2;
_GLOBAL unsigned long p_McParamLFMcIdxAfterOven2;
_GLOBAL unsigned long p_McParamNetworkMod;
_GLOBAL unsigned long p_McParamLFSeqStayActive;
_GLOBAL unsigned long p_McParamLFBuzMute;
_GLOBAL unsigned long p_McParamDBAOnWOAlign;
_GLOBAL unsigned long p_McParamHermesSvyEn;
_GLOBAL signed long c_diLFClntNum;
