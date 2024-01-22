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

#ifndef __AS__TYPE_tyUIHotspot
#define __AS__TYPE_tyUIHotspot
typedef struct tyUIHotspot
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcbit bValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
} tyUIHotspot;
#endif

#ifndef __AS__TYPE_tyUILString
#define __AS__TYPE_tyUILString
typedef struct tyUILString
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcstring sValue[255];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	plcstring sKeypadTitle[31];
} tyUILString;
#endif

#ifndef __AS__TYPE_tyUIBitmap
#define __AS__TYPE_tyUIBitmap
typedef struct tyUIBitmap
{	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiValueIdx;
	unsigned short uiValueIdx;
} tyUIBitmap;
#endif

#ifndef __AS__TYPE_tyUIBtn
#define __AS__TYPE_tyUIBtn
typedef struct tyUIBtn
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcbit bValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiBitmapIdx;
	unsigned char usiColor;
	unsigned char usiPressedColor;
	unsigned char usiTxtIdx;
	unsigned short uiBitmapIdx;
} tyUIBtn;
#endif

#ifndef __AS__TYPE_tyUITxt
#define __AS__TYPE_tyUITxt
typedef struct tyUITxt
{	plcbit bHighlighting;
	plcstring sTxt[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiValueIdx;
} tyUITxt;
#endif

#ifndef __AS__TYPE_tyUILyr
#define __AS__TYPE_tyUILyr
typedef struct tyUILyr
{	unsigned short uiRtStat;
} tyUILyr;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsGen
#define __AS__TYPE_tyLyrP0200OpsGen
typedef struct tyLyrP0200OpsGen
{	struct tyUIHotspot a_tyHotspotRcyMsg[6];
	struct tyUILString a_tyStringAlm[6];
	tyUIBitmap tyBitmapDSCommIcon;
	tyUIBitmap tyBitmapDSCommIn;
	tyUIBitmap tyBitmapDSCommOut;
	tyUIBitmap tyBitmapDSCommIn1;
	tyUIBitmap tyBitmapDSCommOut1;
	tyUIBitmap tyBitmapUSCommIcon;
	tyUIBitmap tyBitmapUSCommIn;
	tyUIBitmap tyBitmapUSCommOut;
	tyUIBitmap tyBitmapUSCommIn1;
	tyUIBitmap tyBitmapUSCommOut1;
	tyUIBitmap tyBitmapUSCommIcon2;
	tyUIBitmap tyBitmapUSCommIn2;
	tyUIBitmap tyBitmapUSCommOut2;
	tyUIBitmap tyBitmapDir1;
	tyUIBitmap tyBitmapDir2;
	tyUIBitmap tyBitmapConvPCB;
	tyUIBitmap tyBitmapStackerPCB;
	tyUIBitmap tyBitmapAccDat;
	tyUIBitmap tyBitmapRlsNewProd;
	tyUIBitmap tyBitmapMc;
	tyUIBitmap tyBitmapBypassTopCover1;
	tyUIBtn tyBtnBypassTopCover1;
	tyUIBtn tyBtnAccDat;
	tyUIBtn tyBtnRlsNewProd;
	tyUIBtn tyBtnPCBReset;
	tyUIHotspot tyHotspotMc;
	tyUIHotspot tyHotspotDSVirtual;
	tyUIHotspot tyHotspotUSVirtual;
	tyUIHotspot tyHotspotDSVirtual1;
	tyUIHotspot tyHotspotUSVirtual1;
	tyUIHotspot tyHotspotUSVirtual2;
	tyUITxt tyTxtUS;
	tyUITxt tyTxtUS1;
	tyUITxt tyTxtUS2;
	tyUITxt tyTxtDS;
	tyUITxt tyTxtDS1;
	tyUITxt tyTxtLdrInActiveCtrl;
	tyUIBitmap tyBitmapWarningLF;
	tyUILyr tyLyr;
} tyLyrP0200OpsGen;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsUSVSMEMA
#define __AS__TYPE_tyLyrP0200OpsUSVSMEMA
typedef struct tyLyrP0200OpsUSVSMEMA
{	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnDual;
	tyUILyr tyLyr;
} tyLyrP0200OpsUSVSMEMA;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsDSVSMEMA
#define __AS__TYPE_tyLyrP0200OpsDSVSMEMA
typedef struct tyLyrP0200OpsDSVSMEMA
{	tyUIBtn tyBtnDSBStat;
	tyUIBtn tyBtnDSB;
	tyUIBtn tyBtnDual;
	tyUILyr tyLyr;
} tyLyrP0200OpsDSVSMEMA;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsUSVSMEMA1
#define __AS__TYPE_tyLyrP0200OpsUSVSMEMA1
typedef struct tyLyrP0200OpsUSVSMEMA1
{	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnDual;
	tyUILyr tyLyr;
} tyLyrP0200OpsUSVSMEMA1;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsDSVSMEMA1
#define __AS__TYPE_tyLyrP0200OpsDSVSMEMA1
typedef struct tyLyrP0200OpsDSVSMEMA1
{	tyUIBtn tyBtnDSBStat;
	tyUIBtn tyBtnDSB;
	tyUIBtn tyBtnDual;
	tyUILyr tyLyr;
} tyLyrP0200OpsDSVSMEMA1;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsUSVSMEMA2
#define __AS__TYPE_tyLyrP0200OpsUSVSMEMA2
typedef struct tyLyrP0200OpsUSVSMEMA2
{	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnDual;
	tyUILyr tyLyr;
} tyLyrP0200OpsUSVSMEMA2;
#endif

#ifndef __AS__TYPE_tyLyrP0200OpsBypsInitConv
#define __AS__TYPE_tyLyrP0200OpsBypsInitConv
typedef struct tyLyrP0200OpsBypsInitConv
{	tyUIBtn tyBtnBypsInitConv;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrP0200OpsBypsInitConv;
#endif

#ifndef __AS__TYPE_tyLyrC0008MsgBox
#define __AS__TYPE_tyLyrC0008MsgBox
typedef struct tyLyrC0008MsgBox
{	tyUIBitmap tyBitmapIcon;
	tyUITxt tyTxtTitle;
	tyUITxt tyTxtMsg;
	tyUIBtn tyBtnYes;
	tyUIBtn tyBtnNo;
	tyUILyr tyLyr;
} tyLyrC0008MsgBox;
#endif

#ifndef __AS__TYPE_tyUIAlmTxt
#define __AS__TYPE_tyUIAlmTxt
typedef struct tyUIAlmTxt
{	plcbit bHighlighting;
	plcstring sTxt[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned long udiValueIdx;
} tyUIAlmTxt;
#endif

#ifndef __AS__TYPE_tyLyrC0010RcyMsg
#define __AS__TYPE_tyLyrC0010RcyMsg
typedef struct tyLyrC0010RcyMsg
{	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
	tyUIAlmTxt tyTxtMsg;
} tyLyrC0010RcyMsg;
#endif

#ifndef __AS__TYPE_tyUIP0200OpsGen
#define __AS__TYPE_tyUIP0200OpsGen
typedef struct tyUIP0200OpsGen
{	tyLyrP0200OpsGen tyOps;
	tyLyrP0200OpsUSVSMEMA tyUSVSMEMA;
	tyLyrP0200OpsDSVSMEMA tyDSVSMEMA;
	tyLyrP0200OpsUSVSMEMA1 tyUSVSMEMA1;
	tyLyrP0200OpsDSVSMEMA1 tyDSVSMEMA1;
	tyLyrP0200OpsUSVSMEMA2 tyUSVSMEMA2;
	tyLyrP0200OpsBypsInitConv tyBypsInitConv;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxRcpSelMsg;
	tyLyrC0008MsgBox tyMsgBoxRstWaitingBrdAsk;
	tyLyrC0010RcyMsg tyRcyMsgHide;
	tyLyrC0010RcyMsg tyRcyMsg;
} tyUIP0200OpsGen;
#endif

#ifndef __AS__TYPE_tyLyrP0931ConvCom
#define __AS__TYPE_tyLyrP0931ConvCom
typedef struct tyLyrP0931ConvCom
{	tyUIBtn tyBtnLft;
	tyUIBtn tyBtnRgt;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnDCCtrl;
} tyLyrP0931ConvCom;
#endif

#ifndef __AS__TYPE_tyLyrP0931ConvDC
#define __AS__TYPE_tyLyrP0931ConvDC
typedef struct tyLyrP0931ConvDC
{	tyUIBtn tyBtnConvLToR;
	tyUIBtn tyBtnConvRToL;
	tyUIBtn tyBtnStop;
	tyUILyr tyLyr;
} tyLyrP0931ConvDC;
#endif

#ifndef __AS__TYPE_tyLyrP0931ConvFB
#define __AS__TYPE_tyLyrP0931ConvFB
typedef struct tyLyrP0931ConvFB
{	tyUIBtn tyBtnEnt;
	tyUIBtn tyBtnExit;
	tyUIBtn tyBtnPreExit;
	tyUIBtn tyBtnStop;
	tyUILyr tyLyr;
	tyUILString tyStringStat;
} tyLyrP0931ConvFB;
#endif

#ifndef __AS__TYPE_tyLyrP0931InvCom
#define __AS__TYPE_tyLyrP0931InvCom
typedef struct tyLyrP0931InvCom
{	tyUIBtn tyBtnHomeSen;
	tyUIBtn tyBtnRemoteSen;
	tyUIBtn tyBtnDCCtrl;
	tyUIBitmap tyBitmapMc;
} tyLyrP0931InvCom;
#endif

#ifndef __AS__TYPE_tyLyrP0931InvDC
#define __AS__TYPE_tyLyrP0931InvDC
typedef struct tyLyrP0931InvDC
{	tyUIBtn tyBtnBrake;
	tyUIBtn tyBtnCCW;
	tyUIBtn tyBtnCW;
	tyUILyr tyLyr;
} tyLyrP0931InvDC;
#endif

#ifndef __AS__TYPE_tyLyrP0931InvFB
#define __AS__TYPE_tyLyrP0931InvFB
typedef struct tyLyrP0931InvFB
{	tyUIBtn tyBtnCCW;
	tyUIBtn tyBtnCW;
	tyUIBtn tyBtnStop;
	tyUILyr tyLyr;
	tyUILString tyStringStat;
} tyLyrP0931InvFB;
#endif

#ifndef __AS__TYPE_tyLyrC0003DualMask
#define __AS__TYPE_tyLyrC0003DualMask
typedef struct tyLyrC0003DualMask
{	tyUIBtn tyBtnLeftMask;
	tyUIBtn tyBtnRgtMask;
	tyUILyr tyLyr;
} tyLyrC0003DualMask;
#endif

#ifndef __AS__TYPE_tyLyrC0004Navi
#define __AS__TYPE_tyLyrC0004Navi
typedef struct tyLyrC0004Navi
{	tyUIBtn tyBtnLeft;
	tyUIBtn tyBtnRgt;
	tyUIBtn tyBtnBack;
	tyUIBitmap tyBitmapPageDisp;
	tyUILyr tyLyr;
} tyLyrC0004Navi;
#endif

#ifndef __AS__TYPE_tyUIP0931ConvInv
#define __AS__TYPE_tyUIP0931ConvInv
typedef struct tyUIP0931ConvInv
{	tyLyrP0931ConvCom tyConvCom;
	tyLyrP0931ConvDC tyConvDC;
	tyLyrP0931ConvFB tyConvFB;
	tyLyrP0931InvCom tyInvCom;
	tyLyrP0931InvDC tyInvDC;
	tyLyrP0931InvFB tyInvFB;
	tyLyrC0003DualMask tyDualMaskHide;
	tyLyrC0003DualMask tyDualMaskEStop;
	tyLyrC0003DualMask tyDualMaskCWSig;
	tyLyrC0003DualMask tyDualMaskSafetyRly;
	tyLyrC0003DualMask tyDualMaskInletShutterInterrupt;
	tyLyrC0003DualMask tyDualMaskOutletShutterInterrupt;
	tyLyrC0003DualMask tyDualMaskInletNInvalid;
	tyLyrC0003DualMask tyDualMaskOutletNInvalid;
	tyLyrC0003DualMask tyDualMaskInvalidPos;
	tyLyrC0003DualMask tyDualMaskInvertInterrupt;
	tyLyrC0003DualMask tyDualMaskStopperInterruptInv;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0931ConvInv;
#endif

#ifndef __AS__TYPE_tyLyrP1022McSetVCommSel
#define __AS__TYPE_tyLyrP1022McSetVCommSel
typedef struct tyLyrP1022McSetVCommSel
{	tyUIBtn tyBtnLF;
	tyUIBtn tyBtnLCSLF;
	tyUIBtn tyBtnLCSReqRcp;
	tyUIBtn tyBtnLCSManageRcp;
	tyUIBtn tyBtnLCSLiveDat;
	tyUILyr tyLyr;
} tyLyrP1022McSetVCommSel;
#endif

#ifndef __AS__TYPE_tyLyrP1022McSetVCommLF
#define __AS__TYPE_tyLyrP1022McSetVCommLF
typedef struct tyLyrP1022McSetVCommLF
{	tyUIBtn tyBtnLeaderMc;
	tyUIBtn tyBtnSectionLdr;
	tyUIBtn tyBtnDBAOnWOAlign;
	tyUIBtn tyBtnUSWidthChkEn;
	tyUIBtn tyBtnDSWidthChkEn;
	tyUIBtn tyBtnSeqStayActive;
	tyUILyr tyLyr;
} tyLyrP1022McSetVCommLF;
#endif

#ifndef __AS__TYPE_tyUINum
#define __AS__TYPE_tyUINum
typedef struct tyUINum
{	plcbit bRtCompl;
	plcbit bRtLk;
	signed long diValue;
	signed long diValueMax;
	signed long diValueMin;
	signed long diValueTeach;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiAddDigits;
	unsigned char usiColor;
	plcstring sKeypadTitle[31];
} tyUINum;
#endif

#ifndef __AS__TYPE_tyLyrP1022McSetVCommSvy
#define __AS__TYPE_tyLyrP1022McSetVCommSvy
typedef struct tyLyrP1022McSetVCommSvy
{	tyUINum tyNumSndAliveTm;
	tyUINum tyNumSvySystemPort;
	tyUIBtn tyBtnConfiguration;
	tyUIBtn tyBtnCheckAliveResponse;
	tyUIBtn tyBtnBoardTracking;
	tyUIBtn tyBtnQueryWorkOrderInfo;
	tyUIBtn tyBtnSendWorkOrderInfo;
	tyUIBtn tyBtnReplyWorkOrderInfo;
	tyUIBtn tyBtnInsertBrd;
	tyUIBitmap tyBitmapMask;
	tyUILyr tyLyr;
} tyLyrP1022McSetVCommSvy;
#endif

#ifndef __AS__TYPE_tyUIP1022McSetVComm
#define __AS__TYPE_tyUIP1022McSetVComm
typedef struct tyUIP1022McSetVComm
{	tyLyrP1022McSetVCommSel tyVComSel;
	tyLyrP1022McSetVCommSel tyVComSelBkUp;
	tyLyrP1022McSetVCommLF tyLF;
	tyLyrP1022McSetVCommLF tyLFBkUp;
	tyLyrP1022McSetVCommSvy tyVComSvy;
	tyLyrP1022McSetVCommSvy tyVComSvyBkUp;
	tyLyrC0004Navi tyNaviLyr1;
	tyLyrC0004Navi tyNaviLyr2;
	tyLyrC0004Navi tyNaviLyr3;
	tyLyrC0004Navi tyNaviLyr4;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxExitAsk;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
} tyUIP1022McSetVComm;
#endif

#ifndef __AS__TYPE_eUIAction
#define __AS__TYPE_eUIAction
typedef enum eUIAction
{	UIActIdle = 0,
	UIActInitial = 1,
} eUIAction;
#endif

#ifndef __AS__TYPE_eStartupAction
#define __AS__TYPE_eStartupAction
typedef enum eStartupAction
{	StartupActIdle = 0,
	StartupActRun = 1,
} eStartupAction;
#endif

#ifndef __AS__TYPE_eHWInfoAction
#define __AS__TYPE_eHWInfoAction
typedef enum eHWInfoAction
{	HWInfoActIdle = 0,
	HWInfoActGetIPAddr = 1,
	HWInfoActGetSubnetMask = 2,
	HWInfoActGetMacAddr = 3,
	HWInfoActSetIPAddr = 4,
	HWInfoActSetSubnetMask = 5,
	HWInfoActGetEthConfigMode = 6,
	HWInfoActSetEthConfigMode = 7,
} eHWInfoAction;
#endif

#ifndef __AS__TYPE_eNetworkConfigMod
#define __AS__TYPE_eNetworkConfigMod
typedef enum eNetworkConfigMod
{	SetIPManually = 0,
	IPFromDHCPServer = 1,
} eNetworkConfigMod;
#endif

#ifndef __AS__TYPE_eTLBuzAction
#define __AS__TYPE_eTLBuzAction
typedef enum eTLBuzAction
{	TLBuzActIdle = 0,
	TLBuzActSetGreen = 1,
	TLBuzActSetAmber = 2,
	TLBuzActSetRed = 3,
	TLBuzActSetWhite = 4,
	TLBuzActSetBlue = 5,
	TLBuzActSetBuz = 6,
	TLBuzActRstGreen = 7,
	TLBuzActRstAmber = 8,
	TLBuzActRstRed = 9,
	TLBuzActRstWhite = 10,
	TLBuzActRstBlue = 11,
	TLBuzActRstBuz = 12,
	TLBuzActSetAll = 13,
	TLBuzActRstAll = 14,
} eTLBuzAction;
#endif

#ifndef __AS__TYPE_eRstErrAction
#define __AS__TYPE_eRstErrAction
typedef enum eRstErrAction
{	RstErrActIdle = 0,
	RstErrActRun = 1,
	RstErrActSetSafetyRlyRst = 2,
	RstErrActRstSafetyRlyRst = 3,
} eRstErrAction;
#endif

#ifndef __AS__TYPE_eProdRcpAction
#define __AS__TYPE_eProdRcpAction
typedef enum eProdRcpAction
{	ProdRcpActIdle = 0,
	ProdRcpActCreateDir = 1,
	ProdRcpActAddEdit = 2,
	ProdRcpActDel = 3,
	ProdRcpActGetInfo = 4,
	ProdRcpActGetList = 5,
	ProdRcpActFilter = 6,
	ProdRcpActLoadRcp = 7,
	ProdRcpActAdd = 8,
	ProdRcpActEdit = 9,
	ProdRcpActReadCurrRcp = 10,
	ProdRcpActWriteCurrRcpParam = 11,
	ProdRcpActSaveList = 12,
	ProdRcpActSort = 13,
	ProdRcpActEndCharFilter = 14,
} eProdRcpAction;
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

#ifndef __AS__TYPE_eMpProdRcpAction
#define __AS__TYPE_eMpProdRcpAction
typedef enum eMpProdRcpAction
{	MpProdRcpActIdle = 0,
	MpProdRcpActCreateDir = 1,
	MpProdRcpActLoad = 2,
	MpProdRcpActSave = 3,
} eMpProdRcpAction;
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

#ifndef __AS__TYPE_eUsrMgmtAction
#define __AS__TYPE_eUsrMgmtAction
typedef enum eUsrMgmtAction
{	UsrMgmtActIdle = 0,
	UsrMgmtActCreateDir = 1,
	UsrMgmtActLogin = 2,
	UsrMgmtActBypassLogin = 3,
	UsrMgmtActLogout = 4,
	UsrMgmtActAdd = 5,
	UsrMgmtActEdit = 6,
	UsrMgmtActDel = 7,
	UsrMgmtActSaveAccessRight = 8,
	UsrMgmtActReadData = 9,
} eUsrMgmtAction;
#endif

#ifndef __AS__TYPE_eUsrMgmtAutLvl
#define __AS__TYPE_eUsrMgmtAutLvl
typedef enum eUsrMgmtAutLvl
{	UsrMgmtLvl1 = 0,
	UsrMgmtLvl2 = 1,
	UsrMgmtLvl3 = 2,
	UsrMgmtAdmin = 3,
	UsrMgmtNtEngr = 4,
	UsrMgmtNtAdmin = 5,
} eUsrMgmtAutLvl;
#endif

#ifndef __AS__TYPE_tyUsrMgmtParam
#define __AS__TYPE_tyUsrMgmtParam
typedef struct tyUsrMgmtParam
{	plcstring sUsrNm[31];
	plcstring sPw[31];
	eUsrMgmtAutLvl eUsrLvl;
} tyUsrMgmtParam;
#endif

#ifndef __AS__TYPE_tyUsrMgmtAccessRight
#define __AS__TYPE_tyUsrMgmtAccessRight
typedef struct tyUsrMgmtAccessRight
{	plcbit bOpt;
	plcbit bProdSel;
	plcbit bMagSel;
	plcbit bMcInfo;
	plcbit bAlm;
	plcbit bBffrInfo;
	plcbit bOvenInfo;
	plcbit bMagInfo;
	plcbit bLFCtrl;
	plcbit bManual;
	plcbit bManualFBOnly;
	plcbit bSimulation;
	plcbit bProdSet;
	plcbit bMagSet;
	plcbit bMcSet;
	plcbit bLang;
	plcbit bUsrMgmt;
	plcbit bLFSet;
	plcbit bChgParam;
	plcstring sNm[31];
} tyUsrMgmtAccessRight;
#endif

#ifndef __AS__TYPE_eSMEMAAction
#define __AS__TYPE_eSMEMAAction
typedef enum eSMEMAAction
{	SMEMAActIdle = 0,
	SMEMAActRun = 1,
	SMEMAActSetSig = 2,
	SMEMAActSetStatSig = 3,
	SMEMAActRstSig = 4,
	SMEMAActRstStatSig = 5,
	SMEMAActSetAllSig = 6,
	SMEMAActRstAllSig = 7,
} eSMEMAAction;
#endif

#ifndef __AS__TYPE_ePneuAction
#define __AS__TYPE_ePneuAction
typedef enum ePneuAction
{	PneuActIdle = 0,
	PneuActSetAll = 1,
	PneuActRstAll = 2,
	PneuActSetExt = 3,
	PneuActSetRet = 4,
	PneuActExt = 5,
	PneuActRet = 6,
	PneuActExtSenToMidSen = 7,
	PneuActMidSenToRetSen = 8,
	PneuActRetSenToMidSen = 9,
	PneuActMidSenToExtSen = 10,
} ePneuAction;
#endif

#ifndef __AS__TYPE_eConvAction
#define __AS__TYPE_eConvAction
typedef enum eConvAction
{	ConvActIdle = 0,
	ConvActInit = 1,
	ConvActInitRev = 2,
	ConvActInitPshr = 3,
	ConvActInitPuller = 4,
	ConvActInitRej = 5,
	ConvActInitInsp = 6,
	ConvActEnt = 7,
	ConvActEntToInOff = 8,
	ConvActEntRev = 9,
	ConvActRev = 10,
	ConvActRevImmedStart = 11,
	ConvActEntPuller = 12,
	ConvActEntRej = 13,
	ConvActEntInsp = 14,
	ConvActPreExit = 15,
	ConvActRejResume = 16,
	ConvActExit = 17,
	ConvActExit1 = 18,
	ConvActExitPshr = 19,
	ConvActExit1Pshr = 20,
	ConvActPshrSetAll = 21,
	ConvActPshrRstAll = 22,
	ConvActPshrSetExt = 23,
	ConvActPshrSetRet = 24,
	ConvActPshrExt = 25,
	ConvActPshrRet = 26,
	ConvActPullerSetAll = 27,
	ConvActPullerRstAll = 28,
	ConvActPullerSetExt = 29,
	ConvActPullerSetRet = 30,
	ConvActPullerExt = 31,
	ConvActPullerRet = 32,
	ConvActRotSetAll = 33,
	ConvActRotRstAll = 34,
	ConvActRotSetHome = 35,
	ConvActRotSetRmt = 36,
	ConvActRotHome = 37,
	ConvActRotRemote = 38,
	ConvActRejSetAll = 39,
	ConvActRejRstAll = 40,
	ConvActRejSetUp = 41,
	ConvActRejSetDown = 42,
	ConvActRejUp = 43,
	ConvActRejDown = 44,
	ConvActStop = 45,
	ConvActStopPshr = 46,
	ConvActStopPuller = 47,
	ConvActStopRej = 48,
	ConvActSetMtrSigOnOrLToR = 49,
	ConvActSetMtrDirOrRToL = 50,
	ConvActRstMtrSigOnOrLToR = 51,
	ConvActRstMtrDirOrRToL = 52,
	ConvActSetMtrAll = 53,
	ConvActRstMtrAll = 54,
} eConvAction;
#endif

#ifndef __AS__TYPE_eAWAction
#define __AS__TYPE_eAWAction
typedef enum eAWAction
{	AWActIdle = 0,
	AWActGoWidth = 1,
	AWActFullHm = 2,
	AWActPwrOn = 3,
	AWActPwrOff = 4,
	AWActHoming = 5,
	AWActMovAbs = 6,
	AWActMovRel = 7,
	AWActJogOpen = 8,
	AWActJogClose = 9,
	AWActJogStop = 10,
	AWActRstAxisErr = 11,
	AWActStop = 12,
	AWActSDOWrite = 13,
	AWActBGStartModOKChk = 14,
	AWActBGStopModOKChk = 15,
	AWActGoWidthOff = 16,
	AWActRstNode = 17,
} eAWAction;
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

#ifndef __AS__TYPE_eHermesAction
#define __AS__TYPE_eHermesAction
typedef enum eHermesAction
{	HermesActIdle = 0,
	HermesActBGStartRun = 1,
	HermesActBGStopRun = 2,
	HermesActDeleteOldLog = 3,
	HermesActCreateDir = 4,
	HermesActWriteRetain = 5,
	HermesActWriteRetainLane1 = 6,
	HermesActWriteRetainLane2 = 7,
	HermesActWriteRetainLane3 = 8,
	HermesActWriteRetainLane4 = 9,
	HermesActReadRetain = 10,
	HermesActReadRetainLane1 = 11,
	HermesActReadRetainLane2 = 12,
	HermesActReadRetainLane3 = 13,
	HermesActReadRetainLane4 = 14,
	HermesActWriteConfig = 15,
	HermesActReadConfig = 16,
} eHermesAction;
#endif

#ifndef __AS__TYPE_tyHermesDSParam
#define __AS__TYPE_tyHermesDSParam
typedef struct tyHermesDSParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	plcstring sDownstreamInterfaceId[81];
	unsigned short uiSvrPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sClientAddress[16];
	unsigned short uiClientPort;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesDSParam;
#endif

#ifndef __AS__TYPE_tyHermesUSParam
#define __AS__TYPE_tyHermesUSParam
typedef struct tyHermesUSParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	unsigned short uiClntPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sHostAddress[16];
	unsigned short uiHostPort;
	plcstring sUpstreamInterfaceId[81];
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureCommand;
	plcbit bCmpTypeId;
	plcbit bCmpParam;
	plcbit bOverwrite;
} tyHermesUSParam;
#endif

#ifndef __AS__TYPE_tyHermesSvyParam
#define __AS__TYPE_tyHermesSvyParam
typedef struct tyHermesSvyParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	unsigned short uiSvySvstemPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sClientAddress[16];
	unsigned short uiClientPort;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
	plcbit bFeatureInsertBrd;
} tyHermesSvyParam;
#endif

#ifndef __AS__TYPE_eLFAction
#define __AS__TYPE_eLFAction
typedef enum eLFAction
{	LFActIdle = 0,
	LFActBGStartRun = 1,
	LFActBGStopRun = 2,
	LFActSyncPLCTm = 3,
	LFActChgAllAuto = 4,
	LFActChgAllMnl = 5,
	LFActChgSeqAuto = 6,
	LFActChgSeqMnl = 7,
} eLFAction;
#endif

#ifndef __AS__TYPE_eOperationsAction
#define __AS__TYPE_eOperationsAction
typedef enum eOperationsAction
{	OperationsActIdle = 0,
	OperationsActStart = 1,
	OperationsActStop = 2,
	OperationsActStep = 3,
	OperationsActError = 4,
} eOperationsAction;
#endif

#ifndef __AS__TYPE_eMotorBrkAction
#define __AS__TYPE_eMotorBrkAction
typedef enum eMotorBrkAction
{	MotorBrkActIdle = 0,
	MotorBrkActCW = 1,
	MotorBrkActCCW = 2,
	MotorBrkActCCWSenToMidSen = 3,
	MotorBrkActMidSenToCWSen = 4,
	MotorBrkActCWSenToMidSen = 5,
	MotorBrkActMidSenToCCWSen = 6,
	MotorBrkActBrkRlsOn = 7,
	MotorBrkActBrkRlsOff = 8,
	MotorBrkActStop = 9,
	MotorBrkActSetMtrSigOnOrCW = 10,
	MotorBrkActSetMtrDirOrCCW = 11,
	MotorBrkActSetMtrBrkRls = 12,
	MotorBrkActRstMtrSigOnOrCW = 13,
	MotorBrkActRstMtrDirOrCCW = 14,
	MotorBrkActRstMtrBrkRls = 15,
	MotorBrkActSetMtrAll = 16,
	MotorBrkActRstMtrAll = 17,
	MotorBrkActSetMtrDirOrCCW1 = 18,
	MotorBrkActRstMtrDirOrCCW1 = 19,
} eMotorBrkAction;
#endif

#ifndef __AS__TYPE_eSimulationsAction
#define __AS__TYPE_eSimulationsAction
typedef enum eSimulationsAction
{	SimulationsActIdle = 0,
	SimulationsActStart = 1,
	SimulationsActStop = 2,
	SimulationsActStep = 3,
	SimulationsActError = 4,
} eSimulationsAction;
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

_BUR_LOCAL eUIAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL eStartupAction eStartupAct;
_BUR_LOCAL eHWInfoAction eHWInfoAct;
_BUR_LOCAL eTLBuzAction eTLBuzAct;
_BUR_LOCAL eRstErrAction eRstErrAct;
_BUR_LOCAL eProdRcpAction eProdRcpAct;
_BUR_LOCAL eMpProdRcpAction eMpProdRcpAct;
_BUR_LOCAL eMcParamAction eMcParamAct;
_BUR_LOCAL eUsrMgmtAction eUsrMgmtAct;
_BUR_LOCAL eSMEMAAction eUSSMEMAAct;
_BUR_LOCAL eSMEMAAction eDSSMEMAAct;
_BUR_LOCAL eSMEMAAction eUSSMEMA2Act;
_BUR_LOCAL ePneuAction eStopperAct;
_BUR_LOCAL eConvAction eConvAct;
_BUR_LOCAL eAWAction eAWOpenAct;
_BUR_LOCAL eMotorBrkAction eInvertAct;
_BUR_LOCAL eOperationsAction eOpsAct;
_BUR_LOCAL eHermesAction eHermesAct;
_BUR_LOCAL eLFAction eLFLeaderAct;
_BUR_LOCAL eDOAction eDOAct;
_BUR_LOCAL ePneuAction eClampAct;
_BUR_LOCAL ePneuAction eInShutterAct;
_BUR_LOCAL ePneuAction eOutShutterAct;
_BUR_LOCAL ePneuAction eClamp1Act;
_BUR_LOCAL ePneuAction eClamp2Act;
_BUR_LOCAL ePneuAction eClamp3Act;
_BUR_LOCAL eSimulationsAction eSimuAct;
_BUR_LOCAL tyMcParam tyMcParamWr;
_BUR_LOCAL tyProdRcpParam tyProdRcpInfoIn;
_BUR_LOCAL tyProdRcpParam tyProdRcpCurrRcpWr;
_BUR_LOCAL plcstring sProdRcpSearch[31];
_BUR_LOCAL plcstring sProdRcpScan[31];
_BUR_LOCAL tyUsrMgmtParam tyUsrMgmtInfoIn;
_BUR_LOCAL tyUsrMgmtAccessRight tyUsrMgmtAccessRightLvl1Wr;
_BUR_LOCAL tyUsrMgmtAccessRight tyUsrMgmtAccessRightLvl2Wr;
_BUR_LOCAL tyUsrMgmtAccessRight tyUsrMgmtAccessRightLvl3Wr;
_BUR_LOCAL struct tyHermesUSParam a_tyHermesUSParamWr[4];
_BUR_LOCAL struct tyHermesDSParam a_tyHermesDSParamWr[4];
_BUR_LOCAL tyHermesSvyParam tyHermesSvyParamWr;
_BUR_LOCAL plcstring sSetIPAddr[16];
_BUR_LOCAL plcstring sSetSubnetMask[16];
_BUR_LOCAL plcbit bManualMod;
_BUR_LOCAL plcbit bUIManualMod;
_BUR_LOCAL plcbit bMuteBuz;
_BUR_LOCAL signed long diMnlAWGoWidth;
_BUR_LOCAL signed long diMnlAWNomSpd;
_BUR_LOCAL signed long diMnlAWTargetPos;
_BUR_LOCAL signed long diMnlAWStepSize;
_BUR_LOCAL signed long diMnlAWJogSpd;
_BUR_LOCAL signed long diMnlInvertNomSpd;
_BUR_LOCAL signed long diMnlInvertTargetPos;
_BUR_LOCAL signed long diMnlInvertStepSize;
_BUR_LOCAL signed long diMnlInvertJogSpd;
_BUR_LOCAL plcbit bVSMEMAUSEn;
_BUR_LOCAL plcbit bVSMEMADSEn;
_BUR_LOCAL plcbit bVSMEMAUBA;
_BUR_LOCAL plcbit bVSMEMAUBAStat;
_BUR_LOCAL plcbit bVSMEMADSB;
_BUR_LOCAL plcbit bVSMEMAUS2En;
_BUR_LOCAL plcbit bVSMEMAUBA2;
_BUR_LOCAL plcbit bVSMEMAUBAStat2;
_BUR_LOCAL plcbit bLeaderRun;
_BUR_LOCAL plcbit bProdAccData;
_BUR_LOCAL plcbit bOpsBypsInitConv;
_BUR_LOCAL plcbit bRlsNewProd;
_BUR_LOCAL plcbit bMnlModMachineSafetySigToDS;
_BUR_LOCAL plcbit bMnlModUnlockCover1Req;
_BUR_LOCAL plcbit bMnlModCoverPBLED1;
_BUR_LOCAL plcbit bMnlModBypassTopCover1;
_BUR_LOCAL plcbit bMnlModTopCoverSwitch1;
_BUR_LOCAL plcbit bRtnBrdReset;
_BUR_LOCAL plcbit bSimuMod;
_BUR_LOCAL plcbit bDSTranErr;
_BUR_LOCAL plcbit bTempAddrFillDone;
_BUR_LOCAL plcbit bMismatchOverWriteConfig;
_BUR_LOCAL plcbit bIPConfigChgDone;
_BUR_LOCAL plcbit bOverwriteIP;
_BUR_LOCAL plcbit bOverwriteSubnet;
_BUR_LOCAL plcbit bOverwriteEthMode;
_BUR_LOCAL unsigned char usiNetworkModeSelected;
_BUR_LOCAL unsigned short uiSongIndex;
_BUR_LOCAL plcbit bSongEn;
_BUR_LOCAL plcbit bCoverPBLED1;
_BUR_LOCAL plcbit bBypassTopCover1;
_BUR_LOCAL plcbit bMachineSafetySigToUS;
_BUR_LOCAL plcbit bMachineSafetySigToDS;
_BUR_LOCAL plcbit bTopCoverSwitchCoil1;
_BUR_LOCAL plcbit bUnlockCover1Req;
_BUR_LOCAL plcbit bSaveHMISvyConfig;
_BUR_LOCAL plcbit bSaveHMIConfigure;
_BUR_LOCAL plcbit bQueryBoardInfo;
_BUR_LOCAL unsigned short c_uiP0200TableSize;
_BUR_LOCAL tyUIP0200OpsGen tyP0200OpsGen;
_BUR_LOCAL tyUIP0931ConvInv tyP0931ConvInv;
_BUR_LOCAL tyUIP1022McSetVComm tyP1022McSetVComm;
_GLOBAL unsigned long p_UIStat;
_GLOBAL unsigned long p_UIStatus;
_GLOBAL unsigned long p_UIStatTxt;
_GLOBAL unsigned long p_UIStartupAct;
_GLOBAL unsigned long p_UIHWInfoAct;
_GLOBAL unsigned long p_UITLBuzAct;
_GLOBAL unsigned long p_UIRstErrAct;
_GLOBAL unsigned long p_UIProdRcpAct;
_GLOBAL unsigned long p_UIMpProdRcpAct;
_GLOBAL unsigned long p_UIMcParamAct;
_GLOBAL unsigned long p_UIUsrMgmtAct;
_GLOBAL unsigned long p_UIUSSMEMAAct;
_GLOBAL unsigned long p_UIDSSMEMAAct;
_GLOBAL unsigned long p_UIUSSMEMA2Act;
_GLOBAL unsigned long p_UIStopperAct;
_GLOBAL unsigned long p_UIConvAct;
_GLOBAL unsigned long p_UIAWOpenAct;
_GLOBAL unsigned long p_UIInvertAct;
_GLOBAL unsigned long p_UIOpsAct;
_GLOBAL unsigned long p_UIHermesAct;
_GLOBAL unsigned long p_UILFLeaderAct;
_GLOBAL unsigned long p_UIDOAct;
_GLOBAL unsigned long p_UIClampAct;
_GLOBAL unsigned long p_UIInShutterAct;
_GLOBAL unsigned long p_UIOutShutterAct;
_GLOBAL unsigned long p_UIClamp1Act;
_GLOBAL unsigned long p_UIClamp2Act;
_GLOBAL unsigned long p_UIClamp3Act;
_GLOBAL unsigned long p_UIMcParamWr;
_GLOBAL unsigned long p_UIProdRcpInfoIn;
_GLOBAL unsigned long p_UIProdRcpSearch;
_GLOBAL unsigned long p_UIProdRcpScan;
_GLOBAL unsigned long p_UIProdRcpCurrRcpWr;
_GLOBAL unsigned long p_UIUsrMgmtInfoIn;
_GLOBAL unsigned long p_UIUsrMgmtAccessRightLvl1Wr;
_GLOBAL unsigned long p_UIUsrMgmtAccessRightLvl2Wr;
_GLOBAL unsigned long p_UIUsrMgmtAccessRightLvl3Wr;
_GLOBAL unsigned long p_UIHermesUSParamWr;
_GLOBAL unsigned long p_UIHermesDSParamWr;
_GLOBAL unsigned long p_UIHermesSvyParamWr;
_GLOBAL unsigned long p_UISetIPAddr;
_GLOBAL unsigned long p_UISetSubnetMask;
_GLOBAL unsigned long p_UINetworkMode;
_GLOBAL unsigned long p_UIMnlMod;
_GLOBAL unsigned long p_UIUIMnlMod;
_GLOBAL unsigned long p_UIMuteBuz;
_GLOBAL unsigned long p_UIMnlAWGoWidth;
_GLOBAL unsigned long p_UIMnlAWNomSpd;
_GLOBAL unsigned long p_UIMnlAWTargetPos;
_GLOBAL unsigned long p_UIMnlAWStepSize;
_GLOBAL unsigned long p_UIMnlAWJogSpd;
_GLOBAL unsigned long p_UIMnlInvertNomSpd;
_GLOBAL unsigned long p_UIMnlInvertTargetPos;
_GLOBAL unsigned long p_UIMnlInvertStepSize;
_GLOBAL unsigned long p_UIMnlInvertJogSpd;
_GLOBAL unsigned long p_UIVSMEMAUSEn;
_GLOBAL unsigned long p_UIVSMEMADSEn;
_GLOBAL unsigned long p_UIVSMEMAUBA;
_GLOBAL unsigned long p_UIVSMEMAUBAStat;
_GLOBAL unsigned long p_UIVSMEMADSB;
_GLOBAL unsigned long p_UIVSMEMAUS2En;
_GLOBAL unsigned long p_UIVSMEMAUBA2;
_GLOBAL unsigned long p_UIVSMEMAUBAStat2;
_GLOBAL unsigned long p_UILeaderRun;
_GLOBAL unsigned long p_UIProdAccData;
_GLOBAL unsigned long p_UIOpsBypsInitConv;
_GLOBAL unsigned long p_UIRlsNewProd;
_GLOBAL unsigned long p_UIConvDCCtrl;
_GLOBAL unsigned long p_UIMismatchOverWriteConfig;
_GLOBAL unsigned long p_UITempAddrFillDone;
_GLOBAL unsigned long p_UIIPConfigChgDone;
_GLOBAL unsigned long p_UIOverwriteIP;
_GLOBAL unsigned long p_UIOverwriteSubnet;
_GLOBAL unsigned long p_UIOverwriteEthMode;
_GLOBAL unsigned long p_UISongTitile;
_GLOBAL unsigned long p_UISongPlay;
_GLOBAL unsigned long p_UIBypassTopCover1;
_GLOBAL unsigned long p_UIMachineSafetySigToDS;
_GLOBAL unsigned long p_UIMachineSafetySigToUS;
_GLOBAL unsigned long p_UISafetyTopCoverSWCoil1;
_GLOBAL unsigned long p_UITopCvrUnlckToUS;
_GLOBAL unsigned long p_UITopCvrUnlckToDS;
_GLOBAL unsigned long p_UICoverPBLED1;
_GLOBAL unsigned long p_UIMnlModBypassTopCover1;
_GLOBAL unsigned long p_UIMnlModMachineSafetySigToDS;
_GLOBAL unsigned long p_UIMnlModMachineSafetySigToUS;
_GLOBAL unsigned long p_UIMnlModSafetyTopCoverSWCoil1;
_GLOBAL unsigned long p_UIMnlModTopCvrUnlckToUS;
_GLOBAL unsigned long p_UIMnlModTopCvrUnlckToDS;
_GLOBAL unsigned long p_UIMnlModCoverPBLED1;
_GLOBAL unsigned long p_UIDSTranErr;
_GLOBAL unsigned long p_UIRtnBrdReset;
_GLOBAL unsigned long p_UIRtnBrdResetBtn;
_GLOBAL unsigned long p_UISimuAct;
_GLOBAL unsigned long p_UIMnlSimu;
_GLOBAL unsigned long P_UISectionLdr;
_GLOBAL unsigned long p_UISaveHMIConfigure;
_GLOBAL unsigned long p_UISaveHMISvyConfig;
_GLOBAL unsigned long p_UIQueryBoardInfo;
_GLOBAL signed long c_diLFClntNum;
_GLOBAL signed long c_diHermesConfigMaxIdx;
