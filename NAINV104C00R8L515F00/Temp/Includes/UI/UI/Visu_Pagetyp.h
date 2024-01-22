/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_84_
#define _BUR_1700031253_84_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct tyUIP0000SSaver
{	struct tyLyrP0000SSaver tySSaver;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxLoginAsk;
} tyUIP0000SSaver;

typedef struct tyUIP0001Startup
{	struct tyLyrP0001Startup tyStartup;
	struct tyLyrP0001Initial tyInitial;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxIPConfig;
} tyUIP0001Startup;

typedef struct tyUIP0002Menu
{	struct tyLyrP0002Menu tyMenu;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxSelRcpWaitingBrd;
} tyUIP0002Menu;

typedef struct tyUIP0100Login
{	struct tyLyrP0100Login tyLogin;
	struct tyLyrP0100Logout tyLogout;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxNmNotExist;
	struct tyLyrC0008MsgBox tyMsgBoxPwMismatch;
} tyUIP0100Login;

typedef struct tyUIP0200OpsGen
{	struct tyLyrP0200OpsGen tyOps;
	struct tyLyrP0200OpsUSVSMEMA tyUSVSMEMA;
	struct tyLyrP0200OpsDSVSMEMA tyDSVSMEMA;
	struct tyLyrP0200OpsUSVSMEMA1 tyUSVSMEMA1;
	struct tyLyrP0200OpsDSVSMEMA1 tyDSVSMEMA1;
	struct tyLyrP0200OpsUSVSMEMA2 tyUSVSMEMA2;
	struct tyLyrP0200OpsBypsInitConv tyBypsInitConv;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxRcpSelMsg;
	struct tyLyrC0008MsgBox tyMsgBoxRstWaitingBrdAsk;
	struct tyLyrC0010RcyMsg tyRcyMsgHide;
	struct tyLyrC0010RcyMsg tyRcyMsg;
} tyUIP0200OpsGen;

typedef struct tyUIP0201OpsConv
{	struct tyLyrP0201OpsConv tyOps;
	struct tyLyrP0201OpsConvIOMonitor tyIOMonitor;
	struct tyLyrP0201OpsConvIOMonitorXStd tyIOMonitorXStd;
	struct tyLyrP0201OpsConvIOMonitorMSafe tyIOMonitorXStdMachineSafety;
	struct tyLyrP0200OpsBypsInitConv tyBypsInitConv;
	struct tyLyrP0201OpsConvChgParam tyChgParam;
	struct tyLyrP0201OpsConvChgParam tyChgParamBkUp;
	struct tyLyrC0004Navi tyNaviHide;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0012RcpPopUp tyRcpPopUp;
} tyUIP0201OpsConv;

typedef struct tyUIP0300McInfo
{	struct tyLyrP0300McInfo tyMcInfo;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0300McInfo;

typedef struct tyUIP0400ProdSel
{	struct tyLyrP0400ProdSel tyProdSel;
	struct tyLyrP0400RcpDet tyRcpDet;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxListErr;
	struct tyLyrC0008MsgBox tyMsgBoxRcpParamErr;
	struct tyLyrC0008MsgBox tyMsgBoxLoadErr;
	struct tyLyrC0008MsgBox tyMsgBoxSelRcpAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSelRcpNoNm;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0008MsgBox tyMsgBoxGoToLFCtrlAsk;
	struct tyLyrC0012RcpPopUp tyRcpPopUp;
} tyUIP0400ProdSel;

typedef struct tyUIP0600Alm
{	struct tyLyrP0600Alm tyAlm;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0010RcyMsg tyRcyMsg;
	struct tyLyrC0010RcyMsg tyRcyMsgHide;
	struct tyUIBtn tyBtnCurr;
	struct tyUIBtn tyBtnHistory;
	struct tyUIAlarm tyAlarm;
} tyUIP0600Alm;

typedef struct tyUIP0700LFCtrl
{	struct tyLyrP0700LFCtrl tyLdr;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxChgAllAsk;
	struct tyLyrC0008MsgBox tyMsgBoxChgSeqAutoAsk;
	struct tyLyrC0008MsgBox tyMsgBoxChgSeqMnlAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSyncPLCTmAsk;
	struct tyLyrC0008MsgBox tyMsgBoxTerminateOpsAsk;
	struct tyLyrC0008MsgBox tyMsgBoxErrorAsk;
} tyUIP0700LFCtrl;

typedef struct tyUIP0900GenIn
{	struct tyLyrP0900GenIn tyGenIn;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0900GenIn;

typedef struct tyUIP0910GenOut
{	struct tyLyrP0910GenOut tyGenOut;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0910GenOut;

typedef struct tyUIP0920MtrNPneuCtrl
{	struct tyLyrP0920MtrNPneuCtrl tyMtrNPneuCtrl;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0920MtrNPneuCtrl;

typedef struct tyUIP0921ClampNoRS
{	struct tyLyrP0921ClampNoRSCom tyCom;
	struct tyLyrP0921ClampNoRSDC tyDC;
	struct tyLyrP0921ClampNoRSFB tyFB;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0921ClampNoRS;

typedef struct tyUIP0922InletNOutletShutter
{	struct tyLyrP0922InletShutterCom tyInletShutterCom;
	struct tyLyrP0922InletShutterDC tyInletShutterDC;
	struct tyLyrP0922InletShutterFB tyInletShutterFB;
	struct tyLyrP0922InletShutterDis tyInletShutterDis;
	struct tyLyrP0922OutletShutterCom tyOutletShutterCom;
	struct tyLyrP0922OutletShutterDC tyOutletShutterDC;
	struct tyLyrP0922OutletShutterFB tyOutletShutterFB;
	struct tyLyrP0922OutletShutterDis tyOutletShutterDis;
	struct tyLyrC0003DualMask tyDualMaskHide;
	struct tyLyrC0003DualMask tyDualMaskEStop;
	struct tyLyrC0003DualMask tyDualMaskCWSig;
	struct tyLyrC0003DualMask tyDualMaskSafetyRly;
	struct tyLyrC0003DualMask tyDualMaskAWMovInterrupt;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0922InletNOutletShutter;

typedef struct tyUIP0923Stopper
{	struct tyLyrP0923StopperCom tyCom;
	struct tyLyrP0923StopperDC tyDC;
	struct tyLyrP0923StopperFB tyFB;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0923Stopper;

typedef struct tyUIP0924ClampWithRS
{	struct tyLyrP0924Clamp1WithRSCom tyClamp1WithRSCom;
	struct tyLyrP0924Clamp1WithRSDC tyClamp1WithRSDC;
	struct tyLyrP0924Clamp1WithRSFB tyClamp1WithRSFB;
	struct tyLyrP0924Clamp1WithRSDis tyClamp1WithRSDis;
	struct tyLyrP0924Clamp2WithRSCom tyClamp2WithRSCom;
	struct tyLyrP0924Clamp2WithRSDC tyClamp2WithRSDC;
	struct tyLyrP0924Clamp2WithRSFB tyClamp2WithRSFB;
	struct tyLyrP0924Clamp2WithRSDis tyClamp2WithRSDis;
	struct tyLyrP0924Clamp3WithRSCom tyClamp3WithRSCom;
	struct tyLyrP0924Clamp3WithRSDC tyClamp3WithRSDC;
	struct tyLyrP0924Clamp3WithRSFB tyClamp3WithRSFB;
	struct tyLyrP0924Clamp3WithRSDis tyClamp3WithRSDis;
	struct tyLyrC0003DualMask tyDualMaskHide;
	struct tyLyrC0003DualMask tyDualMaskEStop;
	struct tyLyrC0003DualMask tyDualMaskCWSig;
	struct tyLyrC0003DualMask tyDualMaskSafetyRly;
	struct tyLyrC0003DualMask tyDualMaskAWMovInterrupt;
	struct tyLyrC0004Navi tyNaviLyr1;
	struct tyLyrC0004Navi tyNaviLyr2;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0924ClampWithRS;

typedef struct tyUIP0931ConvInv
{	struct tyLyrP0931ConvCom tyConvCom;
	struct tyLyrP0931ConvDC tyConvDC;
	struct tyLyrP0931ConvFB tyConvFB;
	struct tyLyrP0931InvCom tyInvCom;
	struct tyLyrP0931InvDC tyInvDC;
	struct tyLyrP0931InvFB tyInvFB;
	struct tyLyrC0003DualMask tyDualMaskHide;
	struct tyLyrC0003DualMask tyDualMaskEStop;
	struct tyLyrC0003DualMask tyDualMaskCWSig;
	struct tyLyrC0003DualMask tyDualMaskSafetyRly;
	struct tyLyrC0003DualMask tyDualMaskInletShutterInterrupt;
	struct tyLyrC0003DualMask tyDualMaskOutletShutterInterrupt;
	struct tyLyrC0003DualMask tyDualMaskInletNInvalid;
	struct tyLyrC0003DualMask tyDualMaskOutletNInvalid;
	struct tyLyrC0003DualMask tyDualMaskInvalidPos;
	struct tyLyrC0003DualMask tyDualMaskInvertInterrupt;
	struct tyLyrC0003DualMask tyDualMaskStopperInterruptInv;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0931ConvInv;

typedef struct tyUIP0934AW
{	struct tyLyrP0934AW tyAW;
	struct tyLyrC0001MotionStdAW tyMotionStd;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0002FullMask tyFullMaskLftSenInterrupt;
	struct tyLyrC0002FullMask tyFullMaskRgtSenInterrupt;
	struct tyLyrC0002FullMask tyFullMaskInletShutterInterrupt;
	struct tyLyrC0002FullMask tyFullMaskOutletShutterInterrupt;
	struct tyLyrC0002FullMask tyFullMaskHomeSenInterrupt;
	struct tyLyrC0002FullMask tyFullMaskRemoteSenInterrupt;
	struct tyLyrC0002FullMask tyFullMaskInterrupt;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0934AW;

typedef struct tyUIP0940CommCtrl
{	struct tyLyrP0940CommCtrlUSSMEMA tyUSSMEMA;
	struct tyLyrP0940CommCtrlDSSMEMA tyDSSMEMA;
	struct tyLyrP0940CommCtrlUSSMEMA2 tyUSSMEMA2;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0940CommCtrl;

typedef struct tyUIP0950Simu
{	struct tyLyrP0950Simu tySimu;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP0950Simu;

typedef struct tyUIP1000Lang
{	struct tyLyrP1000Lang tyLang;
	struct tyLyrP1000Lang tyLangBkUp;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
} tyUIP1000Lang;

typedef struct tyUIP1020McSetNavi
{	struct tyLyrP1020McSetNavi tyNavi;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
} tyUIP1020McSetNavi;

typedef struct tyUIP1021McSetGen
{	struct tyLyrP1021McSetGen tyGen;
	struct tyLyrP1021McSetGen tyGenBkUp;
	struct tyLyrP1021McSetNetwork tyNetwork;
	struct tyLyrC0004Navi tyNaviLyr1;
	struct tyLyrC0004Navi tyNaviLyr2;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxExitAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0008MsgBox tyMsgBoxUpdtSubnetAsk;
	struct tyLyrC0008MsgBox tyMsgBoxUpdtSubnetErr;
	struct tyLyrC0008MsgBox tyMsgBoxSubnetInvalid;
	struct tyLyrC0008MsgBox tyMsgBoxUpdtIPAddrAsk;
	struct tyLyrC0008MsgBox tyMsgBoxUpdtIPAddrErr;
	struct tyLyrC0008MsgBox tyMsgBoxIPAddrInvalid;
	struct tyLyrC0008MsgBox tyMsgBoxChgNetworkAsk;
	struct tyLyrC0008MsgBox tyMsgBoxIPAddrInvalidEdit;
	struct tyLyrC0008MsgBox tyMsgBoxSubnetInvalidEdit;
	struct tyLyrC0008MsgBox tyMsgBoxGetIPAddrErr;
	struct tyLyrC0008MsgBox tyMsgBoxGetSubnetErr;
	struct tyLyrC0008MsgBox tyMsgBoxSetDHCPError;
} tyUIP1021McSetGen;

typedef struct tyUIP1022McSetVComm
{	struct tyLyrP1022McSetVCommSel tyVComSel;
	struct tyLyrP1022McSetVCommSel tyVComSelBkUp;
	struct tyLyrP1022McSetVCommLF tyLF;
	struct tyLyrP1022McSetVCommLF tyLFBkUp;
	struct tyLyrP1022McSetVCommSvy tyVComSvy;
	struct tyLyrP1022McSetVCommSvy tyVComSvyBkUp;
	struct tyLyrC0004Navi tyNaviLyr1;
	struct tyLyrC0004Navi tyNaviLyr2;
	struct tyLyrC0004Navi tyNaviLyr3;
	struct tyLyrC0004Navi tyNaviLyr4;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxExitAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
} tyUIP1022McSetVComm;

typedef struct tyUIP1023McSetHComm
{	struct tyLyrP1023McSetHCommGen tyGen;
	struct tyLyrP1023McSetHCommSel tyUSSel;
	struct tyLyrP1023McSetHCommSMEMA tyUSSMEMA;
	struct tyLyrP1023McSetHCommUSHermes tyUSHermes;
	struct tyLyrP1023McSetHCommSel tyDSSel;
	struct tyLyrP1023McSetHCommSel tyDSSel2;
	struct tyLyrP1023McSetHCommSMEMA tyDSSMEMA;
	struct tyLyrP1023McSetHCommSMEMA tyDSSMEMA2;
	struct tyLyrP1023McSetHCommDSHermes tyDSHermes;
	struct tyLyrP1023McSetHCommDSHermes tyDSHermes2;
	struct tyLyrP1023McSetHCommSel tyUSSelBkUp;
	struct tyLyrP1023McSetHCommSMEMA tyUSSMEMABkUp;
	struct tyLyrP1023McSetHCommUSHermes tyUSHermesBkUp;
	struct tyLyrP1023McSetHCommSel tyDSSelBkUp;
	struct tyLyrP1023McSetHCommSel tyDSSelBkUp2;
	struct tyLyrP1023McSetHCommSMEMA tyDSSMEMABkUp;
	struct tyLyrP1023McSetHCommSMEMA tyDSSMEMABkUp2;
	struct tyLyrP1023McSetHCommDSHermes tyDSHermesBkUp;
	struct tyLyrP1023McSetHCommDSHermes tyDSHermesBkUp2;
	struct tyLyrP1023McSetHCommSel tyUSSel2;
	struct tyLyrP1023McSetHCommSMEMA tyUSSMEMA2;
	struct tyLyrP1023McSetHCommUSHermes tyUSHermes2;
	struct tyLyrP1023McSetHCommSel tyUSSelBkUp2;
	struct tyLyrP1023McSetHCommSMEMA tyUSSMEMABkUp2;
	struct tyLyrP1023McSetHCommUSHermes tyUSHermesBkUp2;
	struct tyLyrC0004Navi tyNaviLyr1;
	struct tyLyrC0004Navi tyNaviLyr2;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxExitAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0008MsgBox tyMsgBoxIPAddrInvalid;
} tyUIP1023McSetHComm;

typedef struct tyUIP1024McSetAntiGap
{	struct tyLyrP1024McSetAntiGap tyAntiGap;
	struct tyLyrP1024McSetAntiGap tyAntiGapBkUp;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxExitAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0004Navi tyNaviBack;
} tyUIP1024McSetAntiGap;

typedef struct tyUIP1026McSetTeach
{	struct tyLyrP1026McSetTeach tyTeachStopperAtLftPos;
	struct tyLyrP1026McSetTeach tyTeachStopperAtRgtPos;
	struct tyLyrC0001MotionStdInvert tyMotionStd;
	struct tyLyrC0002FullMask tyFullMaskHide;
	struct tyLyrC0002FullMask tyFullMaskEStop;
	struct tyLyrC0002FullMask tyFullMaskCWSig;
	struct tyLyrC0002FullMask tyFullMaskSafetyRly;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxUpdtStopperAtLftPos;
	struct tyLyrC0008MsgBox tyMsgBoxUpdtStopperAtRgtPos;
} tyUIP1026McSetTeach;

typedef struct tyUIP1040ProdSet
{	struct tyLyrP1040ProdSet tyProdSet;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxSaveAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0008MsgBox tyMsgBoxListFull;
	struct tyLyrC0008MsgBox tyMsgBoxListErr;
	struct tyLyrC0008MsgBox tyMsgBoxSaveNoNm;
	struct tyLyrC0008MsgBox tyMsgBoxReloadCurrRcp;
	struct tyLyrC0008MsgBox tyMsgBoxDelCurrRcpAsk;
	struct tyLyrC0008MsgBox tyMsgBoxDelNmNotExist;
	struct tyLyrC0008MsgBox tyMsgBoxDelNmEmpty;
	struct tyLyrC0008MsgBox tyMsgBoxDelErr;
	struct tyLyrC0008MsgBox tyMsgBoxDelAsk;
	struct tyLyrC0008MsgBox tyMsgBoxToXMLAsk;
	struct tyLyrC0008MsgBox tyMsgBoxToXMLErr;
	struct tyLyrC0008MsgBox tyMsgBoxFromXMLAsk;
	struct tyLyrC0008MsgBox tyMsgBoxFromXMLErr;
	struct tyLyrC0008MsgBox tyMsgBoxSaveListErr;
	struct tyLyrC0012RcpPopUp tyRcpPopUp;
} tyUIP1040ProdSet;

typedef struct tyUIP1050LFSet
{	struct tyLyrP1050LFSetLdr tyLdr;
	struct tyLyrP1050LFSetLdrEdit tyLdrEdit;
	struct tyLyrP1050LFSetLdr tyLdrBkUp;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
	struct tyLyrC0008MsgBox tyMsgBoxDelAsk;
	struct tyLyrC0008MsgBox tyMsgBoxIPAddrInvalid;
	struct tyLyrC0008MsgBox tyMsgBoxIPAddrDuplicate;
} tyUIP1050LFSet;

typedef struct tyUIP1080UsrMgmt
{	struct tyLyrP1080UsrMgmtAct tyActHide;
	struct tyLyrP1080UsrMgmtAct tyEdit;
	struct tyLyrP1080UsrMgmtAct tyCreate;
	struct tyLyrP1080UsrMgmt tyUsrMgmt;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxAddErr;
	struct tyLyrC0008MsgBox tyMsgBoxEditErr;
	struct tyLyrC0008MsgBox tyMsgBoxAddNmExist;
	struct tyLyrC0008MsgBox tyMsgBoxEditParamErr;
	struct tyLyrC0008MsgBox tyMsgBoxAddParamErr;
	struct tyLyrC0008MsgBox tyMsgBoxListFull;
	struct tyLyrC0008MsgBox tyMsgBoxDelNmNotExist;
	struct tyLyrC0008MsgBox tyMsgBoxDelParamErr;
	struct tyLyrC0008MsgBox tyMsgBoxDelLastAdminErr;
	struct tyLyrC0008MsgBox tyMsgBoxDelAsk;
	struct tyLyrC0008MsgBox tyMsgBoxDelErr;
} tyUIP1080UsrMgmt;

typedef struct tyUIP1081UsrAccessRgt
{	struct tyLyrP1081UsrMgmtUsrAccessRgtSel tyUsrAccessRgtSel;
	struct tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl1;
	struct tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl2;
	struct tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl3;
	struct tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl1BkUp;
	struct tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl2BkUp;
	struct tyLyrP1081UsrMgmtUsrAccessRgt tyUsrAccessRgtLvl3BkUp;
	struct tyLyrC0004Navi tyNaviBack;
	struct tyLyrC0008MsgBox tyMsgBoxHide;
	struct tyLyrC0008MsgBox tyMsgBoxExitAsk;
	struct tyLyrC0008MsgBox tyMsgBoxSaveErr;
} tyUIP1081UsrAccessRgt;

typedef struct tyUICom
{	struct tyLyrC0005Main tyMain;
	struct tyLyrC0006Set tySet;
	struct tyLyrC0007Notif tyNotif;
	struct tyLyrC0009Info tyInfo;
	struct tyLyrC0011Loading tyLoading;
} tyUICom;

typedef struct tyUIProperty
{	struct tyVisu tyVisu;
	struct tyKeypad tyKeypad;
	struct tyTxtSnippets tyUITxtSnippets;
} tyUIProperty;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Visu_Page.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_84_ */

