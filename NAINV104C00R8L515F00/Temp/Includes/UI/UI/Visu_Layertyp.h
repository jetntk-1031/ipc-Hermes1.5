/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700467268_2_
#define _BUR_1700467268_2_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct tyLyrC0001MotionStd
{	struct tyUIBitmap tyBitmapOrigin;
	struct tyUIBitmap tyBitmapPwr;
	struct tyUIBitmap tyBitmapRst;
	struct tyUIBitmap tyBitmapStop;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnPosLmtSen;
	struct tyUIBtn tyBtnNegLmtSen;
	struct tyUIBtn tyBtnJogPos;
	struct tyUIBtn tyBtnJogNeg;
	struct tyUIBtn tyBtnMovAbs;
	struct tyUIBtn tyBtnMovRel;
	struct tyUIBtn tyBtnOrigin;
	struct tyUIBtn tyBtnPwr;
	struct tyUIBtn tyBtnRst;
	struct tyUIBtn tyBtnStop;
	struct tyUINum tyNumCurrPos;
	struct tyUINum tyNumErrCode;
	struct tyUINum tyNumNomSpd;
	struct tyUINum tyNumSlwSpd;
	struct tyUINum tyNumStepSize;
	struct tyUINum tyNumTargetPos;
	struct tyUILString tyStringStat;
	struct tyUILyr tyLyr;
} tyLyrC0001MotionStd;

typedef struct tyLyrC0001MotionStdAW
{	struct tyUIBitmap tyBitmapOrigin;
	struct tyUIBitmap tyBitmapPwr;
	struct tyUIBitmap tyBitmapRst;
	struct tyUIBitmap tyBitmapStop;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnOpenLmtSen;
	struct tyUIBtn tyBtnCloseLmtSen;
	struct tyUIBtn tyBtnJogOpen;
	struct tyUIBtn tyBtnJogClose;
	struct tyUIBtn tyBtnMovAbs;
	struct tyUIBtn tyBtnMovRel;
	struct tyUIBtn tyBtnOrigin;
	struct tyUIBtn tyBtnPwr;
	struct tyUIBtn tyBtnRst;
	struct tyUIBtn tyBtnStop;
	struct tyUINum tyNumCurrPos;
	struct tyUINum tyNumErrCode;
	struct tyUINum tyNumNomSpd;
	struct tyUINum tyNumSlwSpd;
	struct tyUINum tyNumStepSize;
	struct tyUINum tyNumTargetPos;
	struct tyUILString tyStringStat;
	struct tyUILyr tyLyr;
} tyLyrC0001MotionStdAW;

typedef struct tyLyrC0001MotionStdInvert
{	struct tyUIBitmap tyBitmapOrigin;
	struct tyUIBitmap tyBitmapPwr;
	struct tyUIBitmap tyBitmapRst;
	struct tyUIBitmap tyBitmapStop;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnHmLmtSen;
	struct tyUIBtn tyBtnRmtLmtSen;
	struct tyUIBtn tyBtnJogHm;
	struct tyUIBtn tyBtnJogRmt;
	struct tyUIBtn tyBtnMovAbs;
	struct tyUIBtn tyBtnMovRel;
	struct tyUIBtn tyBtnOrigin;
	struct tyUIBtn tyBtnPwr;
	struct tyUIBtn tyBtnRst;
	struct tyUIBtn tyBtnStop;
	struct tyUINum tyNumCurrPos;
	struct tyUINum tyNumErrCode;
	struct tyUINum tyNumNomSpd;
	struct tyUINum tyNumSlwSpd;
	struct tyUINum tyNumStepSize;
	struct tyUINum tyNumTargetPos;
	struct tyUILString tyStringStat;
	struct tyUILyr tyLyr;
} tyLyrC0001MotionStdInvert;

typedef struct tyLyrC0002FullMask
{	struct tyUIBtn tyBtnMask;
	struct tyUILyr tyLyr;
} tyLyrC0002FullMask;

typedef struct tyLyrC0003DualMask
{	struct tyUIBtn tyBtnLeftMask;
	struct tyUIBtn tyBtnRgtMask;
	struct tyUILyr tyLyr;
} tyLyrC0003DualMask;

typedef struct tyLyrC0004Navi
{	struct tyUIBtn tyBtnLeft;
	struct tyUIBtn tyBtnRgt;
	struct tyUIBtn tyBtnBack;
	struct tyUIBitmap tyBitmapPageDisp;
	struct tyUILyr tyLyr;
} tyLyrC0004Navi;

typedef struct tyLyrC0005Main
{	struct tyUIBtn tyBtnHome;
	struct tyUIBtn tyBtnNotification;
	struct tyUIBtn tyBtnStart;
	struct tyUIBtn tyBtnStop;
	struct tyUIBtn tyBtnStep;
	struct tyUIBtn tyBtnReset;
	struct tyUIBitmap tyBitmapStatBar;
	struct tyUIBtn tyBtnMuteBuz;
	struct tyUIHotspot tyHotspotNaviStart;
	struct tyUIBtn tyBtnAlarm;
} tyLyrC0005Main;

typedef struct tyLyrC0006Set
{	struct tyUIBtn tyBtnSave;
	struct tyUILyr tyLyr;
} tyLyrC0006Set;

typedef struct tyLyrC0007Notif
{	struct tyUITxt tyTxtUsrLv;
	struct tyUITxt tyTxtLFMc;
	struct tyUIString tyStringUsrNm;
	struct tyUIHotspot tyHotspotClose;
	struct tyUIHotspot tyHotspotShowInfo;
	struct tyUIBitmap tyBitmapShowInfo;
	struct tyUILyr tyLyr;
} tyLyrC0007Notif;

typedef struct tyLyrC0008MsgBox
{	struct tyUIBitmap tyBitmapIcon;
	struct tyUITxt tyTxtTitle;
	struct tyUITxt tyTxtMsg;
	struct tyUIBtn tyBtnYes;
	struct tyUIBtn tyBtnNo;
	struct tyUILyr tyLyr;
} tyLyrC0008MsgBox;

typedef struct tyLyrC0009Info
{	struct tyUILString tyStringInfo;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrC0009Info;

typedef struct tyLyrC0010RcyMsg
{	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
	struct tyUIAlmTxt tyTxtMsg;
} tyLyrC0010RcyMsg;

typedef struct tyLyrC0011Loading
{	struct tyUIBitmap tyUILoad;
	struct tyUILString tyStringMsg;
	struct tyUILyr tyLyr;
} tyLyrC0011Loading;

typedef struct tyLyrC0012RcpPopUp
{	struct tyUILString tyStringInfo;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrC0012RcpPopUp;

typedef struct tyLyrP0000SSaver
{	struct tyUITxt tyTxtMcStat;
	struct tyUILString tyTxtMcNm;
	struct tyUIBitmap tyBitmapStat;
	struct tyUILyr tyLyr;
} tyLyrP0000SSaver;

typedef struct tyLyrP0001Startup
{	struct tyUIBarGraph tyBarGraphStartup;
	struct tyUITxt tyTxtStartupStat;
	struct tyUILyr tyLyr;
} tyLyrP0001Startup;

typedef struct tyLyrP0001Initial
{	struct tyUILyr tyLyr;
} tyLyrP0001Initial;

typedef struct tyLyrP0002Menu
{	struct tyUIBtn tyBtnAlm;
	struct tyUIBtn tyBtnCommCtrl;
	struct tyUIBtn tyBtnGenInput;
	struct tyUIBtn tyBtnGenOutput;
	struct tyUIBtn tyBtnLang;
	struct tyUIBtn tyBtnLFCtrl;
	struct tyUIBtn tyBtnLFSet;
	struct tyUIBtn tyBtnLogin;
	struct tyUIBtn tyBtnMcInfo;
	struct tyUIBtn tyBtnMcSet;
	struct tyUIBtn tyBtnMnlRst;
	struct tyUIBtn tyBtnMovCtrl;
	struct tyUIBtn tyBtnOpt;
	struct tyUIBtn tyBtnProdSel;
	struct tyUIBtn tyBtnProdSet;
	struct tyUIBtn tyBtnSimu;
	struct tyUIBtn tyBtnUsrMgmt;
	struct tyUIBitmap tyBitmapMaskProdSetLCS;
	struct tyUILyr tyGenMaskLyr;
	struct tyUILyr tySetMaskLyr;
	struct tyUIHotspot tyHotspotRstRtnBrd;
} tyLyrP0002Menu;

typedef struct tyLyrP0100Login
{	struct tyUIBtn tyBtnLogin;
	struct tyUIHotspot tyHotspotShowLoginLvl;
	struct tyUIHotspot tyHotspotBypassLogin;
	struct tyUIString tyStringPw;
	struct tyUIString tyStringUsrNm;
	struct tyUILyr tyLyr;
} tyLyrP0100Login;

typedef struct tyLyrP0100Logout
{	struct tyUIBtn tyBtnLogout;
	struct tyUILyr tyLyr;
} tyLyrP0100Logout;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyLyrP0200OpsGen
{	struct tyUIHotspot a_tyHotspotRcyMsg[6];
	struct tyUILString a_tyStringAlm[6];
	struct tyUIBitmap tyBitmapDSCommIcon;
	struct tyUIBitmap tyBitmapDSCommIn;
	struct tyUIBitmap tyBitmapDSCommOut;
	struct tyUIBitmap tyBitmapDSCommIn1;
	struct tyUIBitmap tyBitmapDSCommOut1;
	struct tyUIBitmap tyBitmapUSCommIcon;
	struct tyUIBitmap tyBitmapUSCommIn;
	struct tyUIBitmap tyBitmapUSCommOut;
	struct tyUIBitmap tyBitmapUSCommIn1;
	struct tyUIBitmap tyBitmapUSCommOut1;
	struct tyUIBitmap tyBitmapUSCommIcon2;
	struct tyUIBitmap tyBitmapUSCommIn2;
	struct tyUIBitmap tyBitmapUSCommOut2;
	struct tyUIBitmap tyBitmapDir1;
	struct tyUIBitmap tyBitmapDir2;
	struct tyUIBitmap tyBitmapConvPCB;
	struct tyUIBitmap tyBitmapStackerPCB;
	struct tyUIBitmap tyBitmapAccDat;
	struct tyUIBitmap tyBitmapRlsNewProd;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBitmap tyBitmapBypassTopCover1;
	struct tyUIBtn tyBtnBypassTopCover1;
	struct tyUIBtn tyBtnAccDat;
	struct tyUIBtn tyBtnRlsNewProd;
	struct tyUIBtn tyBtnPCBReset;
	struct tyUIHotspot tyHotspotMc;
	struct tyUIHotspot tyHotspotDSVirtual;
	struct tyUIHotspot tyHotspotUSVirtual;
	struct tyUIHotspot tyHotspotDSVirtual1;
	struct tyUIHotspot tyHotspotUSVirtual1;
	struct tyUIHotspot tyHotspotUSVirtual2;
	struct tyUITxt tyTxtUS;
	struct tyUITxt tyTxtUS1;
	struct tyUITxt tyTxtUS2;
	struct tyUITxt tyTxtDS;
	struct tyUITxt tyTxtDS1;
	struct tyUITxt tyTxtLdrInActiveCtrl;
	struct tyUIBitmap tyBitmapWarningLF;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsGen;
#else
/* Data type tyLyrP0200OpsGen not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct tyLyrP0200OpsUSVSMEMA
{	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnDual;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsUSVSMEMA;

typedef struct tyLyrP0200OpsDSVSMEMA
{	struct tyUIBtn tyBtnDSBStat;
	struct tyUIBtn tyBtnDSB;
	struct tyUIBtn tyBtnDual;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsDSVSMEMA;

typedef struct tyLyrP0200OpsUSVSMEMA1
{	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnDual;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsUSVSMEMA1;

typedef struct tyLyrP0200OpsDSVSMEMA1
{	struct tyUIBtn tyBtnDSBStat;
	struct tyUIBtn tyBtnDSB;
	struct tyUIBtn tyBtnDual;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsDSVSMEMA1;

typedef struct tyLyrP0200OpsUSVSMEMA2
{	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnDual;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsUSVSMEMA2;

typedef struct tyLyrP0200OpsBypsInitConv
{	struct tyUIBtn tyBtnBypsInitConv;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrP0200OpsBypsInitConv;

typedef struct tyLyrP0201OpsConv
{	struct tyUIBitmap tyBitmapAccDat;
	struct tyUIBitmap tyBitmapRlsNewProd;
	struct tyUIBitmap tyBitmapConvPCB;
	struct tyUIBitmap tyBitmapBypassTopCover1;
	struct tyUIBtn tyBtnAccDat;
	struct tyUIBtn tyBtnRlsNewProd;
	struct tyUIBtn tyBtnChgParam;
	struct tyUIBtn tyBtnBypassTopCover1;
	struct tyUIHotspot tyHotspotIOMonitor;
	struct tyUINum tyNumProdWidth;
	struct tyUINum tyNumProdWidth2;
	struct tyUILString tyStringProdNm;
	struct tyUILString tyStringMcStatus;
	struct tyUITxt tyTxtMod;
	struct tyUITxt tyLblFlippedBrd;
	struct tyUITxt tyTxtFlippedBrd;
	struct tyUIString tyStringMatchCode;
	struct tyUITxt tyTxtLdrInActiveCtrl;
	struct tyUIBitmap tyBitmapWarningLF;
	struct tyUIBitmap tyBitmapMc;
	struct tyUILyr tyLyr;
	struct tyUIHotspot tyHotspotShowLRcp;
} tyLyrP0201OpsConv;

typedef struct tyLyrP0201OpsConvIOMonitor
{	struct tyUIBtn tyBtnSafetyRlySig;
	struct tyUIBtn tyBtnEStop;
	struct tyUIBtn tyBtnCoverSWSig;
	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnDSB;
	struct tyUIBtn tyBtnConvLftSen;
	struct tyUIBtn tyBtnConvRgtSen;
	struct tyUIBtn tyBtnPressureSW;
	struct tyUIBtn tyBtnThermalPrtSig;
	struct tyUIBtn tyBtnCoatingSen;
	struct tyUIBtn tyBtnUSWidthChkSen;
	struct tyUIBtn tyBtnDSWidthChkSen;
	struct tyUIBtn tyBtnInvertHomeSen;
	struct tyUIBtn tyBtnInvertRemoteSen;
	struct tyUIBtn tyBtnInletShutterOpenRS;
	struct tyUIBtn tyBtnInletShutterCloseRS;
	struct tyUIBtn tyBtnOutletShutterOpenRS;
	struct tyUIBtn tyBtnOutletShutterCloseRS;
	struct tyUIBtn tyBtnSafetyRlyRst;
	struct tyUIBtn tyBtnTLGreen;
	struct tyUIBtn tyBtnTLAmber;
	struct tyUIBtn tyBtnTLRed;
	struct tyUIBtn tyBtnTLWhite;
	struct tyUIBtn tyBtnTLBlue;
	struct tyUIBtn tyBtnBuzzer;
	struct tyUIBtn tyBtnCoatingRetCtrl;
	struct tyUIBtn tyBtnUSB;
	struct tyUIBtn tyBtnDBA;
	struct tyUIBtn tyBtnDBAStat;
	struct tyUIBtn tyBtnConvMtrCW;
	struct tyUIBtn tyBtnConvMtrCCW;
	struct tyUIBtn tyBtnStprUnblkCtrl;
	struct tyUIBtn tyBtnStprBlkCtrl;
	struct tyUIBtn tyBtnInvertHome;
	struct tyUIBtn tyBtnInvertRemote;
	struct tyUIBtn tyBtnInvertBrake;
	struct tyUIBtn tyBtnMtrPwrRly;
	struct tyUIBtn tyBtnClampCtrl;
	struct tyUIBtn tyBtnUnclampCtrl;
	struct tyUIBtn tyBtnInShutterOpenCtrl;
	struct tyUIBtn tyBtnInShutterCloseCtrl;
	struct tyUIBtn tyBtnOutShutterOpenCtrl;
	struct tyUIBtn tyBtnOutShutterCloseCtrl;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrP0201OpsConvIOMonitor;

typedef struct tyLyrP0201OpsConvIOMonitorMSafe
{	struct tyUIBtn tyBtnSafetyRlySig;
	struct tyUIBtn tyBtnEStop;
	struct tyUIBtn tyBtnCoverSWSig;
	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnDSB;
	struct tyUIBtn tyBtnConvLftSen;
	struct tyUIBtn tyBtnConvRgtSen;
	struct tyUIBtn tyBtnPressureSW;
	struct tyUIBtn tyBtnThermalPrtSig;
	struct tyUIBtn tyBtnCoatingSen;
	struct tyUIBtn tyBtnUSWidthChkSen;
	struct tyUIBtn tyBtnDSWidthChkSen;
	struct tyUIBtn tyBtnInvertHomeSen;
	struct tyUIBtn tyBtnInvertRemoteSen;
	struct tyUIBtn tyBtnInletShutterOpenRS;
	struct tyUIBtn tyBtnInletShutterCloseRS;
	struct tyUIBtn tyBtnOutletShutterOpenRS;
	struct tyUIBtn tyBtnOutletShutterCloseRS;
	struct tyUIBtn tyBtnClamp2Sen;
	struct tyUIBtn tyBtnClamp3Sen;
	struct tyUIBtn tyBtnClampRS1;
	struct tyUIBtn tyBtnUnClampRS1;
	struct tyUIBtn tyBtnClampRS2;
	struct tyUIBtn tyBtnUnClampRS2;
	struct tyUIBtn tyBtnClampRS3;
	struct tyUIBtn tyBtnUnClampRS3;
	struct tyUIBtn tyBtnCoverSWSig2;
	struct tyUIBtn tyBtnSafetySigFromUS;
	struct tyUIBtn tyBtnSafetySigFromDS;
	struct tyUIBtn tyBtnUnlockCoverSigFromUS;
	struct tyUIBtn tyBtnUnlockCoverSigFromDS;
	struct tyUIBtn tyBtnCoverUnlockPB1;
	struct tyUIBtn tyBtnSafetyRlyRst;
	struct tyUIBtn tyBtnTLGreen;
	struct tyUIBtn tyBtnTLAmber;
	struct tyUIBtn tyBtnTLRed;
	struct tyUIBtn tyBtnTLWhite;
	struct tyUIBtn tyBtnTLBlue;
	struct tyUIBtn tyBtnBuzzer;
	struct tyUIBtn tyBtnCoatingRetCtrl;
	struct tyUIBtn tyBtnUSB;
	struct tyUIBtn tyBtnDBA;
	struct tyUIBtn tyBtnDBAStat;
	struct tyUIBtn tyBtnConvMtrCW;
	struct tyUIBtn tyBtnConvMtrCCW;
	struct tyUIBtn tyBtnInvertHome;
	struct tyUIBtn tyBtnInvertRemote;
	struct tyUIBtn tyBtnInvertBrake;
	struct tyUIBtn tyBtnMtrPwrRly;
	struct tyUIBtn tyBtnInShutterOpenCtrl;
	struct tyUIBtn tyBtnInShutterCloseCtrl;
	struct tyUIBtn tyBtnOutShutterOpenCtrl;
	struct tyUIBtn tyBtnOutShutterCloseCtrl;
	struct tyUIBtn tyBtnClamp1Ctrl;
	struct tyUIBtn tyBtnUnclamp1Ctrl;
	struct tyUIBtn tyBtnClamp2Ctrl;
	struct tyUIBtn tyBtnUnclamp2Ctrl;
	struct tyUIBtn tyBtnClamp3Ctrl;
	struct tyUIBtn tyBtnUnclamp3Ctrl;
	struct tyUIBtn tyBtnTopCvrUnlckToDS;
	struct tyUIBtn tyBtnTopCvrUnlckToUS;
	struct tyUIBtn tyBtniMachineSafetySigToDS;
	struct tyUIBtn tyBtnMachineSafetySigToUS;
	struct tyUIBtn tyBtnPBLED1;
	struct tyUIBtn tyBtnBypassTopCover1;
	struct tyUIBtn tyBtnSafetyTopCoverSWCoil1;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrP0201OpsConvIOMonitorMSafe;

typedef struct tyLyrP0201OpsConvIOMonitorXStd
{	struct tyUIBtn tyBtnSafetyRlySig;
	struct tyUIBtn tyBtnEStop;
	struct tyUIBtn tyBtnCoverSWSig;
	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnDSB;
	struct tyUIBtn tyBtnUBA2;
	struct tyUIBtn tyBtnUBAStat2;
	struct tyUIBtn tyBtnConvLftSen;
	struct tyUIBtn tyBtnConvRgtSen;
	struct tyUIBtn tyBtnPressureSW;
	struct tyUIBtn tyBtnThermalPrtSig;
	struct tyUIBtn tyBtnCoatingSen;
	struct tyUIBtn tyBtnUSWidthChkSen;
	struct tyUIBtn tyBtnDSWidthChkSen;
	struct tyUIBtn tyBtnInvertHomeSen;
	struct tyUIBtn tyBtnInvertRemoteSen;
	struct tyUIBtn tyBtnInletShutterOpenRS;
	struct tyUIBtn tyBtnInletShutterCloseRS;
	struct tyUIBtn tyBtnOutletShutterOpenRS;
	struct tyUIBtn tyBtnOutletShutterCloseRS;
	struct tyUIBtn tyBtnClamp2Sen;
	struct tyUIBtn tyBtnClamp3Sen;
	struct tyUIBtn tyBtnClampRS1;
	struct tyUIBtn tyBtnUnClampRS1;
	struct tyUIBtn tyBtnClampRS2;
	struct tyUIBtn tyBtnUnClampRS2;
	struct tyUIBtn tyBtnClampRS3;
	struct tyUIBtn tyBtnUnClampRS3;
	struct tyUIBtn tyBtnSafetyRlyRst;
	struct tyUIBtn tyBtnTLGreen;
	struct tyUIBtn tyBtnTLAmber;
	struct tyUIBtn tyBtnTLRed;
	struct tyUIBtn tyBtnTLWhite;
	struct tyUIBtn tyBtnTLBlue;
	struct tyUIBtn tyBtnBuzzer;
	struct tyUIBtn tyBtnCoatingRetCtrl;
	struct tyUIBtn tyBtnUSB;
	struct tyUIBtn tyBtnDBA;
	struct tyUIBtn tyBtnDBAStat;
	struct tyUIBtn tyBtnUSB2;
	struct tyUIBtn tyBtnConvMtrCW;
	struct tyUIBtn tyBtnConvMtrCCW;
	struct tyUIBtn tyBtnInvertHome;
	struct tyUIBtn tyBtnInvertRemote;
	struct tyUIBtn tyBtnInvertBrake;
	struct tyUIBtn tyBtnMtrPwrRly;
	struct tyUIBtn tyBtnInShutterOpenCtrl;
	struct tyUIBtn tyBtnInShutterCloseCtrl;
	struct tyUIBtn tyBtnOutShutterOpenCtrl;
	struct tyUIBtn tyBtnOutShutterCloseCtrl;
	struct tyUIBtn tyBtnClamp1Ctrl;
	struct tyUIBtn tyBtnUnclamp1Ctrl;
	struct tyUIBtn tyBtnClamp2Ctrl;
	struct tyUIBtn tyBtnUnclamp2Ctrl;
	struct tyUIBtn tyBtnClamp3Ctrl;
	struct tyUIBtn tyBtnUnclamp3Ctrl;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrP0201OpsConvIOMonitorXStd;

typedef struct tyLyrP0201OpsConvChgParam
{	struct tyUIDrpDn tyDrpDnMcMode;
	struct tyUIDrpDn tyDrpDnFlippedBrd;
	struct tyUINum tyNumProdWidth;
	struct tyUIBtn tyBtnSave;
	struct tyUIBtn tyBtnCancel;
	struct tyUILyr tyLyr;
} tyLyrP0201OpsConvChgParam;

typedef struct tyLyrP0201OpsConvBypsInitConv
{	struct tyUIBtn tyBtnBypsInitConv;
	struct tyUIHotspot tyHotspotClose;
	struct tyUILyr tyLyr;
} tyLyrP0201OpsConvBypsInitConv;

typedef struct tyLyrP0300McInfo
{	struct tyUITxt tyTxtNtAddr;
	struct tyUIString tyStringMcNm;
	struct tyUIString tyStringJobNo;
	struct tyUIString tyStringSoftwareVer;
	struct tyUIBtn tyBtnPlaySong;
	struct tyUIDrpDn tyDrpDnSong;
	struct tyUILyr tyLyr;
} tyLyrP0300McInfo;

typedef struct tyLyrP0400ProdSel
{	struct tyUIBtn tyBtnLoad;
	struct tyUIBtn tyBtnPreview;
	struct tyUINum tyNumProdWidth;
	struct tyUINum tyNumProdWidth2;
	struct tyUILString tyStringRecipeNm;
	struct tyUILString tyStringSearch;
	struct tyUITable tyTableRecipe;
	struct tyUITxt tyTxtMcMod;
	struct tyUITxt tyTxtFlippedBrd;
	struct tyUITxt tyTxtMatchCodeLbl;
	struct tyUIString tyStringMatchCode;
	struct tyUIBtn tyBtnSort;
	struct tyUILyr tyLyr;
	struct tyUIHotspot tyHotspotShowLRcp;
} tyLyrP0400ProdSel;

typedef struct tyLyrP0400RcpDet
{	struct tyUIHotspot tyHotspotClose;
	struct tyUINum tyNumProdWidth;
	struct tyUINum tyNumProdWidth2;
	struct tyUILString tyStringRecipeNm;
	struct tyUITxt tyTxtMcMod;
	struct tyUITxt tyTxtFlippedBrd;
	struct tyUITxt tyTxtMatchCodeLbl;
	struct tyUIString tyStringMatchCode;
	struct tyUILyr tyLyr;
	struct tyUIHotspot tyHotspotShowLRcp;
} tyLyrP0400RcpDet;

typedef struct tyLyrP0600Alm
{	struct tyUIBtn tyBtnHistory;
	struct tyUIBtn tyBtnCurr;
	struct tyUILString a_tyStringAlm[19];
	struct tyUIHotspot a_tyHotspotAlm[19];
	struct tyUILyr tyLyr;
	struct tyUIAlarm tyAlarm;
	struct tyUIBtn tyBtnHistoryUp;
	struct tyUIBtn tyBtnHistoryDown;
} tyLyrP0600Alm;

typedef struct tyLyrP0700LFCtrl
{	struct tyUIBtn tyBtnChgAll;
	struct tyUIBtn tyBtnChgSeqAuto;
	struct tyUIBtn tyBtnChgSeqMnl;
	struct tyUIBtn tyBtnSyncTm;
	struct tyUIBitmap tyBitmapChgAll;
	struct tyUIBitmap tyBitmapChgSeqAuto;
	struct tyUIBitmap tyBitmapChgSeqMnl;
	struct tyUIBitmap tyBitmapSyncTm;
	struct tyUITable1 tyTable1List;
	struct tyUILyr tyLyr;
} tyLyrP0700LFCtrl;

typedef struct tyLyrP0900GenIn
{	struct tyUIBtn tyBtnEStop;
	struct tyUIBtn tyBtnCoverSW;
	struct tyUIBtn tyBtnSafety;
	struct tyUILyr tyLyr;
	struct tyUIBtn tyBtnUSWidthChkSen;
	struct tyUIBtn tyBtnDSWidthChkSen;
	struct tyUIBtn tyBtnPressureSW;
	struct tyUIBtn tyBtnThermalPrtSig;
	struct tyUIBtn tyBtnUnlkCovPB;
	struct tyUIBtn tyBtnSafetySigFromUS;
	struct tyUIBtn tyBtnSafetySigFromDS;
	struct tyUIBtn tyBtnUlkCoverFromDS;
	struct tyUIBtn tyBtnUlkCoverFromUS;
	struct tyUIBtn tyBtnTopCovSwSIg;
	struct tyUILyr tySigLyr;
	struct tyUILyr tyWidthChkLyr;
	struct tyUILyr tyMachSafetyLyr;
} tyLyrP0900GenIn;

typedef struct tyLyrP0910GenOut
{	struct tyUIBtn tyBtnTLGreen;
	struct tyUIBtn tyBtnTLAmber;
	struct tyUIBtn tyBtnTLRed;
	struct tyUIBtn tyBtnTLRed1;
	struct tyUIBtn tyBtnTLBlue;
	struct tyUIBtn tyBtnTLWhite;
	struct tyUIBtn tyBtnBuzzer;
	struct tyUIBtn tyBtnSafety;
	struct tyUIBtn tyBtnUlkCovPBLED;
	struct tyUIBtn tyBtnUlkCovHoldRely;
	struct tyUIBtn tyBtnSftUlkCovSWCoil;
	struct tyUIBtn tyBtnTopCovUlkUSDS;
	struct tyUIBtn tyBtnSftSigToUSDS;
	struct tyUILyr tyUlkCovLyr;
	struct tyUILyr tyMacSafetyLyr;
	struct tyUILyr tyLyr;
	struct tyUILyr tyTLLyr;
} tyLyrP0910GenOut;

typedef struct tyLyrP0920MtrNPneuCtrl
{	struct tyUIBtn tyBtnAW;
	struct tyUIBitmap tyBitmapAW;
	struct tyUIBtn tyBtnShutter;
	struct tyUIBitmap tyBitmapShutter;
	struct tyUIBtn tyBtnClampNoRS;
	struct tyUIBtn tyBtnClampWithRS;
	struct tyUIBtn tyBtnStopper;
	struct tyUIBtn tyBtnConv;
	struct tyUIBitmap tyBitmapConv;
	struct tyUILyr tyLyr;
} tyLyrP0920MtrNPneuCtrl;

typedef struct tyLyrP0921ClampNoRSCom
{	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnDCCtrl;
	struct tyUIBtn tyBtnExtRS;
	struct tyUIBtn tyBtnRetRS;
	struct tyUITxt tyTxtSubTitle;
	struct tyUILyr tyLyr;
} tyLyrP0921ClampNoRSCom;

typedef struct tyLyrP0921ClampNoRSDC
{	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0921ClampNoRSDC;

typedef struct tyLyrP0921ClampNoRSFB
{	struct tyUILString tyStringStat;
	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0921ClampNoRSFB;

typedef struct tyLyrP0922InletShutterCom
{	struct tyUIBtn tyBtnSwitch;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnOpenRS;
	struct tyUIBtn tyBtnCloseRS;
	struct tyUILyr tyLyr;
} tyLyrP0922InletShutterCom;

typedef struct tyLyrP0922InletShutterDC
{	struct tyUIBtn tyBtnOpen;
	struct tyUIBtn tyBtnClose;
	struct tyUILyr tyLyr;
} tyLyrP0922InletShutterDC;

typedef struct tyLyrP0922InletShutterFB
{	struct tyUILString tyStringStat;
	struct tyUIBtn tyBtnOpen;
	struct tyUIBtn tyBtnClose;
	struct tyUILyr tyLyr;
} tyLyrP0922InletShutterFB;

typedef struct tyLyrP0922InletShutterDis
{	struct tyUILyr tyLyr;
} tyLyrP0922InletShutterDis;

typedef struct tyLyrP0922OutletShutterCom
{	struct tyUIBtn tyBtnSwitch;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnOpenRS;
	struct tyUIBtn tyBtnCloseRS;
	struct tyUILyr tyLyr;
} tyLyrP0922OutletShutterCom;

typedef struct tyLyrP0922OutletShutterDC
{	struct tyUIBtn tyBtnOpen;
	struct tyUIBtn tyBtnClose;
	struct tyUILyr tyLyr;
} tyLyrP0922OutletShutterDC;

typedef struct tyLyrP0922OutletShutterFB
{	struct tyUILString tyStringStat;
	struct tyUIBtn tyBtnOpen;
	struct tyUIBtn tyBtnClose;
	struct tyUILyr tyLyr;
} tyLyrP0922OutletShutterFB;

typedef struct tyLyrP0922OutletShutterDis
{	struct tyUILyr tyLyr;
} tyLyrP0922OutletShutterDis;

typedef struct tyLyrP0923StopperCom
{	struct tyUIBtn tyBtnDCCtrl;
	struct tyUIBitmap tyBitmapMc;
	struct tyUILyr tyLyr;
} tyLyrP0923StopperCom;

typedef struct tyLyrP0923StopperDC
{	struct tyUIBtn tyBtnExtend;
	struct tyUIBtn tyBtnRetract;
	struct tyUILyr tyLyr;
} tyLyrP0923StopperDC;

typedef struct tyLyrP0923StopperFB
{	struct tyUIBtn tyBtnExtend;
	struct tyUIBtn tyBtnRetract;
	struct tyUILString tyStringStat;
	struct tyUILyr tyLyr;
} tyLyrP0923StopperFB;

typedef struct tyLyrP0924Clamp1WithRSCom
{	struct tyUIBtn tyBtnSwitch;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnClampRS;
	struct tyUIBtn tyBtnUnClampRS;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSCom;

typedef struct tyLyrP0924Clamp1WithRSDC
{	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSDC;

typedef struct tyLyrP0924Clamp1WithRSDis
{	struct tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSDis;

typedef struct tyLyrP0924Clamp1WithRSFB
{	struct tyUILString tyStringStat;
	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp1WithRSFB;

typedef struct tyLyrP0924Clamp2WithRSCom
{	struct tyUIBtn tyBtnSwitch;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnClampRS;
	struct tyUIBtn tyBtnUnClampRS;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSCom;

typedef struct tyLyrP0924Clamp2WithRSDC
{	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSDC;

typedef struct tyLyrP0924Clamp2WithRSDis
{	struct tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSDis;

typedef struct tyLyrP0924Clamp2WithRSFB
{	struct tyUILString tyStringStat;
	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp2WithRSFB;

typedef struct tyLyrP0924Clamp3WithRSCom
{	struct tyUIBtn tyBtnSwitch;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnClampRS;
	struct tyUIBtn tyBtnUnClampRS;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSCom;

typedef struct tyLyrP0924Clamp3WithRSDC
{	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSDC;

typedef struct tyLyrP0924Clamp3WithRSDis
{	struct tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSDis;

typedef struct tyLyrP0924Clamp3WithRSFB
{	struct tyUILString tyStringStat;
	struct tyUIBtn tyBtnExt;
	struct tyUIBtn tyBtnRet;
	struct tyUILyr tyLyr;
} tyLyrP0924Clamp3WithRSFB;

typedef struct tyLyrP0931ConvCom
{	struct tyUIBtn tyBtnLft;
	struct tyUIBtn tyBtnRgt;
	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnDCCtrl;
} tyLyrP0931ConvCom;

typedef struct tyLyrP0931ConvDC
{	struct tyUIBtn tyBtnConvLToR;
	struct tyUIBtn tyBtnConvRToL;
	struct tyUIBtn tyBtnStop;
	struct tyUILyr tyLyr;
} tyLyrP0931ConvDC;

typedef struct tyLyrP0931ConvFB
{	struct tyUIBtn tyBtnEnt;
	struct tyUIBtn tyBtnExit;
	struct tyUIBtn tyBtnPreExit;
	struct tyUIBtn tyBtnStop;
	struct tyUILyr tyLyr;
	struct tyUILString tyStringStat;
} tyLyrP0931ConvFB;

typedef struct tyLyrP0931InvCom
{	struct tyUIBtn tyBtnHomeSen;
	struct tyUIBtn tyBtnRemoteSen;
	struct tyUIBtn tyBtnDCCtrl;
	struct tyUIBitmap tyBitmapMc;
} tyLyrP0931InvCom;

typedef struct tyLyrP0931InvDC
{	struct tyUIBtn tyBtnBrake;
	struct tyUIBtn tyBtnCCW;
	struct tyUIBtn tyBtnCW;
	struct tyUILyr tyLyr;
} tyLyrP0931InvDC;

typedef struct tyLyrP0931InvFB
{	struct tyUIBtn tyBtnCCW;
	struct tyUIBtn tyBtnCW;
	struct tyUIBtn tyBtnStop;
	struct tyUILyr tyLyr;
	struct tyUILString tyStringStat;
} tyLyrP0931InvFB;

typedef struct tyLyrP0934AW
{	struct tyUIBitmap tyBitmapMc;
	struct tyUIBtn tyBtnGo;
	struct tyUINum tyNumNewWidth;
	struct tyUILyr tyLyr;
} tyLyrP0934AW;

typedef struct tyLyrP0940CommCtrlDSSMEMA
{	struct tyUIBtn tyBtnDBA;
	struct tyUIBtn tyBtnDBAStat;
	struct tyUIBtn tyBtnDSB;
	struct tyUILyr tyLyr;
} tyLyrP0940CommCtrlDSSMEMA;

typedef struct tyLyrP0940CommCtrlUSSMEMA
{	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnUSB;
	struct tyUILyr tyLyr;
} tyLyrP0940CommCtrlUSSMEMA;

typedef struct tyLyrP0940CommCtrlUSSMEMA2
{	struct tyUIBtn tyBtnUBA;
	struct tyUIBtn tyBtnUBAStat;
	struct tyUIBtn tyBtnUSB;
	struct tyUILyr tyLyr;
} tyLyrP0940CommCtrlUSSMEMA2;

typedef struct tyLyrP0950Simu
{	struct tyUIBtn tyBtnSimu;
	struct tyUIBtn tyBtnStart;
	struct tyUIBtn tyBtnStop;
	struct tyUILyr tyLyr;
} tyLyrP0950Simu;

typedef struct tyLyrP1000Lang
{	struct tyUIBtn tyBtnChinese;
	struct tyUIBtn tyBtnEnglish;
	struct tyUIBtn tyBtnGerman;
	struct tyUINum tyNumYear;
	struct tyUINum tyNumMonth;
	struct tyUINum tyNumDay;
	struct tyUINum tyNumHour;
	struct tyUINum tyNumMinute;
	struct tyUINum tyNumSecond;
	struct tyUILyr tyLyr;
} tyLyrP1000Lang;

typedef struct tyLyrP1020McSetNavi
{	struct tyUIBtn tyBtnMcSet;
	struct tyUIBtn tyBtnVCommSet;
	struct tyUIBtn tyBtnHCommSet;
	struct tyUIBtn tyBtnAntiGapSet;
	struct tyUILyr tyLyr;
} tyLyrP1020McSetNavi;

typedef struct tyLyrP1021McSetGen
{	struct tyUIBtn tyBtnAutoStepEn;
	struct tyUIBtn tyBtnAWDis;
	struct tyUIBtn tyBtnChgParamEn;
	struct tyUIBtn tyBtnHermesRmtEn;
	struct tyUIBtn tyBtnMnlAccDat;
	struct tyUIBtn tyBtnVSMEMAEn;
	struct tyUIDrpDn tyDrpDnDefaultMcMod;
	struct tyUIDrpDn tyDrpDnDefaultFlippedBrd;
	struct tyUIDrpDn tyDrpDnNetworkMod;
	struct tyUITxt tyTxtLblFlippedBrd;
	struct tyUIBtn tyHermesRemoteEn;
	struct tyUIBtn tyBtnHermesSvyEn;
	struct tyUILyr tyLyrGen1;
	struct tyUILyr tyLyrGen2;
	struct tyUINum tyNumConvInitTm;
	struct tyUINum tyNumTranInErrDlyTm;
	struct tyUINum tyNumTranOutErrDlyTm;
	struct tyUINum tyNumWidthAtHm;
	struct tyUITxt tyTxtWidthOffset;
	struct tyUINum tyNumWidthOffset;
	struct tyUIString tyStringMcNm;
	struct tyUITxt tyTxtWidthAtHm;
	struct tyUIBtn tyBtnSSaverEn;
	struct tyUINum tyNumSSaverTm;
	struct tyUITxt tyTxtSSaverTm;
	struct tyUIString tyStringSubnetMask;
	struct tyUIString tyStringIPAddr;
	struct tyUINum tyNumStopperAtLftPos;
	struct tyUINum tyNumStopperAtRgtPos;
	struct tyUIBtn tyBtnStopperAtLftPosTeach;
	struct tyUIBtn tyBtnStopperAtRgtPosTeach;
	struct tyUIBtn tyBtnClampDis;
	struct tyUIBtn tyBtnStopperDis;
	struct tyUINum tyNumAutoLogoutTm;
	struct tyUITxt tyTxtLblAutoLogoutTm;
	struct tyUIBtn tyBtnAutoLogoutEn;
	struct tyUIBtn tyBtnLFBuzMute;
} tyLyrP1021McSetGen;

typedef struct tyLyrP1021McSetNetwork
{	struct tyUIString tyStringIPAddr;
	struct tyUIString tyStringSubnetMask;
	struct tyUIBtn tyBtnSave;
	struct tyUIBtn tyBtnCancel;
	struct tyUILyr tyLyr;
} tyLyrP1021McSetNetwork;

typedef struct tyLyrP1022McSetVCommSel
{	struct tyUIBtn tyBtnLF;
	struct tyUIBtn tyBtnLCSLF;
	struct tyUIBtn tyBtnLCSReqRcp;
	struct tyUIBtn tyBtnLCSManageRcp;
	struct tyUIBtn tyBtnLCSLiveDat;
	struct tyUILyr tyLyr;
} tyLyrP1022McSetVCommSel;

typedef struct tyLyrP1022McSetVCommLF
{	struct tyUIBtn tyBtnLeaderMc;
	struct tyUIBtn tyBtnSectionLdr;
	struct tyUIBtn tyBtnDBAOnWOAlign;
	struct tyUIBtn tyBtnUSWidthChkEn;
	struct tyUIBtn tyBtnDSWidthChkEn;
	struct tyUIBtn tyBtnSeqStayActive;
	struct tyUILyr tyLyr;
} tyLyrP1022McSetVCommLF;

typedef struct tyLyrP1022McSetVCommSvy
{	struct tyUINum tyNumSndAliveTm;
	struct tyUINum tyNumSvySystemPort;
	struct tyUIBtn tyBtnConfiguration;
	struct tyUIBtn tyBtnCheckAliveResponse;
	struct tyUIBtn tyBtnBoardTracking;
	struct tyUIBtn tyBtnQueryWorkOrderInfo;
	struct tyUIBtn tyBtnSendWorkOrderInfo;
	struct tyUIBtn tyBtnReplyWorkOrderInfo;
	struct tyUIBtn tyBtnInsertBrd;
	struct tyUIBitmap tyBitmapMask;
	struct tyUILyr tyLyr;
} tyLyrP1022McSetVCommSvy;

typedef struct tyLyrP1023McSetHCommSel
{	struct tyUIBtn tyBtnSMEMA;
	struct tyUIBtn tyBtnHermes;
	struct tyUILyr tyLyr;
} tyLyrP1023McSetHCommSel;

typedef struct tyLyrP1023McSetHCommSMEMA
{	struct tyUIDrpDn tyDrpDnSMEMAMod;
	struct tyUIBtn tyBtnGdSig;
	struct tyUILyr tyLyr;
} tyLyrP1023McSetHCommSMEMA;

typedef struct tyLyrP1023McSetHCommUSHermes
{	struct tyUINum tyNumSndAliveTm;
	struct tyUINum tyNumLaneID;
	struct tyUINum tyNumHostPort;
	struct tyUIString tyStringHostAddr;
	struct tyUIBtn tyBtnCheckAliveResponse;
	struct tyUIBtn tyBtnOverWrite;
	struct tyUIBtn tyBtnCmpParam;
	struct tyUIBtn tyBtnCmpTypeId;
	struct tyUIBtn tyBtnCommand;
	struct tyUIBtn tyBtnBoardForecast;
	struct tyUIBtn tyBtnQueryBoardInfo;
	struct tyUIBitmap tyBitmapMask;
	struct tyUILyr tyLyr;
} tyLyrP1023McSetHCommUSHermes;

typedef struct tyLyrP1023McSetHCommDSHermes
{	struct tyUINum tyNumLaneID;
	struct tyUINum tyNumSvrPort;
	struct tyUINum tyNumSndAliveTm;
	struct tyUIBtn tyBtnCheckAliveResponse;
	struct tyUIBtn tyBtnCommand;
	struct tyUIBtn tyBtnBoardForecast;
	struct tyUIBtn tyBtnSendBoardInfo;
	struct tyUIBitmap tyBitmapMask;
	struct tyUILyr tyLyr;
} tyLyrP1023McSetHCommDSHermes;

typedef struct tyLyrP1023McSetHCommGen
{	struct tyUITxt tyTxtLblUSSel;
	struct tyUIDrpDn tyDrpDnUSSel;
	struct tyUITxt tyTxtLblDSSel;
	struct tyUIDrpDn tyDrpDnDSSel;
	struct tyUILyr tyLyr;
} tyLyrP1023McSetHCommGen;

typedef struct tyLyrP1024McSetAntiGap
{	struct tyUITxt tyTxtLftSen;
	struct tyUITxt tyTxtRgtSen;
	struct tyUINum tyNumLftSenOff;
	struct tyUINum tyNumRgtSenOff;
	struct tyUILyr tyLyr;
} tyLyrP1024McSetAntiGap;

typedef struct tyLyrP1026McSetTeach
{	struct tyUIBtn tyBtnGet;
	struct tyUIBtn tyBtnGo;
	struct tyUILyr tyLyr;
} tyLyrP1026McSetTeach;

typedef struct tyLyrP1040ProdSet
{	struct tyUIBtn tyBtnDelete;
	struct tyUIBtn tyBtnSave;
	struct tyUINum tyNumProdWidth;
	struct tyUINum tyNumProdWidth2;
	struct tyUILString tyStringRecipeNm;
	struct tyUILString tyStringSearch;
	struct tyUITable tyTableRecipe;
	struct tyUIDrpDn tyDrpDnMcMode;
	struct tyUIDrpDn tyDrpDnFlippedBrd;
	struct tyUITxt tyTxtDrpDnFlippedBrd;
	struct tyUITxt tyTxtMatchCode;
	struct tyUIString tyStringMatchCode;
	struct tyUILyr tyLyr;
	struct tyUIBtn tyBtnToXML;
	struct tyUIBtn tyBtnFromXML;
	struct tyUIBtn tyBtnSort;
	struct tyUIHotspot tyHotspotShowLRcp;
} tyLyrP1040ProdSet;

typedef struct tyLyrP1050LFSetLdr
{	struct tyUITable1 tyTable1List;
	struct tyUIBtn tyBtnEdit;
	struct tyUIBtn tyBtnDelete;
	struct tyUIBtn tyBtnOnline;
	struct tyUIBtn tyBtnOffline;
	struct tyUIBtn tyBtnShftUp;
	struct tyUIBtn tyBtnShftDwn;
	struct tyUINum tyNumBeforeOven;
	struct tyUINum tyNumBeforeOven2;
	struct tyUINum tyNumAfterOven;
	struct tyUINum tyNumAfterOven2;
	struct tyUILyr tyLyr;
} tyLyrP1050LFSetLdr;

typedef struct tyLyrP1050LFSetLdrEdit
{	struct tyUINum tyNumMcNum;
	struct tyUIString tyStringIPAddr;
	struct tyUIBtn tyBtnOk;
	struct tyUIBtn tyBtnCancel;
	struct tyUITxt tyTxtLblInfoThirdParty;
	struct tyUILyr tyLyr;
} tyLyrP1050LFSetLdrEdit;

typedef struct tyLyrP1080UsrMgmt
{	struct tyUIBtn tyBtnEditDetail;
	struct tyUIBtn tyBtnEditAccess;
	struct tyUIBtn tyBtnNewUsr;
	struct tyUIBtn tyBtnDeleteUsr;
	struct tyUIDrpDn tyDrpDnLvl;
	struct tyUITable1 tyTableList;
	struct tyUILyr tyLyr;
} tyLyrP1080UsrMgmt;

typedef struct tyLyrP1080UsrMgmtAct
{	struct tyUIBtn tyBtnOk;
	struct tyUIBtn tyBtnCancel;
	struct tyUIString tyStringPw;
	struct tyUIString tyStringUsrNm;
	struct tyUIDrpDn tyDrpDnLvl;
	struct tyUILyr tyLyr;
} tyLyrP1080UsrMgmtAct;

typedef struct tyLyrP1081UsrMgmtUsrAccessRgtSel
{	struct tyUIDrpDn tyDrpDnLevel;
	struct tyUILyr tyLyr;
} tyLyrP1081UsrMgmtUsrAccessRgtSel;

typedef struct tyLyrP1081UsrMgmtUsrAccessRgt
{	struct tyUIBtn tyBtnOps;
	struct tyUIBtn tyBtnProdSel;
	struct tyUIBtn tyBtnMagSel;
	struct tyUIBtn tyBtnMcInfo;
	struct tyUIBtn tyBtnAlm;
	struct tyUIBtn tyBtnBffrInfo;
	struct tyUIBtn tyBtnOvenInfo;
	struct tyUIBtn tyBtnMagInfo;
	struct tyUIBtn tyBtnLFCtrl;
	struct tyUIBtn tyBtnManual;
	struct tyUIBtn tyBtnManualFBOnly;
	struct tyUIBtn tyBtnSimu;
	struct tyUIBtn tyBtnChgParam;
	struct tyUIBtn tyBtnLFSet;
	struct tyUIBtn tyBtnLang;
	struct tyUIBtn tyBtnMcSet;
	struct tyUIBtn tyBtnProdSet;
	struct tyUIBtn tyBtnMagSet;
	struct tyUIString tyStringNm;
	struct tyUITxt tyTxtTitle;
	struct tyUILyr tyLyr;
} tyLyrP1081UsrMgmtUsrAccessRgt;

typedef struct tyVisu
{	unsigned short uiChgPage;
	unsigned short uiCurrPage;
	unsigned short uiSSaverTm;
	unsigned short uiSSaverRemainTm;
	unsigned char usiChgLang;
	unsigned char usiCurrLang;
} tyVisu;

typedef struct tyKeypad
{	struct tyUITxt tyTxtTitle;
} tyKeypad;

typedef struct tyTxtSnippets
{	plcstring sLibraryNm[11];
	plcstring sUsrMgmtUsrLv1Nm[81];
	plcstring sUsrMgmtUsrLv2Nm[81];
	plcstring sUsrMgmtUsrLv3Nm[81];
} tyTxtSnippets;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Visu_Layer.typ\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/UI/UI/Visu_Page.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700467268_2_ */

