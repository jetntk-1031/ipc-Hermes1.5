#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/UI/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((((unsigned long)(unsigned char)bInitDone==(unsigned long)(unsigned char)0))){
(bInitDone=1);

__AS__Action__Act_InitLocal();
__AS__Action__Act_InitGlobal();

}else if((((unsigned long)(unsigned char)bInitialDone==(unsigned long)(unsigned char)0))){
(bInitialDone=1);

__AS__Action__Act_Initial();

}else{

__AS__Action__Act_LinkAction();
__AS__Action__Act_Action();
__AS__Action__Act_Main();
__AS__Action__Act_Background();

}

}imp263_end0_0:;}
#line 24 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{

(p_eAct=p_StartupUIAct);

(p_bStartupRun=p_StartupRun);
(p_eStartupStat=p_StartupStat);
(p_eStartupStatus=p_StartupStatus);
(p_sStartupStatTxt=p_StartupStatTxt);
(p_eStartupStep=p_StartupStep);
(p_sStartupStepTxt=p_StartupStepTxt);
(p_bStartupGetConfigDone=p_StartupGetConfigDone);
(p_bStartupMismatchSetConfigDone=p_StartupMismatchSetConfigDone);
(p_bStartupUISettingsLoadDone=p_StartupUISettingsLoadDone);

(p_eTLBuzStat=p_TLBuzStat);
(p_eTLBuzStatus=p_TLBuzStatus);
(p_sTLBuzStatTxt=p_TLBuzStatTxt);

(p_tyAlarmCurrList=p_AlarmCurrList);
(p_tyAlarmRcyList=p_AlarmRecoveryList);
(p_tyAlarmHistoryList=p_AlarmHistoryList);
(p_bAlarmWarning=p_AlarmWarning);
(p_bAlarmErr=p_AlarmErr);
(p_bAlarmInfo=p_AlarmInfo);
(p_bAlarmInfoLF=p_AlarmInfoLF);
(p_sAlarmInfoMsg=p_AlarmInfoMsg);

(p_eRstErrStat=p_RstErrStat);
(p_eRstErrStatus=p_RstErrStatus);
(p_sRstErrStatTxt=p_RstErrStatTxt);

(p_eHWInfoStat=p_HWInfoStat);
(p_eHWInfoStatus=p_HWInfoStatus);
(p_sHWInfoStatTxt=p_HWInfoStatTxt);
(p_sHWInfoIPAddr=p_HWInfoIPAddr);
(p_sHWInfoSubnetMask=p_HWInfoSubnetMask);
(p_udiHWInfoEthMode=p_HWInfoEthMode);

(p_eProdRcpStat=p_ProdRcpStat);
(p_eProdRcpStatus=p_ProdRcpStatus);
(p_sProdRcpStatTxt=p_ProdRcpStatTxt);
(p_tyProdRcpCurrList=p_ProdRcpCurrList);
(p_tyProdRcpFilterList=p_ProdRcpFilterList);
(p_tyProdRcpSortedList=p_ProdRcpSortedList);
(p_bProdRcpNmEmpty=p_ProdRcpNmEmpty);
(p_bProdRcpListFull=p_ProdRcpListFull);
(p_bProdRcpNmNotExist=p_ProdRcpNmNotExist);
(p_tyProdRcpInfoOut=p_ProdRcpInfoOut);
(p_tyProdRcpCurrRcp0=p_ProdRcpCurrRcp0);
(p_tyProdRcpCurrRcp1=p_ProdRcpCurrRcp1);
(p_tyProdRcpCurrRcp2=p_ProdRcpCurrRcp2);

(p_eMpProdRcpStat=p_MpProdRcpStat);
(p_eMpProdRcpStatus=p_MpProdRcpStatus);

(p_eMcParamStat=p_McParamStat);
(p_eMcParamStatus=p_McParamStatus);
(p_sMcParamStatTxt=p_McParamStatTxt);
(p_tyMcParamCurr=p_McParamCurr);

(p_tyNtParamCurr=p_NtParamCurr);

(p_eUsrMgmtStat=p_UsrMgmtStat);
(p_eUsrMgmtStatus=p_UsrMgmtStatus);
(p_sUsrMgmtStatTxt=p_UsrMgmtStatTxt);
(p_tyUsrMgmtCurrUsr=p_UsrMgmtCurrUsr);
(p_tyUsrMgmtCurrAccessRgt=p_UsrMgmtCurrAccessRight);
(p_tyUsrMgmtAllList=p_UsrMgmtAllList);
(p_tyUsrMgmtLv2List=p_UsrMgmtLvl2List);
(p_tyUsrMgmtLv3List=p_UsrMgmtLvl3List);
(p_tyUsrMgmtAdminList=p_UsrMgmtAdminList);
(p_bUsrMgmtNmEmpty=p_UsrMgmtNmEmpty);
(p_bUsrMgmtListFull=p_UsrMgmtListFull);
(p_bUsrMgmtNmExist=p_UsrMgmtNmExist);
(p_bUsrMgmtNmNotExist=p_UsrMgmtNmNotExist);
(p_bUsrMgmtLastAdmin=p_UsrMgmtLastAdmin);
(p_bUsrMgmtLoginSuccess=p_UsrMgmtLoginSuccess);
(p_bUsrMgmtPwMismatch=p_UsrMgmtPwMismatch);
(p_bUsrMgmtUnableDelete=p_UsrMgmtUnableDelete);
(p_tyUsrMgmtFullData=p_UsrMgmtFullData);

(p_eUSSMEMAStat=p_USSMEMAStat);
(p_eUSSMEMAStatus=p_USSMEMAStatus);
(p_sUSSMEMAStatTxt=p_USSMEMAStatTxt);
(p_bUSSMEMAUSRdy=p_USSMEMAUSRdy);
(p_bUSSMEMAUSGdBrdRdy=p_USSMEMAUSGdBrdRdy);
(p_bUSSMEMADSRdy=p_USSMEMADSRdy);
(p_bUSSMEMAUSB=p_USSMEMAUSB);

(p_eDSSMEMAStat=p_DSSMEMAStat);
(p_eDSSMEMAStatus=p_DSSMEMAStatus);
(p_sDSSMEMAStatTxt=p_DSSMEMAStatTxt);
(p_bDSSMEMAUSRdy=p_DSSMEMAUSRdy);
(p_bDSSMEMAUSGdBrdRdy=p_DSSMEMAUSGdBrdRdy);
(p_bDSSMEMADSRdy=p_DSSMEMADSRdy);
(p_bDSSMEMADBA=p_DSSMEMADBA);
(p_bDSSMEMADBAStat=p_DSSMEMADBAStat);


(p_eUSSMEMA2Stat=p_USSMEMA2Stat);
(p_eUSSMEMA2Status=p_USSMEMA2Status);
(p_sUSSMEMA2StatTxt=p_USSMEMA2StatTxt);
(p_bUSSMEMA2USRdy=p_USSMEMA2USRdy);
(p_bUSSMEMA2USGdBrdRdy=p_USSMEMA2USGdBrdRdy);
(p_bUSSMEMA2DSRdy=p_USSMEMA2DSRdy);
(p_bUSSMEMA2USB=p_USSMEMA2USB);
(p_bUSSMEMA2Transporting=p_USSMEMA2Transporting);

(p_bUSHermesUSRdy=p_USHermesUSRdy);
(p_bUSHermesDSRdy=p_USHermesDSRdy);
(p_bUSHermesUSGdRdy=p_USHermesUSGdRdy);
(p_bUSHermesDSGdRdy=p_USHermesDSGdRdy);
(p_bUSHermesConnected=p_USHermesConnected);
(p_bUSHermesAccDataMnl=p_USHermesAccDataMnl);

(p_bDSHermesUSRdy=p_DSHermesUSRdy);
(p_bDSHermesDSRdy=p_DSHermesDSRdy);
(p_bDSHermesUSGdRdy=p_DSHermesUSGdRdy);
(p_bDSHermesDSGdRdy=p_DSHermesDSGdRdy);
(p_bDSHermesConnected=p_DSHermesConnected);

(p_eConvStat=p_ConvStat);
(p_eConvStatus=p_ConvStatus);
(p_sConvStatTxt=p_ConvStatTxt);

(p_bConvHvBrd=p_OpsInvertHvBrd);
(p_bConvGdBrd=p_OpsInvertGdBrd);

(p_eAWOpenStat=p_AWOpenStat);
(p_eAWOpenStatus=p_AWOpenStatus);
(p_sAWOpenStatTxt=p_AWOpenStatTxt);
(p_udiAWOpenAxisErrID=p_AWOpenAxisErrID);
(p_bAWOpenAxisErr=p_AWOpenAxisErr);
(p_bAWOpenPwrOn=p_AWOpenPwrOn);
(p_bAWOpenIsHomed=p_AWOpenIsHomed);
(p_diAWOpenActualPos=p_AWOpenActualPos);
(p_bAWOpenFwdLmtSen=p_AWOpenFwdLmtSen);
(p_bAWOpenRevLmtSen=p_AWOpenRevLmtSen);
(p_sAWOpenAxisErrTxt=p_AWOpenAxisErrTxt);
(p_bAWOpenJogging=p_AWOpenJogging);
(p_bAWOpenOpenSen=p_AWOpenOpenSen);
(p_bAWOpenCloseSen=p_AWOpenCloseSen);

(p_eInvertStat=p_MotorBrkStat);
(p_eInvertStatus=p_MotorBrkStatus);
(p_sInvertStatTxt=p_MotorBrkStatTxt);

(p_eOpsStat=p_OpsStat);
(p_eOpsStatus=p_OpsStatus);
(p_sOpsStatTxt=p_OpsStatTxt);
(p_eOpsOpsStatus=p_OpsOpsStatus);

(p_sOpsInvertStepTxt=p_OpsInvertStepTxt);
(p_eOpsInvertCurrPos=p_OpsInvertInvertCurrPos);

(p_bOpsInvertStepInitConv=p_OpsInvertStepInitConv);
(p_bOpsInvertStepInitDone=p_OpsInvertStepInitDone);

(p_bOpsStatusRun=p_OpsStatusRun);
(p_bOpsStatusStop=p_OpsStatusStop);
(p_bOpsStatusCycleStop=p_OpsStatusCycleStop);
(p_bOpsStatusStep=p_OpsStatusStep);
(p_bOpsRun=p_OpsRun);

(p_bOpsUSStandby=p_OpsInvertStepUSStandby);
(p_bOpsDSStandby=p_OpsInvertStepDSStandby);


(p_bOpsInvertStepAWMove=p_OpsInvertStepAWMove);
(p_bOpsSafeMode=p_OpsInvertStepOpsSafeMode);

(p_eHermesStat=p_HermesStat);
(p_eHermesStatus=p_HermesStatus);
(p_tyHermesConfiguration=p_HermesConfiguration);

(p_eLFLeaderStat=p_LFLeaderStat);
(p_eLFLeaderStatus=p_LFLeaderStatus);
(p_tyLFLeaderFollowerInfo=p_LFLeaderFollowerInfo);
(p_tyLFLeaderFollowerToLeaderTag=p_LFLeaderFollowerToLeaderTag);

(p_bLFFollowerProdAccDataMnl=p_LFFollowerProdAccDataMnl);
(p_bLFFollowerLdrSeqCtrlInActive=p_LFFollowerLdrSeqCtrlInActive);
(p_bLFFollowerUSAllow=p_LFFollowerUSAllow);
(p_bLFFollowerDSAllow=p_LFFollowerDSAllow);

(p_bFollower1WaitRlsProd=p_Follower1WaitRlsBrd);

(p_bLCSLFAccDataMnl=p_LCSLFAccDataMnl);

(p_tyDI=p_DI);

(p_tyDO=p_DO);
(p_eDOStat=p_DOStat);
(p_eDOStatus=p_DOStatus);


(p_eStopperStat=p_PneuNoSenStopperStat);
(p_eStopperStatus=p_PneuNoSenStopperStatus);
(p_sStopperStatTxt=p_PneuNoSenStopperStatTxt);
(p_bStopperTwoCtrlOut=p_PneuNoSenStopperTwoCtrlOut);
(p_bStopperExtCtrl=p_PneuNoSenStopperExtCtrl);
(p_bStopperRetCtrl=p_PneuNoSenStopperRetCtrl);
(p_bStopperExtended=p_PneuNoSenStopperExtended);


(p_eClampStat=p_PneuNoSenClampStat);
(p_eClampStatus=p_PneuNoSenClampStatus);
(p_sClampStatTxt=p_PneuNoSenClampStatTxt);
(p_bClampTwoCtrlOut=p_PneuNoSenClampTwoCtrlOut);
(p_bClampExtCtrl=p_PneuNoSenClampExtCtrl);
(p_bClampRetCtrl=p_PneuNoSenClampRetCtrl);


(p_eInShutterStat=p_Pneu2SenInShutterStat);
(p_eInShutterStatus=p_Pneu2SenInShutterStatus);
(p_sInShutterStatTxt=p_Pneu2SenInShutterStatTxt);
(p_bInShutterExtCtrl=p_Pneu2SenInShutterExtCtrl);
(p_bInShutterRetCtrl=p_Pneu2SenInShutterRetCtrl);
(p_bInShutterTwoCtrlOut=p_Pneu2SenInShutterTwoCtrlOut);
(p_bInShutterExtended=p_Pneu2SenInShutterExtended);
(p_bInShutterRetracted=p_Pneu2SenInShutterRetracted);

(p_eOutShutterStat=p_Pneu2SenOutShutterStat);
(p_eOutShutterStatus=p_Pneu2SenOutShutterStatus);
(p_sOutShutterStatTxt=p_Pneu2SenOutShutterStatTxt);
(p_bOutShutterExtCtrl=p_Pneu2SenOutShutterExtCtrl);
(p_bOutShutterRetCtrl=p_Pneu2SenOutShutterRetCtrl);
(p_bOutShutterTwoCtrlOut=p_Pneu2SenOutShutterTwoCtrlOut);
(p_bOutShutterExtended=p_Pneu2SenOutShutterExtended);
(p_bOutShutterRetracted=p_Pneu2SenOutShutterRetracted);


(p_eClamp1Stat=p_Pneu2SenClamp1Stat);
(p_eClamp1Status=p_Pneu2SenClamp1Status);
(p_sClamp1StatTxt=p_Pneu2SenClamp1StatTxt);
(p_bClamp1ExtCtrl=p_Pneu2SenClamp1ExtCtrl);
(p_bClamp1RetCtrl=p_Pneu2SenClamp1RetCtrl);
(p_bClamp1TwoCtrlOut=p_Pneu2SenClamp1TwoCtrlOut);
(p_bClamp1Extended=p_Pneu2SenClamp1Extended);
(p_bClamp1Retracted=p_Pneu2SenClamp1Retracted);


(p_eClamp2Stat=p_Pneu2SenClamp2Stat);
(p_eClamp2Status=p_Pneu2SenClamp2Status);
(p_sClamp2StatTxt=p_Pneu2SenClamp2StatTxt);
(p_bClamp2ExtCtrl=p_Pneu2SenClamp2ExtCtrl);
(p_bClamp2RetCtrl=p_Pneu2SenClamp2RetCtrl);
(p_bClamp2TwoCtrlOut=p_Pneu2SenClamp2TwoCtrlOut);
(p_bClamp2Extended=p_Pneu2SenClamp2Extended);
(p_bClamp2Retracted=p_Pneu2SenClamp2Retracted);


(p_eClamp3Stat=p_Pneu2SenClamp3Stat);
(p_eClamp3Status=p_Pneu2SenClamp3Status);
(p_sClamp3StatTxt=p_Pneu2SenClamp3StatTxt);
(p_bClamp3ExtCtrl=p_Pneu2SenClamp3ExtCtrl);
(p_bClamp3RetCtrl=p_Pneu2SenClamp3RetCtrl);
(p_bClamp3TwoCtrlOut=p_Pneu2SenClamp3TwoCtrlOut);
(p_bClamp3Extended=p_Pneu2SenClamp3Extended);
(p_bClamp3Retracted=p_Pneu2SenClamp3Retracted);

(p_bMtrBrkRls=p_MotorBrkMtrBrkRls);

(p_bLeftSen=p_DIConvLftSen);
(p_bRightSen=p_DIConvRgtSen);
(p_diInitTm=p_McParamConvInitTm);
(p_eDirection=p_NtParamProjConvDir);

(p_bDSSMEMAAlmData=p_DSSMEMAAlmData);
(p_bConvAlmData=p_ConvAlmData);

(p_bUnlockCovPrep=p_NTParamUnlockCovPrep);
(p_bMachineSafetyPrep=p_NTParamMachineSafetySig);

(p_bOpsInvOnceTwicePCBOut=p_OpsInvertOnceTwicePCBOut);
(p_bOpsInvertStepUSStandby=p_OpsInvertStepUSStandby);


(p_eSimuStat=p_SimuStat);
(p_eSimuStatus=p_SimuStatus);

(p_eSimuSimuStatus=p_SimuSimuStatus);
(p_bSimuStatusRun=p_SimuStatusRun);
(p_bSimuStatusStop=p_SimuStatusStop);
(p_bSimuStatusCycleStop=p_SimuStatusCycleStop);
(p_bSimuStatusStep=p_SimuStatusStep);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)1))&(((signed long)((*(p_eAct)))==(signed long)0)))){
(eStat=0);
}


if((((signed long)eStatus==(signed long)0))){
(eStat=((*(p_eAct))));
}

}imp1_else1_0:imp1_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main.st"
static void __AS__Action__Act_Main(void){
{

switch(eStat){

case 0:{
if((((signed long)eStatus!=(signed long)0))){


{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eUIInit=0);
}

(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(eUIInit){
case 0:{
__AS__Action__Act_Main_C0005();
(eUIInit=1);

}break;case 1:{
__AS__Action__Act_Main_C0007();
(eUIInit=2);

}break;case 2:{
__AS__Action__Act_Main_P0000();
(eUIInit=3);

}break;case 3:{
__AS__Action__Act_Main_P0200();
(eUIInit=4);

}break;case 4:{
__AS__Action__Act_Main_P0201();
(eUIInit=5);

}break;case 5:{
__AS__Action__Act_Main_P0300();
(eUIInit=6);

}break;case 6:{
__AS__Action__Act_Main_P0400();
(eUIInit=7);

}break;case 7:{
__AS__Action__Act_Main_P0900();
(eUIInit=8);

}break;case 8:{
__AS__Action__Act_Main_P0910();
(eUIInit=9);

}break;case 9:{
__AS__Action__Act_Main_P0920();
(eUIInit=10);

}break;case 10:{
__AS__Action__Act_Main_P0922();
(eUIInit=14);

}break;case 14:{
__AS__Action__Act_Main_P0931();
(eUIInit=15);

}break;case 15:{
__AS__Action__Act_Main_P0934();
(eUIInit=17);

}break;case 17:{
__AS__Action__Act_Main_P0940();
(eUIInit=18);


}break;case 18:{
__AS__Action__Act_Main_P1000();
(eUIInit=19);

}break;case 19:{
__AS__Action__Act_Main_P1020();
(eUIInit=20);

}break;case 20:{
__AS__Action__Act_Main_P1021();
(eUIInit=21);

}break;case 21:{
__AS__Action__Act_Main_P1022();
(eUIInit=22);

}break;case 22:{
__AS__Action__Act_Main_P1023();
(eUIInit=23);

}break;case 23:{
__AS__Action__Act_Main_P1024();
(eUIInit=25);

}break;case 25:{
__AS__Action__Act_Main_P1040();
(eUIInit=26);

}break;case 26:{
__AS__Action__Act_Main_P1050();
(eUIInit=27);

}break;case 27:{
__AS__Action__Act_Main_P1080();
(eUIInit=28);

}break;case 28:{
__AS__Action__Act_Main_P1081();
(eUIInit=29);

}break;case 29:{
(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(tyProdRcpCurrRcpWr=*(struct tyProdRcpParam*)&((*(p_tyProdRcpCurrRcp0))));

(tyUsrMgmtAccessRightLvl1Wr=*(struct tyUsrMgmtAccessRight*)&((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1));
(tyUsrMgmtAccessRightLvl2Wr=*(struct tyUsrMgmtAccessRight*)&((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2));
(tyUsrMgmtAccessRightLvl3Wr=*(struct tyUsrMgmtAccessRight*)&((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3));

{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyHermesUSParamWr; unsigned char* zzRValue=(unsigned char*)((*(p_tyHermesConfiguration)).a_tyUSParam); for(zzIndex=0; zzIndex<800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyHermesDSParamWr; unsigned char* zzRValue=(unsigned char*)((*(p_tyHermesConfiguration)).a_tyDSParam); for(zzIndex=0; zzIndex<800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

(eStatus=1);

}break;}

}

}break;}

}imp47_case0_1:imp47_endcase0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_C0005.st"
static void __AS__Action__Act_Main_C0005(void){
{


if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBuz)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnMuteBuz.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnMuteBuz.uiRtStat)));
}


fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnAlarm.uiRtStat)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_C0007.st"
static void __AS__Action__Act_Main_C0007(void){
{
if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bLeaderMc)==(unsigned long)(unsigned char)1))){
(tyCommon.tyNotif.tyTxtLFMc.usiValueIdx=0);
}else{
(tyCommon.tyNotif.tyTxtLFMc.usiValueIdx=1);
}

}imp49_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0000.st"
static void __AS__Action__Act_Main_P0000(void){
{

(tyProperty.tyVisu.uiSSaverTm=((*(p_tyMcParamCurr)).uiSSaverTmInSec));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0200.st"
static void __AS__Action__Act_Main_P0200(void){
{

switch(((*(p_tyNtParamCurr)).eProjConvDir)){
case 0:{
(tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx=0);
(tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx=0);
}break;case 1:{
(tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx=1);
(tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx=1);
}break;case 2:{
(tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx=0);
(tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx=1);
}break;case 3:{
(tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx=1);
(tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx=0);
}break;}

if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0200OpsGen.tyOps.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0200OpsGen.tyOps.tyBitmapMc.usiValueIdx=100);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapMc.usiValueIdx=0);
}


fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat)));


(((_2byte_bit_field_*)(&tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bUnlockCoverPrep)^1));

if(((((*(p_tyNtParamCurr)).bProjInvertOncePrep)&((*(p_tyNtParamCurr)).bProjInvertTwicePrep))^1)){

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtUS2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiRtStat)));

}


}imp51_else3_0:imp51_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0201.st"
static void __AS__Action__Act_Main_P0201(void){
{
if(((*(p_tyNtParamCurr)).bLFProdWidth2Prep)){
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyNumProdWidth2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyNumProdWidth.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyNumProdWidth2.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyNumProdWidth.uiRtStat)));
}

if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0201OpsConv.tyOps.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0201OpsConv.tyOps.tyBitmapMc.usiValueIdx=100);
}
}else{
(tyP0201OpsConv.tyOps.tyBitmapMc.usiValueIdx=0);
}

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat)));



if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetyRlySig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlySig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diEStopSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnEStop.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverSWSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnCoverSWSig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBA)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnUBA.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSB)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnDSB.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat)==(signed long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvLftSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnConvLftSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvRgtSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnConvRgtSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diPressureSW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnPressureSW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diThermalPrtSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnThermalPrtSig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoatingSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnCoatingSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUSWidthChkSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnUSWidthChkSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSWidthChkSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnDSWidthChkSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertHomeSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInvertHomeSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertRemoteSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemoteSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInShutterOpenRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterOpenRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInShutterCloseRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterCloseRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diOutShutterOpenRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterOpenRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diOutShutterCloseRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterCloseRS.uiRtStat)));
}


if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diSafetyRlyRst)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlyRst.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnTLGreen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnTLAmber.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnTLRed.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLWhite)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnTLWhite.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLBlue)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnTLBlue.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBuz)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnBuzzer.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diCoatingStprRet)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnCoatingRetCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUSB)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnUSB.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBA)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnDBA.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBAStat)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diConvMtrCW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diConvMtrCCW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCCW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diStprUnblkCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnStprUnblkCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diStprBlkCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnStprBlkCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertBrake)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInvertBrake.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertHome)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInvertHome.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertRemote)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemote.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMtrPwrRly)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnMtrPwrRly.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClampControl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnClampCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnclampControl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnUnclampCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInShutterOpenCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInShutterOpenCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInShutterCloseCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnInShutterCloseCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diOutShutterOpenCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterOpenCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diOutShutterCloseCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterCloseCtrl.uiRtStat)));
}



if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetyRlySig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlySig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diEStopSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnEStop.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverSWSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoverSWSig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBA)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBA2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSB)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSB.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat)==(signed long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat2)==(signed long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvLftSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvLftSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvRgtSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvRgtSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diPressureSW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnPressureSW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diThermalPrtSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnThermalPrtSig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoatingSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUSWidthChkSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSWidthChkSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSWidthChkSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSWidthChkSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertHomeSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHomeSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertRemoteSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemoteSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInShutterOpenRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterOpenRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInShutterCloseRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterCloseRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diOutShutterOpenRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterOpenRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diOutShutterCloseRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterCloseRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClamp2Sen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Sen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClamp3Sen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Sen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClampRS1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS1.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnClampRS1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS1.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClampRS2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnClampRS2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClampRS3)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS3.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnClampRS3)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS3.uiRtStat)));
}



if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diSafetyRlyRst)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlyRst.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLGreen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLAmber.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLRed.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLWhite)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLWhite.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLBlue)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLBlue.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBuz)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnBuzzer.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diCoatingStprRet)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingRetCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUSB)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUSB2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBA)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBA.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBAStat)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diConvMtrCW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diConvMtrCCW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCCW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertBrake)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertBrake.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertHome)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHome.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertRemote)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemote.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMtrPwrRly)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnMtrPwrRly.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInShutterOpenCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterOpenCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInShutterCloseCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterCloseCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diOutShutterOpenCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterOpenCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diOutShutterCloseCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterCloseCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClamp1Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp1Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnClamp1Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp1Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClamp2Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnClamp2Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp2Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClamp3Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnClamp3Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp3Ctrl.uiRtStat)));
}




if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetyRlySig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlySig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diEStopSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnEStop.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverSWSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBA)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBA.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSB)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSB.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat)==(signed long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBAStat.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvLftSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvLftSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvRgtSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvRgtSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diPressureSW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPressureSW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diThermalPrtSig)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnThermalPrtSig.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoatingSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUSWidthChkSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSWidthChkSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSWidthChkSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSWidthChkSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertHomeSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHomeSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertRemoteSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemoteSen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInShutterOpenRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterOpenRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInShutterCloseRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterCloseRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diOutShutterOpenRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterOpenRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diOutShutterCloseRS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterCloseRS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClamp2Sen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Sen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClamp3Sen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Sen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClampRS1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS1.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnClampRS1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS1.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClampRS2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnClampRS2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diClampRS3)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS3.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnClampRS3)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS3.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverSWSig2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig2.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromUS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromUS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromDS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromDS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnlockCoverSigFromUS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromUS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnlockCoverSigFromDS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromDS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverUnlockPB1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverUnlockPB1.uiRtStat)));
}



if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diSafetyRlyRst)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlyRst.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLGreen.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLAmber.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLRed.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLWhite)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLWhite.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLBlue)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLBlue.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBuz)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBuzzer.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diCoatingStprRet)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingRetCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUSB)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSB.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBA)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBA.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBAStat)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBAStat.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diConvMtrCW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diConvMtrCCW)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCCW.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertBrake)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertBrake.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertHome)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHome.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInvertRemote)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemote.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMtrPwrRly)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMtrPwrRly.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInShutterOpenCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterOpenCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diInShutterCloseCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterCloseCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diOutShutterOpenCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterOpenCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diOutShutterCloseCtrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterCloseCtrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClamp1Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp1Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnClamp1Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp1Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClamp2Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnClamp2Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp2Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diClamp3Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Ctrl.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUnClamp3Ctrl)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp3Ctrl.uiRtStat)));
}


if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTopCvrUnlckToDS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToDS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTopCvrUnlckToUS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToUS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMachineSafetySigToDS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtniMachineSafetySigToDS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMachineSafetySigToUS)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMachineSafetySigToUS.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diCoverPBLED1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPBLED1.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBypassTopCover1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBypassTopCover1.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diSafetyTopCoverSWCoil1)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyTopCoverSWCoil1.uiRtStat)));
}











(tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMin));
(tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMax));

(tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValueMin=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMin));
(tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValueMax=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax));

(tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpFlippedBrdLmt.diMin));
(tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpFlippedBrdLmt.diMax));



(((_2byte_bit_field_*)(&tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesPrep)^1));

(((_2byte_bit_field_*)(&tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesPrep)^1));
(((_2byte_bit_field_*)(&tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesPrep)^1));
(((_2byte_bit_field_*)(&tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bUnlockCoverPrep)^1));
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0300.st"
static void __AS__Action__Act_Main_P0300(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0300McInfo.tyMcInfo.tyStringSoftwareVer.sValue; plcstring* zzRValue=(plcstring*)sSWVersion; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0300McInfo.tyMcInfo.tyTxtNtAddr.usiValueIdx=((*(p_tyNtParamCurr)).usiNtAddr));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0300McInfo.tyMcInfo.tyStringJobNo.sValue; plcstring* zzRValue=(plcstring*)CONCAT("(",CONCAT(((*(p_tyNtParamCurr)).sJobNo),")")); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0400.st"
static void __AS__Action__Act_Main_P0400(void){
{


(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.uiRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.uiRtStat))->bit0=1);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp0)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM));
(tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiMcMod));
(tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp0)).sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((*(p_tyNtParamCurr)).bLFProdWidth2Prep)){
fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyProdSel.tyNumProdWidth2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyProdSel.tyNumProdWidth.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyNumProdWidth.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.tyStringTitle2Col2Row0.sValue; plcstring* zzRValue=(plcstring*)"US | DS Width"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


}else{
fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyProdSel.tyNumProdWidth2.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyProdSel.tyNumProdWidth.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyNumProdWidth.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.tyStringTitle2Col2Row0.sValue; plcstring* zzRValue=(plcstring*)"Product Width"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}imp54_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0900.st"
static void __AS__Action__Act_Main_P0900(void){
{

(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tyBtnCoverSW.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverSWSig)>(signed long)0))^1));

(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tyBtnThermalPrtSig.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diThermalPrtSig)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tyBtnPressureSW.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diPressureSW)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tySigLyr.uiRtStat))->bit0=(((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diThermalPrtSig)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diPressureSW)>(signed long)0)))^1));

(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tyBtnUSWidthChkSen.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUSWidthChkSen)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tyBtnDSWidthChkSen.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSWidthChkSen)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0900GenIn.tyGenIn.tyWidthChkLyr.uiRtStat))->bit0=(((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUSWidthChkSen)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSWidthChkSen)>(signed long)0)))^1));


(tyP0900GenIn.tyGenIn.tyBtnSafetySigFromDS.uiRtStat=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromDS)>(signed long)0))^1));
(tyP0900GenIn.tyGenIn.tyBtnSafetySigFromUS.uiRtStat=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromUS)>(signed long)0))^1));
(tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromDS.uiRtStat=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnlockCoverSigFromDS)>(signed long)0))^1));
(tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromUS.uiRtStat=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUnlockCoverSigFromUS)>(signed long)0))^1));
(tyP0900GenIn.tyGenIn.tyBtnUnlkCovPB.uiRtStat=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverUnlockPB1)>(signed long)0))^1));
(tyP0900GenIn.tyGenIn.tyBtnTopCovSwSIg.uiRtStat=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diCoverSWSig2)>(signed long)0))^1));
(tyP0900GenIn.tyGenIn.tyMachSafetyLyr.uiRtStat=(((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromDS)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromUS)>(signed long)0)))^1));
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0910.st"
static void __AS__Action__Act_Main_P0910(void){
{

(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnBuzzer.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBuz)>(signed long)0))^1));

(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTLGreen.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTLAmber.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTLRed.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTLWhite.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLWhite)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTLBlue.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLBlue)>(signed long)0))^1));


(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyTLLyr.uiRtStat))->bit0=(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLWhite)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLBlue)>(signed long)0)))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTLRed1.uiRtStat))->bit0=1);


(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diCoverPBLED1)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTopCvrUnlckToDS)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBypassTopCover1)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMachineSafetySigToDS)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diSafetyTopCoverSWCoil1)>(signed long)0))^1));

(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyUlkCovLyr.uiRtStat))->bit0=(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diCoverPBLED1)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTopCvrUnlckToDS)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBypassTopCover1)>(signed long)0)))^1));
(((_2byte_bit_field_*)(&tyP0910GenOut.tyGenOut.tyMacSafetyLyr.uiRtStat))->bit0=(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diMachineSafetySigToDS)>(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diSafetyTopCoverSWCoil1)>(signed long)0)))^1));
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0920.st"
static void __AS__Action__Act_Main_P0920(void){
{


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAWPrep)^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjStopperPrep)^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjInletShutPrep)|((*(p_tyNtParamCurr)).bProjOutletShutPrep))^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjClampPrep)&(((signed long)((*(p_tyNtParamCurr)).eProjClampOption)==(signed long)0)))^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjClampPrep)&(((signed long)((*(p_tyNtParamCurr)).eProjClampOption)==(signed long)1)))^1));

if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapConv.usiValueIdx=200);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapShutter.usiValueIdx=200);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapAW.usiValueIdx=200);
}else{
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapConv.usiValueIdx=100);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapShutter.usiValueIdx=100);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapAW.usiValueIdx=100);
}
}else{
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapConv.usiValueIdx=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapShutter.usiValueIdx=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBitmapAW.usiValueIdx=0);
}
}imp57_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0922.st"
static void __AS__Action__Act_Main_P0922(void){
{

(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyInletShutterCom.tyLyr.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjInletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjInletShutPrep)^1));

(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyOutletShutterCom.tyLyr.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjOutletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjOutletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyOutletShutterDis.tyLyr.uiRtStat))->bit0=1);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0931.st"
static void __AS__Action__Act_Main_P0931(void){
{

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvCom.tyBtnLft.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvLftSen)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvCom.tyBtnRgt.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvRgtSen)==(signed long)0)));

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvCom.tyBtnHomeSen.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertHomeSen)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvCom.tyBtnRemoteSen.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diInvertRemoteSen)==(signed long)0)));

if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0931ConvInv.tyConvCom.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0931ConvInv.tyConvCom.tyBitmapMc.usiValueIdx=100);
}
}else{
(tyP0931ConvInv.tyConvCom.tyBitmapMc.usiValueIdx=0);
}

}imp59_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0934.st"
static void __AS__Action__Act_Main_P0934(void){
{
(tyP0934AW.tyMotionStd.tyNumTargetPos.diValue=0);
(tyP0934AW.tyMotionStd.tyNumStepSize.diValue=0);
(tyP0934AW.tyMotionStd.tyNumNomSpd.diValue=(((signed long)((((*(p_tyNtParamCurr)).tyUIAWNomSpd.diMax)+((*(p_tyNtParamCurr)).tyUIAWNomSpd.diMin))))/((signed long)(2))));
(tyP0934AW.tyMotionStd.tyNumSlwSpd.diValue=(((signed long)((((*(p_tyNtParamCurr)).tyUIAWSlwSpd.diMax)+((*(p_tyNtParamCurr)).tyUIAWSlwSpd.diMin))))/((signed long)(3))));

(tyP0934AW.tyMotionStd.tyNumTargetPos.diValueMax=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax));
(tyP0934AW.tyMotionStd.tyNumTargetPos.diValueMin=((*(p_tyNtParamCurr)).tyUIAWTargetPos.diMin));

(tyP0934AW.tyMotionStd.tyNumStepSize.diValueMax=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax));
(tyP0934AW.tyMotionStd.tyNumStepSize.diValueMin=(((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax)*-1));

(tyP0934AW.tyMotionStd.tyNumNomSpd.diValueMax=((*(p_tyNtParamCurr)).tyUIAWNomSpd.diMax));
(tyP0934AW.tyMotionStd.tyNumNomSpd.diValueMin=((*(p_tyNtParamCurr)).tyUIAWNomSpd.diMin));

(tyP0934AW.tyMotionStd.tyNumSlwSpd.diValueMax=((*(p_tyNtParamCurr)).tyUIAWSlwSpd.diMax));
(tyP0934AW.tyMotionStd.tyNumSlwSpd.diValueMin=((*(p_tyNtParamCurr)).tyUIAWSlwSpd.diMin));

(tyP0934AW.tyAW.tyNumNewWidth.diValueMax=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax));
(tyP0934AW.tyAW.tyNumNewWidth.diValueMin=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMin));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P0940.st"
static void __AS__Action__Act_Main_P0940(void){
{

(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA2.tyLyr.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjInvertOncePrep)|((*(p_tyNtParamCurr)).bProjInvertTwicePrep))^1));

(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA.tyBtnUBA.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBA)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUSB)==(signed long)0)));

(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyDSSMEMA.tyBtnDSB.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diDSB)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBA)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBAStat)==(signed long)0)));

(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBA.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBA2)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat2)==(signed long)0)));
(((_2byte_bit_field_*)(&tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.uiRtStat))->bit0=(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diUSB2)==(signed long)0)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1000.st"
static void __AS__Action__Act_Main_P1000(void){
{

((*(p_tyMcParamCurr)).usiLang=0);




























}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1020.st"
static void __AS__Action__Act_Main_P1020(void){
{

(((_2byte_bit_field_*)(&tyP1020McSetNavi.tyNavi.tyBtnVCommSet.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bLFPrep)|((*(p_tyNtParamCurr)).bLCSLFPrep)|((*(p_tyNtParamCurr)).bLCSReqRcpPrep)|((*(p_tyNtParamCurr)).bLCSLiveDatPrep))^1));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1021.st"
static void __AS__Action__Act_Main_P1021(void){
{

(tyP1021McSetGen.tyGen.tyNumConvInitTm.diValueMin=((*(p_tyNtParamCurr)).tyUIConvInitTm.diMin));
(tyP1021McSetGen.tyGen.tyNumConvInitTm.diValueMax=((*(p_tyNtParamCurr)).tyUIConvInitTm.diMax));

(tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValueMin=((*(p_tyNtParamCurr)).tyUITranInErrDlyTm.diMin));
(tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValueMax=((*(p_tyNtParamCurr)).tyUITranInErrDlyTm.diMax));

(tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValueMin=((*(p_tyNtParamCurr)).tyUITranOutErrDlyTm.diMin));
(tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValueMax=((*(p_tyNtParamCurr)).tyUITranOutErrDlyTm.diMax));

(tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMin));
(tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMax));


(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyNetworkMode.diMin));
(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyNetworkMode.diMax));

(tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpFlippedBrdLmt.diMin));
(tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpFlippedBrdLmt.diMax));

(tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValueMin=((*(p_tyNtParamCurr)).tyUIInvertTargetPos.diMin));
(tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValueMax=((*(p_tyNtParamCurr)).tyUIInvertTargetPos.diMax));
(tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValueMin=((*(p_tyNtParamCurr)).tyUIInvertTargetPos.diMin));
(tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValueMax=((*(p_tyNtParamCurr)).tyUIInvertTargetPos.diMax));


(tyP1021McSetGen.tyGen.tyNumSSaverTm.diValueMin=((*(p_tyNtParamCurr)).tyUISSaverTm.diMin));
(tyP1021McSetGen.tyGen.tyNumSSaverTm.diValueMax=((*(p_tyNtParamCurr)).tyUISSaverTm.diMax));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyNumSSaverTm.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bSSaverPrep)^1));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyTxtSSaverTm.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bSSaverPrep)^1));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnSSaverEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bSSaverPrep)^1));


(tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValueMin=((*(p_tyNtParamCurr)).tyUIAutoLogoutTm.diMin));
(tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValueMax=((*(p_tyNtParamCurr)).tyUIAutoLogoutTm.diMax));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAutoLogoutPrep)^1));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyTxtLblAutoLogoutTm.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAutoLogoutPrep)^1));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAutoLogoutPrep)^1));


(tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValueMin=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMin));
(tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValueMax=(((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax)+10000));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyNumWidthAtHm.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAWPrep)^1));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyTxtWidthAtHm.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAWPrep)^1));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnAWDis.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bAWPrep)^1));




(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyNumWidthOffset.uiRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyTxtWidthOffset.uiRtStat))->bit0=1);
(tyP1021McSetGen.tyGen.tyNumWidthOffset.diValueMin=((*(p_tyNtParamCurr)).tyUIAWOffset.diMin));
(tyP1021McSetGen.tyGen.tyNumWidthOffset.diValueMax=((*(p_tyNtParamCurr)).tyUIAWOffset.diMax));


(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bVSMEMAPrep)^1));


(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesRmtPrep)^1));


(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesSvyPrep)^1));



(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnStopperDis.uiRtStat))->bit0=1);


(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnClampDis.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjClampPrep)&(((signed long)((*(p_tyNtParamCurr)).eProjClampOption)==(signed long)0)))^1));


(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyTxtLblFlippedBrd.uiRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.uiRtStat))->bit0=1);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringMcNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).sMcNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValue=((*(p_tyMcParamCurr)).diWidthAtHmPosInUM));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1021McSetGen.tyGen.tyNumSSaverTm.diValue=(signed long)((*(p_tyMcParamCurr)).uiSSaverTmInSec));
(tyP1021McSetGen.tyGen.tyBtnSSaverEn.bValue=((*(p_tyMcParamCurr)).bSSaverEn));

(tyP1021McSetGen.tyGen.tyNumConvInitTm.diValue=((*(p_tyMcParamCurr)).diConvInitTmInMS));
(tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValue=((*(p_tyMcParamCurr)).diTranInErrDlyTmInMS));
(tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValue=((*(p_tyMcParamCurr)).diTranOutErrDlyTmInMS));
(tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultMcMod));
(tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultFlippedBrd));

(tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bValue=((*(p_tyMcParamCurr)).bAutoStepEn));
(tyP1021McSetGen.tyGen.tyBtnAWDis.bValue=((*(p_tyMcParamCurr)).bAWDis));
(tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bValue=((*(p_tyMcParamCurr)).bVSMEMAEn));
(tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bValue=((*(p_tyMcParamCurr)).bMnlAccDat));
(tyP1021McSetGen.tyGen.tyBtnChgParamEn.bValue=((*(p_tyMcParamCurr)).bChgParamEn));
(tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bValue=((*(p_tyMcParamCurr)).bHermesRmtEn));

(tyP1021McSetGen.tyGen.tyBtnStopperDis.bValue=((*(p_tyMcParamCurr)).bStopperDis));
(tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValue=((*(p_tyMcParamCurr)).diStopperAtLftPos));
(tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValue=((*(p_tyMcParamCurr)).diStopperAtRgtPos));

(tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bValue=((*(p_tyMcParamCurr)).bHermesSvyEn));

(tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValue=((*(p_tyMcParamCurr)).diAutoLogoutTmInSec));
(tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bValue=((*(p_tyMcParamCurr)).bAutoLogoutEn));

(tyP1021McSetGen.tyGen.tyBtnClampDis.bValue=((*(p_tyMcParamCurr)).bClampDis));

(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx=(unsigned char)((*(p_tyMcParamCurr)).eNetworkMod));
(tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bValue=((*(p_tyMcParamCurr)).bLFBuzMute));

(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnAutoStepEn.uiRtStat))->bit0=1);
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1022.st"
static void __AS__Action__Act_Main_P1022(void){
{


(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyVComSel.tyBtnLF.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bLFPrep)^1));
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bLCSLFPrep)^1));
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bLCSReqRcpPrep)^1));
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bLCSManageRcpPrep)^1));
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bLCSLiveDatPrep)^1));

(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyLF.tyBtnLeaderMc.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bLFUsrSetPrep)^1));

(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bUSWidthChkPrep)^1));
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bDSWidthChkPrep)^1));
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.uiRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bDSWidthChkPrep)^1));


(tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue=((*(p_tyMcParamCurr)).bLFEn));
(tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue=((*(p_tyMcParamCurr)).bLCSLFEn));
(tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bValue=((*(p_tyMcParamCurr)).bLCSReqRcpEn));
(tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bValue=((*(p_tyMcParamCurr)).bLCSManageRcpEn));
(tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bValue=((*(p_tyMcParamCurr)).bLCSLiveDatEn));

(tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue=((*(p_tyMcParamCurr)).bLFLeaderMc));
(tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bValue=((*(p_tyMcParamCurr)).bSectionLeader));
(tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bValue=((*(p_tyMcParamCurr)).bUSWidthChkEn));
(tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bValue=((*(p_tyMcParamCurr)).bDSWidthChkEn));
(tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bValue=((*(p_tyMcParamCurr)).bLFSeqStayActive));
(tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bValue=((*(p_tyMcParamCurr)).bDBAOnWOAlign));


(tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.diValue=(signed long)((*(p_tyHermesConfiguration)).tySvyParam.tSndAlive));
(tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.diValue=(signed long)((*(p_tyHermesConfiguration)).tySvyParam.uiSvySvstemPort));
(tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bValue=((*(p_tyHermesConfiguration)).tySvyParam.bFeatureConfiguration));
(tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bValue=((*(p_tyHermesConfiguration)).tySvyParam.bFeatureCheckAliveResponse));
(tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bValue=((*(p_tyHermesConfiguration)).tySvyParam.bFeatureBoardTracking));
(tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bValue=((*(p_tyHermesConfiguration)).tySvyParam.bFeatureQueryWorkOrderInfo));
(tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bValue=((*(p_tyHermesConfiguration)).tySvyParam.bFeatureSendWorkOrderInfo));


(tyP1022McSetVComm.tyVComSvy.tyBtnInsertBrd.bValue=((*(p_tyHermesConfiguration)).tySvyParam.bFeatureInsertBrd));
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1023.st"
static void __AS__Action__Act_Main_P1023(void){
{


(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSSel.tyBtnHermes.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesPrep)^1));
(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSSel.tyBtnHermes.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bHermesPrep)^1));

(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSSel2.tyBtnHermes.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bHermesPrep)&(((*(p_tyNtParamCurr)).bProjInvertOncePrep)|((*(p_tyNtParamCurr)).bProjInvertTwicePrep)))^1));

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUSExtSMEMAPrep)==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx=2);

}else if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUSExtSMEMA2Prep)==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueMaxIdx=2);
}else{
(tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx=1);
(tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueMaxIdx=1);
}

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bDSExtSMEMAPrep)==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx=2);
}else{
(tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx=1);
}



switch(((*(p_tyMcParamCurr)).eUSComm)){
case 0:{
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk=1);
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk=0);
}break;case 1:{
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk=0);
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk=1);
}break;}

(tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueIdx=(unsigned char)((*(p_tyMcParamCurr)).tyUSCommSMEMA.eSelection));
(tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bValue=((*(p_tyMcParamCurr)).tyUSCommSMEMA.bStatSigSetGd));

(tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyUSParam[0].tSndAlive));
(tyP1023McSetHComm.tyUSHermes.tyNumLaneID.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyUSParam[0].iLaneID));
(tyP1023McSetHComm.tyUSHermes.tyNumHostPort.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyUSParam[0].uiHostPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[0].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bFeatureCheckAliveResponse));
(tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bFeatureBoardForecast));
(tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bFeatureQueryBoardInfo));
(tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bFeatureCommand));

(tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bCmpTypeId));
(tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bCmpParam));
(tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[0].bOverwrite));


switch(((*(p_tyMcParamCurr)).eUSComm2)){
case 0:{
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk=1);
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk=0);
}break;case 1:{
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk=0);
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk=1);
}break;}

(tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx=(unsigned char)((*(p_tyMcParamCurr)).tyUSCommSMEMA2.eSelection));
(tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bValue=((*(p_tyMcParamCurr)).tyUSCommSMEMA2.bStatSigSetGd));

(tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyUSParam[1].tSndAlive));
(tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyUSParam[1].iLaneID));
(tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyUSParam[1].uiHostPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[1].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bFeatureCheckAliveResponse));
(tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bFeatureBoardForecast));
(tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bFeatureQueryBoardInfo));
(tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bFeatureCommand));


(tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bCmpTypeId));
(tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bCmpParam));
(tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bValue=((*(p_tyHermesConfiguration)).a_tyUSParam[1].bOverwrite));


switch(((*(p_tyMcParamCurr)).eDSComm)){
case 0:{
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk=1);
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk=0);
}break;case 1:{
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk=0);
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk=1);
}break;}

(tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueIdx=(unsigned char)((*(p_tyMcParamCurr)).tyDSCommSMEMA.eSelection));
(tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bValue=((*(p_tyMcParamCurr)).tyDSCommSMEMA.bStatSigSetGd));

(tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyDSParam[0].tSndAlive));
(tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyDSParam[0].uiSvrPort));
(tyP1023McSetHComm.tyDSHermes.tyNumLaneID.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyDSParam[0].iLaneID));
(tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[0].bFeatureCheckAliveResponse));
(tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[0].bFeatureBoardForecast));
(tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[0].bFeatureSendBoardInfo));
(tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[0].bFeatureCommand));


switch(((*(p_tyMcParamCurr)).eDSComm2)){
case 0:{
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk=1);
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk=0);
}break;case 1:{
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk=0);
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk=1);
}break;}
(tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx=(unsigned char)((*(p_tyMcParamCurr)).tyDSCommSMEMA2.eSelection));
(tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bValue=((*(p_tyMcParamCurr)).tyDSCommSMEMA2.bStatSigSetGd));

(tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyDSParam[1].tSndAlive));
(tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyDSParam[1].uiSvrPort));
(tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.diValue=(signed long)((*(p_tyHermesConfiguration)).a_tyDSParam[1].iLaneID));
(tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[1].bFeatureCheckAliveResponse));
(tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[1].bFeatureBoardForecast));
(tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[1].bFeatureSendBoardInfo));
(tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bValue=((*(p_tyHermesConfiguration)).a_tyDSParam[1].bFeatureCommand));




(tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx=0);
(tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx=0);

(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyGen.tyDrpDnDSSel.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjInvertOncePrep)&((*(p_tyNtParamCurr)).bProjInvertTwicePrep))^1));
(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyGen.tyDrpDnUSSel.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjInvertOncePrep)&((*(p_tyNtParamCurr)).bProjInvertTwicePrep))^1));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1024.st"
static void __AS__Action__Act_Main_P1024(void){
{

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvLftSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyTxtLftSen.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyTxtLftSen.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.uiRtStat)));
}

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diConvRgtSen)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyTxtRgtSen.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyTxtRgtSen.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.uiRtStat)));
}


(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValueMin=((*(p_tyNtParamCurr)).tyUIAntiGapSenOffTm.diMin));
(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValueMax=((*(p_tyNtParamCurr)).tyUIAntiGapSenOffTm.diMax));

(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValueMin=((*(p_tyNtParamCurr)).tyUIAntiGapSenOffTm.diMin));
(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValueMax=((*(p_tyNtParamCurr)).tyUIAntiGapSenOffTm.diMax));


(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValue=((*(p_tyMcParamCurr)).tyConvLftSenAntiGapDly.diSigOffTm));

(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValue=((*(p_tyMcParamCurr)).tyConvRgtSenAntiGapDly.diSigOffTm));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1040.st"
static void __AS__Action__Act_Main_P1040(void){
{

(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.uiRtStat=1);

(tyP1040ProdSet.tyProdSet.tyTxtDrpDnFlippedBrd.uiRtStat=1);

(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMin));
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMax));

(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValueMin=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMin));
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValueMax=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax));

(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueMinIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpFlippedBrdLmt.diMin));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueMaxIdx=(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpFlippedBrdLmt.diMax));

(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValueMin=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMin));
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValueMax=((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax));

for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(i,tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[i-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[i-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp68_endfor0_0:;

if(((*(p_tyNtParamCurr)).bLFProdWidth2Prep)){
fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.tyStringTitle2Col2Row0.sValue; plcstring* zzRValue=(plcstring*)"US | DS Width"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth2.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.tyStringTitle2Col2Row0.sValue; plcstring* zzRValue=(plcstring*)"Product Width"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}imp68_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1050.st"
static void __AS__Action__Act_Main_P1050(void){
{


(tyP1050LFSet.tyLdr.tyNumAfterOven.diValueMax=((*(p_tyNtParamCurr)).tyUILFIndexAfterOven.diMax));
(tyP1050LFSet.tyLdr.tyNumAfterOven.diValueMin=((*(p_tyNtParamCurr)).tyUILFIndexAfterOven.diMin));

(tyP1050LFSet.tyLdr.tyNumBeforeOven.diValueMax=((*(p_tyNtParamCurr)).tyUILFIndexBeforeOven.diMax));
(tyP1050LFSet.tyLdr.tyNumBeforeOven.diValueMin=((*(p_tyNtParamCurr)).tyUILFIndexBeforeOven.diMin));

(tyP1050LFSet.tyLdr.tyNumAfterOven2.diValueMax=((*(p_tyNtParamCurr)).tyUILFIndexAfterOven.diMax));
(tyP1050LFSet.tyLdr.tyNumAfterOven2.diValueMin=((*(p_tyNtParamCurr)).tyUILFIndexAfterOven.diMin));

(tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValueMax=((*(p_tyNtParamCurr)).tyUILFIndexBeforeOven.diMax));
(tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValueMin=((*(p_tyNtParamCurr)).tyUILFIndexBeforeOven.diMin));

for((i=1);i<=c_uiP1050TableSize;i+=1){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[i-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=((unsigned char)(((*(p_tyMcParamCurr)).a_bLFOnline[i-1])&1)+1));
}imp69_endfor0_0:;


(tyP1050LFSet.tyLdr.tyNumAfterOven.diValue=((*(p_tyMcParamCurr)).diLFMcIdxAfterOven));
(tyP1050LFSet.tyLdr.tyNumBeforeOven.diValue=((*(p_tyMcParamCurr)).diLFMcIdxBeforeOven));
(tyP1050LFSet.tyLdr.tyNumAfterOven2.diValue=((*(p_tyMcParamCurr)).diLFMcIdxAfterOven2));
(tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValue=((*(p_tyMcParamCurr)).diLFMcIdxBeforeOven2));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1080.st"
static void __AS__Action__Act_Main_P1080(void){
{

for((i=1);i<=c_uiP1080TableSize;i+=1){
uint2str(i,tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtAllList))[i-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtAllList))[i-1].eUsrLvl)+1));
}imp70_endfor0_0:;

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Main/Act_Main_P1081.st"
static void __AS__Action__Act_Main_P1081(void){
{


if(((__AS__STRING_CMP(((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.sNm),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.sNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv1Nm; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.sNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sValue; plcstring* zzRValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv1Nm; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOps.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bOpt));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSel.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bProdSel));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSel.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bMagSel));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bMcInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnAlm.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bAlm));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnBffrInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bBffrInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOvenInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bOvenInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bMagInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFCtrl.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bLFCtrl));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManual.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bManual));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnSimu.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bSimulation));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bProdSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bMagSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bMcSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLang.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bLang));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bLFSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnChgParam.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1.bChgParam));


if(((__AS__STRING_CMP(((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.sNm),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.sNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv2Nm; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.sNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sValue; plcstring* zzRValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv2Nm; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOps.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bOpt));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSel.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bProdSel));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSel.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bMagSel));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bMcInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnAlm.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bAlm));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnBffrInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bBffrInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOvenInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bOvenInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bMagInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFCtrl.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bLFCtrl));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManual.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bManual));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnSimu.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bSimulation));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bProdSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bMagSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bMcSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLang.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bLang));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bLFSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnChgParam.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2.bChgParam));


if(((__AS__STRING_CMP(((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.sNm),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.sNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv3Nm; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.sNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sValue; plcstring* zzRValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv3Nm; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOps.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bOpt));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSel.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bProdSel));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSel.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bMagSel));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bMcInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnAlm.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bAlm));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnBffrInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bBffrInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOvenInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bOvenInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagInfo.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bMagInfo));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFCtrl.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bLFCtrl));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManual.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bManual));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnSimu.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bSimulation));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bProdSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bMagSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bMcSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLang.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bLang));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFSet.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bLFSet));
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnChgParam.bValue=((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3.bChgParam));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background.st"
static void __AS__Action__Act_Background(void){
{

__AS__Action__Act_ChgPage();
__AS__Action__Act_OptPage();

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Act_ChgPage.st"
static void __AS__Action__Act_ChgPage(void){
{

if(((((signed long)eChgPage!=(signed long)eChgPageOld))|((((unsigned long)(unsigned char)usiChgPage==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)((*(p_bStartupRun)))==(unsigned long)(unsigned char)0))))){

(usiChgPage=2);

switch(eChgPageOld){
case 700:{
__AS__Action__Act_ExitP0700();

}break;case 1000:{
__AS__Action__Act_ExitP1000();

}break;case 1021:{
__AS__Action__Act_ExitP1021();

}break;case 1022:{
__AS__Action__Act_ExitP1022();

}break;case 1023:{
__AS__Action__Act_ExitP1023();

}break;case 1024:{
__AS__Action__Act_ExitP1024();

}break;case 1080:{
__AS__Action__Act_ExitP1080();

}break;case 1081:{
__AS__Action__Act_ExitP1081();

}break;default: {
(usiChgPage=1);

}break;}

if((((unsigned long)(unsigned char)usiChgPage==(unsigned long)(unsigned char)1))){
(eChgPageOld=eChgPage);
}


}else if((((unsigned long)(unsigned char)usiChgPage==(unsigned long)(unsigned char)1))){

switch(eChgPage){

case 1:{
__AS__Action__Act_EntP0001Disp();

}break;case 2:{
__AS__Action__Act_EntP0002Disp();

}break;case 100:{
__AS__Action__Act_EntP0100Disp();

}break;case 200:{
__AS__Action__Act_EntP0200Disp();

}break;case 201:{
__AS__Action__Act_EntP0201Disp();

}break;case 300:{
__AS__Action__Act_EntP0300Disp();

}break;case 400:{
__AS__Action__Act_EntP0400Disp();

}break;case 600:{
__AS__Action__Act_EntP0600Disp();

}break;case 700:{
__AS__Action__Act_EntP0700Disp();

}break;case 900:{
__AS__Action__Act_EntP0900Disp();

}break;case 910:{
__AS__Action__Act_EntP0910Disp();

}break;case 920:{
__AS__Action__Act_EntP0920Disp();

}break;case 921:{
__AS__Action__Act_EntP0921Disp();

}break;case 922:{
__AS__Action__Act_EntP0922Disp();

}break;case 923:{
__AS__Action__Act_EntP0923Disp();

}break;case 924:{
__AS__Action__Act_EntP0924Disp();

}break;case 931:{
__AS__Action__Act_EntP0931Disp();

}break;case 934:{
__AS__Action__Act_EntP0934Disp();

}break;case 940:{
__AS__Action__Act_EntP0940Disp();

}break;case 950:{
__AS__Action__Act_EntP0950Disp();

}break;case 1000:{
__AS__Action__Act_EntP1000Disp();

}break;case 1020:{
__AS__Action__Act_EntP1020Disp();

}break;case 1021:{
__AS__Action__Act_EntP1021Disp();

}break;case 1022:{
__AS__Action__Act_EntP1022Disp();

}break;case 1023:{
__AS__Action__Act_EntP1023Disp();

}break;case 1024:{
__AS__Action__Act_EntP1024Disp();

}break;case 1040:{
__AS__Action__Act_EntP1040Disp();

}break;case 1050:{
__AS__Action__Act_EntP1050Disp();

}break;case 1080:{
__AS__Action__Act_EntP1080Disp();

}break;case 1081:{
__AS__Action__Act_EntP1081Disp();

}break;}

(usiChgPage=0);

(tyProperty.tyVisu.uiChgPage=(unsigned short)eChgPage);

}

}imp3_else0_1:imp3_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Act_OptPage.st"
static void __AS__Action__Act_OptPage(void){
{

if((((unsigned long)(unsigned short)tyProperty.tyVisu.uiCurrPage!=(unsigned long)(unsigned short)0))){
(eCurrPage=tyProperty.tyVisu.uiCurrPage);
}else{
__AS__Action__Act_OptP0000McStatus();
__AS__Action__Act_OptP0000RunningNm();
__AS__Action__Act_OptP0000StatDisp();
}

__AS__Action__Act_OptP0000DisableSSaver();
__AS__Action__Act_OptP0000TouchTimer();

__AS__Action__Act_OptP0002ToP1081UnlockCoverPB();

if(((((unsigned long)(unsigned short)tyProperty.tyVisu.uiChgPage==(unsigned long)(unsigned short)65535))&(((unsigned long)(unsigned char)usiChgPage==(unsigned long)(unsigned char)0)))){

__AS__Action__Act_OptC0005GoHomeCtrl();
__AS__Action__Act_OptC0005ShowNotif();
__AS__Action__Act_OptC0005AutoCtrl();
__AS__Action__Act_OptC0005RstErr();
__AS__Action__Act_OptC0005StatBarCtrl();
__AS__Action__Act_OptC0005Buzzer();
__AS__Action__Act_OptC0005ChgPage();
__AS__Action__Act_OptC0007Notif();
__AS__Action__Act_OptC0009Info();
__AS__Action__Act_OptC0011Loading();

switch(eCurrPage){
case 1:{
__AS__Action__Act_OptP0001Startup();

}break;case 100:{
__AS__Action__Act_OptP0100Keypad();
__AS__Action__Act_OptP0100NomLogin();
__AS__Action__Act_OptP0100BypassLogin();
__AS__Action__Act_OptP0100Logout();

}break;case 200:{
__AS__Action__Act_OptP0200ChgPage();
__AS__Action__Act_OptP0200UpdtDat();
__AS__Action__Act_OptP0200VSMEMA();
__AS__Action__Act_OptP0200RcyMsg();
__AS__Action__Act_OptP0200ToP0201AccDat();
__AS__Action__Act_OptP0200ToP0201BypsInitConv();
__AS__Action__Act_OptP0200ToP0201RlsNewProd();
__AS__Action__Act_OptP0200PCBReset();

}break;case 201:{
__AS__Action__Act_OptP0201Navi();
__AS__Action__Act_OptP0201UpdtDat();
__AS__Action__Act_OptP0201IOMonitor();
__AS__Action__Act_OptP0201ChgParam();
__AS__Action__Act_OptP0201Keypad();
__AS__Action__Act_OptP0200ToP0201AccDat();
__AS__Action__Act_OptP0200ToP0201BypsInitConv();
__AS__Action__Act_OptP0200ToP0201RlsNewProd();

}break;case 300:{
__AS__Action__Act_OptP0300Song();

}break;case 400:{
__AS__Action__Act_OptP0400Search();
__AS__Action__Act_OptP0400Load();
__AS__Action__Act_OptP0400Preview();
__AS__Action__Act_OptP0400Table();
__AS__Action__Act_OptP0400Keypad();
__AS__Action__Act_OptP0400Mask();
__AS__Action__Act_OptP0400Sort();
__AS__Action__Act_OptP0400RcpPopUp();

}break;case 600:{
__AS__Action__Act_OptP0600Alm();
__AS__Action__Act_OptP0600RcyMsg();

}break;case 700:{
__AS__Action__Act_OptP0700LFLeaderCtrl();
__AS__Action__Act_OptP0700Mask();
__AS__Action__Act_OptP0700Table();

}break;case 2:case 900:case 910:case 920:case 921:case 922:case 923:case 924:case 931:case 934:case 940:{
if((((signed long)eCurrPage==(signed long)2))){
__AS__Action__Act_OptP0002ChgPage();
__AS__Action__Act_OptP0002Mask();
__AS__Action__Act_OptP0002UpdtData();
__AS__Action__Act_OptP0002PCBReset();
}

__AS__Action__Act_OptP0002ManualCtrl();
__AS__Action__Act_OptP0910RstMnl();
__AS__Action__Act_OptP0921RstMnl();
__AS__Action__Act_OptP0922RstMnl();
__AS__Action__Act_OptP0923RstMnl();
__AS__Action__Act_OptP0924RstMnl();
__AS__Action__Act_OptP0931RstMnl();
__AS__Action__Act_OptP0934RstMnl();
__AS__Action__Act_OptP0940RstMnl();

if(bUIManualMod){

__AS__Action__Act_OptP0900ReadDI();


__AS__Action__Act_OptP0910WriteDO();


__AS__Action__Act_OptP0920FullMask();
__AS__Action__Act_OptP0920ChgPage();


__AS__Action__Act_OptP0921FullMask();
__AS__Action__Act_OptP0921Navi();
__AS__Action__Act_OptP0921ChgLyr();
__AS__Action__Act_OptP0921UpdtData();
__AS__Action__Act_OptP0921FBCtrl();
__AS__Action__Act_OptP0921FBStat();
__AS__Action__Act_OptP0921DCCtrl();


__AS__Action__Act_OptP0922DualMask();
__AS__Action__Act_OptP0922Navi();
__AS__Action__Act_OptP0922InletShutterChgLyr();
__AS__Action__Act_OptP0922InletShutterSen();
__AS__Action__Act_OptP0922InletShutterFB();
__AS__Action__Act_OptP0922InletShutterFBStat();
__AS__Action__Act_OptP0922InletShutterDC();
__AS__Action__Act_OptP0922OutletShutterChgLyr();
__AS__Action__Act_OptP0922OutletShutterSen();
__AS__Action__Act_OptP0922OutletShutterFB();
__AS__Action__Act_OptP0922OutletShutterFBStat();
__AS__Action__Act_OptP0922OutletShutterDC();



__AS__Action__Act_OptP0923FullMask();
__AS__Action__Act_OptP0923Navi();
__AS__Action__Act_OptP0923ChgLyr();
__AS__Action__Act_OptP0923UpdtData();
__AS__Action__Act_OptP0923FBCtrl();
__AS__Action__Act_OptP0923FBStat();
__AS__Action__Act_OptP0923DCCtrl();


__AS__Action__Act_OptP0924DualMask();
__AS__Action__Act_OptP0924Navi();
__AS__Action__Act_OptP0924Clamp1ChgLyr();
__AS__Action__Act_OptP0924Clamp1Sen();
__AS__Action__Act_OptP0924Clamp1FB();
__AS__Action__Act_OptP0924Clamp1FBStat();
__AS__Action__Act_OptP0924Clamp1DC();

__AS__Action__Act_OptP0924Clamp2ChgLyr();
__AS__Action__Act_OptP0924Clamp2Sen();
__AS__Action__Act_OptP0924Clamp2FB();
__AS__Action__Act_OptP0924Clamp2FBStat();
__AS__Action__Act_OptP0924Clamp2DC();

__AS__Action__Act_OptP0924Clamp3ChgLyr();
__AS__Action__Act_OptP0924Clamp3Sen();
__AS__Action__Act_OptP0924Clamp3FB();
__AS__Action__Act_OptP0924Clamp3FBStat();
__AS__Action__Act_OptP0924Clamp3DC();


__AS__Action__Act_OptP0931DualMask();
__AS__Action__Act_OptP0931Navi();
__AS__Action__Act_OptP0931Sen();
__AS__Action__Act_OptP0931ConvChgLyr();
__AS__Action__Act_OptP0931ConvFB();
__AS__Action__Act_OptP0931ConvFBStat();
__AS__Action__Act_OptP0931ConvDC();
__AS__Action__Act_OptP0931InvChgLyr();
__AS__Action__Act_OptP0931InvUpdtData();
__AS__Action__Act_OptP0931InvFB();
__AS__Action__Act_OptP0931InvFBStat();
__AS__Action__Act_OptP0931InvDC();


__AS__Action__Act_OptP0934FullMask();
__AS__Action__Act_OptP0934Navi();
__AS__Action__Act_OptP0934FB();
__AS__Action__Act_OptP0934FBStat();
__AS__Action__Act_OptP0934Mask();
__AS__Action__Act_OptP0934UpdtDat();
__AS__Action__Act_OptP0934Keypad();



__AS__Action__Act_OptP0940FullMask();
__AS__Action__Act_OptP0940ReadDI();
__AS__Action__Act_OptP0940WriteDO();

}

}break;case 950:{
__AS__Action__Act_OptP0950Control();
__AS__Action__Act_OptP0950SimulationMod();

}break;case 1000:{
__AS__Action__Act_OptP1000SelectLang();
__AS__Action__Act_OptP1000Keypad();

}break;case 1020:{
__AS__Action__Act_OptP1020Navi();

}break;case 1021:{
__AS__Action__Act_OptP1021Navi();
__AS__Action__Act_OptP1021Save();
__AS__Action__Act_OptP1021Keypad();
__AS__Action__Act_OptP1021IPAddr();
__AS__Action__Act_OptP1021SubnetMask();
__AS__Action__Act_OptP1021DHCPSetting();

}break;case 1022:{
__AS__Action__Act_OptP1022Navi();
__AS__Action__Act_OptP1022Save();
__AS__Action__Act_OptP1022DisLF();

}break;case 1023:{
__AS__Action__Act_OptP1023Navi();
__AS__Action__Act_OptP1023ShowLyr();
__AS__Action__Act_OptP1023Save();
__AS__Action__Act_OptP1023USSel();
__AS__Action__Act_OptP1023DSSel();
__AS__Action__Act_OptP1023Keypad();

}break;case 1024:{
__AS__Action__Act_OptP1024Navi();
__AS__Action__Act_OptP1024Save();
__AS__Action__Act_OptP1024Keypad();


}break;case 1040:{
__AS__Action__Act_OptP1040Mask();
__AS__Action__Act_OptP1040Save();
__AS__Action__Act_OptP1040Del();
__AS__Action__Act_OptP1040Table();
__AS__Action__Act_OptP1040LoadData();
__AS__Action__Act_OptP1040Search();
__AS__Action__Act_OptP1040Keypad();
__AS__Action__Act_OptP1040ToXML();
__AS__Action__Act_OptP1040FromXML();
__AS__Action__Act_OptP1040Sort();
__AS__Action__Act_OptP1040RcpPopUp();

}break;case 1050:{
__AS__Action__Act_OptP1050Keypad();
__AS__Action__Act_OptP1050Edit();
__AS__Action__Act_OptP1050Online();
__AS__Action__Act_OptP1050Offline();
__AS__Action__Act_OptP1050Delete();
__AS__Action__Act_OptP1050ShftUp();
__AS__Action__Act_OptP1050ShftDwn();
__AS__Action__Act_OptP1050Mask();
__AS__Action__Act_OptP1050Table();

}break;case 1080:{
__AS__Action__Act_OptP1080AddUsr();
__AS__Action__Act_OptP1080DelUsr();
__AS__Action__Act_OptP1080EditUsr();
__AS__Action__Act_OptP1080EditAccess();
__AS__Action__Act_OptP1080Table();
__AS__Action__Act_OptP1080Keypad();

}break;case 1081:{
__AS__Action__Act_OptP1081Navi();
__AS__Action__Act_OptP1081Load();
__AS__Action__Act_OptP1081Save();
__AS__Action__Act_OptP1081Keypad();

}break;}

}

}imp262_case2_19:imp262_endcase2_0:imp262_else1_0:imp262_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005GoHomeCtrl.st"
static void __AS__Action__Act_OptC0005GoHomeCtrl(void){
{

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnHome.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyBtnHome.bRtCompl=0);

(eChgPage=2);
}










if((tyP0100Login.tyLogin.tyBtnLogin.bRtCompl|tyP0100Login.tyLogout.tyBtnLogout.bRtCompl|tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl|tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl|tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl|tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl|tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl|tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl|tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl|tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl|tyP1050LFSet.tyLdr.tyBtnOffline.bRtCompl|tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl|tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl|tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bRtCompl|tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bRtCompl|tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bRtCompl|tyCommon.tySet.tyBtnSave.bRtCompl)){

fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnHome.uiMaskRtStat)));

}else if(bUIManualMod){
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnHome.uiMaskRtStat)));

}else{
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnHome.uiMaskRtStat)));

}

}imp76_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005ShowNotif.st"
static void __AS__Action__Act_OptC0005ShowNotif(void){
{

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnNotification.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyBtnNotification.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tyNotif.tyLyr.uiRtStat)));
}

}imp78_else0_0:imp78_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005RstErr.st"
static void __AS__Action__Act_OptC0005RstErr(void){
{

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnReset.bRtCompl==(unsigned long)(unsigned char)1))){
(eRstErrAct=1);

if(((((signed long)((*(p_eRstErrStat)))==(signed long)1))&(((signed long)((*(p_eRstErrStatus)))==(signed long)1)))){
(eRstErrAct=0);

if(((*(p_tyNtParamCurr)).bProjCoatingPrep)){
(bLoadingScreen=1);
}

(tyCommon.tyMain.tyBtnReset.bRtCompl=0);
}

}


if(((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAlarmWarning)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAlarmInfo)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0)))){
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnReset.uiMaskRtStat)));
(bLoadingScreen=0);
}else{
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnReset.uiMaskRtStat)));
}

}imp77_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005StatBarCtrl.st"
static void __AS__Action__Act_OptC0005StatBarCtrl(void){
{

if(((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAlarmWarning)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAlarmInfo)))==(unsigned long)(unsigned char)1)))){

(fbErrBlinkTm.IN=1);;TON(&fbErrBlinkTm);
if((((unsigned long)(unsigned char)fbErrBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbErrBlinkTm.IN=0);;TON(&fbErrBlinkTm);

if((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBitmapStatBar.usiValueIdx==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=0);
}else{
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=1);
}

}else{

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBitmapStatBar.usiValueIdx==(unsigned long)(unsigned char)3))){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=0);
}else{
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=3);
}

}

}


}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){

(fbRstBlinkTm.IN=1);;TON(&fbRstBlinkTm);
if((((unsigned long)(unsigned char)fbRstBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbRstBlinkTm.IN=0);;TON(&fbRstBlinkTm);

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBitmapStatBar.usiValueIdx==(unsigned long)(unsigned char)5))){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=6);
}else{
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=5);
}

}


}else if(bUIManualMod){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=7);


}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)2))){

(fbStopBlinkTm.IN=1);;TON(&fbStopBlinkTm);
if((((unsigned long)(unsigned char)fbStopBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbStopBlinkTm.IN=0);;TON(&fbStopBlinkTm);

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBitmapStatBar.usiValueIdx==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=2);
}else{
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=1);
}

}


}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)3))){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=3);


}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)0))){
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=2);


}else{
(tyCommon.tyMain.tyBitmapStatBar.usiValueIdx=0);

}

}imp79_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005AutoCtrl.st"
static void __AS__Action__Act_OptC0005AutoCtrl(void){
{


if((((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bOpsStatusStop)))==(unsigned long)(unsigned char)0)))&~Edge0007300000&1?((Edge0007300000=((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bOpsStatusStop)))==(unsigned long)(unsigned char)0)))&1),1):((Edge0007300000=((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bOpsStatusStop)))==(unsigned long)(unsigned char)0)))&1),0))){

(tyCommon.tyMain.tyBtnStart.bRtCompl=0);
(tyCommon.tyMain.tyBtnStop.bRtCompl=0);
(tyCommon.tyMain.tyBtnStep.bRtCompl=0);

(tyCommon.tyMain.tyBtnStart.bValue=0);
(tyCommon.tyMain.tyBtnStop.bValue=0);
(tyCommon.tyMain.tyBtnStep.bValue=0);

(eOpsAct=4);

}else{

if(((((signed long)((*(p_eOpsStat)))==(signed long)4))&(((signed long)((*(p_eOpsStatus)))==(signed long)1)))){
(eOpsAct=0);
}

}


if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnStart.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnStart.bValue==(unsigned long)(unsigned char)1))){

if(((((signed long)eCurrPage!=(signed long)200))&(((signed long)eCurrPage!=(signed long)201)))){

if((((unsigned long)(unsigned char)bChgPage==(unsigned long)(unsigned char)0))){
(bChgPage=1);
(eChgPage=200);
}else{
if((((signed long)eChgPage!=(signed long)200))){
(bChgPage=0);

(tyCommon.tyMain.tyBtnStart.bRtCompl=0);
(tyCommon.tyMain.tyBtnStart.bValue=0);
}
}

}else{
(bChgPage=0);

(tyCommon.tyMain.tyBtnStart.bValue=0);

(tyCommon.tyMain.tyBtnStop.bRtCompl=0);
(tyCommon.tyMain.tyBtnStep.bRtCompl=0);

(tyCommon.tyMain.tyBtnStop.bValue=0);
(tyCommon.tyMain.tyBtnStep.bValue=0);
}

}else{

(eOpsAct=1);

if(((((signed long)((*(p_eOpsStat)))==(signed long)1))&(((signed long)((*(p_eOpsStatus)))==(signed long)1)))){
(eOpsAct=0);

(tyCommon.tyMain.tyBtnStart.bRtCompl=0);
}

}

}


if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnStop.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnStop.bValue==(unsigned long)(unsigned char)1))){

(tyCommon.tyMain.tyBtnStop.bValue=0);

(tyCommon.tyMain.tyBtnStart.bRtCompl=0);
(tyCommon.tyMain.tyBtnStep.bRtCompl=0);

(tyCommon.tyMain.tyBtnStart.bValue=0);
(tyCommon.tyMain.tyBtnStep.bValue=0);

}else{

(eOpsAct=2);

if(((((signed long)((*(p_eOpsStat)))==(signed long)2))&(((signed long)((*(p_eOpsStatus)))==(signed long)1)))){
(eOpsAct=0);

(tyCommon.tyMain.tyBtnStop.bRtCompl=0);
}

}

}


if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnStep.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnStep.bValue==(unsigned long)(unsigned char)1))){

if(((((signed long)eCurrPage!=(signed long)200))&(((signed long)eCurrPage!=(signed long)201)))){

if((((unsigned long)(unsigned char)bChgPage==(unsigned long)(unsigned char)0))){
(bChgPage=1);
(eChgPage=200);
}else{
if((((signed long)eChgPage!=(signed long)200))){
(bChgPage=0);

(tyCommon.tyMain.tyBtnStep.bRtCompl=0);
(tyCommon.tyMain.tyBtnStep.bValue=0);
}
}

}else{
(bChgPage=0);

(tyCommon.tyMain.tyBtnStep.bValue=0);

(tyCommon.tyMain.tyBtnStart.bRtCompl=0);
(tyCommon.tyMain.tyBtnStop.bRtCompl=0);

(tyCommon.tyMain.tyBtnStart.bValue=0);
(tyCommon.tyMain.tyBtnStop.bValue=0);
}

}else{

(eOpsAct=3);

if(((((signed long)((*(p_eOpsStat)))==(signed long)3))&(((signed long)((*(p_eOpsStatus)))==(signed long)1)))){
(eOpsAct=0);

(tyCommon.tyMain.tyBtnStep.bRtCompl=0);
}

}

}



if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bAutoStepEn)==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));
}


if(((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUIManualMod==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tyMain.tyBtnHome.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))|(bBypassTopCover1&(((*(p_bOpsRun))^1))))){
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStop.uiMaskRtStat)));

if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bAutoStepEn)==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));
}

}else{

if((((unsigned long)(unsigned char)((*(p_bOpsStatusRun)))==(unsigned long)(unsigned char)1))){

fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStop.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)((*(p_bOpsStatusCycleStop)))==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStop.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)((*(p_bOpsStatusStep)))==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStop.uiMaskRtStat)));

if((((signed long)((*(p_eOpsStatus)))==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));
}

}else{

if((((unsigned long)(unsigned char)bDSTranErr==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat)));
}

fUIInRtStatOff(((unsigned long)(&tyCommon.tyMain.tyBtnStop.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyMain.tyBtnStep.uiMaskRtStat)));


}

}

if(((((unsigned long)((*(p_bDSSMEMAAlmData)).udiCode)==(unsigned long)10000))|(((unsigned long)((*(p_bConvAlmData)).udiCode)==(unsigned long)10114))|(((unsigned long)((*(p_bConvAlmData)).udiCode)==(unsigned long)10119)))){
(bDSTranErr=1);
}

if(((((unsigned long)(unsigned char)((*(p_tyDI)).bConvRgtSen)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyDI)).bConvLftSen)==(unsigned long)(unsigned char)0)))){
(bDSTranErr=0);
}


}imp73_else24_0:imp73_end24_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005Buzzer.st"
static void __AS__Action__Act_OptC0005Buzzer(void){
{
if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnMuteBuz.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyBtnMuteBuz.bRtCompl=0);

if((((unsigned long)(unsigned char)tyCommon.tyMain.tyBtnMuteBuz.bValue==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx=2);

(bMuteBuz=1);
}else{
(tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx=1);

(bMuteBuz=0);
}

}


if(((((*(p_bAlarmErr)))|((*(p_bAlarmWarning)))|((*(p_bAlarmInfo))))&~Edge0007400000&1?((Edge0007400000=(((*(p_bAlarmErr)))|((*(p_bAlarmWarning)))|((*(p_bAlarmInfo))))&1),1):((Edge0007400000=(((*(p_bAlarmErr)))|((*(p_bAlarmWarning)))|((*(p_bAlarmInfo))))&1),0))){
(tyCommon.tyMain.tyBtnMuteBuz.bValue=0);
(tyCommon.tyMain.tyBtnMuteBuz.bRtLk=0);
(tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx=1);

(bMuteBuz=0);

}else if(((((*(p_bAlarmErr)))|((*(p_bAlarmWarning)))|((*(p_bAlarmInfo))))^1)){
(tyCommon.tyMain.tyBtnMuteBuz.bRtLk=1);
(tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx=0);

(bMuteBuz=0);
}

}imp74_else2_1:imp74_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0005/Act_OptC0005ChgPage.st"
static void __AS__Action__Act_OptC0005ChgPage(void){
{
if((((unsigned long)(unsigned char)tyCommon.tyMain.tyHotspotNaviStart.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyMain.tyHotspotNaviStart.bRtCompl=0);

if(((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))|((*(p_bAlarmWarning))))){
(eChgPage=600);
}

}


(((_2byte_bit_field_*)(&tyCommon.tyMain.tyHotspotNaviStart.uiRtStat))->bit0=((_2byte_bit_field_*)(&tyCommon.tyMain.tyBtnStart.uiMaskRtStat))->bit0);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0007/Act_OptC0007Notif.st"
static void __AS__Action__Act_OptC0007Notif(void){
{


{int zzIndex; plcstring* zzLValue=(plcstring*)tyCommon.tyNotif.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtCurrUsr)).sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCommon.tyNotif.tyTxtUsrLv.usiValueIdx=(unsigned char)((*(p_tyUsrMgmtCurrUsr)).eUsrLvl));
(((_2byte_bit_field_*)(&tyCommon.tyNotif.tyTxtLFMc.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bLFPrep)&((*(p_tyMcParamCurr)).bLFEn))^1));

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bLFUsrSetPrep)==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bLFLeaderMc)==(unsigned long)(unsigned char)1))){
(tyCommon.tyNotif.tyTxtLFMc.usiValueIdx=0);
}else{
if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bSectionLeader)==(unsigned long)(unsigned char)1))){
(tyCommon.tyNotif.tyTxtLFMc.usiValueIdx=2);
}else{
(tyCommon.tyNotif.tyTxtLFMc.usiValueIdx=1);
}
}
}


(((_2byte_bit_field_*)(&tyCommon.tyNotif.tyBitmapShowInfo.uiRtStat))->bit0=(((unsigned long)(unsigned char)((*(p_bAlarmInfo)))==(unsigned long)(unsigned char)0)));
(((_2byte_bit_field_*)(&tyCommon.tyNotif.tyHotspotShowInfo.uiRtStat))->bit0=(((unsigned long)(unsigned char)((*(p_bAlarmInfo)))==(unsigned long)(unsigned char)0)));


if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tyNotif.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyCommon.tyNotif.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyNotif.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyCommon.tyNotif.tyLyr.uiRtStat)));

}else if((((unsigned long)(unsigned char)tyCommon.tyNotif.tyHotspotShowInfo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyNotif.tyHotspotShowInfo.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tyInfo.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyCommon.tyNotif.tyLyr.uiRtStat)));

}

}

}imp80_else4_1:imp80_end4_0:imp80_else3_0:imp80_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0009/Act_OptC0009Info.st"
static void __AS__Action__Act_OptC0009Info(void){
{

if((((*(p_bAlarmInfo)))&~Edge0008100000&1?((Edge0008100000=((*(p_bAlarmInfo)))&1),1):((Edge0008100000=((*(p_bAlarmInfo)))&1),0))){
fUIInRtStatOff(((unsigned long)(&tyCommon.tyInfo.tyLyr.uiRtStat)));

}else if((~((*(p_bAlarmInfo)))&Edge0008100001&1?((Edge0008100001=((*(p_bAlarmInfo)))&1),1):((Edge0008100001=((*(p_bAlarmInfo)))&1),0))){
fUIInRtStatHide(((unsigned long)(&tyCommon.tyInfo.tyLyr.uiRtStat)));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCommon.tyInfo.tyStringInfo.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCommon.tyInfo.tyHotspotClose.bRtCompl=0);

}else if((((unsigned long)(unsigned char)tyCommon.tyInfo.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyCommon.tyInfo.tyHotspotClose.bRtCompl=0);
fUIInRtStatHide(((unsigned long)(&tyCommon.tyInfo.tyLyr.uiRtStat)));

}else if(((*(p_bAlarmInfo)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCommon.tyInfo.tyStringInfo.sValue; plcstring* zzRValue=(plcstring*)((*(p_sAlarmInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp81_else0_3:imp81_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/C0011/Act_OptC0011Loading.st"
static void __AS__Action__Act_OptC0011Loading(void){
{(fbLoadingWarmUpTm.PT=((*(p_tyNtParamCurr)).tComLoadRstTm));
(udiElapseTm=(((unsigned long)(((unsigned long)fbLoadingWarmUpTm.PT-(unsigned long)fbLoadingWarmUpTm.ET)))/((unsigned long)(1000))));
udint2str(udiElapseTm,sElapseTm,81);


if((((unsigned long)(unsigned char)bLoadingScreen==(unsigned long)(unsigned char)1))){

fUIInRtStatOff(((unsigned long)(&tyCommon.tyLoading.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyCommon.tyLoading.tyLyr.uiRtStat)));
}

if((((unsigned long)(unsigned char)fbLoadingWarmUpTm.Q==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCommon.tyLoading.tyStringMsg.sValue; plcstring* zzRValue=(plcstring*)CONCAT("Please wait for ",sElapseTm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCommon.tyLoading.tyStringMsg.sValue; plcstring* zzRValue=(plcstring*)CONCAT(tyCommon.tyLoading.tyStringMsg.sValue," seconds..."); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

(fbLoadingWarmUpTm.IN=1);;TON(&fbLoadingWarmUpTm);
(fbLoadingLogoTm.IN=1);;TON(&fbLoadingLogoTm);



if(((((unsigned long)(unsigned char)fbLoadingWarmUpTm.Q==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned short)tyCommon.tyLoading.tyLyr.uiRtStat==(unsigned long)(unsigned short)0)))){
if(((((unsigned long)(unsigned char)fbLoadingLogoTm.Q==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyCommon.tyLoading.tyUILoad.usiValueIdx<=(unsigned long)(unsigned char)2)))){
(tyCommon.tyLoading.tyUILoad.usiValueIdx=(tyCommon.tyLoading.tyUILoad.usiValueIdx+1));
(fbLoadingLogoTm.IN=0);;TON(&fbLoadingLogoTm);
(fbLoadingLogoTm.IN=1);;TON(&fbLoadingLogoTm);
}else if(((((unsigned long)(unsigned char)fbLoadingLogoTm.Q==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyCommon.tyLoading.tyUILoad.usiValueIdx>(unsigned long)(unsigned char)2)))){
(tyCommon.tyLoading.tyUILoad.usiValueIdx=0);
(fbLoadingLogoTm.IN=0);;TON(&fbLoadingLogoTm);
(fbLoadingLogoTm.IN=1);;TON(&fbLoadingLogoTm);
}
}else{

(bLoadingScreen=0);
(fbLoadingWarmUpTm.IN=0);;TON(&fbLoadingWarmUpTm);
(fbLoadingLogoTm.IN=0);;TON(&fbLoadingLogoTm);
}



}imp83_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0000/Act_OptP0000McStatus.st"
static void __AS__Action__Act_OptP0000McStatus(void){
{
if((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx=6);

}else if((((unsigned long)(unsigned char)((*(p_bAlarmWarning)))==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx=7);

}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)0))){

(tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx=1);




}else if((((unsigned long)(unsigned char)bUIManualMod==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx=3);

}else{
(tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx=2);

}

}imp85_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0000/Act_OptP0000RunningNm.st"
static void __AS__Action__Act_OptP0000RunningNm(void){
{(fbSSaverTm.IN=1);;(fbSSaverTm.PT=2000);;TON(&fbSSaverTm);

if(((((unsigned long)(unsigned char)fbSSaverTm.Q==(unsigned long)(unsigned char)0))&~Edge0008600000&1?((Edge0008600000=(((unsigned long)(unsigned char)fbSSaverTm.Q==(unsigned long)(unsigned char)0))&1),1):((Edge0008600000=(((unsigned long)(unsigned char)fbSSaverTm.Q==(unsigned long)(unsigned char)0))&1),0))){
switch(uiSSaverCnt){
case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT(((*(p_tyMcParamCurr)).sMcNm),"                                        "); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("          ",CONCAT(((*(p_tyMcParamCurr)).sMcNm),"                              ")); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("                    ",CONCAT(((*(p_tyMcParamCurr)).sMcNm),"                    ")); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("                              ",CONCAT(((*(p_tyMcParamCurr)).sMcNm),"          ")); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 4:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("                                        ",((*(p_tyMcParamCurr)).sMcNm)); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 5:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("                              ",CONCAT(((*(p_tyMcParamCurr)).sMcNm),"          ")); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 6:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("                    ",CONCAT(((*(p_tyMcParamCurr)).sMcNm),"                    ")); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 7:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0000SSaver.tySSaver.tyTxtMcNm.sValue; plcstring* zzRValue=(plcstring*)CONCAT("          ",CONCAT(((*(p_tyMcParamCurr)).sMcNm),"                              ")); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}break;}

}

if((((unsigned long)(unsigned char)fbSSaverTm.Q==(unsigned long)(unsigned char)1))){
(fbSSaverTm.IN=0);;TON(&fbSSaverTm);
(uiSSaverCnt=(uiSSaverCnt+1));
if((((unsigned long)(unsigned short)uiSSaverCnt==(unsigned long)(unsigned short)8))){
(uiSSaverCnt=0);
}
}

}imp86_else3_0:imp86_end3_0:imp86_else2_0:imp86_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0000/Act_OptP0000DisableSSaver.st"
static void __AS__Action__Act_OptP0000DisableSSaver(void){
{
if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bSSaverPrep)==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bSSaverEn)==(unsigned long)(unsigned char)0)))){

if((((unsigned long)(unsigned short)tyProperty.tyVisu.uiSSaverRemainTm<(unsigned long)(unsigned short)5))){
(tyProperty.tyVisu.uiSSaverTm=9);
}else{
(tyProperty.tyVisu.uiSSaverTm=10);
}

}

if(((((*(p_tyNtParamCurr)).bSSaverPrep)&((*(p_tyMcParamCurr)).bSSaverEn))&~Edge0008400000&1?((Edge0008400000=(((*(p_tyNtParamCurr)).bSSaverPrep)&((*(p_tyMcParamCurr)).bSSaverEn))&1),1):((Edge0008400000=(((*(p_tyNtParamCurr)).bSSaverPrep)&((*(p_tyMcParamCurr)).bSSaverEn))&1),0))){
(tyProperty.tyVisu.uiSSaverTm=((*(p_tyMcParamCurr)).uiSSaverTmInSec));
}

}imp84_else2_0:imp84_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0000/Act_OptP0000StatDisp.st"
static void __AS__Action__Act_OptP0000StatDisp(void){
{

if(((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAlarmWarning)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAlarmInfo)))==(unsigned long)(unsigned char)1)))){

(fbErrBlinkTm.IN=1);;TON(&fbErrBlinkTm);
if((((unsigned long)(unsigned char)fbErrBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbErrBlinkTm.IN=0);;TON(&fbErrBlinkTm);

if(((*(p_bAlarmErr)))){

if((((unsigned long)(unsigned char)tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=0);
}else{
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=1);
}

}else{

if((((unsigned long)(unsigned char)tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx==(unsigned long)(unsigned char)3))){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=0);
}else{
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=3);
}

}

}


}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){

(fbRstBlinkTm.IN=1);;TON(&fbRstBlinkTm);
if((((unsigned long)(unsigned char)fbRstBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbRstBlinkTm.IN=0);;TON(&fbRstBlinkTm);

if((((unsigned long)(unsigned char)tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx==(unsigned long)(unsigned char)5))){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=6);
}else{
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=5);
}

}


}else if(bUIManualMod){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=7);


}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)2))){

(fbStopBlinkTm.IN=1);;TON(&fbStopBlinkTm);
if((((unsigned long)(unsigned char)fbStopBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbStopBlinkTm.IN=0);;TON(&fbStopBlinkTm);

if((((unsigned long)(unsigned char)tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=2);
}else{
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=1);
}

}


}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)3))){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=3);


}else if((((signed long)((*(p_eOpsOpsStatus)))==(signed long)0))){
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=2);


}else{
(tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx=0);

}

}imp87_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0000/Act_OptP0000TouchTimer.st"
static void __AS__Action__Act_OptP0000TouchTimer(void){
{

if((bLoginSuccess&((*(p_tyNtParamCurr)).bAutoLogoutPrep)&((*(p_tyMcParamCurr)).bAutoLogoutEn))){

fbTouchGetAction(&fbTouchTm);

(fbAutoLogoutTm.IN=(fbTouchTm.bPressed^1));;(fbAutoLogoutTm.PT=(plctime)((*(p_tyMcParamCurr)).diAutoLogoutTmInSec));;TON(&fbAutoLogoutTm);


if(fbTouchTm.bPressed){
(fbAutoLogoutTm.IN=0);;TON(&fbAutoLogoutTm);
}



if(fbAutoLogoutTm.Q){

(bPromptSessionExp=1);
(p_tyC0008MsgBox=((unsigned long)(&tyP0000SSaver.tyMsgBoxLoginAsk)));

if((((unsigned long)(unsigned char)bChgPageDone==(unsigned long)(unsigned char)0))){

if((((signed long)eCurrPage!=(signed long)2))){
switch(eCurrPage){

case 900:case 910:case 920:case 923:case 931:case 934:case 940:{

(eChgPage=2);

(tyP0002Menu.tyMenu.tyBtnMnlRst.bRtCompl=1);

(bChgPageDone=1);

}break;case 1000:case 1021:case 1022:case 1023:case 1024:{

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))){

(eChgPage=2);

(bChgPageDone=1);

}else{

(eChgPage=2);

if((((signed long)eCurrPage==(signed long)1021))){

(tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=1);

(bChgPageDone=1);

}else if((((signed long)eCurrPage==(signed long)1022))){

(tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=1);

(bChgPageDone=1);

}else if((((signed long)eCurrPage==(signed long)1023))){

(tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=1);

(bChgPageDone=1);


}else if((((signed long)eCurrPage==(signed long)1024))){

(tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=1);

(bChgPageDone=1);

}else{
(bChgPageDone=1);
}

}

}break;default: {
(eChgPage=2);

(bChgPageDone=1);

}break;}

}else{
(bChgPageDone=1);
}

}

if(bChgPageDone){

(eUsrMgmtAct=4);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)4))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

(bLoginSuccess=0);

(bChgPageDone=0);

(fbAutoLogoutTm.IN=0);;TON(&fbAutoLogoutTm);

}

}

}


}else{
(fbAutoLogoutTm.IN=0);;TON(&fbAutoLogoutTm);
(bChgPageDone=0);
}


if((((unsigned long)(unsigned char)tyP0000SSaver.tyMsgBoxLoginAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tyMsgBoxLoginAsk.tyBtnYes.bRtCompl=0);
(tyP0000SSaver.tyMsgBoxLoginAsk.tyBtnYes.bValue=0);
(p_tyC0008MsgBox=((unsigned long)(&tyP0000SSaver.tyMsgBoxHide)));
(bPromptSessionExp=0);

}else if((((unsigned long)(unsigned char)tyP0000SSaver.tyMsgBoxLoginAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0000SSaver.tyMsgBoxLoginAsk.tyBtnNo.bRtCompl=0);
(tyP0000SSaver.tyMsgBoxLoginAsk.tyBtnNo.bValue=0);
(p_tyC0008MsgBox=((unsigned long)(&tyP0000SSaver.tyMsgBoxHide)));
(eChgPage=100);
(bPromptSessionExp=0);

}



}imp88_else10_1:imp88_end10_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0001/Act_EntP0001Disp.st"
static void __AS__Action__Act_EntP0001Disp(void){
{

(p_tyVisu=((unsigned long)(&tyProperty.tyVisu)));

(p_tyKeypad=((unsigned long)(&tyProperty.tyKeypad)));

(p_tyTxtSnippets=((unsigned long)(&tyProperty.tyUITxtSnippets)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));


(p_tyP0001Startup=((unsigned long)(&tyP0001Startup.tyStartup)));

(p_tyP0001Initial=((unsigned long)(&tyP0001Startup.tyInitial)));

fUIInRtStatHide(((unsigned long)(&tyP0001Startup.tyInitial.tyLyr.uiRtStat)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0001/Act_OptP0001Startup.st"
static void __AS__Action__Act_OptP0001Startup(void){
{

(p_tyP0000SSaver=((unsigned long)(&tyP0000SSaver.tySSaver)));

if(((((signed long)eChgPage==(signed long)1))|(((signed long)eCurrPage==(signed long)1)))){

(eStartupAct=1);

if(((((signed long)((*(p_eStartupStat)))==(signed long)1))&(((signed long)((*(p_eStartupStatus)))==(signed long)1)))){
(eStartupAct=0);

if((((*(p_bAlarmErr)))|((*(p_bAlarmWarning))))){
(eChgPage=600);
}else{
(eChgPage=2);
}

}

}

(tyP0001Startup.tyStartup.tyBarGraphStartup.iValue=(signed short)(((*(p_eStartupStep)))+1));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0001Startup.tyStartup.tyTxtStartupStat.sTxt; plcstring* zzRValue=(plcstring*)((*(p_sStartupStepTxt))); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if((((unsigned long)DiagCpuIsSimulated()==(unsigned long)(unsigned char)0))){
if((((signed long)((*(p_eStartupStep)))>(signed long)1))){

if(((*(p_bStartupGetConfigDone)))){
if((((unsigned long)(unsigned char)bTempAddrFillDone==(unsigned long)(unsigned char)0))){

(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

{int zzIndex; plcstring* zzLValue=(plcstring*)sTempIPAddr; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sTempSubnetMask; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(udiTempEthMode=((*(p_udiHWInfoEthMode))));

(bTempAddrFillDone=1);
}
}

if(bTempAddrFillDone){

if((((unsigned long)(unsigned char)bIPConfigChgDone==(unsigned long)(unsigned char)0))){

if(((((signed long)((*(p_tyMcParamCurr)).eNetworkMod)==(signed long)(signed long)udiTempEthMode))&((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sIPAddr),sTempIPAddr)==0))&((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sSubnetMask),sTempSubnetMask)==0)))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));
}else{
if(((*(p_bStartupMismatchSetConfigDone)))){

if((((signed long)((*(p_tyMcParamCurr)).eNetworkMod)!=(signed long)(signed long)udiTempEthMode))){
(tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx=194);
}else if((((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sIPAddr),sTempIPAddr)!=0))&((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sSubnetMask),sTempSubnetMask)!=0)))){
(tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx=193);
}else if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sIPAddr),sTempIPAddr)!=0))){
(tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx=191);
}else{
(tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx=192);
}

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxIPConfig)));

}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)sSetIPAddr; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).sIPAddr); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sSetSubnetMask; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).sSubnetMask); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(usiNetworkModeSelected=(unsigned char)((*(p_tyMcParamCurr)).eNetworkMod));

(bMismatchOverWriteConfig=1);
}

}
}
}
}
}

if((((unsigned long)(unsigned char)tyP0001Startup.tyMsgBoxIPConfig.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnYes.bRtCompl=0);
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnYes.bValue=0);

(bIPConfigChgDone=1);

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));

}else if((((unsigned long)(unsigned char)tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){

if((((signed long)((*(p_tyMcParamCurr)).eNetworkMod)!=(signed long)(signed long)udiTempEthMode))){

if((((unsigned long)udiTempEthMode==(unsigned long)(unsigned long)1))){

(bOverwriteEthMode=1);
(bOverwriteIP=0);
(bOverwriteSubnet=0);

(usiNetworkModeSelected=(unsigned char)udiTempEthMode);

(tyMcParamWr.eNetworkMod=(signed long)udiTempEthMode);

(bIPConfigChgDone=1);

(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl=0);
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));
}else{
(bOverwriteEthMode=1);
(bOverwriteIP=1);
(bOverwriteSubnet=1);

(usiNetworkModeSelected=(unsigned char)udiTempEthMode);
{int zzIndex; plcstring* zzLValue=(plcstring*)sSetIPAddr; plcstring* zzRValue=(plcstring*)sTempIPAddr; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sSetSubnetMask; plcstring* zzRValue=(plcstring*)sTempSubnetMask; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyMcParamWr.eNetworkMod=(signed long)udiTempEthMode);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sIPAddr; plcstring* zzRValue=(plcstring*)sTempIPAddr; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sSubnetMask; plcstring* zzRValue=(plcstring*)sTempSubnetMask; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bIPConfigChgDone=1);

(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl=0);
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));
}

}else{

if((((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sIPAddr),sTempIPAddr)!=0))&((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sSubnetMask),sTempSubnetMask)!=0)))){

(bOverwriteEthMode=0);
(bOverwriteIP=1);
(bOverwriteSubnet=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetIPAddr; plcstring* zzRValue=(plcstring*)sTempIPAddr; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sSetSubnetMask; plcstring* zzRValue=(plcstring*)sTempSubnetMask; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sIPAddr; plcstring* zzRValue=(plcstring*)sTempIPAddr; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sSubnetMask; plcstring* zzRValue=(plcstring*)sTempSubnetMask; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bIPConfigChgDone=1);

(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl=0);
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));

}else if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).sIPAddr),sTempIPAddr)!=0))){

(bOverwriteEthMode=0);
(bOverwriteIP=1);
(bOverwriteSubnet=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetIPAddr; plcstring* zzRValue=(plcstring*)sTempIPAddr; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sIPAddr; plcstring* zzRValue=(plcstring*)sTempIPAddr; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bIPConfigChgDone=1);

(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl=0);
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));
}else{

(bOverwriteEthMode=0);
(bOverwriteIP=0);
(bOverwriteSubnet=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetSubnetMask; plcstring* zzRValue=(plcstring*)sTempSubnetMask; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sSubnetMask; plcstring* zzRValue=(plcstring*)sTempSubnetMask; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bIPConfigChgDone=1);

(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl=0);
(tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0001Startup.tyMsgBoxHide)));
}
}
}




}imp89_end15_0:imp89_end13_0:imp89_else12_1:imp89_end12_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002/Act_EntP0002Disp.st"
static void __AS__Action__Act_EntP0002Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

if((bPromptSessionExp^1)){
(p_tyC0008MsgBox=((unsigned long)(&tyP0002Menu.tyMsgBoxHide)));
}

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0002Menu=((unsigned long)(&tyP0002Menu.tyMenu)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));



if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bLFPrep)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bLFEn)==(unsigned long)(unsigned char)1))&(((((*(p_tyNtParamCurr)).bLFUsrSetPrep)^1)&((*(p_tyNtParamCurr)).bLeaderMc))|(((*(p_tyNtParamCurr)).bLFUsrSetPrep)&((*(p_tyMcParamCurr)).bLFLeaderMc)))&(((signed long)((*(p_tyMcParamCurr)).eUSComm)!=(signed long)1)))){
fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnLFSet.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnLFCtrl.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnLFSet.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnLFCtrl.uiRtStat)));
}


if((((unsigned long)(unsigned char)bLoginSuccess==(unsigned long)(unsigned char)0))){
(tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx=0);
(tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx=0);
}else{
(tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx=1);
(tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx=1);
}


__AS__Action__Act_OptP0002Mask();

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002/Act_OptP0002ChgPage.st"
static void __AS__Action__Act_OptP0002ChgPage(void){
{

if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnOpt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnOpt.bRtCompl=0);

(eChgPage=200);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnProdSel.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnProdSel.bRtCompl=0);

(eChgPage=400);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnMcInfo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnMcInfo.bRtCompl=0);

(eChgPage=300);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnAlm.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnAlm.bRtCompl=0);

(eChgPage=600);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnLogin.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnLogin.bRtCompl=0);

(eChgPage=100);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnLFCtrl.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnLFCtrl.bRtCompl=0);

(eChgPage=700);


}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnGenInput.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnGenInput.bRtCompl=0);

(bUIManualMod=1);

(eChgPage=900);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnGenOutput.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnGenOutput.bRtCompl=0);

(bUIManualMod=1);

(eChgPage=910);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnMovCtrl.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnMovCtrl.bRtCompl=0);

(bUIManualMod=1);

(eChgPage=920);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnCommCtrl.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnCommCtrl.bRtCompl=0);

(bUIManualMod=1);

(eChgPage=940);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnSimu.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnSimu.bRtCompl=0);

(eChgPage=950);


}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnLang.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnLang.bRtCompl=0);

(eChgPage=1000);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnMcSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnMcSet.bRtCompl=0);

(eChgPage=1020);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnProdSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnProdSet.bRtCompl=0);

(eChgPage=1040);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnLFSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnLFSet.bRtCompl=0);

(eChgPage=1050);

}else if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnUsrMgmt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnUsrMgmt.bRtCompl=0);

(eChgPage=1080);

}

}imp90_else0_15:imp90_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002/Act_OptP0002Mask.st"
static void __AS__Action__Act_OptP0002Mask(void){
{
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnOpt.uiMaskRtStat))->bit0=((*(p_tyUsrMgmtCurrAccessRgt)).bOpt));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnProdSel.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bProdSel)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnMcInfo.uiMaskRtStat))->bit0=((*(p_tyUsrMgmtCurrAccessRgt)).bMcInfo));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnAlm.uiMaskRtStat))->bit0=((*(p_tyUsrMgmtCurrAccessRgt)).bAlm));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnLogin.uiMaskRtStat))->bit0=((*(p_bOpsStatusStop))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnLFCtrl.uiMaskRtStat))->bit0=((*(p_tyUsrMgmtCurrAccessRgt)).bLFCtrl));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnGenInput.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bManual)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnGenOutput.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bManual)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnMovCtrl.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bManual)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnCommCtrl.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bManual)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnSimu.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bSimulation)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnProdSet.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bProdSet)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnMcSet.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bMcSet)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnLang.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bLang)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnUsrMgmt.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bUsrMgmt)&((*(p_bOpsStatusStop)))));
(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBtnLFSet.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bLFSet)&((*(p_bOpsStatusStop)))));

(((_2byte_bit_field_*)(&tyP0002Menu.tyMenu.tyBitmapMaskProdSetLCS.uiMaskRtStat))->bit0=((((*(p_tyNtParamCurr)).bLCSManageRcpPrep)&((*(p_tyMcParamCurr)).bLCSManageRcpEn))^1));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002/Act_OptP0002ManualCtrl.st"
static void __AS__Action__Act_OptP0002ManualCtrl(void){
{
if((bUIManualMod&~Edge0009100000&1?((Edge0009100000=bUIManualMod&1),1):((Edge0009100000=bUIManualMod&1),0))){

if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){

(tyP0910GenOut.tyGenOut.tyBtnTLWhite.bValue=1);
}else{

(tyP0910GenOut.tyGenOut.tyBtnTLAmber.bValue=1);

}


fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tyGenMaskLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tySetMaskLyr.uiRtStat)));


fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnMnlRst.uiRtStat)));

}

if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyBtnMnlRst.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMenu.tyBtnMnlRst.bRtCompl=0);

(bUIManualMod=0);


fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tyGenMaskLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tySetMaskLyr.uiRtStat)));


fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnMnlRst.uiRtStat)));

}

(bManualMod=(bUIManualMod&((*(p_tyDI)).bSafetyRlySig)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002/Act_OptP0002UpdtData.st"
static void __AS__Action__Act_OptP0002UpdtData(void){
{
if((((unsigned long)(unsigned char)bLoginSuccess==(unsigned long)(unsigned char)0))){
(tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx=0);
(tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx=0);
}else{
(tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx=1);
(tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx=1);
}

}imp96_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002/Act_OptP0002PCBReset.st"
static void __AS__Action__Act_OptP0002PCBReset(void){
{

if(((*(p_bOpsInvOnceTwicePCBOut)))){

fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnProdSel.uiRtStat)));

if((((unsigned long)(unsigned char)tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.bRtCompl==(unsigned long)(unsigned char)1))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0002Menu.tyMsgBoxSelRcpWaitingBrd)));

if((((unsigned long)(unsigned char)tyP0002Menu.tyMsgBoxSelRcpWaitingBrd.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0002Menu.tyMsgBoxSelRcpWaitingBrd.tyBtnNo.bRtCompl=0);
(tyP0002Menu.tyMsgBoxSelRcpWaitingBrd.tyBtnNo.bValue=0);

(tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.bRtCompl=0);
(tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0002Menu.tyMsgBoxHide)));


(eChgPage=200);


}
}
}else{

fUIInRtStatHide(((unsigned long)(&tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0002Menu.tyMenu.tyBtnProdSel.uiRtStat)));

}

}imp94_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0100/Act_EntP0100Disp.st"
static void __AS__Action__Act_EntP0100Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0100Login=((unsigned long)(&tyP0100Login.tyLogin)));
(p_tyP0100Logout=((unsigned long)(&tyP0100Login.tyLogout)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if((((unsigned long)(unsigned char)bLoginSuccess==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0100Login.tyLogout.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0100Login.tyLogin.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0100Login.tyLogout.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0100Login.tyLogin.tyLyr.uiRtStat)));
}


if(((__AS__STRING_CMP(((*(p_tyUsrMgmtAdminList))[1-1].sUsrNm),"")==0))){
fUIInRtStatOff(((unsigned long)(&tyP0100Login.tyLogin.tyHotspotBypassLogin.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0100Login.tyLogin.tyHotspotBypassLogin.uiRtStat)));
}


(tyP0100Login.tyLogin.tyBtnLogin.usiBitmapIdx=0);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0100/Act_OptP0100NomLogin.st"
static void __AS__Action__Act_OptP0100NomLogin(void){
{
if((((unsigned long)(unsigned char)tyP0100Login.tyLogin.tyBtnLogin.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sUsrNm; plcstring* zzRValue=(plcstring*)tyP0100Login.tyLogin.tyStringUsrNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sPw; plcstring* zzRValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(usiLoginStep=1);

}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)1))){

(eUsrMgmtAct=2);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)2))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

if((((unsigned long)(unsigned char)((*(p_bUsrMgmtNmNotExist)))==(unsigned long)(unsigned char)1))){
(usiLoginStep=2);
}else{
if(((((unsigned long)(unsigned char)((*(p_bUsrMgmtLoginSuccess)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bUsrMgmtPwMismatch)))==(unsigned long)(unsigned char)0)))){
(usiLoginStep=3);
}else if(((((unsigned long)(unsigned char)((*(p_bUsrMgmtLoginSuccess)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bUsrMgmtPwMismatch)))==(unsigned long)(unsigned char)1)))){
(usiLoginStep=4);
}
}

}

}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)2))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxNmNotExist)));

if((((unsigned long)(unsigned char)tyP0100Login.tyMsgBoxNmNotExist.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0100Login.tyMsgBoxNmNotExist.tyBtnNo.bRtCompl=0);
(tyP0100Login.tyMsgBoxNmNotExist.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxHide)));

(usiLoginStep=97);
}

}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)3))){

(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMaxIdx=3);

(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMaxIdx=2);

(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx=2);

(usiLoginStep=99);

}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)4))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxPwMismatch)));

if((((unsigned long)(unsigned char)tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl=0);
(tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxHide)));

(usiLoginStep=98);
}

}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)97))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP0100Login.tyLogin.tyBtnLogin.bRtCompl=0);
(tyP0100Login.tyLogin.tyBtnLogin.bValue=0);

(usiLoginStep=0);


}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)98))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP0100Login.tyLogin.tyBtnLogin.bRtCompl=0);
(tyP0100Login.tyLogin.tyBtnLogin.bValue=0);

(usiLoginStep=0);

}else if((((unsigned long)(unsigned char)usiLoginStep==(unsigned long)(unsigned char)99))){
(eChgPage=2);
(bLoginSuccess=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP0100Login.tyLogin.tyBtnLogin.bRtCompl=0);
(tyP0100Login.tyLogin.tyBtnLogin.bValue=0);

(usiLoginStep=0);

}

}

}imp100_else1_7:imp100_end1_0:imp100_else0_0:imp100_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0100/Act_OptP0100BypassLogin.st"
static void __AS__Action__Act_OptP0100BypassLogin(void){
{
if((((unsigned long)(unsigned char)tyP0100Login.tyLogin.tyHotspotBypassLogin.bRtCompl==(unsigned long)(unsigned char)1))){

if((((__AS__STRING_CMP(tyP0100Login.tyLogin.tyStringUsrNm.sValue,((*(p_tyNtParamCurr)).sUIDefaultLoginNm))==0))&((__AS__STRING_CMP(tyP0100Login.tyLogin.tyStringPw.sValue,((*(p_tyNtParamCurr)).sUIDefaultLoginPw))==0)))){
(eUsrMgmtAct=3);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)3))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

(bLoginSuccess=1);


(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMaxIdx=3);

(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueMaxIdx=2);

(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx=2);

(eChgPage=2);

(tyP0100Login.tyLogin.tyHotspotBypassLogin.bRtCompl=0);

}

}else{
(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxPwMismatch)));

if((((unsigned long)(unsigned char)tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bRtCompl=0);
(tyP0100Login.tyMsgBoxPwMismatch.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0100Login.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP0100Login.tyLogin.tyHotspotBypassLogin.bRtCompl=0);

}

}

}

}imp97_else3_0:imp97_end3_0:imp97_end1_0:imp97_else0_0:imp97_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0100/Act_OptP0100Logout.st"
static void __AS__Action__Act_OptP0100Logout(void){
{
if(tyP0100Login.tyLogout.tyBtnLogout.bRtCompl){
(eUsrMgmtAct=4);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)4))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

(bLoginSuccess=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP0100Login.tyLogout.tyBtnLogout.bRtCompl=0);
(tyP0100Login.tyLogout.tyBtnLogout.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0100Login.tyLogout.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0100Login.tyLogin.tyLyr.uiRtStat)));

}

}

}imp99_else1_0:imp99_end1_0:imp99_else0_0:imp99_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0100/Act_OptP0100Keypad.st"
static void __AS__Action__Act_OptP0100Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0100Login.tyLogin.tyStringUsrNm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0100Login.tyLogin.tyStringUsrNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0100Login.tyLogin.tyStringPw.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0100Login.tyLogin.tyStringPw.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp98_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200/Act_EntP0200Disp.st"
static void __AS__Action__Act_EntP0200Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0200OpsGen.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0010RcyMsg=((unsigned long)(&tyP0200OpsGen.tyRcyMsgHide)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0200OpsGen=((unsigned long)(&tyP0200OpsGen.tyOps)));


(p_tyP0200OpsUSVSMEMA=((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA)));
(p_tyP0200OpsDSVSMEMA=((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA)));


(p_tyP0200OpsUSVSMEMA1=((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1)));
(p_tyP0200OpsDSVSMEMA1=((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1)));

(p_tyP0200OpsBypsInitConv=((unsigned long)(&tyP0200OpsGen.tyBypsInitConv)));



if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){
if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx=1);
}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx=0);
}
if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx=1);
}else if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx=0);
}
}else{
if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx=1);
}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx=0);
}
if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx=1);
}else if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx=0);
}
}


if(((*(p_tyNtParamCurr)).bUIConvDirRL)){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIn.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommOut.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtUS1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtDS1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtUS.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtDS.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIn.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommOut.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtUS1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtDS1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtUS.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyTxtDS.uiRtStat)));
}


if(((((signed long)((*(p_tyUsrMgmtCurrUsr)).eUsrLvl)==(signed long)0))|(((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bVSMEMAPrep)==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bVSMEMAEn)==(unsigned long)(unsigned char)0))|((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)1))&(((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)1))))){

(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue=0);
(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue=0);
(tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bValue=0);
(tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA)),0,44);
__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA)),0,44);
__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1)),0,44);
__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat)));

(bVSMEMAUSEn=0);
(bVSMEMADSEn=0);
}else{

if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));

}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0))){

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){

(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1)),0,44);
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat)));


if((((signed long)((*(p_tyMcParamCurr)).tyUSCommSMEMA.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.uiRtStat)));
}

}else{

(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA)),0,44);
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.uiRtStat)));


if((((signed long)((*(p_tyMcParamCurr)).tyUSCommSMEMA.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.uiRtStat)));
}
}
}



if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));

}else if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0))){

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){

(tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat)));


if((((signed long)((*(p_tyMcParamCurr)).tyDSCommSMEMA.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyBtnDSBStat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyBtnDual.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyBtnDSBStat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyBtnDual.uiRtStat)));
}

}else{

(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.uiRtStat)));


if((((signed long)((*(p_tyMcParamCurr)).tyDSCommSMEMA.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSBStat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyBtnDual.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSBStat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyBtnDual.uiRtStat)));
}

}
}

}



(p_tyP0200OpsUSVSMEMA2=((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2)));


if((((*(p_tyNtParamCurr)).bProjInvertOncePrep)|((*(p_tyNtParamCurr)).bProjInvertTwicePrep))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.uiRtStat)));

}


if((((*(p_tyNtParamCurr)).bProjInvertOncePrep)|((*(p_tyNtParamCurr)).bProjInvertTwicePrep))){
if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.usiValueIdx=1);
}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)0))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.usiValueIdx=0);
}


if(((((signed long)((*(p_tyUsrMgmtCurrUsr)).eUsrLvl)==(signed long)0))|(((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bVSMEMAPrep)==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bVSMEMAEn)==(unsigned long)(unsigned char)0))|(((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)1)))){

(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat)));
(bVSMEMAUS2En=0);

}else{

if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)1))){
(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue=0);

__AS__MEMSET(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2)),0,44);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat)));

}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)0))){

(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue=0);

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat)));


if((((signed long)((*(p_tyMcParamCurr)).tyUSCommSMEMA2.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.uiRtStat)));
}
}
}

}


}imp8_end20_0:imp8_else19_1:imp8_end19_0:imp8_end18_0:imp8_else16_0:imp8_end16_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200/Act_OptP0200ChgPage.st"
static void __AS__Action__Act_OptP0200ChgPage(void){
{
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotMc.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyHotspotMc.bRtCompl=0);

(eChgPage=201);
}

}imp101_else0_0:imp101_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200/Act_OptP0200UpdtDat.st"
static void __AS__Action__Act_OptP0200UpdtDat(void){
{

if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat)));
}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)1))){

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesConnected)))==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat)));
}
}else{
if((((unsigned long)(unsigned char)((*(p_bUSHermesConnected)))==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat)));
}
}
}

if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat)));
}else if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)((*(p_bDSHermesConnected)))==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat)));
}
}else{
if((((unsigned long)(unsigned char)((*(p_bDSHermesConnected)))==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat)));
}
}
}


if((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bConvGdBrd)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapConvPCB.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapConvPCB.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapConvPCB.usiValueIdx=0);
}


if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0))){

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)((*(p_bUSSMEMADSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx=0);
}


if((((unsigned long)(unsigned char)((*(p_bUSSMEMAUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSSMEMAUSGdBrdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx=0);
}
}else{


if((((unsigned long)(unsigned char)((*(p_bUSSMEMADSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.usiValueIdx=0);
}


if((((unsigned long)(unsigned char)((*(p_bUSSMEMAUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSSMEMAUSGdBrdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.usiValueIdx=0);
}

}

}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesDSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesDSGdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx=0);
}

if((((unsigned long)(unsigned char)((*(p_bUSHermesUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesUSGdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx=0);
}

}

if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0))){
if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))&((((*(p_tyNtParamCurr)).bProjInvertOncePrep)|((*(p_tyNtParamCurr)).bProjInvertTwicePrep))^1))){

if((((unsigned long)(unsigned char)((*(p_bDSSMEMAUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bDSSMEMAUSGdBrdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=0);
}


if((((unsigned long)(unsigned char)((*(p_bDSSMEMADSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=0);
}

}else if((((*(p_tyNtParamCurr)).bProjInvertOncePrep)|((*(p_tyNtParamCurr)).bProjInvertTwicePrep))){
if((((unsigned long)(unsigned char)((*(p_bDSSMEMAUSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=0);
}


if((((unsigned long)(unsigned char)((*(p_bDSSMEMADSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=0);
}

}else{


if((((unsigned long)(unsigned char)((*(p_bDSSMEMAUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bDSSMEMAUSGdBrdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.usiValueIdx=0);
}


if((((unsigned long)(unsigned char)((*(p_bDSSMEMADSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.usiValueIdx=0);
}

}

}else if((((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bDSHermesUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bDSHermesUSGdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx=0);
}

if((((unsigned long)(unsigned char)((*(p_bDSHermesDSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bDSHermesDSGdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx=0);
}
}


if((((*(p_bAlarmErr))^1))){
__AS__MEMSET(((unsigned long)(&tyUIAlmData.bAlm)),0,10000);
}

if((((*(p_bAlarmWarning))^1))){
__AS__MEMSET(((unsigned long)(&tyUIAlmData.bWarning)),0,10000);
}else{
if((((*(p_bUSHermesConnected)))|(((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0)))){
(tyUIAlmData.bWarning[3114]=0);
}
if((((*(p_bDSHermesConnected)))|(((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0)))){
(tyUIAlmData.bWarning[3363]=0);
}
}

for((i=1);i<=c_uiP0200TableSize;i+=1){
if(((*(p_bStartupUISettingsLoadDone)))){
if((((signed long)((*(p_tyAlarmCurrList))[i-1].eSeverity)==(signed long)1))){
(tyUIAlmData.bAlm[((*(p_tyAlarmCurrList))[i-1].udiErrorCode)]=((*(p_tyAlarmCurrList))[i-1].bAlm));
}else if((((signed long)((*(p_tyAlarmCurrList))[i-1].eSeverity)==(signed long)2))){
(tyUIAlmData.bWarning[((*(p_tyAlarmCurrList))[i-1].udiErrorCode)]=((*(p_tyAlarmCurrList))[i-1].bWarning));
}
}
}imp107_endfor40_0:;


if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiMaskRtStat)));
}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesConnected)))==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiMaskRtStat)));
}
}

if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)0))){


if((((unsigned long)(unsigned char)((*(p_bUSSMEMA2DSRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx=0);
}


if((((unsigned long)(unsigned char)((*(p_bUSSMEMA2USRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSSMEMA2USGdBrdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx=0);
}


}else if((((signed long)((*(p_tyMcParamCurr)).eUSComm2)==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesDSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesDSGdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx=0);
}

if((((unsigned long)(unsigned char)((*(p_bUSHermesUSRdy)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bUSHermesUSGdRdy)))==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx=1);
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx=2);
}
}else{
(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx=0);
}

}


}imp107_end51_0:imp107_else45_1:imp107_end45_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200/Act_OptP0200VSMEMA.st"
static void __AS__Action__Act_OptP0200VSMEMA(void){
{

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat)));

(bVSMEMAUSEn=1);
}else{
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue=0);

(bVSMEMAUSEn=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat)));
}
}
}else{

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));

(bVSMEMAUSEn=1);
}else{
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue=0);

(bVSMEMAUSEn=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat)));
}
}

}


if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat)));

(bVSMEMADSEn=1);
}else{
(tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bValue=0);

(bVSMEMADSEn=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat)));
}
}
}else{

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));

(bVSMEMADSEn=1);
}else{
(tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bValue=0);

(bVSMEMADSEn=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat)));
}
}


}


if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue=1);
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue=1);
}else{
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue=1);
}
}else{
(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue=1);
}
}else{
(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue=0);
}

}
}else{

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue=1);
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue=1);
}else{
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue=1);
}
}else{
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue=1);
}
}else{
(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue=0);
}

}

}


if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bRtCompl=0);
}
}else{

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bRtCompl=0);
}

}


if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bUIConvDirRL)==(unsigned long)(unsigned char)0))){

(bVSMEMAUBA=tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue);
(bVSMEMAUBAStat=tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue);
(bVSMEMADSB=tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bValue);

}else{

(bVSMEMAUBA=tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue);
(bVSMEMAUBAStat=tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue);
(bVSMEMADSB=tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bValue);

}


if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat)));
(bVSMEMAUS2En=1);
}else{
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue=0);

(bVSMEMAUS2En=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat)));

}
}


if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue=1);
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue=1);
}else{
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue=0);
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue=1);
}
}else{
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue=1);
}
}else{
(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue=0);
}

}




(bVSMEMAUBA2=tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue);
(bVSMEMAUBAStat2=tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue);


}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200/Act_OptP0200RcyMsg.st"
static void __AS__Action__Act_OptP0200RcyMsg(void){
{

for((i=1);i<=c_uiP0200TableSize;i+=1){

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.a_tyHotspotRcyMsg[i-1].bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.a_tyHotspotRcyMsg[i-1].bRtCompl=0);

(tyP0200OpsGen.tyRcyMsg.tyTxtMsg.udiValueIdx=((*(p_tyAlarmRcyList))[i-1]));

if((((unsigned long)tyP0200OpsGen.tyRcyMsg.tyTxtMsg.udiValueIdx!=(unsigned long)0))){
(p_tyC0010RcyMsg=((unsigned long)(&tyP0200OpsGen.tyRcyMsg)));
}else{
(p_tyC0010RcyMsg=((unsigned long)(&tyP0200OpsGen.tyRcyMsgHide)));
}

}

}imp103_endfor0_0:;


if((((unsigned long)(unsigned char)tyP0200OpsGen.tyRcyMsg.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyC0010RcyMsg=((unsigned long)(&tyP0200OpsGen.tyRcyMsgHide)));

(tyP0200OpsGen.tyRcyMsg.tyHotspotClose.bRtCompl=0);
}

}imp103_else3_0:imp103_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200/Act_OptP0200PCBReset.st"
static void __AS__Action__Act_OptP0200PCBReset(void){
{
if(((*(p_bOpsRun)))){

if(((((unsigned long)(unsigned char)((*(p_tyProdRcpCurrRcp1)).usiMcMod)==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_tyProdRcpCurrRcp1)).usiMcMod)==(unsigned long)(unsigned char)3)))){
if((((*(p_bOpsInvOnceTwicePCBOut)))&((((*(p_bUSSMEMA2Transporting))^1))&(((signed long)((*(p_eConvStatus)))!=(signed long)2))&((((*(p_bLeftSen)))|((*(p_bRightSen))))^1)))){

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));

}
else if((((*(p_bOpsInvOnceTwicePCBOut)))&(((*(p_bUSSMEMA2Transporting)))|(((signed long)((*(p_eConvStatus)))==(signed long)2))|((*(p_bLeftSen)))|((*(p_bRightSen)))|(((signed long)((*(p_eInvertStatus)))==(signed long)2))|((*(p_bConvHvBrd)))|(((signed long)((*(p_eClamp1Status)))==(signed long)2))|(((signed long)((*(p_eClamp2Status)))==(signed long)2))|(((signed long)((*(p_eClamp3Status)))==(signed long)2))))){

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));

}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));
}
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));
}

}else if((bManualMod|((*(p_bOpsStatusStop))))){

if((((*(p_bOpsInvOnceTwicePCBOut)))&((((*(p_bLeftSen))^1))|(((*(p_bRightSen))^1))|(((*(p_bConvHvBrd))^1))))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));
}

}else{
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat)));
(tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue=0);
(bRtnBrdReset=0);
}

if((((*(p_bOpsRun)))|bManualMod|((*(p_bOpsStatusStop))))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl==(unsigned long)(unsigned char)1))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk)));

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnYes.bRtCompl=0);
(tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnYes.bValue=0);

(bRtnBrdReset=1);
(p_tyC0008MsgBox=((unsigned long)(&tyP0200OpsGen.tyMsgBoxHide)));

(tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue=0);
(tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl=0);

}else if((((unsigned long)(unsigned char)tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnNo.bRtCompl=0);
(tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnNo.bValue=0);
(tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue=0);
(tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0200OpsGen.tyMsgBoxHide)));

}

}

}else{
(p_tyC0008MsgBox=((unsigned long)(&tyP0200OpsGen.tyMsgBoxHide)));
}

if((bRtnBrdReset&(((unsigned long)(unsigned char)((*(p_bOpsInvOnceTwicePCBOut)))==(unsigned long)(unsigned char)0))&((*(p_bOpsInvertStepUSStandby))))){
(bRtnBrdReset=0);
(tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue=0);
(tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl=0);

}else if((bRtnBrdReset&(bManualMod|((*(p_bOpsStatusStop)))))){
if((((unsigned long)(unsigned char)((*(p_bOpsInvOnceTwicePCBOut)))==(unsigned long)(unsigned char)0))){
(bRtnBrdReset=0);
}
}

}imp102_else8_0:imp102_end8_0:imp102_else7_1:imp102_end7_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0201/Act_EntP0201Disp.st"
static void __AS__Action__Act_EntP0201Disp(void){
{

(p_tyC0004Navi=((unsigned long)(&tyP0201OpsConv.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0201OpsConv.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyC0012RcpPopUp=((unsigned long)(&tyP0201OpsConv.tyRcpPopUp)));

(p_tyP0201OpsConv=((unsigned long)(&tyP0201OpsConv.tyOps)));

(p_tyP0201OpsConvIOMonitor=((unsigned long)(&tyP0201OpsConv.tyIOMonitor)));

(p_tyP0201OpsConvIOMonitorMacSafe=((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety)));

(p_tyP0201OpsConvIOMonitorXStd=((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd)));

(p_tyP0201OpsConvChgParam=((unsigned long)(&tyP0201OpsConv.tyChgParam)));

(p_tyP0201OpsConvBypsInitConv=((unsigned long)(&tyP0201OpsConv.tyBypsInitConv)));


fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat)));


(((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBAStat)>(signed long)0))^1));

(((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diUBAStat)>(signed long)0))^1));
(((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.uiRtStat))->bit0=((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diDBAStat)>(signed long)0))^1));


if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).tyUSCommSMEMA.bStatSigSetGd)==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.usiTxtIdx=1);
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.usiTxtIdx=1);
}else{
(tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.usiTxtIdx=2);
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.usiTxtIdx=2);
}


if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).tyDSCommSMEMA.bStatSigSetGd)==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.usiTxtIdx=1);
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.usiTxtIdx=1);
}else{
(tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.usiTxtIdx=2);
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.usiTxtIdx=2);
}


(tyP0201OpsConv.tyChgParamBkUp=*(struct tyLyrP0201OpsConvChgParam*)&tyP0201OpsConv.tyChgParam);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0201/Act_OptP0201Navi.st"
static void __AS__Action__Act_OptP0201Navi(void){
{
if((((unsigned long)(unsigned char)tyP0201OpsConv.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP0201OpsConv.tyNaviBack.tyBtnBack.bValue=0);

(eChgPage=200);
}

}imp113_else0_0:imp113_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0201/Act_OptP0201UpdtDat.st"
static void __AS__Action__Act_OptP0201UpdtDat(void){
{

(fbMcStatUpdtTm.IN=1);;TON(&fbMcStatUpdtTm);
if((((unsigned long)(unsigned char)fbMcStatUpdtTm.Q==(unsigned long)(unsigned char)1))){
(fbMcStatUpdtTm.IN=0);;TON(&fbMcStatUpdtTm);

if((((unsigned long)(unsigned char)((*(p_bOpsUSStandby)))==(unsigned long)(unsigned char)1))){
if((((*(p_tyNtParamCurr)).bUSWidthChkPrep)&((*(p_tyMcParamCurr)).bUSWidthChkEn)&(((unsigned long)(unsigned char)((*(p_tyDI)).bUSWidthChkSen)==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)"Width Check Sensor Block Upstream"; for(zzIndex=0; zzIndex<33l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((*(p_tyNtParamCurr)).bLFPrep)&((*(p_tyMcParamCurr)).bLFEn)&(((unsigned long)(unsigned char)((*(p_bLFFollowerUSAllow)))==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)"Leader Issue Block Upstream"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)((*(p_sOpsInvertStepTxt))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else if((((unsigned long)(unsigned char)((*(p_bOpsDSStandby)))==(unsigned long)(unsigned char)1))){
if((((*(p_tyNtParamCurr)).bDSWidthChkPrep)&((*(p_tyMcParamCurr)).bDSWidthChkEn)&(((unsigned long)(unsigned char)((*(p_tyDI)).bDSWidthChkSen)==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)"Width Check Sensor Block Downstream"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((*(p_tyNtParamCurr)).bLFPrep)&((*(p_tyMcParamCurr)).bLFEn)&(((unsigned long)(unsigned char)((*(p_bLFFollowerDSAllow)))==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)"Leader Issue Block Downstream"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)((*(p_sOpsInvertStepTxt))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMcStatus.sValue; plcstring* zzRValue=(plcstring*)((*(p_sOpsInvertStepTxt))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}


(tyP0201OpsConv.tyOps.tyTxtMod.usiValueIdx=((*(p_tyProdRcpCurrRcp1)).usiMcMod));


if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bAWPrep)==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bAWDis)==(unsigned long)(unsigned char)1)))){
(tyP0201OpsConv.tyOps.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrRcp1)).diWidthInUM));
}else{
(tyP0201OpsConv.tyOps.tyNumProdWidth.diValue=(((*(p_tyMcParamCurr)).diWidthAtHmPosInUM)-((*(p_diAWOpenActualPos)))));
}


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringProdNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp1)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0201OpsConv.tyOps.tyTxtFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrRcp1)).usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyOps.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp1)).sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bConvGdBrd)))==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyOps.tyBitmapConvPCB.usiValueIdx=1);
}else{
(tyP0201OpsConv.tyOps.tyBitmapConvPCB.usiValueIdx=2);
}
}else{
(tyP0201OpsConv.tyOps.tyBitmapConvPCB.usiValueIdx=0);
}

if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesPrep)==(unsigned long)(unsigned char)1))){
if(((((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0))&(((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0)))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat)));
}
}else{
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat)));
}


(((_2byte_bit_field_*)(&tyP0201OpsConv.tyOps.tyHotspotShowLRcp.uiRtStat))->bit0=(((__AS__STRING_CMP(tyP0201OpsConv.tyOps.tyStringProdNm.sValue,"")!=0))^1));

if((((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyHotspotShowLRcp.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyOps.tyHotspotShowLRcp.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyRcpPopUp.tyLyr.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0201OpsConv.tyRcpPopUp.tyStringInfo.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp1)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)tyP0201OpsConv.tyRcpPopUp.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyRcpPopUp.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyRcpPopUp.tyLyr.uiRtStat)));

}

}imp114_else9_1:imp114_end9_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0201/Act_OptP0201IOMonitor.st"
static void __AS__Action__Act_OptP0201IOMonitor(void){
{
if((((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyHotspotIOMonitor.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyOps.tyHotspotIOMonitor.bRtCompl=0);




if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bProjClampPrep)==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bProjClampPrep)==(unsigned long)(unsigned char)1))&(((signed long)((*(p_tyNtParamCurr)).eProjClampOption)==(signed long)0))))){
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat)));
}else if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bProjClampPrep)==(unsigned long)(unsigned char)1))&(((*(p_tyNtParamCurr)).bUnlockCoverPrep)|((*(p_tyNtParamCurr)).bUSDSMachineSafetySig)))){
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat)));
}




(p_tyC0004Navi=((unsigned long)(&tyP0201OpsConv.tyNaviHide)));

}else if((((unsigned long)(unsigned char)tyP0201OpsConv.tyIOMonitor.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyIOMonitor.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat)));

(p_tyC0004Navi=((unsigned long)(&tyP0201OpsConv.tyNaviBack)));

}else if((((unsigned long)(unsigned char)tyP0201OpsConv.tyIOMonitorXStd.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyIOMonitorXStd.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat)));

(p_tyC0004Navi=((unsigned long)(&tyP0201OpsConv.tyNaviBack)));
}else if((((unsigned long)(unsigned char)tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat)));

(p_tyC0004Navi=((unsigned long)(&tyP0201OpsConv.tyNaviBack)));
}

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){


(tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlySig.bValue=((*(p_tyDI)).bSafetyRlySig));
(tyP0201OpsConv.tyIOMonitor.tyBtnEStop.bValue=((*(p_tyDI)).bEStopSig));
(tyP0201OpsConv.tyIOMonitor.tyBtnCoverSWSig.bValue=((*(p_tyDI)).bCoverSWSig));
(tyP0201OpsConv.tyIOMonitor.tyBtnUBA.bValue=((*(p_tyDI)).bUBA));
(tyP0201OpsConv.tyIOMonitor.tyBtnDSB.bValue=((*(p_tyDI)).bDSB));
(tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.bValue=((*(p_tyDI)).bUBAStat));
(tyP0201OpsConv.tyIOMonitor.tyBtnConvLftSen.bValue=((*(p_tyDI)).bConvLftSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnConvRgtSen.bValue=((*(p_tyDI)).bConvRgtSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnPressureSW.bValue=((*(p_tyDI)).bPressureSW));
(tyP0201OpsConv.tyIOMonitor.tyBtnThermalPrtSig.bValue=((*(p_tyDI)).bThermalPrtSig));
(tyP0201OpsConv.tyIOMonitor.tyBtnCoatingSen.bValue=((*(p_tyDI)).bCoatingSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnUSWidthChkSen.bValue=((*(p_tyDI)).bUSWidthChkSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnDSWidthChkSen.bValue=((*(p_tyDI)).bDSWidthChkSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnInvertHomeSen.bValue=((*(p_tyDI)).bInvertHomeSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemoteSen.bValue=((*(p_tyDI)).bInvertRemoteSen));
(tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterOpenRS.bValue=((*(p_tyDI)).bInShutterOpenRS));
(tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterCloseRS.bValue=((*(p_tyDI)).bInShutterCloseRS));
(tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterOpenRS.bValue=((*(p_tyDI)).bOutShutterOpenRS));
(tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterCloseRS.bValue=((*(p_tyDI)).bOutShutterCloseRS));


(tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlyRst.bValue=((*(p_tyDO)).bSafetyRlyRst));
(tyP0201OpsConv.tyIOMonitor.tyBtnTLGreen.bValue=((*(p_tyDO)).bTLGreen));
(tyP0201OpsConv.tyIOMonitor.tyBtnTLAmber.bValue=((*(p_tyDO)).bTLAmber));
(tyP0201OpsConv.tyIOMonitor.tyBtnTLRed.bValue=((*(p_tyDO)).bTLRed));
(tyP0201OpsConv.tyIOMonitor.tyBtnTLBlue.bValue=((*(p_tyDO)).bTLBlue));
(tyP0201OpsConv.tyIOMonitor.tyBtnTLWhite.bValue=((*(p_tyDO)).bTLWhite));
(tyP0201OpsConv.tyIOMonitor.tyBtnBuzzer.bValue=((*(p_tyDO)).bBuz));
(tyP0201OpsConv.tyIOMonitor.tyBtnCoatingRetCtrl.bValue=((*(p_tyDO)).bCoatingStprRet));
(tyP0201OpsConv.tyIOMonitor.tyBtnUSB.bValue=((*(p_tyDO)).bUSB));
(tyP0201OpsConv.tyIOMonitor.tyBtnDBA.bValue=((*(p_tyDO)).bDBA));
(tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.bValue=((*(p_tyDO)).bDBAStat));
(tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCW.bValue=((*(p_tyDO)).bConvMtrCW));
(tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCCW.bValue=((*(p_tyDO)).bConvMtrCCW));
(tyP0201OpsConv.tyIOMonitor.tyBtnStprUnblkCtrl.bValue=((*(p_tyDO)).bStprUnblkCtrl));
(tyP0201OpsConv.tyIOMonitor.tyBtnStprBlkCtrl.bValue=((*(p_tyDO)).bStprBlkCtrl));
(tyP0201OpsConv.tyIOMonitor.tyBtnInvertHome.bValue=((*(p_tyDO)).bInvertHome));
(tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemote.bValue=((*(p_tyDO)).bInvertRemote));
(tyP0201OpsConv.tyIOMonitor.tyBtnInvertBrake.bValue=((*(p_tyDO)).bInvertBrake));
(tyP0201OpsConv.tyIOMonitor.tyBtnClampCtrl.bValue=((*(p_tyDO)).bClampControl));
(tyP0201OpsConv.tyIOMonitor.tyBtnUnclampCtrl.bValue=((*(p_tyDO)).bUnclampControl));
(tyP0201OpsConv.tyIOMonitor.tyBtnMtrPwrRly.bValue=((*(p_tyDO)).bMtrPwrRly));
(tyP0201OpsConv.tyIOMonitor.tyBtnInShutterOpenCtrl.bValue=((*(p_tyDO)).bInShutterOpenCtrl));
(tyP0201OpsConv.tyIOMonitor.tyBtnInShutterCloseCtrl.bValue=((*(p_tyDO)).bInShutterCloseCtrl));
(tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterOpenCtrl.bValue=((*(p_tyDO)).bOutShutterOpenCtrl));
(tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterCloseCtrl.bValue=((*(p_tyDO)).bOutShutterCloseCtrl));

}

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){


(tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlySig.bValue=((*(p_tyDI)).bSafetyRlySig));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnEStop.bValue=((*(p_tyDI)).bEStopSig));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoverSWSig.bValue=((*(p_tyDI)).bCoverSWSig));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA.bValue=((*(p_tyDI)).bUBA));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSB.bValue=((*(p_tyDI)).bDSB));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.bValue=((*(p_tyDI)).bUBAStat));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA2.bValue=((*(p_tyDI)).bUBA2));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat2.bValue=((*(p_tyDI)).bUBAStat2));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvLftSen.bValue=((*(p_tyDI)).bConvLftSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvRgtSen.bValue=((*(p_tyDI)).bConvRgtSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnPressureSW.bValue=((*(p_tyDI)).bPressureSW));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnThermalPrtSig.bValue=((*(p_tyDI)).bThermalPrtSig));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingSen.bValue=((*(p_tyDI)).bCoatingSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSWidthChkSen.bValue=((*(p_tyDI)).bUSWidthChkSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSWidthChkSen.bValue=((*(p_tyDI)).bDSWidthChkSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHomeSen.bValue=((*(p_tyDI)).bInvertHomeSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemoteSen.bValue=((*(p_tyDI)).bInvertRemoteSen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterOpenRS.bValue=((*(p_tyDI)).bInShutterOpenRS));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterCloseRS.bValue=((*(p_tyDI)).bInShutterCloseRS));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterOpenRS.bValue=((*(p_tyDI)).bOutShutterOpenRS));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterCloseRS.bValue=((*(p_tyDI)).bOutShutterCloseRS));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Sen.bValue=((*(p_tyDI)).bClamp2Sen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Sen.bValue=((*(p_tyDI)).bClamp3Sen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS1.bValue=((*(p_tyDI)).bClampRS1));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS1.bValue=((*(p_tyDI)).bUnClampRS1));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS2.bValue=((*(p_tyDI)).bClampRS2));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS2.bValue=((*(p_tyDI)).bUnClampRS2));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS3.bValue=((*(p_tyDI)).bClampRS3));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS3.bValue=((*(p_tyDI)).bUnClampRS3));


(tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlyRst.bValue=((*(p_tyDO)).bSafetyRlyRst));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLGreen.bValue=((*(p_tyDO)).bTLGreen));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLAmber.bValue=((*(p_tyDO)).bTLAmber));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLRed.bValue=((*(p_tyDO)).bTLRed));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLBlue.bValue=((*(p_tyDO)).bTLBlue));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLWhite.bValue=((*(p_tyDO)).bTLWhite));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnBuzzer.bValue=((*(p_tyDO)).bBuz));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingRetCtrl.bValue=((*(p_tyDO)).bCoatingStprRet));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB.bValue=((*(p_tyDO)).bUSB));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBA.bValue=((*(p_tyDO)).bDBA));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.bValue=((*(p_tyDO)).bDBAStat));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB2.bValue=((*(p_tyDO)).bUSB2));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCW.bValue=((*(p_tyDO)).bConvMtrCW));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCCW.bValue=((*(p_tyDO)).bConvMtrCCW));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHome.bValue=((*(p_tyDO)).bInvertHome));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemote.bValue=((*(p_tyDO)).bInvertRemote));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertBrake.bValue=((*(p_tyDO)).bInvertBrake));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnMtrPwrRly.bValue=((*(p_tyDO)).bMtrPwrRly));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterOpenCtrl.bValue=((*(p_tyDO)).bInShutterOpenCtrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterCloseCtrl.bValue=((*(p_tyDO)).bInShutterCloseCtrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterOpenCtrl.bValue=((*(p_tyDO)).bOutShutterOpenCtrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterCloseCtrl.bValue=((*(p_tyDO)).bOutShutterCloseCtrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp1Ctrl.bValue=((*(p_tyDO)).bClamp1Ctrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp1Ctrl.bValue=((*(p_tyDO)).bUnClamp1Ctrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Ctrl.bValue=((*(p_tyDO)).bClamp2Ctrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp2Ctrl.bValue=((*(p_tyDO)).bUnClamp2Ctrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Ctrl.bValue=((*(p_tyDO)).bClamp3Ctrl));
(tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp3Ctrl.bValue=((*(p_tyDO)).bUnClamp3Ctrl));

}

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){


(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlySig.bValue=((*(p_tyDI)).bSafetyRlySig));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnEStop.bValue=((*(p_tyDI)).bEStopSig));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig.bValue=((*(p_tyDI)).bCoverSWSig));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBA.bValue=((*(p_tyDI)).bUBA));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSB.bValue=((*(p_tyDI)).bDSB));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBAStat.bValue=((*(p_tyDI)).bUBAStat));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvLftSen.bValue=((*(p_tyDI)).bConvLftSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvRgtSen.bValue=((*(p_tyDI)).bConvRgtSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPressureSW.bValue=((*(p_tyDI)).bPressureSW));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnThermalPrtSig.bValue=((*(p_tyDI)).bThermalPrtSig));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingSen.bValue=((*(p_tyDI)).bCoatingSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSWidthChkSen.bValue=((*(p_tyDI)).bUSWidthChkSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSWidthChkSen.bValue=((*(p_tyDI)).bDSWidthChkSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHomeSen.bValue=((*(p_tyDI)).bInvertHomeSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemoteSen.bValue=((*(p_tyDI)).bInvertRemoteSen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterOpenRS.bValue=((*(p_tyDI)).bInShutterOpenRS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterCloseRS.bValue=((*(p_tyDI)).bInShutterCloseRS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterOpenRS.bValue=((*(p_tyDI)).bOutShutterOpenRS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterCloseRS.bValue=((*(p_tyDI)).bOutShutterCloseRS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Sen.bValue=((*(p_tyDI)).bClamp2Sen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Sen.bValue=((*(p_tyDI)).bClamp3Sen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS1.bValue=((*(p_tyDI)).bClampRS1));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS1.bValue=((*(p_tyDI)).bUnClampRS1));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS2.bValue=((*(p_tyDI)).bClampRS2));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS2.bValue=((*(p_tyDI)).bUnClampRS2));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS3.bValue=((*(p_tyDI)).bClampRS3));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS3.bValue=((*(p_tyDI)).bUnClampRS3));

(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig2.bValue=((*(p_tyDI)).bCoverSWSig2));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromUS.bValue=((*(p_tyDI)).bSafetySigFromUS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromDS.bValue=((*(p_tyDI)).bSafetySigFromDS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromUS.bValue=((*(p_tyDI)).bUnlockCoverSigFromUS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromDS.bValue=((*(p_tyDI)).bUnlockCoverSigFromDS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverUnlockPB1.bValue=((*(p_tyDI)).bCoverUnlockPB1));

(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlyRst.bValue=((*(p_tyDO)).bSafetyRlyRst));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLGreen.bValue=((*(p_tyDO)).bTLGreen));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLAmber.bValue=((*(p_tyDO)).bTLAmber));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLRed.bValue=((*(p_tyDO)).bTLRed));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLBlue.bValue=((*(p_tyDO)).bTLBlue));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLWhite.bValue=((*(p_tyDO)).bTLWhite));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBuzzer.bValue=((*(p_tyDO)).bBuz));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingRetCtrl.bValue=((*(p_tyDO)).bCoatingStprRet));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSB.bValue=((*(p_tyDO)).bUSB));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBA.bValue=((*(p_tyDO)).bDBA));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBAStat.bValue=((*(p_tyDO)).bDBAStat));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCW.bValue=((*(p_tyDO)).bConvMtrCW));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCCW.bValue=((*(p_tyDO)).bConvMtrCCW));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHome.bValue=((*(p_tyDO)).bInvertHome));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemote.bValue=((*(p_tyDO)).bInvertRemote));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertBrake.bValue=((*(p_tyDO)).bInvertBrake));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMtrPwrRly.bValue=((*(p_tyDO)).bMtrPwrRly));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterOpenCtrl.bValue=((*(p_tyDO)).bInShutterOpenCtrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterCloseCtrl.bValue=((*(p_tyDO)).bInShutterCloseCtrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterOpenCtrl.bValue=((*(p_tyDO)).bOutShutterOpenCtrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterCloseCtrl.bValue=((*(p_tyDO)).bOutShutterCloseCtrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp1Ctrl.bValue=((*(p_tyDO)).bClamp1Ctrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp1Ctrl.bValue=((*(p_tyDO)).bUnClamp1Ctrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Ctrl.bValue=((*(p_tyDO)).bClamp2Ctrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp2Ctrl.bValue=((*(p_tyDO)).bUnClamp2Ctrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Ctrl.bValue=((*(p_tyDO)).bClamp3Ctrl));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp3Ctrl.bValue=((*(p_tyDO)).bUnClamp3Ctrl));

(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToDS.bValue=((*(p_tyDO)).bTopCvrUnlckToDS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToUS.bValue=((*(p_tyDO)).bTopCvrUnlckToUS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtniMachineSafetySigToDS.bValue=((*(p_tyDO)).bMachineSafetySigToDS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMachineSafetySigToUS.bValue=((*(p_tyDO)).bMachineSafetySigToUS));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPBLED1.bValue=((*(p_tyDO)).bCoverPBLED1));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBypassTopCover1.bValue=((*(p_tyDO)).bBypassTopCover1));
(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyTopCoverSWCoil1.bValue=((*(p_tyDO)).bSafetyTopCoverSWCoil1));

}




}imp111_else4_0:imp111_end4_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0201/Act_OptP0201ChgParam.st"
static void __AS__Action__Act_OptP0201ChgParam(void){
{
(((_2byte_bit_field_*)(&tyP0201OpsConv.tyOps.tyBtnChgParam.uiRtStat))->bit0=(((*(p_tyMcParamCurr)).bChgParamEn)^1));


if((((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyBtnChgParam.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyOps.tyBtnChgParam.bRtCompl=0);

(tyProdRcpCurrRcpWr=*(struct tyProdRcpParam*)&((*(p_tyProdRcpCurrRcp0))));

(tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiMcMod));
(tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiFlippedBrd));
(tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM));

fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat)));

}

(tyP0201OpsConv.tyOps.tyBtnChgParam.bValue=(((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0)));

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0201OpsConv.tyChgParam.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){

(tyProdRcpCurrRcpWr.usiMcMod=tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueIdx);
(tyProdRcpCurrRcpWr.usiFlippedBrd=tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueIdx);
(tyProdRcpCurrRcpWr.diWidthInUM=tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValue);

(eProdRcpAct=11);

if(((((signed long)((*(p_eProdRcpStatus)))==(signed long)1))&(((signed long)((*(p_eProdRcpStat)))==(signed long)11)))){
(eProdRcpAct=0);


(tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiMcMod));
(tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiFlippedBrd));
(tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM));

(tyP0201OpsConv.tyChgParam.tyBtnSave.bRtCompl=0);
(tyP0201OpsConv.tyChgParam.tyBtnSave.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat)));

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP0201OpsConv.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP0201OpsConv.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP0201OpsConv.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0201OpsConv.tyMsgBoxHide)));


(tyProdRcpCurrRcpWr=*(struct tyProdRcpParam*)&((*(p_tyProdRcpCurrRcp0))));

(tyP0201OpsConv.tyChgParam.tyBtnSave.bRtCompl=0);
(tyP0201OpsConv.tyChgParam.tyBtnSave.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat)));

}

}

}else if((((unsigned long)(unsigned char)tyP0201OpsConv.tyChgParam.tyBtnCancel.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyChgParam.tyBtnCancel.bRtCompl=0);
(tyP0201OpsConv.tyChgParam.tyBtnCancel.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat)));
}

}


(((_2byte_bit_field_*)(&tyP0201OpsConv.tyOps.tyBtnChgParam.uiMaskRtStat))->bit0=(((*(p_tyUsrMgmtCurrAccessRgt)).bChgParam)&((*(p_bOpsStatusStop)))));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0201/Act_OptP0201Keypad.st"
static void __AS__Action__Act_OptP0201Keypad(void){
{
if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0201OpsConv.tyChgParam.tyNumProdWidth.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0201OpsConv.tyChgParam.tyNumProdWidth.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp112_else0_0:imp112_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200_P0201/Act_OptP0200ToP0201AccDat.st"
static void __AS__Action__Act_OptP0200ToP0201AccDat(void){
{

if(((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnAccDat.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyBtnAccDat.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP0200OpsGen.tyOps.tyBtnAccDat.bRtCompl=0);
(tyP0201OpsConv.tyOps.tyBtnAccDat.bRtCompl=0);

(bProdAccData=1);
}


if(((((unsigned long)(unsigned char)((*(p_bLFFollowerProdAccDataMnl)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSHermesAccDataMnl)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bLCSLFAccDataMnl)))==(unsigned long)(unsigned char)1)))){

(fbAccDatBlinkTm.IN=1);;TON(&fbAccDatBlinkTm);

if(fbAccDatBlinkTm.Q){
(fbAccDatBlinkTm.IN=0);;TON(&fbAccDatBlinkTm);
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx=0);
(tyP0201OpsConv.tyOps.tyBitmapAccDat.usiValueIdx=0);
}else{
(tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx=1);
(tyP0201OpsConv.tyOps.tyBitmapAccDat.usiValueIdx=1);
}
}

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnAccDat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyBtnAccDat.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapAccDat.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyBitmapAccDat.uiRtStat)));

}else{

(fbAccDatBlinkTm.IN=0);;TON(&fbAccDatBlinkTm);

(tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx=0);
(tyP0201OpsConv.tyOps.tyBitmapAccDat.usiValueIdx=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnAccDat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyBtnAccDat.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapAccDat.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyBitmapAccDat.uiRtStat)));

}




















































}imp104_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200_P0201/Act_OptP0200ToP0201BypsInitConv.st"
static void __AS__Action__Act_OptP0200ToP0201BypsInitConv(void){
{
if(((*(p_tyNtParamCurr)).bProjBypsInitConvPrep)){



if((((*(p_bOpsInvertStepInitConv)))&~Edge0010500000&1?((Edge0010500000=((*(p_bOpsInvertStepInitConv)))&1),1):((Edge0010500000=((*(p_bOpsInvertStepInitConv)))&1),0))){
fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat)));
}


if((~((*(p_bOpsInvertStepInitConv)))&Edge0010500001&1?((Edge0010500001=((*(p_bOpsInvertStepInitConv)))&1),1):((Edge0010500001=((*(p_bOpsInvertStepInitConv)))&1),0))){
fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat)));

(bOpsBypsInitConv=0);
}


if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){

(fbBypsInitConvBlinkTm.IN=1);;TON(&fbBypsInitConvBlinkTm);

if(fbBypsInitConvBlinkTm.Q){
(fbBypsInitConvBlinkTm.IN=0);;TON(&fbBypsInitConvBlinkTm);

if((((unsigned long)(unsigned char)tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx==(unsigned long)(unsigned char)0))){
(tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx=1);
(tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx=1);

}else{
(tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx=0);
(tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx=0);
}

}

}else{

(fbBypsInitConvBlinkTm.IN=0);;TON(&fbBypsInitConvBlinkTm);

(tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx=0);
(tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx=0);
}


if((tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl|tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl)){
(tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl=0);
(tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat)));

(bOpsBypsInitConv=1);

}else if((tyP0200OpsGen.tyBypsInitConv.tyHotspotClose.bRtCompl|tyP0201OpsConv.tyBypsInitConv.tyHotspotClose.bRtCompl)){
(tyP0200OpsGen.tyBypsInitConv.tyHotspotClose.bRtCompl=0);
(tyP0201OpsConv.tyBypsInitConv.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat)));

}

}

}imp105_else6_1:imp105_end6_0:imp105_else0_0:imp105_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0200_P0201/Act_OptP0200ToP0201RlsNewProd.st"
static void __AS__Action__Act_OptP0200ToP0201RlsNewProd(void){
{
if((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bProjRlsNewProdPrep)==(unsigned long)(unsigned char)1))){


if(((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnRlsNewProd.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyBtnRlsNewProd.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP0200OpsGen.tyOps.tyBtnRlsNewProd.bRtCompl=0);
(tyP0201OpsConv.tyOps.tyBtnRlsNewProd.bRtCompl=0);

(bRlsNewProd=1);
}


if(((((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bFollower1WaitRlsProd)))==(unsigned long)(unsigned char)1)))){
(fbRlsNewProdBlinkTm.IN=1);;TON(&fbRlsNewProdBlinkTm);

if(fbRlsNewProdBlinkTm.Q){
(fbRlsNewProdBlinkTm.IN=0);;TON(&fbRlsNewProdBlinkTm);
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx=0);
(tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.usiValueIdx=0);
}else{
(tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx=1);
(tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.usiValueIdx=1);
}
}

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnRlsNewProd.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyBtnRlsNewProd.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.uiRtStat)));

}else{
(bRlsNewProd=0);

(fbRlsNewProdBlinkTm.IN=0);;TON(&fbRlsNewProdBlinkTm);

(tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx=0);
(tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.usiValueIdx=0);

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBtnRlsNewProd.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyBtnRlsNewProd.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.uiRtStat)));

}

}else{

(bRlsNewProd=1);

}

}imp106_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0300/Act_EntP0300Disp.st"
static void __AS__Action__Act_EntP0300Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0300McInfo.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0300McInfo=((unsigned long)(&tyP0300McInfo.tyMcInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0300McInfo.tyMcInfo.tyStringMcNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).sMcNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

fUIInRtStatHide(((unsigned long)(&tyP0300McInfo.tyMcInfo.tyBtnPlaySong.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0300McInfo.tyMcInfo.tyDrpDnSong.uiRtStat)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0300/Act_OptP0300Songt.st"
static void __AS__Action__Act_OptP0300Song(void){
{
if((~bSongEn&Edge0011500000&1?((Edge0011500000=bSongEn&1),1):((Edge0011500000=bSongEn&1),0))){
(tyP0300McInfo.tyMcInfo.tyBtnPlaySong.bValue=0);
}else{
(bSongEn=tyP0300McInfo.tyMcInfo.tyBtnPlaySong.bValue);
}

(uiSongIndex=(unsigned short)tyP0300McInfo.tyMcInfo.tyDrpDnSong.usiValueIdx);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_EntP0400Disp.st"
static void __AS__Action__Act_EntP0400Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyC0012RcpPopUp=((unsigned long)(&tyP0400ProdSel.tyRcpPopUp)));

(p_tyP0400ProdSel=((unsigned long)(&tyP0400ProdSel.tyProdSel)));
(p_tyP0400RcpDet=((unsigned long)(&tyP0400ProdSel.tyRcpDet)));


(tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue=0);
(tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringSearch.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp0)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM));
(tyP0400ProdSel.tyProdSel.tyNumProdWidth2.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM2));
(tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiMcMod));
(tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp0)).sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Mask.st"
static void __AS__Action__Act_OptP0400Mask(void){
{
if((((*(p_tyNtParamCurr)).bLCSLFPrep)&((*(p_tyMcParamCurr)).bLCSLFEn))){
(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyBtnLoad.uiMaskRtStat))->bit0=0);
}else{
(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyBtnLoad.uiMaskRtStat))->bit0=(((__AS__STRING_CMP(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow-1].sValue,"")!=0))&(((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl==(unsigned long)(unsigned char)0))));
}

(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyBtnPreview.uiMaskRtStat))->bit0=(((__AS__STRING_CMP(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow-1].sValue,"")!=0))&(((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl==(unsigned long)(unsigned char)0))));

(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyBtnSort.uiMaskRtStat))->bit0=(((__AS__STRING_CMP(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[1-1].sValue,"")!=0))&(((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl==(unsigned long)(unsigned char)0))));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Search.st"
static void __AS__Action__Act_OptP0400Search(void){
{
if((((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl==(unsigned long)(unsigned char)1))){
if(((__AS__STRING_CMP(tyP0400ProdSel.tyProdSel.tyStringSearch.sValue,"")==0))){
for((i=1);i<=c_uiP0400TableSize;i+=1){
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP0400Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP0400Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp121_endfor2_0:;

(tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl=0);

if(tyP0400ProdSel.tyProdSel.tyBtnSort.bValue){
(bFilterSortP0400=1);
}

}else{

(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat))->bit0=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sProdRcpSearch; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringSearch.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=6);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)6))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

for((i=1);i<=c_uiP0400TableSize;i+=1){
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP0400Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP0400Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp121_endfor5_0:;


(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat))->bit0=1);

(tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl=0);

if(tyP0400ProdSel.tyProdSel.tyBtnSort.bValue){
(bFilterSortP0400=1);
}

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
for((i=1);i<=c_uiP0400TableSize;i+=1){
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp121_endfor7_0:;

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxListErr)));

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl=1);
(tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bValue=1);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));


(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat))->bit0=1);


(tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl=0);
}
}
}
}

}imp121_else8_0:imp121_end8_0:imp121_else4_1:imp121_end4_0:imp121_end1_0:imp121_else0_0:imp121_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Load.st"
static void __AS__Action__Act_OptP0400Load(void){
{
if((((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiSelProdRcpStep==(unsigned long)(unsigned char)0))){


(tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat=0);
(tyP0400ProdSel.tyProdSel.tyStringSearch.uiMaskRtStat=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxSelRcpAsk)));

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnYes.bRtCompl=0);
(tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));

(usiSelProdRcpStep=1);

}else if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnNo.bRtCompl=0);
(tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));

(usiSelProdRcpStep=99);

}

}else if((((unsigned long)(unsigned char)usiSelProdRcpStep==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyProdRcpInfoIn.sRcpNm; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow-1].sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=7);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)7))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

if(((((unsigned long)(unsigned char)((*(p_bProdRcpNmEmpty)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bProdRcpNmNotExist)))==(unsigned long)(unsigned char)1)))){
(usiSelProdRcpStep=2);
}else{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp0)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM));
(tyP0400ProdSel.tyProdSel.tyNumProdWidth2.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM2));
(tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiMcMod));
(tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrRcp0)).usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp0)).sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyProdRcpCurrRcpWr=*(struct tyProdRcpParam*)&((*(p_tyProdRcpCurrRcp0))));

if(((((((*(p_tyNtParamCurr)).bLFUsrSetPrep)^1)&((*(p_tyNtParamCurr)).bLeaderMc))|(((*(p_tyNtParamCurr)).bLFUsrSetPrep)&((*(p_tyMcParamCurr)).bLFLeaderMc)))&((*(p_tyNtParamCurr)).bLFPrep)&((*(p_tyMcParamCurr)).bLFEn)&((*(p_tyUsrMgmtCurrAccessRgt)).bLFCtrl))){
(usiSelProdRcpStep=98);
}else{
(usiSelProdRcpStep=99);
}

}

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){

(usiSelProdRcpStep=99);

}

}else if((((unsigned long)(unsigned char)usiSelProdRcpStep==(unsigned long)(unsigned char)2))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxSelRcpNoNm)));

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxSelRcpNoNm.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxSelRcpNoNm.tyBtnNo.bRtCompl=0);
(tyP0400ProdSel.tyMsgBoxSelRcpNoNm.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));

(usiSelProdRcpStep=99);

}

}else if((((unsigned long)(unsigned char)usiSelProdRcpStep==(unsigned long)(unsigned char)98))){

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk)));

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnYes.bRtCompl=0);
(tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));


(eChgPage=700);


(tyCommon.tyMain.tyBtnStart.bRtCompl=1);



(tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat=1);
(tyP0400ProdSel.tyProdSel.tyStringSearch.uiMaskRtStat=1);


(tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl=0);
(tyP0400ProdSel.tyProdSel.tyBtnLoad.bValue=0);

(usiSelProdRcpStep=0);

}else if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnNo.bRtCompl=0);
(tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));

(usiSelProdRcpStep=99);

}

}else if((((unsigned long)(unsigned char)usiSelProdRcpStep==(unsigned long)(unsigned char)99))){


(tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat=1);
(tyP0400ProdSel.tyProdSel.tyStringSearch.uiMaskRtStat=1);


(tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl=0);
(tyP0400ProdSel.tyProdSel.tyBtnLoad.bValue=0);

(usiSelProdRcpStep=0);

}

}

}imp117_else1_4:imp117_end1_0:imp117_else0_0:imp117_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Preview.st"
static void __AS__Action__Act_OptP0400Preview(void){
{
if((((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyBtnPreview.bRtCompl==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyProdRcpInfoIn.sRcpNm; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow-1].sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=4);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)4))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

if(((((unsigned long)(unsigned char)((*(p_bProdRcpNmEmpty)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bProdRcpNmNotExist)))==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyRcpDet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0400ProdSel.tyRcpDet.tyNumProdWidth.diValue=100000);
(tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.diValue=100000);
(tyP0400ProdSel.tyRcpDet.tyTxtMcMod.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultMcMod));
(tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyRcpDet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyRcpDet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpInfoOut)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP0400ProdSel.tyRcpDet.tyNumProdWidth.diValue=((*(p_tyProdRcpInfoOut)).diWidthInUM));
(tyP0400ProdSel.tyRcpDet.tyNumProdWidth2.diValue=((*(p_tyProdRcpInfoOut)).diWidthInUM2));
(tyP0400ProdSel.tyRcpDet.tyTxtMcMod.usiValueIdx=((*(p_tyProdRcpInfoOut)).usiMcMod));
(tyP0400ProdSel.tyRcpDet.tyTxtFlippedBrd.usiValueIdx=((*(p_tyProdRcpInfoOut)).usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyRcpDet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpInfoOut)).sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyLyr.uiRtStat)));

(tyP0400ProdSel.tyProdSel.tyBtnPreview.bRtCompl=0);

}

}

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyRcpDet.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyRcpDet.tyHotspotClose.bRtCompl=0);
(tyP0400ProdSel.tyProdSel.tyBtnPreview.bValue=0);


fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpDet.tyLyr.uiRtStat)));

}


if((((unsigned long)(unsigned char)tyP0400ProdSel.tyRcpDet.tyHotspotShowLRcp.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyRcpDet.tyHotspotShowLRcp.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyRcpPopUp.tyStringInfo.sValue; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow-1].sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)));

}

}imp119_else4_1:imp119_end4_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Table.st"
static void __AS__Action__Act_OptP0400Table(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)fbP0400Table.sVisuNm; plcstring* zzRValue=(plcstring*)tyP0400Table.sVisuNm; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbP0400Table.udiWorkAreaStartX=359);
(fbP0400Table.udiWorkAreaEndX=770);
(fbP0400Table.udiWorkAreaStartY=93);
(fbP0400Table.udiWorkAreaEndY=415);
(fbP0400Table.udiMinXDist=20);
(fbP0400Table.udiMinYDist=20);
(fbP0400Table.uiSlideScale=c_uiP0400TableSize);
(fbP0400Table.iTotalData=(signed short)c_udiProdRcpMax);
(fbP0400Table.iTotalRow=c_uiP0400TableSize);
fbP0400Table.uiSliderStatus=&tyP0400ProdSel.tyProdSel.tyTableRecipe.tyUISlider.uiRtStat;fbP0400Table.a_tyUIHotspot=&tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyHotspot;fbP0400Table.uiTablePos=&tyP0400Table.uiTablePos;fbP0400Table.iSliderPos=&tyP0400ProdSel.tyProdSel.tyTableRecipe.tyUISlider.iValue;fbTableCtrl(&fbP0400Table);

(tyP0400Table.uiSelectedRow=fbP0400Table.uiSelectedRow);
(tyP0400Table.bTableActive=fbP0400Table.bTableActive);
(tyP0400Table.bSliderActive=fbP0400Table.bSliderActive);




if(((((unsigned long)(unsigned char)tyP0400Table.bTableActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0400Table.bSliderActive==(unsigned long)(unsigned char)1))|bUpdateP0400Table)){
for((i=1);i<=c_uiP0400TableSize;i+=1){
if(tyP0400ProdSel.tyProdSel.tyBtnSort.bValue){

uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP0400Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP0400Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{

if(((__AS__STRING_CMP(tyP0400ProdSel.tyProdSel.tyStringSearch.sValue,"")==0))){
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP0400Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP0400Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP0400Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP0400Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}
}imp123_endfor1_0:;

if(bUpdateP0400Table){
(bUpdateP0400Table=0);
}

}


if((((unsigned long)(unsigned short)tyP0400Table.uiSelectedRow!=(unsigned long)(unsigned short)tyP0400Table.uiSelectedRowOld))){
for((i=1);i<=c_uiP0400TableSize;i+=1){
if((((unsigned long)(unsigned short)tyP0400Table.uiSelectedRow==(unsigned long)(unsigned short)i))){
(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].usiColor=1);
(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].usiColor=1);
}else{
(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].usiColor=0);
(tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].usiColor=0);
}
}imp123_endfor6_0:;

(tyP0400Table.uiSelectedRowOld=tyP0400Table.uiSelectedRow);
}

}imp123_else5_0:imp123_end5_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Sort.st"
static void __AS__Action__Act_OptP0400Sort(void){
{
if(tyP0400ProdSel.tyProdSel.tyBtnSort.bValue){
(tyP0400ProdSel.tyProdSel.tyBtnSort.usiTxtIdx=1);
}else{
(tyP0400ProdSel.tyProdSel.tyBtnSort.usiTxtIdx=0);
}


if((tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl|(bFilterSortP0400&(((signed long)((*(p_eProdRcpStat)))!=(signed long)6))))){

if(tyP0400ProdSel.tyProdSel.tyBtnSort.bValue){

(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat))->bit0=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sProdRcpSearch; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringSearch.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=13);


if(((((signed long)((*(p_eProdRcpStat)))==(signed long)13))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP0400Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP0400Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp122_endfor4_0:;

(bFilterSortP0400=0);


(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat))->bit0=1);

(tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl=0);

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
for((i=1);i<=c_uiP0400TableSize;i+=1){
uint2str(((tyP0400Table.uiTablePos+i)-1),tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp122_endfor5_0:;

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxListErr)));

(bFilterSortP0400=0);

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl=1);
(tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bValue=1);

(p_tyC0008MsgBox=((unsigned long)(&tyP0400ProdSel.tyMsgBoxHide)));


(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat))->bit0=1);


(tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl=0);
}
}

}else{

(bUpdateP0400Table=1);

(tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl=0);

}

}





}imp122_end2_0:imp122_else1_0:imp122_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400Keypad.st"
static void __AS__Action__Act_OptP0400Keypad(void){
{
if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0400ProdSel.tyProdSel.tyStringSearch.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringSearch.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp116_else0_0:imp116_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0400/Act_OptP0400RcpPopUp.st"
static void __AS__Action__Act_OptP0400RcpPopUp(void){
{

(((_2byte_bit_field_*)(&tyP0400ProdSel.tyProdSel.tyHotspotShowLRcp.uiRtStat))->bit0=(((__AS__STRING_CMP(tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue,"")!=0))^1));

if((((unsigned long)(unsigned char)tyP0400ProdSel.tyProdSel.tyHotspotShowLRcp.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyProdSel.tyHotspotShowLRcp.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0400ProdSel.tyRcpPopUp.tyStringInfo.sValue; plcstring* zzRValue=(plcstring*)tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0400ProdSel.tyRcpPopUp.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)));

}

}imp120_else0_1:imp120_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0600/Act_EntP0600Disp.st"
static void __AS__Action__Act_EntP0600Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0600Alm.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0010RcyMsg=((unsigned long)(&tyP0600Alm.tyRcyMsgHide)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0600Alm=((unsigned long)(&tyP0600Alm.tyAlm)));

(tyP0600Alm.tyAlm.tyBtnCurr.bRtCompl=1);


(bTeachStopperAtLftPos=0);
(bTeachStopperAtRgtPos=0);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0600/Act_OptP0600Alm.st"
static void __AS__Action__Act_OptP0600Alm(void){
{
if((((unsigned long)(unsigned char)tyP0600Alm.tyAlm.tyBtnHistory.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0600Alm.tyAlm.tyBtnHistory.bRtCompl=0);
(tyP0600Alm.tyAlm.tyBtnHistory.bValue=1);
(tyP0600Alm.tyAlm.tyBtnCurr.bValue=0);
}else if((((unsigned long)(unsigned char)tyP0600Alm.tyAlm.tyBtnCurr.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0600Alm.tyAlm.tyBtnCurr.bRtCompl=0);
(tyP0600Alm.tyAlm.tyBtnCurr.bValue=1);
(tyP0600Alm.tyAlm.tyBtnHistory.bValue=0);
}

if((((*(p_bAlarmErr))^1))){
__AS__MEMSET(((unsigned long)(&tyUIAlmData.bAlm)),0,10000);
}

if((((*(p_bAlarmWarning))^1))){
__AS__MEMSET(((unsigned long)(&tyUIAlmData.bWarning)),0,10000);
}else{
if((((*(p_bUSHermesConnected)))|(((signed long)((*(p_tyMcParamCurr)).eUSComm)==(signed long)0)))){
(tyUIAlmData.bWarning[3114]=0);
}
if((((*(p_bDSHermesConnected)))|(((signed long)((*(p_tyMcParamCurr)).eDSComm)==(signed long)0)))){
(tyUIAlmData.bWarning[3363]=0);
}
}

if((((unsigned long)(unsigned char)tyP0600Alm.tyAlm.tyBtnCurr.bValue==(unsigned long)(unsigned char)1))){

fUIInRtStatOff(((unsigned long)(&tyP0600Alm.tyAlm.tyAlarm.tyUIAlmCur.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0600Alm.tyAlm.tyAlarm.tyUIAlmHis.uiRtStat)));
(((_2byte_bit_field_*)(&tyP0600Alm.tyAlm.tyBtnHistoryUp.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0600Alm.tyAlm.tyBtnHistoryDown.uiMaskRtStat))->bit0=0);

for((i=1);i<=c_uiP0600TableSize;i+=1){
if(((*(p_bStartupUISettingsLoadDone)))){
if((((signed long)((*(p_tyAlarmCurrList))[i-1].eSeverity)==(signed long)1))){
(tyUIAlmData.bAlm[((*(p_tyAlarmCurrList))[i-1].udiErrorCode)]=((*(p_tyAlarmCurrList))[i-1].bAlm));
}else if((((signed long)((*(p_tyAlarmCurrList))[i-1].eSeverity)==(signed long)2))){
(tyUIAlmData.bWarning[((*(p_tyAlarmCurrList))[i-1].udiErrorCode)]=((*(p_tyAlarmCurrList))[i-1].bWarning));
}
}
}imp124_endfor6_0:;


}else if((((unsigned long)(unsigned char)tyP0600Alm.tyAlm.tyBtnHistory.bValue==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0600Alm.tyAlm.tyAlarm.tyUIAlmCur.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0600Alm.tyAlm.tyAlarm.tyUIAlmHis.uiRtStat)));
(((_2byte_bit_field_*)(&tyP0600Alm.tyAlm.tyBtnHistoryUp.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0600Alm.tyAlm.tyBtnHistoryDown.uiMaskRtStat))->bit0=1);

}


}imp124_else5_1:imp124_end5_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0600/Act_OptP0600RcyMsg.st"
static void __AS__Action__Act_OptP0600RcyMsg(void){
{


for((i=1);i<=c_uiP0600TableSize;i+=1){

if((((unsigned long)(unsigned char)tyP0600Alm.tyAlm.a_tyHotspotAlm[i].bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0600Alm.tyAlm.a_tyHotspotAlm[i].bRtCompl=0);

(tyP0600Alm.tyRcyMsg.tyTxtMsg.udiValueIdx=((*(p_tyAlarmRcyList))[i-1]));

if(((((unsigned long)tyP0600Alm.tyRcyMsg.tyTxtMsg.udiValueIdx!=(unsigned long)0))&(((unsigned long)(unsigned char)tyP0600Alm.tyAlm.tyBtnHistory.bValue==(unsigned long)(unsigned char)0)))){
(p_tyC0010RcyMsg=((unsigned long)(&tyP0600Alm.tyRcyMsg)));
}else{
(p_tyC0010RcyMsg=((unsigned long)(&tyP0600Alm.tyRcyMsgHide)));
}

}

}imp125_endfor0_0:;


if(tyP0600Alm.tyRcyMsg.tyHotspotClose.bRtCompl){
(tyP0600Alm.tyRcyMsg.tyHotspotClose.bRtCompl=0);

(p_tyC0010RcyMsg=((unsigned long)(&tyP0600Alm.tyRcyMsgHide)));
}


}imp125_else3_0:imp125_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0700/Act_EntP0700Disp.st"
static void __AS__Action__Act_EntP0700Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0700LFCtrl=((unsigned long)(&tyP0700LFCtrl.tyLdr)));


(bLeaderRun=1);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0700/Act_ExitP0700.st"
static void __AS__Action__Act_ExitP0700(void){
{
if(((tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl|tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl|tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl|tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl)^1)){
(bLeaderRun=0);
(bLFRunInBG=0);
}else{
(bLFRunInBG=1);
}

(usiChgPage=1);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0700/Act_OptP0700LFLeaderCtrl.st"
static void __AS__Action__Act_OptP0700LFLeaderCtrl(void){
{
switch(usiLFLeaderCtrlStep){
case 0:{
if(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl){

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxChgAllAsk)));

if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnYes.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue=1);

(usiLFLeaderCtrlStep=2);

}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnNo.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl=0);

}

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl){

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk)));

if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnYes.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue=1);

(usiLFLeaderCtrlStep=2);

}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnNo.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl=0);

}

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl){

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk)));

if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnYes.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue=1);

(usiLFLeaderCtrlStep=2);

}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnNo.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl=0);

}

}else if(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl){

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk)));

if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnYes.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue=1);

(usiLFLeaderCtrlStep=2);

}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnNo.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl=0);

}

}

}break;case 1:{
(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk)));

if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnYes.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(usiLFLeaderCtrlStep=3);

}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnNo.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue=tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue=tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue=tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl);
(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue=tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl);

(usiLFLeaderCtrlStep=2);

}


(tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx=(unsigned char)(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl&1));
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx=(unsigned char)(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl&1));
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx=(unsigned char)(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl&1));
(tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx=(unsigned char)(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl&1));

}break;case 2:{
if(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl){
(eLFLeaderAct=4);

if(((((signed long)((*(p_eLFLeaderStat)))==(signed long)4))&((((signed long)((*(p_eLFLeaderStatus)))==(signed long)1))|(((signed long)((*(p_eLFLeaderStatus)))==(signed long)3))))){
(usiLFLeaderCtrlStep=3);
}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue==(unsigned long)(unsigned char)0))){
(usiLFLeaderCtrlStep=1);
}

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl){
(eLFLeaderAct=6);

if(((((signed long)((*(p_eLFLeaderStat)))==(signed long)6))&((((signed long)((*(p_eLFLeaderStatus)))==(signed long)1))|(((signed long)((*(p_eLFLeaderStatus)))==(signed long)3))))){
(usiLFLeaderCtrlStep=3);
}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue==(unsigned long)(unsigned char)0))){
(usiLFLeaderCtrlStep=1);
}

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl){
(eLFLeaderAct=7);

if(((((signed long)((*(p_eLFLeaderStat)))==(signed long)7))&((((signed long)((*(p_eLFLeaderStatus)))==(signed long)1))|(((signed long)((*(p_eLFLeaderStatus)))==(signed long)3))))){
(usiLFLeaderCtrlStep=3);
}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue==(unsigned long)(unsigned char)0))){
(usiLFLeaderCtrlStep=1);
}

}else if(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl){
(eLFLeaderAct=3);

if(((((signed long)((*(p_eLFLeaderStat)))==(signed long)3))&((((signed long)((*(p_eLFLeaderStatus)))==(signed long)1))|(((signed long)((*(p_eLFLeaderStatus)))==(signed long)3))))){
(usiLFLeaderCtrlStep=3);
}else if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue==(unsigned long)(unsigned char)0))){
(usiLFLeaderCtrlStep=1);
}

}


(fbLFLeaderCtrlBlinkTm.IN=1);;TON(&fbLFLeaderCtrlBlinkTm);
if((((unsigned long)(unsigned char)fbLFLeaderCtrlBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbLFLeaderCtrlBlinkTm.IN=0);;TON(&fbLFLeaderCtrlBlinkTm);

(tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx=(unsigned char)(((plcbit)(tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx!=0?1:0)^tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl)&1));
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx=(unsigned char)(((plcbit)(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx!=0?1:0)^tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl)&1));
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx=(unsigned char)(((plcbit)(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx!=0?1:0)^tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl)&1));
(tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx=(unsigned char)(((plcbit)(tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx!=0?1:0)^tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl)&1));
}

}break;case 3:{
(usiLFLeaderCtrlStep=0);

(eLFLeaderAct=0);

(fbLFLeaderCtrlBlinkTm.IN=0);;TON(&fbLFLeaderCtrlBlinkTm);

(tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx=0);
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx=0);
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx=0);
(tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx=0);

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl=0);
(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl=0);

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue=0);

}break;case 4:{
(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxErrorAsk)));

if((((unsigned long)(unsigned char)tyP0700LFCtrl.tyMsgBoxErrorAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyMsgBoxErrorAsk.tyBtnNo.bRtCompl=0);
(tyP0700LFCtrl.tyMsgBoxErrorAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP0700LFCtrl.tyMsgBoxHide)));

(usiLFLeaderCtrlStep=3);

}

}break;}

}imp126_case0_4:imp126_endcase0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0700/Act_OptP0700Mask.st"
static void __AS__Action__Act_OptP0700Mask(void){
{

if((((signed long)((*(p_eLFLeaderStatus)))==(signed long)3))){
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat)));

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl){
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat)));

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl){
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat)));

}else if(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl){
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat)));

}else if(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl){
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat)));

}else{
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat)));

}

}imp127_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0700/Act_OptP0700Table.st"
static void __AS__Action__Act_OptP0700Table(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)fbP0700Table.sVisuNm; plcstring* zzRValue=(plcstring*)tyP0700Table.sVisuNm; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbP0700Table.udiWorkAreaStartX=14);
(fbP0700Table.udiWorkAreaEndX=475);
(fbP0700Table.udiWorkAreaStartY=45);
(fbP0700Table.udiWorkAreaEndY=217);
(fbP0700Table.udiMinXDist=20);
(fbP0700Table.udiMinYDist=20);
(fbP0700Table.uiSlideScale=c_uiP0700TableSize);
(fbP0700Table.iTotalData=(signed short)c_diLFClntNum);
(fbP0700Table.iTotalRow=c_uiP0700TableSize);
fbP0700Table.uiSliderStatus=&tyP0700LFCtrl.tyLdr.tyTable1List.tyUISlider.uiRtStat;fbP0700Table.a_tyUIHotspot=&tyP0700LFCtrl.tyLdr.tyTable1List.a_tyHotspot;fbP0700Table.uiTablePos=&tyP0700Table.uiTablePos;fbP0700Table.iSliderPos=&tyP0700LFCtrl.tyLdr.tyTable1List.tyUISlider.iValue;fbTableCtrl(&fbP0700Table);

(tyP0700Table.uiSelectedRow=fbP0700Table.uiSelectedRow);
(tyP0700Table.bTableActive=fbP0700Table.bTableActive);
(tyP0700Table.bSliderActive=fbP0700Table.bSliderActive);


if(((((unsigned long)(unsigned char)tyP0700Table.bTableActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0700Table.bSliderActive==(unsigned long)(unsigned char)1)))){
for((i=1);i<=c_uiP0700TableSize;i+=1){
uint2str(((tyP0700Table.uiTablePos+i)-1),tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i-1].sValue,255);
}imp128_endfor1_0:;
}


for((i=1);i<=c_uiP0700TableSize;i+=1){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].sMcNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol4[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].sCurrProdRcp); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]),"")==0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=0);
}else if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]),"0000")==0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=3);
}else if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).a_bLFOnline[((tyP0700Table.uiTablePos+i)-1)-1])==(unsigned long)(unsigned char)0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=9);
}else if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]),((*(p_sHWInfoIPAddr))))==0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=4);
}else if((((unsigned long)(unsigned char)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].bSectionLeader)==(unsigned long)(unsigned char)1))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=5);
}else if((((unsigned long)(unsigned char)((*(p_tyLFLeaderFollowerInfo))[((tyP0700Table.uiTablePos+i)-1)-1].bOnline)==(unsigned long)(unsigned char)0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=9);
}else{
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)0))){
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)3))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=2);
}else{
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=6);
}
}else{
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)4))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=1);
}else if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)3))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=2);
}else if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)2))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=8);
}else{
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=7);
}
}
}
}imp128_endfor2_0:;


for((i=1);i<=c_uiP0700TableSize;i+=1){

if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]),"")==0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=0);
}else if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]),"0000")==0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=0);
}else if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).a_bLFOnline[((tyP0700Table.uiTablePos+i)-1)-1])==(unsigned long)(unsigned char)0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=3);
}else if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]),((*(p_sHWInfoIPAddr))))==0))){
if(((*(p_bOpsRun)))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=1);
}else{
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=2);
}
}else if((((unsigned long)(unsigned char)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].bSectionLeader)==(unsigned long)(unsigned char)1))){
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=1);
}else{
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=2);
}
}else if((((unsigned long)(unsigned char)((*(p_tyLFLeaderFollowerInfo))[((tyP0700Table.uiTablePos+i)-1)-1].bOnline)==(unsigned long)(unsigned char)0))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=3);
}else{
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)0))){
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)3))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=4);
}else{
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=1);
}
}else{
if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)4))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=2);
}else if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)3))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=4);
}else if((((signed long)((*(p_tyLFLeaderFollowerToLeaderTag))[((tyP0700Table.uiTablePos+i)-1)-1].eCurrMachineStat)==(signed long)2))){
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=6);
}else{
(tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=5);
}
}
}

}imp128_endfor7_0:;

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0900/Act_EntP0900Disp.st"
static void __AS__Action__Act_EntP0900Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0900GenIn.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0900GenIn=((unsigned long)(&tyP0900GenIn.tyGenIn)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0900/Act_OptP0900ReadDI.st"
static void __AS__Action__Act_OptP0900ReadDI(void){
{
(tyP0900GenIn.tyGenIn.tyBtnSafety.bValue=((*(p_tyDI)).bSafetyRlySig));
(tyP0900GenIn.tyGenIn.tyBtnEStop.bValue=((*(p_tyDI)).bEStopSig));
(tyP0900GenIn.tyGenIn.tyBtnCoverSW.bValue=((*(p_tyDI)).bCoverSWSig));

(tyP0900GenIn.tyGenIn.tyBtnThermalPrtSig.bValue=((*(p_tyDI)).bThermalPrtSig));
(tyP0900GenIn.tyGenIn.tyBtnUSWidthChkSen.bValue=((*(p_tyDI)).bUSWidthChkSen));
(tyP0900GenIn.tyGenIn.tyBtnDSWidthChkSen.bValue=((*(p_tyDI)).bDSWidthChkSen));


(tyP0900GenIn.tyGenIn.tyBtnSafetySigFromDS.bValue=((*(p_tyDI)).bSafetySigFromDS));
(tyP0900GenIn.tyGenIn.tyBtnSafetySigFromUS.bValue=((*(p_tyDI)).bSafetySigFromUS));
(tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromDS.bValue=((*(p_tyDI)).bUnlockCoverSigFromDS));
(tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromUS.bValue=((*(p_tyDI)).bUnlockCoverSigFromUS));
(tyP0900GenIn.tyGenIn.tyBtnUnlkCovPB.bValue=((*(p_tyDI)).bCoverUnlockPB1));
(tyP0900GenIn.tyGenIn.tyBtnTopCovSwSIg.bValue=((*(p_tyDI)).bCoverSWSig2));
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0910/Act_EntP0910Disp.st"
static void __AS__Action__Act_EntP0910Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0910GenOut.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0910GenOut=((unsigned long)(&tyP0910GenOut.tyGenOut)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0910/Act_OptP0910WriteDO.st"
static void __AS__Action__Act_OptP0910WriteDO(void){
{

if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnSafety.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnSafety.bValue==(unsigned long)(unsigned char)1))){
(eRstErrAct=2);

if(((((signed long)((*(p_eRstErrStat)))==(signed long)2))&(((signed long)((*(p_eRstErrStatus)))==(signed long)1)))){
(eRstErrAct=0);

(tyP0910GenOut.tyGenOut.tyBtnSafety.bRtCompl=0);
}

}else{
(eRstErrAct=3);

if(((((signed long)((*(p_eRstErrStat)))==(signed long)3))&(((signed long)((*(p_eRstErrStatus)))==(signed long)1)))){
(eRstErrAct=0);

(tyP0910GenOut.tyGenOut.tyBtnSafety.bRtCompl=0);
}

}

}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLGreen.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLGreen.bValue==(unsigned long)(unsigned char)1))){
(eTLBuzAct=1);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)1))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLGreen.bRtCompl=0);
}
}else{
(eTLBuzAct=7);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)7))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLGreen.bRtCompl=0);
}

}
}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLAmber.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLAmber.bValue==(unsigned long)(unsigned char)1))){
(eTLBuzAct=2);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)2))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLAmber.bRtCompl=0);
}
}else{
(eTLBuzAct=8);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)8))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLAmber.bRtCompl=0);
}

}
}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLRed.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLRed.bValue==(unsigned long)(unsigned char)1))){
(eTLBuzAct=3);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)3))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLRed.bRtCompl=0);
}
}else{
(eTLBuzAct=9);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)9))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLRed.bRtCompl=0);
}

}
}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLBlue.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLBlue.bValue==(unsigned long)(unsigned char)1))){
(eTLBuzAct=5);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)5))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLBlue.bRtCompl=0);
}
}else{
(eTLBuzAct=11);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)11))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLBlue.bRtCompl=0);
}

}
}



if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLWhite.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTLWhite.bValue==(unsigned long)(unsigned char)1))){
(eTLBuzAct=4);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)4))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLWhite.bRtCompl=0);
}
}else{
(eTLBuzAct=10);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)10))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLWhite.bRtCompl=0);
}

}
}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnBuzzer.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnBuzzer.bValue==(unsigned long)(unsigned char)1))){
(eTLBuzAct=6);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)6))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnBuzzer.bRtCompl=0);
}
}else{
(eTLBuzAct=12);

if(((((signed long)((*(p_eTLBuzStat)))==(signed long)12))&(((signed long)((*(p_eTLBuzStatus)))==(signed long)1)))){
(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnBuzzer.bRtCompl=0);
}

}
}






if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bValue==(unsigned long)(unsigned char)1))){
(bMnlModMachineSafetySigToDS=1);
(tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bRtCompl=0);

}else{
(bMnlModMachineSafetySigToDS=0);
(tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bRtCompl=0);

}

}




if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bValue==(unsigned long)(unsigned char)1))){
(bMnlModUnlockCover1Req=1);
(tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bRtCompl=0);

}else{
(bMnlModUnlockCover1Req=0);
(tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bRtCompl=0);

}

}



if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bValue==(unsigned long)(unsigned char)1))){
(bMnlModCoverPBLED1=1);
(tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bRtCompl=0);

}else{
(bMnlModCoverPBLED1=0);
(tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bRtCompl=0);

}

}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bValue==(unsigned long)(unsigned char)1))){
(bMnlModBypassTopCover1=1);
(tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bRtCompl=0);

}else{
(bMnlModBypassTopCover1=0);
(tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bRtCompl=0);

}

}


if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bValue==(unsigned long)(unsigned char)1))){
(bMnlModTopCoverSwitch1=1);
(tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bRtCompl=0);

}else{
(bMnlModTopCoverSwitch1=0);
(tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bRtCompl=0);

}

}

}imp131_end37_0:imp131_else36_0:imp131_end36_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0910/Act_OptP0910RstMnl.st"
static void __AS__Action__Act_OptP0910RstMnl(void){
{
if((((((unsigned long)(unsigned char)bUIManualMod==(unsigned long)(unsigned char)0))|(((signed long)((*(p_eTLBuzStatus)))==(signed long)3))|(((signed long)((*(p_eRstErrStatus)))==(signed long)3)))&~Edge0013000000&1?((Edge0013000000=((((unsigned long)(unsigned char)bUIManualMod==(unsigned long)(unsigned char)0))|(((signed long)((*(p_eTLBuzStatus)))==(signed long)3))|(((signed long)((*(p_eRstErrStatus)))==(signed long)3)))&1),1):((Edge0013000000=((((unsigned long)(unsigned char)bUIManualMod==(unsigned long)(unsigned char)0))|(((signed long)((*(p_eTLBuzStatus)))==(signed long)3))|(((signed long)((*(p_eRstErrStatus)))==(signed long)3)))&1),0))){

(eTLBuzAct=0);

(tyP0910GenOut.tyGenOut.tyBtnTLGreen.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnTLAmber.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnTLWhite.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnTLRed.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnBuzzer.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnSafety.bValue=0);


(tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bValue=0);
(tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bValue=0);
}

}imp130_else0_0:imp130_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0920/Act_EntP0920Disp.st"
static void __AS__Action__Act_EntP0920Disp(void){
{

(p_tyC0002FullMask=((unsigned long)(&tyP0920MtrNPneuCtrl.tyFullMaskHide)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0920MtrNPneuCtrl.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0920MtrNPneuCtrl=((unsigned long)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl)));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.uiMaskRtStat))->bit0=((((*(p_tyNtParamCurr)).bAWPrep)&((*(p_tyMcParamCurr)).bAWDis))^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.uiMaskRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjStopperPrep)&((*(p_tyMcParamCurr)).bStopperDis))^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.uiMaskRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjClampPrep)&(((signed long)((*(p_tyNtParamCurr)).eProjClampOption)==(signed long)0))&((*(p_tyMcParamCurr)).bClampDis))^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.uiMaskRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjClampPrep)&(((signed long)((*(p_tyNtParamCurr)).eProjClampOption)==(signed long)1))&((*(p_tyMcParamCurr)).bClampDis))^1));


(((_2byte_bit_field_*)(&tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.uiMaskRtStat))->bit0=(((((*(p_tyNtParamCurr)).bProjInletShutPrep)&((*(p_tyMcParamCurr)).bInShutterDis))|(((*(p_tyNtParamCurr)).bProjOutletShutPrep)&((*(p_tyMcParamCurr)).bOutShutterDis)))^1));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0920/Act_OptP0920FullMask.st"
static void __AS__Action__Act_OptP0920FullMask(void){
{
if((((signed long)eCurrPage==(signed long)920))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0920MtrNPneuCtrl.tyFullMaskEStop)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0920MtrNPneuCtrl.tyFullMaskCWSig)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0920MtrNPneuCtrl.tyFullMaskSafetyRly)));

}else{
(p_tyC0002FullMask=((unsigned long)(&tyP0920MtrNPneuCtrl.tyFullMaskHide)));

}

}

}imp133_end1_0:imp133_else0_0:imp133_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0920/Act_OptP0920ChgPage.st"
static void __AS__Action__Act_OptP0920ChgPage(void){
{
if(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.bRtCompl){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.bRtCompl=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.bValue=0);

(eChgPage=923);


}else if(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnConv.bRtCompl){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnConv.bRtCompl=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnConv.bValue=0);

(eChgPage=931);

}else if((((unsigned long)(unsigned char)tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.bRtCompl=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.bValue=0);

(eChgPage=934);

}else if((((unsigned long)(unsigned char)tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.bRtCompl=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.bValue=0);

(eChgPage=921);

}else if((((unsigned long)(unsigned char)tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.bRtCompl=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.bValue=0);

(eChgPage=924);

}else if((((unsigned long)(unsigned char)tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.bRtCompl=0);
(tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.bValue=0);

(eChgPage=922);

}

}imp132_else0_5:imp132_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_EntP0921Disp.st"
static void __AS__Action__Act_EntP0921Disp(void){
{
(p_tyC0002FullMask=((unsigned long)(&tyP0921ClampNoRS.tyFullMaskHide)));

(p_tyC0004Navi=((unsigned long)(&tyP0921ClampNoRS.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0921ClampNoRS.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0921ClampNoRSCom=((unsigned long)(&tyP0921ClampNoRS.tyCom)));

(p_tyP0921ClampNoRSDC=((unsigned long)(&tyP0921ClampNoRS.tyDC)));

(p_tyP0921ClampNoRSFB=((unsigned long)(&tyP0921ClampNoRS.tyFB)));


if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat)));
}

}imp17_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921FullMask.st"
static void __AS__Action__Act_OptP0921FullMask(void){
{
if((((signed long)eCurrPage==(signed long)921))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0921ClampNoRS.tyFullMaskEStop)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0921ClampNoRS.tyFullMaskCWSig)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0921ClampNoRS.tyFullMaskSafetyRly)));

}else{
(p_tyC0002FullMask=((unsigned long)(&tyP0921ClampNoRS.tyFullMaskHide)));

}

}

}imp138_end1_0:imp138_else0_0:imp138_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921Navi.st"
static void __AS__Action__Act_OptP0921Navi(void){
{
if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0921ClampNoRS.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP0921ClampNoRS.tyNaviBack.tyBtnBack.bValue=0);

(eChgPage=920);

}

}imp139_else0_0:imp139_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921ChgLyr.st"
static void __AS__Action__Act_OptP0921ChgLyr(void){
{
if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat)));
}
}

}imp134_end1_0:imp134_else0_0:imp134_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921UpdtData.st"
static void __AS__Action__Act_OptP0921UpdtData(void){
{

if(((*(p_bClampExtCtrl)))){
(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=1);
}else{
(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=0);
}

}imp141_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921FBCtrl.st"
static void __AS__Action__Act_OptP0921FBCtrl(void){
{
if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl=0);

(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=1);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl=0);

(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=1);
(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=0);
}

if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyFB.tyBtnRet.bValue==(unsigned long)(unsigned char)1))){
(eClampAct=6);

if(((((signed long)((*(p_eClampStat)))==(signed long)6))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=0);
(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=0);

}else if((((signed long)((*(p_eClampStatus)))==(signed long)3))){

(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyFB.tyBtnExt.bValue==(unsigned long)(unsigned char)1))){
(eClampAct=5);

if(((((signed long)((*(p_eClampStat)))==(signed long)5))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=1);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=0);

}else if((((signed long)((*(p_eClampStatus)))==(signed long)3))){

(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=0);
}
}



(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bValue=((*(p_bClampRetCtrl))));
(tyP0921ClampNoRS.tyDC.tyBtnExt.bValue=((*(p_bClampExtCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.uiMaskRtStat)));

}

}

}imp136_end5_0:imp136_else0_0:imp136_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921FBStat.st"
static void __AS__Action__Act_OptP0921FBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0921ClampNoRS.tyFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sClampStatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921DCCtrl.st"
static void __AS__Action__Act_OptP0921DCCtrl(void){
{
if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)((*(p_bClampTwoCtrlOut)))==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0921ClampNoRS.tyDC.tyBtnRet.bValue=1);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bValue=0);

(eClampAct=4);

if(((((signed long)((*(p_eClampStat)))==(signed long)4))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=0);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0921ClampNoRS.tyDC.tyBtnExt.bValue=1);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bValue=0);

(eClampAct=3);

if(((((signed long)((*(p_eClampStat)))==(signed long)3))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=1);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
}

}

}else{

if(((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1)))){

if(((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1)))){
(eClampAct=1);

if(((((signed long)((*(p_eClampStat)))==(signed long)1))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnExt.bValue==(unsigned long)(unsigned char)0)))){
(eClampAct=4);

if(((((signed long)((*(p_eClampStat)))==(signed long)4))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=0);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnRet.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0921ClampNoRS.tyDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1)))){
(eClampAct=3);

if(((((signed long)((*(p_eClampStat)))==(signed long)3))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx=1);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
}

}else{
(eClampAct=2);

if(((((signed long)((*(p_eClampStat)))==(signed long)2))&(((signed long)((*(p_eClampStatus)))==(signed long)1)))){
(eClampAct=0);

(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
}

}

}

}

(tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl=0);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=0);
(tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=0);

}


}imp135_else0_0:imp135_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0921/Act_OptP0921RstMnl.st"
static void __AS__Action__Act_OptP0921RstMnl(void){
{
if(((((signed long)((*(p_eClampStatus)))==(signed long)3))&~Edge0014000000&1?((Edge0014000000=(((signed long)((*(p_eClampStatus)))==(signed long)3))&1),1):((Edge0014000000=(((signed long)((*(p_eClampStatus)))==(signed long)3))&1),0))){

(eClampAct=0);

(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bValue=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bValue=0);

(tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=0);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl=0);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=0);

}

if(((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&~Edge0014000001&1?((Edge0014000001=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),1):((Edge0014000001=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),0))){

(tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat)));

(eClampAct=0);

(tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnRet.bValue=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl=0);
(tyP0921ClampNoRS.tyDC.tyBtnExt.bValue=0);

(tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl=0);
(tyP0921ClampNoRS.tyFB.tyBtnRet.bValue=0);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl=0);
(tyP0921ClampNoRS.tyFB.tyBtnExt.bValue=0);

}

}imp140_else1_0:imp140_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_EntP0922Disp.st"
static void __AS__Action__Act_EntP0922Disp(void){
{

(p_tyC0003DualMask=((unsigned long)(&tyP0922InletNOutletShutter.tyDualMaskHide)));

(p_tyC0004Navi=((unsigned long)(&tyP0922InletNOutletShutter.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0922InletNOutletShutter.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0922InletShutterCom=((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterCom)));
(p_tyP0922InletShutterDC=((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDC)));
(p_tyP0922InletShutterFB=((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterFB)));
(p_tyP0922InletShutterDis=((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDis)));

(p_tyP0922OutletShutterCom=((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterCom)));
(p_tyP0922OutletShutterDC=((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDC)));
(p_tyP0922OutletShutterFB=((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterFB)));
(p_tyP0922OutletShutterDis=((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDis)));


(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyInletShutterDis.tyLyr.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bProjInletShutPrep)&((*(p_tyMcParamCurr)).bInShutterDis))^1));


if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat)));
}

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat)));
}

}imp18_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922Navi.st"
static void __AS__Action__Act_OptP0922Navi(void){
{
if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(eChgPage=920);

(tyP0922InletNOutletShutter.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP0922InletNOutletShutter.tyNaviBack.tyBtnBack.bValue=0);
}

}imp148_else0_0:imp148_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922DualMask.st"
static void __AS__Action__Act_OptP0922DualMask(void){
{
if((((signed long)eCurrPage==(signed long)922))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0922InletNOutletShutter.tyDualMaskEStop)));

(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjInletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjOutletShutPrep)^1));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0922InletNOutletShutter.tyDualMaskCWSig)));

(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskCWSig.tyBtnLeftMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjInletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskCWSig.tyBtnRgtMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjOutletShutPrep)^1));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0922InletNOutletShutter.tyDualMaskSafetyRly)));

(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskSafetyRly.tyBtnLeftMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjInletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskSafetyRly.tyBtnRgtMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjOutletShutPrep)^1));


}else if((((signed long)((*(p_eAWOpenStatus)))==(signed long)2))){
(p_tyC0003DualMask=((unsigned long)(&tyP0922InletNOutletShutter.tyDualMaskAWMovInterrupt)));

(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskAWMovInterrupt.tyBtnLeftMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjInletShutPrep)^1));
(((_2byte_bit_field_*)(&tyP0922InletNOutletShutter.tyDualMaskAWMovInterrupt.tyBtnRgtMask.uiMaskRtStat))->bit0=(((*(p_tyNtParamCurr)).bProjOutletShutPrep)^1));


}else{
(p_tyC0003DualMask=((unsigned long)(&tyP0922InletNOutletShutter.tyDualMaskHide)));

}

}

}imp142_end1_0:imp142_else0_0:imp142_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922InletShutterChgLyr.st"
static void __AS__Action__Act_OptP0922InletShutterChgLyr(void){
{
if(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bRtCompl){
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat)));
}

}


}imp143_end1_0:imp143_else0_0:imp143_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922InletShutterSen.st"
static void __AS__Action__Act_OptP0922InletShutterSen(void){
{
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnOpenRS.bValue=((*(p_tyDI)).bInShutterOpenRS));
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnCloseRS.bValue=((*(p_tyDI)).bInShutterCloseRS));


if((((unsigned long)(unsigned char)((*(p_tyDI)).bInShutterOpenRS)==(unsigned long)(unsigned char)1))){
if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx=100);
}
}else{
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx=0);
}
}else{
if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx=201);
}else{
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx=101);
}
}else{
(tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx=1);
}
}


}imp147_end3_0:imp147_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922InletShutterFB.st"
static void __AS__Action__Act_OptP0922InletShutterFB(void){
{
if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl=0);

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=1);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl=0);

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=1);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=0);
}

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue==(unsigned long)(unsigned char)1))){
(eInShutterAct=6);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)6))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=0);
}else if((((signed long)((*(p_eInShutterStatus)))==(signed long)3))){
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue==(unsigned long)(unsigned char)1))){
(eInShutterAct=5);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)5))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=0);
}else if((((signed long)((*(p_eInShutterStatus)))==(signed long)3))){
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=0);
}
}


(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue=((*(p_bInShutterRetCtrl))));
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue=((*(p_bInShutterExtCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.uiMaskRtStat)));

}

}


}imp145_end5_0:imp145_else0_0:imp145_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922InletShutterFBStat.st"
static void __AS__Action__Act_OptP0922InletShutterFBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0922InletNOutletShutter.tyInletShutterFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sInShutterStatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922InletShutterDC.st"
static void __AS__Action__Act_OptP0922InletShutterDC(void){
{
if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bInShutterTwoCtrlOut)))==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue=1);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue=0);

(eInShutterAct=4);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)4))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue=1);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue=0);

(eInShutterAct=3);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)3))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
}
}

}else{
if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue==(unsigned long)(unsigned char)1)))){
(eInShutterAct=1);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)1))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue==(unsigned long)(unsigned char)0)))){
(eInShutterAct=4);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)4))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue==(unsigned long)(unsigned char)1)))){
(eInShutterAct=3);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)3))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
}

}else{
(eInShutterAct=2);

if(((((signed long)((*(p_eInShutterStat)))==(signed long)2))&(((signed long)((*(p_eInShutterStatus)))==(signed long)1)))){
(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
}

}
}
}

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=0);

}


}imp144_else0_0:imp144_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922OutletShutterChgLyr.st"
static void __AS__Action__Act_OptP0922OutletShutterChgLyr(void){
{
if(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bRtCompl){
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat)));
}

}


}imp149_end1_0:imp149_else0_0:imp149_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922OutletShutterSen.st"
static void __AS__Action__Act_OptP0922OutletShutterSen(void){
{
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnOpenRS.bValue=((*(p_tyDI)).bOutShutterOpenRS));
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnCloseRS.bValue=((*(p_tyDI)).bOutShutterCloseRS));


if((((unsigned long)(unsigned char)((*(p_tyDI)).bOutShutterOpenRS)==(unsigned long)(unsigned char)1))){
if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBitmapMc.usiValueIdx=100);
}
}else{
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBitmapMc.usiValueIdx=0);
}
}else{
if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBitmapMc.usiValueIdx=201);
}else{
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBitmapMc.usiValueIdx=101);
}
}else{
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBitmapMc.usiValueIdx=1);
}
}


}imp153_end3_0:imp153_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922OutletShutterFB.st"
static void __AS__Action__Act_OptP0922OutletShutterFB(void){
{
if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl=0);

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=1);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl=0);

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=1);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=0);
}

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue==(unsigned long)(unsigned char)1))){
(eOutShutterAct=6);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)6))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=0);
}else if((((signed long)((*(p_eOutShutterStatus)))==(signed long)3))){
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue==(unsigned long)(unsigned char)1))){
(eOutShutterAct=5);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)5))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=0);
}else if((((signed long)((*(p_eOutShutterStatus)))==(signed long)3))){
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=0);
}
}


(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue=((*(p_bOutShutterExtCtrl))));
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue=((*(p_bOutShutterRetCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.uiMaskRtStat)));
}
}

}imp151_end5_0:imp151_else0_0:imp151_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922OutletShutterFBStat.st"
static void __AS__Action__Act_OptP0922OutletShutterFBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0922InletNOutletShutter.tyOutletShutterFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sOutShutterStatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922OutletShutterDC.st"
static void __AS__Action__Act_OptP0922OutletShutterDC(void){
{

if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bOutShutterTwoCtrlOut)))==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue=1);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue=0);

(eOutShutterAct=4);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)4))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue=1);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue=0);

(eOutShutterAct=3);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)3))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
}
}

}else{
if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue==(unsigned long)(unsigned char)1)))){
(eOutShutterAct=1);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)1))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue==(unsigned long)(unsigned char)0)))){
(eOutShutterAct=4);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)4))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue==(unsigned long)(unsigned char)1)))){
(eOutShutterAct=3);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)3))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
}

}else{
(eOutShutterAct=2);

if(((((signed long)((*(p_eOutShutterStat)))==(signed long)2))&(((signed long)((*(p_eOutShutterStatus)))==(signed long)1)))){
(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
}

}
}
}

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=0);

}

}imp150_else0_0:imp150_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0922/Act_OptP0922RstMnl.st"
static void __AS__Action__Act_OptP0922RstMnl(void){
{
if(((((signed long)((*(p_eInShutterStatus)))==(signed long)3))&~Edge0015400000&1?((Edge0015400000=(((signed long)((*(p_eInShutterStatus)))==(signed long)3))&1),1):((Edge0015400000=(((signed long)((*(p_eInShutterStatus)))==(signed long)3))&1),0))){

(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue=1);

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=0);

}

if(((((signed long)((*(p_eOutShutterStatus)))==(signed long)3))&~Edge0015400001&1?((Edge0015400001=(((signed long)((*(p_eOutShutterStatus)))==(signed long)3))&1),1):((Edge0015400001=(((signed long)((*(p_eOutShutterStatus)))==(signed long)3))&1),0))){

(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue=0);

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=0);

}

if(((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&~Edge0015400002&1?((Edge0015400002=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),1):((Edge0015400002=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),0))){

(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue=0);
(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat)));

(eInShutterAct=0);

(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue=1);

(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue=0);

(eOutShutterAct=0);

(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue=0);

(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl=0);
(tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue=0);

}

}imp154_else2_0:imp154_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_EntP0923Disp.st"
static void __AS__Action__Act_EntP0923Disp(void){
{

(p_tyC0002FullMask=((unsigned long)(&tyP0923Stopper.tyFullMaskHide)));

(p_tyC0004Navi=((unsigned long)(&tyP0923Stopper.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0923Stopper.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0923StopperCom=((unsigned long)(&tyP0923Stopper.tyCom)));

(p_tyP0923StopperDC=((unsigned long)(&tyP0923Stopper.tyDC)));

(p_tyP0923StopperFB=((unsigned long)(&tyP0923Stopper.tyFB)));


if((((unsigned long)(unsigned char)tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0923Stopper.tyDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0923Stopper.tyFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0923Stopper.tyDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0923Stopper.tyFB.tyLyr.uiRtStat)));
}

}imp19_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923FullMask.st"
static void __AS__Action__Act_OptP0923FullMask(void){
{
if((((signed long)eCurrPage==(signed long)923))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0923Stopper.tyFullMaskEStop)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0923Stopper.tyFullMaskCWSig)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0923Stopper.tyFullMaskSafetyRly)));

}else{
(p_tyC0002FullMask=((unsigned long)(&tyP0923Stopper.tyFullMaskHide)));

}

}

}imp159_end1_0:imp159_else0_0:imp159_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923Navi.st"
static void __AS__Action__Act_OptP0923Navi(void){
{
if((((unsigned long)(unsigned char)tyP0923Stopper.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0923Stopper.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP0923Stopper.tyNaviBack.tyBtnBack.bValue=0);

(eChgPage=920);

}

}imp160_else0_0:imp160_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923ChgLyr.st"
static void __AS__Action__Act_OptP0923ChgLyr(void){
{
if((((unsigned long)(unsigned char)tyP0923Stopper.tyCom.tyBtnDCCtrl.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0923Stopper.tyCom.tyBtnDCCtrl.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0923Stopper.tyDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0923Stopper.tyFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0923Stopper.tyDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0923Stopper.tyFB.tyLyr.uiRtStat)));
}
}

}imp155_end1_0:imp155_else0_0:imp155_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923UpdtData.st"
static void __AS__Action__Act_OptP0923UpdtData(void){
{

if(((*(p_bStopperExtCtrl)))){
(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=1);
}else{
(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=0);
}

}imp162_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923FBCtrl.st"
static void __AS__Action__Act_OptP0923FBCtrl(void){
{
if((((unsigned long)(unsigned char)tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)0))){


if((((unsigned long)(unsigned char)tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl=0);

(tyP0923Stopper.tyFB.tyBtnRetract.bValue=1);
(tyP0923Stopper.tyFB.tyBtnExtend.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl=0);

(tyP0923Stopper.tyFB.tyBtnExtend.bValue=1);
(tyP0923Stopper.tyFB.tyBtnRetract.bValue=0);

}


if((((unsigned long)(unsigned char)tyP0923Stopper.tyFB.tyBtnRetract.bValue==(unsigned long)(unsigned char)1))){
(eStopperAct=6);

if(((((signed long)((*(p_eStopperStat)))==(signed long)6))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=0);
(tyP0923Stopper.tyFB.tyBtnRetract.bValue=0);

}else if((((signed long)((*(p_eStopperStatus)))==(signed long)3))){
(tyP0923Stopper.tyFB.tyBtnRetract.bValue=0);

}

}else if((((unsigned long)(unsigned char)tyP0923Stopper.tyFB.tyBtnExtend.bValue==(unsigned long)(unsigned char)1))){
(eStopperAct=5);

if(((((signed long)((*(p_eStopperStat)))==(signed long)5))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=1);
(tyP0923Stopper.tyFB.tyBtnExtend.bValue=0);

}else if((((signed long)((*(p_eStopperStatus)))==(signed long)3))){
(tyP0923Stopper.tyFB.tyBtnExtend.bValue=0);

}
}


(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);
(tyP0923Stopper.tyDC.tyBtnRetract.bValue=((*(p_bStopperRetCtrl))));
(tyP0923Stopper.tyDC.tyBtnExtend.bValue=((*(p_bStopperExtCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0923Stopper.tyCom.tyBtnDCCtrl.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0923Stopper.tyCom.tyBtnDCCtrl.uiMaskRtStat)));
}

}

}imp157_end5_0:imp157_else0_0:imp157_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923FBStat.st"
static void __AS__Action__Act_OptP0923FBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0923Stopper.tyFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sStopperStatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923DCCtrl.st"
static void __AS__Action__Act_OptP0923DCCtrl(void){
{
if((((unsigned long)(unsigned char)tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)((*(p_bStopperTwoCtrlOut)))==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0923Stopper.tyDC.tyBtnRetract.bValue=1);
(tyP0923Stopper.tyDC.tyBtnExtend.bValue=0);

(eStopperAct=4);

if(((((signed long)((*(p_eStopperStat)))==(signed long)4))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=0);
(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0923Stopper.tyDC.tyBtnExtend.bValue=1);
(tyP0923Stopper.tyDC.tyBtnRetract.bValue=0);

(eStopperAct=3);

if(((((signed long)((*(p_eStopperStat)))==(signed long)3))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=1);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);
}
}

}else{

if(((((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnRetract.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnExtend.bValue==(unsigned long)(unsigned char)1)))){
(eStopperAct=1);

if(((((signed long)((*(p_eStopperStat)))==(signed long)1))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnRetract.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnExtend.bValue==(unsigned long)(unsigned char)0)))){
(eStopperAct=4);

if(((((signed long)((*(p_eStopperStat)))==(signed long)4))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=0);
(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnRetract.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0923Stopper.tyDC.tyBtnExtend.bValue==(unsigned long)(unsigned char)1)))){
(eStopperAct=3);

if(((((signed long)((*(p_eStopperStat)))==(signed long)3))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx=1);
(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);
}

}else{
(eStopperAct=2);

if(((((signed long)((*(p_eStopperStat)))==(signed long)2))&(((signed long)((*(p_eStopperStatus)))==(signed long)1)))){
(eStopperAct=0);

(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);
}

}

}

}

(tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl=0);
(tyP0923Stopper.tyFB.tyBtnExtend.bValue=0);
(tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl=0);
(tyP0923Stopper.tyFB.tyBtnRetract.bValue=0);



}

}imp156_else0_0:imp156_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0923/Act_OptP0923RstMnl.st"
static void __AS__Action__Act_OptP0923RstMnl(void){
{
if(((((signed long)((*(p_eStopperStatus)))==(signed long)3))&~Edge0016100000&1?((Edge0016100000=(((signed long)((*(p_eStopperStatus)))==(signed long)3))&1),1):((Edge0016100000=(((signed long)((*(p_eStopperStatus)))==(signed long)3))&1),0))){

(eStopperAct=0);

(tyP0923Stopper.tyDC.tyBtnRetract.bValue=0);
(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);

(tyP0923Stopper.tyDC.tyBtnExtend.bValue=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);

(tyP0923Stopper.tyFB.tyBtnRetract.bValue=0);
(tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl=0);

(tyP0923Stopper.tyFB.tyBtnExtend.bValue=0);
(tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl=0);

}


if(((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&~Edge0016100001&1?((Edge0016100001=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),1):((Edge0016100001=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),0))){
(tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0923Stopper.tyDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0923Stopper.tyFB.tyLyr.uiRtStat)));

(eStopperAct=0);

(tyP0923Stopper.tyDC.tyBtnRetract.bValue=0);
(tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl=0);

(tyP0923Stopper.tyDC.tyBtnExtend.bValue=0);
(tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl=0);

(tyP0923Stopper.tyFB.tyBtnRetract.bValue=0);
(tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl=0);

(tyP0923Stopper.tyFB.tyBtnExtend.bValue=0);
(tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl=0);

}

}imp161_else1_0:imp161_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_EntP0924Disp.st"
static void __AS__Action__Act_EntP0924Disp(void){
{

(p_tyC0003DualMask=((unsigned long)(&tyP0924ClampWithRS.tyDualMaskHide)));

(p_tyC0004Navi=((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr1)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0924ClampWithRS.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0924Clamp1WithRSCom=((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSCom)));
(p_tyP0924Clamp1WithRSDC=((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC)));
(p_tyP0924Clamp1WithRSFB=((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB)));
(p_tyP0924Clamp1WithRSDis=((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDis)));

(p_tyP0924Clamp2WithRSCom=((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSCom)));
(p_tyP0924Clamp2WithRSDC=((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC)));
(p_tyP0924Clamp2WithRSFB=((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB)));
(p_tyP0924Clamp2WithRSDis=((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDis)));

(p_tyP0924Clamp3WithRSCom=((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSCom)));
(p_tyP0924Clamp3WithRSDC=((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC)));
(p_tyP0924Clamp3WithRSFB=((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB)));
(p_tyP0924Clamp3WithRSDis=((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDis)));


(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyClamp1WithRSDis.tyLyr.uiRtStat))->bit0=((*(p_tyNtParamCurr)).bProjClampPrep));
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyClamp2WithRSDis.tyLyr.uiRtStat))->bit0=((*(p_tyNtParamCurr)).bProjClampPrep));
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyClamp3WithRSDis.tyLyr.uiRtStat))->bit0=((*(p_tyNtParamCurr)).bProjClampPrep));

fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr2.tyLyr.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSCom.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSCom.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSCom.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDis.tyLyr.uiRtStat)));


if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
}

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
}









}imp20_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Navi.st"
static void __AS__Action__Act_OptP0924Navi(void){
{
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyNaviLyr1.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyNaviLyr2.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP0924ClampWithRS.tyNaviLyr1.tyBtnBack.bRtCompl=0);
(tyP0924ClampWithRS.tyNaviLyr2.tyBtnBack.bRtCompl=0);

(eChgPage=920);

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyNaviLyr1.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyNaviLyr1.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP0924ClampWithRS.tyNaviLyr1.tyBtnLeft.bRtCompl=0);
(tyP0924ClampWithRS.tyNaviLyr1.tyBtnRgt.bRtCompl=0);

(p_tyC0004Navi=((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr2)));

fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr2.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSCom.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSCom.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSCom.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
}



}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyNaviLyr2.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyNaviLyr2.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP0924ClampWithRS.tyNaviLyr2.tyBtnLeft.bRtCompl=0);
(tyP0924ClampWithRS.tyNaviLyr2.tyBtnRgt.bRtCompl=0);

(p_tyC0004Navi=((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr1)));

fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyNaviLyr2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSCom.tyLyr.uiRtStat)));

fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSCom.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSCom.tyLyr.uiRtStat)));


if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
}

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
}




}



}imp179_end3_0:imp179_else0_2:imp179_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924DualMask.st"
static void __AS__Action__Act_OptP0924DualMask(void){
{
if((((signed long)eCurrPage==(signed long)924))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0924ClampWithRS.tyDualMaskEStop)));

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=0);
}else{
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=1);
}

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0924ClampWithRS.tyDualMaskCWSig)));

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=0);
}else{
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=1);
}

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0924ClampWithRS.tyDualMaskSafetyRly)));

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=0);
}else{
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=1);
}

}else if((((signed long)((*(p_eAWOpenStatus)))==(signed long)2))){
(p_tyC0003DualMask=((unsigned long)(&tyP0924ClampWithRS.tyDualMaskAWMovInterrupt)));

if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=0);
}else{
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat))->bit0=0);
(((_2byte_bit_field_*)(&tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat))->bit0=1);
}

}else{
(p_tyC0003DualMask=((unsigned long)(&tyP0924ClampWithRS.tyDualMaskHide)));

}

}

}imp178_end1_0:imp178_else0_0:imp178_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp1ChgLyr.st"
static void __AS__Action__Act_OptP0924Clamp1ChgLyr(void){
{
if(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bRtCompl){
(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));
}

}


}imp163_end1_0:imp163_else0_0:imp163_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp1Sen.st"
static void __AS__Action__Act_OptP0924Clamp1Sen(void){
{
(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnClampRS.bValue=((*(p_tyDI)).bClampRS1));
(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnUnClampRS.bValue=((*(p_tyDI)).bUnClampRS1));


if((((unsigned long)(unsigned char)((*(p_tyDI)).bClampRS1)==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBitmapMc.usiValueIdx=1);
}else{
(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBitmapMc.usiValueIdx=0);
}


}imp167_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp1FB.st"
static void __AS__Action__Act_OptP0924Clamp1FB(void){
{
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl=0);

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=1);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl=0);

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=1);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=0);
}

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue==(unsigned long)(unsigned char)1))){
(eClamp1Act=5);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)5))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=0);

}else if((((signed long)((*(p_eClamp1Status)))==(signed long)3))){
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue==(unsigned long)(unsigned char)1))){
(eClamp1Act=6);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)6))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=0);
}else if((((signed long)((*(p_eClamp1Status)))==(signed long)3))){
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=0);
}
}


(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue=((*(p_bClamp1ExtCtrl))));
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue=((*(p_bClamp1RetCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.uiMaskRtStat)));
}

}


}imp165_end5_0:imp165_else0_0:imp165_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp1FBStat.st"
static void __AS__Action__Act_OptP0924Clamp1FBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0924ClampWithRS.tyClamp1WithRSFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sClamp1StatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp1DC.st"
static void __AS__Action__Act_OptP0924Clamp1DC(void){
{
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bClamp1TwoCtrlOut)))==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue=1);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue=0);

(eClamp1Act=3);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)3))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue=1);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue=0);

(eClamp1Act=4);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)4))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
}
}

}else{
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1)))){
(eClamp1Act=1);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)1))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)0)))){
(eClamp1Act=3);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)3))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1)))){
(eClamp1Act=4);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)4))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
}

}else{
(eClamp1Act=2);

if(((((signed long)((*(p_eClamp1Stat)))==(signed long)2))&(((signed long)((*(p_eClamp1Status)))==(signed long)1)))){
(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
}

}
}
}

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=0);

}


}imp164_else0_0:imp164_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp2ChgLyr.st"
static void __AS__Action__Act_OptP0924Clamp2ChgLyr(void){
{
if(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bRtCompl){
(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));
}

}

}imp168_end1_0:imp168_else0_0:imp168_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp2Sen.st"
static void __AS__Action__Act_OptP0924Clamp2Sen(void){
{
(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnClampRS.bValue=((*(p_tyDI)).bClampRS2));
(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnUnClampRS.bValue=((*(p_tyDI)).bUnClampRS2));


if((((unsigned long)(unsigned char)((*(p_tyDI)).bClampRS2)==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBitmapMc.usiValueIdx=1);
}else{
(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBitmapMc.usiValueIdx=0);
}


}imp172_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp2FB.st"
static void __AS__Action__Act_OptP0924Clamp2FB(void){
{
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl=0);

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=1);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl=0);

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=1);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=0);
}

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue==(unsigned long)(unsigned char)1))){
(eClamp2Act=5);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)5))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=0);

}else if((((signed long)((*(p_eClamp2Status)))==(signed long)3))){
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue==(unsigned long)(unsigned char)1))){
(eClamp2Act=6);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)6))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=0);
}else if((((signed long)((*(p_eClamp2Status)))==(signed long)3))){
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=0);
}
}


(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue=((*(p_bClamp2ExtCtrl))));
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue=((*(p_bClamp2RetCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.uiMaskRtStat)));
}

}


}imp170_end5_0:imp170_else0_0:imp170_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp2FBStat.st"
static void __AS__Action__Act_OptP0924Clamp2FBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0924ClampWithRS.tyClamp2WithRSFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sClamp2StatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp2DC.st"
static void __AS__Action__Act_OptP0924Clamp2DC(void){
{
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bClamp1TwoCtrlOut)))==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue=1);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue=0);

(eClamp2Act=3);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)3))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue=1);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue=0);

(eClamp2Act=4);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)4))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
}
}

}else{
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1)))){
(eClamp2Act=1);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)1))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)0)))){
(eClamp2Act=3);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)3))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1)))){
(eClamp2Act=4);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)4))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
}

}else{
(eClamp2Act=2);

if(((((signed long)((*(p_eClamp2Stat)))==(signed long)2))&(((signed long)((*(p_eClamp2Status)))==(signed long)1)))){
(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
}

}
}
}

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=0);

}


}imp169_else0_0:imp169_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp3ChgLyr.st"
static void __AS__Action__Act_OptP0924Clamp3ChgLyr(void){
{
if(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bRtCompl){
(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
}

}


}imp173_end1_0:imp173_else0_0:imp173_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp3Sen.st"
static void __AS__Action__Act_OptP0924Clamp3Sen(void){
{
(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnClampRS.bValue=((*(p_tyDI)).bClampRS3));
(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnUnClampRS.bValue=((*(p_tyDI)).bUnClampRS3));


if((((unsigned long)(unsigned char)((*(p_tyDI)).bClampRS3)==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBitmapMc.usiValueIdx=1);
}else{
(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBitmapMc.usiValueIdx=0);
}


}imp177_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp3FB.st"
static void __AS__Action__Act_OptP0924Clamp3FB(void){
{
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl=0);

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=1);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=0);

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl=0);

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=1);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=0);
}

if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue==(unsigned long)(unsigned char)1))){
(eClamp3Act=5);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)5))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=0);

}else if((((signed long)((*(p_eClamp3Status)))==(signed long)3))){
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=0);
}

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue==(unsigned long)(unsigned char)1))){
(eClamp3Act=6);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)6))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=0);
}else if((((signed long)((*(p_eClamp3Status)))==(signed long)3))){
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=0);
}
}


(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue=((*(p_bClamp3ExtCtrl))));
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue=((*(p_bClamp3RetCtrl))));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.uiMaskRtStat)));
}

}


}imp175_end5_0:imp175_else0_0:imp175_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp3FBStat.st"
static void __AS__Action__Act_OptP0924Clamp3FBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0924ClampWithRS.tyClamp3WithRSFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sClamp3StatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924Clamp3DC.st"
static void __AS__Action__Act_OptP0924Clamp3DC(void){
{if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bClamp3TwoCtrlOut)))==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue=1);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue=0);

(eClamp3Act=3);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)3))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue=1);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue=0);

(eClamp3Act=4);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)4))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
}
}

}else{
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1)))){
(eClamp3Act=1);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)1))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)0)))){
(eClamp3Act=3);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)3))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
}

}else if(((((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue==(unsigned long)(unsigned char)1)))){
(eClamp3Act=4);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)4))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
}

}else{
(eClamp3Act=2);

if(((((signed long)((*(p_eClamp3Stat)))==(signed long)2))&(((signed long)((*(p_eClamp3Status)))==(signed long)1)))){
(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
}

}
}
}

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=0);

}



}imp174_else0_0:imp174_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0924/Act_OptP0924RstMnl.st"
static void __AS__Action__Act_OptP0924RstMnl(void){
{
if(((((signed long)((*(p_eClamp1Status)))==(signed long)3))&~Edge0018000000&1?((Edge0018000000=(((signed long)((*(p_eClamp1Status)))==(signed long)3))&1),1):((Edge0018000000=(((signed long)((*(p_eClamp1Status)))==(signed long)3))&1),0))){

(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue=1);

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=0);

}

if(((((signed long)((*(p_eClamp2Status)))==(signed long)3))&~Edge0018000001&1?((Edge0018000001=(((signed long)((*(p_eClamp2Status)))==(signed long)3))&1),1):((Edge0018000001=(((signed long)((*(p_eClamp2Status)))==(signed long)3))&1),0))){

(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue=0);

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=0);

}

if(((((signed long)((*(p_eClamp3Status)))==(signed long)3))&~Edge0018000002&1?((Edge0018000002=(((signed long)((*(p_eClamp3Status)))==(signed long)3))&1),1):((Edge0018000002=(((signed long)((*(p_eClamp3Status)))==(signed long)3))&1),0))){

(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue=0);

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=0);

}

if(((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&~Edge0018000003&1?((Edge0018000003=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),1):((Edge0018000003=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),0))){

(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue=0);
(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue=0);
(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue=0);

if((((unsigned long)(unsigned char)bUIManualMod==(unsigned long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat)));

fUIInRtStatHide(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat)));
}

(eClamp1Act=0);

(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue=1);

(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue=0);

(eClamp2Act=0);

(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue=0);

(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue=0);

(eClamp3Act=0);

(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue=0);

(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl=0);
(tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue=0);

}
}imp180_else3_0:imp180_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_EntP0931Disp.st"
static void __AS__Action__Act_EntP0931Disp(void){
{

(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskHide)));

(p_tyC0004Navi=((unsigned long)(&tyP0931ConvInv.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0931ConvInv.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0931ConvCom=((unsigned long)(&tyP0931ConvInv.tyConvCom)));

(p_tyP0931ConvDC=((unsigned long)(&tyP0931ConvInv.tyConvDC)));

(p_tyP0931ConvFB=((unsigned long)(&tyP0931ConvInv.tyConvFB)));

(p_tyP0931InvCom=((unsigned long)(&tyP0931ConvInv.tyInvCom)));

(p_tyP0931InvDC=((unsigned long)(&tyP0931ConvInv.tyInvDC)));

(p_tyP0931InvFB=((unsigned long)(&tyP0931ConvInv.tyInvFB)));


if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat)));
}

if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat)));
}


(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=0);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931DualMask.st"
static void __AS__Action__Act_OptP0931DualMask(void){
{
if((((signed long)eCurrPage==(signed long)931))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskEStop)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskCWSig)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskSafetyRly)));

}else if((((*(p_tyNtParamCurr)).bProjInletShutPrep)&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bInShutterDis)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyDI)).bInShutterCloseRS)==(unsigned long)(unsigned char)0)))){
if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)2))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskInletNInvalid)));
}else{
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskInletShutterInterrupt)));
}
}else if((((*(p_tyNtParamCurr)).bProjOutletShutPrep)&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bOutShutterDis)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyDI)).bOutShutterCloseRS)==(unsigned long)(unsigned char)0)))){
if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)2))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskOutletNInvalid)));
}else{
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskOutletShutterInterrupt)));
}

}else if(((((*(p_tyDI)).bInvertHomeSen)&((*(p_tyDI)).bConvLftSen))|(((*(p_tyDI)).bInvertRemoteSen)&((*(p_tyDI)).bConvRgtSen)))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskInvertInterrupt)));

}

else if(((((*(p_tyDI)).bInvertHomeSen)&((*(p_tyDI)).bConvRgtSen)&(((unsigned long)(unsigned char)((*(p_bStopperExtended)))==(unsigned long)(unsigned char)0)))|(((*(p_tyDI)).bInvertRemoteSen)&((*(p_tyDI)).bConvLftSen)&(((unsigned long)(unsigned char)((*(p_bStopperExtended)))==(unsigned long)(unsigned char)0))))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskStopperInterruptInv)));

}else if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)2))){
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskInvalidPos)));

}else{
(p_tyC0003DualMask=((unsigned long)(&tyP0931ConvInv.tyDualMaskHide)));

}

}

}imp185_end1_0:imp185_else0_0:imp185_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931Navi.st"
static void __AS__Action__Act_OptP0931Navi(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP0931ConvInv.tyNaviBack.tyBtnBack.bValue=0);

(eChgPage=920);

}

}imp191_else0_0:imp191_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931Sen.st"
static void __AS__Action__Act_OptP0931Sen(void){
{
(tyP0931ConvInv.tyConvCom.tyBtnLft.bValue=((*(p_tyDI)).bConvLftSen));
(tyP0931ConvInv.tyConvCom.tyBtnRgt.bValue=((*(p_tyDI)).bConvRgtSen));

(tyP0931ConvInv.tyInvCom.tyBtnHomeSen.bValue=((*(p_tyDI)).bInvertHomeSen));
(tyP0931ConvInv.tyInvCom.tyBtnRemoteSen.bValue=((*(p_tyDI)).bInvertRemoteSen));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931ConvChgLyr.st"
static void __AS__Action__Act_OptP0931ConvChgLyr(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat)));
}

}imp181_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931ConvFB.st"
static void __AS__Action__Act_OptP0931ConvFB(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl==(unsigned long)(unsigned char)1))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStat)))==(signed long)45))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);


fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));
}

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk=1);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=0);



if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)0))){

switch(usiConvStep){
case 0:{
(eConvAct=8);

if(((((signed long)((*(p_eConvStat)))==(signed long)8))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(usiConvStep=1);
}

}break;case 1:{
(eConvAct=11);

if(((((signed long)((*(p_eConvStat)))==(signed long)11))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(usiConvStep=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);

}

}break;}

}else if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)1))){

(eConvAct=7);

if(((((signed long)((*(p_eConvStat)))==(signed long)7))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);

}

}

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyConvFB.tyBtnExit.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk=1);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=0);

(eConvAct=17);

if(((((signed long)((*(p_eConvStat)))==(signed long)17))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl=0);

(tyP0931ConvInv.tyConvFB.tyBtnExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);

}

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk=1);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=0);

(eConvAct=15);

if(((((signed long)((*(p_eConvStat)))==(signed long)15))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl=0);

(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk=0);

(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);

}

}


if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

if(((((signed long)((*(p_eConvStatus)))==(signed long)3))|(((*(p_tyDI)).bSafetyRlySig)^1))){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));

}else{

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));

if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
}

}

}else{

if(((((signed long)((*(p_eConvStatus)))==(signed long)3))|(((*(p_tyDI)).bSafetyRlySig)^1))){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

}else{

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)0))){
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat)));
}

}

}

}imp183_end13_0:imp183_end12_0:imp183_end9_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931ConvFBStat.st"
static void __AS__Action__Act_OptP0931ConvFBStat(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0931ConvInv.tyConvFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sConvStatTxt))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931ConvDC.st"
static void __AS__Action__Act_OptP0931ConvDC(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyConvDC.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk=1);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk=0);

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

(eConvAct=45);

if(((((signed long)((*(p_eConvStat)))==(signed long)45))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl=0);
}

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue=1);
(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk=1);

(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk=0);

(tyP0931ConvInv.tyConvDC.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk=0);

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)0))){

(eConvAct=50);

if(((((signed long)((*(p_eConvStat)))==(signed long)50))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl=0);
}

}else{
(eConvAct=49);

if(((((signed long)((*(p_eConvStat)))==(signed long)49))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl=0);
}
}
}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue=1);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk=1);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk=0);

(tyP0931ConvInv.tyConvDC.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk=0);

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat)));

if((((signed long)((*(p_eOpsInvertCurrPos)))==(signed long)0))){
(eConvAct=49);

if(((((signed long)((*(p_eConvStat)))==(signed long)49))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl=0);
}

}else{
(eConvAct=50);

if(((((signed long)((*(p_eConvStat)))==(signed long)50))&(((signed long)((*(p_eConvStatus)))==(signed long)1)))){
(eConvAct=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl=0);
}
}
}

}imp182_else7_0:imp182_end7_0:imp182_end5_0:imp182_else0_2:imp182_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931InvChgLyr.st"
static void __AS__Action__Act_OptP0931InvChgLyr(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat)));
}

}imp186_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931InvUpdtData.st"
static void __AS__Action__Act_OptP0931InvUpdtData(void){
{

if(((*(p_tyDI)).bInvertHomeSen)){
if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx=100);
}
}else{
(tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx=0);
}
}else{
if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
(tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx=201);
}else{
(tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx=101);
}
}else{
(tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx=1);
}
}

}imp190_end3_0:imp190_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931InvDC.st"
static void __AS__Action__Act_OptP0931InvDC(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue==(unsigned long)(unsigned char)1))){
(eInvertAct=12);

if(((((signed long)((*(p_eInvertStat)))==(signed long)12))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl=0);

}

}else{
(eInvertAct=15);

if(((((signed long)((*(p_eInvertStat)))==(signed long)15))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl=0);

}


}

}


if(((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCW.bValue==(unsigned long)(unsigned char)1))&~Edge0018700000&1?((Edge0018700000=(((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCW.bValue==(unsigned long)(unsigned char)1))&1),1):((Edge0018700000=(((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCW.bValue==(unsigned long)(unsigned char)1))&1),0))){
(eInvertAct=10);

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl==(unsigned long)(unsigned char)1))){
(eInvertAct=13);

if(((((signed long)((*(p_eInvertStat)))==(signed long)13))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl=0);
}
}

if(((((signed long)((*(p_eInvertStat)))==(signed long)10))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);
}




if(((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue==(unsigned long)(unsigned char)1))&~Edge0018700001&1?((Edge0018700001=(((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue==(unsigned long)(unsigned char)1))&1),1):((Edge0018700001=(((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue==(unsigned long)(unsigned char)1))&1),0))){
(eInvertAct=11);

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl==(unsigned long)(unsigned char)1))){
(eInvertAct=14);

if(((((signed long)((*(p_eInvertStat)))==(signed long)14))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl=0);
}
}

if(((((signed long)((*(p_eInvertStat)))==(signed long)11))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);
}



if(tyP0931ConvInv.tyInvDC.tyBtnCW.bValue){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat)));
}

if(tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat)));
}


if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue==(unsigned long)(unsigned char)0))){
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat)));
}


}imp187_end12_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931InvFB.st"
static void __AS__Action__Act_OptP0931InvFB(void){
{
if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl==(unsigned long)(unsigned char)1))){
(eInvertAct=9);

if(((((signed long)((*(p_eInvertStat)))==(signed long)9))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk=0);

(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk=0);

(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=0);

(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=1);

}

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyInvFB.tyBtnCW.bValue=1);
(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk=1);

(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=0);



(eInvertAct=1);

if(((((signed long)((*(p_eInvertStat)))==(signed long)1))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl=0);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk=0);

(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=0);

(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=1);

}


}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue=1);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk=1);

(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=0);



(eInvertAct=2);

if(((((signed long)((*(p_eInvertStat)))==(signed long)2))&(((signed long)((*(p_eInvertStatus)))==(signed long)1)))){
(eInvertAct=0);

(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl=0);

(tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk=0);

(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=0);

(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=1);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=1);

}

}


(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat))->bit0=(((((signed long)((*(p_eInvertStatus)))==(signed long)3))|tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl)^1));
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat))->bit0=(((((signed long)((*(p_eInvertStatus)))==(signed long)3))|tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl)^1));

if(((*(p_tyUsrMgmtCurrAccessRgt)).bManualFBOnly)){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat)));

if(((((signed long)((*(p_eInvertStatus)))==(signed long)3))|(((*(p_tyDI)).bSafetyRlySig)^1))){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));

}else{

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));

}

}else{

if(((((signed long)((*(p_eInvertStatus)))==(signed long)3))|(((*(p_tyDI)).bSafetyRlySig)^1))){

fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat)));

}else{

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat)));

}


}


}imp188_end6_0:imp188_end4_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931InvFBStat.st"
static void __AS__Action__Act_OptP0931InvFBStat(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0931ConvInv.tyInvFB.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sInvertStatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};



}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0931/Act_OptP0931RstMnl.st"
static void __AS__Action__Act_OptP0931RstMnl(void){
{

if(((((signed long)((*(p_eConvStatus)))==(signed long)3))&~Edge0019200000&1?((Edge0019200000=(((signed long)((*(p_eConvStatus)))==(signed long)3))&1),1):((Edge0019200000=(((signed long)((*(p_eConvStatus)))==(signed long)3))&1),0))){

(eConvAct=0);

(usiConvStep=0);


(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);


(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bValue=1);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);

}

if(((((signed long)((*(p_eInvertStatus)))==(signed long)3))&~Edge0019200001&1?((Edge0019200001=(((signed long)((*(p_eInvertStatus)))==(signed long)3))&1),1):((Edge0019200001=(((signed long)((*(p_eInvertStatus)))==(signed long)3))&1),0))){

(eInvertAct=0);


(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl=0);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=1);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);


(tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl=0);
(tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl=0);
(tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl=0);

(tyP0931ConvInv.tyInvDC.tyBtnCW.bValue=0);
(tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue=0);
(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=1);

(tyP0931ConvInv.tyInvDC.tyBtnCW.bRtLk=0);
(tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtLk=0);
(tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvDC.tyBtnBrake.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);

}

if(((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&~Edge0019200002&1?((Edge0019200002=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),1):((Edge0019200002=(((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))&1),0))){
(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat)));

(tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat)));

(eConvAct=0);

(usiConvStep=0);


(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl=0);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bValue=1);

(tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk=0);
(tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk=0);
(tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk=0);
(tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);


(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl=0);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bValue=1);

(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk=0);
(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk=0);
(tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);

(eInvertAct=0);


(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl=0);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bValue=1);

(tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk=0);
(tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk=0);
(tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);


(tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl=0);
(tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl=0);
(tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl=0);

(tyP0931ConvInv.tyInvDC.tyBtnCW.bValue=0);
(tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue=0);
(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=1);

(tyP0931ConvInv.tyInvDC.tyBtnCW.bRtLk=0);
(tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtLk=0);
(tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtLk=1);

(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvDC.tyBtnBrake.uiMaskRtStat))->bit0=1);
(((_2byte_bit_field_*)(&tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat))->bit0=1);

}

}imp192_else2_0:imp192_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_EntP0934Disp.st"
static void __AS__Action__Act_EntP0934Disp(void){
{

(p_tyC0001MotionStd=((unsigned long)(&tyP0934AW.tyMotionStd)));

(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskHide)));

(p_tyC0004Navi=((unsigned long)(&tyP0934AW.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0934AW.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0934AW=((unsigned long)(&tyP0934AW.tyAW)));


(tyP0934AW.tyAW.tyNumNewWidth.diValue=((*(p_tyProdRcpCurrRcp0)).diWidthInUM));

(tyP0934AW.tyMotionStd.tyBtnPwr.bValue=((*(p_bAWOpenPwrOn))));

(fbLmtRstTm.IN=0);;TON(&fbLmtRstTm);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934FullMask.st"
static void __AS__Action__Act_OptP0934FullMask(void){
{
if((((signed long)eCurrPage==(signed long)934))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskEStop)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskCWSig)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskSafetyRly)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bConvLftSen)==(unsigned long)(unsigned char)1))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskLftSenInterrupt)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bConvRgtSen)==(unsigned long)(unsigned char)1))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskRgtSenInterrupt)));

}else if((((*(p_tyNtParamCurr)).bProjInletShutPrep)&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bInShutterDis)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyDI)).bInShutterCloseRS)==(unsigned long)(unsigned char)0)))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskInletShutterInterrupt)));

}else if((((*(p_tyNtParamCurr)).bProjOutletShutPrep)&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bOutShutterDis)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyDI)).bOutShutterCloseRS)==(unsigned long)(unsigned char)0)))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskOutletShutterInterrupt)));

}else if(((((unsigned long)(unsigned char)((*(p_tyDI)).bInvertHomeSen)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyDI)).bInvertRemoteSen)==(unsigned long)(unsigned char)0)))){
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskHomeSenInterrupt)));

}else{
(p_tyC0002FullMask=((unsigned long)(&tyP0934AW.tyFullMaskHide)));

}

}

}imp196_end1_0:imp196_else0_0:imp196_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934Navi.st"
static void __AS__Action__Act_OptP0934Navi(void){
{
if((((unsigned long)(unsigned char)tyP0934AW.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP0934AW.tyNaviBack.tyBtnBack.bValue=0);

(eChgPage=920);

}

}imp199_else0_0:imp199_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934FB.st"
static void __AS__Action__Act_OptP0934FB(void){
{
(fbJogSlowToFastDlyTm.PT=2000);
TON(&fbJogSlowToFastDlyTm);
TON(&fbLmtRstTm);



if((((((*(p_bAWOpenFwdLmtSen)))|((*(p_bAWOpenRevLmtSen)))|(((unsigned long)((*(p_udiAWOpenAxisErrID)))==(unsigned long)21570))|(((unsigned long)((*(p_udiAWOpenAxisErrID)))==(unsigned long)21571)))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)0)))&~Edge0019400000&1?((Edge0019400000=((((*(p_bAWOpenFwdLmtSen)))|((*(p_bAWOpenRevLmtSen)))|(((unsigned long)((*(p_udiAWOpenAxisErrID)))==(unsigned long)21570))|(((unsigned long)((*(p_udiAWOpenAxisErrID)))==(unsigned long)21571)))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)0)))&1),1):((Edge0019400000=((((*(p_bAWOpenFwdLmtSen)))|((*(p_bAWOpenRevLmtSen)))|(((unsigned long)((*(p_udiAWOpenAxisErrID)))==(unsigned long)21570))|(((unsigned long)((*(p_udiAWOpenAxisErrID)))==(unsigned long)21571)))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)0)))&1),0))){

(fbLmtRstTm.IN=1);

}

if((((unsigned long)(unsigned char)fbLmtRstTm.Q==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyMotionStd.tyBtnRst.bRtCompl=1);
}

if((((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)0)))&(((unsigned long)(unsigned char)((*(p_bAWOpenJogging)))==(unsigned long)(unsigned char)1)))){
(bJogStopAW=1);
}

if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnStop.bRtCompl==(unsigned long)(unsigned char)1))){
(eAWOpenAct=12);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)12))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnStop.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl=0);
(tyP0934AW.tyAW.tyBtnGo.bRtCompl=0);

(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bValue=0);
(tyP0934AW.tyAW.tyBtnGo.bValue=0);

(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtLk=0);
(tyP0934AW.tyAW.tyBtnGo.bRtLk=0);
}

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bJogStopAW==(unsigned long)(unsigned char)1)))){
(bJogSlow=0);
(bJogFast=0);
(fbJogSlowToFastDlyTm.IN=0);

(eAWOpenAct=10);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)10))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(bJogStopAW=0);

(tyP0934AW.tyMotionStd.tyBtnStop.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl=0);
(tyP0934AW.tyAW.tyBtnGo.bRtCompl=0);

(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bValue=0);
(tyP0934AW.tyAW.tyBtnGo.bValue=0);

(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtLk=0);
(tyP0934AW.tyAW.tyBtnGo.bRtLk=0);
}

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyMotionStd.tyBtnPwr.bRtLk=1);

if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnPwr.bValue==(unsigned long)(unsigned char)1))){
(eAWOpenAct=3);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)3))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnPwr.bRtLk=0);
}
}else{
(eAWOpenAct=4);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)4))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnPwr.bRtLk=0);
}
}

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyMotionStd.tyBtnOrigin.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);

(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(eAWOpenAct=5);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)5))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);

(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
}

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnRst.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyMotionStd.tyBtnRst.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnRst.bRtLk=1);

(eAWOpenAct=11);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)11))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnRst.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnRst.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnRst.bRtLk=0);

(fbLmtRstTm.IN=0);
}

}else if((((unsigned long)(unsigned char)tyP0934AW.tyAW.tyBtnGo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyAW.tyBtnGo.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);

(tyP0934AW.tyAW.tyBtnGo.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(diMnlAWGoWidth=tyP0934AW.tyAW.tyNumNewWidth.diValue);
(diMnlAWNomSpd=tyP0934AW.tyMotionStd.tyNumNomSpd.diValue);

(eAWOpenAct=1);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)1))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyAW.tyBtnGo.bRtCompl=0);
(tyP0934AW.tyAW.tyBtnGo.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);

(tyP0934AW.tyAW.tyBtnGo.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
}

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);

(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(diMnlAWTargetPos=tyP0934AW.tyMotionStd.tyNumTargetPos.diValue);
(diMnlAWNomSpd=tyP0934AW.tyMotionStd.tyNumNomSpd.diValue);

(eAWOpenAct=6);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)6))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);

(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
}

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0934AW.tyMotionStd.tyBtnMovRel.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);

(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(diMnlAWStepSize=tyP0934AW.tyMotionStd.tyNumStepSize.diValue);
(diMnlAWNomSpd=tyP0934AW.tyMotionStd.tyNumNomSpd.diValue);

(eAWOpenAct=7);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)7))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);

(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);

(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
}

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbJogSlowToFastDlyTm.Q==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bJogSlow==(unsigned long)(unsigned char)0)))){
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(fbJogSlowToFastDlyTm.IN=1);

(diMnlAWJogSpd=tyP0934AW.tyMotionStd.tyNumSlwSpd.diValue);

(eAWOpenAct=8);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)8))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);
(bJogSlow=1);
}else if((((signed long)((*(p_eAWOpenStatus)))==(signed long)3))){
(fbJogSlowToFastDlyTm.IN=0);
(bJogSlow=1);
}

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbJogSlowToFastDlyTm.Q==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bJogFast==(unsigned long)(unsigned char)0)))){
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(fbJogSlowToFastDlyTm.IN=1);

(diMnlAWJogSpd=tyP0934AW.tyMotionStd.tyNumNomSpd.diValue);

(eAWOpenAct=8);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)8))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);
(bJogFast=1);
}else if((((signed long)((*(p_eAWOpenStatus)))==(signed long)3))){
(fbJogSlowToFastDlyTm.IN=0);
(bJogFast=1);
}

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbJogSlowToFastDlyTm.Q==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bJogSlow==(unsigned long)(unsigned char)0)))){
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(fbJogSlowToFastDlyTm.IN=1);

(diMnlAWJogSpd=tyP0934AW.tyMotionStd.tyNumSlwSpd.diValue);

(eAWOpenAct=9);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)9))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);
(bJogSlow=1);
}else if((((signed long)((*(p_eAWOpenStatus)))==(signed long)3))){
(fbJogSlowToFastDlyTm.IN=0);
(bJogSlow=1);
}

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbJogSlowToFastDlyTm.Q==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bJogFast==(unsigned long)(unsigned char)0)))){
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=0);

(fbJogSlowToFastDlyTm.IN=1);

(diMnlAWJogSpd=tyP0934AW.tyMotionStd.tyNumNomSpd.diValue);

(eAWOpenAct=9);

if(((((signed long)((*(p_eAWOpenStat)))==(signed long)9))&(((signed long)((*(p_eAWOpenStatus)))==(signed long)1)))){
(eAWOpenAct=0);
(bJogFast=1);
}else if((((signed long)((*(p_eAWOpenStatus)))==(signed long)3))){
(fbJogSlowToFastDlyTm.IN=0);
(bJogFast=1);
}

}

}imp194_else17_1:imp194_end17_0:imp194_else3_11:imp194_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934FBStat.st"
static void __AS__Action__Act_OptP0934FBStat(void){
{
if((((unsigned long)(unsigned char)((*(p_bAWOpenAxisErr)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0934AW.tyMotionStd.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sAWOpenAxisErrTxt))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
if(((((*(p_bAWOpenJogging)))&(((signed long)((*(p_eAWOpenStat)))==(signed long)0)))^1)){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0934AW.tyMotionStd.tyStringStat.sValue; plcstring* zzRValue=(plcstring*)((*(p_sAWOpenStatTxt))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}

}imp195_else1_0:imp195_end1_0:imp195_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934Mask.st"
static void __AS__Action__Act_OptP0934Mask(void){
{

if(((((unsigned long)(unsigned char)((*(p_bAWOpenAxisErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAWOpenPwrOn)))==(unsigned long)(unsigned char)0)))){
(tyP0934AW.tyMotionStd.tyBtnPwr.bValue=0);

fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnPwr.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnPwr.uiMaskRtStat)));
}


if(((((unsigned long)(unsigned char)((*(p_bAWOpenAxisErr)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAWOpenPwrOn)))==(unsigned long)(unsigned char)0)))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
}


if(((((unsigned long)(unsigned char)((*(p_bAWOpenAxisErr)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bAWOpenPwrOn)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bAWOpenIsHomed)))==(unsigned long)(unsigned char)0)))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
}


if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnOpenLmtSen.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
}

if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnCloseLmtSen.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
}


if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue==(unsigned long)(unsigned char)1)))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));

}else if(((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnJogClose.bValue==(unsigned long)(unsigned char)1)))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)tyP0934AW.tyAW.tyBtnGo.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat)));

}


if((((unsigned long)(unsigned char)tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnRst.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP0934AW.tyMotionStd.tyBtnRst.uiMaskRtStat)));
}

}imp198_end6_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934UpdtDat.st"
static void __AS__Action__Act_OptP0934UpdtDat(void){
{
(tyP0934AW.tyMotionStd.tyNumCurrPos.diValue=((*(p_diAWOpenActualPos))));
(tyP0934AW.tyMotionStd.tyNumErrCode.diValue=(signed long)((*(p_udiAWOpenAxisErrID))));
(tyP0934AW.tyMotionStd.tyBitmapPwr.usiValueIdx=(unsigned char)(((*(p_bAWOpenPwrOn)))&1));
(tyP0934AW.tyMotionStd.tyBitmapRst.usiValueIdx=(unsigned char)((((*(p_bAWOpenAxisErr))^1))&1));
(tyP0934AW.tyMotionStd.tyBitmapOrigin.usiValueIdx=(unsigned char)(((*(p_bAWOpenIsHomed)))&1));

(tyP0934AW.tyMotionStd.tyBtnOpenLmtSen.bValue=((*(p_bAWOpenOpenSen))));
(tyP0934AW.tyMotionStd.tyBtnCloseLmtSen.bValue=((*(p_bAWOpenCloseSen))));


if(((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLGreen)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLAmber)!=(signed long)0))|(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diTLRed)!=(signed long)0)))){
if((((signed long)((*(p_tyNtParamCurr)).eTLBuzMode)==(signed long)2))){
if((((unsigned long)(unsigned char)((*(p_bAWOpenIsHomed)))==(unsigned long)(unsigned char)1))){
if((((signed long)((*(p_diAWOpenActualPos)))<=(signed long)(((signed long)(((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax)))/((signed long)(2)))))){
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=200);
}else{
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=201);
}
}else{
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=200);
}
}else{
if((((unsigned long)(unsigned char)((*(p_bAWOpenIsHomed)))==(unsigned long)(unsigned char)1))){
if((((signed long)((*(p_diAWOpenActualPos)))<=(signed long)(((signed long)(((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax)))/((signed long)(2)))))){
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=100);
}else{
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=101);
}
}else{
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=100);
}
}
}else{
if((((unsigned long)(unsigned char)((*(p_bAWOpenIsHomed)))==(unsigned long)(unsigned char)1))){
if((((signed long)((*(p_diAWOpenActualPos)))<=(signed long)(((signed long)(((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax)))/((signed long)(2)))))){
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=0);
}else{
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=1);
}
}else{
(tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx=0);
}
}


}imp201_end6_0:imp201_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934Keypad.st"
static void __AS__Action__Act_OptP0934Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0934AW.tyAW.tyNumNewWidth.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0934AW.tyAW.tyNumNewWidth.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0934AW.tyMotionStd.tyNumTargetPos.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0934AW.tyMotionStd.tyNumTargetPos.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0934AW.tyMotionStd.tyNumStepSize.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0934AW.tyMotionStd.tyNumStepSize.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0934AW.tyMotionStd.tyNumNomSpd.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0934AW.tyMotionStd.tyNumNomSpd.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP0934AW.tyMotionStd.tyNumSlwSpd.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP0934AW.tyMotionStd.tyNumSlwSpd.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp197_else0_4:imp197_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0934/Act_OptP0934RstMnl.st"
static void __AS__Action__Act_OptP0934RstMnl(void){
{
if((((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))|(((signed long)((*(p_eAWOpenStatus)))==(signed long)3)))&~Edge0020000000&1?((Edge0020000000=((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))|(((signed long)((*(p_eAWOpenStatus)))==(signed long)3)))&1),1):((Edge0020000000=((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))|(((signed long)((*(p_eAWOpenStatus)))==(signed long)3)))&1),0))){

(eAWOpenAct=0);

(bJogSlow=0);
(bJogFast=0);
(fbJogSlowToFastDlyTm.IN=0);

(tyP0934AW.tyAW.tyBtnGo.bRtCompl=0);
(tyP0934AW.tyAW.tyBtnGo.bValue=0);
(tyP0934AW.tyAW.tyBtnGo.bRtLk=0);
(((_2byte_bit_field_*)(&tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat))->bit0=0);

(tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnRst.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl=0);

(tyP0934AW.tyMotionStd.tyBtnPwr.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bValue=1);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnRst.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bValue=0);

(tyP0934AW.tyMotionStd.tyBtnPwr.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnStop.bRtLk=1);
(tyP0934AW.tyMotionStd.tyBtnOrigin.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnRst.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtLk=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.bRtLk=0);

(tyP0934AW.tyMotionStd.tyBtnPwr.uiMaskRtStat=1);
(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat=0);
(tyP0934AW.tyMotionStd.tyBtnRst.uiMaskRtStat=1);
(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat=0);
(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat=0);
(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat=0);
(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat=0);

}

}imp200_else0_0:imp200_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0940/Act_EntP0940Disp.st"
static void __AS__Action__Act_EntP0940Disp(void){
{

(p_tyC0002FullMask=((unsigned long)(&tyP0940CommCtrl.tyFullMaskHide)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0940CommCtrl.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP0940CommCtrlUSSMEMA=((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA)));

(p_tyP0940CommCtrlDSSMEMA=((unsigned long)(&tyP0940CommCtrl.tyDSSMEMA)));

(p_tyP0940CommCtrlUSSMEMA2=((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA2)));


fUIInRtStatOff(((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA.tyLyr.uiRtStat)));

if((((signed long)((*(p_tyMcParamCurr)).tyUSCommSMEMA.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.uiRtStat)));

if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).tyUSCommSMEMA.bStatSigSetGd)==(unsigned long)(unsigned char)1))){
(tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.usiTxtIdx=1);
}else{
(tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.usiTxtIdx=2);
}
}else{
fUIInRtStatHide(((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.uiRtStat)));
}


fUIInRtStatOff(((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA2.tyLyr.uiRtStat)));

if((((signed long)((*(p_tyMcParamCurr)).tyUSCommSMEMA2.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.uiRtStat)));

if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).tyUSCommSMEMA2.bStatSigSetGd)==(unsigned long)(unsigned char)1))){
(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.usiTxtIdx=1);
}else{
(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.usiTxtIdx=2);
}
}else{
fUIInRtStatHide(((unsigned long)(&tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.uiRtStat)));
}


fUIInRtStatOff(((unsigned long)(&tyP0940CommCtrl.tyDSSMEMA.tyLyr.uiRtStat)));

if((((signed long)((*(p_tyMcParamCurr)).tyDSCommSMEMA.eSelection)==(signed long)2))){
fUIInRtStatOff(((unsigned long)(&tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.uiRtStat)));

if((((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).tyDSCommSMEMA.bStatSigSetGd)==(unsigned long)(unsigned char)1))){
(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.usiTxtIdx=1);
}else{
(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.usiTxtIdx=2);
}
}else{
fUIInRtStatHide(((unsigned long)(&tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.uiRtStat)));
}

}imp23_end4_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0940/Act_OptP0940FullMask.st"
static void __AS__Action__Act_OptP0940FullMask(void){
{
if((((signed long)eCurrPage==(signed long)940))){

if((((unsigned long)(unsigned char)((*(p_tyDI)).bEStopSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0940CommCtrl.tyFullMaskEStop)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0940CommCtrl.tyFullMaskCWSig)));

}else if((((unsigned long)(unsigned char)((*(p_tyDI)).bSafetyRlySig)==(unsigned long)(unsigned char)0))){
(p_tyC0002FullMask=((unsigned long)(&tyP0940CommCtrl.tyFullMaskSafetyRly)));

}else{
(p_tyC0002FullMask=((unsigned long)(&tyP0940CommCtrl.tyFullMaskHide)));

}

}

}imp202_end1_0:imp202_else0_0:imp202_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0940/Act_OptP0940ReadDI.st"
static void __AS__Action__Act_OptP0940ReadDI(void){
{
(tyP0940CommCtrl.tyUSSMEMA.tyBtnUBA.bValue=((*(p_tyDI)).bUBA));
(tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.bValue=((*(p_tyDI)).bUBAStat));

(tyP0940CommCtrl.tyDSSMEMA.tyBtnDSB.bValue=((*(p_tyDI)).bDSB));

(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBA.bValue=((*(p_tyDI)).bUBA2));
(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.bValue=((*(p_tyDI)).bUBAStat2));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0940/Act_OptP0940WriteDO.st"
static void __AS__Action__Act_OptP0940WriteDO(void){
{

if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bValue==(unsigned long)(unsigned char)1))){
(eUSSMEMAAct=2);

if(((((signed long)((*(p_eUSSMEMAStat)))==(signed long)2))&(((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1)))){
(eUSSMEMAAct=0);

(tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bRtCompl=0);
}
}else{
(eUSSMEMAAct=4);

if(((((signed long)((*(p_eUSSMEMAStat)))==(signed long)4))&(((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1)))){
(eUSSMEMAAct=0);

(tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bRtCompl=0);
}
}
}


if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bValue==(unsigned long)(unsigned char)1))){
(eUSSMEMA2Act=2);

if(((((signed long)((*(p_eUSSMEMA2Stat)))==(signed long)2))&(((signed long)((*(p_eUSSMEMA2Status)))==(signed long)1)))){
(eUSSMEMA2Act=0);

(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bRtCompl=0);
}
}else{
(eUSSMEMA2Act=4);

if(((((signed long)((*(p_eUSSMEMA2Stat)))==(signed long)4))&(((signed long)((*(p_eUSSMEMA2Status)))==(signed long)1)))){
(eUSSMEMA2Act=0);

(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bRtCompl=0);
}
}
}


if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bValue==(unsigned long)(unsigned char)1))){
(eDSSMEMAAct=2);

if(((((signed long)((*(p_eDSSMEMAStat)))==(signed long)2))&(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1)))){
(eDSSMEMAAct=0);

(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bRtCompl=0);
}
}else{
(eDSSMEMAAct=4);

if(((((signed long)((*(p_eDSSMEMAStat)))==(signed long)4))&(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1)))){
(eDSSMEMAAct=0);

(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bRtCompl=0);
}
}
}


if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bValue==(unsigned long)(unsigned char)1))){
(eDSSMEMAAct=3);

if(((((signed long)((*(p_eDSSMEMAStat)))==(signed long)3))&(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1)))){
(eDSSMEMAAct=0);

(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bRtCompl=0);
}
}else{
(eDSSMEMAAct=5);

if(((((signed long)((*(p_eDSSMEMAStat)))==(signed long)5))&(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1)))){
(eDSSMEMAAct=0);

(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bRtCompl=0);
}
}
}

}imp207_else15_0:imp207_end15_0:imp207_end13_0:imp207_else12_0:imp207_end12_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0940/Act_OptP0940RstMnl.st"
static void __AS__Action__Act_OptP0940RstMnl(void){
{
if((((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))|((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)3))|(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)3))))&~Edge0020500000&1?((Edge0020500000=((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))|((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)3))|(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)3))))&1),1):((Edge0020500000=((((unsigned long)(unsigned char)bManualMod==(unsigned long)(unsigned char)0))|((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)3))|(((signed long)((*(p_eDSSMEMAStatus)))==(signed long)3))))&1),0))){

(eUSSMEMAAct=0);
(eDSSMEMAAct=0);
(eUSSMEMA2Act=0);


(tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bValue=0);
(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bValue=0);
(tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bValue=0);
(tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBA.bValue=0);

}

}imp205_else0_0:imp205_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0950/Act_EntP0950Disp.st"
static void __AS__Action__Act_EntP0950Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP0950Simu.tyMsgBoxHide)));

(p_tyC0002FullMask=((unsigned long)(&tyP0950Simu.tyFullMaskHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyP0950Simu=((unsigned long)(&tyP0950Simu.tySimu)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0950/Act_OptP0950SimulationMod.st"
static void __AS__Action__Act_OptP0950SimulationMod(void){
{
if(((*(p_bSimuStatusRun)))){
(tyP0950Simu.tySimu.tyBtnSimu.bRtLk=1);
}else{
(tyP0950Simu.tySimu.tyBtnSimu.bRtLk=tyP0950Simu.tySimu.tyBtnSimu.bValue);
}

if(tyP0950Simu.tySimu.tyBtnSimu.bRtCompl){
(tyP0950Simu.tySimu.tyBtnSimu.bRtCompl=0);
(tyP0950Simu.tySimu.tyBtnSimu.bValue=1);
(tyP0950Simu.tySimu.tyBtnSimu.bRtLk=1);
}

}imp209_else1_0:imp209_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0950/Act_OptP0950Control.st"
static void __AS__Action__Act_OptP0950Control(void){
{

if((((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bSimuStatusStop)))==(unsigned long)(unsigned char)0)))&~Edge0020800000&1?((Edge0020800000=((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bSimuStatusStop)))==(unsigned long)(unsigned char)0)))&1),1):((Edge0020800000=((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bSimuStatusStop)))==(unsigned long)(unsigned char)0)))&1),0))){

(tyP0950Simu.tySimu.tyBtnStart.bRtCompl=0);
(tyP0950Simu.tySimu.tyBtnStop.bRtCompl=0);

(tyP0950Simu.tySimu.tyBtnStart.bValue=0);
(tyP0950Simu.tySimu.tyBtnStop.bValue=0);

(eSimuAct=4);

}else{

if(((((signed long)((*(p_eSimuStat)))==(signed long)4))&(((signed long)((*(p_eSimuStatus)))==(signed long)1)))){
(eSimuAct=0);

(bSimuMod=0);

}

}


if((((unsigned long)(unsigned char)tyP0950Simu.tySimu.tyBtnStart.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0950Simu.tySimu.tyBtnStop.bRtCompl=0);

(eSimuAct=1);

(bSimuMod=1);

if(((((signed long)((*(p_eSimuStat)))==(signed long)1))&(((signed long)((*(p_eSimuStatus)))==(signed long)1)))){
(eSimuAct=0);

(tyP0950Simu.tySimu.tyBtnStart.bRtCompl=0);

}

}else if((((unsigned long)(unsigned char)tyP0950Simu.tySimu.tyBtnStop.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0950Simu.tySimu.tyBtnStart.bRtCompl=0);

(eSimuAct=2);

if(((((signed long)((*(p_eSimuStat)))==(signed long)2))&(((signed long)((*(p_eSimuStatus)))==(signed long)1)))){
(eSimuAct=0);
(bSimuMod=0);

(tyP0950Simu.tySimu.tyBtnStop.bRtCompl=0);
}

}


if((((unsigned long)(unsigned char)((*(p_bAlarmErr)))==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat)));

}else if((((unsigned long)(unsigned char)((*(p_bSimuStatusCycleStop)))==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat)));

(fbStopBlinkTm.IN=1);;TON(&fbStopBlinkTm);
if((((unsigned long)(unsigned char)fbStopBlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbStopBlinkTm.IN=0);;TON(&fbStopBlinkTm);

(tyP0950Simu.tySimu.tyBtnStart.bValue=(tyP0950Simu.tySimu.tyBtnStart.bValue^1));
}

}else if((((unsigned long)(unsigned char)((*(p_bSimuStatusRun)))==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat)));

}else{
fUIInRtStatHide(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStart.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP0950Simu.tySimu.tyBtnStop.uiMaskRtStat)));

}

}imp208_end5_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1000/Act_EntP1000Disp.st"
static void __AS__Action__Act_EntP1000Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1000Lang.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1000Lang=((unsigned long)(&tyP1000Lang.tyLang)));


(tyP1000Lang.tyLangBkUp=*(struct tyLyrP1000Lang*)&tyP1000Lang.tyLang);


(((_2byte_bit_field_*)(&tyP1000Lang.tyLang.tyBtnEnglish.uiRtStat))->bit0=((((*(p_tyNtParamCurr)).bChinesePrep)|((*(p_tyNtParamCurr)).bGemanPrep))^1));
(((_2byte_bit_field_*)(&tyP1000Lang.tyLang.tyBtnChinese.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bChinesePrep)^1));
(((_2byte_bit_field_*)(&tyP1000Lang.tyLang.tyBtnGerman.uiRtStat))->bit0=(((*(p_tyNtParamCurr)).bGemanPrep)^1));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1000/Act_ExitP1000.st"
static void __AS__Action__Act_ExitP1000(void){
{
(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

(usiChgPage=1);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1000Lang.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1000Lang.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1000Lang.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1000Lang.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1000Lang.tyMsgBoxHide)));


(tyP1000Lang.tyLang=*(struct tyLyrP1000Lang*)&tyP1000Lang.tyLangBkUp);
(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));
(tyProperty.tyVisu.usiChgLang=((*(p_tyMcParamCurr)).usiLang));

(usiChgPage=1);

}

}

}imp36_else1_0:imp36_end1_0:imp36_else0_1:imp36_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1000/Act_OptP1000SelectLang.st"
static void __AS__Action__Act_OptP1000SelectLang(void){
{

if((((unsigned long)(unsigned char)tyP1000Lang.tyLang.tyBtnEnglish.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1000Lang.tyLang.tyBtnEnglish.bRtCompl=0);

(tyP1000Lang.tyLang.tyBtnEnglish.bValue=1);
(tyP1000Lang.tyLang.tyBtnGerman.bValue=0);
(tyP1000Lang.tyLang.tyBtnChinese.bValue=0);

(tyP1000Lang.tyLang.tyBtnEnglish.bRtLk=1);
(tyP1000Lang.tyLang.tyBtnGerman.bRtLk=0);
(tyP1000Lang.tyLang.tyBtnChinese.bRtLk=0);

(tyProperty.tyVisu.usiChgLang=0);

(tyMcParamWr.usiLang=0);


}else if((((unsigned long)(unsigned char)tyP1000Lang.tyLang.tyBtnGerman.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1000Lang.tyLang.tyBtnGerman.bRtCompl=0);

(tyP1000Lang.tyLang.tyBtnEnglish.bValue=0);
(tyP1000Lang.tyLang.tyBtnGerman.bValue=1);
(tyP1000Lang.tyLang.tyBtnChinese.bValue=0);

(tyP1000Lang.tyLang.tyBtnEnglish.bRtLk=0);
(tyP1000Lang.tyLang.tyBtnGerman.bRtLk=1);
(tyP1000Lang.tyLang.tyBtnChinese.bRtLk=0);

(tyProperty.tyVisu.usiChgLang=1);

(tyMcParamWr.usiLang=1);


}else if((((unsigned long)(unsigned char)tyP1000Lang.tyLang.tyBtnChinese.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1000Lang.tyLang.tyBtnChinese.bRtCompl=0);

(tyP1000Lang.tyLang.tyBtnEnglish.bValue=0);
(tyP1000Lang.tyLang.tyBtnGerman.bValue=0);
(tyP1000Lang.tyLang.tyBtnChinese.bValue=1);

(tyP1000Lang.tyLang.tyBtnEnglish.bRtLk=0);
(tyP1000Lang.tyLang.tyBtnGerman.bRtLk=0);
(tyP1000Lang.tyLang.tyBtnChinese.bRtLk=1);

(tyProperty.tyVisu.usiChgLang=2);

(tyMcParamWr.usiLang=2);

}

}imp211_else0_2:imp211_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1000/Act_OptP1000Keypad.st"
static void __AS__Action__Act_OptP1000Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1000Lang.tyLang.tyNumDay.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1000Lang.tyLang.tyNumDay.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1000Lang.tyLang.tyNumMonth.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1000Lang.tyLang.tyNumMonth.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1000Lang.tyLang.tyNumYear.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1000Lang.tyLang.tyNumYear.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1000Lang.tyLang.tyNumSecond.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1000Lang.tyLang.tyNumSecond.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1000Lang.tyLang.tyNumMinute.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1000Lang.tyLang.tyNumMinute.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1000Lang.tyLang.tyNumHour.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1000Lang.tyLang.tyNumHour.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp210_else0_5:imp210_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1020/Act_EntP1020Disp.st"
static void __AS__Action__Act_EntP1020Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1020McSetNavi.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1020McSetNavi=((unsigned long)(&tyP1020McSetNavi.tyNavi)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1020/Act_OptP1020Navi.st"
static void __AS__Action__Act_OptP1020Navi(void){
{
if((((unsigned long)(unsigned char)tyP1020McSetNavi.tyNavi.tyBtnMcSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1020McSetNavi.tyNavi.tyBtnMcSet.bRtCompl=0);
(tyP1020McSetNavi.tyNavi.tyBtnMcSet.bValue=0);

(eChgPage=1021);

}else if((((unsigned long)(unsigned char)tyP1020McSetNavi.tyNavi.tyBtnVCommSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1020McSetNavi.tyNavi.tyBtnVCommSet.bRtCompl=0);
(tyP1020McSetNavi.tyNavi.tyBtnVCommSet.bValue=0);

(eChgPage=1022);

}else if((((unsigned long)(unsigned char)tyP1020McSetNavi.tyNavi.tyBtnHCommSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1020McSetNavi.tyNavi.tyBtnHCommSet.bRtCompl=0);
(tyP1020McSetNavi.tyNavi.tyBtnHCommSet.bValue=0);

(eChgPage=1023);

}else if((((unsigned long)(unsigned char)tyP1020McSetNavi.tyNavi.tyBtnAntiGapSet.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1020McSetNavi.tyNavi.tyBtnAntiGapSet.bRtCompl=0);
(tyP1020McSetNavi.tyNavi.tyBtnAntiGapSet.bValue=0);

(eChgPage=1024);

}

}imp212_else0_3:imp212_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_EntP1021McSetDisp.st"
static void __AS__Action__Act_EntP1021Disp(void){
{

if(((((unsigned long)(unsigned char)bTeachStopperAtLftPos==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bTeachStopperAtRgtPos==(unsigned long)(unsigned char)1)))){
(p_tyC0004Navi=((unsigned long)(&tyP1021McSetGen.tyNaviLyr2)));
}else{
(p_tyC0004Navi=((unsigned long)(&tyP1021McSetGen.tyNaviLyr1)));
}

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0006Set=((unsigned long)(&tyCommon.tySet)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1021McSetGen=((unsigned long)(&tyP1021McSetGen.tyGen)));

(p_tyP1021McSetNetwork=((unsigned long)(&tyP1021McSetGen.tyNetwork)));

(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat))->bit0=(bTeachStopperAtLftPos|bTeachStopperAtRgtPos));
(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat))->bit0=((bTeachStopperAtLftPos|bTeachStopperAtRgtPos)^1));


if(((bTeachStopperAtLftPos|bTeachStopperAtRgtPos)^1)){
(tyP1021McSetGen.tyGenBkUp=*(struct tyLyrP1021McSetGen*)&tyP1021McSetGen.tyGen);
}else{
(bTeachStopperAtLftPos=0);
(bTeachStopperAtRgtPos=0);
}


(usiNetworkModeOld=(unsigned char)((*(p_tyMcParamCurr)).eNetworkMod));

fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat)));

(((_2byte_bit_field_*)(&tyP1021McSetGen.tyGen.tyBtnLFBuzMute.uiRtStat))->bit0=((((*(p_tyMcParamCurr)).bLFEn)&((*(p_tyNtParamCurr)).bLFPrep)&(((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBuz)>(signed long)0)))^1));


}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_ExitP1021.st"
static void __AS__Action__Act_ExitP1021(void){
{
if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))){
(usiChgPage=1);

}else{
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxExitAsk)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


(tyP1021McSetGen.tyGen=*(struct tyLyrP1021McSetGen*)&tyP1021McSetGen.tyGenBkUp);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(bSaveNetworkPriority=0);

(usiChgPage=1);

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxExitAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

(eChgPage=eCurrPage);
(usiChgPage=0);

}

}

}imp37_else1_1:imp37_end1_0:imp37_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_OptP1021Navi.st"
static void __AS__Action__Act_OptP1021Navi(void){
{
if(((((unsigned long)(unsigned char)tyP1021McSetGen.tyNaviLyr1.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1021McSetGen.tyNaviLyr2.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1)))){
(eChgPage=1020);

(tyP1021McSetGen.tyNaviLyr1.tyBtnBack.bRtCompl=0);
(tyP1021McSetGen.tyNaviLyr2.tyBtnBack.bRtCompl=0);


}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNaviLyr1.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyC0004Navi=((unsigned long)(&tyP1021McSetGen.tyNaviLyr2)));

fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat)));

(tyP1021McSetGen.tyNaviLyr1.tyBtnRgt.bRtCompl=0);

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNaviLyr1.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyC0004Navi=((unsigned long)(&tyP1021McSetGen.tyNaviLyr2)));

fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat)));

(tyP1021McSetGen.tyNaviLyr1.tyBtnLeft.bRtCompl=0);


}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNaviLyr2.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyC0004Navi=((unsigned long)(&tyP1021McSetGen.tyNaviLyr1)));

fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat)));

(tyP1021McSetGen.tyNaviLyr2.tyBtnRgt.bRtCompl=0);

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNaviLyr2.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyC0004Navi=((unsigned long)(&tyP1021McSetGen.tyNaviLyr1)));

fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat)));

(tyP1021McSetGen.tyNaviLyr2.tyBtnLeft.bRtCompl=0);

}

}imp216_else0_4:imp216_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_OptP1021Save.st"
static void __AS__Action__Act_OptP1021Save(void){
{














if((tyP1021McSetGen.tyGen.tyStringMcNm.bRtCompl|tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.bRtCompl|tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.bRtCompl|tyP1021McSetGen.tyGen.tyNumSSaverTm.bRtCompl|tyP1021McSetGen.tyGen.tyBtnSSaverEn.bRtCompl|tyP1021McSetGen.tyGen.tyNumWidthAtHm.bRtCompl|tyP1021McSetGen.tyGen.tyNumConvInitTm.bRtCompl|tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.bRtCompl|tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.bRtCompl|tyP1021McSetGen.tyGen.tyBtnAWDis.bRtCompl|tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bRtCompl|tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bRtCompl|tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bRtCompl|tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bRtCompl|tyP1021McSetGen.tyGen.tyBtnChgParamEn.bRtCompl|tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.bRtCompl|tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.bRtCompl|tyP1021McSetGen.tyGen.tyBtnStopperDis.bRtCompl|tyP1021McSetGen.tyGen.tyNumWidthOffset.bRtCompl|tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bRtCompl|tyP1021McSetGen.tyGen.tyBtnClampDis.bRtCompl|tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bRtCompl|tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.bRtCompl|tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bRtCompl)){

fUIInRtStatHide(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(tyP1021McSetGen.tyGen.tyStringMcNm.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumSSaverTm.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnSSaverEn.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumWidthAtHm.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumWidthOffset.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumConvInitTm.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.bRtCompl=0);

(tyP1021McSetGen.tyGen.tyBtnAWDis.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnChgParamEn.bRtCompl=0);

(tyP1021McSetGen.tyGen.tyBtnStopperDis.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnClampDis.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.bRtCompl=0);
(tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bRtCompl=0);
}

if(((((unsigned long)(unsigned char)tyCommon.tySet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bSaveNetworkPriority==(unsigned long)(unsigned char)0)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sMcNm; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringMcNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyMcParamWr.usiDefaultMcMod=tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueIdx);
(tyMcParamWr.usiDefaultFlippedBrd=tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueIdx);
(tyMcParamWr.uiSSaverTmInSec=(unsigned short)tyP1021McSetGen.tyGen.tyNumSSaverTm.diValue);
(tyMcParamWr.bSSaverEn=tyP1021McSetGen.tyGen.tyBtnSSaverEn.bValue);
(tyMcParamWr.diAutoLogoutTmInSec=tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValue);
(tyMcParamWr.bAutoLogoutEn=tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bValue);
(tyMcParamWr.diWidthAtHmPosInUM=tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValue);
(tyMcParamWr.diConvInitTmInMS=tyP1021McSetGen.tyGen.tyNumConvInitTm.diValue);
(tyMcParamWr.diTranInErrDlyTmInMS=tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValue);
(tyMcParamWr.diTranOutErrDlyTmInMS=tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValue);

(tyMcParamWr.bAWDis=tyP1021McSetGen.tyGen.tyBtnAWDis.bValue);
(tyMcParamWr.bVSMEMAEn=tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bValue);
(tyMcParamWr.bHermesRmtEn=tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bValue);
(tyMcParamWr.bHermesSvyEn=tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bValue);
(tyMcParamWr.bMnlAccDat=tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bValue);
(tyMcParamWr.bAutoStepEn=tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bValue);
(tyMcParamWr.bChgParamEn=tyP1021McSetGen.tyGen.tyBtnChgParamEn.bValue);

(tyMcParamWr.bStopperDis=tyP1021McSetGen.tyGen.tyBtnStopperDis.bValue);
(tyMcParamWr.diStopperAtLftPos=tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValue);
(tyMcParamWr.diStopperAtRgtPos=tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValue);
(tyMcParamWr.diWidthOffsetInUM=tyP1021McSetGen.tyGen.tyNumWidthOffset.diValue);

(tyMcParamWr.bClampDis=tyP1021McSetGen.tyGen.tyBtnClampDis.bValue);

(tyMcParamWr.eNetworkMod=(signed long)tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx);

(tyMcParamWr.bLFBuzMute=tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bValue);

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sIPAddr; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sSubnetMask; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

(usiNetworkModeOld=tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx);

(tyProperty.tyVisu.uiSSaverTm=((*(p_tyMcParamCurr)).uiSSaverTmInSec));


(tyP1021McSetGen.tyGenBkUp=*(struct tyLyrP1021McSetGen*)&tyP1021McSetGen.tyGen);

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


(tyP1021McSetGen.tyGen=*(struct tyLyrP1021McSetGen*)&tyP1021McSetGen.tyGenBkUp);
(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}

}

}else if(bUpdateP1021Network){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sIPAddr; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.sSubnetMask; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

if(bUpdateP1021Network){
(bUpdateP1021Network=0);
}


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGenBkUp.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGenBkUp.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGenBkUp.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGenBkUp.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(bUpdateP1021Network=0);

}
}

}

}imp217_else7_0:imp217_end7_0:imp217_else5_1:imp217_end5_0:imp217_else1_1:imp217_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_OptP1021Keypad.st"
static void __AS__Action__Act_OptP1021Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringMcNm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringMcNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumSSaverTm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumSSaverTm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringIPAddr.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringSubnetMask.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumWidthAtHm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumWidthAtHm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumWidthOffset.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumWidthOffset.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumConvInitTm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumConvInitTm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyNetwork.tyStringIPAddr.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringIPAddr.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1021McSetGen.tyNetwork.tyStringSubnetMask.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}


}imp215_else0_12:imp215_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_OptP1021IPAddr.st"
static void __AS__Action__Act_OptP1021IPAddr(void){
{
if((((unsigned long)(unsigned char)tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl==(unsigned long)(unsigned char)1))){

if(fIPValid(tyP1021McSetGen.tyGen.tyStringIPAddr.sValue,((unsigned long)(&a_iIPPart1)))){

if((((unsigned long)(unsigned char)usiSaveIPAddrStep==(unsigned long)(unsigned char)0))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnYes.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

(usiSaveIPAddrStep=1);

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnNo.bValue=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

}

}else if((((unsigned long)(unsigned char)usiSaveIPAddrStep==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetIPAddr; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eHWInfoAct=4);

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)4))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);

(bUpdateP1021Network=1);

(usiSaveIPAddrStep=0);

(tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl=0);

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(usiSaveIPAddrStep=0);

(tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl=0);

}

}

}

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxIPAddrInvalid)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxIPAddrInvalid.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl=0);

}

}

}

}imp214_else6_0:imp214_end6_0:imp214_end1_0:imp214_else0_0:imp214_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_OptP1021SubnetMask.st"
static void __AS__Action__Act_OptP1021SubnetMask(void){
{
if((((unsigned long)(unsigned char)tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl==(unsigned long)(unsigned char)1))){

if(fIPValid(tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue,((unsigned long)(&a_iSubnetMaskPart1)))){

if((((unsigned long)(unsigned char)usiSaveSubnetMaskStep==(unsigned long)(unsigned char)0))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnYes.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

(usiSaveSubnetMaskStep=1);

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl=0);

}

}else if((((unsigned long)(unsigned char)usiSaveSubnetMaskStep==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetSubnetMask; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eHWInfoAct=5);

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)5))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);

(bUpdateP1021Network=1);

(usiSaveSubnetMaskStep=0);

(tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl=0);

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxUpdtSubnetErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(usiSaveSubnetMaskStep=0);

(tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl=0);

}

}

}

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxSubnetInvalid)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxSubnetInvalid.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxSubnetInvalid.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxSubnetInvalid.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl=0);

}

}

}

}imp218_else6_0:imp218_end6_0:imp218_end1_0:imp218_else0_0:imp218_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1021/Act_OptP1021DHCPSetting.st"
static void __AS__Action__Act_OptP1021DHCPSetting(void){
{
if((((signed long)((*(p_tyMcParamCurr)).eNetworkMod)==(signed long)1))){
fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringIPAddr.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringSubnetMask.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringIPAddr.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyGen.tyStringSubnetMask.uiMaskRtStat)));
}


if(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.bRtCompl){

(bSaveNetworkPriority=1);

(usiNetworkModeNew=tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx);

fUIInRtStatHide(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.bRtCompl=0);

if((((unsigned long)(unsigned char)usiNetworkModeOld!=(unsigned long)(unsigned char)usiNetworkModeNew))){
if((((unsigned long)(unsigned char)tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx==(unsigned long)(unsigned char)0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
fUIInRtStatOff(((unsigned long)(&tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat)));

}
}

}


if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNetwork.tyStringIPAddr.bRtCompl==(unsigned long)(unsigned char)1))){
if(fIPValid(tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue,((unsigned long)(&a_iIPPart1)))){

(tyP1021McSetGen.tyNetwork.tyStringIPAddr.bRtCompl=0);
}else{
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1021McSetGen.tyNetwork.tyStringIPAddr.bRtCompl=0);
}
}
}


if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNetwork.tyStringSubnetMask.bRtCompl==(unsigned long)(unsigned char)1))){
if(fIPValid(tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue,((unsigned long)(&a_iSubnetMaskPart1)))){

(tyP1021McSetGen.tyNetwork.tyStringSubnetMask.bRtCompl=0);
}else{
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1021McSetGen.tyNetwork.tyStringSubnetMask.bRtCompl=0);

}
}
}

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNetwork.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){

(tyP1021McSetGen.tyNetwork.tyBtnSave.bRtCompl=0);
(tyP1021McSetGen.tyNetwork.tyBtnSave.bValue=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat)));

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyNetwork.tyBtnCancel.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyNetwork.tyBtnCancel.bRtCompl=0);
(tyP1021McSetGen.tyNetwork.tyBtnCancel.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat)));

}

}


if(((((unsigned long)(unsigned char)tyCommon.tySet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))&bSaveNetworkPriority&(bNetworkConfigChanged^1))){

if((((unsigned long)(unsigned char)usiNetworkModeOld!=(unsigned long)(unsigned char)usiNetworkModeNew))){

if((((unsigned long)(unsigned char)usiChgNetworkConfigStep==(unsigned long)(unsigned char)0))){

if((((unsigned long)(unsigned char)usiNetworkModeNew==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyTxtMsg.usiValueIdx=189);
}else{
(tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyTxtMsg.usiValueIdx=190);
}

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxChgNetworkAsk)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnYes.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

(usiChgNetworkConfigStep=1);

}else if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnNo.bValue=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};



(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx=usiNetworkModeOld);


(bSaveNetworkPriority=0);


(usiChgNetworkConfigStep=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

}

}else if((((unsigned long)(unsigned char)usiChgNetworkConfigStep==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiNetworkModeNew==(unsigned long)(unsigned char)1))){
(usiNetworkModeSelected=(unsigned char)1);
}else{
(usiNetworkModeSelected=(unsigned char)0);
}

(eHWInfoAct=7);

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)7))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);

(usiChgNetworkConfigStep=2);

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxSetDHCPError)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxSetDHCPError.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxSetDHCPError.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxSetDHCPError.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx=usiNetworkModeOld);


(usiChgNetworkConfigStep=0);


(bSaveNetworkPriority=0);

}
}

}else if((((unsigned long)(unsigned char)usiChgNetworkConfigStep==(unsigned long)(unsigned char)2))){

if((((signed long)((*(p_eHWInfoStat)))==(signed long)0))){

(usiChgNetworkConfigStep=0);
(bNetworkConfigChanged=1);

}

}

}else{

(bSaveNetworkPriority=0);
}

}


if(bNetworkConfigChanged){

if((((unsigned long)(unsigned char)usiRefreshDetailStep==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)usiNetworkModeNew==(unsigned long)(unsigned char)1))){

(eHWInfoAct=1);

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)1))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);

(usiRefreshDetailStep=1);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxGetIPAddrErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxGetIPAddrErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxGetIPAddrErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxGetIPAddrErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


(bSaveNetworkPriority=0);


(usiRefreshDetailStep=0);

(bNetworkConfigChanged=0);

}
}

}else{
(eHWInfoAct=4);

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetIPAddr; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)4))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);

(usiRefreshDetailStep=1);

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


(bSaveNetworkPriority=0);


(usiRefreshDetailStep=0);

(bNetworkConfigChanged=0);

}
}
}

}else if((((unsigned long)(unsigned char)usiRefreshDetailStep==(unsigned long)(unsigned char)1))){

if((((signed long)((*(p_eHWInfoStat)))==(signed long)0))){
(usiRefreshDetailStep=2);
}

}else if((((unsigned long)(unsigned char)usiRefreshDetailStep==(unsigned long)(unsigned char)2))){
if((((unsigned long)(unsigned char)usiNetworkModeNew==(unsigned long)(unsigned char)1))){

(eHWInfoAct=2);

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)2))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);


(bSaveNetworkPriority=0);


(usiRefreshDetailStep=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNetworkConfigChanged=0);

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxGetSubnetErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxGetSubnetErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxGetSubnetErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxGetSubnetErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));


(bSaveNetworkPriority=0);


(usiRefreshDetailStep=0);

(bNetworkConfigChanged=0);

}
}

}else{
(eHWInfoAct=5);

{int zzIndex; plcstring* zzLValue=(plcstring*)sSetSubnetMask; plcstring* zzRValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eHWInfoStat)))==(signed long)5))&(((signed long)((*(p_eHWInfoStatus)))==(signed long)1)))){
(eHWInfoAct=0);


(bSaveNetworkPriority=0);


(usiRefreshDetailStep=0);

(bNetworkConfigChanged=0);

}else if((((signed long)((*(p_eHWInfoStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxUpdtSubnetErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1021McSetGen.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue; plcstring* zzRValue=(plcstring*)((*(p_sHWInfoSubnetMask))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


(bSaveNetworkPriority=0);


(usiRefreshDetailStep=0);

(bNetworkConfigChanged=0);

}
}
}

}
}




}imp213_else33_0:imp213_end33_0:imp213_else32_1:imp213_end32_0:imp213_end29_0:imp213_else22_2:imp213_end22_0:imp213_else21_0:imp213_end21_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1022/Act_EntP1022Disp.st"
static void __AS__Action__Act_EntP1022Disp(void){
{



if((((*(p_tyNtParamCurr)).bLFPrep)|((*(p_tyNtParamCurr)).bLCSLFPrep)|((*(p_tyNtParamCurr)).bLCSReqRcpPrep)|((*(p_tyNtParamCurr)).bLCSManageRcpPrep)|((*(p_tyNtParamCurr)).bLCSLiveDatPrep)|((*(p_tyNtParamCurr)).bLFUsrSetPrep)|((*(p_tyNtParamCurr)).bLFUsrSetPrep)|((*(p_tyNtParamCurr)).bUSWidthChkPrep)|((*(p_tyNtParamCurr)).bDSWidthChkPrep))){
(bNaviLyr1=1);
}else{
(bNaviLyr1=0);
}

if((((*(p_tyNtParamCurr)).bHermesSvyPrep)&((*(p_tyMcParamCurr)).bHermesSvyEn))){
(bNaviLyr2=1);
}else{
(bNaviLyr2=0);
}

if((bNaviLyr1&(bNaviLyr2^1))){
(p_tyC0004Navi=((unsigned long)(&tyP1022McSetVComm.tyNaviLyr1)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)));

}else if(((bNaviLyr1^1)&bNaviLyr2)){
(p_tyC0004Navi=((unsigned long)(&tyP1022McSetVComm.tyNaviLyr2)));
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)));

}else if((bNaviLyr1&bNaviLyr2)){
(p_tyC0004Navi=((unsigned long)(&tyP1022McSetVComm.tyNaviLyr3)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)));
}



(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0006Set=((unsigned long)(&tyCommon.tySet)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1022McSetVComm.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1022McSetVCommSel=((unsigned long)(&tyP1022McSetVComm.tyVComSel)));
(p_tyP1022McSetVCommLF=((unsigned long)(&tyP1022McSetVComm.tyLF)));
(p_tyP1022McSetVCommSvy=((unsigned long)(&tyP1022McSetVComm.tyVComSvy)));

if(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesSvyFirstMcInTheLine)==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesSvyQueryBoardInfo)==(unsigned long)(unsigned char)0)))){
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.uiRtStat)));
}


(tyP1022McSetVComm.tyVComSelBkUp=*(struct tyLyrP1022McSetVCommSel*)&tyP1022McSetVComm.tyVComSel);
(tyP1022McSetVComm.tyLFBkUp=*(struct tyLyrP1022McSetVCommLF*)&tyP1022McSetVComm.tyLF);
(tyP1022McSetVComm.tyVComSvyBkUp=*(struct tyLyrP1022McSetVCommSvy*)&tyP1022McSetVComm.tyVComSvy);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1022/Act_ExitP1022.st"
static void __AS__Action__Act_ExitP1022(void){
{
if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))){
(usiChgPage=1);

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1022McSetVComm.tyMsgBoxExitAsk)));

if((((unsigned long)(unsigned char)tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=0);
(tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1022McSetVComm.tyMsgBoxHide)));


(tyP1022McSetVComm.tyVComSel=*(struct tyLyrP1022McSetVCommSel*)&tyP1022McSetVComm.tyVComSelBkUp);
(tyP1022McSetVComm.tyLF=*(struct tyLyrP1022McSetVCommLF*)&tyP1022McSetVComm.tyLFBkUp);
(tyP1022McSetVComm.tyVComSvy=*(struct tyLyrP1022McSetVCommSvy*)&tyP1022McSetVComm.tyVComSvyBkUp);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(usiChgPage=1);

}else if((((unsigned long)(unsigned char)tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl=0);
(tyP1022McSetVComm.tyMsgBoxExitAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1022McSetVComm.tyMsgBoxHide)));

(eChgPage=eCurrPage);
(usiChgPage=0);

}

}

}imp38_else1_1:imp38_end1_0:imp38_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1022/Act_OptP1022Navi.st"
static void __AS__Action__Act_OptP1022Navi(void){
{











(tyP1022McSetVComm.tyNaviBack.tyBtnBack.bRtLk=tyCommon.tySet.tyBtnSave.bRtCompl);


if((tyP1022McSetVComm.tyNaviLyr1.tyBtnBack.bRtCompl|tyP1022McSetVComm.tyNaviLyr2.tyBtnBack.bRtCompl|tyP1022McSetVComm.tyNaviLyr3.tyBtnBack.bRtCompl|tyP1022McSetVComm.tyNaviLyr4.tyBtnBack.bRtCompl)){
(tyP1022McSetVComm.tyNaviLyr1.tyBtnBack.bRtCompl=0);
(tyP1022McSetVComm.tyNaviLyr2.tyBtnBack.bRtCompl=0);
(tyP1022McSetVComm.tyNaviLyr3.tyBtnBack.bRtCompl=0);
(tyP1022McSetVComm.tyNaviLyr4.tyBtnBack.bRtCompl=0);

(eChgPage=1020);


}else if(((((unsigned long)(unsigned char)tyP1022McSetVComm.tyNaviLyr3.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1022McSetVComm.tyNaviLyr3.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP1022McSetVComm.tyNaviLyr3.tyBtnLeft.bRtCompl=0);
(tyP1022McSetVComm.tyNaviLyr3.tyBtnRgt.bRtCompl=0);

(p_tyC0004Navi=((unsigned long)(&tyP1022McSetVComm.tyNaviLyr4)));

fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)));

}else if(((((unsigned long)(unsigned char)tyP1022McSetVComm.tyNaviLyr4.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1022McSetVComm.tyNaviLyr4.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP1022McSetVComm.tyNaviLyr4.tyBtnLeft.bRtCompl=0);
(tyP1022McSetVComm.tyNaviLyr4.tyBtnRgt.bRtCompl=0);

(p_tyC0004Navi=((unsigned long)(&tyP1022McSetVComm.tyNaviLyr3)));

fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)));
}

}imp220_else0_2:imp220_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1022/Act_OptP1022Save.st"
static void __AS__Action__Act_OptP1022Save(void){
{









if((tyP1022McSetVComm.tyVComSel.tyBtnLF.bRtCompl|tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bRtCompl|tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bRtCompl|tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bRtCompl|tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bRtCompl|tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bRtCompl|tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bRtCompl|tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bRtCompl|tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bRtCompl|tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.bRtCompl|tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.bRtCompl|tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bRtCompl)){

fUIInRtStatHide(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

if((((((*(p_tyNtParamCurr)).bLFUsrSetPrep)^1)&(((*(p_tyNtParamCurr)).bLeaderMc)^1))|(((*(p_tyNtParamCurr)).bLFUsrSetPrep)&(tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue^1)))){
if((tyP1022McSetVComm.tyVComSel.tyBtnLF.bRtCompl&tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue)){
(tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue=0);

}else if((tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bRtCompl&tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue)){
(tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue=0);

}

if(((((unsigned long)(unsigned char)tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue==(unsigned long)(unsigned char)1)))){
(tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue=0);
(tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue=0);
}
}

(tyP1022McSetVComm.tyVComSel.tyBtnLF.bRtCompl=0);
(tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bRtCompl=0);
(tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bRtCompl=0);
(tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bRtCompl=0);
(tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bRtCompl=0);

(tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bRtCompl=0);
(tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bRtCompl=0);
(tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bRtCompl=0);
(tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bRtCompl=0);
(tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bRtCompl=0);
(tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bRtCompl=0);


(tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bRtCompl=0);
(tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bRtCompl=0);
(tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bRtCompl=0);
(tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bRtCompl=0);
(tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bRtCompl=0);
(tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.bRtCompl=0);
(tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.bRtCompl=0);

}

if((((unsigned long)(unsigned char)tyCommon.tySet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){

(tyMcParamWr.bLFEn=tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue);
(tyMcParamWr.bLCSLFEn=tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue);
(tyMcParamWr.bLCSReqRcpEn=tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bValue);
(tyMcParamWr.bLCSManageRcpEn=tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bValue);
(tyMcParamWr.bLCSLiveDatEn=tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bValue);

(tyMcParamWr.bLFLeaderMc=tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue);
(tyMcParamWr.bSectionLeader=tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bValue);
(tyMcParamWr.bUSWidthChkEn=tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bValue);
(tyMcParamWr.bDSWidthChkEn=tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bValue);
(tyMcParamWr.bLFSeqStayActive=tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bValue);
(tyMcParamWr.bDBAOnWOAlign=tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bValue);


(tyHermesSvyParamWr.bFeatureConfiguration=tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bValue);
(tyHermesSvyParamWr.bFeatureCheckAliveResponse=tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bValue);
(tyHermesSvyParamWr.bFeatureBoardTracking=tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bValue);
(tyHermesSvyParamWr.bFeatureQueryWorkOrderInfo=tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bValue);
(tyHermesSvyParamWr.bFeatureSendWorkOrderInfo=tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bValue);
(tyHermesSvyParamWr.tSndAlive=(plctime)tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.diValue);
(tyHermesSvyParamWr.uiSvySvstemPort=(unsigned short)tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.diValue);
(bSaveHMISvyConfig=1);

(eMcParamAct=3);
(eHermesAct=15);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1))&(((signed long)((*(p_eHermesStat)))==(signed long)15))&(((signed long)((*(p_eHermesStatus)))==(signed long)1)))){
(eMcParamAct=0);
(eHermesAct=0);


(tyP1022McSetVComm.tyVComSelBkUp=*(struct tyLyrP1022McSetVCommSel*)&tyP1022McSetVComm.tyVComSel);
(tyP1022McSetVComm.tyLFBkUp=*(struct tyLyrP1022McSetVCommLF*)&tyP1022McSetVComm.tyLF);
(tyP1022McSetVComm.tyVComSvyBkUp=*(struct tyLyrP1022McSetVCommSvy*)&tyP1022McSetVComm.tyVComSvy);

(tyCommon.tySet.tyBtnSave.bRtCompl=0);
fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));
(bSaveHMISvyConfig=0);

}else if(((((signed long)((*(p_eMcParamStatus)))==(signed long)3))|(((signed long)((*(p_eHermesStatus)))==(signed long)3)))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1022McSetVComm.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1022McSetVComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1022McSetVComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1022McSetVComm.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1022McSetVComm.tyMsgBoxHide)));


(tyP1022McSetVComm.tyVComSel=*(struct tyLyrP1022McSetVCommSel*)&tyP1022McSetVComm.tyVComSelBkUp);
(tyP1022McSetVComm.tyVComSvy=*(struct tyLyrP1022McSetVCommSvy*)&tyP1022McSetVComm.tyVComSvyBkUp);
(tyP1022McSetVComm.tyLF=*(struct tyLyrP1022McSetVCommLF*)&tyP1022McSetVComm.tyLFBkUp);
(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));
(bSaveHMISvyConfig=0);

(tyCommon.tySet.tyBtnSave.bRtCompl=0);
fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}

}

}

}imp221_else6_0:imp221_end6_0:imp221_else5_1:imp221_end5_0:imp221_else4_0:imp221_end4_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1022/Act_OptP1022DisLF.st"
static void __AS__Action__Act_OptP1022DisLF(void){
{
if(((((unsigned long)(unsigned char)tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue==(unsigned long)(unsigned char)0))|(tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue&(((unsigned long)(unsigned char)tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue==(unsigned long)(unsigned char)0))))){
if(bLFRunInBG){
(usiLFLeaderCtrlStep=0);

(eLFLeaderAct=0);

(fbLFLeaderCtrlBlinkTm.IN=0);;TON(&fbLFLeaderCtrlBlinkTm);

(tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx=0);
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx=0);
(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx=0);
(tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx=0);

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl=0);
(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl=0);

(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue=0);
(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue=0);

(bLFRunInBG=0);

}
}

}imp219_else1_0:imp219_end1_0:imp219_else0_0:imp219_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_EntP1023Disp.st"
static void __AS__Action__Act_EntP1023Disp(void){
{

(p_tyC0004Navi=((unsigned long)(&tyP1023McSetHComm.tyNaviLyr1)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0006Set=((unsigned long)(&tyCommon.tySet)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1023McSetHCommGen=((unsigned long)(&tyP1023McSetHComm.tyGen)));

(p_tyP1023McSetHCommUSSel=((unsigned long)(&tyP1023McSetHComm.tyUSSel)));
(p_tyP1023McSetHCommDSSel=((unsigned long)(&tyP1023McSetHComm.tyDSSel)));
(p_tyP1023McSetHCommUSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA)));
(p_tyP1023McSetHCommDSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA)));
(p_tyP1023McSetHCommUSHermes=((unsigned long)(&tyP1023McSetHComm.tyUSHermes)));
(p_tyP1023McSetHCommDSHermes=((unsigned long)(&tyP1023McSetHComm.tyDSHermes)));

(p_tyP1023McSetHCommUSSel2=((unsigned long)(&tyP1023McSetHComm.tyUSSel2)));
(p_tyP1023McSetHCommUSSMEMA2=((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2)));


(tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx=0);
(tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx=0);

(tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueMaxIdx=1);
(tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueMaxIdx=1);


fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));


(tyP1023McSetHComm.tyUSSelBkUp=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSel);
(tyP1023McSetHComm.tyUSSMEMABkUp=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMA);
(tyP1023McSetHComm.tyUSHermesBkUp=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermes);
(tyP1023McSetHComm.tyDSSelBkUp=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyDSSel);
(tyP1023McSetHComm.tyDSSMEMABkUp=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyDSSMEMA);
(tyP1023McSetHComm.tyDSHermesBkUp=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermes);


(tyP1023McSetHComm.tyUSSelBkUp2=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSel2);
(tyP1023McSetHComm.tyUSSMEMABkUp2=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMA2);
(tyP1023McSetHComm.tyUSHermesBkUp2=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermes2);
}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_ExitP1023.st"
static void __AS__Action__Act_ExitP1023(void){
{
if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))){
(usiChgPage=1);

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxExitAsk)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=0);
(tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxHide)));


(tyP1023McSetHComm.tyUSSel=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSelBkUp);
(tyP1023McSetHComm.tyUSSMEMA=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMABkUp);
(tyP1023McSetHComm.tyUSHermes=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermesBkUp);
(tyP1023McSetHComm.tyDSSel=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyDSSelBkUp);
(tyP1023McSetHComm.tyDSSMEMA=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyDSSMEMABkUp);
(tyP1023McSetHComm.tyDSHermes=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermesBkUp);
(tyP1023McSetHComm.tyUSSel2=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSelBkUp2);
(tyP1023McSetHComm.tyUSSMEMA2=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMABkUp2);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(usiChgPage=1);

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnNo.bRtCompl=0);
(tyP1023McSetHComm.tyMsgBoxExitAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxHide)));

(eChgPage=eCurrPage);
(usiChgPage=0);

}

}

}imp39_else1_1:imp39_end1_0:imp39_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_OptP1023Navi.st"
static void __AS__Action__Act_OptP1023Navi(void){
{
if(((((unsigned long)(unsigned char)tyP1023McSetHComm.tyNaviLyr1.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1023McSetHComm.tyNaviLyr2.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP1023McSetHComm.tyNaviLyr1.tyBtnBack.bRtCompl=0);
(tyP1023McSetHComm.tyNaviLyr2.tyBtnBack.bRtCompl=0);

(eChgPage=1020);

}else if(((((unsigned long)(unsigned char)tyP1023McSetHComm.tyNaviLyr1.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1023McSetHComm.tyNaviLyr1.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP1023McSetHComm.tyNaviLyr1.tyBtnLeft.bRtCompl=0);
(tyP1023McSetHComm.tyNaviLyr1.tyBtnRgt.bRtCompl=0);

(p_tyC0004Navi=((unsigned long)(&tyP1023McSetHComm.tyNaviLyr2)));

fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx==(unsigned long)(unsigned char)0))){

(p_tyP1023McSetHCommDSSel=((unsigned long)(&tyP1023McSetHComm.tyDSSel)));
(p_tyP1023McSetHCommDSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA)));
(p_tyP1023McSetHCommDSHermes=((unsigned long)(&tyP1023McSetHComm.tyDSHermes)));

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat)));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx==(unsigned long)(unsigned char)1))){

(p_tyP1023McSetHCommDSSel=((unsigned long)(&tyP1023McSetHComm.tyDSSel2)));
(p_tyP1023McSetHCommDSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2)));
(p_tyP1023McSetHCommDSHermes=((unsigned long)(&tyP1023McSetHComm.tyDSHermes2)));

fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat)));


}

}else if(((((unsigned long)(unsigned char)tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl==(unsigned long)(unsigned char)1)))){
(tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl=0);
(tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl=0);

(p_tyC0004Navi=((unsigned long)(&tyP1023McSetHComm.tyNaviLyr1)));

fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat)));


if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx==(unsigned long)(unsigned char)0))){

(p_tyP1023McSetHCommUSSel=((unsigned long)(&tyP1023McSetHComm.tyUSSel)));
(p_tyP1023McSetHCommUSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA)));
(p_tyP1023McSetHCommUSHermes=((unsigned long)(&tyP1023McSetHComm.tyUSHermes)));

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat)));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx==(unsigned long)(unsigned char)1))){

(p_tyP1023McSetHCommUSSel=((unsigned long)(&tyP1023McSetHComm.tyUSSel2)));
(p_tyP1023McSetHCommUSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2)));
(p_tyP1023McSetHCommUSHermes=((unsigned long)(&tyP1023McSetHComm.tyUSHermes2)));

fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat)));


}






























}

}imp224_else2_1:imp224_end2_0:imp224_else0_2:imp224_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_OptP1023ShowLyr.st"
static void __AS__Action__Act_OptP1023ShowLyr(void){
{
if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat)));

(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.uiRtStat))->bit0=((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueIdx==(unsigned long)(unsigned char)2))^1));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat)));


(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSHermes.tyBitmapMask.uiRtStat))->bit0=(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesRmtPrep)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bHermesRmtEn)==(unsigned long)(unsigned char)1)))^1));
}

}else if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat)));

(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.uiRtStat))->bit0=((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx==(unsigned long)(unsigned char)2))^1));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat)));


(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyUSHermes2.tyBitmapMask.uiRtStat))->bit0=(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesRmtPrep)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bHermesRmtEn)==(unsigned long)(unsigned char)1)))^1));
}

}else if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));

(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.uiRtStat))->bit0=((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueIdx==(unsigned long)(unsigned char)2))^1));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){

fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));


(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSHermes.tyBitmapMask.uiRtStat))->bit0=(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesRmtPrep)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bHermesRmtEn)==(unsigned long)(unsigned char)1)))^1));
}
}else if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat))->bit0==(unsigned long)(unsigned char)0))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat)));

(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.uiRtStat))->bit0=((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx==(unsigned long)(unsigned char)2))^1));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat)));


(((_2byte_bit_field_*)(&tyP1023McSetHComm.tyDSHermes2.tyBitmapMask.uiRtStat))->bit0=(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesRmtPrep)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bHermesRmtEn)==(unsigned long)(unsigned char)1)))^1));
}
}else{

fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSHermes2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSHermes2.tyLyr.uiRtStat)));
}

}imp226_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_OptP1023Save.st"
static void __AS__Action__Act_OptP1023Save(void){
{


































if((tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtCompl|tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtCompl|tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.bRtCompl|tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyNumLaneID.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyNumHostPort.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bRtCompl|tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bRtCompl|tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtCompl|tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtCompl|tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.bRtCompl|tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bRtCompl|tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtCompl|tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtCompl|tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.bRtCompl|tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyNumLaneID.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bRtCompl|tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bRtCompl|tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bRtCompl|tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtCompl|tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtCompl|tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.bRtCompl|tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bRtCompl|tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bRtCompl)){


fUIInRtStatHide(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.bRtCompl=0);
(tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyNumLaneID.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyNumHostPort.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bRtCompl=0);

(tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.bRtCompl=0);
(tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bRtCompl=0);

(tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.bRtCompl=0);
(tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyNumLaneID.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bRtCompl=0);


(tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bRtCompl=0);
(tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bRtCompl=0);




(tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.bRtCompl=0);
(tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bRtCompl=0);
(tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bRtCompl=0);


}

if((((unsigned long)(unsigned char)tyCommon.tySet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)usiSaveCommStep==(unsigned long)(unsigned char)0))){

if(((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))&(((((unsigned long)(unsigned char)((*(p_tyNtParamCurr)).bHermesRmtPrep)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyMcParamCurr)).bHermesRmtEn)==(unsigned long)(unsigned char)1)))^1))){
if((((unsigned long)fIPValid(tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sValue,((unsigned long)(&a_iIPPart1)))==(unsigned long)(unsigned char)1))){
(usiSaveCommStep=1);
}else{
(usiSaveCommStep=99);
}
}else{
(usiSaveCommStep=1);
}

}else if((((unsigned long)(unsigned char)usiSaveCommStep==(unsigned long)(unsigned char)1))){


if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eUSComm=0);
}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eUSComm=1);
}

(tyMcParamWr.tyUSCommSMEMA.eSelection=(unsigned long)tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueIdx);
(tyMcParamWr.tyUSCommSMEMA.bStatSigSetGd=tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bValue);


if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eUSComm2=0);
}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eUSComm2=1);
}

(tyMcParamWr.tyUSCommSMEMA2.eSelection=(unsigned long)tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx);
(tyMcParamWr.tyUSCommSMEMA2.bStatSigSetGd=tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bValue);


if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eDSComm=0);
}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eDSComm=1);
}

(tyMcParamWr.tyDSCommSMEMA.eSelection=(unsigned long)tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueIdx);
(tyMcParamWr.tyDSCommSMEMA.bStatSigSetGd=tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bValue);


if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eDSComm2=0);
}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue==(unsigned long)(unsigned char)1))){
(tyMcParamWr.eDSComm2=1);
}

(tyMcParamWr.tyDSCommSMEMA2.eSelection=(unsigned long)tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx);
(tyMcParamWr.tyDSCommSMEMA2.bStatSigSetGd=tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bValue);

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);


(tyP1023McSetHComm.tyUSSelBkUp=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSel);
(tyP1023McSetHComm.tyUSSMEMABkUp=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMA);
(tyP1023McSetHComm.tyDSSelBkUp=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyDSSel);
(tyP1023McSetHComm.tyDSSMEMABkUp=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyDSSMEMA);
(tyP1023McSetHComm.tyUSSelBkUp2=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSel2);
(tyP1023McSetHComm.tyUSSMEMABkUp2=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMA2);

(usiSaveCommStep=2);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxHide)));


(tyP1023McSetHComm.tyUSSel=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSelBkUp);
(tyP1023McSetHComm.tyUSSMEMA=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMABkUp);
(tyP1023McSetHComm.tyDSSel=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyDSSelBkUp);
(tyP1023McSetHComm.tyDSSMEMA=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyDSSMEMABkUp);
(tyP1023McSetHComm.tyUSSel2=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSelBkUp2);
(tyP1023McSetHComm.tyUSSMEMA2=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMABkUp2);

(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(usiSaveCommStep=2);

}

}

}else if((((unsigned long)(unsigned char)usiSaveCommStep==(unsigned long)(unsigned char)2))){


(a_tyHermesUSParamWr[0].tSndAlive=(plctime)tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.diValue);
(a_tyHermesUSParamWr[0].iLaneID=(signed short)tyP1023McSetHComm.tyUSHermes.tyNumLaneID.diValue);
(a_tyHermesUSParamWr[0].uiHostPort=(unsigned short)tyP1023McSetHComm.tyUSHermes.tyNumHostPort.diValue);
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesUSParamWr[0].sHostAddress; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_tyHermesUSParamWr[0].bFeatureCheckAliveResponse=tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bValue);
(a_tyHermesUSParamWr[0].bFeatureBoardForecast=tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bValue);
(a_tyHermesUSParamWr[0].bFeatureQueryBoardInfo=tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bValue);
(a_tyHermesUSParamWr[0].bFeatureCommand=tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bValue);
(a_tyHermesUSParamWr[0].bCmpTypeId=tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bValue);
(a_tyHermesUSParamWr[0].bCmpParam=tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bValue);
(a_tyHermesUSParamWr[0].bOverwrite=tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bValue);



(a_tyHermesUSParamWr[1].tSndAlive=(plctime)tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.diValue);
(a_tyHermesUSParamWr[1].iLaneID=(signed short)tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.diValue);
(a_tyHermesUSParamWr[1].uiHostPort=(unsigned short)tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.diValue);
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesUSParamWr[1].sHostAddress; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_tyHermesUSParamWr[1].bFeatureCheckAliveResponse=tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bValue);
(a_tyHermesUSParamWr[1].bFeatureBoardForecast=tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bValue);
(a_tyHermesUSParamWr[1].bFeatureQueryBoardInfo=tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bValue);
(a_tyHermesUSParamWr[1].bFeatureCommand=tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bValue);
(a_tyHermesUSParamWr[1].bCmpTypeId=tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bValue);
(a_tyHermesUSParamWr[1].bCmpParam=tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bValue);
(a_tyHermesUSParamWr[1].bOverwrite=tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bValue);


(a_tyHermesDSParamWr[0].tSndAlive=(plctime)tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.diValue);
(a_tyHermesDSParamWr[0].uiSvrPort=(unsigned short)tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.diValue);
(a_tyHermesDSParamWr[0].iLaneID=(signed short)tyP1023McSetHComm.tyDSHermes.tyNumLaneID.diValue);
(a_tyHermesDSParamWr[0].bFeatureCheckAliveResponse=tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bValue);
(a_tyHermesDSParamWr[0].bFeatureBoardForecast=tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bValue);
(a_tyHermesDSParamWr[0].bFeatureSendBoardInfo=tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bValue);
(a_tyHermesDSParamWr[0].bFeatureCommand=tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bValue);


(a_tyHermesDSParamWr[1].tSndAlive=(plctime)tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.diValue);
(a_tyHermesDSParamWr[1].uiSvrPort=(unsigned short)tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.diValue);
(a_tyHermesDSParamWr[1].iLaneID=(signed short)tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.diValue);
(a_tyHermesDSParamWr[1].bFeatureCheckAliveResponse=tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bValue);
(a_tyHermesDSParamWr[1].bFeatureBoardForecast=tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bValue);
(a_tyHermesDSParamWr[1].bFeatureSendBoardInfo=tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bValue);
(a_tyHermesDSParamWr[1].bFeatureCommand=tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bValue);


(bSaveHMIConfigure=1);
(eHermesAct=15);

if(((((signed long)((*(p_eHermesStat)))==(signed long)15))&(((signed long)((*(p_eHermesStatus)))==(signed long)1)))){
(eHermesAct=0);


(tyP1023McSetHComm.tyUSHermesBkUp=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermes);
(tyP1023McSetHComm.tyUSHermesBkUp2=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermes2);
(tyP1023McSetHComm.tyDSHermesBkUp=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermes);
(tyP1023McSetHComm.tyDSHermesBkUp2=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermes2);

(usiSaveCommStep=0);
(bSaveHMIConfigure=0);
(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}else if((((signed long)((*(p_eHermesStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxHide)));


(tyP1023McSetHComm.tyUSHermes=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermesBkUp);
(tyP1023McSetHComm.tyUSHermes2=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermesBkUp2);
(tyP1023McSetHComm.tyDSHermes=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermesBkUp);
(tyP1023McSetHComm.tyDSHermes2=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermesBkUp2);

{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyHermesUSParamWr; unsigned char* zzRValue=(unsigned char*)((*(p_tyHermesConfiguration)).a_tyUSParam); for(zzIndex=0; zzIndex<800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyHermesDSParamWr; unsigned char* zzRValue=(unsigned char*)((*(p_tyHermesConfiguration)).a_tyDSParam); for(zzIndex=0; zzIndex<800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

(tyCommon.tySet.tyBtnSave.bRtCompl=0);
(bSaveHMIConfigure=0);
fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(usiSaveCommStep=0);

}

}

}else if((((unsigned long)(unsigned char)usiSaveCommStep==(unsigned long)(unsigned char)99))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxIPAddrInvalid)));

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl=0);
(tyP1023McSetHComm.tyMsgBoxIPAddrInvalid.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1023McSetHComm.tyMsgBoxHide)));


(tyP1023McSetHComm.tyUSSel=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSelBkUp);
(tyP1023McSetHComm.tyUSSMEMA=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMABkUp);
(tyP1023McSetHComm.tyUSHermes=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermesBkUp);
(tyP1023McSetHComm.tyDSSel=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyDSSelBkUp);
(tyP1023McSetHComm.tyDSSMEMA=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyDSSMEMABkUp);
(tyP1023McSetHComm.tyDSHermes=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermesBkUp);
(tyP1023McSetHComm.tyUSSel2=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyUSSelBkUp2);
(tyP1023McSetHComm.tyUSSMEMA2=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyUSSMEMABkUp2);
(tyP1023McSetHComm.tyUSHermes2=*(struct tyLyrP1023McSetHCommUSHermes*)&tyP1023McSetHComm.tyUSHermesBkUp2);
(tyP1023McSetHComm.tyDSSel2=*(struct tyLyrP1023McSetHCommSel*)&tyP1023McSetHComm.tyDSSelBkUp);
(tyP1023McSetHComm.tyDSSMEMA2=*(struct tyLyrP1023McSetHCommSMEMA*)&tyP1023McSetHComm.tyDSSMEMABkUp);
(tyP1023McSetHComm.tyDSHermes2=*(struct tyLyrP1023McSetHCommDSHermes*)&tyP1023McSetHComm.tyDSHermesBkUp);

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(usiSaveCommStep=0);

}

}

}

}imp225_else13_0:imp225_end13_0:imp225_else2_3:imp225_end2_0:imp225_else1_0:imp225_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_OptP1023USSel.st"
static void __AS__Action__Act_OptP1023USSel(void){
{
if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtCompl=0);

(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk=1);

(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk=0);

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtCompl=0);

(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk=1);

(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk=0);

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtCompl=0);

(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk=0);

(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk=1);

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtCompl=0);

(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk=0);

(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk=1);


}



if(tyP1023McSetHComm.tyGen.tyDrpDnUSSel.bRtCompl){

(tyP1023McSetHComm.tyGen.tyDrpDnUSSel.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx==(unsigned long)(unsigned char)0))){

(p_tyP1023McSetHCommUSSel=((unsigned long)(&tyP1023McSetHComm.tyUSSel)));
(p_tyP1023McSetHCommUSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA)));
(p_tyP1023McSetHCommUSHermes=((unsigned long)(&tyP1023McSetHComm.tyUSHermes)));

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat)));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx==(unsigned long)(unsigned char)1))){

(p_tyP1023McSetHCommUSSel=((unsigned long)(&tyP1023McSetHComm.tyUSSel2)));
(p_tyP1023McSetHCommUSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyUSSMEMA2)));
(p_tyP1023McSetHCommUSHermes=((unsigned long)(&tyP1023McSetHComm.tyUSHermes2)));

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat)));


}

}

}imp227_else2_1:imp227_end2_0:imp227_else1_0:imp227_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_OptP1023DSSel.st"
static void __AS__Action__Act_OptP1023DSSel(void){
{
if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtCompl=0);

(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk=1);

(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk=0);

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtCompl=0);

(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk=0);

(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk=1);
}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtCompl=0);

(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue=1);
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk=1);

(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue=0);
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk=0);

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtCompl=0);

(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue=0);
(tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk=0);

(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue=1);
(tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk=1);

}


if(tyP1023McSetHComm.tyGen.tyDrpDnDSSel.bRtCompl){

(tyP1023McSetHComm.tyGen.tyDrpDnDSSel.bRtCompl=0);

if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx==(unsigned long)(unsigned char)0))){

(p_tyP1023McSetHCommDSSel=((unsigned long)(&tyP1023McSetHComm.tyDSSel)));
(p_tyP1023McSetHCommDSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA)));
(p_tyP1023McSetHCommDSHermes=((unsigned long)(&tyP1023McSetHComm.tyDSHermes)));

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat)));

}else if((((unsigned long)(unsigned char)tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx==(unsigned long)(unsigned char)1))){

(p_tyP1023McSetHCommDSSel=((unsigned long)(&tyP1023McSetHComm.tyDSSel2)));
(p_tyP1023McSetHCommDSSMEMA=((unsigned long)(&tyP1023McSetHComm.tyDSSMEMA2)));
(p_tyP1023McSetHCommDSHermes=((unsigned long)(&tyP1023McSetHComm.tyDSHermes2)));

fUIInRtStatOff(((unsigned long)(&tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat)));


}

}

}imp222_else2_1:imp222_end2_0:imp222_else1_0:imp222_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1023/Act_OptP1023Keypad.st"
static void __AS__Action__Act_OptP1023Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyNumLaneID.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyUSHermes.tyNumLaneID.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyUSHermes.tyNumHostPort.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyUSHermes.tyNumHostPort.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyNumLaneID.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyDSHermes.tyNumLaneID.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp223_else0_6:imp223_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1024/Act_EntP1024Disp.st"
static void __AS__Action__Act_EntP1024Disp(void){
{

(p_tyC0004Navi=((unsigned long)(&tyP1024McSetAntiGap.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0006Set=((unsigned long)(&tyCommon.tySet)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1024McSetAntiGap.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1024McSetAntiGap=((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap)));


(tyP1024McSetAntiGap.tyAntiGapBkUp=*(struct tyLyrP1024McSetAntiGap*)&tyP1024McSetAntiGap.tyAntiGap);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1024/Act_ExitP1024.st"
static void __AS__Action__Act_ExitP1024(void){
{
if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))){
(usiChgPage=1);

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1024McSetAntiGap.tyMsgBoxExitAsk)));

if((((unsigned long)(unsigned char)tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=0);
(tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1024McSetAntiGap.tyMsgBoxHide)));


(tyP1024McSetAntiGap.tyAntiGap=*(struct tyLyrP1024McSetAntiGap*)&tyP1024McSetAntiGap.tyAntiGapBkUp);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(usiChgPage=1);

}else if((((unsigned long)(unsigned char)tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnNo.bRtCompl=0);
(tyP1024McSetAntiGap.tyMsgBoxExitAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1024McSetAntiGap.tyMsgBoxHide)));

(eChgPage=eCurrPage);
(usiChgPage=0);

}

}

}imp40_else1_1:imp40_end1_0:imp40_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1024/Act_OptP1024Navi.st"
static void __AS__Action__Act_OptP1024Navi(void){
{
if((((unsigned long)(unsigned char)tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl=0);

(eChgPage=1020);

}

}imp229_else0_0:imp229_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1024/Act_OptP1024Save.st"
static void __AS__Action__Act_OptP1024Save(void){
{
if((tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.bRtCompl|tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.bRtCompl)){

fUIInRtStatHide(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.bRtCompl=0);
(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.bRtCompl=0);

}

if((((unsigned long)(unsigned char)tyCommon.tySet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){

(tyMcParamWr.tyConvLftSenAntiGapDly.diSigOffTm=tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValue);
(tyMcParamWr.tyConvRgtSenAntiGapDly.diSigOffTm=tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValue);

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);


(tyP1024McSetAntiGap.tyAntiGapBkUp=*(struct tyLyrP1024McSetAntiGap*)&tyP1024McSetAntiGap.tyAntiGap);

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1024McSetAntiGap.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1024McSetAntiGap.tyMsgBoxHide)));


(tyP1024McSetAntiGap.tyAntiGap=*(struct tyLyrP1024McSetAntiGap*)&tyP1024McSetAntiGap.tyAntiGapBkUp);
(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}

}

}

}imp230_else3_0:imp230_end3_0:imp230_else2_1:imp230_end2_0:imp230_else1_0:imp230_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1024/Act_OptP1024Keypad.st"
static void __AS__Action__Act_OptP1024Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp228_else0_1:imp228_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_EntP1040Disp.st"
static void __AS__Action__Act_EntP1040Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyC0012RcpPopUp=((unsigned long)(&tyP1040ProdSet.tyRcpPopUp)));

(p_tyP1040ProdSet=((unsigned long)(&tyP1040ProdSet.tyProdSet)));


{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(udiP1040SelectedRowOld=0);

fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyRcpPopUp.tyLyr.uiRtStat)));

(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue=0);
(tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl=0);



}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Mask.st"
static void __AS__Action__Act_OptP1040Mask(void){
{


if((tyP1040ProdSet.tyProdSet.tyNumProdWidth.bRtCompl|tyP1040ProdSet.tyProdSet.tyStringRecipeNm.bRtCompl|tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.bRtCompl|tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.bRtCompl|tyP1040ProdSet.tyProdSet.tyStringMatchCode.bRtCompl|tyP1040ProdSet.tyProdSet.tyNumProdWidth2.bRtCompl)){

fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat)));

(tyP1040ProdSet.tyProdSet.tyStringRecipeNm.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyStringMatchCode.bRtCompl=0);
}

if((((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow-1].sValue,"")!=0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl==(unsigned long)(unsigned char)0)))){
fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat)));
}else{
fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat)));
}

(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyBtnToXML.uiMaskRtStat))->bit0=((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl==(unsigned long)(unsigned char)0))));
(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyBtnFromXML.uiMaskRtStat))->bit0=((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl==(unsigned long)(unsigned char)0))));



(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyBtnSort.uiMaskRtStat))->bit0=(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[1-1].sValue,"")!=0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl==(unsigned long)(unsigned char)0))));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Save.st"
static void __AS__Action__Act_OptP1040Save(void){
{
if((((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiSaveProdRcpStep==(unsigned long)(unsigned char)0))){

(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxSaveAsk)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnYes.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiSaveProdRcpStep=1);

}else if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiSaveProdRcpStep=99);

}

}else if((((unsigned long)(unsigned char)usiSaveProdRcpStep==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProdRcpInfoIn.sRcpNm; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyProdRcpInfoIn.diWidthInUM=tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue);
(tyProdRcpInfoIn.usiMcMod=tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx);
(tyProdRcpInfoIn.usiFlippedBrd=tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProdRcpInfoIn.sMatchCode; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_tyNtParamCurr)).bLFProdWidth2Prep)){
(tyProdRcpInfoIn.diWidthInUM2=tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue);
}else{
(tyProdRcpInfoIn.diWidthInUM2=tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue);
}

(eProdRcpAct=2);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)2))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

if((((unsigned long)(unsigned char)((*(p_bProdRcpNmEmpty)))==(unsigned long)(unsigned char)1))){
(usiSaveProdRcpStep=2);
}else if((((unsigned long)(unsigned char)((*(p_bProdRcpListFull)))==(unsigned long)(unsigned char)1))){
(usiSaveProdRcpStep=3);
}else{
fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat)));
(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bRefreshProdRcpTable=1);
(bRefreshProdRcpDetail=1);
(usiSaveProdRcpStep=4);
}

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiSaveProdRcpStep=99);
}

}


}else if((((unsigned long)(unsigned char)usiSaveProdRcpStep==(unsigned long)(unsigned char)2))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxSaveNoNm)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxSaveNoNm.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxSaveNoNm.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxSaveNoNm.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiSaveProdRcpStep=99);
}


}else if((((unsigned long)(unsigned char)usiSaveProdRcpStep==(unsigned long)(unsigned char)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxListFull)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxListFull.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxListFull.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxListFull.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiSaveProdRcpStep=99);
}

}else if((((unsigned long)(unsigned char)usiSaveProdRcpStep==(unsigned long)(unsigned char)4))){
if(((__AS__STRING_CMP(tyProdRcpInfoIn.sRcpNm,((*(p_tyProdRcpCurrRcp0)).sRcpNm))==0))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxReloadCurrRcp)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxReloadCurrRcp.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxReloadCurrRcp.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxReloadCurrRcp.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiSaveProdRcpStep=99);
}
}else{
(usiSaveProdRcpStep=99);
}

}else if((((unsigned long)(unsigned char)usiSaveProdRcpStep==(unsigned long)(unsigned char)99))){
(bRefreshProdRcpTable=0);


(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat=1);
(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=1);
(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat=1);


(tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyBtnSave.bValue=0);

(usiSaveProdRcpStep=0);

}

}

}imp237_else1_5:imp237_end1_0:imp237_else0_0:imp237_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040LoadData.st"
static void __AS__Action__Act_OptP1040LoadData(void){
{
(udiP1040SelectedRow=str2udint(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[tyP1040Table.uiSelectedRow-1].sValue));

if(((((unsigned long)udiP1040SelectedRow!=(unsigned long)udiP1040SelectedRowOld))|(((unsigned long)(unsigned char)bRefreshProdRcpDetail==(unsigned long)(unsigned char)1))|bUpdateP1040LoadData|bUpdateP1040LoadData)){

if(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyStringSearch.sValue,"")==0))){

if(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow-1].sValue,"")!=0))){

if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].diWidthInUM));
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].diWidthInUM2));
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].usiMcMod));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[udiP1040SelectedRow-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue=((*(p_tyProdRcpCurrList))[udiP1040SelectedRow-1].diWidthInUM));
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue=((*(p_tyProdRcpCurrList))[udiP1040SelectedRow-1].diWidthInUM2));
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx=((*(p_tyProdRcpCurrList))[udiP1040SelectedRow-1].usiMcMod));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyProdRcpCurrList))[udiP1040SelectedRow-1].usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[udiP1040SelectedRow-1].sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue=100000);
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue=100000);
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultMcMod));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else{

if(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow-1].sValue,"")!=0))){

if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].diWidthInUM));
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].diWidthInUM2));
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].usiMcMod));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[udiP1040SelectedRow-1].sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[udiP1040SelectedRow-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue=((*(p_tyProdRcpFilterList))[udiP1040SelectedRow-1].diWidthInUM));
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue=((*(p_tyProdRcpFilterList))[udiP1040SelectedRow-1].diWidthInUM2));
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx=((*(p_tyProdRcpFilterList))[udiP1040SelectedRow-1].usiMcMod));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyProdRcpFilterList))[udiP1040SelectedRow-1].usiFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[udiP1040SelectedRow-1].sMatchCode); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue=100000);
(tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue=100000);
(tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultMcMod));
(tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx=((*(p_tyMcParamCurr)).usiDefaultFlippedBrd));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}

(bUpdateP1040LoadData=0);
(bRefreshProdRcpDetail=0);
(udiP1040SelectedRowOld=udiP1040SelectedRow);

fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat)));

}

}imp234_else0_0:imp234_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Del.st"
static void __AS__Action__Act_OptP1040Del(void){
{
if((((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiDelProdRcpStep==(unsigned long)(unsigned char)0))){

(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=0);

if(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow-1].sValue,((*(p_tyProdRcpCurrRcp0)).sRcpNm))==0))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiDelProdRcpStep=99);
}

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxDelAsk)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiDelProdRcpStep=1);

}else if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiDelProdRcpStep=99);
}

}

}else if((((unsigned long)(unsigned char)usiDelProdRcpStep==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProdRcpInfoIn.sRcpNm; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow-1].sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=3);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)3))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

if((((unsigned long)(unsigned char)((*(p_bProdRcpNmEmpty)))==(unsigned long)(unsigned char)1))){
(usiDelProdRcpStep=2);
}else if((((unsigned long)(unsigned char)((*(p_bProdRcpNmNotExist)))==(unsigned long)(unsigned char)1))){
(usiDelProdRcpStep=3);
}else{
(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bRefreshProdRcpTable=1);
(bRefreshProdRcpDetail=1);
(usiDelProdRcpStep=99);
}

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxDelErr)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxDelErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxDelErr.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxDelErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiDelProdRcpStep=99);
}

}

}else if((((unsigned long)(unsigned char)usiDelProdRcpStep==(unsigned long)(unsigned char)2))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxDelNmEmpty)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxDelNmEmpty.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxDelNmEmpty.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxDelNmEmpty.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiDelProdRcpStep=99);
}

}else if((((unsigned long)(unsigned char)usiDelProdRcpStep==(unsigned long)(unsigned char)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxDelNmNotExist)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxDelNmNotExist.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiDelProdRcpStep=99);
}

}else if((((unsigned long)(unsigned char)usiDelProdRcpStep==(unsigned long)(unsigned char)99))){
(bRefreshProdRcpTable=0);


(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat=1);
(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=1);


(tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyBtnDelete.bValue=0);

(usiDelProdRcpStep=0);

}

}

}imp231_else1_4:imp231_end1_0:imp231_else0_0:imp231_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Table.st"
static void __AS__Action__Act_OptP1040Table(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)fbP1040Table.sVisuNm; plcstring* zzRValue=(plcstring*)tyP1040Table.sVisuNm; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbP1040Table.udiWorkAreaStartX=359);
(fbP1040Table.udiWorkAreaEndX=770);
(fbP1040Table.udiWorkAreaStartY=93);
(fbP1040Table.udiWorkAreaEndY=415);
(fbP1040Table.udiMinXDist=20);
(fbP1040Table.udiMinYDist=20);
(fbP1040Table.uiSlideScale=c_uiP1040TableSize);
(fbP1040Table.iTotalData=(signed short)c_udiProdRcpMax);
(fbP1040Table.iTotalRow=c_uiP1040TableSize);
((*(unsigned long*)&(fbP1040Table.p_uiSliderStatus))=((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.tyUISlider.uiRtStat)));
((*(unsigned long*)&(fbP1040Table.pa_tyUIHotspot))=((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyHotspot)));
((*(unsigned long*)&(fbP1040Table.p_uiTablePos))=((unsigned long)(&tyP1040Table.uiTablePos)));
((*(unsigned long*)&(fbP1040Table.p_iSliderPos))=((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.tyUISlider.iValue)));
((*(unsigned long*)&(fbP1040Table.p_uiSelectedRow))=((unsigned long)(&tyP1040Table.uiSelectedRow)));
((*(unsigned long*)&(fbP1040Table.p_bTableActive))=((unsigned long)(&tyP1040Table.bTableActive)));
((*(unsigned long*)&(fbP1040Table.p_bSliderActive))=((unsigned long)(&tyP1040Table.bSliderActive)));
fbTableCtrl_v2(&fbP1040Table);


if(((((unsigned long)(unsigned char)tyP1040Table.bTableActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1040Table.bSliderActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bRefreshProdRcpTable==(unsigned long)(unsigned char)1))|bUpdateP1040Table)){
for((i=1);i<=c_uiP1040TableSize;i+=1){
if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP1040Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP1040Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{

if(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyStringSearch.sValue,"")==0))){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP1040Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP1040Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP1040Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP1040Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}

}imp240_endfor1_0:;

if(bUpdateP1040Table){
(bUpdateP1040Table=0);
}
}


if((((unsigned long)(unsigned short)tyP1040Table.uiSelectedRow!=(unsigned long)(unsigned short)tyP1040Table.uiSelectedRowOld))){

for((i=1);i<=c_uiP1040TableSize;i+=1){

if((((unsigned long)(unsigned short)tyP1040Table.uiSelectedRow==(unsigned long)(unsigned short)i))){
(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].usiColor=1);
(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].usiColor=1);
}else{
(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].usiColor=0);
(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].usiColor=0);
}

}imp240_endfor6_0:;

(tyP1040Table.uiSelectedRowOld=tyP1040Table.uiSelectedRow);

}

}imp240_else5_0:imp240_end5_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Search.st"
static void __AS__Action__Act_OptP1040Search(void){
{

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl==(unsigned long)(unsigned char)1))){

if(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyStringSearch.sValue,"")==0))){

for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP1040Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrList))[((tyP1040Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp238_endfor2_0:;

(tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl=0);
(bRefreshProdRcpDetail=1);

if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){
(bFilterSortP1040=1);
}

}else{

(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sProdRcpSearch; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=6);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)6))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP1040Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpFilterList))[((tyP1040Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp238_endfor5_0:;


(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=1);
(tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat=1);


(tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl=0);
(bRefreshProdRcpDetail=1);

if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){
(bFilterSortP1040=1);
}

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){

for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp238_endfor7_0:;

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxListErr)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl=1);
(tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bValue=1);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));


(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat=1);
(tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat=0);
(tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat=1);


(tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl=0);
(bRefreshProdRcpDetail=1);
}

}

}

}

}imp238_else8_0:imp238_end8_0:imp238_else4_1:imp238_end4_0:imp238_end1_0:imp238_else0_0:imp238_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Keypad.st"
static void __AS__Action__Act_OptP1040Keypad(void){
{
if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringRecipeNm.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat)))){
if(((*(p_tyNtParamCurr)).bLFProdWidth2Prep)){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)"Product Width US"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)"Product Width DS"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth2.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)"Product Width DS"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyNumProdWidth.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyNumProdWidth.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringSearch.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringMatchCode.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringMatchCode.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp233_else0_5:imp233_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040Sort.st"
static void __AS__Action__Act_OptP1040Sort(void){
{
if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){
(tyP1040ProdSet.tyProdSet.tyBtnSort.usiTxtIdx=1);

}else{
(tyP1040ProdSet.tyProdSet.tyBtnSort.usiTxtIdx=0);

}

if(tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl){
(bUpdateP1040LoadData=1);
}

if((tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl|(bFilterSortP1040&(((signed long)((*(p_eProdRcpStat)))!=(signed long)6))))){

if(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue){

(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat))->bit0=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sProdRcpSearch; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eProdRcpAct=13);


if(((((signed long)((*(p_eProdRcpStat)))==(signed long)13))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP1040Table.uiTablePos+i)-1)-1].sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpSortedList))[((tyP1040Table.uiTablePos+i)-1)-1].sDisplayInfo); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp239_endfor5_0:;

(bFilterSortP1040=0);


(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat))->bit0=1);

(tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl=0);

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
for((i=1);i<=c_uiP1040TableSize;i+=1){
uint2str(((tyP1040Table.uiTablePos+i)-1),tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp239_endfor6_0:;

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxListErr)));

(bFilterSortP1040=0);

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl=1);
(tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bValue=1);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));


(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat))->bit0=1);


(tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl=0);
}
}

}else{

(bUpdateP1040Table=1);

(tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl=0);

}

}





}imp239_end3_0:imp239_else2_0:imp239_end2_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040ToXML.st"
static void __AS__Action__Act_OptP1040ToXML(void){
{
if((((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiProdRcpToXMLStep==(unsigned long)(unsigned char)0))){


fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxToXMLAsk)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnYes.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpToXMLStep=1);

}else if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpToXMLStep=99);
}

}else if((((unsigned long)(unsigned char)usiProdRcpToXMLStep==(unsigned long)(unsigned char)1))){

(eMpProdRcpAct=3);

if(((((signed long)((*(p_eMpProdRcpStat)))==(signed long)3))&(((signed long)((*(p_eMpProdRcpStatus)))==(signed long)1)))){
(eMpProdRcpAct=0);

(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRefreshProdRcpTable=1);
(bRefreshProdRcpDetail=1);

(usiProdRcpToXMLStep=99);

}else if((((signed long)((*(p_eMpProdRcpStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxToXMLErr)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxToXMLErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxToXMLErr.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxToXMLErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpToXMLStep=99);
}

}

}else if((((unsigned long)(unsigned char)usiProdRcpToXMLStep==(unsigned long)(unsigned char)99))){

(bRefreshProdRcpTable=0);


fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat)));

(tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyBtnToXML.bValue=0);

(usiProdRcpToXMLStep=0);

}

}

}imp241_else1_2:imp241_end1_0:imp241_else0_0:imp241_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040FromXML.st"
static void __AS__Action__Act_OptP1040FromXML(void){
{
if((((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiProdRcpFromXMLStep==(unsigned long)(unsigned char)0))){


fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxFromXMLAsk)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnYes.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpFromXMLStep=1);

}else if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpFromXMLStep=99);
}

}else if((((unsigned long)(unsigned char)usiProdRcpFromXMLStep==(unsigned long)(unsigned char)1))){

(eMpProdRcpAct=2);

if(((((signed long)((*(p_eMpProdRcpStat)))==(signed long)2))&(((signed long)((*(p_eMpProdRcpStatus)))==(signed long)1)))){
(eMpProdRcpAct=0);

(tyP1040ProdSet.tyProdSet.tyBtnSort.bValue=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringSearch.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRefreshProdRcpTable=1);
(bRefreshProdRcpDetail=1);

(usiProdRcpFromXMLStep=2);

}else if((((signed long)((*(p_eMpProdRcpStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxFromXMLErr)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxFromXMLErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxFromXMLErr.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxFromXMLErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpFromXMLStep=99);
}

}

}else if((((unsigned long)(unsigned char)usiProdRcpFromXMLStep==(unsigned long)(unsigned char)2))){

(eProdRcpAct=12);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)12))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
(eProdRcpAct=0);

(usiProdRcpFromXMLStep=99);

}else if((((signed long)((*(p_eProdRcpStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxSaveListErr)));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyMsgBoxSaveListErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyMsgBoxSaveListErr.tyBtnNo.bRtCompl=0);
(tyP1040ProdSet.tyMsgBoxSaveListErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

(usiProdRcpFromXMLStep=99);
}

}

}else if((((unsigned long)(unsigned char)usiProdRcpFromXMLStep==(unsigned long)(unsigned char)99))){

(bRefreshProdRcpTable=0);


fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat)));

(tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl=0);
(tyP1040ProdSet.tyProdSet.tyBtnFromXML.bValue=0);

(usiProdRcpFromXMLStep=0);

}

}

}imp232_else1_3:imp232_end1_0:imp232_else0_0:imp232_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1040/Act_OptP1040RcpPopUp.st"
static void __AS__Action__Act_OptP1040RcpPopUp(void){
{

(((_2byte_bit_field_*)(&tyP1040ProdSet.tyProdSet.tyHotspotShowLRcp.uiRtStat))->bit0=(((__AS__STRING_CMP(tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue,"")!=0))^1));

if((((unsigned long)(unsigned char)tyP1040ProdSet.tyProdSet.tyHotspotShowLRcp.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyProdSet.tyHotspotShowLRcp.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyP1040ProdSet.tyRcpPopUp.tyLyr.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1040ProdSet.tyRcpPopUp.tyStringInfo.sValue; plcstring* zzRValue=(plcstring*)tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)tyP1040ProdSet.tyRcpPopUp.tyHotspotClose.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1040ProdSet.tyRcpPopUp.tyHotspotClose.bRtCompl=0);

fUIInRtStatHide(((unsigned long)(&tyP1040ProdSet.tyRcpPopUp.tyLyr.uiRtStat)));

}

}imp236_else0_1:imp236_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_EntP1050Disp.st"
static void __AS__Action__Act_EntP1050Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0006Set=((unsigned long)(&tyCommon.tySet)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1050LFSetLdrEdit=((unsigned long)(&tyP1050LFSet.tyLdrEdit)));

(p_tyP1050LFSetLdr=((unsigned long)(&tyP1050LFSet.tyLdr)));

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Edit.st"
static void __AS__Action__Act_OptP1050Edit(void){
{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnEdit.bRtCompl==(unsigned long)(unsigned char)1))){

for((i=1);i<=(unsigned short)c_diLFClntNum;i+=1){
if(((__AS__STRING_CMP(tyMcParamWr.a_sLFIPAddr[i-1],"")==0))){
(uiLFStartEditNo=i);
goto imp243_endfor1_0;
}
}imp243_endfor1_0:;

(tyP1050LFSet.tyLdr.tyBtnEdit.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnEdit.bValue=1);

fUIInRtStatOff(((unsigned long)(&tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1050LFSet.tyLdr.tyLyr.uiRtStat)));

(tyP1050LFSet.tyLdrEdit.tyNumMcNum.diValue=str2dint(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[tyP1050Table.uiSelectedRow-1].sValue));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow-1].sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnEdit.bValue==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl==(unsigned long)(unsigned char)1))){

if(((((unsigned long)fIPValid(tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue,((unsigned long)(&a_iIPPart1)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bCheckDone==(unsigned long)(unsigned char)0)))){
for((i=1);i<=(unsigned short)c_diLFClntNum;i+=1){
if((((unsigned long)(unsigned short)i!=(unsigned long)((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)))){
fIPValid(((*(p_tyMcParamCurr)).a_sLFIPAddr[i-1]),((unsigned long)(&a_iIPPart2)));


if((((((signed long)(signed long)(short)a_iIPPart1[1-1]==(signed long)(signed long)(short)a_iIPPart2[1-1]))&(((signed long)(signed long)(short)a_iIPPart1[2-1]==(signed long)(signed long)(short)a_iIPPart2[2-1]))&(((signed long)(signed long)(short)a_iIPPart1[3-1]==(signed long)(signed long)(short)a_iIPPart2[3-1]))&(((signed long)(signed long)(short)a_iIPPart1[4-1]==(signed long)(signed long)(short)a_iIPPart2[4-1])))&((__AS__STRING_CMP(tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue,"")!=0)))){

(bIPDuplicate=1);
goto imp243_endfor5_0;

}
}
}imp243_endfor5_0:;
(bCheckDone=1);
}

if((((unsigned long)fIPValid(tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue,((unsigned long)(&a_iIPPart1)))==(unsigned long)(unsigned char)0))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxIPAddrInvalid)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxIPAddrInvalid.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));

(tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl=0);
(tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue=0);
(bCheckDone=0);
}

}else if((((unsigned long)(unsigned char)bIPDuplicate==(unsigned long)(unsigned char)1))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxIPAddrDuplicate)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxIPAddrDuplicate.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxIPAddrDuplicate.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxIPAddrDuplicate.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));

(bIPDuplicate=0);
(tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl=0);
(tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue=0);
(bCheckDone=0);
}
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow-1].sValue; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((__AS__STRING_CMP(tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sValue,"0000")==0))){
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow-1].usiValueIdx=3);
}else{
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow-1].usiValueIdx=1);
}


for((i=1);i<=c_uiP1050TableSize;i+=1){
uint2str(((tyP0700Table.uiTablePos+i)-1),tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp243_endfor13_0:;

(tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl=0);
(tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue=0);
(tyP1050LFSet.tyLdr.tyBtnEdit.bValue=0);
(bCheckDone=0);

fUIInRtStatHide(((unsigned long)(&tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1050LFSet.tyLdr.tyLyr.uiRtStat)));

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));


(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(tyP1050LFSet.tyLdrEdit.tyBtnOk.bRtCompl=0);
(tyP1050LFSet.tyLdrEdit.tyBtnOk.bValue=0);
(tyP1050LFSet.tyLdr.tyBtnEdit.bValue=0);
(bCheckDone=0);

fUIInRtStatHide(((unsigned long)(&tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1050LFSet.tyLdr.tyLyr.uiRtStat)));
}
}
}
}else if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdrEdit.tyBtnCancel.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyLdrEdit.tyBtnCancel.bRtCompl=0);
(tyP1050LFSet.tyLdrEdit.tyBtnCancel.bValue=0);
(tyP1050LFSet.tyLdr.tyBtnEdit.bValue=0);

fUIInRtStatHide(((unsigned long)(&tyP1050LFSet.tyLdrEdit.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1050LFSet.tyLdr.tyLyr.uiRtStat)));
}
}

if(bLFSettingAutoFill){

(iIPExtract=(LEN(((*(p_sHWInfoIPAddr))))-10));
{int zzIndex; plcstring* zzLValue=(plcstring*)sLFSettingCurrentIP; plcstring* zzRValue=(plcstring*)RIGHT(((*(p_sHWInfoIPAddr))),iIPExtract); for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(iLFSettingCurrentIP=str2int(sLFSettingCurrentIP));

for((i=1);i<=20;i+=1){
{int zzIndex; plcstring* zzLValue=(plcstring*)sLFSettingAutoFill; plcstring* zzRValue=(plcstring*)"192.168.0."; for(zzIndex=0; zzIndex<10l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((iLFSettingCurrentIP+(i*2))-2),sLFSettingTemp,16);
{int zzIndex; plcstring* zzLValue=(plcstring*)sLFSettingAutoFill; plcstring* zzRValue=(plcstring*)CONCAT(sLFSettingAutoFill,sLFSettingTemp); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[i-1]; plcstring* zzRValue=(plcstring*)sLFSettingAutoFill; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyMcParamWr.a_bLFOnline[i-1]=0);
}imp243_endfor16_0:;

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);
(bUpdateP1050Table=1);
(bLFSettingAutoFill=0);
}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){

(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));
(bUpdateP1050Table=1);
(bLFSettingAutoFill=0);
}

}

if(bLFSettingAutoClear){
for((i=1);i<=20;i+=1){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[i-1]; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyMcParamWr.a_bLFOnline[i-1]=0);
}imp243_endfor19_0:;

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);
(bUpdateP1050Table=1);
(bLFSettingAutoClear=0);
}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){

(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));
(bUpdateP1050Table=1);
(bLFSettingAutoClear=0);
}

}

}imp243_else20_1:imp243_end20_0:imp243_else18_0:imp243_end18_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Online.st"
static void __AS__Action__Act_OptP1050Online(void){
{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl==(unsigned long)(unsigned char)1))){
(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]=1);

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow-1].usiValueIdx=2);


(tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnOnline.bValue=0);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));


(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));


(tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnOnline.bValue=0);
}
}
}

}imp247_else2_0:imp247_end2_0:imp247_else1_1:imp247_end1_0:imp247_else0_0:imp247_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Offline.st"
static void __AS__Action__Act_OptP1050Offline(void){
{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnOffline.bRtCompl==(unsigned long)(unsigned char)1))){
(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]=0);

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow-1].usiValueIdx=1);


(tyP1050LFSet.tyLdr.tyBtnOffline.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.bValue=0);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));


(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));


(tyP1050LFSet.tyLdr.tyBtnOffline.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.bValue=0);
}
}
}

}imp246_else2_0:imp246_end2_0:imp246_else1_1:imp246_end1_0:imp246_else0_0:imp246_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Delete.st"
static void __AS__Action__Act_OptP1050Delete(void){
{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)usiDelMcDetailsStep==(unsigned long)(unsigned char)0))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxDelAsk)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxDelAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));

(usiDelMcDetailsStep=1);

}else if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxDelAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));

(tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.bValue=0);
}

}else if((((unsigned long)(unsigned char)usiDelMcDetailsStep==(unsigned long)(unsigned char)1))){



if((((unsigned long)(unsigned char)bLFDeleteOn==(unsigned long)(unsigned char)0))){

__AS__MEMCPY(((unsigned long)(&tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1])),((unsigned long)(&tyMcParamWr.a_sLFIPAddr[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1])),(16*(50-((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1))));
__AS__MEMSET(((unsigned long)(&tyMcParamWr.a_sLFIPAddr[50-1])),0,16);

__AS__MEMCPY(((unsigned long)(&tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1])),((unsigned long)(&tyMcParamWr.a_bLFOnline[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1])),(1*(50-((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1))));
__AS__MEMSET(((unsigned long)(&tyMcParamWr.a_bLFOnline[50-1])),0,1);

(bLFDeleteOn=1);

}

(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow-1].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow-1].usiValueIdx=0);


for((i=1);i<=c_uiP1050TableSize;i+=1){
uint2str(((tyP0700Table.uiTablePos+i)-1),tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp242_endfor5_0:;

(usiDelMcDetailsStep=0);

(tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.bValue=0);

(bLFDeleteOn=0);
(bUpdateP1050Table=1);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxSaveErr)));

(bLFDeleteOn=0);

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));


(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(usiDelMcDetailsStep=0);

(tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.bValue=0);
}

}

}

}

}imp242_else6_0:imp242_end6_0:imp242_else4_1:imp242_end4_0:imp242_else1_1:imp242_end1_0:imp242_else0_0:imp242_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Mask.st"
static void __AS__Action__Act_OptP1050Mask(void){
{
if(tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl){
(tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat=0);

}else if(tyP1050LFSet.tyLdr.tyBtnOffline.bRtCompl){
(tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat=0);

}else if(tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl){
(tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat=0);

}else if(tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl){
(tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat=0);

}else if(tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl){
(tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat=0);

}else{
(tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat=1);
(tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat=1);

if(((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow-1].sValue,"")==0))){
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);

}else{
(tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat=1);

if(((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow-1].sValue,"0000")==0))){
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);

}else{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow-1].usiValueIdx==(unsigned long)(unsigned char)2))){
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=0);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=1);
}else{
(tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat=1);
(tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat=0);
}

}


if(((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow==(unsigned long)(unsigned short)1))&((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[1-1].sValue,"1")==0)))){
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=0);
}else{
(tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat=1);
}


if(((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow==(unsigned long)(unsigned short)c_uiP1050TableSize))&(((unsigned long)str2uint(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[c_uiP1050TableSize-1].sValue)==(unsigned long)c_diLFClntNum)))){
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);
}else{
if(((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[(tyP1050Table.uiSelectedRow+1)-1].sValue,"")==0))){
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=0);
}else{
(tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat=1);
}
}

}

}

}imp245_end6_0:imp245_end5_0:imp245_end1_0:imp245_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Table.st"
static void __AS__Action__Act_OptP1050Table(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)fbP1050Table.sVisuNm; plcstring* zzRValue=(plcstring*)tyP1050Table.sVisuNm; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbP1050Table.udiWorkAreaStartX=96);
(fbP1050Table.udiWorkAreaEndX=554);
(fbP1050Table.udiWorkAreaStartY=75);
(fbP1050Table.udiWorkAreaEndY=455);
(fbP1050Table.udiMinXDist=20);
(fbP1050Table.udiMinYDist=20);
(fbP1050Table.uiSlideScale=c_uiP1050TableSize);
(fbP1050Table.iTotalData=(signed short)c_diLFClntNum);
(fbP1050Table.iTotalRow=c_uiP1050TableSize);
fbP1050Table.uiSliderStatus=&tyP1050LFSet.tyLdr.tyTable1List.tyUISlider.uiRtStat;fbP1050Table.a_tyUIHotspot=&tyP1050LFSet.tyLdr.tyTable1List.a_tyHotspot;fbP1050Table.uiTablePos=&tyP1050Table.uiTablePos;fbP1050Table.iSliderPos=&tyP1050LFSet.tyLdr.tyTable1List.tyUISlider.iValue;fbTableCtrl(&fbP1050Table);

(tyP1050Table.uiSelectedRow=fbP1050Table.uiSelectedRow);
(tyP1050Table.bTableActive=fbP1050Table.bTableActive);
(tyP1050Table.bSliderActive=fbP1050Table.bSliderActive);


if(((((unsigned long)(unsigned char)tyP1050Table.bTableActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1050Table.bSliderActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)3))|bUpdateP1050Table)){
for((i=1);i<=c_uiP1050TableSize;i+=1){
uint2str(((tyP1050Table.uiTablePos+i)-1),tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+i)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue,"")==0))){
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=0);
}else if(((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue,"0000")==0))){
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=3);
}else{
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiValueIdx=((unsigned char)(((*(p_tyMcParamCurr)).a_bLFOnline[((tyP1050Table.uiTablePos+i)-1)-1])&1)+1));
}

}imp251_endfor1_0:;

if(bUpdateP1050Table){
(bUpdateP1050Table=0);
}

}


if((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow!=(unsigned long)(unsigned short)tyP1050Table.uiSelectedRowOld))){
for((i=1);i<=c_uiP1050TableSize;i+=1){
if((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow==(unsigned long)(unsigned short)i))){
(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].usiColor=1);
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=1);

}else{
(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].usiColor=0);
(tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i-1].usiColor=0);

}

}imp251_endfor5_0:;

(tyP1050Table.uiSelectedRowOld=tyP1050Table.uiSelectedRow);

}

}imp251_else4_0:imp251_end4_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050ShftUp.st"
static void __AS__Action__Act_OptP1050ShftUp(void){
{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)0))){
if(((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow==(unsigned long)(unsigned short)1))&((__AS__STRING_CMP(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[1-1].sValue,"1")==0)))){
(tyP1050LFSet.tyLdr.tyBtnShftUp.bValue=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl=0);
}else{
(usiTableShftStep=1);
}

}else if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)1))){
if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sLFIPAddrTemp; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]; plcstring* zzRValue=(plcstring*)sLFIPAddrTemp; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bOnlineTemp=((*(p_tyMcParamCurr)).a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]));

(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]=((*(p_tyMcParamCurr)).a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]));
(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]=bOnlineTemp);
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
__AS__MEMSET(((unsigned long)(&tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1])),0,16);

(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-2)-1]=((*(p_tyMcParamCurr)).a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]));
(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]=0);
}

(usiTableShftStep=2);

}else if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)2))){
(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);


if((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow!=(unsigned long)(unsigned short)1))){
(fbP1050Table.bSelectedRowMnl=1);
(fbP1050Table.uiSelectedRowMnl=(tyP1050Table.uiSelectedRow-1));
}else{
(fbP1050Table.bTablePosMinus=1);
}

(usiTableShftStep=3);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));


(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(usiTableShftStep=0);

(tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.bValue=0);
}
}

}else if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)3))){

for((i=1);i<=c_uiP0700TableSize;i+=1){
uint2str(((tyP0700Table.uiTablePos+i)-1),tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp250_endfor7_0:;


(fbP1050Table.bSelectedRowMnl=0);
(fbP1050Table.bTablePosMinus=0);

(usiTableShftStep=0);

(tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnShftUp.bValue=0);
}
}

}imp250_else1_3:imp250_end1_0:imp250_else0_0:imp250_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050ShftDwn.st"
static void __AS__Action__Act_OptP1050ShftDwn(void){
{
if((((unsigned long)(unsigned char)tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)0))){
if(((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow==(unsigned long)(unsigned short)c_uiP1050TableSize))&(((unsigned long)str2uint(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[c_uiP1050TableSize-1].sValue)==(unsigned long)c_diLFClntNum)))){
(tyP1050LFSet.tyLdr.tyBtnShftDwn.bValue=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl=0);
}else{
(usiTableShftStep=1);
}

}else if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)1))){
if(((__AS__STRING_CMP(((*(p_tyMcParamCurr)).a_sLFIPAddr[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sLFIPAddrTemp; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]; plcstring* zzRValue=(plcstring*)sLFIPAddrTemp; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bOnlineTemp=((*(p_tyMcParamCurr)).a_bLFOnline[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]));

(tyMcParamWr.a_bLFOnline[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]=((*(p_tyMcParamCurr)).a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]));
(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]=bOnlineTemp);

}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMcParamWr.a_sLFIPAddr[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
__AS__MEMSET(((unsigned long)(&tyMcParamWr.a_sLFIPAddr[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1])),0,16);

(tyMcParamWr.a_bLFOnline[(tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1]=((*(p_tyMcParamCurr)).a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]));
(tyMcParamWr.a_bLFOnline[((tyP1050Table.uiTablePos+tyP1050Table.uiSelectedRow)-1)-1]=0);
}

(usiTableShftStep=2);

}else if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)2))){
(eMcParamAct=3);

if(((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){
(eMcParamAct=0);


if((((unsigned long)(unsigned short)tyP1050Table.uiSelectedRow!=(unsigned long)(unsigned short)c_uiP1050TableSize))){
(fbP1050Table.bSelectedRowMnl=1);
(fbP1050Table.uiSelectedRowMnl=(tyP1050Table.uiSelectedRow+1));
}else{
(fbP1050Table.bTablePosPlus=1);
}

(usiTableShftStep=3);

}else if((((signed long)((*(p_eMcParamStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1050LFSet.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1050LFSet.tyMsgBoxHide)));


(tyMcParamWr=*(struct tyMcParam*)&((*(p_tyMcParamCurr))));

(usiTableShftStep=0);

(tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.bValue=0);
}
}

}else if((((unsigned long)(unsigned char)usiTableShftStep==(unsigned long)(unsigned char)3))){

for((i=1);i<=c_uiP0700TableSize;i+=1){
uint2str(((tyP0700Table.uiTablePos+i)-1),tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i-1].sValue,255);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyMcParamCurr)).a_sLFIPAddr[((tyP0700Table.uiTablePos+i)-1)-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}imp249_endfor7_0:;


(fbP1050Table.bSelectedRowMnl=0);
(fbP1050Table.bTablePosPlus=0);

(usiTableShftStep=0);

(tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl=0);
(tyP1050LFSet.tyLdr.tyBtnShftDwn.bValue=0);
}
}

}imp249_else1_3:imp249_end1_0:imp249_else0_0:imp249_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1050/Act_OptP1050Keypad.st"
static void __AS__Action__Act_OptP1050Keypad(void){
{
if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1050LFSet.tyLdrEdit.tyStringIPAddr.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdrEdit.tyStringIPAddr.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1050LFSet.tyLdr.tyNumAfterOven.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdr.tyNumAfterOven.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1050LFSet.tyLdr.tyNumBeforeOven.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdr.tyNumBeforeOven.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1050LFSet.tyLdr.tyNumAfterOven2.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdr.tyNumAfterOven2.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1050LFSet.tyLdr.tyNumBeforeOven2.uiRtStat)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1050LFSet.tyLdr.tyNumBeforeOven2.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp244_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_EntP1080Disp.st"
static void __AS__Action__Act_EntP1080Disp(void){
{

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1080UsrMgmt=((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt)));

(p_tyP1080UsrMgmtAct=((unsigned long)(&tyP1080UsrMgmt.tyCreate)));

fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));


if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx>(unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueMaxIdx))){
(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.bRtCompl=1);
}

}imp33_else0_0:imp33_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_ExitP1080.st"
static void __AS__Action__Act_ExitP1080(void){
{
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bRtCompl=0);

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bRtCompl=0);

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bValue=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bRtCompl=0);

(usiChgPage=1);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_OptP1080EditAccess.st"
static void __AS__Action__Act_OptP1080EditAccess(void){
{
if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.bRtCompl=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.bValue=0);

(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.bRtCompl=1);

(eChgPage=1081);

}

}imp254_else0_0:imp254_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_OptP1080AddUsr.st"
static void __AS__Action__Act_OptP1080AddUsr(void){
{

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyP1080UsrMgmtAct=((unsigned long)(&tyP1080UsrMgmt.tyCreate)));

fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx=0);

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bRtCompl=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue=1);
}


if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)usiSaveUsrMgmtStep==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sUsrNm; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sPw; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyUsrMgmtInfoIn.eUsrLvl=(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx+1));

(eUsrMgmtAct=5);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)5))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

if((((unsigned long)(unsigned char)((*(p_bUsrMgmtNmEmpty)))==(unsigned long)(unsigned char)1))){
(usiSaveUsrMgmtStep=1);
}else if((((unsigned long)(unsigned char)((*(p_bUsrMgmtListFull)))==(unsigned long)(unsigned char)1))){
(usiSaveUsrMgmtStep=2);
}else if((((unsigned long)(unsigned char)((*(p_bUsrMgmtNmExist)))==(unsigned long)(unsigned char)1))){
(usiSaveUsrMgmtStep=3);
}else{
(bRefreshUsrMgmtTable=1);
(usiSaveUsrMgmtStep=99);
}
}else if((((signed long)((*(p_eUsrMgmtStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxAddErr)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxAddErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxAddErr.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxAddErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiSaveUsrMgmtStep=99);
}
}


}else if((((unsigned long)(unsigned char)usiSaveUsrMgmtStep==(unsigned long)(unsigned char)1))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxAddParamErr)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxAddParamErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxAddParamErr.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxAddParamErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx=0);

(tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl=0);
(tyP1080UsrMgmt.tyCreate.tyBtnOk.bValue=0);

(usiSaveUsrMgmtStep=0);
}


}else if((((unsigned long)(unsigned char)usiSaveUsrMgmtStep==(unsigned long)(unsigned char)2))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxListFull)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiSaveUsrMgmtStep=99);
}


}else if((((unsigned long)(unsigned char)usiSaveUsrMgmtStep==(unsigned long)(unsigned char)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxAddNmExist)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxAddNmExist.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxAddNmExist.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxAddNmExist.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx=0);

(tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl=0);
(tyP1080UsrMgmt.tyCreate.tyBtnOk.bValue=0);

(usiSaveUsrMgmtStep=0);
}

}else if((((unsigned long)(unsigned char)usiSaveUsrMgmtStep==(unsigned long)(unsigned char)99))){
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue=0);

(tyP1080UsrMgmt.tyCreate.tyBtnOk.bRtCompl=0);
(tyP1080UsrMgmt.tyCreate.tyBtnOk.bValue=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyCreate.tyDrpDnLvl.usiValueIdx=0);

(usiSaveUsrMgmtStep=0);

fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat)));

}

}else if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyCreate.tyBtnCancel.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyCreate.tyLyr.uiRtStat)));

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.bValue=0);

(tyP1080UsrMgmt.tyCreate.tyBtnCancel.bRtCompl=0);
(tyP1080UsrMgmt.tyCreate.tyBtnCancel.bValue=0);
}

}

}imp252_else2_1:imp252_end2_0:imp252_else1_0:imp252_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_OptP1080DelUsr.st"
static void __AS__Action__Act_OptP1080DelUsr(void){
{
if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)usiDelUsrMgmtStep==(unsigned long)(unsigned char)0))){

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.uiMaskRtStat=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.uiMaskRtStat=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.uiMaskRtStat=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxDelAsk)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnYes.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiDelUsrMgmtStep=1);

}else if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxDelAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiDelUsrMgmtStep=99);
}

}else if((((unsigned long)(unsigned char)usiDelUsrMgmtStep==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sUsrNm; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[tyP1080Table.uiSelectedRow-1].sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyUsrMgmtInfoIn.eUsrLvl=(unsigned long)(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[tyP1080Table.uiSelectedRow-1].usiValueIdx-1));

(eUsrMgmtAct=7);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)7))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

if((((unsigned long)(unsigned char)((*(p_bUsrMgmtUnableDelete)))==(unsigned long)(unsigned char)1))){
(usiDelUsrMgmtStep=2);
}else if((((unsigned long)(unsigned char)((*(p_bUsrMgmtNmEmpty)))==(unsigned long)(unsigned char)1))){
(usiDelUsrMgmtStep=3);
}else if((((unsigned long)(unsigned char)((*(p_bUsrMgmtNmNotExist)))==(unsigned long)(unsigned char)1))){
(usiDelUsrMgmtStep=4);
}else{
(bRefreshUsrMgmtTable=1);
(usiDelUsrMgmtStep=99);
}
}

}else if((((unsigned long)(unsigned char)usiDelUsrMgmtStep==(unsigned long)(unsigned char)2))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxDelLastAdminErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiDelUsrMgmtStep=99);
}


}else if((((unsigned long)(unsigned char)usiDelUsrMgmtStep==(unsigned long)(unsigned char)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxDelParamErr)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxDelParamErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxDelParamErr.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxDelParamErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiDelUsrMgmtStep=99);
}


}else if((((unsigned long)(unsigned char)usiDelUsrMgmtStep==(unsigned long)(unsigned char)4))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxDelNmNotExist)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxDelNmNotExist.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiDelUsrMgmtStep=99);
}

}else if((((unsigned long)(unsigned char)usiDelUsrMgmtStep==(unsigned long)(unsigned char)99))){

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnNewUsr.uiMaskRtStat=1);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.uiMaskRtStat=1);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat=1);
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.uiMaskRtStat=1);


(tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bRtCompl=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.bValue=0);

(usiDelUsrMgmtStep=0);
}

}

}imp253_else1_5:imp253_end1_0:imp253_else0_0:imp253_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_OptP1080EditUsr.st"
static void __AS__Action__Act_OptP1080EditUsr(void){
{

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bRtCompl==(unsigned long)(unsigned char)1))){
(p_tyP1080UsrMgmtAct=((unsigned long)(&tyP1080UsrMgmt.tyEdit)));

fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyEdit.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));

(udiP1080SelectedRow=str2udint(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol0[tyP1080Table.uiSelectedRow-1].sValue));
(usiP1080SelectedLvl=tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[tyP1080Table.uiSelectedRow-1].usiValueIdx);

switch(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx){
case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtAllList))[udiP1080SelectedRow-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtAllList))[udiP1080SelectedRow-1].eUsrLvl)-1));

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtLv2List))[udiP1080SelectedRow-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtLv2List))[udiP1080SelectedRow-1].eUsrLvl)-1));

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtLv3List))[udiP1080SelectedRow-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtLv3List))[udiP1080SelectedRow-1].eUsrLvl)-1));

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtAdminList))[udiP1080SelectedRow-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtAdminList))[udiP1080SelectedRow-1].eUsrLvl)-1));
}break;}

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)(unsigned char)usiP1080SelectedLvl==(unsigned long)(unsigned char)5))|(((unsigned long)(unsigned char)usiP1080SelectedLvl==(unsigned long)(unsigned char)6)))){
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx=3);
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx=4);
}else{
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMinIdx=0);
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueMaxIdx=2);
}

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bRtCompl=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue=1);

}


if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyEdit.tyBtnOk.bRtCompl==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)usiEditUsrMgmtStep==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sUsrNm; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringUsrNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtInfoIn.sPw; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringPw.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyUsrMgmtInfoIn.eUsrLvl=(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx+1));

(eUsrMgmtAct=6);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)6))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);

if((((unsigned long)(unsigned char)((*(p_bUsrMgmtNmEmpty)))==(unsigned long)(unsigned char)1))){
(usiEditUsrMgmtStep=1);
}else if((((unsigned long)(unsigned char)((*(p_bUsrMgmtListFull)))==(unsigned long)(unsigned char)1))){
(usiEditUsrMgmtStep=2);
}else{
(bRefreshUsrMgmtTable=1);
(usiEditUsrMgmtStep=99);
}
}else if((((signed long)((*(p_eUsrMgmtStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxEditErr)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxEditErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxEditErr.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxEditErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiEditUsrMgmtStep=99);
}
}


}else if((((unsigned long)(unsigned char)usiEditUsrMgmtStep==(unsigned long)(unsigned char)1))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxEditParamErr)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxEditParamErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxEditParamErr.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxEditParamErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1040ProdSet.tyMsgBoxHide)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyEdit.tyStringPw.sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyEdit.tyDrpDnLvl.usiValueIdx=0);

(tyP1080UsrMgmt.tyEdit.tyBtnOk.bRtCompl=0);
(tyP1080UsrMgmt.tyEdit.tyBtnOk.bValue=0);

(usiEditUsrMgmtStep=0);
}


}else if((((unsigned long)(unsigned char)usiEditUsrMgmtStep==(unsigned long)(unsigned char)2))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxListFull)));

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bRtCompl=0);
(tyP1080UsrMgmt.tyMsgBoxListFull.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1080UsrMgmt.tyMsgBoxHide)));

(usiEditUsrMgmtStep=99);
}

}else if((((unsigned long)(unsigned char)usiEditUsrMgmtStep==(unsigned long)(unsigned char)99))){
fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyEdit.tyLyr.uiRtStat)));

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue=0);

(tyP1080UsrMgmt.tyEdit.tyBtnOk.bRtCompl=0);
(tyP1080UsrMgmt.tyEdit.tyBtnOk.bValue=0);

(usiEditUsrMgmtStep=0);
}

}else if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyEdit.tyBtnCancel.bRtCompl==(unsigned long)(unsigned char)1))){
fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyLyr.uiRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyEdit.tyLyr.uiRtStat)));

(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.bValue=0);

(tyP1080UsrMgmt.tyEdit.tyBtnCancel.bRtCompl=0);
(tyP1080UsrMgmt.tyEdit.tyBtnCancel.bValue=0);
}
}

}imp255_else4_1:imp255_end4_0:imp255_else3_0:imp255_end3_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_OptP1080Keypad.st"
static void __AS__Action__Act_OptP1080Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1080UsrMgmt.tyCreate.tyStringUsrNm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringUsrNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1080UsrMgmt.tyCreate.tyStringPw.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1080UsrMgmt.tyEdit.tyStringPw.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1080UsrMgmt.tyCreate.tyStringPw.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp256_else0_2:imp256_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1080/Act_OptP1080Table.st"
static void __AS__Action__Act_OptP1080Table(void){
{
{int zzIndex; plcstring* zzLValue=(plcstring*)fbP1080Table.sVisuNm; plcstring* zzRValue=(plcstring*)tyP1080Table.sVisuNm; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbP1080Table.udiWorkAreaStartX=50);
(fbP1080Table.udiWorkAreaEndX=497);
(fbP1080Table.udiWorkAreaStartY=109);
(fbP1080Table.udiWorkAreaEndY=458);
(fbP1080Table.udiMinXDist=20);
(fbP1080Table.udiMinYDist=20);
(fbP1080Table.uiSlideScale=c_uiP1080TableSize);
(fbP1080Table.iTotalData=(signed short)c_udiUsrMgmtMax);
(fbP1080Table.iTotalRow=c_uiP1080TableSize);
fbP1080Table.uiSliderStatus=&tyP1080UsrMgmt.tyUsrMgmt.tyTableList.tyUISlider.uiRtStat;fbP1080Table.a_tyUIHotspot=&tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyHotspot;fbP1080Table.uiTablePos=&tyP1080Table.uiTablePos;fbP1080Table.iSliderPos=&tyP1080UsrMgmt.tyUsrMgmt.tyTableList.tyUISlider.iValue;fbTableCtrl(&fbP1080Table);

(tyP1080Table.uiSelectedRow=fbP1080Table.uiSelectedRow);
(tyP1080Table.bTableActive=fbP1080Table.bTableActive);
(tyP1080Table.bSliderActive=fbP1080Table.bSliderActive);


if(((((unsigned long)(unsigned char)tyP1080Table.bTableActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)tyP1080Table.bSliderActive==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bRefreshUsrMgmtTable==(unsigned long)(unsigned char)1)))){
for((i=1);i<=c_uiP1080TableSize;i+=1){

uint2str(((tyP1080Table.uiTablePos+i)-1),tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol0[i-1].sValue,255);


switch(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx){

case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtAllList))[((tyP1080Table.uiTablePos+i)-1)-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtAllList))[((tyP1080Table.uiTablePos+i)-1)-1].eUsrLvl)+1));

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtLv2List))[((tyP1080Table.uiTablePos+i)-1)-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtLv2List))[((tyP1080Table.uiTablePos+i)-1)-1].eUsrLvl)+1));

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtLv3List))[((tyP1080Table.uiTablePos+i)-1)-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtLv3List))[((tyP1080Table.uiTablePos+i)-1)-1].eUsrLvl)+1));

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].sValue; plcstring* zzRValue=(plcstring*)((*(p_tyUsrMgmtAdminList))[((tyP1080Table.uiTablePos+i)-1)-1].sUsrNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiValueIdx=(unsigned char)(((*(p_tyUsrMgmtAdminList))[((tyP1080Table.uiTablePos+i)-1)-1].eUsrLvl)+1));
}break;}
}imp257_endfor1_0:;
(bRefreshUsrMgmtTable=0);
}

if((((unsigned long)(unsigned char)tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.bRtCompl=0);
(bRefreshUsrMgmtTable=1);
}


if((((unsigned long)(unsigned short)tyP1080Table.uiSelectedRow!=(unsigned long)(unsigned short)tyP1080Table.uiSelectedRowOld))){
for((i=1);i<=c_uiP1080TableSize;i+=1){
if((((unsigned long)(unsigned short)tyP1080Table.uiSelectedRow==(unsigned long)(unsigned short)i))){
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].usiColor=1);
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiColor=1);

}else{
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i-1].usiColor=0);
(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i-1].usiColor=0);

}
}imp257_endfor5_0:;

(tyP1080Table.uiSelectedRowOld=tyP1080Table.uiSelectedRow);

}

if(((__AS__STRING_CMP(tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[tyP1080Table.uiSelectedRow-1].sValue,"")==0))){
fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat)));
fUIInRtStatOff(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.uiMaskRtStat)));
}else{
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat)));
fUIInRtStatHide(((unsigned long)(&tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.uiMaskRtStat)));
}

}imp257_end7_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1081/Act_EntP1081Disp.st"
static void __AS__Action__Act_EntP1081Disp(void){
{

(p_tyC0004Navi=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyNaviBack)));

(p_tyC0005Main=((unsigned long)(&tyCommon.tyMain)));

(p_tyC0006Set=((unsigned long)(&tyCommon.tySet)));

(p_tyC0007Notif=((unsigned long)(&tyCommon.tyNotif)));

(p_tyC0008MsgBox=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide)));

(p_tyC0009Info=((unsigned long)(&tyCommon.tyInfo)));

(p_tyC0011Loading=((unsigned long)(&tyCommon.tyLoading)));

(p_tyP1081UsrMgmtUsrAccessRgtSel=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel)));
(p_tyP1081UsrMgmtUsrAccessRgt=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1)));



(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.usiValueIdx=0);


(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1BkUp=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2BkUp=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3BkUp=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3);

}}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1081/Act_ExitP1081.st"
static void __AS__Action__Act_ExitP1081(void){
{
if((((unsigned long)(unsigned char)((_2byte_bit_field_*)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat))->bit0==(unsigned long)(unsigned char)0))){
(usiChgPage=1);

}else{

(p_tyC0008MsgBox=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk)));

if((((unsigned long)(unsigned char)tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnYes.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnYes.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnYes.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide)));


(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1BkUp);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2BkUp);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3BkUp);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

(usiChgPage=1);

}else if((((unsigned long)(unsigned char)tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnNo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxExitAsk.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide)));

(eChgPage=eCurrPage);
(usiChgPage=0);

}

}

}imp42_else1_1:imp42_end1_0:imp42_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1081/Act_OptP1081Navi.st"
static void __AS__Action__Act_OptP1081Navi(void){
{
if((((unsigned long)(unsigned char)tyP1081UsrMgmtUsrAccessRgt.tyNaviBack.tyBtnBack.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1081UsrMgmtUsrAccessRgt.tyNaviBack.tyBtnBack.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyNaviBack.tyBtnBack.bValue=0);

(eChgPage=1080);
}

}imp260_else0_0:imp260_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1081/Act_OptP1081Load.st"
static void __AS__Action__Act_OptP1081Load(void){
{
if((((unsigned long)(unsigned char)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.bRtCompl=0);

switch(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.usiValueIdx){
case 0:{
(p_tyP1081UsrMgmtUsrAccessRgt=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1)));
}break;case 1:{
(p_tyP1081UsrMgmtUsrAccessRgt=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2)));
}break;case 2:{
(p_tyP1081UsrMgmtUsrAccessRgt=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3)));
}break;}

}

}imp259_case1_2:imp259_endcase1_0:imp259_else0_0:imp259_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1081/Act_OptP1081Save.st"
static void __AS__Action__Act_OptP1081Save(void){
{


































if((tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOps.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSel.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSel.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnAlm.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnBffrInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOvenInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFCtrl.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManual.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnSimu.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLang.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnChgParam.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManualFBOnly.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOps.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSel.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSel.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnAlm.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnBffrInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOvenInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFCtrl.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManual.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnSimu.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLang.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnChgParam.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManualFBOnly.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOps.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSel.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSel.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnAlm.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnBffrInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOvenInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagInfo.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFCtrl.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManual.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnSimu.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLang.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFSet.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnChgParam.bRtCompl|tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManualFBOnly.bRtCompl)){

fUIInRtStatHide(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));


(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOps.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSel.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSel.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnAlm.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnBffrInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOvenInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFCtrl.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManual.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnSimu.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLang.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnChgParam.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManualFBOnly.bRtCompl=0);


(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOps.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSel.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSel.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnAlm.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnBffrInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOvenInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFCtrl.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManual.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnSimu.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLang.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnChgParam.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManualFBOnly.bRtCompl=0);


(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOps.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSel.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSel.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnAlm.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnBffrInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOvenInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagInfo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFCtrl.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManual.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnSimu.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLang.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFSet.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnChgParam.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManualFBOnly.bRtCompl=0);

}

if((((unsigned long)(unsigned char)tyCommon.tySet.tyBtnSave.bRtCompl==(unsigned long)(unsigned char)1))){

switch(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.usiValueIdx){
case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtAccessRightLvl1Wr.sNm; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyUsrMgmtAccessRightLvl1Wr.bOpt=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOps.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bProdSel=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSel.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bMagSel=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSel.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bMcInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcInfo.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bAlm=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnAlm.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bBffrInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnBffrInfo.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bOvenInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnOvenInfo.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bMagInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagInfo.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bLFCtrl=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFCtrl.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bManual=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManual.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bSimulation=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnSimu.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bProdSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnProdSet.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bMagSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMagSet.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bMcSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnMcSet.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bLang=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLang.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bLFSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnLFSet.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bChgParam=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnChgParam.bValue);
(tyUsrMgmtAccessRightLvl1Wr.bManualFBOnly=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyBtnManualFBOnly.bValue);

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtAccessRightLvl2Wr.sNm; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyUsrMgmtAccessRightLvl2Wr.bOpt=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOps.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bProdSel=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSel.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bMagSel=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSel.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bMcInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcInfo.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bAlm=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnAlm.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bBffrInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnBffrInfo.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bOvenInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnOvenInfo.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bMagInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagInfo.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bLFCtrl=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFCtrl.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bManual=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManual.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bSimulation=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnSimu.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bProdSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnProdSet.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bMagSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMagSet.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bMcSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnMcSet.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bLang=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLang.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bLFSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnLFSet.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bChgParam=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnChgParam.bValue);
(tyUsrMgmtAccessRightLvl2Wr.bManualFBOnly=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyBtnManualFBOnly.bValue);

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyUsrMgmtAccessRightLvl3Wr.sNm; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyUsrMgmtAccessRightLvl3Wr.bOpt=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOps.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bProdSel=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSel.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bMagSel=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSel.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bMcInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcInfo.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bAlm=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnAlm.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bBffrInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnBffrInfo.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bOvenInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnOvenInfo.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bMagInfo=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagInfo.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bLFCtrl=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFCtrl.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bManual=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManual.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bSimulation=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnSimu.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bProdSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnProdSet.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bMagSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMagSet.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bMcSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnMcSet.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bLang=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLang.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bLFSet=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnLFSet.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bChgParam=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnChgParam.bValue);
(tyUsrMgmtAccessRightLvl3Wr.bManualFBOnly=tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyBtnManualFBOnly.bValue);

}break;}

(eUsrMgmtAct=8);

if(((((signed long)((*(p_eUsrMgmtStat)))==(signed long)8))&(((signed long)((*(p_eUsrMgmtStatus)))==(signed long)1)))){
(eUsrMgmtAct=0);


(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1BkUp=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2BkUp=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3BkUp=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3);

switch(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.usiValueIdx){
case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv1Nm; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv2Nm; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyUITxtSnippets.sUsrMgmtUsrLv3Nm; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sValue; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;}

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}else if((((signed long)((*(p_eUsrMgmtStatus)))==(signed long)3))){
(p_tyC0008MsgBox=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxSaveErr)));

if((((unsigned long)(unsigned char)tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxSaveErr.tyBtnNo.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxSaveErr.tyBtnNo.bRtCompl=0);
(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxSaveErr.tyBtnNo.bValue=0);

(p_tyC0008MsgBox=((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide)));


(tyUsrMgmtAccessRightLvl1Wr=*(struct tyUsrMgmtAccessRight*)&((*(p_tyUsrMgmtFullData)).tyAccessRightLvl1));
(tyUsrMgmtAccessRightLvl2Wr=*(struct tyUsrMgmtAccessRight*)&((*(p_tyUsrMgmtFullData)).tyAccessRightLvl2));
(tyUsrMgmtAccessRightLvl3Wr=*(struct tyUsrMgmtAccessRight*)&((*(p_tyUsrMgmtFullData)).tyAccessRightLvl3));

(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1BkUp);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2BkUp);
(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3=*(struct tyLyrP1081UsrMgmtUsrAccessRgt*)&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3BkUp);

(tyCommon.tySet.tyBtnSave.bRtCompl=0);

fUIInRtStatOff(((unsigned long)(&tyCommon.tySet.tyBtnSave.uiMaskRtStat)));

}

}

}

}imp261_else5_0:imp261_end5_0:imp261_else3_1:imp261_end3_0:imp261_else1_0:imp261_end1_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P1081/Act_OptP1081Keypad.st"
static void __AS__Action__Act_OptP1081Keypad(void){
{
if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1.tyStringNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2.tyStringNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fUIOutRtStatTPIsOpen(((unsigned long)(&tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.uiRtStat)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyProperty.tyKeypad.tyTxtTitle.sTxt; plcstring* zzRValue=(plcstring*)tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3.tyStringNm.sKeypadTitle; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp258_else0_2:imp258_end0_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Act_Background/Action/P0002_P1081/Act_OptP0002ToP1081UnlockCoverPB.st"
static void __AS__Action__Act_OptP0002ToP1081UnlockCoverPB(void){
{

if((((signed long)((*(p_tyNtParamCurr)).tyDOSettings.diBypassTopCover1)>(signed long)0))){

if(((*(p_bAlarmErr)))){
(bCoverPB1Timer=0);
(fbCoverPB1CountDownTm.IN=0);;TON(&fbCoverPB1CountDownTm);
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=0);
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=0);
}


if((~((*(p_tyDI)).bCoverUnlockPB1)&Edge0009500000&1?((Edge0009500000=((*(p_tyDI)).bCoverUnlockPB1)&1),1):((Edge0009500000=((*(p_tyDI)).bCoverUnlockPB1)&1),0))){
if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig2)==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)0))){
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=1);
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue);
(bCoverPB1Timer=1);
}else{
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=0);
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue);
(bCoverPB1Timer=0);
}
}
}


if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bRtCompl=0);
if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig2)==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue);
if((((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)1))){
(bCoverPB1Timer=1);
}else{
(bCoverPB1Timer=0);
}
}else{
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=1);
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue);
}

}else if((((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bRtCompl==(unsigned long)(unsigned char)1))){
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bRtCompl=0);
if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig)==(unsigned long)(unsigned char)1))){
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue);
if((((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)1))){
(bCoverPB1Timer=1);
}else{
(bCoverPB1Timer=0);
}
}else{
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=1);
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue);
}

}

(bBypassTopCover1=(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue|tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue));


if((((unsigned long)(unsigned char)tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)1))){

if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromUS)>(signed long)0))){
(bUnlockCover1Req=1);


if(((((unsigned long)(unsigned char)((*(p_bOpsInvertStepAWMove)))==(unsigned long)(unsigned char)0))&((((signed long)((*(p_eConvStatus)))!=(signed long)2))&(((signed long)((*(p_eInvertStatus)))!=(signed long)2)))&((((*(p_tyDI)).bInShutterCloseRS)&((*(p_tyDI)).bOutShutterCloseRS)&((*(p_bOpsSafeMode))))|(((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)0)))&(((*(p_tyDI)).bSafetySigFromUS)&((*(p_tyDI)).bSafetySigFromDS)))){

(bTopCoverSwitchCoil1=0);
}else{
(bTopCoverSwitchCoil1=1);
}

}else{

if(((((unsigned long)(unsigned char)((*(p_bOpsInvertStepAWMove)))==(unsigned long)(unsigned char)0))&((((signed long)((*(p_eConvStatus)))!=(signed long)2))&(((signed long)((*(p_eInvertStatus)))!=(signed long)2)))&((((*(p_tyDI)).bInShutterCloseRS)&((*(p_tyDI)).bOutShutterCloseRS)&((*(p_bOpsSafeMode))))|(((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)0))))){


(bTopCoverSwitchCoil1=0);
}else{
(bTopCoverSwitchCoil1=1);
}

}

}else{
(bTopCoverSwitchCoil1=1);
if((((signed long)((*(p_tyNtParamCurr)).tyDISettings.diSafetySigFromUS)>(signed long)0))){
(bUnlockCover1Req=0);

}

}


if(bCoverPBLED1){
(tyP0201OpsConv.tyOps.tyBitmapBypassTopCover1.usiValueIdx=0);
(tyP0200OpsGen.tyOps.tyBitmapBypassTopCover1.usiValueIdx=0);
}else{
(tyP0201OpsConv.tyOps.tyBitmapBypassTopCover1.usiValueIdx=2);
(tyP0200OpsGen.tyOps.tyBitmapBypassTopCover1.usiValueIdx=2);
}

}





if(((((unsigned long)(unsigned char)bTopCoverSwitchCoil1==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)1)))){
(bCoverPBLED1=1);
(fbCoverPBLED1BlinkTm.IN=0);;TON(&fbCoverPBLED1BlinkTm);
}else if(((((unsigned long)(unsigned char)bTopCoverSwitchCoil1==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)1)))){
(fbCoverPBLED1BlinkTm.IN=1);;TON(&fbCoverPBLED1BlinkTm);
if((((unsigned long)(unsigned char)fbCoverPBLED1BlinkTm.Q==(unsigned long)(unsigned char)1))){
(fbCoverPBLED1BlinkTm.IN=0);;TON(&fbCoverPBLED1BlinkTm);
if((((unsigned long)(unsigned char)bCoverPBLED1==(unsigned long)(unsigned char)0))){
(bCoverPBLED1=1);
}else{
(bCoverPBLED1=0);
}
}
}else{
(bCoverPBLED1=0);
(fbCoverPBLED1BlinkTm.IN=0);;TON(&fbCoverPBLED1BlinkTm);
}




if((((((unsigned long)(unsigned char)bTopCoverSwitchCoil1==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue==(unsigned long)(unsigned char)1)))|(((unsigned long)(unsigned char)bCoverPB1Timer==(unsigned long)(unsigned char)0)))){
(fbCoverPB1CountDownTm.IN=bCoverPB1Timer);;TON(&fbCoverPB1CountDownTm);
if((((unsigned long)(unsigned char)((*(p_tyDI)).bCoverSWSig2)==(unsigned long)(unsigned char)0))){
(bCoverPB1Timer=0);
}

if((((unsigned long)(unsigned char)fbCoverPB1CountDownTm.Q==(unsigned long)(unsigned char)1))){
(fbCoverPB1CountDownTm.IN=0);;TON(&fbCoverPB1CountDownTm);
(bCoverPB1Timer=0);
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=0);
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue);
}
}



if((((*(p_tyDI)).bCoverSWSig2)&~Edge0009500001&1?((Edge0009500001=((*(p_tyDI)).bCoverSWSig2)&1),1):((Edge0009500001=((*(p_tyDI)).bCoverSWSig2)&1),0))){
(tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue=0);
(tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue=tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue);
}




if((((*(p_tyDI)).bUnlockCoverSigFromDS)&(((unsigned long)(unsigned char)((*(p_bOpsInvertStepAWMove)))==(unsigned long)(unsigned char)0))&(((*(p_bOpsDSStandby)))|((((signed long)((*(p_eConvStatus)))!=(signed long)2))&((((signed long)((*(p_eInvertStatus)))!=(signed long)2))|((*(p_bOutShutterExtended)))))))){

(bMachineSafetySigToDS=1);
}else{
(bMachineSafetySigToDS=0);
}


if((((*(p_tyDI)).bUnlockCoverSigFromUS)&(((unsigned long)(unsigned char)((*(p_bOpsInvertStepAWMove)))==(unsigned long)(unsigned char)0))&(((*(p_bOpsUSStandby)))|((((signed long)((*(p_eConvStatus)))!=(signed long)2))&((((signed long)((*(p_eInvertStatus)))!=(signed long)2))|((*(p_bInShutterExtended)))))))){

(bMachineSafetySigToUS=1);
}else{
(bMachineSafetySigToUS=0);
}


}imp95_end24_0:;}
#line 25 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

signed long __AS__STRING_CMP(char* pstr1, char* pstr2)
{while (*pstr1 != 0 && *pstr1 == *pstr2){ pstr1++;pstr2++; } return (*pstr1 == 0 && *pstr2 != 0) ? -1 : (*pstr1 != 0 && *pstr2 == 0) ? 1 : *pstr1 - *pstr2;}

unsigned long __AS__MEMCPY(unsigned long pDest, unsigned long pSrc, unsigned long length)
{memcpy((char*)pDest, (char*)pSrc, length); return pDest + length;}

unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length)
{memset((char*)pDest, value, length); return pDest + length;}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Startup/Startup.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/General/General.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UsrFolder/UsrFolder.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LibVer/LibVer.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Time/Time.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/HWInfo/HWInfo.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/RstErr/RstErr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ProdRcp/ProdRcp.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MpProdRcp/MpProdRcp.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/McParam/McParam.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtParam/NtParam.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/SMEMA/SMEMA.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/CANOpenServo.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AW.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LF.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Operations/Ops.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Simulation/Simu.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Simulation/SimuInv.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsCANopen/AsCANopen.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/visapi/Visapi.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMem/AsMem.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/dvframe/dvframe.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsOpcUac/AsOpcUac.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsARCfg/AsARCfg.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsTCP/AsTCP.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIORTI/AsIORTI.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsFltGen/AsFltGen.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsUSB/AsUSB.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsRfbExt/AsRfbExt.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpComError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10man/Acp10man.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtBuffer/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMem/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtRS232/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtStepper/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLogFile/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTLBuz/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMotion/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtPneu/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtConv/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTCP/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMessage/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtSMEMA/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtOPCUA/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtVersion/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLF/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtRecipe/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtUI/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtGeneral/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtHermes/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsCANopen/AsCANopen.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/visapi/Visapi.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMem/AsMem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/dvframe/dvframe.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsOpcUac/AsOpcUac.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsARCfg/AsARCfg.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsTCP/AsTCP.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIORTI/AsIORTI.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsFltGen/AsFltGen.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsUSB/AsUSB.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsRfbExt/AsRfbExt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtBuffer/NtBuffer.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMem/NtMem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtOvenInfo/NtOvenInfo.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtRS232/NtRS232.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtStepper/NtStepper.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLogFile/NtLogFile.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTLBuz/NtTLBuz.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMotion/NtMotion.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtPneu/NtPneu.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtConv/NtConv.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTCP/NtTCP.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMessage/NtMessage.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtSMEMA/NtSMEMA.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtOPCUA/NtOPCUA.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtVersion/NtVersion.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLF/NtLF.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtRecipe/NtRecipe.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtUI/NtUI.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtGeneral/NtGeneral.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtHermes/NtHermes.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/SoftwareVersion.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Startup/Startup.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/General/General.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UsrFolder/UsrFolder.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LibVer/LibVer.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Time/Time.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/HWInfo/HWInfo.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/RstErr/RstErr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MpProdRcp/MpProdRcp.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/McParam/McParam.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtParam/NtParam.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/SMEMA/USSMEMA.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/SMEMA/DSSMEMA.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/SMEMA/USSMEMA2.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/PneuNoSenStopper.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/PneuNoSenClamp.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu2SenInShutter.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu2SenOutShutter.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu2SenClamp1.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu2SenClamp2.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu2SenClamp3.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AWOpen.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes2.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes2.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/RmtHermes.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/SvyHermes.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LFLeader.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LFFollower.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/Follower1.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCSMngRcp.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCSLF.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Operations/Ops.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Machine/Machine.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Simulation/Simu.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Simulation/SimuInv.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Includes/AS_TempDecl/Inverter_XStd_WOutShutter_/GlobalComponents/MpComponents.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsCANopen/AsCANopen.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/visapi/Visapi.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMem/AsMem.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/dvframe/dvframe.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsOpcUac/AsOpcUac.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsARCfg/AsARCfg.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsTCP/AsTCP.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIORTI/AsIORTI.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsFltGen/AsFltGen.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsUSB/AsUSB.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10par/Acp10par.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtBuffer/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtStepper/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTCP/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtVersion/Constant.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtLF/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Local.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Visu_Page.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Visu_Page.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Visu_Layer.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Visu_Layer.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/UI/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/UI/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/UI/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/UI/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'tyUIAlmData'\\n\"");
__asm__(".ascii \"plcdata_const 'tyMcParamWr'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP0200TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP0400TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP0600TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP0700TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP1040TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP1050TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'c_uiP1080TableSize'\\n\"");
__asm__(".ascii \"plcdata_const 'tyP0200OpsGen'\\n\"");
__asm__(".ascii \"plcdata_const 'sSWVersion'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiAlarmCurrMax'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiAlarmHistoryMax'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiProdRcpMax'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiUsrMgmtMax'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diLFClntNum'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".previous");
