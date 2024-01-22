#ifndef __AS__TYPE_ePage
#define __AS__TYPE_ePage
typedef enum ePage
{	UIP0000SSaver = 0,
	UIP0001Startup = 1,
	UIP0002Menu = 2,
	UIP0100Login = 100,
	UIP0200OpsGen = 200,
	UIP0201OpsConv = 201,
	UIP0300McInfo = 300,
	UIP0400ProdSel = 400,
	UIP0600Alm = 600,
	UIP0700LFCtrl = 700,
	UIP0900GenIn = 900,
	UIP0910GenOut = 910,
	UIP0920MtrNPneuCtrl = 920,
	UIP0921ClampNoRS = 921,
	UIP0922Shutter = 922,
	UIP0923Stopper = 923,
	UIP0924ClampWithRS = 924,
	UIP0931ConvInv = 931,
	UIP0934AW = 934,
	UIP0940CommCtrl = 940,
	UIP0950Simu = 950,
	UIP1000Lang = 1000,
	UIP1020McSetNavi = 1020,
	UIP1021McSetGen = 1021,
	UIP1022McSetVComm = 1022,
	UIP1023McSetHComm = 1023,
	UIP1024McSetAntiGap = 1024,
	UIP1040ProdSet = 1040,
	UIP1050LFSet = 1050,
	UIP1080UsrMgmt = 1080,
	UIP1081UsrMgmtUsrAccessRgt = 1081,
} ePage;
#endif

#ifndef __AS__TYPE_tyTable
#define __AS__TYPE_tyTable
typedef struct tyTable
{	plcbit bSliderActive;
	plcbit bTableActive;
	plcstring sVisuNm[81];
	unsigned short uiSelectedRow;
	unsigned short uiSelectedRowOld;
	unsigned short uiTablePos;
} tyTable;
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

#ifndef __AS__TYPE_tyUILyr
#define __AS__TYPE_tyUILyr
typedef struct tyUILyr
{	unsigned short uiRtStat;
} tyUILyr;
#endif

#ifndef __AS__TYPE_tyLyrP0000SSaver
#define __AS__TYPE_tyLyrP0000SSaver
typedef struct tyLyrP0000SSaver
{	tyUITxt tyTxtMcStat;
	tyUILString tyTxtMcNm;
	tyUIBitmap tyBitmapStat;
	tyUILyr tyLyr;
} tyLyrP0000SSaver;
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

#ifndef __AS__TYPE_tyUIP0000SSaver
#define __AS__TYPE_tyUIP0000SSaver
typedef struct tyUIP0000SSaver
{	tyLyrP0000SSaver tySSaver;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxLoginAsk;
} tyUIP0000SSaver;
#endif

#ifndef __AS__TYPE_tyUIBarGraph
#define __AS__TYPE_tyUIBarGraph
typedef struct tyUIBarGraph
{	signed short iValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUIBarGraph;
#endif

#ifndef __AS__TYPE_tyLyrP0001Startup
#define __AS__TYPE_tyLyrP0001Startup
typedef struct tyLyrP0001Startup
{	tyUIBarGraph tyBarGraphStartup;
	tyUITxt tyTxtStartupStat;
	tyUILyr tyLyr;
} tyLyrP0001Startup;
#endif

#ifndef __AS__TYPE_tyLyrP0001Initial
#define __AS__TYPE_tyLyrP0001Initial
typedef struct tyLyrP0001Initial
{	tyUILyr tyLyr;
} tyLyrP0001Initial;
#endif

#ifndef __AS__TYPE_tyUIP0001Startup
#define __AS__TYPE_tyUIP0001Startup
typedef struct tyUIP0001Startup
{	tyLyrP0001Startup tyStartup;
	tyLyrP0001Initial tyInitial;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxIPConfig;
} tyUIP0001Startup;
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

#ifndef __AS__TYPE_tyLyrP0002Menu
#define __AS__TYPE_tyLyrP0002Menu
typedef struct tyLyrP0002Menu
{	tyUIBtn tyBtnAlm;
	tyUIBtn tyBtnCommCtrl;
	tyUIBtn tyBtnGenInput;
	tyUIBtn tyBtnGenOutput;
	tyUIBtn tyBtnLang;
	tyUIBtn tyBtnLFCtrl;
	tyUIBtn tyBtnLFSet;
	tyUIBtn tyBtnLogin;
	tyUIBtn tyBtnMcInfo;
	tyUIBtn tyBtnMcSet;
	tyUIBtn tyBtnMnlRst;
	tyUIBtn tyBtnMovCtrl;
	tyUIBtn tyBtnOpt;
	tyUIBtn tyBtnProdSel;
	tyUIBtn tyBtnProdSet;
	tyUIBtn tyBtnSimu;
	tyUIBtn tyBtnUsrMgmt;
	tyUIBitmap tyBitmapMaskProdSetLCS;
	tyUILyr tyGenMaskLyr;
	tyUILyr tySetMaskLyr;
	tyUIHotspot tyHotspotRstRtnBrd;
} tyLyrP0002Menu;
#endif

#ifndef __AS__TYPE_tyUIP0002Menu
#define __AS__TYPE_tyUIP0002Menu
typedef struct tyUIP0002Menu
{	tyLyrP0002Menu tyMenu;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxSelRcpWaitingBrd;
} tyUIP0002Menu;
#endif

#ifndef __AS__TYPE_tyUIString
#define __AS__TYPE_tyUIString
typedef struct tyUIString
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcstring sValue[31];
	plcstring sValueDisplay[11];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	plcstring sKeypadTitle[31];
} tyUIString;
#endif

#ifndef __AS__TYPE_tyLyrP0100Login
#define __AS__TYPE_tyLyrP0100Login
typedef struct tyLyrP0100Login
{	tyUIBtn tyBtnLogin;
	tyUIHotspot tyHotspotShowLoginLvl;
	tyUIHotspot tyHotspotBypassLogin;
	tyUIString tyStringPw;
	tyUIString tyStringUsrNm;
	tyUILyr tyLyr;
} tyLyrP0100Login;
#endif

#ifndef __AS__TYPE_tyLyrP0100Logout
#define __AS__TYPE_tyLyrP0100Logout
typedef struct tyLyrP0100Logout
{	tyUIBtn tyBtnLogout;
	tyUILyr tyLyr;
} tyLyrP0100Logout;
#endif

#ifndef __AS__TYPE_tyUIP0100Login
#define __AS__TYPE_tyUIP0100Login
typedef struct tyUIP0100Login
{	tyLyrP0100Login tyLogin;
	tyLyrP0100Logout tyLogout;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxNmNotExist;
	tyLyrC0008MsgBox tyMsgBoxPwMismatch;
} tyUIP0100Login;
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

#ifndef __AS__TYPE_tyLyrP0201OpsConv
#define __AS__TYPE_tyLyrP0201OpsConv
typedef struct tyLyrP0201OpsConv
{	tyUIBitmap tyBitmapAccDat;
	tyUIBitmap tyBitmapRlsNewProd;
	tyUIBitmap tyBitmapConvPCB;
	tyUIBitmap tyBitmapBypassTopCover1;
	tyUIBtn tyBtnAccDat;
	tyUIBtn tyBtnRlsNewProd;
	tyUIBtn tyBtnChgParam;
	tyUIBtn tyBtnBypassTopCover1;
	tyUIHotspot tyHotspotIOMonitor;
	tyUINum tyNumProdWidth;
	tyUINum tyNumProdWidth2;
	tyUILString tyStringProdNm;
	tyUILString tyStringMcStatus;
	tyUITxt tyTxtMod;
	tyUITxt tyLblFlippedBrd;
	tyUITxt tyTxtFlippedBrd;
	tyUIString tyStringMatchCode;
	tyUITxt tyTxtLdrInActiveCtrl;
	tyUIBitmap tyBitmapWarningLF;
	tyUIBitmap tyBitmapMc;
	tyUILyr tyLyr;
	tyUIHotspot tyHotspotShowLRcp;
} tyLyrP0201OpsConv;
#endif

#ifndef __AS__TYPE_tyLyrP0201OpsConvIOMonitor
#define __AS__TYPE_tyLyrP0201OpsConvIOMonitor
typedef struct tyLyrP0201OpsConvIOMonitor
{	tyUIBtn tyBtnSafetyRlySig;
	tyUIBtn tyBtnEStop;
	tyUIBtn tyBtnCoverSWSig;
	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnDSB;
	tyUIBtn tyBtnConvLftSen;
	tyUIBtn tyBtnConvRgtSen;
	tyUIBtn tyBtnPressureSW;
	tyUIBtn tyBtnThermalPrtSig;
	tyUIBtn tyBtnCoatingSen;
	tyUIBtn tyBtnUSWidthChkSen;
	tyUIBtn tyBtnDSWidthChkSen;
	tyUIBtn tyBtnInvertHomeSen;
	tyUIBtn tyBtnInvertRemoteSen;
	tyUIBtn tyBtnInletShutterOpenRS;
	tyUIBtn tyBtnInletShutterCloseRS;
	tyUIBtn tyBtnOutletShutterOpenRS;
	tyUIBtn tyBtnOutletShutterCloseRS;
	tyUIBtn tyBtnSafetyRlyRst;
	tyUIBtn tyBtnTLGreen;
	tyUIBtn tyBtnTLAmber;
	tyUIBtn tyBtnTLRed;
	tyUIBtn tyBtnTLWhite;
	tyUIBtn tyBtnTLBlue;
	tyUIBtn tyBtnBuzzer;
	tyUIBtn tyBtnCoatingRetCtrl;
	tyUIBtn tyBtnUSB;
	tyUIBtn tyBtnDBA;
	tyUIBtn tyBtnDBAStat;
	tyUIBtn tyBtnConvMtrCW;
	tyUIBtn tyBtnConvMtrCCW;
	tyUIBtn tyBtnStprUnblkCtrl;
	tyUIBtn tyBtnStprBlkCtrl;
	tyUIBtn tyBtnInvertHome;
	tyUIBtn tyBtnInvertRemote;
	tyUIBtn tyBtnInvertBrake;
	tyUIBtn tyBtnMtrPwrRly;
	tyUIBtn tyBtnClampCtrl;
	tyUIBtn tyBtnUnclampCtrl;
	tyUIBtn tyBtnInShutterOpenCtrl;
	tyUIBtn tyBtnInShutterCloseCtrl;
	tyUIBtn tyBtnOutShutterOpenCtrl;
	tyUIBtn tyBtnOutShutterCloseCtrl;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrP0201OpsConvIOMonitor;
#endif

#ifndef __AS__TYPE_tyLyrP0201OpsConvIOMonitorXStd
#define __AS__TYPE_tyLyrP0201OpsConvIOMonitorXStd
typedef struct tyLyrP0201OpsConvIOMonitorXStd
{	tyUIBtn tyBtnSafetyRlySig;
	tyUIBtn tyBtnEStop;
	tyUIBtn tyBtnCoverSWSig;
	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnDSB;
	tyUIBtn tyBtnUBA2;
	tyUIBtn tyBtnUBAStat2;
	tyUIBtn tyBtnConvLftSen;
	tyUIBtn tyBtnConvRgtSen;
	tyUIBtn tyBtnPressureSW;
	tyUIBtn tyBtnThermalPrtSig;
	tyUIBtn tyBtnCoatingSen;
	tyUIBtn tyBtnUSWidthChkSen;
	tyUIBtn tyBtnDSWidthChkSen;
	tyUIBtn tyBtnInvertHomeSen;
	tyUIBtn tyBtnInvertRemoteSen;
	tyUIBtn tyBtnInletShutterOpenRS;
	tyUIBtn tyBtnInletShutterCloseRS;
	tyUIBtn tyBtnOutletShutterOpenRS;
	tyUIBtn tyBtnOutletShutterCloseRS;
	tyUIBtn tyBtnClamp2Sen;
	tyUIBtn tyBtnClamp3Sen;
	tyUIBtn tyBtnClampRS1;
	tyUIBtn tyBtnUnClampRS1;
	tyUIBtn tyBtnClampRS2;
	tyUIBtn tyBtnUnClampRS2;
	tyUIBtn tyBtnClampRS3;
	tyUIBtn tyBtnUnClampRS3;
	tyUIBtn tyBtnSafetyRlyRst;
	tyUIBtn tyBtnTLGreen;
	tyUIBtn tyBtnTLAmber;
	tyUIBtn tyBtnTLRed;
	tyUIBtn tyBtnTLWhite;
	tyUIBtn tyBtnTLBlue;
	tyUIBtn tyBtnBuzzer;
	tyUIBtn tyBtnCoatingRetCtrl;
	tyUIBtn tyBtnUSB;
	tyUIBtn tyBtnDBA;
	tyUIBtn tyBtnDBAStat;
	tyUIBtn tyBtnUSB2;
	tyUIBtn tyBtnConvMtrCW;
	tyUIBtn tyBtnConvMtrCCW;
	tyUIBtn tyBtnInvertHome;
	tyUIBtn tyBtnInvertRemote;
	tyUIBtn tyBtnInvertBrake;
	tyUIBtn tyBtnMtrPwrRly;
	tyUIBtn tyBtnInShutterOpenCtrl;
	tyUIBtn tyBtnInShutterCloseCtrl;
	tyUIBtn tyBtnOutShutterOpenCtrl;
	tyUIBtn tyBtnOutShutterCloseCtrl;
	tyUIBtn tyBtnClamp1Ctrl;
	tyUIBtn tyBtnUnclamp1Ctrl;
	tyUIBtn tyBtnClamp2Ctrl;
	tyUIBtn tyBtnUnclamp2Ctrl;
	tyUIBtn tyBtnClamp3Ctrl;
	tyUIBtn tyBtnUnclamp3Ctrl;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrP0201OpsConvIOMonitorXStd;
#endif

#ifndef __AS__TYPE_tyLyrP0201OpsConvIOMonitorMSafe
#define __AS__TYPE_tyLyrP0201OpsConvIOMonitorMSafe
typedef struct tyLyrP0201OpsConvIOMonitorMSafe
{	tyUIBtn tyBtnSafetyRlySig;
	tyUIBtn tyBtnEStop;
	tyUIBtn tyBtnCoverSWSig;
	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnDSB;
	tyUIBtn tyBtnConvLftSen;
	tyUIBtn tyBtnConvRgtSen;
	tyUIBtn tyBtnPressureSW;
	tyUIBtn tyBtnThermalPrtSig;
	tyUIBtn tyBtnCoatingSen;
	tyUIBtn tyBtnUSWidthChkSen;
	tyUIBtn tyBtnDSWidthChkSen;
	tyUIBtn tyBtnInvertHomeSen;
	tyUIBtn tyBtnInvertRemoteSen;
	tyUIBtn tyBtnInletShutterOpenRS;
	tyUIBtn tyBtnInletShutterCloseRS;
	tyUIBtn tyBtnOutletShutterOpenRS;
	tyUIBtn tyBtnOutletShutterCloseRS;
	tyUIBtn tyBtnClamp2Sen;
	tyUIBtn tyBtnClamp3Sen;
	tyUIBtn tyBtnClampRS1;
	tyUIBtn tyBtnUnClampRS1;
	tyUIBtn tyBtnClampRS2;
	tyUIBtn tyBtnUnClampRS2;
	tyUIBtn tyBtnClampRS3;
	tyUIBtn tyBtnUnClampRS3;
	tyUIBtn tyBtnCoverSWSig2;
	tyUIBtn tyBtnSafetySigFromUS;
	tyUIBtn tyBtnSafetySigFromDS;
	tyUIBtn tyBtnUnlockCoverSigFromUS;
	tyUIBtn tyBtnUnlockCoverSigFromDS;
	tyUIBtn tyBtnCoverUnlockPB1;
	tyUIBtn tyBtnSafetyRlyRst;
	tyUIBtn tyBtnTLGreen;
	tyUIBtn tyBtnTLAmber;
	tyUIBtn tyBtnTLRed;
	tyUIBtn tyBtnTLWhite;
	tyUIBtn tyBtnTLBlue;
	tyUIBtn tyBtnBuzzer;
	tyUIBtn tyBtnCoatingRetCtrl;
	tyUIBtn tyBtnUSB;
	tyUIBtn tyBtnDBA;
	tyUIBtn tyBtnDBAStat;
	tyUIBtn tyBtnConvMtrCW;
	tyUIBtn tyBtnConvMtrCCW;
	tyUIBtn tyBtnInvertHome;
	tyUIBtn tyBtnInvertRemote;
	tyUIBtn tyBtnInvertBrake;
	tyUIBtn tyBtnMtrPwrRly;
	tyUIBtn tyBtnInShutterOpenCtrl;
	tyUIBtn tyBtnInShutterCloseCtrl;
	tyUIBtn tyBtnOutShutterOpenCtrl;
	tyUIBtn tyBtnOutShutterCloseCtrl;
	tyUIBtn tyBtnClamp1Ctrl;
	tyUIBtn tyBtnUnclamp1Ctrl;
	tyUIBtn tyBtnClamp2Ctrl;
	tyUIBtn tyBtnUnclamp2Ctrl;
	tyUIBtn tyBtnClamp3Ctrl;
	tyUIBtn tyBtnUnclamp3Ctrl;
	tyUIBtn tyBtnTopCvrUnlckToDS;
	tyUIBtn tyBtnTopCvrUnlckToUS;
	tyUIBtn tyBtniMachineSafetySigToDS;
	tyUIBtn tyBtnMachineSafetySigToUS;
	tyUIBtn tyBtnPBLED1;
	tyUIBtn tyBtnBypassTopCover1;
	tyUIBtn tyBtnSafetyTopCoverSWCoil1;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrP0201OpsConvIOMonitorMSafe;
#endif

#ifndef __AS__TYPE_tyUIDrpDn
#define __AS__TYPE_tyUIDrpDn
typedef struct tyUIDrpDn
{	unsigned char a_usiValueOptionIdx[10];
	plcbit bRtCompl;
	plcbit bRtLk;
	plcstring sTxt[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiDisabledColor;
	unsigned char usiDropdownColor;
	unsigned char usiSelectedColor;
	unsigned char usiValueIdx;
	unsigned char usiValueMaxIdx;
	unsigned char usiValueMinIdx;
} tyUIDrpDn;
#endif

#ifndef __AS__TYPE_tyLyrP0201OpsConvChgParam
#define __AS__TYPE_tyLyrP0201OpsConvChgParam
typedef struct tyLyrP0201OpsConvChgParam
{	tyUIDrpDn tyDrpDnMcMode;
	tyUIDrpDn tyDrpDnFlippedBrd;
	tyUINum tyNumProdWidth;
	tyUIBtn tyBtnSave;
	tyUIBtn tyBtnCancel;
	tyUILyr tyLyr;
} tyLyrP0201OpsConvChgParam;
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

#ifndef __AS__TYPE_tyLyrC0012RcpPopUp
#define __AS__TYPE_tyLyrC0012RcpPopUp
typedef struct tyLyrC0012RcpPopUp
{	tyUILString tyStringInfo;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrC0012RcpPopUp;
#endif

#ifndef __AS__TYPE_tyUIP0201OpsConv
#define __AS__TYPE_tyUIP0201OpsConv
typedef struct tyUIP0201OpsConv
{	tyLyrP0201OpsConv tyOps;
	tyLyrP0201OpsConvIOMonitor tyIOMonitor;
	tyLyrP0201OpsConvIOMonitorXStd tyIOMonitorXStd;
	tyLyrP0201OpsConvIOMonitorMSafe tyIOMonitorXStdMachineSafety;
	tyLyrP0200OpsBypsInitConv tyBypsInitConv;
	tyLyrP0201OpsConvChgParam tyChgParam;
	tyLyrP0201OpsConvChgParam tyChgParamBkUp;
	tyLyrC0004Navi tyNaviHide;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0012RcpPopUp tyRcpPopUp;
} tyUIP0201OpsConv;
#endif

#ifndef __AS__TYPE_tyLyrP0300McInfo
#define __AS__TYPE_tyLyrP0300McInfo
typedef struct tyLyrP0300McInfo
{	tyUITxt tyTxtNtAddr;
	tyUIString tyStringMcNm;
	tyUIString tyStringJobNo;
	tyUIString tyStringSoftwareVer;
	tyUIBtn tyBtnPlaySong;
	tyUIDrpDn tyDrpDnSong;
	tyUILyr tyLyr;
} tyLyrP0300McInfo;
#endif

#ifndef __AS__TYPE_tyUIP0300McInfo
#define __AS__TYPE_tyUIP0300McInfo
typedef struct tyUIP0300McInfo
{	tyLyrP0300McInfo tyMcInfo;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0300McInfo;
#endif

#ifndef __AS__TYPE_tyUISlider
#define __AS__TYPE_tyUISlider
typedef struct tyUISlider
{	plcbit bRtCompl;
	plcbit bRtLk;
	signed short iCurrValue;
	signed short iMaxValue;
	signed short iMinValue;
	signed short iValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUISlider;
#endif

#ifndef __AS__TYPE_tyUITable
#define __AS__TYPE_tyUITable
typedef struct tyUITable
{	struct tyUIHotspot a_tyHotspot[15];
	struct tyUILString a_tyStringDataCol0[15];
	struct tyUILString a_tyStringDataCol1[15];
	struct tyUILString a_tyStringDataCol2[15];
	struct tyUILString a_tyStringDataCol3[15];
	struct tyUILString a_tyStringDataCol4[15];
	tyUISlider tyUISlider;
	tyUIString tyStringTitle0Col0Row0;
	tyUIString tyStringTitle1Col1Row0;
	tyUIString tyStringTitle2Col2Row0;
	tyUIString tyStringTitle3Col3Row0;
	tyUIString tyStringTitle4Col4Row0;
	unsigned short uiMaskRtStat;
} tyUITable;
#endif

#ifndef __AS__TYPE_tyLyrP0400ProdSel
#define __AS__TYPE_tyLyrP0400ProdSel
typedef struct tyLyrP0400ProdSel
{	tyUIBtn tyBtnLoad;
	tyUIBtn tyBtnPreview;
	tyUINum tyNumProdWidth;
	tyUINum tyNumProdWidth2;
	tyUILString tyStringRecipeNm;
	tyUILString tyStringSearch;
	tyUITable tyTableRecipe;
	tyUITxt tyTxtMcMod;
	tyUITxt tyTxtFlippedBrd;
	tyUITxt tyTxtMatchCodeLbl;
	tyUIString tyStringMatchCode;
	tyUIBtn tyBtnSort;
	tyUILyr tyLyr;
	tyUIHotspot tyHotspotShowLRcp;
} tyLyrP0400ProdSel;
#endif

#ifndef __AS__TYPE_tyLyrP0400RcpDet
#define __AS__TYPE_tyLyrP0400RcpDet
typedef struct tyLyrP0400RcpDet
{	tyUIHotspot tyHotspotClose;
	tyUINum tyNumProdWidth;
	tyUINum tyNumProdWidth2;
	tyUILString tyStringRecipeNm;
	tyUITxt tyTxtMcMod;
	tyUITxt tyTxtFlippedBrd;
	tyUITxt tyTxtMatchCodeLbl;
	tyUIString tyStringMatchCode;
	tyUILyr tyLyr;
	tyUIHotspot tyHotspotShowLRcp;
} tyLyrP0400RcpDet;
#endif

#ifndef __AS__TYPE_tyUIP0400ProdSel
#define __AS__TYPE_tyUIP0400ProdSel
typedef struct tyUIP0400ProdSel
{	tyLyrP0400ProdSel tyProdSel;
	tyLyrP0400RcpDet tyRcpDet;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxListErr;
	tyLyrC0008MsgBox tyMsgBoxRcpParamErr;
	tyLyrC0008MsgBox tyMsgBoxLoadErr;
	tyLyrC0008MsgBox tyMsgBoxSelRcpAsk;
	tyLyrC0008MsgBox tyMsgBoxSelRcpNoNm;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0008MsgBox tyMsgBoxGoToLFCtrlAsk;
	tyLyrC0012RcpPopUp tyRcpPopUp;
} tyUIP0400ProdSel;
#endif

#ifndef __AS__TYPE_tyAlm
#define __AS__TYPE_tyAlm
typedef struct tyAlm
{	unsigned char usiColor;
	signed short udiCntrllDp;
	unsigned long udiGrpDp;
	unsigned long udiAlrmDp;
	unsigned long udiPrioDp;
	plcdt udiTimeDp;
	unsigned short uiRtStat;
} tyAlm;
#endif

#ifndef __AS__TYPE_tyUIAlarm
#define __AS__TYPE_tyUIAlarm
typedef struct tyUIAlarm
{	tyAlm tyUIAlmCur;
	tyAlm tyUIAlmHis;
} tyUIAlarm;
#endif

#ifndef __AS__TYPE_tyLyrP0600Alm
#define __AS__TYPE_tyLyrP0600Alm
typedef struct tyLyrP0600Alm
{	tyUIBtn tyBtnHistory;
	tyUIBtn tyBtnCurr;
	struct tyUILString a_tyStringAlm[19];
	struct tyUIHotspot a_tyHotspotAlm[19];
	tyUILyr tyLyr;
	tyUIAlarm tyAlarm;
	tyUIBtn tyBtnHistoryUp;
	tyUIBtn tyBtnHistoryDown;
} tyLyrP0600Alm;
#endif

#ifndef __AS__TYPE_tyUIP0600Alm
#define __AS__TYPE_tyUIP0600Alm
typedef struct tyUIP0600Alm
{	tyLyrP0600Alm tyAlm;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0010RcyMsg tyRcyMsg;
	tyLyrC0010RcyMsg tyRcyMsgHide;
	tyUIBtn tyBtnCurr;
	tyUIBtn tyBtnHistory;
	tyUIAlarm tyAlarm;
} tyUIP0600Alm;
#endif

#ifndef __AS__TYPE_tyUITable1
#define __AS__TYPE_tyUITable1
typedef struct tyUITable1
{	struct tyUIHotspot a_tyHotspot[15];
	struct tyUILString a_tyStringDataCol0[15];
	struct tyUILString a_tyStringDataCol1[15];
	struct tyUILString a_tyStringDataCol2[15];
	struct tyUILString a_tyStringDataCol4[15];
	struct tyUITxt a_tyTxtDataCol3[15];
	tyUIString tyStringTitle0Col0Row0;
	tyUIString tyStringTitle1Col1Row0;
	tyUIString tyStringTitle2Col2Row0;
	tyUIString tyStringTitle3Col3Row0;
	tyUIString tyStringTitle4Col4Row0;
	tyUISlider tyUISlider;
	unsigned short uiMaskRtStat;
} tyUITable1;
#endif

#ifndef __AS__TYPE_tyLyrP0700LFCtrl
#define __AS__TYPE_tyLyrP0700LFCtrl
typedef struct tyLyrP0700LFCtrl
{	tyUIBtn tyBtnChgAll;
	tyUIBtn tyBtnChgSeqAuto;
	tyUIBtn tyBtnChgSeqMnl;
	tyUIBtn tyBtnSyncTm;
	tyUIBitmap tyBitmapChgAll;
	tyUIBitmap tyBitmapChgSeqAuto;
	tyUIBitmap tyBitmapChgSeqMnl;
	tyUIBitmap tyBitmapSyncTm;
	tyUITable1 tyTable1List;
	tyUILyr tyLyr;
} tyLyrP0700LFCtrl;
#endif

#ifndef __AS__TYPE_tyUIP0700LFCtrl
#define __AS__TYPE_tyUIP0700LFCtrl
typedef struct tyUIP0700LFCtrl
{	tyLyrP0700LFCtrl tyLdr;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxChgAllAsk;
	tyLyrC0008MsgBox tyMsgBoxChgSeqAutoAsk;
	tyLyrC0008MsgBox tyMsgBoxChgSeqMnlAsk;
	tyLyrC0008MsgBox tyMsgBoxSyncPLCTmAsk;
	tyLyrC0008MsgBox tyMsgBoxTerminateOpsAsk;
	tyLyrC0008MsgBox tyMsgBoxErrorAsk;
} tyUIP0700LFCtrl;
#endif

#ifndef __AS__TYPE_tyLyrP0900GenIn
#define __AS__TYPE_tyLyrP0900GenIn
typedef struct tyLyrP0900GenIn
{	tyUIBtn tyBtnEStop;
	tyUIBtn tyBtnCoverSW;
	tyUIBtn tyBtnSafety;
	tyUILyr tyLyr;
	tyUIBtn tyBtnUSWidthChkSen;
	tyUIBtn tyBtnDSWidthChkSen;
	tyUIBtn tyBtnPressureSW;
	tyUIBtn tyBtnThermalPrtSig;
	tyUIBtn tyBtnUnlkCovPB;
	tyUIBtn tyBtnSafetySigFromUS;
	tyUIBtn tyBtnSafetySigFromDS;
	tyUIBtn tyBtnUlkCoverFromDS;
	tyUIBtn tyBtnUlkCoverFromUS;
	tyUIBtn tyBtnTopCovSwSIg;
	tyUILyr tySigLyr;
	tyUILyr tyWidthChkLyr;
	tyUILyr tyMachSafetyLyr;
} tyLyrP0900GenIn;
#endif

#ifndef __AS__TYPE_tyUIP0900GenIn
#define __AS__TYPE_tyUIP0900GenIn
typedef struct tyUIP0900GenIn
{	tyLyrP0900GenIn tyGenIn;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0900GenIn;
#endif

#ifndef __AS__TYPE_tyLyrP0910GenOut
#define __AS__TYPE_tyLyrP0910GenOut
typedef struct tyLyrP0910GenOut
{	tyUIBtn tyBtnTLGreen;
	tyUIBtn tyBtnTLAmber;
	tyUIBtn tyBtnTLRed;
	tyUIBtn tyBtnTLRed1;
	tyUIBtn tyBtnTLBlue;
	tyUIBtn tyBtnTLWhite;
	tyUIBtn tyBtnBuzzer;
	tyUIBtn tyBtnSafety;
	tyUIBtn tyBtnUlkCovPBLED;
	tyUIBtn tyBtnUlkCovHoldRely;
	tyUIBtn tyBtnSftUlkCovSWCoil;
	tyUIBtn tyBtnTopCovUlkUSDS;
	tyUIBtn tyBtnSftSigToUSDS;
	tyUILyr tyUlkCovLyr;
	tyUILyr tyMacSafetyLyr;
	tyUILyr tyLyr;
	tyUILyr tyTLLyr;
} tyLyrP0910GenOut;
#endif

#ifndef __AS__TYPE_tyUIP0910GenOut
#define __AS__TYPE_tyUIP0910GenOut
typedef struct tyUIP0910GenOut
{	tyLyrP0910GenOut tyGenOut;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0910GenOut;
#endif

#ifndef __AS__TYPE_tyLyrP0920MtrNPneuCtrl
#define __AS__TYPE_tyLyrP0920MtrNPneuCtrl
typedef struct tyLyrP0920MtrNPneuCtrl
{	tyUIBtn tyBtnAW;
	tyUIBitmap tyBitmapAW;
	tyUIBtn tyBtnShutter;
	tyUIBitmap tyBitmapShutter;
	tyUIBtn tyBtnClampNoRS;
	tyUIBtn tyBtnClampWithRS;
	tyUIBtn tyBtnStopper;
	tyUIBtn tyBtnConv;
	tyUIBitmap tyBitmapConv;
	tyUILyr tyLyr;
} tyLyrP0920MtrNPneuCtrl;
#endif

#ifndef __AS__TYPE_tyLyrC0002FullMask
#define __AS__TYPE_tyLyrC0002FullMask
typedef struct tyLyrC0002FullMask
{	tyUIBtn tyBtnMask;
	tyUILyr tyLyr;
} tyLyrC0002FullMask;
#endif

#ifndef __AS__TYPE_tyUIP0920MtrNPneuCtrl
#define __AS__TYPE_tyUIP0920MtrNPneuCtrl
typedef struct tyUIP0920MtrNPneuCtrl
{	tyLyrP0920MtrNPneuCtrl tyMtrNPneuCtrl;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0920MtrNPneuCtrl;
#endif

#ifndef __AS__TYPE_tyLyrP0921ClampNoRSCom
#define __AS__TYPE_tyLyrP0921ClampNoRSCom
typedef struct tyLyrP0921ClampNoRSCom
{	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnDCCtrl;
	tyUIBtn tyBtnExtRS;
	tyUIBtn tyBtnRetRS;
	tyUITxt tyTxtSubTitle;
	tyUILyr tyLyr;
} tyLyrP0921ClampNoRSCom;
#endif

#ifndef __AS__TYPE_tyLyrP0921ClampNoRSDC
#define __AS__TYPE_tyLyrP0921ClampNoRSDC
typedef struct tyLyrP0921ClampNoRSDC
{	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0921ClampNoRSDC;
#endif

#ifndef __AS__TYPE_tyLyrP0921ClampNoRSFB
#define __AS__TYPE_tyLyrP0921ClampNoRSFB
typedef struct tyLyrP0921ClampNoRSFB
{	tyUILString tyStringStat;
	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0921ClampNoRSFB;
#endif

#ifndef __AS__TYPE_tyUIP0921ClampNoRS
#define __AS__TYPE_tyUIP0921ClampNoRS
typedef struct tyUIP0921ClampNoRS
{	tyLyrP0921ClampNoRSCom tyCom;
	tyLyrP0921ClampNoRSDC tyDC;
	tyLyrP0921ClampNoRSFB tyFB;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0921ClampNoRS;
#endif

#ifndef __AS__TYPE_tyLyrP0922InletShutterCom
#define __AS__TYPE_tyLyrP0922InletShutterCom
typedef struct tyLyrP0922InletShutterCom
{	tyUIBtn tyBtnSwitch;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnOpenRS;
	tyUIBtn tyBtnCloseRS;
	tyUILyr tyLyr;
} tyLyrP0922InletShutterCom;
#endif

#ifndef __AS__TYPE_tyLyrP0922InletShutterDC
#define __AS__TYPE_tyLyrP0922InletShutterDC
typedef struct tyLyrP0922InletShutterDC
{	tyUIBtn tyBtnOpen;
	tyUIBtn tyBtnClose;
	tyUILyr tyLyr;
} tyLyrP0922InletShutterDC;
#endif

#ifndef __AS__TYPE_tyLyrP0922InletShutterFB
#define __AS__TYPE_tyLyrP0922InletShutterFB
typedef struct tyLyrP0922InletShutterFB
{	tyUILString tyStringStat;
	tyUIBtn tyBtnOpen;
	tyUIBtn tyBtnClose;
	tyUILyr tyLyr;
} tyLyrP0922InletShutterFB;
#endif

#ifndef __AS__TYPE_tyLyrP0922InletShutterDis
#define __AS__TYPE_tyLyrP0922InletShutterDis
typedef struct tyLyrP0922InletShutterDis
{	tyUILyr tyLyr;
} tyLyrP0922InletShutterDis;
#endif

#ifndef __AS__TYPE_tyLyrP0922OutletShutterCom
#define __AS__TYPE_tyLyrP0922OutletShutterCom
typedef struct tyLyrP0922OutletShutterCom
{	tyUIBtn tyBtnSwitch;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnOpenRS;
	tyUIBtn tyBtnCloseRS;
	tyUILyr tyLyr;
} tyLyrP0922OutletShutterCom;
#endif

#ifndef __AS__TYPE_tyLyrP0922OutletShutterDC
#define __AS__TYPE_tyLyrP0922OutletShutterDC
typedef struct tyLyrP0922OutletShutterDC
{	tyUIBtn tyBtnOpen;
	tyUIBtn tyBtnClose;
	tyUILyr tyLyr;
} tyLyrP0922OutletShutterDC;
#endif

#ifndef __AS__TYPE_tyLyrP0922OutletShutterFB
#define __AS__TYPE_tyLyrP0922OutletShutterFB
typedef struct tyLyrP0922OutletShutterFB
{	tyUILString tyStringStat;
	tyUIBtn tyBtnOpen;
	tyUIBtn tyBtnClose;
	tyUILyr tyLyr;
} tyLyrP0922OutletShutterFB;
#endif

#ifndef __AS__TYPE_tyLyrP0922OutletShutterDis
#define __AS__TYPE_tyLyrP0922OutletShutterDis
typedef struct tyLyrP0922OutletShutterDis
{	tyUILyr tyLyr;
} tyLyrP0922OutletShutterDis;
#endif

#ifndef __AS__TYPE_tyLyrC0003DualMask
#define __AS__TYPE_tyLyrC0003DualMask
typedef struct tyLyrC0003DualMask
{	tyUIBtn tyBtnLeftMask;
	tyUIBtn tyBtnRgtMask;
	tyUILyr tyLyr;
} tyLyrC0003DualMask;
#endif

#ifndef __AS__TYPE_tyUIP0922InletNOutletShutter
#define __AS__TYPE_tyUIP0922InletNOutletShutter
typedef struct tyUIP0922InletNOutletShutter
{	tyLyrP0922InletShutterCom tyInletShutterCom;
	tyLyrP0922InletShutterDC tyInletShutterDC;
	tyLyrP0922InletShutterFB tyInletShutterFB;
	tyLyrP0922InletShutterDis tyInletShutterDis;
	tyLyrP0922OutletShutterCom tyOutletShutterCom;
	tyLyrP0922OutletShutterDC tyOutletShutterDC;
	tyLyrP0922OutletShutterFB tyOutletShutterFB;
	tyLyrP0922OutletShutterDis tyOutletShutterDis;
	tyLyrC0003DualMask tyDualMaskHide;
	tyLyrC0003DualMask tyDualMaskEStop;
	tyLyrC0003DualMask tyDualMaskCWSig;
	tyLyrC0003DualMask tyDualMaskSafetyRly;
	tyLyrC0003DualMask tyDualMaskAWMovInterrupt;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0922InletNOutletShutter;
#endif

#ifndef __AS__TYPE_tyLyrP0923StopperCom
#define __AS__TYPE_tyLyrP0923StopperCom
typedef struct tyLyrP0923StopperCom
{	tyUIBtn tyBtnDCCtrl;
	tyUIBitmap tyBitmapMc;
	tyUILyr tyLyr;
} tyLyrP0923StopperCom;
#endif

#ifndef __AS__TYPE_tyLyrP0923StopperDC
#define __AS__TYPE_tyLyrP0923StopperDC
typedef struct tyLyrP0923StopperDC
{	tyUIBtn tyBtnExtend;
	tyUIBtn tyBtnRetract;
	tyUILyr tyLyr;
} tyLyrP0923StopperDC;
#endif

#ifndef __AS__TYPE_tyLyrP0923StopperFB
#define __AS__TYPE_tyLyrP0923StopperFB
typedef struct tyLyrP0923StopperFB
{	tyUIBtn tyBtnExtend;
	tyUIBtn tyBtnRetract;
	tyUILString tyStringStat;
	tyUILyr tyLyr;
} tyLyrP0923StopperFB;
#endif

#ifndef __AS__TYPE_tyUIP0923Stopper
#define __AS__TYPE_tyUIP0923Stopper
typedef struct tyUIP0923Stopper
{	tyLyrP0923StopperCom tyCom;
	tyLyrP0923StopperDC tyDC;
	tyLyrP0923StopperFB tyFB;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0923Stopper;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp1WithRSCom
#define __AS__TYPE_tyLyrP0924Clamp1WithRSCom
typedef struct tyLyrP0924Clamp1WithRSCom
{	tyUIBtn tyBtnSwitch;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnClampRS;
	tyUIBtn tyBtnUnClampRS;
	tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSCom;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp1WithRSDC
#define __AS__TYPE_tyLyrP0924Clamp1WithRSDC
typedef struct tyLyrP0924Clamp1WithRSDC
{	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSDC;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp1WithRSFB
#define __AS__TYPE_tyLyrP0924Clamp1WithRSFB
typedef struct tyLyrP0924Clamp1WithRSFB
{	tyUILString tyStringStat;
	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSFB;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp1WithRSDis
#define __AS__TYPE_tyLyrP0924Clamp1WithRSDis
typedef struct tyLyrP0924Clamp1WithRSDis
{	tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSDis;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp2WithRSCom
#define __AS__TYPE_tyLyrP0924Clamp2WithRSCom
typedef struct tyLyrP0924Clamp2WithRSCom
{	tyUIBtn tyBtnSwitch;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnClampRS;
	tyUIBtn tyBtnUnClampRS;
	tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSCom;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp2WithRSDC
#define __AS__TYPE_tyLyrP0924Clamp2WithRSDC
typedef struct tyLyrP0924Clamp2WithRSDC
{	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSDC;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp2WithRSFB
#define __AS__TYPE_tyLyrP0924Clamp2WithRSFB
typedef struct tyLyrP0924Clamp2WithRSFB
{	tyUILString tyStringStat;
	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSFB;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp2WithRSDis
#define __AS__TYPE_tyLyrP0924Clamp2WithRSDis
typedef struct tyLyrP0924Clamp2WithRSDis
{	tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSDis;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp3WithRSCom
#define __AS__TYPE_tyLyrP0924Clamp3WithRSCom
typedef struct tyLyrP0924Clamp3WithRSCom
{	tyUIBtn tyBtnSwitch;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnClampRS;
	tyUIBtn tyBtnUnClampRS;
	tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSCom;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp3WithRSDC
#define __AS__TYPE_tyLyrP0924Clamp3WithRSDC
typedef struct tyLyrP0924Clamp3WithRSDC
{	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSDC;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp3WithRSFB
#define __AS__TYPE_tyLyrP0924Clamp3WithRSFB
typedef struct tyLyrP0924Clamp3WithRSFB
{	tyUILString tyStringStat;
	tyUIBtn tyBtnExt;
	tyUIBtn tyBtnRet;
	tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSFB;
#endif

#ifndef __AS__TYPE_tyLyrP0924Clamp3WithRSDis
#define __AS__TYPE_tyLyrP0924Clamp3WithRSDis
typedef struct tyLyrP0924Clamp3WithRSDis
{	tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSDis;
#endif

#ifndef __AS__TYPE_tyUIP0924ClampWithRS
#define __AS__TYPE_tyUIP0924ClampWithRS
typedef struct tyUIP0924ClampWithRS
{	tyLyrP0924Clamp1WithRSCom tyClamp1WithRSCom;
	tyLyrP0924Clamp1WithRSDC tyClamp1WithRSDC;
	tyLyrP0924Clamp1WithRSFB tyClamp1WithRSFB;
	tyLyrP0924Clamp1WithRSDis tyClamp1WithRSDis;
	tyLyrP0924Clamp2WithRSCom tyClamp2WithRSCom;
	tyLyrP0924Clamp2WithRSDC tyClamp2WithRSDC;
	tyLyrP0924Clamp2WithRSFB tyClamp2WithRSFB;
	tyLyrP0924Clamp2WithRSDis tyClamp2WithRSDis;
	tyLyrP0924Clamp3WithRSCom tyClamp3WithRSCom;
	tyLyrP0924Clamp3WithRSDC tyClamp3WithRSDC;
	tyLyrP0924Clamp3WithRSFB tyClamp3WithRSFB;
	tyLyrP0924Clamp3WithRSDis tyClamp3WithRSDis;
	tyLyrC0003DualMask tyDualMaskHide;
	tyLyrC0003DualMask tyDualMaskEStop;
	tyLyrC0003DualMask tyDualMaskCWSig;
	tyLyrC0003DualMask tyDualMaskSafetyRly;
	tyLyrC0003DualMask tyDualMaskAWMovInterrupt;
	tyLyrC0004Navi tyNaviLyr1;
	tyLyrC0004Navi tyNaviLyr2;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0924ClampWithRS;
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

#ifndef __AS__TYPE_tyLyrP0934AW
#define __AS__TYPE_tyLyrP0934AW
typedef struct tyLyrP0934AW
{	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnGo;
	tyUINum tyNumNewWidth;
	tyUILyr tyLyr;
} tyLyrP0934AW;
#endif

#ifndef __AS__TYPE_tyLyrC0001MotionStdAW
#define __AS__TYPE_tyLyrC0001MotionStdAW
typedef struct tyLyrC0001MotionStdAW
{	tyUIBitmap tyBitmapOrigin;
	tyUIBitmap tyBitmapPwr;
	tyUIBitmap tyBitmapRst;
	tyUIBitmap tyBitmapStop;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnOpenLmtSen;
	tyUIBtn tyBtnCloseLmtSen;
	tyUIBtn tyBtnJogOpen;
	tyUIBtn tyBtnJogClose;
	tyUIBtn tyBtnMovAbs;
	tyUIBtn tyBtnMovRel;
	tyUIBtn tyBtnOrigin;
	tyUIBtn tyBtnPwr;
	tyUIBtn tyBtnRst;
	tyUIBtn tyBtnStop;
	tyUINum tyNumCurrPos;
	tyUINum tyNumErrCode;
	tyUINum tyNumNomSpd;
	tyUINum tyNumSlwSpd;
	tyUINum tyNumStepSize;
	tyUINum tyNumTargetPos;
	tyUILString tyStringStat;
	tyUILyr tyLyr;
} tyLyrC0001MotionStdAW;
#endif

#ifndef __AS__TYPE_tyUIP0934AW
#define __AS__TYPE_tyUIP0934AW
typedef struct tyUIP0934AW
{	tyLyrP0934AW tyAW;
	tyLyrC0001MotionStdAW tyMotionStd;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0002FullMask tyFullMaskLftSenInterrupt;
	tyLyrC0002FullMask tyFullMaskRgtSenInterrupt;
	tyLyrC0002FullMask tyFullMaskInletShutterInterrupt;
	tyLyrC0002FullMask tyFullMaskOutletShutterInterrupt;
	tyLyrC0002FullMask tyFullMaskHomeSenInterrupt;
	tyLyrC0002FullMask tyFullMaskRemoteSenInterrupt;
	tyLyrC0002FullMask tyFullMaskInterrupt;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0934AW;
#endif

#ifndef __AS__TYPE_tyLyrP0940CommCtrlUSSMEMA
#define __AS__TYPE_tyLyrP0940CommCtrlUSSMEMA
typedef struct tyLyrP0940CommCtrlUSSMEMA
{	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnUSB;
	tyUILyr tyLyr;
} tyLyrP0940CommCtrlUSSMEMA;
#endif

#ifndef __AS__TYPE_tyLyrP0940CommCtrlDSSMEMA
#define __AS__TYPE_tyLyrP0940CommCtrlDSSMEMA
typedef struct tyLyrP0940CommCtrlDSSMEMA
{	tyUIBtn tyBtnDBA;
	tyUIBtn tyBtnDBAStat;
	tyUIBtn tyBtnDSB;
	tyUILyr tyLyr;
} tyLyrP0940CommCtrlDSSMEMA;
#endif

#ifndef __AS__TYPE_tyLyrP0940CommCtrlUSSMEMA2
#define __AS__TYPE_tyLyrP0940CommCtrlUSSMEMA2
typedef struct tyLyrP0940CommCtrlUSSMEMA2
{	tyUIBtn tyBtnUBA;
	tyUIBtn tyBtnUBAStat;
	tyUIBtn tyBtnUSB;
	tyUILyr tyLyr;
} tyLyrP0940CommCtrlUSSMEMA2;
#endif

#ifndef __AS__TYPE_tyUIP0940CommCtrl
#define __AS__TYPE_tyUIP0940CommCtrl
typedef struct tyUIP0940CommCtrl
{	tyLyrP0940CommCtrlUSSMEMA tyUSSMEMA;
	tyLyrP0940CommCtrlDSSMEMA tyDSSMEMA;
	tyLyrP0940CommCtrlUSSMEMA2 tyUSSMEMA2;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0940CommCtrl;
#endif

#ifndef __AS__TYPE_tyLyrP0950Simu
#define __AS__TYPE_tyLyrP0950Simu
typedef struct tyLyrP0950Simu
{	tyUIBtn tyBtnSimu;
	tyUIBtn tyBtnStart;
	tyUIBtn tyBtnStop;
	tyUILyr tyLyr;
} tyLyrP0950Simu;
#endif

#ifndef __AS__TYPE_tyUIP0950Simu
#define __AS__TYPE_tyUIP0950Simu
typedef struct tyUIP0950Simu
{	tyLyrP0950Simu tySimu;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0950Simu;
#endif

#ifndef __AS__TYPE_tyLyrP1000Lang
#define __AS__TYPE_tyLyrP1000Lang
typedef struct tyLyrP1000Lang
{	tyUIBtn tyBtnChinese;
	tyUIBtn tyBtnEnglish;
	tyUIBtn tyBtnGerman;
	tyUINum tyNumYear;
	tyUINum tyNumMonth;
	tyUINum tyNumDay;
	tyUINum tyNumHour;
	tyUINum tyNumMinute;
	tyUINum tyNumSecond;
	tyUILyr tyLyr;
} tyLyrP1000Lang;
#endif

#ifndef __AS__TYPE_tyUIP1000Lang
#define __AS__TYPE_tyUIP1000Lang
typedef struct tyUIP1000Lang
{	tyLyrP1000Lang tyLang;
	tyLyrP1000Lang tyLangBkUp;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
} tyUIP1000Lang;
#endif

#ifndef __AS__TYPE_tyLyrP1020McSetNavi
#define __AS__TYPE_tyLyrP1020McSetNavi
typedef struct tyLyrP1020McSetNavi
{	tyUIBtn tyBtnMcSet;
	tyUIBtn tyBtnVCommSet;
	tyUIBtn tyBtnHCommSet;
	tyUIBtn tyBtnAntiGapSet;
	tyUILyr tyLyr;
} tyLyrP1020McSetNavi;
#endif

#ifndef __AS__TYPE_tyUIP1020McSetNavi
#define __AS__TYPE_tyUIP1020McSetNavi
typedef struct tyUIP1020McSetNavi
{	tyLyrP1020McSetNavi tyNavi;
	tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP1020McSetNavi;
#endif

#ifndef __AS__TYPE_tyLyrP1021McSetGen
#define __AS__TYPE_tyLyrP1021McSetGen
typedef struct tyLyrP1021McSetGen
{	tyUIBtn tyBtnAutoStepEn;
	tyUIBtn tyBtnAWDis;
	tyUIBtn tyBtnChgParamEn;
	tyUIBtn tyBtnHermesRmtEn;
	tyUIBtn tyBtnMnlAccDat;
	tyUIBtn tyBtnVSMEMAEn;
	tyUIDrpDn tyDrpDnDefaultMcMod;
	tyUIDrpDn tyDrpDnDefaultFlippedBrd;
	tyUIDrpDn tyDrpDnNetworkMod;
	tyUITxt tyTxtLblFlippedBrd;
	tyUIBtn tyHermesRemoteEn;
	tyUIBtn tyBtnHermesSvyEn;
	tyUILyr tyLyrGen1;
	tyUILyr tyLyrGen2;
	tyUINum tyNumConvInitTm;
	tyUINum tyNumTranInErrDlyTm;
	tyUINum tyNumTranOutErrDlyTm;
	tyUINum tyNumWidthAtHm;
	tyUITxt tyTxtWidthOffset;
	tyUINum tyNumWidthOffset;
	tyUIString tyStringMcNm;
	tyUITxt tyTxtWidthAtHm;
	tyUIBtn tyBtnSSaverEn;
	tyUINum tyNumSSaverTm;
	tyUITxt tyTxtSSaverTm;
	tyUIString tyStringSubnetMask;
	tyUIString tyStringIPAddr;
	tyUINum tyNumStopperAtLftPos;
	tyUINum tyNumStopperAtRgtPos;
	tyUIBtn tyBtnStopperAtLftPosTeach;
	tyUIBtn tyBtnStopperAtRgtPosTeach;
	tyUIBtn tyBtnClampDis;
	tyUIBtn tyBtnStopperDis;
	tyUINum tyNumAutoLogoutTm;
	tyUITxt tyTxtLblAutoLogoutTm;
	tyUIBtn tyBtnAutoLogoutEn;
	tyUIBtn tyBtnLFBuzMute;
} tyLyrP1021McSetGen;
#endif

#ifndef __AS__TYPE_tyLyrP1021McSetNetwork
#define __AS__TYPE_tyLyrP1021McSetNetwork
typedef struct tyLyrP1021McSetNetwork
{	tyUIString tyStringIPAddr;
	tyUIString tyStringSubnetMask;
	tyUIBtn tyBtnSave;
	tyUIBtn tyBtnCancel;
	tyUILyr tyLyr;
} tyLyrP1021McSetNetwork;
#endif

#ifndef __AS__TYPE_tyUIP1021McSetGen
#define __AS__TYPE_tyUIP1021McSetGen
typedef struct tyUIP1021McSetGen
{	tyLyrP1021McSetGen tyGen;
	tyLyrP1021McSetGen tyGenBkUp;
	tyLyrP1021McSetNetwork tyNetwork;
	tyLyrC0004Navi tyNaviLyr1;
	tyLyrC0004Navi tyNaviLyr2;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxExitAsk;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0008MsgBox tyMsgBoxUpdtSubnetAsk;
	tyLyrC0008MsgBox tyMsgBoxUpdtSubnetErr;
	tyLyrC0008MsgBox tyMsgBoxSubnetInvalid;
	tyLyrC0008MsgBox tyMsgBoxUpdtIPAddrAsk;
	tyLyrC0008MsgBox tyMsgBoxUpdtIPAddrErr;
	tyLyrC0008MsgBox tyMsgBoxIPAddrInvalid;
	tyLyrC0008MsgBox tyMsgBoxChgNetworkAsk;
	tyLyrC0008MsgBox tyMsgBoxIPAddrInvalidEdit;
	tyLyrC0008MsgBox tyMsgBoxSubnetInvalidEdit;
	tyLyrC0008MsgBox tyMsgBoxGetIPAddrErr;
	tyLyrC0008MsgBox tyMsgBoxGetSubnetErr;
	tyLyrC0008MsgBox tyMsgBoxSetDHCPError;
} tyUIP1021McSetGen;
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

#ifndef __AS__TYPE_tyLyrP1023McSetHCommGen
#define __AS__TYPE_tyLyrP1023McSetHCommGen
typedef struct tyLyrP1023McSetHCommGen
{	tyUITxt tyTxtLblUSSel;
	tyUIDrpDn tyDrpDnUSSel;
	tyUITxt tyTxtLblDSSel;
	tyUIDrpDn tyDrpDnDSSel;
	tyUILyr tyLyr;
} tyLyrP1023McSetHCommGen;
#endif

#ifndef __AS__TYPE_tyLyrP1023McSetHCommSel
#define __AS__TYPE_tyLyrP1023McSetHCommSel
typedef struct tyLyrP1023McSetHCommSel
{	tyUIBtn tyBtnSMEMA;
	tyUIBtn tyBtnHermes;
	tyUILyr tyLyr;
} tyLyrP1023McSetHCommSel;
#endif

#ifndef __AS__TYPE_tyLyrP1023McSetHCommSMEMA
#define __AS__TYPE_tyLyrP1023McSetHCommSMEMA
typedef struct tyLyrP1023McSetHCommSMEMA
{	tyUIDrpDn tyDrpDnSMEMAMod;
	tyUIBtn tyBtnGdSig;
	tyUILyr tyLyr;
} tyLyrP1023McSetHCommSMEMA;
#endif

#ifndef __AS__TYPE_tyLyrP1023McSetHCommUSHermes
#define __AS__TYPE_tyLyrP1023McSetHCommUSHermes
typedef struct tyLyrP1023McSetHCommUSHermes
{	tyUINum tyNumSndAliveTm;
	tyUINum tyNumLaneID;
	tyUINum tyNumHostPort;
	tyUIString tyStringHostAddr;
	tyUIBtn tyBtnCheckAliveResponse;
	tyUIBtn tyBtnOverWrite;
	tyUIBtn tyBtnCmpParam;
	tyUIBtn tyBtnCmpTypeId;
	tyUIBtn tyBtnCommand;
	tyUIBtn tyBtnBoardForecast;
	tyUIBtn tyBtnQueryBoardInfo;
	tyUIBitmap tyBitmapMask;
	tyUILyr tyLyr;
} tyLyrP1023McSetHCommUSHermes;
#endif

#ifndef __AS__TYPE_tyLyrP1023McSetHCommDSHermes
#define __AS__TYPE_tyLyrP1023McSetHCommDSHermes
typedef struct tyLyrP1023McSetHCommDSHermes
{	tyUINum tyNumLaneID;
	tyUINum tyNumSvrPort;
	tyUINum tyNumSndAliveTm;
	tyUIBtn tyBtnCheckAliveResponse;
	tyUIBtn tyBtnCommand;
	tyUIBtn tyBtnBoardForecast;
	tyUIBtn tyBtnSendBoardInfo;
	tyUIBitmap tyBitmapMask;
	tyUILyr tyLyr;
} tyLyrP1023McSetHCommDSHermes;
#endif

#ifndef __AS__TYPE_tyUIP1023McSetHComm
#define __AS__TYPE_tyUIP1023McSetHComm
typedef struct tyUIP1023McSetHComm
{	tyLyrP1023McSetHCommGen tyGen;
	tyLyrP1023McSetHCommSel tyUSSel;
	tyLyrP1023McSetHCommSMEMA tyUSSMEMA;
	tyLyrP1023McSetHCommUSHermes tyUSHermes;
	tyLyrP1023McSetHCommSel tyDSSel;
	tyLyrP1023McSetHCommSel tyDSSel2;
	tyLyrP1023McSetHCommSMEMA tyDSSMEMA;
	tyLyrP1023McSetHCommSMEMA tyDSSMEMA2;
	tyLyrP1023McSetHCommDSHermes tyDSHermes;
	tyLyrP1023McSetHCommDSHermes tyDSHermes2;
	tyLyrP1023McSetHCommSel tyUSSelBkUp;
	tyLyrP1023McSetHCommSMEMA tyUSSMEMABkUp;
	tyLyrP1023McSetHCommUSHermes tyUSHermesBkUp;
	tyLyrP1023McSetHCommSel tyDSSelBkUp;
	tyLyrP1023McSetHCommSel tyDSSelBkUp2;
	tyLyrP1023McSetHCommSMEMA tyDSSMEMABkUp;
	tyLyrP1023McSetHCommSMEMA tyDSSMEMABkUp2;
	tyLyrP1023McSetHCommDSHermes tyDSHermesBkUp;
	tyLyrP1023McSetHCommDSHermes tyDSHermesBkUp2;
	tyLyrP1023McSetHCommSel tyUSSel2;
	tyLyrP1023McSetHCommSMEMA tyUSSMEMA2;
	tyLyrP1023McSetHCommUSHermes tyUSHermes2;
	tyLyrP1023McSetHCommSel tyUSSelBkUp2;
	tyLyrP1023McSetHCommSMEMA tyUSSMEMABkUp2;
	tyLyrP1023McSetHCommUSHermes tyUSHermesBkUp2;
	tyLyrC0004Navi tyNaviLyr1;
	tyLyrC0004Navi tyNaviLyr2;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxExitAsk;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0008MsgBox tyMsgBoxIPAddrInvalid;
} tyUIP1023McSetHComm;
#endif

#ifndef __AS__TYPE_tyLyrP1024McSetAntiGap
#define __AS__TYPE_tyLyrP1024McSetAntiGap
typedef struct tyLyrP1024McSetAntiGap
{	tyUITxt tyTxtLftSen;
	tyUITxt tyTxtRgtSen;
	tyUINum tyNumLftSenOff;
	tyUINum tyNumRgtSenOff;
	tyUILyr tyLyr;
} tyLyrP1024McSetAntiGap;
#endif

#ifndef __AS__TYPE_tyUIP1024McSetAntiGap
#define __AS__TYPE_tyUIP1024McSetAntiGap
typedef struct tyUIP1024McSetAntiGap
{	tyLyrP1024McSetAntiGap tyAntiGap;
	tyLyrP1024McSetAntiGap tyAntiGapBkUp;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxExitAsk;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0004Navi tyNaviBack;
} tyUIP1024McSetAntiGap;
#endif

#ifndef __AS__TYPE_tyLyrP1026McSetTeach
#define __AS__TYPE_tyLyrP1026McSetTeach
typedef struct tyLyrP1026McSetTeach
{	tyUIBtn tyBtnGet;
	tyUIBtn tyBtnGo;
	tyUILyr tyLyr;
} tyLyrP1026McSetTeach;
#endif

#ifndef __AS__TYPE_tyLyrC0001MotionStdInvert
#define __AS__TYPE_tyLyrC0001MotionStdInvert
typedef struct tyLyrC0001MotionStdInvert
{	tyUIBitmap tyBitmapOrigin;
	tyUIBitmap tyBitmapPwr;
	tyUIBitmap tyBitmapRst;
	tyUIBitmap tyBitmapStop;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnHmLmtSen;
	tyUIBtn tyBtnRmtLmtSen;
	tyUIBtn tyBtnJogHm;
	tyUIBtn tyBtnJogRmt;
	tyUIBtn tyBtnMovAbs;
	tyUIBtn tyBtnMovRel;
	tyUIBtn tyBtnOrigin;
	tyUIBtn tyBtnPwr;
	tyUIBtn tyBtnRst;
	tyUIBtn tyBtnStop;
	tyUINum tyNumCurrPos;
	tyUINum tyNumErrCode;
	tyUINum tyNumNomSpd;
	tyUINum tyNumSlwSpd;
	tyUINum tyNumStepSize;
	tyUINum tyNumTargetPos;
	tyUILString tyStringStat;
	tyUILyr tyLyr;
} tyLyrC0001MotionStdInvert;
#endif

#ifndef __AS__TYPE_tyUIP1026McSetTeach
#define __AS__TYPE_tyUIP1026McSetTeach
typedef struct tyUIP1026McSetTeach
{	tyLyrP1026McSetTeach tyTeachStopperAtLftPos;
	tyLyrP1026McSetTeach tyTeachStopperAtRgtPos;
	tyLyrC0001MotionStdInvert tyMotionStd;
	tyLyrC0002FullMask tyFullMaskHide;
	tyLyrC0002FullMask tyFullMaskEStop;
	tyLyrC0002FullMask tyFullMaskCWSig;
	tyLyrC0002FullMask tyFullMaskSafetyRly;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxUpdtStopperAtLftPos;
	tyLyrC0008MsgBox tyMsgBoxUpdtStopperAtRgtPos;
} tyUIP1026McSetTeach;
#endif

#ifndef __AS__TYPE_tyLyrP1040ProdSet
#define __AS__TYPE_tyLyrP1040ProdSet
typedef struct tyLyrP1040ProdSet
{	tyUIBtn tyBtnDelete;
	tyUIBtn tyBtnSave;
	tyUINum tyNumProdWidth;
	tyUINum tyNumProdWidth2;
	tyUILString tyStringRecipeNm;
	tyUILString tyStringSearch;
	tyUITable tyTableRecipe;
	tyUIDrpDn tyDrpDnMcMode;
	tyUIDrpDn tyDrpDnFlippedBrd;
	tyUITxt tyTxtDrpDnFlippedBrd;
	tyUITxt tyTxtMatchCode;
	tyUIString tyStringMatchCode;
	tyUILyr tyLyr;
	tyUIBtn tyBtnToXML;
	tyUIBtn tyBtnFromXML;
	tyUIBtn tyBtnSort;
	tyUIHotspot tyHotspotShowLRcp;
} tyLyrP1040ProdSet;
#endif

#ifndef __AS__TYPE_tyUIP1040ProdSet
#define __AS__TYPE_tyUIP1040ProdSet
typedef struct tyUIP1040ProdSet
{	tyLyrP1040ProdSet tyProdSet;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxSaveAsk;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0008MsgBox tyMsgBoxListFull;
	tyLyrC0008MsgBox tyMsgBoxListErr;
	tyLyrC0008MsgBox tyMsgBoxSaveNoNm;
	tyLyrC0008MsgBox tyMsgBoxReloadCurrRcp;
	tyLyrC0008MsgBox tyMsgBoxDelCurrRcpAsk;
	tyLyrC0008MsgBox tyMsgBoxDelNmNotExist;
	tyLyrC0008MsgBox tyMsgBoxDelNmEmpty;
	tyLyrC0008MsgBox tyMsgBoxDelErr;
	tyLyrC0008MsgBox tyMsgBoxDelAsk;
	tyLyrC0008MsgBox tyMsgBoxToXMLAsk;
	tyLyrC0008MsgBox tyMsgBoxToXMLErr;
	tyLyrC0008MsgBox tyMsgBoxFromXMLAsk;
	tyLyrC0008MsgBox tyMsgBoxFromXMLErr;
	tyLyrC0008MsgBox tyMsgBoxSaveListErr;
	tyLyrC0012RcpPopUp tyRcpPopUp;
} tyUIP1040ProdSet;
#endif

#ifndef __AS__TYPE_tyLyrP1050LFSetLdr
#define __AS__TYPE_tyLyrP1050LFSetLdr
typedef struct tyLyrP1050LFSetLdr
{	tyUITable1 tyTable1List;
	tyUIBtn tyBtnEdit;
	tyUIBtn tyBtnDelete;
	tyUIBtn tyBtnOnline;
	tyUIBtn tyBtnOffline;
	tyUIBtn tyBtnShftUp;
	tyUIBtn tyBtnShftDwn;
	tyUINum tyNumBeforeOven;
	tyUINum tyNumBeforeOven2;
	tyUINum tyNumAfterOven;
	tyUINum tyNumAfterOven2;
	tyUILyr tyLyr;
} tyLyrP1050LFSetLdr;
#endif

#ifndef __AS__TYPE_tyLyrP1050LFSetLdrEdit
#define __AS__TYPE_tyLyrP1050LFSetLdrEdit
typedef struct tyLyrP1050LFSetLdrEdit
{	tyUINum tyNumMcNum;
	tyUIString tyStringIPAddr;
	tyUIBtn tyBtnOk;
	tyUIBtn tyBtnCancel;
	tyUITxt tyTxtLblInfoThirdParty;
	tyUILyr tyLyr;
} tyLyrP1050LFSetLdrEdit;
#endif

#ifndef __AS__TYPE_tyUIP1050LFSet
#define __AS__TYPE_tyUIP1050LFSet
typedef struct tyUIP1050LFSet
{	tyLyrP1050LFSetLdr tyLdr;
	tyLyrP1050LFSetLdrEdit tyLdrEdit;
	tyLyrP1050LFSetLdr tyLdrBkUp;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
	tyLyrC0008MsgBox tyMsgBoxDelAsk;
	tyLyrC0008MsgBox tyMsgBoxIPAddrInvalid;
	tyLyrC0008MsgBox tyMsgBoxIPAddrDuplicate;
} tyUIP1050LFSet;
#endif

#ifndef __AS__TYPE_tyLyrP1080UsrMgmtAct
#define __AS__TYPE_tyLyrP1080UsrMgmtAct
typedef struct tyLyrP1080UsrMgmtAct
{	tyUIBtn tyBtnOk;
	tyUIBtn tyBtnCancel;
	tyUIString tyStringPw;
	tyUIString tyStringUsrNm;
	tyUIDrpDn tyDrpDnLvl;
	tyUILyr tyLyr;
} tyLyrP1080UsrMgmtAct;
#endif

#ifndef __AS__TYPE_tyLyrP1080UsrMgmt
#define __AS__TYPE_tyLyrP1080UsrMgmt
typedef struct tyLyrP1080UsrMgmt
{	tyUIBtn tyBtnEditDetail;
	tyUIBtn tyBtnEditAccess;
	tyUIBtn tyBtnNewUsr;
	tyUIBtn tyBtnDeleteUsr;
	tyUIDrpDn tyDrpDnLvl;
	tyUITable1 tyTableList;
	tyUILyr tyLyr;
} tyLyrP1080UsrMgmt;
#endif

#ifndef __AS__TYPE_tyUIP1080UsrMgmt
#define __AS__TYPE_tyUIP1080UsrMgmt
typedef struct tyUIP1080UsrMgmt
{	tyLyrP1080UsrMgmtAct tyActHide;
	tyLyrP1080UsrMgmtAct tyEdit;
	tyLyrP1080UsrMgmtAct tyCreate;
	tyLyrP1080UsrMgmt tyUsrMgmt;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxAddErr;
	tyLyrC0008MsgBox tyMsgBoxEditErr;
	tyLyrC0008MsgBox tyMsgBoxAddNmExist;
	tyLyrC0008MsgBox tyMsgBoxEditParamErr;
	tyLyrC0008MsgBox tyMsgBoxAddParamErr;
	tyLyrC0008MsgBox tyMsgBoxListFull;
	tyLyrC0008MsgBox tyMsgBoxDelNmNotExist;
	tyLyrC0008MsgBox tyMsgBoxDelParamErr;
	tyLyrC0008MsgBox tyMsgBoxDelLastAdminErr;
	tyLyrC0008MsgBox tyMsgBoxDelAsk;
	tyLyrC0008MsgBox tyMsgBoxDelErr;
} tyUIP1080UsrMgmt;
#endif

#ifndef __AS__TYPE_tyLyrP1081UsrMgmtUsrAccessRgtSel
#define __AS__TYPE_tyLyrP1081UsrMgmtUsrAccessRgtSel
typedef struct tyLyrP1081UsrMgmtUsrAccessRgtSel
{	tyUIDrpDn tyDrpDnLevel;
	tyUILyr tyLyr;
} tyLyrP1081UsrMgmtUsrAccessRgtSel;
#endif

#ifndef __AS__TYPE_tyLyrP1081UsrMgmtUsrAccessRgt
#define __AS__TYPE_tyLyrP1081UsrMgmtUsrAccessRgt
typedef struct tyLyrP1081UsrMgmtUsrAccessRgt
{	tyUIBtn tyBtnOps;
	tyUIBtn tyBtnProdSel;
	tyUIBtn tyBtnMagSel;
	tyUIBtn tyBtnMcInfo;
	tyUIBtn tyBtnAlm;
	tyUIBtn tyBtnBffrInfo;
	tyUIBtn tyBtnOvenInfo;
	tyUIBtn tyBtnMagInfo;
	tyUIBtn tyBtnLFCtrl;
	tyUIBtn tyBtnManual;
	tyUIBtn tyBtnManualFBOnly;
	tyUIBtn tyBtnSimu;
	tyUIBtn tyBtnChgParam;
	tyUIBtn tyBtnLFSet;
	tyUIBtn tyBtnLang;
	tyUIBtn tyBtnMcSet;
	tyUIBtn tyBtnProdSet;
	tyUIBtn tyBtnMagSet;
	tyUIString tyStringNm;
	tyUITxt tyTxtTitle;
	tyUILyr tyLyr;
} tyLyrP1081UsrMgmtUsrAccessRgt;
#endif

#ifndef __AS__TYPE_tyUIP1081UsrAccessRgt
#define __AS__TYPE_tyUIP1081UsrAccessRgt
typedef struct tyUIP1081UsrAccessRgt
{	tyLyrP1081UsrMgmtUsrAccessRgtSel tyUsrAccessRgtSel;
	tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl1;
	tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl2;
	tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl3;
	tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl1BkUp;
	tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl2BkUp;
	tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl3BkUp;
	tyLyrC0004Navi tyNaviBack;
	tyLyrC0008MsgBox tyMsgBoxHide;
	tyLyrC0008MsgBox tyMsgBoxExitAsk;
	tyLyrC0008MsgBox tyMsgBoxSaveErr;
} tyUIP1081UsrAccessRgt;
#endif

#ifndef __AS__TYPE_tyLyrC0005Main
#define __AS__TYPE_tyLyrC0005Main
typedef struct tyLyrC0005Main
{	tyUIBtn tyBtnHome;
	tyUIBtn tyBtnNotification;
	tyUIBtn tyBtnStart;
	tyUIBtn tyBtnStop;
	tyUIBtn tyBtnStep;
	tyUIBtn tyBtnReset;
	tyUIBitmap tyBitmapStatBar;
	tyUIBtn tyBtnMuteBuz;
	tyUIHotspot tyHotspotNaviStart;
	tyUIBtn tyBtnAlarm;
} tyLyrC0005Main;
#endif

#ifndef __AS__TYPE_tyLyrC0006Set
#define __AS__TYPE_tyLyrC0006Set
typedef struct tyLyrC0006Set
{	tyUIBtn tyBtnSave;
	tyUILyr tyLyr;
} tyLyrC0006Set;
#endif

#ifndef __AS__TYPE_tyLyrC0007Notif
#define __AS__TYPE_tyLyrC0007Notif
typedef struct tyLyrC0007Notif
{	tyUITxt tyTxtUsrLv;
	tyUITxt tyTxtLFMc;
	tyUIString tyStringUsrNm;
	tyUIHotspot tyHotspotClose;
	tyUIHotspot tyHotspotShowInfo;
	tyUIBitmap tyBitmapShowInfo;
	tyUILyr tyLyr;
} tyLyrC0007Notif;
#endif

#ifndef __AS__TYPE_tyLyrC0009Info
#define __AS__TYPE_tyLyrC0009Info
typedef struct tyLyrC0009Info
{	tyUILString tyStringInfo;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrC0009Info;
#endif

#ifndef __AS__TYPE_tyLyrC0011Loading
#define __AS__TYPE_tyLyrC0011Loading
typedef struct tyLyrC0011Loading
{	tyUIBitmap tyUILoad;
	tyUILString tyStringMsg;
	tyUILyr tyLyr;
} tyLyrC0011Loading;
#endif

#ifndef __AS__TYPE_tyUICom
#define __AS__TYPE_tyUICom
typedef struct tyUICom
{	tyLyrC0005Main tyMain;
	tyLyrC0006Set tySet;
	tyLyrC0007Notif tyNotif;
	tyLyrC0009Info tyInfo;
	tyLyrC0011Loading tyLoading;
} tyUICom;
#endif

#ifndef __AS__TYPE_tyVisu
#define __AS__TYPE_tyVisu
typedef struct tyVisu
{	unsigned short uiChgPage;
	unsigned short uiCurrPage;
	unsigned short uiSSaverTm;
	unsigned short uiSSaverRemainTm;
	unsigned char usiChgLang;
	unsigned char usiCurrLang;
} tyVisu;
#endif

#ifndef __AS__TYPE_tyKeypad
#define __AS__TYPE_tyKeypad
typedef struct tyKeypad
{	tyUITxt tyTxtTitle;
} tyKeypad;
#endif

#ifndef __AS__TYPE_tyTxtSnippets
#define __AS__TYPE_tyTxtSnippets
typedef struct tyTxtSnippets
{	plcstring sLibraryNm[11];
	plcstring sUsrMgmtUsrLv1Nm[81];
	plcstring sUsrMgmtUsrLv2Nm[81];
	plcstring sUsrMgmtUsrLv3Nm[81];
} tyTxtSnippets;
#endif

#ifndef __AS__TYPE_tyUIProperty
#define __AS__TYPE_tyUIProperty
typedef struct tyUIProperty
{	tyVisu tyVisu;
	tyKeypad tyKeypad;
	tyTxtSnippets tyUITxtSnippets;
} tyUIProperty;
#endif

#ifndef __AS__TYPE_tyLyrC0001MotionStd
#define __AS__TYPE_tyLyrC0001MotionStd
typedef struct tyLyrC0001MotionStd
{	tyUIBitmap tyBitmapOrigin;
	tyUIBitmap tyBitmapPwr;
	tyUIBitmap tyBitmapRst;
	tyUIBitmap tyBitmapStop;
	tyUIBitmap tyBitmapMc;
	tyUIBtn tyBtnPosLmtSen;
	tyUIBtn tyBtnNegLmtSen;
	tyUIBtn tyBtnJogPos;
	tyUIBtn tyBtnJogNeg;
	tyUIBtn tyBtnMovAbs;
	tyUIBtn tyBtnMovRel;
	tyUIBtn tyBtnOrigin;
	tyUIBtn tyBtnPwr;
	tyUIBtn tyBtnRst;
	tyUIBtn tyBtnStop;
	tyUINum tyNumCurrPos;
	tyUINum tyNumErrCode;
	tyUINum tyNumNomSpd;
	tyUINum tyNumSlwSpd;
	tyUINum tyNumStepSize;
	tyUINum tyNumTargetPos;
	tyUILString tyStringStat;
	tyUILyr tyLyr;
} tyLyrC0001MotionStd;
#endif

#ifndef __AS__TYPE_tyLyrP0201OpsConvBypsInitConv
#define __AS__TYPE_tyLyrP0201OpsConvBypsInitConv
typedef struct tyLyrP0201OpsConvBypsInitConv
{	tyUIBtn tyBtnBypsInitConv;
	tyUIHotspot tyHotspotClose;
	tyUILyr tyLyr;
} tyLyrP0201OpsConvBypsInitConv;
#endif

#ifndef __AS__TYPE_eUIAction
#define __AS__TYPE_eUIAction
typedef enum eUIAction
{	UIActIdle = 0,
	UIActInitial = 1,
} eUIAction;
#endif

#ifndef __AS__TYPE_eUIInitial
#define __AS__TYPE_eUIInitial
typedef enum eUIInitial
{	UIInitialC0005 = 0,
	UIInitialC0007 = 1,
	UIInitialP0000 = 2,
	UIInitialP0200 = 3,
	UIInitialP0201 = 4,
	UIInitialP0300 = 5,
	UIInitialP0400 = 6,
	UIInitialP0900 = 7,
	UIInitialP0910 = 8,
	UIInitialP0920 = 9,
	UIInitialP0922 = 10,
	UIInitialP0924 = 11,
	UIInitialP0927 = 12,
	UIInitialP0928 = 13,
	UIInitialP0931 = 14,
	UIInitialP0934 = 15,
	UIInitialP0935 = 16,
	UIInitialP0940 = 17,
	UIInitialP1000 = 18,
	UIInitialP1020 = 19,
	UIInitialP1021 = 20,
	UIInitialP1022 = 21,
	UIInitialP1023 = 22,
	UIInitialP1024 = 23,
	UIInitialP1026 = 24,
	UIInitialP1040 = 25,
	UIInitialP1050 = 26,
	UIInitialP1080 = 27,
	UIInitialP1081 = 28,
	UIInitialDone = 29,
} eUIInitial;
#endif

#ifndef __AS__TYPE_tyUIAllAlm
#define __AS__TYPE_tyUIAllAlm
typedef struct tyUIAllAlm
{	plcbit bAlm[10000];
	plcbit bWarning[10000];
} tyUIAllAlm;
#endif

#ifndef __AS__TYPE_eStartupAction
#define __AS__TYPE_eStartupAction
typedef enum eStartupAction
{	StartupActIdle = 0,
	StartupActRun = 1,
} eStartupAction;
#endif

#ifndef __AS__TYPE_eStartupStep
#define __AS__TYPE_eStartupStep
typedef enum eStartupStep
{	StartupStepUsrFolder = 0,
	StartupStepParameter = 1,
	StartupStepGetHWInfo = 2,
	StartupStepLibVer = 3,
	StartupStepRecipe = 4,
	StartupStepUsrMgmt = 5,
	StartupStepBffr = 6,
	StartupStepAlarm = 7,
	StartupStepHermes = 8,
	StartupStepSDOWrite = 9,
	StartupStepSetupUI = 10,
	StartupStepDone = 11,
} eStartupStep;
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

#ifndef __AS__TYPE_eTLBuzMod
#define __AS__TYPE_eTLBuzMod
typedef enum eTLBuzMod
{	TLBuzModNutek = 0,
	TLBuzModMEK = 1,
	TLBuzModBHTC = 2,
	TLBuzModAptiv = 3,
} eTLBuzMod;
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

#ifndef __AS__TYPE_tyAlarmCurr
#define __AS__TYPE_tyAlarmCurr
typedef struct tyAlarmCurr
{	eAlmSeverity eSeverity;
	plcstring sMsg[301];
	plcbit bAlm;
	plcbit bWarning;
	unsigned long udiErrorCode;
	plcstring sProgNm[16];
	plcstring sDT[81];
	unsigned long udiModErrCode;
} tyAlarmCurr;
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

#ifndef __AS__TYPE_tyDigitalInputSettings
#define __AS__TYPE_tyDigitalInputSettings
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
#endif

#ifndef __AS__TYPE_tyDigitalOutputSettings
#define __AS__TYPE_tyDigitalOutputSettings
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
#endif

#ifndef __AS__TYPE_tyUILmt
#define __AS__TYPE_tyUILmt
typedef struct tyUILmt
{	signed long diMax;
	signed long diMin;
} tyUILmt;
#endif

#ifndef __AS__TYPE_eConvDir
#define __AS__TYPE_eConvDir
typedef enum eConvDir
{	ConvDirLToR = 0,
	ConvDirRToL = 1,
	ConvDirLToL = 2,
	ConvDirRToR = 3,
} eConvDir;
#endif

#ifndef __AS__TYPE_eClampType
#define __AS__TYPE_eClampType
typedef enum eClampType
{	ClampNoRS = 0,
	ThreeClampsWithRS = 1,
} eClampType;
#endif

#ifndef __AS__TYPE_tyMotionCANParamInHm
#define __AS__TYPE_tyMotionCANParamInHm
typedef struct tyMotionCANParamInHm
{	signed char siMode;
	signed long diStartVelInUMPS;
	signed long diOffsetVelInUMPS;
	signed long diAcc;
} tyMotionCANParamInHm;
#endif

#ifndef __AS__TYPE_tyMotionCANParamInConvert
#define __AS__TYPE_tyMotionCANParamInConvert
typedef struct tyMotionCANParamInConvert
{	signed long diPitchInUM;
	signed long diPulsePerRev;
	signed long diPrimaryGearRatio;
	signed long diSecondaryGearRatio;
} tyMotionCANParamInConvert;
#endif

#ifndef __AS__TYPE_tyMotionParam
#define __AS__TYPE_tyMotionParam
typedef struct tyMotionParam
{	signed long diAccInMS;
	signed long diDecInMS;
	signed long diAutoSpdInUMPS;
} tyMotionParam;
#endif

#ifndef __AS__TYPE_tyMotionCANTuning
#define __AS__TYPE_tyMotionCANTuning
typedef struct tyMotionCANTuning
{	signed long diAsdaA2Inertia;
	signed long diAsdaA2PosLoopGain;
	signed long diAsdaA2PosFFGain;
	signed long diAsdaA2SpdLoopGain;
	signed long diAsdaA2SpdIntegral;
	signed long diAsdaA2LowPassFltr;
	signed long diAsdaA2AntiInterGain;
	signed long diAsdaA2FirstTorqueCmd;
	signed long diLex28LTNDderivativeGain_P800;
	signed long diLex28LTNIintegralGain_P801;
	signed long diLex28LTNIVdeIntlGain_P802;
	signed long diLex28LTNPpropotionalGain_P803;
	signed long diLex28LTNUSERGAIN_P804;
	signed long diLex28NLAFFLPFHZspringFil_P805;
	signed long diLex28NLFILTDAMPING_P814;
	signed long diLex28NLFILTT1_P815;
	signed long diPronetInertia;
	signed long diPronetRealTimeAutoAdjSet;
	signed long diPronetPosLoopGain;
	signed long diPronetSpdLoopGain;
	signed long diPronetSpdIntegral;
	signed long diPronetTorqueFilter;
	signed long diPronetPosFeedForward;
	signed long diPronetLowSpeedTestFiltering;
	signed long diPronetStopMode;
} tyMotionCANTuning;
#endif

#ifndef __AS__TYPE_eServoMotorType
#define __AS__TYPE_eServoMotorType
typedef enum eServoMotorType
{	DeltaAsdaA2 = 0,
	SchneiderLexium28 = 1,
	EstunPronet = 2,
} eServoMotorType;
#endif

#ifndef __AS__TYPE_tyNtParam
#define __AS__TYPE_tyNtParam
typedef struct tyNtParam
{	tyDigitalInputSettings tyDISettings;
	tyDigitalOutputSettings tyDOSettings;
	plcbit bAWPrep;
	plcbit bLFPrep;
	plcbit bLeaderMc;
	plcbit bLFUsrSetPrep;
	signed long diLFWidthLimit;
	plcbit bLFProdWidthChk;
	plcbit bLFProdWidth2Prep;
	plcbit bUSWidthChkPrep;
	plcbit bDSWidthChkPrep;
	plcbit bLCSLFPrep;
	plcbit bLCSReqRcpPrep;
	plcbit bLCSManageRcpPrep;
	plcbit bLCSLiveDatPrep;
	plcbit bUSExtSMEMAPrep;
	plcbit bDSExtSMEMAPrep;
	plcbit bVSMEMAPrep;
	plcbit bHermesPrep;
	plcbit bHermesRmtPrep;
	plcbit bUnlockCoverPrep;
	plcbit bUSDSMachineSafetySig;
	plcbit bSSaverPrep;
	plcbit bAutoLogoutPrep;
	signed long diWidthOffsetInUM;
	tyUILmt tyUIAWOffset;
	plcstring sJobNo[31];
	unsigned char usiNtAddr;
	eConvDir eProjConvDir;
	plcbit bProjCoatingPrep;
	plctime tComLoadRstTm;
	plcbit bProjDBAOnRgtSen;
	plcbit bProjClampPrep;
	eClampType eProjClampOption;
	plcbit bProjStopperPrep;
	plcbit bProjInletShutPrep;
	plcbit bProjOutletShutPrep;
	plcbit bProjBypsInitConvPrep;
	plcbit bProjRlsNewProdPrep;
	plcstring sUsrFolderProgNm[16];
	plcstring sLibVersionProgNm[16];
	plcstring sTimeProgNm[16];
	plcstring sHWInfoProgNm[16];
	plcstring sHWInfoDevice[4];
	plcstring sAlmProgNm[16];
	plctime tTLChgRcpBlinkTm;
	plctime tTLErrBlinkTm;
	plctime tBuzErrOnTm;
	plctime tBuzErrRestTm;
	unsigned char usiBuzErrOnCntr;
	plcbit bBuzErrStopSeqEn;
	unsigned char usiBuzErrStopSeqCntr;
	plctime tTLWarnBlinkTm;
	plctime tBuzWarnOnTm;
	plctime tBuzWarnRestTm;
	unsigned char usiBuzWarnOnCntr;
	plcbit bBuzWarnStopSeqEn;
	unsigned char usiBuzWarnStopSeqCntr;
	plctime tTLWarn1BlinkTm;
	plctime tBuzWarn1OnTm;
	plctime tBuzWarn1RestTm;
	unsigned char usiBuzWarn1OnCntr;
	plcbit bBuzWarn1StopSeqEn;
	unsigned char usiBuzWarn1StopSeqCntr;
	plctime tTLWarn2BlinkTm;
	plctime tBuzWarn2OnTm;
	plctime tBuzWarn2RestTm;
	unsigned char usiBuzWarn2OnCntr;
	plcbit bBuzWarn2StopSeqEn;
	unsigned char usiBuzWarn2StopSeqCntr;
	plctime tTLWarn3BlinkTm;
	plctime tBuzWarn3OnTm;
	plctime tBuzWarn3RestTm;
	unsigned char usiBuzWarn3OnCntr;
	plcbit bBuzWarn3StopSeqEn;
	unsigned char usiBuzWarn3StopSeqCntr;
	plctime tTLWarn4BlinkTm;
	plctime tBuzWarn4OnTm;
	plctime tBuzWarn4RestTm;
	unsigned char usiBuzWarn4OnCntr;
	plcbit bBuzWarn4StopSeqEn;
	unsigned char usiBuzWarn4StopSeqCntr;
	plctime tTLWarn5BlinkTm;
	plctime tBuzWarn5OnTm;
	plctime tBuzWarn5RestTm;
	unsigned char usiBuzWarn5OnCntr;
	plcbit bBuzWarn5StopSeqEn;
	unsigned char usiBuzWarn5StopSeqCntr;
	plctime tBuzAlertOnTm;
	plctime tBuzAlertRestTm;
	unsigned char usiBuzAlertOnCntr;
	plcbit bBuzAlertStopSeqEn;
	unsigned char usiBuzAlertStopSeqCntr;
	plctime tTLBlueBlinkTm;
	plctime tTLAmberBlinkTm;
	plctime tTLWhiteBlinkTm;
	plctime tTLRedBlinkTm;
	plctime tTLGreenBlinkTm;
	eTLBuzMod eTLBuzMode;
	unsigned long udiAlmFileKeepDay;
	plcstring sProdRcpProgNm[16];
	plcstring sProdRcpListFileNm[81];
	plcstring sProdRcpSingleFileNm[81];
	plcstring sMpProdRcpProgNm[16];
	plcstring sMpProdRcpFileNm[256];
	plcstring sMpProdRcpPVNm[101];
	plcstring sMcParamProgNm[16];
	plcstring sMcParamFileNm[81];
	plcstring sUsrMgmtProgNm[16];
	plcstring sUSSMEMAProgNm[16];
	plctime tUSSMEMARstDlyTm;
	plctime tUSSMEMASigInChkTm;
	plcstring sDSSMEMAProgNm[16];
	plctime tDSSMEMARstDlyTm;
	plctime tDSSMEMASigInChkTm;
	plcstring sConvProgNm[16];
	plcbit bConvOnDirMod;
	plctime tConvMtrOffDlyTm;
	signed long diConvFwdDlyTm;
	signed long diConvRevDlyTm;
	plcstring sStopperProgNm[16];
	plcbit bStopperTwoCtrlIn;
	plctime tStopperExtDlyTm;
	plctime tStopperRetDlyTm;
	plcstring sClampProgNm[16];
	plcbit bClampTwoCtrlIn;
	plctime tClampExtDlyTm;
	plctime tClampRetDlyTm;
	plcstring sInShutterProgNm[16];
	plcbit bInShutterTwoCtrlIn;
	plctime tInShutterExtTO;
	plctime tInShutterRetTO;
	plcstring sOutShutterProgNm[16];
	plcbit bOutShutterTwoCtrlIn;
	plctime tOutShutterExtTO;
	plctime tOutShutterRetTO;
	plcstring sClamp1ProgNm[16];
	plcbit bClamp1TwoCtrlIn;
	plctime tClamp1ExtTO;
	plctime tClamp1RetTO;
	plcstring sClamp2ProgNm[16];
	plcbit bClamp2TwoCtrlIn;
	plctime tClamp2ExtTO;
	plctime tClamp2RetTO;
	plcstring sClamp3ProgNm[16];
	plcbit bClamp3TwoCtrlIn;
	plctime tClamp3ExtTO;
	plctime tClamp3RetTO;
	signed long diMotorOnDlyTm;
	signed long diMotorOffDlyTm;
	signed long diBrakeOnDlyTm;
	signed long diBrakeOffDlyTm;
	signed long diTimeOut;
	plcstring sAWProgNm[16];
	plcstring sAWDevice[4];
	unsigned char usiAWNode;
	plcbit bAWDir;
	plcbit bAWDirBl;
	signed long diAWPitchInUM;
	signed long diAWMovBlDistInUM;
	tyMotionCANParamInHm tyAWParamInHm;
	tyMotionCANParamInConvert tyAWParamInConvert;
	tyMotionParam tyAWParam;
	tyMotionCANTuning tyAWTuning;
	eServoMotorType eAWServoMotorType;
	plcstring sInvertProgNm[16];
	plcstring sInvertDevice[4];
	unsigned char usiInvertNode;
	plcbit bInvertDir;
	tyMotionCANParamInHm tyInvertParamInHm;
	tyMotionCANParamInConvert tyInvertParamInConvert;
	tyMotionParam tyInvertParam;
	tyMotionCANTuning tyInvertTuning;
	eServoMotorType eInvertServoMotorType;
	plcstring sDIProgNm[16];
	plcstring sMcProgNm[16];
	plcstring sHermesProgNm[16];
	plcstring sHermesRetainFileNm[81];
	plcstring sHermesConfigFileNm[81];
	plcstring sUSHermesProgNm[16];
	unsigned long udiUSHermesFileKeepDay;
	unsigned long udiUSHermesAliveTmInSec;
	plctime tUSHermesConnTO;
	plcstring sUSHermes2ProgNm[16];
	unsigned long udiUSHermes2FileKeepDay;
	unsigned long udiUSHermes2AliveTmInSec;
	plctime tUSHermes2ConnTO;
	plcstring sDSHermesProgNm[16];
	unsigned long udiDSHermesFileKeepDay;
	unsigned long udiDSHermesAliveTmInSec;
	plctime tDSHermesConnTO;
	plcstring sDSHermes2ProgNm[16];
	unsigned long udiDSHermes2FileKeepDay;
	unsigned long udiDSHermes2AliveTmInSec;
	plctime tDSHermes2ConnTO;
	plcstring sRmtHermesProgNm[16];
	plcstring sRmtHermesConfigFileNm[81];
	unsigned long udiRmtHermesFileKeepDay;
	unsigned long udiRmtHermesAliveTmInSec;
	unsigned long udiRmtHermesSndBffrSize;
	unsigned long udiRmtHermesRcvBffrSize;
	plcstring sOpsAWProgNm[16];
	plcstring sOpsInitConvProgNm[16];
	plcstring sOpsInitPneuProgNm[16];
	plcstring sOpsConvProgNm[16];
	plcstring sOpsPneuProgNm[16];
	plcstring sConvBffrProgNm[16];
	plcstring sConvBffrFileNm[81];
	signed short iConvBffrIdx;
	plcstring sLFLeaderProgNm[16];
	plctime tLFLeaderOnlineChkDlyTm;
	plctime tLFLeaderSetTmOffDlyTm;
	plcstring sLFFollowerProgNm[16];
	plcstring sFollower1ProgNm[16];
	plctime tLFFollowerOnlineChkDlyTm;
	plcstring sLCSProgNm[16];
	plcstring sLCSMngRcpProgNm[16];
	plcstring sLCSLFProgNm[16];
	tyUILmt tyProdRcpWidthLmt;
	tyUILmt tyProdRcpMcModLmt;
	tyUILmt tyProdRcpFlippedBrdLmt;
	tyUILmt tyUISSaverTm;
	tyUILmt tyUIConvInitTm;
	tyUILmt tyUITranInErrDlyTm;
	tyUILmt tyUITranOutErrDlyTm;
	tyUILmt tyUIHermesSndAliveTm;
	tyUILmt tyUIHermesLnID;
	tyUILmt tyUIAntiGapSenOnTm;
	tyUILmt tyUIAntiGapSenOffTm;
	tyUILmt tyUILFIndexBeforeOven;
	tyUILmt tyUILFIndexAfterOven;
	tyUILmt tyUIAWTargetPos;
	tyUILmt tyUIAWStepSize;
	tyUILmt tyUIAWNomSpd;
	tyUILmt tyUIAWSlwSpd;
	tyUILmt tyUIInvertTargetPos;
	tyUILmt tyUIInvertStepSize;
	tyUILmt tyUIInvertNomSpd;
	tyUILmt tyUIInvertSlwSpd;
	tyUILmt tyUIHermesHostPort;
	tyUILmt tyUIHermesSvrPort;
	tyUILmt tyUIAutoLogoutTm;
	tyUILmt tyNetworkMode;
	plcbit bUIConvDirRL;
	plcstring sMpNtParamFileNm[256];
	plcstring sMpNtParamPVNm[101];
	plcstring sUIDefaultLoginNm[31];
	plcstring sUIDefaultLoginPw[31];
	plcbit bProjInvertOncePrep;
	plcbit bProjInvertTwicePrep;
	plcbit bUSExtSMEMA2Prep;
	plcstring sUSSMEMA2ProgNm[16];
	plctime tUSSMEMA2RstDlyTm;
	plctime tUSSMEMA2SigInChkTm;
	eConvDir eProjRtrnBrdConvDir;
	plcbit bChinesePrep;
	plcbit bGemanPrep;
	plcbit bHermesSvyPrep;
	plcbit bHermesSvyFirstMcInTheLine;
	plcbit bHermesSvyQueryBoardInfo;
	plcstring sDSHermesRetainFileNm[81];
	signed short iInput;
	signed short iOutput;
} tyNtParam;
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

#ifndef __AS__TYPE_tyUsrMgmtFullDat
#define __AS__TYPE_tyUsrMgmtFullDat
typedef struct tyUsrMgmtFullDat
{	struct tyUsrMgmtParam a_tyAllList[50];
	tyUsrMgmtAccessRight tyAccessRightLvl1;
	tyUsrMgmtAccessRight tyAccessRightLvl2;
	tyUsrMgmtAccessRight tyAccessRightLvl3;
} tyUsrMgmtFullDat;
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
	plcbit bFeatureInsertBrd;
} tyHermesSvyParam;
#endif

#ifndef __AS__TYPE_tyHermesConfiguration
#define __AS__TYPE_tyHermesConfiguration
typedef struct tyHermesConfiguration
{	struct tyHermesUSParam a_tyUSParam[4];
	struct tyHermesDSParam a_tyDSParam[4];
	tyHermesSvyParam tySvyParam;
} tyHermesConfiguration;
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

#ifndef __AS__TYPE_eOperationsStatus
#define __AS__TYPE_eOperationsStatus
typedef enum eOperationsStatus
{	OperationsStatusRun = 0,
	OperationsStatusStop = 1,
	OperationsStatusCycleStopping = 2,
	OperationsStatusStep = 3,
} eOperationsStatus;
#endif

#ifndef __AS__TYPE_eInvertPos
#define __AS__TYPE_eInvertPos
typedef enum eInvertPos
{	InvertCurrPosAtRemote = 0,
	InvertCurrPosAtHome = 1,
	InvertPosInvalid = 2,
} eInvertPos;
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

#ifndef __AS__TYPE_eSimulationsStatus
#define __AS__TYPE_eSimulationsStatus
typedef enum eSimulationsStatus
{	SimulationsStatusRun = 0,
	SimulationsStatusStop = 1,
	SimulationsStatusCycleStopping = 2,
	SimulationsStatusStep = 3,
} eSimulationsStatus;
#endif

#ifndef __AS__TYPE_TouchAction
#define __AS__TYPE_TouchAction
typedef struct TouchAction
{	unsigned long status;
	unsigned long y;
	unsigned long x;
} TouchAction;
#endif

#ifndef __AS__TYPE_eMachineStat
#define __AS__TYPE_eMachineStat
typedef enum eMachineStat
{	Run = 0,
	Stop = 1,
	Manual = 2,
	Warning = 3,
	InError = 4,
} eMachineStat;
#endif

#ifndef __AS__TYPE_tyLFFollowerToLeaderTag
#define __AS__TYPE_tyLFFollowerToLeaderTag
typedef struct tyLFFollowerToLeaderTag
{	plcstring sCurrProdRcp[255];
	signed long diCurrProdWidthUS;
	signed long diCurrProdWidthDS;
	plcstring sCurrMagRcp[31];
	plcstring sIPAddr[16];
	plcstring sMcNm[31];
	plcbit bSectionLeader;
	unsigned char usiRunTm;
	plcbit bProdRcpErr;
	plcbit bProdWidthErr;
	plcbit bMagRcpErr;
	plcbit bSyncTmErr;
	eMachineStat eCurrMachineStat;
	plcbit bProdChgOverActive;
} tyLFFollowerToLeaderTag;
#endif

#ifndef __AS__TYPE_tyLFFollowerInfo
#define __AS__TYPE_tyLFFollowerInfo
typedef struct tyLFFollowerInfo
{	plcbit bOnline;
	unsigned char usiRunTmOld;
} tyLFFollowerInfo;
#endif

#ifndef __AS__TYPE_tyTouchGetActionInternal
#define __AS__TYPE_tyTouchGetActionInternal
typedef struct tyTouchGetActionInternal
{	unsigned long udiHandle;
	TouchAction tyTouchAction;
} tyTouchGetActionInternal;
#endif

#ifndef __AS__TYPE_tyTouchFilterInternal
#define __AS__TYPE_tyTouchFilterInternal
typedef struct tyTouchFilterInternal
{	unsigned long udiXOld;
	unsigned long udiYOld;
} tyTouchFilterInternal;
#endif

struct R_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void R_TRIG(struct R_TRIG* inst);
#ifndef __AS__TYPE_tyTouchGetSlideDistInternal
#define __AS__TYPE_tyTouchGetSlideDistInternal
typedef struct tyTouchGetSlideDistInternal
{	struct R_TRIG fbPressedRise;
	struct R_TRIG fbInternalPressedRise;
	plcbit bValidStartPress;
	plcbit bPressed;
	unsigned long udiXTemp;
	unsigned long udiYTemp;
} tyTouchGetSlideDistInternal;
#endif

struct F_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void F_TRIG(struct F_TRIG* inst);
#ifndef __AS__TYPE_tyTouchGetTapInternal
#define __AS__TYPE_tyTouchGetTapInternal
typedef struct tyTouchGetTapInternal
{	struct R_TRIG fbInternalPressedRise;
	struct F_TRIG fbInternalPressedFall;
	plcbit bPressed;
	plctime tTmTemp;
	unsigned long udiXTemp;
	unsigned long udiYTemp;
	plctime tTmPrev;
	unsigned long udiXPrev;
	unsigned long udiYPrev;
} tyTouchGetTapInternal;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
struct fbTouchFilter
{	unsigned long udiXIn;
	unsigned long udiYIn;
	unsigned long udiXOut;
	unsigned long udiYOut;
	tyTouchFilterInternal tyInternal;
	plcbit bPressedIn;
	plcbit bPressedOut;
};
_BUR_PUBLIC void fbTouchFilter(struct fbTouchFilter* inst);
struct fbTouchGetAction
{	plcstring sVisuNm[81];
	unsigned long udiX;
	unsigned long udiY;
	tyTouchGetActionInternal tyInternal;
	plcbit bPressed;
};
_BUR_PUBLIC void fbTouchGetAction(struct fbTouchGetAction* inst);
struct fbTouchGetSlideDist
{	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned long udiX;
	unsigned long udiY;
	signed long diXDist;
	signed long diYDist;
	tyTouchGetSlideDistInternal tyInternal;
	plcbit bPressed;
};
_BUR_PUBLIC void fbTouchGetSlideDist(struct fbTouchGetSlideDist* inst);
struct fbTouchGetTap
{	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinSingleTapXDiff;
	unsigned long udiMinSingleTapYDiff;
	plctime tMaxDoubleTapTm;
	unsigned long udiMinDoubleTapXDiff;
	unsigned long udiMinDoubleTapYDiff;
	unsigned long udiX;
	unsigned long udiY;
	unsigned long udiSingleTapX;
	unsigned long udiSingleTapY;
	unsigned long udiDoubleTapX;
	unsigned long udiDoubleTapY;
	tyTouchGetTapInternal tyInternal;
	plcbit bPressed;
	plcbit bSingleTap;
	plcbit bDoubleTap;
};
_BUR_PUBLIC void fbTouchGetTap(struct fbTouchGetTap* inst);
#ifndef __AS__TYPE_tyTableCtrlInternal
#define __AS__TYPE_tyTableCtrlInternal
typedef struct tyTableCtrlInternal
{	struct TON fbSingleTapChkDlyTm;
	struct TON fbSliderOffTm;
	struct R_TRIG fbSelectedRowMnlRise;
	struct R_TRIG fbTablePosUpRise;
	struct R_TRIG fbTablePosDownRise;
	struct F_TRIG fbSliderRelease;
	struct fbTouchFilter fbTouchFilter;
	struct fbTouchGetAction fbTouchGetAction;
	struct fbTouchGetSlideDist fbTouchGetSlideDist;
	struct fbTouchGetTap fbTouchGetTap;
	signed short i;
	signed short iTablePos;
	signed short iTablePosTemp;
} tyTableCtrlInternal;
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

struct fbTableCtrl
{	plcstring sVisuNm[81];
	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned short uiSlideScale;
	signed short iTotalData;
	signed short iTotalRow;
	unsigned short uiSelectedRowMnl;
	unsigned short uiSelectedRow;
	unsigned short(* uiSliderStatus);
	struct tyUIHotspot(* a_tyUIHotspot)[15];
	unsigned short(* uiTablePos);
	signed short(* iSliderPos);
	tyTableCtrlInternal tyInternal;
	plcbit bSelectedRowMnl;
	plcbit bTablePosPlus;
	plcbit bTablePosMinus;
	plcbit bTableActive;
	plcbit bSliderActive;
};
_BUR_PUBLIC void fbTableCtrl(struct fbTableCtrl* inst);
struct fbTableCtrl_v2
{	plcstring sVisuNm[81];
	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned short uiSlideScale;
	signed short iTotalData;
	signed short iTotalRow;
	unsigned short uiSelectedRowMnl;
	plcbit(* p_bTableActive);
	plcbit(* p_bSliderActive);
	unsigned short(* p_uiSelectedRow);
	unsigned short(* p_uiSliderStatus);
	struct tyUIHotspot(* pa_tyUIHotspot)[15];
	unsigned short(* p_uiTablePos);
	signed short(* p_iSliderPos);
	tyTableCtrlInternal tyInternal;
	plcbit bSelectedRowMnl;
	plcbit bTablePosPlus;
	plcbit bTablePosMinus;
};
_BUR_PUBLIC void fbTableCtrl_v2(struct fbTableCtrl_v2* inst);
_BUR_LOCAL eUIAction(* p_eAct);
_BUR_LOCAL plcbit(* p_bStartupRun);
_BUR_LOCAL eStartupAction(* p_eStartupStat);
_BUR_LOCAL eFBStatus(* p_eStartupStatus);
_BUR_LOCAL plcstring(* p_sStartupStatTxt)[201];
_BUR_LOCAL eStartupStep(* p_eStartupStep);
_BUR_LOCAL plcstring(* p_sStartupStepTxt)[81];
_BUR_LOCAL plcbit(* p_bStartupGetConfigDone);
_BUR_LOCAL plcbit(* p_bStartupMismatchSetConfigDone);
_BUR_LOCAL plcbit(* p_bStartupUISettingsLoadDone);
_BUR_LOCAL eTLBuzAction(* p_eTLBuzStat);
_BUR_LOCAL eFBStatus(* p_eTLBuzStatus);
_BUR_LOCAL plcstring(* p_sTLBuzStatTxt)[81];
_BUR_LOCAL struct tyAlarmCurr(* p_tyAlarmCurrList)[200];
_BUR_LOCAL unsigned long(* p_tyAlarmRcyList)[200];
_BUR_LOCAL plcstring(* p_tyAlarmHistoryList)[300][201];
_BUR_LOCAL plcbit(* p_bAlarmWarning);
_BUR_LOCAL plcbit(* p_bAlarmErr);
_BUR_LOCAL plcbit(* p_bAlarmInfo);
_BUR_LOCAL plcbit(* p_bAlarmInfoLF);
_BUR_LOCAL plcstring(* p_sAlarmInfoMsg)[201];
_BUR_LOCAL eRstErrAction(* p_eRstErrStat);
_BUR_LOCAL eFBStatus(* p_eRstErrStatus);
_BUR_LOCAL plcstring(* p_sRstErrStatTxt)[201];
_BUR_LOCAL eHWInfoAction(* p_eHWInfoStat);
_BUR_LOCAL eFBStatus(* p_eHWInfoStatus);
_BUR_LOCAL plcstring(* p_sHWInfoStatTxt)[201];
_BUR_LOCAL plcstring(* p_sHWInfoIPAddr)[16];
_BUR_LOCAL plcstring(* p_sHWInfoSubnetMask)[16];
_BUR_LOCAL unsigned long(* p_udiHWInfoEthMode);
_BUR_LOCAL eProdRcpAction(* p_eProdRcpStat);
_BUR_LOCAL eFBStatus(* p_eProdRcpStatus);
_BUR_LOCAL plcstring(* p_sProdRcpStatTxt)[201];
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpFilterList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpSortedList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpInfoOut);
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcp0);
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcp1);
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcp2);
_BUR_LOCAL plcbit(* p_bProdRcpNmEmpty);
_BUR_LOCAL plcbit(* p_bProdRcpListFull);
_BUR_LOCAL plcbit(* p_bProdRcpNmNotExist);
_BUR_LOCAL eMpProdRcpAction(* p_eMpProdRcpStat);
_BUR_LOCAL eFBStatus(* p_eMpProdRcpStatus);
_BUR_LOCAL eMcParamAction(* p_eMcParamStat);
_BUR_LOCAL eFBStatus(* p_eMcParamStatus);
_BUR_LOCAL plcstring(* p_sMcParamStatTxt)[201];
_BUR_LOCAL struct tyMcParam(* p_tyMcParamCurr);
_BUR_LOCAL struct tyNtParam(* p_tyNtParamCurr);
_BUR_LOCAL eUsrMgmtAction(* p_eUsrMgmtStat);
_BUR_LOCAL eFBStatus(* p_eUsrMgmtStatus);
_BUR_LOCAL plcstring(* p_sUsrMgmtStatTxt)[201];
_BUR_LOCAL struct tyUsrMgmtParam(* p_tyUsrMgmtCurrUsr);
_BUR_LOCAL struct tyUsrMgmtAccessRight(* p_tyUsrMgmtCurrAccessRgt);
_BUR_LOCAL struct tyUsrMgmtParam(* p_tyUsrMgmtAllList)[50];
_BUR_LOCAL struct tyUsrMgmtParam(* p_tyUsrMgmtLv2List)[50];
_BUR_LOCAL struct tyUsrMgmtParam(* p_tyUsrMgmtLv3List)[50];
_BUR_LOCAL struct tyUsrMgmtParam(* p_tyUsrMgmtAdminList)[50];
_BUR_LOCAL plcbit(* p_bUsrMgmtNmEmpty);
_BUR_LOCAL plcbit(* p_bUsrMgmtListFull);
_BUR_LOCAL plcbit(* p_bUsrMgmtNmExist);
_BUR_LOCAL plcbit(* p_bUsrMgmtNmNotExist);
_BUR_LOCAL plcbit(* p_bUsrMgmtLastAdmin);
_BUR_LOCAL plcbit(* p_bUsrMgmtLoginSuccess);
_BUR_LOCAL plcbit(* p_bUsrMgmtPwMismatch);
_BUR_LOCAL plcbit(* p_bUsrMgmtUnableDelete);
_BUR_LOCAL struct tyUsrMgmtFullDat(* p_tyUsrMgmtFullData);
_BUR_LOCAL eSMEMAAction(* p_eUSSMEMAStat);
_BUR_LOCAL eFBStatus(* p_eUSSMEMAStatus);
_BUR_LOCAL plcstring(* p_sUSSMEMAStatTxt)[81];
_BUR_LOCAL plcbit(* p_bUSSMEMAUSRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMAUSGdBrdRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMADSRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMAUSB);
_BUR_LOCAL eSMEMAAction(* p_eDSSMEMAStat);
_BUR_LOCAL eFBStatus(* p_eDSSMEMAStatus);
_BUR_LOCAL plcstring(* p_sDSSMEMAStatTxt)[81];
_BUR_LOCAL plcbit(* p_bDSSMEMAUSRdy);
_BUR_LOCAL plcbit(* p_bDSSMEMAUSGdBrdRdy);
_BUR_LOCAL plcbit(* p_bDSSMEMADSRdy);
_BUR_LOCAL plcbit(* p_bDSSMEMADBA);
_BUR_LOCAL plcbit(* p_bDSSMEMADBAStat);
_BUR_LOCAL eSMEMAAction(* p_eUSSMEMA2Stat);
_BUR_LOCAL eFBStatus(* p_eUSSMEMA2Status);
_BUR_LOCAL plcstring(* p_sUSSMEMA2StatTxt)[81];
_BUR_LOCAL plcbit(* p_bUSSMEMA2USRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMA2USGdBrdRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMA2DSRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMA2USB);
_BUR_LOCAL plcbit(* p_bUSSMEMA2Transporting);
_BUR_LOCAL plcbit(* p_bUSHermesUSRdy);
_BUR_LOCAL plcbit(* p_bUSHermesDSRdy);
_BUR_LOCAL plcbit(* p_bUSHermesUSGdRdy);
_BUR_LOCAL plcbit(* p_bUSHermesDSGdRdy);
_BUR_LOCAL plcbit(* p_bUSHermesConnected);
_BUR_LOCAL plcbit(* p_bUSHermesAccDataMnl);
_BUR_LOCAL plcbit(* p_bDSHermesUSRdy);
_BUR_LOCAL plcbit(* p_bDSHermesDSRdy);
_BUR_LOCAL plcbit(* p_bDSHermesUSGdRdy);
_BUR_LOCAL plcbit(* p_bDSHermesDSGdRdy);
_BUR_LOCAL plcbit(* p_bDSHermesConnected);
_BUR_LOCAL eConvAction(* p_eConvStat);
_BUR_LOCAL eFBStatus(* p_eConvStatus);
_BUR_LOCAL plcstring(* p_sConvStatTxt)[81];
_BUR_LOCAL plcbit(* p_bConvHvBrd);
_BUR_LOCAL plcbit(* p_bConvGdBrd);
_BUR_LOCAL eAWAction(* p_eAWOpenStat);
_BUR_LOCAL eFBStatus(* p_eAWOpenStatus);
_BUR_LOCAL plcstring(* p_sAWOpenStatTxt)[201];
_BUR_LOCAL unsigned long(* p_udiAWOpenAxisErrID);
_BUR_LOCAL plcbit(* p_bAWOpenAxisErr);
_BUR_LOCAL plcbit(* p_bAWOpenPwrOn);
_BUR_LOCAL plcbit(* p_bAWOpenIsHomed);
_BUR_LOCAL signed long(* p_diAWOpenActualPos);
_BUR_LOCAL plcbit(* p_bAWOpenFwdLmtSen);
_BUR_LOCAL plcbit(* p_bAWOpenRevLmtSen);
_BUR_LOCAL plcstring(* p_sAWOpenAxisErrTxt)[81];
_BUR_LOCAL plcbit(* p_bAWOpenJogging);
_BUR_LOCAL plcbit(* p_bAWOpenOpenSen);
_BUR_LOCAL plcbit(* p_bAWOpenCloseSen);
_BUR_LOCAL eMotorBrkAction(* p_eInvertStat);
_BUR_LOCAL eFBStatus(* p_eInvertStatus);
_BUR_LOCAL plcstring(* p_sInvertStatTxt)[201];
_BUR_LOCAL eOperationsAction(* p_eOpsStat);
_BUR_LOCAL eFBStatus(* p_eOpsStatus);
_BUR_LOCAL plcstring(* p_sOpsStatTxt)[201];
_BUR_LOCAL eOperationsStatus(* p_eOpsOpsStatus);
_BUR_LOCAL plcbit(* p_bOpsStatusRun);
_BUR_LOCAL plcbit(* p_bOpsStatusStop);
_BUR_LOCAL plcbit(* p_bOpsStatusCycleStop);
_BUR_LOCAL plcbit(* p_bOpsStatusStep);
_BUR_LOCAL plcbit(* p_bOpsUSStandby);
_BUR_LOCAL plcbit(* p_bOpsDSStandby);
_BUR_LOCAL plcbit(* p_bOpsRun);
_BUR_LOCAL plcstring(* p_sOpsInvertStepTxt)[81];
_BUR_LOCAL eInvertPos(* p_eOpsInvertCurrPos);
_BUR_LOCAL plcbit(* p_bOpsInvertStepInitConv);
_BUR_LOCAL plcbit(* p_bOpsInvertStepInitDone);
_BUR_LOCAL plcbit(* p_bOpsInvertStepAWMove);
_BUR_LOCAL plcbit(* p_bOpsSafeMode);
_BUR_LOCAL plcbit(* p_bOpsInvOnceTwicePCBOut);
_BUR_LOCAL plcbit(* p_bOpsInvertStepUSStandby);
_BUR_LOCAL eHermesAction(* p_eHermesStat);
_BUR_LOCAL eFBStatus(* p_eHermesStatus);
_BUR_LOCAL struct tyHermesConfiguration(* p_tyHermesConfiguration);
_BUR_LOCAL eLFAction(* p_eLFLeaderStat);
_BUR_LOCAL eFBStatus(* p_eLFLeaderStatus);
_BUR_LOCAL struct tyLFFollowerInfo(* p_tyLFLeaderFollowerInfo)[50];
_BUR_LOCAL struct tyLFFollowerToLeaderTag(* p_tyLFLeaderFollowerToLeaderTag)[50];
_BUR_LOCAL plcbit(* p_bLFFollowerProdAccDataMnl);
_BUR_LOCAL plcbit(* p_bLFFollowerLdrSeqCtrlInActive);
_BUR_LOCAL plcbit(* p_bLFFollowerUSAllow);
_BUR_LOCAL plcbit(* p_bLFFollowerDSAllow);
_BUR_LOCAL plcbit(* p_bFollower1WaitRlsProd);
_BUR_LOCAL plcbit(* p_bLCSLFAccDataMnl);
_BUR_LOCAL struct tyDigitalInput(* p_tyDI);
_BUR_LOCAL struct tyDigitalOutput(* p_tyDO);
_BUR_LOCAL eDOAction(* p_eDOStat);
_BUR_LOCAL eFBStatus(* p_eDOStatus);
_BUR_LOCAL ePneuAction(* p_eStopperStat);
_BUR_LOCAL eFBStatus(* p_eStopperStatus);
_BUR_LOCAL plcstring(* p_sStopperStatTxt)[201];
_BUR_LOCAL plcbit(* p_bStopperTwoCtrlOut);
_BUR_LOCAL plcbit(* p_bStopperExtCtrl);
_BUR_LOCAL plcbit(* p_bStopperRetCtrl);
_BUR_LOCAL plcbit(* p_bStopperExtended);
_BUR_LOCAL ePneuAction(* p_eClampStat);
_BUR_LOCAL eFBStatus(* p_eClampStatus);
_BUR_LOCAL plcstring(* p_sClampStatTxt)[201];
_BUR_LOCAL plcbit(* p_bClampTwoCtrlOut);
_BUR_LOCAL plcbit(* p_bClampExtCtrl);
_BUR_LOCAL plcbit(* p_bClampRetCtrl);
_BUR_LOCAL ePneuAction(* p_eInShutterStat);
_BUR_LOCAL eFBStatus(* p_eInShutterStatus);
_BUR_LOCAL plcstring(* p_sInShutterStatTxt)[201];
_BUR_LOCAL plcbit(* p_bInShutterExtCtrl);
_BUR_LOCAL plcbit(* p_bInShutterRetCtrl);
_BUR_LOCAL plcbit(* p_bInShutterTwoCtrlOut);
_BUR_LOCAL plcbit(* p_bInShutterExtended);
_BUR_LOCAL plcbit(* p_bInShutterRetracted);
_BUR_LOCAL ePneuAction(* p_eOutShutterStat);
_BUR_LOCAL eFBStatus(* p_eOutShutterStatus);
_BUR_LOCAL plcstring(* p_sOutShutterStatTxt)[201];
_BUR_LOCAL plcbit(* p_bOutShutterExtCtrl);
_BUR_LOCAL plcbit(* p_bOutShutterRetCtrl);
_BUR_LOCAL plcbit(* p_bOutShutterTwoCtrlOut);
_BUR_LOCAL plcbit(* p_bOutShutterExtended);
_BUR_LOCAL plcbit(* p_bOutShutterRetracted);
_BUR_LOCAL ePneuAction(* p_eClamp1Stat);
_BUR_LOCAL eFBStatus(* p_eClamp1Status);
_BUR_LOCAL plcstring(* p_sClamp1StatTxt)[201];
_BUR_LOCAL plcbit(* p_bClamp1ExtCtrl);
_BUR_LOCAL plcbit(* p_bClamp1RetCtrl);
_BUR_LOCAL plcbit(* p_bClamp1TwoCtrlOut);
_BUR_LOCAL plcbit(* p_bClamp1Extended);
_BUR_LOCAL plcbit(* p_bClamp1Retracted);
_BUR_LOCAL ePneuAction(* p_eClamp2Stat);
_BUR_LOCAL eFBStatus(* p_eClamp2Status);
_BUR_LOCAL plcstring(* p_sClamp2StatTxt)[201];
_BUR_LOCAL plcbit(* p_bClamp2ExtCtrl);
_BUR_LOCAL plcbit(* p_bClamp2RetCtrl);
_BUR_LOCAL plcbit(* p_bClamp2TwoCtrlOut);
_BUR_LOCAL plcbit(* p_bClamp2Extended);
_BUR_LOCAL plcbit(* p_bClamp2Retracted);
_BUR_LOCAL ePneuAction(* p_eClamp3Stat);
_BUR_LOCAL eFBStatus(* p_eClamp3Status);
_BUR_LOCAL plcstring(* p_sClamp3StatTxt)[201];
_BUR_LOCAL plcbit(* p_bClamp3ExtCtrl);
_BUR_LOCAL plcbit(* p_bClamp3RetCtrl);
_BUR_LOCAL plcbit(* p_bClamp3TwoCtrlOut);
_BUR_LOCAL plcbit(* p_bClamp3Extended);
_BUR_LOCAL plcbit(* p_bClamp3Retracted);
_BUR_LOCAL plcbit(* p_bMtrBrkRls);
_BUR_LOCAL plcbit(* p_bLeftSen);
_BUR_LOCAL plcbit(* p_bRightSen);
_BUR_LOCAL signed long(* p_diInitTm);
_BUR_LOCAL eConvDir(* p_eDirection);
_BUR_LOCAL struct tyAlmDat(* p_bConvAlmData);
_BUR_LOCAL struct tyAlmDat(* p_bDSSMEMAAlmData);
_BUR_LOCAL plcbit(* p_bUnlockCovPrep);
_BUR_LOCAL plcbit(* p_bMachineSafetyPrep);
_BUR_LOCAL eSimulationsAction(* p_eSimuStat);
_BUR_LOCAL eFBStatus(* p_eSimuStatus);
_BUR_LOCAL eSimulationsStatus(* p_eSimuSimuStatus);
_BUR_LOCAL plcbit(* p_bSimuStatusRun);
_BUR_LOCAL plcbit(* p_bSimuStatusStop);
_BUR_LOCAL plcbit(* p_bSimuStatusCycleStop);
_BUR_LOCAL plcbit(* p_bSimuStatusStep);
_BUR_LOCAL plcbit(* p_bUIBtnSectionLdr);
_BUR_LOCAL plcbit(* p_bLCSSectionLeaderEn);
_BUR_LOCAL eUIAction eAct;
_BUR_LOCAL eUIAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyUIAllAlm tyUIAlmData;
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
_BUR_LOCAL plcbit bCheckDone;
_BUR_LOCAL plcbit bFilterSortP0400;
_BUR_LOCAL plcbit bFilterSortP1040;
_BUR_LOCAL plcbit bUpdateP0400Table;
_BUR_LOCAL plcbit bUpdateP1040Table;
_BUR_LOCAL plcbit bMnlModMachineSafetySigToDS;
_BUR_LOCAL plcbit bMnlModUnlockCover1Req;
_BUR_LOCAL plcbit bMnlModCoverPBLED1;
_BUR_LOCAL plcbit bMnlModBypassTopCover1;
_BUR_LOCAL plcbit bMnlModTopCoverSwitch1;
_BUR_LOCAL plcbit bRtnBrdReset;
_BUR_LOCAL plcbit bSimuMod;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL unsigned short i;
_BUR_LOCAL eUIInitial eUIInit;
_BUR_LOCAL unsigned char usiChgPage;
_BUR_LOCAL ePage eCurrPage;
_BUR_LOCAL ePage eChgPage;
_BUR_LOCAL ePage eChgPageOld;
_BUR_LOCAL plcbit bChgPage;
_BUR_LOCAL plcbit bLoginSuccess;
_BUR_LOCAL plcbit bJogFast;
_BUR_LOCAL plcbit bJogSlow;
_BUR_LOCAL plcbit bJogStopAW;
_BUR_LOCAL plcbit bOnlineTemp;
_BUR_LOCAL plcbit bIPDuplicate;
_BUR_LOCAL plcbit bRefreshProdRcpDetail;
_BUR_LOCAL plcbit bRefreshProdRcpTable;
_BUR_LOCAL plcbit bRefreshUsrMgmtTable;
_BUR_LOCAL plcbit bTeachStopperAtLftPos;
_BUR_LOCAL plcbit bTeachStopperAtRgtPos;
_BUR_LOCAL unsigned char usiConvStep;
_BUR_LOCAL unsigned char usiLoginStep;
_BUR_LOCAL unsigned char usiSelProdRcpStep;
_BUR_LOCAL unsigned char usiSaveProdRcpStep;
_BUR_LOCAL unsigned char usiDelProdRcpStep;
_BUR_LOCAL unsigned char usiProdRcpToXMLStep;
_BUR_LOCAL unsigned char usiProdRcpFromXMLStep;
_BUR_LOCAL unsigned char usiEditUsrMgmtStep;
_BUR_LOCAL unsigned char usiSaveUsrMgmtStep;
_BUR_LOCAL unsigned char usiDelUsrMgmtStep;
_BUR_LOCAL unsigned char usiSaveCommStep;
_BUR_LOCAL unsigned char usiSaveIPAddrStep;
_BUR_LOCAL unsigned char usiSaveSubnetMaskStep;
_BUR_LOCAL unsigned char usiDelMcDetailsStep;
_BUR_LOCAL unsigned char usiTableShftStep;
_BUR_LOCAL unsigned char usiLFLeaderCtrlStep;
_BUR_LOCAL unsigned short uiSSaverCnt;
_BUR_LOCAL struct TON fbSSaverTm;
_BUR_LOCAL struct TON fbErrBlinkTm;
_BUR_LOCAL struct TON fbRstBlinkTm;
_BUR_LOCAL struct TON fbStopBlinkTm;
_BUR_LOCAL struct TON fbMcStatUpdtTm;
_BUR_LOCAL struct TON fbAccDatBlinkTm;
_BUR_LOCAL struct TON fbRlsNewProdBlinkTm;
_BUR_LOCAL struct TON fbBypsInitConvBlinkTm;
_BUR_LOCAL struct TON fbLFLeaderCtrlBlinkTm;
_BUR_LOCAL struct TON fbLmtRstTm;
_BUR_LOCAL struct TON fbJogSlowToFastDlyTm;
_BUR_LOCAL struct TON fbLoadingWarmUpTm;
_BUR_LOCAL struct TON fbLoadingLogoTm;
_BUR_LOCAL tyTable tyP0400Table;
_BUR_LOCAL struct fbTableCtrl fbP0400Table;
_BUR_LOCAL tyTable tyP0700Table;
_BUR_LOCAL struct fbTableCtrl fbP0700Table;
_BUR_LOCAL tyTable tyP1040Table;
_BUR_LOCAL struct fbTableCtrl_v2 fbP1040Table;
_BUR_LOCAL tyTable tyP1050Table;
_BUR_LOCAL struct fbTableCtrl fbP1050Table;
_BUR_LOCAL tyTable tyP1080Table;
_BUR_LOCAL struct fbTableCtrl fbP1080Table;
_BUR_LOCAL unsigned long udiP1040SelectedRow;
_BUR_LOCAL unsigned long udiP1040SelectedRowOld;
_BUR_LOCAL unsigned char usiP1080SelectedLvl;
_BUR_LOCAL unsigned long udiP1080SelectedRow;
_BUR_LOCAL signed short a_iIPPart1[4];
_BUR_LOCAL signed short a_iIPPart2[4];
_BUR_LOCAL signed short a_iSubnetMaskPart1[4];
_BUR_LOCAL plcstring sLFIPAddrTemp[16];
_BUR_LOCAL plcstring sElapseTm[81];
_BUR_LOCAL unsigned long udiElapseTm;
_BUR_LOCAL plcbit bDSTranErr;
_BUR_LOCAL plcbit bChgPageDone;
_BUR_LOCAL plcbit bPromptSessionExp;
_BUR_LOCAL struct TON fbAutoLogoutTm;
_BUR_LOCAL struct fbTouchGetAction fbTouchTm;
_BUR_LOCAL plcbit bUpdateP1040LoadData;
_BUR_LOCAL plcbit bLFRunInBG;
_BUR_LOCAL plcbit bLFDeleteOn;
_BUR_LOCAL plcbit bUpdateP1050Table;
_BUR_LOCAL signed short iIPExtract;
_BUR_LOCAL plcstring sLFSettingCurrentIP[5];
_BUR_LOCAL signed short iLFSettingCurrentIP;
_BUR_LOCAL plcstring sLFSettingAutoFill[16];
_BUR_LOCAL plcstring sLFSettingTemp[16];
_BUR_LOCAL plcbit bLFSettingAutoFill;
_BUR_LOCAL plcbit bLFSettingAutoClear;
_BUR_LOCAL plcbit bLoadingScreen;
_BUR_LOCAL plcstring sTempIPAddr[16];
_BUR_LOCAL plcstring sTempSubnetMask[16];
_BUR_LOCAL unsigned long udiTempEthMode;
_BUR_LOCAL plcbit bTempAddrFillDone;
_BUR_LOCAL plcbit bUpdateP1021Network;
_BUR_LOCAL plcbit bMismatchOverWriteConfig;
_BUR_LOCAL plcbit bIPConfigChgDone;
_BUR_LOCAL plcbit bOverwriteIP;
_BUR_LOCAL plcbit bOverwriteSubnet;
_BUR_LOCAL plcbit bOverwriteEthMode;
_BUR_LOCAL unsigned char usiNetworkModeOld;
_BUR_LOCAL unsigned char usiNetworkModeNew;
_BUR_LOCAL unsigned char usiNetworkModeSelected;
_BUR_LOCAL unsigned char usiChgNetworkConfigStep;
_BUR_LOCAL unsigned char usiRefreshDetailStep;
_BUR_LOCAL plcbit bSaveNetworkPriority;
_BUR_LOCAL plcbit bNetworkConfigChanged;
_BUR_LOCAL unsigned short uiLFStartEditNo;
_BUR_LOCAL unsigned short uiSongIndex;
_BUR_LOCAL plcbit bSongEn;
_BUR_LOCAL plcbit bCoverPB1Timer;
_BUR_LOCAL plcbit bCoverPBLED1;
_BUR_LOCAL struct TON fbCoverPB1CountDownTm;
_BUR_LOCAL struct TON fbCoverPBLED1BlinkTm;
_BUR_LOCAL plcbit bBypassTopCover1;
_BUR_LOCAL plcbit bBypassTopCoverPB1;
_BUR_LOCAL plcbit bMachineSafetySigToUS;
_BUR_LOCAL plcbit bMachineSafetySigToDS;
_BUR_LOCAL plcbit bTopCoverSwitchCoil1;
_BUR_LOCAL plcbit bBypsTopCover;
_BUR_LOCAL plcbit bUnlockCover1Req;
_BUR_LOCAL plcbit bSaveHMISvyConfig;
_BUR_LOCAL plcbit bSaveHMIConfigure;
_BUR_LOCAL plcbit bQueryBoardInfo;
_BUR_LOCAL plcbit bNaviLyr1;
_BUR_LOCAL plcbit bNaviLyr2;
_BUR_LOCAL unsigned short c_uiC0007TableSize;
_BUR_LOCAL unsigned short c_uiP0200TableSize;
_BUR_LOCAL unsigned short c_uiP0400TableSize;
_BUR_LOCAL unsigned short c_uiP0600TableSize;
_BUR_LOCAL unsigned short c_uiP0700TableSize;
_BUR_LOCAL unsigned short c_uiP1040TableSize;
_BUR_LOCAL unsigned short c_uiP1050TableSize;
_BUR_LOCAL unsigned short c_uiP1080TableSize;
_BUR_LOCAL tyUIP0000SSaver tyP0000SSaver;
_BUR_LOCAL tyUIP0001Startup tyP0001Startup;
_BUR_LOCAL tyUIP0002Menu tyP0002Menu;
_BUR_LOCAL tyUIP0100Login tyP0100Login;
_BUR_LOCAL tyUIP0200OpsGen tyP0200OpsGen;
_BUR_LOCAL tyUIP0201OpsConv tyP0201OpsConv;
_BUR_LOCAL tyUIP0300McInfo tyP0300McInfo;
_BUR_LOCAL tyUIP0400ProdSel tyP0400ProdSel;
_BUR_LOCAL tyUIP0600Alm tyP0600Alm;
_BUR_LOCAL tyUIP0700LFCtrl tyP0700LFCtrl;
_BUR_LOCAL tyUIP0900GenIn tyP0900GenIn;
_BUR_LOCAL tyUIP0910GenOut tyP0910GenOut;
_BUR_LOCAL tyUIP0920MtrNPneuCtrl tyP0920MtrNPneuCtrl;
_BUR_LOCAL tyUIP0921ClampNoRS tyP0921ClampNoRS;
_BUR_LOCAL tyUIP0922InletNOutletShutter tyP0922InletNOutletShutter;
_BUR_LOCAL tyUIP0923Stopper tyP0923Stopper;
_BUR_LOCAL tyUIP0924ClampWithRS tyP0924ClampWithRS;
_BUR_LOCAL tyUIP0931ConvInv tyP0931ConvInv;
_BUR_LOCAL tyUIP0934AW tyP0934AW;
_BUR_LOCAL tyUIP0940CommCtrl tyP0940CommCtrl;
_BUR_LOCAL tyUIP0950Simu tyP0950Simu;
_BUR_LOCAL tyUIP1000Lang tyP1000Lang;
_BUR_LOCAL tyUIP1020McSetNavi tyP1020McSetNavi;
_BUR_LOCAL tyUIP1021McSetGen tyP1021McSetGen;
_BUR_LOCAL tyUIP1022McSetVComm tyP1022McSetVComm;
_BUR_LOCAL tyUIP1023McSetHComm tyP1023McSetHComm;
_BUR_LOCAL tyUIP1024McSetAntiGap tyP1024McSetAntiGap;
_BUR_LOCAL tyUIP1026McSetTeach tyP1026McSetTeach;
_BUR_LOCAL tyUIP1040ProdSet tyP1040ProdSet;
_BUR_LOCAL tyUIP1050LFSet tyP1050LFSet;
_BUR_LOCAL tyUIP1080UsrMgmt tyP1080UsrMgmt;
_BUR_LOCAL tyUIP1081UsrAccessRgt tyP1081UsrMgmtUsrAccessRgt;
_BUR_LOCAL tyUICom tyCommon;
_BUR_LOCAL tyUIProperty tyProperty;
_BUR_LOCAL struct tyLyrC0001MotionStd(* p_tyC0001MotionStd);
_BUR_LOCAL struct tyLyrC0002FullMask(* p_tyC0002FullMask);
_BUR_LOCAL struct tyLyrC0003DualMask(* p_tyC0003DualMask);
_BUR_LOCAL struct tyLyrC0004Navi(* p_tyC0004Navi);
_BUR_LOCAL struct tyLyrC0005Main(* p_tyC0005Main);
_BUR_LOCAL struct tyLyrC0006Set(* p_tyC0006Set);
_BUR_LOCAL struct tyLyrC0007Notif(* p_tyC0007Notif);
_BUR_LOCAL struct tyLyrC0008MsgBox(* p_tyC0008MsgBox);
_BUR_LOCAL struct tyLyrC0009Info(* p_tyC0009Info);
_BUR_LOCAL struct tyLyrC0010RcyMsg(* p_tyC0010RcyMsg);
_BUR_LOCAL struct tyLyrC0011Loading(* p_tyC0011Loading);
_BUR_LOCAL struct tyLyrC0012RcpPopUp(* p_tyC0012RcpPopUp);
_BUR_LOCAL struct tyLyrP0000SSaver(* p_tyP0000SSaver);
_BUR_LOCAL struct tyLyrP0001Startup(* p_tyP0001Startup);
_BUR_LOCAL struct tyLyrP0001Initial(* p_tyP0001Initial);
_BUR_LOCAL struct tyLyrP0002Menu(* p_tyP0002Menu);
_BUR_LOCAL struct tyLyrP0100Login(* p_tyP0100Login);
_BUR_LOCAL struct tyLyrP0100Logout(* p_tyP0100Logout);
_BUR_LOCAL struct tyLyrP0200OpsGen(* p_tyP0200OpsGen);
_BUR_LOCAL struct tyLyrP0200OpsUSVSMEMA(* p_tyP0200OpsUSVSMEMA);
_BUR_LOCAL struct tyLyrP0200OpsDSVSMEMA(* p_tyP0200OpsDSVSMEMA);
_BUR_LOCAL struct tyLyrP0200OpsUSVSMEMA1(* p_tyP0200OpsUSVSMEMA1);
_BUR_LOCAL struct tyLyrP0200OpsDSVSMEMA1(* p_tyP0200OpsDSVSMEMA1);
_BUR_LOCAL struct tyLyrP0200OpsUSVSMEMA2(* p_tyP0200OpsUSVSMEMA2);
_BUR_LOCAL struct tyLyrP0200OpsBypsInitConv(* p_tyP0200OpsBypsInitConv);
_BUR_LOCAL struct tyLyrP0201OpsConv(* p_tyP0201OpsConv);
_BUR_LOCAL struct tyLyrP0201OpsConvIOMonitor(* p_tyP0201OpsConvIOMonitor);
_BUR_LOCAL struct tyLyrP0201OpsConvIOMonitorMSafe(* p_tyP0201OpsConvIOMonitorMacSafe);
_BUR_LOCAL struct tyLyrP0201OpsConvIOMonitorXStd(* p_tyP0201OpsConvIOMonitorXStd);
_BUR_LOCAL struct tyLyrP0201OpsConvChgParam(* p_tyP0201OpsConvChgParam);
_BUR_LOCAL struct tyLyrP0201OpsConvBypsInitConv(* p_tyP0201OpsConvBypsInitConv);
_BUR_LOCAL struct tyLyrP0300McInfo(* p_tyP0300McInfo);
_BUR_LOCAL struct tyLyrP0400ProdSel(* p_tyP0400ProdSel);
_BUR_LOCAL struct tyLyrP0400RcpDet(* p_tyP0400RcpDet);
_BUR_LOCAL struct tyLyrP0600Alm(* p_tyP0600Alm);
_BUR_LOCAL struct tyLyrP0700LFCtrl(* p_tyP0700LFCtrl);
_BUR_LOCAL struct tyLyrP0900GenIn(* p_tyP0900GenIn);
_BUR_LOCAL struct tyLyrP0910GenOut(* p_tyP0910GenOut);
_BUR_LOCAL struct tyLyrP0920MtrNPneuCtrl(* p_tyP0920MtrNPneuCtrl);
_BUR_LOCAL struct tyLyrP0921ClampNoRSCom(* p_tyP0921ClampNoRSCom);
_BUR_LOCAL struct tyLyrP0921ClampNoRSDC(* p_tyP0921ClampNoRSDC);
_BUR_LOCAL struct tyLyrP0921ClampNoRSFB(* p_tyP0921ClampNoRSFB);
_BUR_LOCAL struct tyLyrP0922InletShutterCom(* p_tyP0922InletShutterCom);
_BUR_LOCAL struct tyLyrP0922InletShutterDC(* p_tyP0922InletShutterDC);
_BUR_LOCAL struct tyLyrP0922InletShutterFB(* p_tyP0922InletShutterFB);
_BUR_LOCAL struct tyLyrP0922InletShutterDis(* p_tyP0922InletShutterDis);
_BUR_LOCAL struct tyLyrP0922OutletShutterCom(* p_tyP0922OutletShutterCom);
_BUR_LOCAL struct tyLyrP0922OutletShutterDC(* p_tyP0922OutletShutterDC);
_BUR_LOCAL struct tyLyrP0922OutletShutterFB(* p_tyP0922OutletShutterFB);
_BUR_LOCAL struct tyLyrP0922OutletShutterDis(* p_tyP0922OutletShutterDis);
_BUR_LOCAL struct tyLyrP0923StopperCom(* p_tyP0923StopperCom);
_BUR_LOCAL struct tyLyrP0923StopperDC(* p_tyP0923StopperDC);
_BUR_LOCAL struct tyLyrP0923StopperFB(* p_tyP0923StopperFB);
_BUR_LOCAL struct tyLyrP0924Clamp1WithRSCom(* p_tyP0924Clamp1WithRSCom);
_BUR_LOCAL struct tyLyrP0924Clamp1WithRSDC(* p_tyP0924Clamp1WithRSDC);
_BUR_LOCAL struct tyLyrP0924Clamp1WithRSFB(* p_tyP0924Clamp1WithRSFB);
_BUR_LOCAL struct tyLyrP0924Clamp1WithRSDis(* p_tyP0924Clamp1WithRSDis);
_BUR_LOCAL struct tyLyrP0924Clamp2WithRSCom(* p_tyP0924Clamp2WithRSCom);
_BUR_LOCAL struct tyLyrP0924Clamp2WithRSDC(* p_tyP0924Clamp2WithRSDC);
_BUR_LOCAL struct tyLyrP0924Clamp2WithRSFB(* p_tyP0924Clamp2WithRSFB);
_BUR_LOCAL struct tyLyrP0924Clamp2WithRSDis(* p_tyP0924Clamp2WithRSDis);
_BUR_LOCAL struct tyLyrP0924Clamp3WithRSCom(* p_tyP0924Clamp3WithRSCom);
_BUR_LOCAL struct tyLyrP0924Clamp3WithRSDC(* p_tyP0924Clamp3WithRSDC);
_BUR_LOCAL struct tyLyrP0924Clamp3WithRSFB(* p_tyP0924Clamp3WithRSFB);
_BUR_LOCAL struct tyLyrP0924Clamp3WithRSDis(* p_tyP0924Clamp3WithRSDis);
_BUR_LOCAL struct tyLyrP0931ConvCom(* p_tyP0931ConvCom);
_BUR_LOCAL struct tyLyrP0931ConvDC(* p_tyP0931ConvDC);
_BUR_LOCAL struct tyLyrP0931ConvFB(* p_tyP0931ConvFB);
_BUR_LOCAL struct tyLyrP0931InvCom(* p_tyP0931InvCom);
_BUR_LOCAL struct tyLyrP0931InvDC(* p_tyP0931InvDC);
_BUR_LOCAL struct tyLyrP0931InvFB(* p_tyP0931InvFB);
_BUR_LOCAL struct tyLyrP0934AW(* p_tyP0934AW);
_BUR_LOCAL struct tyLyrP0940CommCtrlUSSMEMA(* p_tyP0940CommCtrlUSSMEMA);
_BUR_LOCAL struct tyLyrP0940CommCtrlDSSMEMA(* p_tyP0940CommCtrlDSSMEMA);
_BUR_LOCAL struct tyLyrP0940CommCtrlUSSMEMA2(* p_tyP0940CommCtrlUSSMEMA2);
_BUR_LOCAL struct tyLyrP0950Simu(* p_tyP0950Simu);
_BUR_LOCAL struct tyLyrP1000Lang(* p_tyP1000Lang);
_BUR_LOCAL struct tyLyrP1020McSetNavi(* p_tyP1020McSetNavi);
_BUR_LOCAL struct tyLyrP1021McSetGen(* p_tyP1021McSetGen);
_BUR_LOCAL struct tyLyrP1021McSetNetwork(* p_tyP1021McSetNetwork);
_BUR_LOCAL struct tyLyrP1022McSetVCommSel(* p_tyP1022McSetVCommSel);
_BUR_LOCAL struct tyLyrP1022McSetVCommLF(* p_tyP1022McSetVCommLF);
_BUR_LOCAL struct tyLyrP1022McSetVCommSvy(* p_tyP1022McSetVCommSvy);
_BUR_LOCAL struct tyLyrP1023McSetHCommSel(* p_tyP1023McSetHCommUSSel);
_BUR_LOCAL struct tyLyrP1023McSetHCommSel(* p_tyP1023McSetHCommUSSel2);
_BUR_LOCAL struct tyLyrP1023McSetHCommSMEMA(* p_tyP1023McSetHCommUSSMEMA);
_BUR_LOCAL struct tyLyrP1023McSetHCommSMEMA(* p_tyP1023McSetHCommUSSMEMA2);
_BUR_LOCAL struct tyLyrP1023McSetHCommUSHermes(* p_tyP1023McSetHCommUSHermes);
_BUR_LOCAL struct tyLyrP1023McSetHCommSel(* p_tyP1023McSetHCommDSSel);
_BUR_LOCAL struct tyLyrP1023McSetHCommSMEMA(* p_tyP1023McSetHCommDSSMEMA);
_BUR_LOCAL struct tyLyrP1023McSetHCommDSHermes(* p_tyP1023McSetHCommDSHermes);
_BUR_LOCAL struct tyLyrP1023McSetHCommGen(* p_tyP1023McSetHCommGen);
_BUR_LOCAL struct tyLyrP1024McSetAntiGap(* p_tyP1024McSetAntiGap);
_BUR_LOCAL struct tyLyrP1040ProdSet(* p_tyP1040ProdSet);
_BUR_LOCAL struct tyLyrP1050LFSetLdr(* p_tyP1050LFSetLdr);
_BUR_LOCAL struct tyLyrP1050LFSetLdrEdit(* p_tyP1050LFSetLdrEdit);
_BUR_LOCAL struct tyLyrP1080UsrMgmt(* p_tyP1080UsrMgmt);
_BUR_LOCAL struct tyLyrP1080UsrMgmtAct(* p_tyP1080UsrMgmtAct);
_BUR_LOCAL struct tyLyrP1081UsrMgmtUsrAccessRgtSel(* p_tyP1081UsrMgmtUsrAccessRgtSel);
_BUR_LOCAL struct tyLyrP1081UsrMgmtUsrAccessRgt(* p_tyP1081UsrMgmtUsrAccessRgt);
_BUR_LOCAL struct tyTxtSnippets(* p_tyTxtSnippets);
_BUR_LOCAL struct tyKeypad(* p_tyKeypad);
_BUR_LOCAL struct tyVisu(* p_tyVisu);
_GLOBAL unsigned long c_udiAlarmCurrMax;
_GLOBAL unsigned long c_udiAlarmHistoryMax;
_GLOBAL unsigned long c_udiProdRcpMax;
_GLOBAL unsigned long c_udiUsrMgmtMax;
_GLOBAL signed long c_diLFClntNum;
_GLOBAL signed long c_diHermesConfigMaxIdx;
