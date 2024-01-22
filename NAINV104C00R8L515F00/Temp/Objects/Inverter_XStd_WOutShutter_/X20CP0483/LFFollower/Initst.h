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

#ifndef __AS__TYPE_eTimeAction
#define __AS__TYPE_eTimeAction
typedef enum eTimeAction
{	TimeActIdle = 0,
	TimeActGetTime = 1,
	TimeActGetTimeZone = 2,
	TimeActSetTime = 3,
	TimeActSetTimeZone = 4,
} eTimeAction;
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

#ifndef __AS__TYPE_tyLFLeaderToFollowerTag
#define __AS__TYPE_tyLFLeaderToFollowerTag
typedef struct tyLFLeaderToFollowerTag
{	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	plcbit bMnlAccData;
	plcbit bBypassMnlAccData;
	plcbit bBlkDS;
	plcbit bBlkUS;
	plcbit bBypassWidthChk;
	plcbit bSetTm;
	plcdt dtTm;
	unsigned short uiTmZone;
	unsigned char usiRunTm;
	plcbit bProdNameUSWarn;
	plcbit bProdNameDSWarn;
	plcbit bProdWidthUSWarn;
	plcbit bProdWidthDSWarn;
	plcbit bLeaderSeqCtrlInActive;
} tyLFLeaderToFollowerTag;
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

_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyInfoData;
_BUR_LOCAL tyAlmDat tyInfoData1;
_BUR_LOCAL plcbit bUSAllow;
_BUR_LOCAL plcbit bDSAllow;
_BUR_LOCAL plcbit bLeaderSeqCtrlInActive;
_BUR_LOCAL plcbit bProdAccDataMnl;
_BUR_LOCAL plcbit bProdUpdtDataMnl;
_BUR_LOCAL plcbit bMagAccDataMnl;
_BUR_LOCAL eTimeAction eTimeAct;
_BUR_LOCAL plcbit bWaitRlsBrd;
_BUR_LOCAL tyProdRcpParam tyUpdtProdRcp;
_BUR_LOCAL plcbit bAutoUpdtData;
_BUR_LOCAL plcbit bInternalUse;
_BUR_LOCAL tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
_GLOBAL unsigned long p_LFFollowerStatus;
_GLOBAL unsigned long p_LFFollowerAlmData;
_GLOBAL unsigned long p_LFFollowerInfoData;
_GLOBAL unsigned long p_LFFollowerInfoData1;
_GLOBAL unsigned long p_LFFollowerUSAllow;
_GLOBAL unsigned long p_LFFollowerDSAllow;
_GLOBAL unsigned long p_LFFollowerProdAccDataMnl;
_GLOBAL unsigned long p_LFFollowerProdUpdtDataMnl;
_GLOBAL unsigned long p_LFFollowerMagAccDataMnl;
_GLOBAL unsigned long p_LFFollowerTimeAct;
_GLOBAL unsigned long p_LFFollowerSetDT;
_GLOBAL unsigned long p_LFFollowerWaitRlsBrd;
_GLOBAL unsigned long p_LFFollowerUpdtProdRcp;
_GLOBAL unsigned long p_LFFollowerLdrSeqCtrlInActive;
