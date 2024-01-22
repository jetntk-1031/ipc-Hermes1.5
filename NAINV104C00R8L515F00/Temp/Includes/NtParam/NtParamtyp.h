/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528516_3_
#define _BUR_1700528516_3_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eNtParamAction
{	NtParamActIdle,
	NtParamActCreateDir,
	NtParamActRead,
	NtParamActWrite,
	NtParamActLoad,
	NtParamActSave
} eNtParamAction;

typedef struct tyUILmt
{	signed long diMax;
	signed long diMin;
} tyUILmt;

typedef struct tyNtParam
{	struct tyDigitalInputSettings tyDISettings;
	struct tyDigitalOutputSettings tyDOSettings;
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
	struct tyUILmt tyUIAWOffset;
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
	struct tyMotionCANParamInHm tyAWParamInHm;
	struct tyMotionCANParamInConvert tyAWParamInConvert;
	struct tyMotionParam tyAWParam;
	struct tyMotionCANTuning tyAWTuning;
	eServoMotorType eAWServoMotorType;
	plcstring sInvertProgNm[16];
	plcstring sInvertDevice[4];
	unsigned char usiInvertNode;
	plcbit bInvertDir;
	struct tyMotionCANParamInHm tyInvertParamInHm;
	struct tyMotionCANParamInConvert tyInvertParamInConvert;
	struct tyMotionParam tyInvertParam;
	struct tyMotionCANTuning tyInvertTuning;
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
	struct tyUILmt tyProdRcpWidthLmt;
	struct tyUILmt tyProdRcpMcModLmt;
	struct tyUILmt tyProdRcpFlippedBrdLmt;
	struct tyUILmt tyUISSaverTm;
	struct tyUILmt tyUIConvInitTm;
	struct tyUILmt tyUITranInErrDlyTm;
	struct tyUILmt tyUITranOutErrDlyTm;
	struct tyUILmt tyUIHermesSndAliveTm;
	struct tyUILmt tyUIHermesLnID;
	struct tyUILmt tyUIAntiGapSenOnTm;
	struct tyUILmt tyUIAntiGapSenOffTm;
	struct tyUILmt tyUILFIndexBeforeOven;
	struct tyUILmt tyUILFIndexAfterOven;
	struct tyUILmt tyUIAWTargetPos;
	struct tyUILmt tyUIAWStepSize;
	struct tyUILmt tyUIAWNomSpd;
	struct tyUILmt tyUIAWSlwSpd;
	struct tyUILmt tyUIInvertTargetPos;
	struct tyUILmt tyUIInvertStepSize;
	struct tyUILmt tyUIInvertNomSpd;
	struct tyUILmt tyUIInvertSlwSpd;
	struct tyUILmt tyUIHermesHostPort;
	struct tyUILmt tyUIHermesSvrPort;
	struct tyUILmt tyUIAutoLogoutTm;
	struct tyUILmt tyNetworkMode;
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
	plcstring sSvyHermesProgNm[16];
	plcstring sSvyHermesConfigFileNm[81];
	unsigned long udiSvyHermesFileKeepDay;
	unsigned long udiSvyHermesAliveTmInSec;
	plctime tSvyHermesConnTO;
	plcstring sSvyHermesRetainFileNm[81];
} tyNtParam;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/NtParam/NtParam.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528516_3_ */

