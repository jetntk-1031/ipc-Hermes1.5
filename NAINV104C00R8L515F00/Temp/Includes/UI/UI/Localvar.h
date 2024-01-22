/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_82_
#define _BUR_1700031253_82_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit bNaviLyr2;
_BUR_LOCAL plcbit bNaviLyr1;
_BUR_LOCAL plcbit bQueryBoardInfo;
_BUR_LOCAL plcbit bSaveHMIConfigure;
_BUR_LOCAL plcbit bSaveHMISvyConfig;
_BUR_LOCAL plcbit bUnlockCover1Req;
_BUR_LOCAL plcbit bBypsTopCover;
_BUR_LOCAL plcbit bTopCoverSwitchCoil1;
_BUR_LOCAL plcbit bMachineSafetySigToDS;
_BUR_LOCAL plcbit bMachineSafetySigToUS;
_BUR_LOCAL plcbit bBypassTopCoverPB1;
_BUR_LOCAL plcbit bBypassTopCover1;
_BUR_LOCAL struct TON fbCoverPBLED1BlinkTm;
_BUR_LOCAL struct TON fbCoverPB1CountDownTm;
_BUR_LOCAL plcbit bCoverPBLED1;
_BUR_LOCAL plcbit bCoverPB1Timer;
_BUR_LOCAL plcbit bSongEn;
_BUR_LOCAL unsigned short uiSongIndex;
_BUR_LOCAL unsigned short uiLFStartEditNo;
_BUR_LOCAL plcbit bNetworkConfigChanged;
_BUR_LOCAL plcbit bSaveNetworkPriority;
_BUR_LOCAL unsigned char usiRefreshDetailStep;
_BUR_LOCAL unsigned char usiChgNetworkConfigStep;
_BUR_LOCAL unsigned char usiNetworkModeSelected;
_BUR_LOCAL unsigned char usiNetworkModeNew;
_BUR_LOCAL unsigned char usiNetworkModeOld;
_BUR_LOCAL plcbit bOverwriteEthMode;
_BUR_LOCAL plcbit bOverwriteSubnet;
_BUR_LOCAL plcbit bOverwriteIP;
_BUR_LOCAL plcbit bIPConfigChgDone;
_BUR_LOCAL plcbit bMismatchOverWriteConfig;
_BUR_LOCAL plcbit bUpdateP1021Network;
_BUR_LOCAL plcbit bTempAddrFillDone;
_BUR_LOCAL unsigned long udiTempEthMode;
_BUR_LOCAL plcstring sTempSubnetMask[16];
_BUR_LOCAL plcstring sTempIPAddr[16];
_BUR_LOCAL plcbit bLoadingScreen;
_BUR_LOCAL plcbit bLFSettingAutoClear;
_BUR_LOCAL plcbit bLFSettingAutoFill;
_BUR_LOCAL plcstring sLFSettingTemp[16];
_BUR_LOCAL plcstring sLFSettingAutoFill[16];
_BUR_LOCAL signed short iLFSettingCurrentIP;
_BUR_LOCAL plcstring sLFSettingCurrentIP[5];
_BUR_LOCAL signed short iIPExtract;
_BUR_LOCAL plcbit bUpdateP1050Table;
_BUR_LOCAL plcbit bLFDeleteOn;
_BUR_LOCAL plcbit bLFRunInBG;
_BUR_LOCAL plcbit bUpdateP1040LoadData;
_BUR_LOCAL struct fbTouchGetAction fbTouchTm;
_BUR_LOCAL struct TON fbAutoLogoutTm;
_BUR_LOCAL plcbit bPromptSessionExp;
_BUR_LOCAL plcbit bChgPageDone;
_BUR_LOCAL plcbit bDSTranErr;
_BUR_LOCAL unsigned long udiElapseTm;
_BUR_LOCAL plcstring sElapseTm[81];
_BUR_LOCAL plcstring sLFIPAddrTemp[16];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL signed short a_iSubnetMaskPart1[4];
#else
/* Variable a_iSubnetMaskPart1 not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL signed short a_iIPPart2[4];
#else
/* Variable a_iIPPart2 not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL signed short a_iIPPart1[4];
#else
/* Variable a_iIPPart1 not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned long udiP1080SelectedRow;
_BUR_LOCAL unsigned char usiP1080SelectedLvl;
_BUR_LOCAL unsigned long udiP1040SelectedRowOld;
_BUR_LOCAL unsigned long udiP1040SelectedRow;
_BUR_LOCAL struct fbTableCtrl fbP1080Table;
_BUR_LOCAL struct tyTable tyP1080Table;
_BUR_LOCAL struct fbTableCtrl fbP1050Table;
_BUR_LOCAL struct tyTable tyP1050Table;
_BUR_LOCAL struct fbTableCtrl_v2 fbP1040Table;
_BUR_LOCAL struct tyTable tyP1040Table;
_BUR_LOCAL struct fbTableCtrl fbP0700Table;
_BUR_LOCAL struct tyTable tyP0700Table;
_BUR_LOCAL struct fbTableCtrl fbP0400Table;
_BUR_LOCAL struct tyTable tyP0400Table;
_BUR_LOCAL struct TON fbLoadingLogoTm;
_BUR_LOCAL struct TON fbLoadingWarmUpTm;
_BUR_LOCAL struct TON fbJogSlowToFastDlyTm;
_BUR_LOCAL struct TON fbLmtRstTm;
_BUR_LOCAL struct TON fbLFLeaderCtrlBlinkTm;
_BUR_LOCAL struct TON fbBypsInitConvBlinkTm;
_BUR_LOCAL struct TON fbRlsNewProdBlinkTm;
_BUR_LOCAL struct TON fbAccDatBlinkTm;
_BUR_LOCAL struct TON fbMcStatUpdtTm;
_BUR_LOCAL struct TON fbStopBlinkTm;
_BUR_LOCAL struct TON fbRstBlinkTm;
_BUR_LOCAL struct TON fbErrBlinkTm;
_BUR_LOCAL struct TON fbSSaverTm;
_BUR_LOCAL unsigned short uiSSaverCnt;
_BUR_LOCAL unsigned char usiLFLeaderCtrlStep;
_BUR_LOCAL unsigned char usiTableShftStep;
_BUR_LOCAL unsigned char usiDelMcDetailsStep;
_BUR_LOCAL unsigned char usiSaveSubnetMaskStep;
_BUR_LOCAL unsigned char usiSaveIPAddrStep;
_BUR_LOCAL unsigned char usiSaveCommStep;
_BUR_LOCAL unsigned char usiDelUsrMgmtStep;
_BUR_LOCAL unsigned char usiSaveUsrMgmtStep;
_BUR_LOCAL unsigned char usiEditUsrMgmtStep;
_BUR_LOCAL unsigned char usiProdRcpFromXMLStep;
_BUR_LOCAL unsigned char usiProdRcpToXMLStep;
_BUR_LOCAL unsigned char usiDelProdRcpStep;
_BUR_LOCAL unsigned char usiSaveProdRcpStep;
_BUR_LOCAL unsigned char usiSelProdRcpStep;
_BUR_LOCAL unsigned char usiLoginStep;
_BUR_LOCAL unsigned char usiConvStep;
_BUR_LOCAL plcbit bTeachStopperAtRgtPos;
_BUR_LOCAL plcbit bTeachStopperAtLftPos;
_BUR_LOCAL plcbit bRefreshUsrMgmtTable;
_BUR_LOCAL plcbit bRefreshProdRcpTable;
_BUR_LOCAL plcbit bRefreshProdRcpDetail;
_BUR_LOCAL plcbit bIPDuplicate;
_BUR_LOCAL plcbit bOnlineTemp;
_BUR_LOCAL plcbit bJogStopAW;
_BUR_LOCAL plcbit bJogSlow;
_BUR_LOCAL plcbit bJogFast;
_BUR_LOCAL plcbit bLoginSuccess;
_BUR_LOCAL plcbit bChgPage;
_BUR_LOCAL enum ePage eChgPageOld;
_BUR_LOCAL enum ePage eChgPage;
_BUR_LOCAL enum ePage eCurrPage;
_BUR_LOCAL unsigned char usiChgPage;
_BUR_LOCAL enum eUIInitial eUIInit;
_BUR_LOCAL unsigned short i;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bSimuMod;
_BUR_LOCAL plcbit bRtnBrdReset;
_BUR_LOCAL plcbit bMnlModTopCoverSwitch1;
_BUR_LOCAL plcbit bMnlModBypassTopCover1;
_BUR_LOCAL plcbit bMnlModCoverPBLED1;
_BUR_LOCAL plcbit bMnlModUnlockCover1Req;
_BUR_LOCAL plcbit bMnlModMachineSafetySigToDS;
_BUR_LOCAL plcbit bUpdateP1040Table;
_BUR_LOCAL plcbit bUpdateP0400Table;
_BUR_LOCAL plcbit bFilterSortP1040;
_BUR_LOCAL plcbit bFilterSortP0400;
_BUR_LOCAL plcbit bCheckDone;
_BUR_LOCAL plcbit bRlsNewProd;
_BUR_LOCAL plcbit bOpsBypsInitConv;
_BUR_LOCAL plcbit bProdAccData;
_BUR_LOCAL plcbit bLeaderRun;
_BUR_LOCAL plcbit bVSMEMAUBAStat2;
_BUR_LOCAL plcbit bVSMEMAUBA2;
_BUR_LOCAL plcbit bVSMEMAUS2En;
_BUR_LOCAL plcbit bVSMEMADSB;
_BUR_LOCAL plcbit bVSMEMAUBAStat;
_BUR_LOCAL plcbit bVSMEMAUBA;
_BUR_LOCAL plcbit bVSMEMADSEn;
_BUR_LOCAL plcbit bVSMEMAUSEn;
_BUR_LOCAL signed long diMnlInvertJogSpd;
_BUR_LOCAL signed long diMnlInvertStepSize;
_BUR_LOCAL signed long diMnlInvertTargetPos;
_BUR_LOCAL signed long diMnlInvertNomSpd;
_BUR_LOCAL signed long diMnlAWJogSpd;
_BUR_LOCAL signed long diMnlAWStepSize;
_BUR_LOCAL signed long diMnlAWTargetPos;
_BUR_LOCAL signed long diMnlAWNomSpd;
_BUR_LOCAL signed long diMnlAWGoWidth;
_BUR_LOCAL plcbit bMuteBuz;
_BUR_LOCAL plcbit bUIManualMod;
_BUR_LOCAL plcbit bManualMod;
_BUR_LOCAL plcstring sSetSubnetMask[16];
_BUR_LOCAL plcstring sSetIPAddr[16];
_BUR_LOCAL struct tyHermesSvyParam tyHermesSvyParamWr;
_BUR_LOCAL struct tyHermesDSParam a_tyHermesDSParamWr[4];
_BUR_LOCAL struct tyHermesUSParam a_tyHermesUSParamWr[4];
_BUR_LOCAL struct tyUsrMgmtAccessRight tyUsrMgmtAccessRightLvl3Wr;
_BUR_LOCAL struct tyUsrMgmtAccessRight tyUsrMgmtAccessRightLvl2Wr;
_BUR_LOCAL struct tyUsrMgmtAccessRight tyUsrMgmtAccessRightLvl1Wr;
_BUR_LOCAL struct tyUsrMgmtParam tyUsrMgmtInfoIn;
_BUR_LOCAL plcstring sProdRcpScan[31];
_BUR_LOCAL plcstring sProdRcpSearch[31];
_BUR_LOCAL struct tyProdRcpParam tyProdRcpCurrRcpWr;
_BUR_LOCAL struct tyProdRcpParam tyProdRcpInfoIn;
_BUR_LOCAL struct tyMcParam tyMcParamWr;
_BUR_LOCAL enum eSimulationsAction eSimuAct;
_BUR_LOCAL enum ePneuAction eClamp3Act;
_BUR_LOCAL enum ePneuAction eClamp2Act;
_BUR_LOCAL enum ePneuAction eClamp1Act;
_BUR_LOCAL enum ePneuAction eOutShutterAct;
_BUR_LOCAL enum ePneuAction eInShutterAct;
_BUR_LOCAL enum ePneuAction eClampAct;
_BUR_LOCAL enum eDOAction eDOAct;
_BUR_LOCAL enum eLFAction eLFLeaderAct;
_BUR_LOCAL enum eHermesAction eHermesAct;
_BUR_LOCAL enum eOperationsAction eOpsAct;
_BUR_LOCAL enum eMotorBrkAction eInvertAct;
_BUR_LOCAL enum eAWAction eAWOpenAct;
_BUR_LOCAL enum eConvAction eConvAct;
_BUR_LOCAL enum ePneuAction eStopperAct;
_BUR_LOCAL enum eSMEMAAction eUSSMEMA2Act;
_BUR_LOCAL enum eSMEMAAction eDSSMEMAAct;
_BUR_LOCAL enum eSMEMAAction eUSSMEMAAct;
_BUR_LOCAL enum eUsrMgmtAction eUsrMgmtAct;
_BUR_LOCAL enum eMcParamAction eMcParamAct;
_BUR_LOCAL enum eMpProdRcpAction eMpProdRcpAct;
_BUR_LOCAL enum eProdRcpAction eProdRcpAct;
_BUR_LOCAL enum eRstErrAction eRstErrAct;
_BUR_LOCAL enum eTLBuzAction eTLBuzAct;
_BUR_LOCAL enum eHWInfoAction eHWInfoAct;
_BUR_LOCAL enum eStartupAction eStartupAct;
_BUR_LOCAL struct tyUIAllAlm tyUIAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eUIAction eStat;
_BUR_LOCAL enum eUIAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtUI/NtUI.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_82_ */

