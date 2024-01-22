#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/OpsInvert/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((((unsigned long)(unsigned char)bInitDone==(unsigned long)(unsigned char)0))){
(bInitDone=1);

__AS__Action__Act_InitLocal();
__AS__Action__Act_InitGlobal();

}else if((((unsigned long)(unsigned char)bInitialDone==(unsigned long)(unsigned char)0))){
if((((unsigned long)(unsigned char)((*(p_bNtSettingsLoadDone)))==(unsigned long)(unsigned char)1))){
(bInitialDone=1);

__AS__Action__Act_Initial();
}

}else{

__AS__Action__Act_RstErr();
__AS__Action__Act_LinkEn();
__AS__Action__Act_Link();
__AS__Action__Act_Background();
__AS__Action__Act_Alarm();
__AS__Action__Act_AlarmInfo();

}

}imp18_end0_0:;}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_usiLinkProdRcpCurrRcpMcMod=p_ProdRcpCurrRcp1McMod);
(p_bLinkConvHvBrd=p_ConvHvBrd);

(p_bLinkInvertHomeSen=p_DIInvertHomeSen);
(p_bLinkInvertRemoteSen=p_DIInvertRemoteSen);

(p_bLinkUSHermesBlkUS=p_USHermesBlkUS);
(p_bLinkUSHermes2BlkUS=p_USHermes2BlkUS);
(p_bLinkFollower1USAllow=p_Follower1USAllow);
(p_bLinkFollower1DSAllow=p_Follower1DSAllow);
(p_bLinkLFFollowerUSAllow=p_LFFollowerUSAllow);
(p_bLinkLFFollowerDSAllow=p_LFFollowerDSAllow);

(p_bLinkFollower1WaitRlsBrd=p_Follower1WaitRlsBrd);

(p_diFwdDlyTm=p_NtParamConvFwdDlyTm);
(p_diRevDlyTm=p_NtParamConvRevDlyTm);

(p_bLinkUIRtnBrdReset=p_UIRtnBrdReset);
(p_bLinkUIRtnBrdResetBtn=p_UIRtnBrdResetBtn);


(p_udiRstErr=p_RstErrReset);
(p_bRun=p_OpsRun);
(p_bStop=p_OpsStop);
(p_bStep=p_OpsStep);

(p_eConvDirection=p_NtParamProjConvDir);
(p_eUSCommMod=p_McParamUSCommMod);
(p_eDSCommMod=p_McParamDSCommMod);

(p_eUSSMEMAStat=p_USSMEMAStat);
(p_eUSSMEMAStatus=p_USSMEMAStatus);
(p_bUSSMEMATransporting=p_USSMEMATransporting);
(p_bUSSMEMAConvStart=p_USSMEMAConvStart);
(p_bUSSMEMAConvStop=p_USSMEMAConvStop);
(p_bUSSMEMAUSRdy=p_USSMEMAUSRdy);
(p_bUSSMEMAUSGdBrdRdy=p_USSMEMAUSGdBrdRdy);

(p_eDSSMEMAStat=p_DSSMEMAStat);
(p_eDSSMEMAStatus=p_DSSMEMAStatus);
(p_bDSSMEMAConvStart=p_DSSMEMAConvStart);
(p_bDSSMEMAConvStop=p_DSSMEMAConvStop);
(p_bDSSMEMATimer=p_DSSMEMATimer);

(p_bUSHermesTransporting=p_USHermesTransporting);
(p_bUSHermesStopTransport=p_USHermesStopTransport);


(p_bUSHermesUSRdy=p_USHermesUSRdy);
(p_bUSHermesUSGdRdy=p_USHermesUSGdRdy);

(p_bDSHermesTransporting=p_DSHermesTransporting);
(p_bDSHermesStopTransport=p_DSHermesStopTransport);

(p_eConvStat=p_ConvStat);
(p_eConvStatus=p_ConvStatus);
(p_bConvHvBrd=p_ConvHvBrd);

(p_eStopperStat=p_PneuNoSenStopperStat);
(p_eStopperStatus=p_PneuNoSenStopperStatus);
(p_bStopperExtended=p_PneuNoSenStopperExtended);
(p_bStopperRetracted=p_PneuNoSenStopperRetracted);

(p_eClampStat=p_PneuNoSenClampStat);
(p_eClampStatus=p_PneuNoSenClampStatus);

(p_eInvertStat=p_MotorBrkStat);
(p_eInvertStatus=p_MotorBrkStatus);

(p_eInletShutterStat=p_Pneu2SenInShutterStat);
(p_eInletShutterStatus=p_Pneu2SenInShutterStatus);
(p_bInletShutterOpen=p_DIInShutterOpenRS);
(p_bInletShutterClose=p_DIInShutterCloseRS);

(p_eOutletShutterStat=p_Pneu2SenOutShutterStat);
(p_eOutletShutterStatus=p_Pneu2SenOutShutterStatus);
(p_bOutletShutterOpen=p_DIOutShutterOpenRS);
(p_bOutletShutterClose=p_DIOutShutterCloseRS);

(p_eClamp1Stat=p_Pneu2SenClamp1Stat);
(p_eClamp1Status=p_Pneu2SenClamp1Status);
(p_bClampRS1=p_DIClampRS1);
(p_bUnClampRS1=p_DIUnClampRS1);

(p_eClamp2Stat=p_Pneu2SenClamp2Stat);
(p_eClamp2Status=p_Pneu2SenClamp2Status);
(p_bClampRS2=p_DIClampRS2);
(p_bUnClampRS2=p_DIUnClampRS2);

(p_eClamp3Stat=p_Pneu2SenClamp3Stat);
(p_eClamp3Status=p_Pneu2SenClamp3Status);
(p_bClampRS3=p_DIClampRS3);
(p_bUnClampRS3=p_DIUnClampRS3);

(p_bLeftSen=p_DIConvLftSen);
(p_bRightSen=p_DIConvRgtSen);

(p_bClamp2Sen=p_DIClamp2Sen);
(p_bClamp3Sen=p_DIClamp3Sen);

(p_eAWStat=p_AWOpenStat);
(p_eAWStatus=p_AWOpenStatus);
(p_bAWWidthPosDiff=p_AWOpenWidthPosDiff);

(p_sProgNm=p_NtParamOpsConvProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);

(p_bClampDis=p_McParamClampDis);
(p_bClampPrep=p_NtParamProjClampPrep);
(p_eClampOption=p_NtParamProjClampOption);

(p_bInletShutterPrep=p_NtParamProjInletShutPrep);
(p_bInletShutterDis=p_McParamInShutterDis);
(p_bOutletShutterPrep=p_NtParamProjOutletShutPrep);
(p_bOutletShutterDis=p_McParamOutShutterDis);


(p_bDBAOnRgtSen=p_NtParamProjDBAOnRgtSen);

(p_bMachineSafetyPrep=p_NTParamMachineSafetySig);
(p_bUnlockCovPrep=p_NTParamUnlockCovPrep);
(p_bLinkDICoverSwitchSig2=p_DICoverSWSig2);
(p_bLinkUIBypsCoverSWPress1=p_UIBypassTopCover1);

(p_bLinkDIUnlockCoverSigFromDS=p_DIUnlockCoverSigFromDS);
(p_bLinkDIUnlockCoverSigFromUS=p_DIUnlockCoverSigFromUS);
(p_bLinkDISafetySigFromDS=p_DIUnlockSafetySigFromDS);
(p_bLinkDISafetySigFromUS=p_DIUnlockSafetySigFromUS);


(p_eUSComm2Mod=p_McParamUSComm2Mod);
(p_eUSSMEMA2Stat=p_USSMEMA2Stat);
(p_eUSSMEMA2Status=p_USSMEMA2Status);
(p_bUSSMEMA2Transporting=p_USSMEMA2Transporting);
(p_bUSSMEMA2ConvStart=p_USSMEMA2ConvStart);
(p_bUSSMEMA2ConvStop=p_USSMEMA2ConvStop);
(p_bUSSMEMA2USRdy=p_USSMEMA2USRdy);
(p_bUSSMEMA2USGdBrdRdy=p_USSMEMA2USGdBrdRdy);



(p_iHermesAction=p_USHermesAction);
(p_bUSReversal=p_HermesSwitchtoReverseTransport);
(p_bHermesEntToReversePosition=p_HermesEntToReversePosition);







}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{

}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
(p_bAWWidthPosDiff=((unsigned long)(&btest)));

((*(p_bGoToStandby))=((((*(p_bLinkUIBypsCoverSWPress1)))&((*(p_bUnlockCovPrep))))|(((((unsigned long)(unsigned char)((*(p_bLinkDIUnlockCoverSigFromDS)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bLinkDIUnlockCoverSigFromUS)))==(unsigned long)(unsigned char)1)))&((*(p_bMachineSafetyPrep))))));

if(((((unsigned long)(unsigned char)((*(p_bRun)))==(unsigned long)(unsigned char)1))&(((*(p_bLinkDICoverSwitchSig2)))&~Edge0000700000&1?((Edge0000700000=((*(p_bLinkDICoverSwitchSig2)))&1),1):((Edge0000700000=((*(p_bLinkDICoverSwitchSig2)))&1),0)))){
(eGotoOpsStep=1);
}


((*(p_bUSAllow))=(((*(p_bLinkFollower1USAllow)))&((((unsigned long)(unsigned char)((*(p_bLinkUSHermesBlkUS)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLinkUSHermes2BlkUS)))==(unsigned long)(unsigned char)0)))&((*(p_bLinkLFFollowerUSAllow)))&(((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)0))));

((*(p_bRtrnUSAllow))=(((*(p_bLinkFollower1USAllow)))&(((unsigned long)(unsigned char)((*(p_bLinkUSHermesBlkUS)))==(unsigned long)(unsigned char)0))&((*(p_bLinkLFFollowerUSAllow)))&(((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)0))&((((unsigned long)(unsigned char)((*(p_bLinkUIRtnBrdResetBtn)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bLinkUIRtnBrdReset)))==(unsigned long)(unsigned char)0)))));


((*(p_bDSAllow))=(((*(p_bLinkFollower1DSAllow)))&(((*(p_bLinkFollower1WaitRlsBrd))^1))&((*(p_bLinkLFFollowerDSAllow)))));

((*(p_bRtrnDSAllow))=(((*(p_bLinkFollower1DSAllow)))&(((*(p_bLinkFollower1WaitRlsBrd))^1))&((*(p_bLinkLFFollowerDSAllow)))));


if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
if((((signed long)eInvertCurrPos!=(signed long)2))){
(eInvertReqPos=eInvertCurrPos);
}
}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bStepEntToInOff==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1)))){
(eInvertReqPos=1);
}else if(((((unsigned long)(unsigned char)bStepEntToEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1)))){
(eInvertReqPos=0);
}

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))){

if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0))){
if((((signed long)eInvertCurrPos!=(signed long)2))){
(eInvertReqPos=eInvertCurrPos);
}
}else{
if(((((unsigned long)(unsigned char)bStepInvRtrnEntToEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1)))){
(eInvertReqPos=1);
}else if(((((unsigned long)(unsigned char)bStepInvRtrnEntToInOff==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1)))){
(eInvertReqPos=0);
}
}

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))){
if(((((unsigned long)(unsigned char)bStepEntToInOff==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(eInvertReqPos=1);
}else if(((((unsigned long)(unsigned char)bStepEntToEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(eInvertReqPos=0);
}else if(((((unsigned long)(unsigned char)bStepInvRtrnEntToEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1)))){
(eInvertReqPos=1);
}else if(((((unsigned long)(unsigned char)bStepInvRtrnEntToInOff==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1)))){
(eInvertReqPos=0);
}
}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)4))){

if(((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))^1)){
if((((signed long)eInvertCurrPos!=(signed long)2))){
(eInvertReqPos=eInvertCurrPos);
}
}else{
if(((((unsigned long)(unsigned char)bStepEntToInOff==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bUSReversal)))==(unsigned long)(unsigned char)0))&(((*(p_bLinkConvHvBrd)))&~Edge0000700001&1?((Edge0000700001=((*(p_bLinkConvHvBrd)))&1),1):((Edge0000700001=((*(p_bLinkConvHvBrd)))&1),0)))){
(eInvertReqPos=1);
}else if(((((unsigned long)(unsigned char)bStepEntToEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bUSReversal)))==(unsigned long)(unsigned char)0))&(((*(p_bLinkConvHvBrd)))&~Edge0000700002&1?((Edge0000700002=((*(p_bLinkConvHvBrd)))&1),1):((Edge0000700002=((*(p_bLinkConvHvBrd)))&1),0)))){
(eInvertReqPos=0);
}else if(((((unsigned long)(unsigned char)bStepEntToEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bUSReversal)))==(unsigned long)(unsigned char)1))&(((*(p_bLinkConvHvBrd)))&~Edge0000700003&1?((Edge0000700003=((*(p_bLinkConvHvBrd)))&1),1):((Edge0000700003=((*(p_bLinkConvHvBrd)))&1),0)))){
(eInvertReqPos=1);
}else if(((((unsigned long)(unsigned char)bStepEntToInOff==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bUSReversal)))==(unsigned long)(unsigned char)1))&(((*(p_bLinkConvHvBrd)))&~Edge0000700004&1?((Edge0000700004=((*(p_bLinkConvHvBrd)))&1),1):((Edge0000700004=((*(p_bLinkConvHvBrd)))&1),0)))){
(eInvertReqPos=0);
}
}
}

if(((*(p_bUSReversal)))){
(p_bUSHermesTransporting=p_USHermes2Transporting);
(p_bUSHermesStopTransport=p_USHermes2StopTransport);
}else{
(p_bUSHermesTransporting=p_USHermesTransporting);
(p_bUSHermesStopTransport=p_USHermesStopTransport);
}
(bReverseStoppingPos=((*(p_bHermesEntToReversePosition))));


if(((((unsigned long)(unsigned char)((*(p_bLinkInvertHomeSen)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkInvertRemoteSen)))==(unsigned long)(unsigned char)0)))){
(eInvertCurrPos=1);
}else if(((((unsigned long)(unsigned char)((*(p_bLinkInvertHomeSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bLinkInvertRemoteSen)))==(unsigned long)(unsigned char)1)))){
(eInvertCurrPos=0);
}else{
(eInvertCurrPos=2);
}


(bInvertCompl=((((signed long)eInvertCurrPos==(signed long)eInvertReqPos))&(((signed long)eInvertReqPos!=(signed long)2))));


if(((*(p_bRun)))){
if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(bChangeInvertExtPneu=1);
}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
(bChangeBypassRetPneu=1);
}
}

if((bChangeBypassRetPneu&(((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))&(((signed long)eOpsStep>=(signed long)26)))){
(eStopperAct=6);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){
(eStopperAct=0);
(eOutletShutterAct=0);
(bChangeBypassRetPneu=0);
}
}

if((bChangeInvertExtPneu&(((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))&(((signed long)eOpsStep>=(signed long)26)))){

if((((signed long)eInvertCurrPos==(signed long)1))){
(eStopperAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){
(eStopperAct=0);
(eOutletShutterAct=0);
(bChangeInvertExtPneu=0);
}
}else{
(bChangeInvertExtPneu=0);
}
}


if((((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3)))&(((signed long)eOpsStep>(signed long)26))&bHvBrd&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(bBoardInFromUS1=1);
}else if((((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3)))&bInvOnceTwicePCBOut)){
(bBoardInFromUS1=0);
}


if(((*(p_bLinkUIRtnBrdReset)))){
(bInvOnceTwicePCBOut=0);
}


if((bInvOnceTwicePCBOut&bStepInvRtrnUSCommTmr)){
(udiStatus1=10009);
}else if((bInvOnceTwicePCBOut&bStepDSCommTmr)){
(udiStatus1=10010);
}else if(bInvOnceTwicePCBOut){
(udiStatus1=10009);
}else{
(udiStatus1=0);
}


}imp7_end22_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp17_end0_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_bRun=((unsigned long)(&bRun)));
(p_bStop=((unsigned long)(&bStop)));
(p_bStep=((unsigned long)(&bStep)));

(p_bInitGdBrd=((unsigned long)(&bInitGdBrd)));
(p_bInsertGdBrd=((unsigned long)(&bInsertGdBrd)));
(p_eConvDirection=((unsigned long)(&eConvDirection)));
(p_eUSCommMod=((unsigned long)(&eUSCommMod)));
(p_eDSCommMod=((unsigned long)(&eDSCommMod)));
(p_bGoToStandby=((unsigned long)(&bGoToStandby)));
(p_bUSAllow=((unsigned long)(&bUSAllow)));
(p_bDSAllow=((unsigned long)(&bDSAllow)));

(p_bRtrnUSAllow=((unsigned long)(&bRtrnUSAllow)));
(p_bRtrnDSAllow=((unsigned long)(&bRtrnDSAllow)));

(p_bLeftSen=((unsigned long)(&bLeftSen)));
(p_bRightSen=((unsigned long)(&bRightSen)));
(p_bMidSen=((unsigned long)(&bMidSen)));

(p_eUSSMEMAStat=((unsigned long)(&eUSSMEMAStat)));
(p_eUSSMEMAStatus=((unsigned long)(&eUSSMEMAStatus)));
(p_bUSSMEMATransporting=((unsigned long)(&bUSSMEMATransporting)));
(p_bUSSMEMAConvStart=((unsigned long)(&bUSSMEMAConvStart)));
(p_bUSSMEMAConvStop=((unsigned long)(&bUSSMEMAConvStop)));
(p_bUSSMEMAUSRdy=((unsigned long)(&bUSSMEMAUSRdy)));
(p_bUSSMEMAUSGdBrdRdy=((unsigned long)(&bUSSMEMAUSGdBrdRdy)));

(p_eDSSMEMAStat=((unsigned long)(&eDSSMEMAStat)));
(p_eDSSMEMAStatus=((unsigned long)(&eDSSMEMAStatus)));
(p_bDSSMEMAConvStart=((unsigned long)(&bDSSMEMAConvStart)));
(p_bDSSMEMAConvStop=((unsigned long)(&bDSSMEMAConvStop)));
(p_bDSSMEMATimer=((unsigned long)(&bDSSMEMATimer)));

(p_bUSHermesTransporting=((unsigned long)(&bUSHermesTransporting)));
(p_bUSHermesStopTransport=((unsigned long)(&bUSHermesStopTransport)));
(p_bUSHermesUSRdy=((unsigned long)(&bUSHermesUSRdy)));
(p_bUSHermesUSGdRdy=((unsigned long)(&bUSHermesUSGdRdy)));

(p_bDSHermesTransporting=((unsigned long)(&bDSHermesTransporting)));
(p_bDSHermesStopTransport=((unsigned long)(&bDSHermesStopTransport)));

(p_eConvStat=((unsigned long)(&eConvStat)));
(p_eConvStatus=((unsigned long)(&eConvStatus)));
(p_bConvHvBrd=((unsigned long)(&bConvHvBrd)));

(p_eStopperStat=((unsigned long)(&eStopperStat)));
(p_eStopperStatus=((unsigned long)(&eStopperStatus)));
(p_bStopperExtended=((unsigned long)(&bStopperExtended)));
(p_bStopperRetracted=((unsigned long)(&bStopperRetracted)));

(p_eClampStat=((unsigned long)(&eClampStat)));
(p_eClampStatus=((unsigned long)(&eClampStatus)));

(p_eInletShutterStat=((unsigned long)(&eInletShutterStat)));
(p_eInletShutterStatus=((unsigned long)(&eInletShutterStatus)));
(p_bInletShutterOpen=((unsigned long)(&bInletShutterOpen)));
(p_bInletShutterClose=((unsigned long)(&bInletShutterClose)));

(p_eOutletShutterStat=((unsigned long)(&eOutletShutterStat)));
(p_eOutletShutterStatus=((unsigned long)(&eOutletShutterStatus)));
(p_bOutletShutterOpen=((unsigned long)(&bOutletShutterOpen)));
(p_bOutletShutterClose=((unsigned long)(&bOutletShutterClose)));

(p_eClamp1Stat=((unsigned long)(&eClamp1Stat)));
(p_eClamp1Status=((unsigned long)(&eClamp1Status)));
(p_bClampRS1=((unsigned long)(&bClampRS1)));
(p_bUnClampRS1=((unsigned long)(&bUnClampRS1)));

(p_eClamp2Stat=((unsigned long)(&eClamp2Stat)));
(p_eClamp2Status=((unsigned long)(&eClamp2Status)));
(p_bClampRS2=((unsigned long)(&bClampRS2)));
(p_bUnClampRS2=((unsigned long)(&bUnClampRS2)));

(p_eClamp3Stat=((unsigned long)(&eClamp3Stat)));
(p_eClamp3Status=((unsigned long)(&eClamp3Status)));
(p_bClampRS3=((unsigned long)(&bClampRS3)));
(p_bUnClampRS3=((unsigned long)(&bUnClampRS3)));

(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));

(p_bClampDis=((unsigned long)(&bClampDis)));
(p_bClampPrep=((unsigned long)(&bClampPrep)));
(p_eClampOption=((unsigned long)(&eClampOption)));

(p_bInletShutterPrep=((unsigned long)(&bInletShutterPrep)));
(p_bInletShutterDis=((unsigned long)(&bInletShutterDis)));
(p_bOutletShutterPrep=((unsigned long)(&bOutletShutterPrep)));
(p_bOutletShutterDis=((unsigned long)(&bOutletShutterDis)));

(p_bClamp2Sen=((unsigned long)(&bClamp2Sen)));
(p_bClamp3Sen=((unsigned long)(&bClamp3Sen)));

(p_diFwdDlyTm=((unsigned long)(&diFwdDlyTm)));
(p_diRevDlyTm=((unsigned long)(&diRevDlyTm)));

}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{


}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_Background.st"
static void __AS__Action__Act_Background(void){
{

if((~(((*(p_bStop)))|((*(p_bStep))))&Edge0000300000&1?((Edge0000300000=(((*(p_bStop)))|((*(p_bStep))))&1),1):((Edge0000300000=(((*(p_bStop)))|((*(p_bStep))))&1),0))){
(bPaused=0);
}

if(((((signed long)eStatus!=(signed long)3))&(((unsigned long)(unsigned char)((*(p_bRun)))==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0)))){
__AS__Action__Act_OpsRun();
}else{
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

if((((((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)1)))&~Edge0000300001&1?((Edge0000300001=((((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)1)))&1),1):((Edge0000300001=((((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)1)))&1),0))){
__AS__Action__Act_OpsRst();
}

}else if((((signed long)eStatus!=(signed long)3))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stop"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Error"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}


if(((~((*(p_bRun)))&Edge0000300002&1?((Edge0000300002=((*(p_bRun)))&1),1):((Edge0000300002=((*(p_bRun)))&1),0))|((((signed long)eStatus==(signed long)3))&~Edge0000300003&1?((Edge0000300003=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000300003=(((signed long)eStatus==(signed long)3))&1),0)))){
__AS__Action__Act_OpsInitial();
__AS__Action__Act_OpsRst();
}


if(((((signed long)eStatus==(signed long)3))&bRstErr)){
(eStatus=0);
(udiStatus=0);
}

}imp3_else5_0:imp3_end5_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000100000&1?((Edge0000100000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000100000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sOpsInvertProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData.udiCode>(unsigned long)10099)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if((bRstErr&(((unsigned long)tyAlmData.udiCode!=(unsigned long)0)))){

(tyAlmData.udiCode=0);
(tyAlmData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.bAlm=0);
}

}imp1_else0_1:imp1_end0_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Act_AlarmInfo.st"
static void __AS__Action__Act_AlarmInfo(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=3);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sOpsInvertProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData1.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData1.udiCode>(unsigned long)10099)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData1.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData1.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}imp2_end0_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/Act_OpsInitial.st"
static void __AS__Action__Act_OpsInitial(void){
{
(eOpsStep=0);
(eGotoOpsStep=1);

(bStepInitConv=0);
(bStepInitDone=0);
(bStepUSStandby=0);
(bStepUSCommTmr=0);
(bStepEntToEnd=0);
(bStepEntToInOff=0);
(bStepRev=0);
(bStepPreExit=0);
(bStepDSStandby=0);
(bStepDSCommTmr=0);
(bStepExitBrd=0);
(bStepSafeMode=0);
(bStepInvRtrnEntToEnd=0);
(bStepInvRtrnEntToInOff=0);
(bStepInvRtrnUSStandby=0);
(bStepInvRtrnUSCommTmr=0);
}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/Act_OpsRun.st"
static void __AS__Action__Act_OpsRun(void){
{if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)4))){
__AS__Action__Act_OpsStandard_Hermes();
}else if(((((unsigned long)(unsigned char)((*(p_bClampPrep)))==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)((*(p_bClampPrep)))==(unsigned long)(unsigned char)1))&(((signed long)((*(p_eClampOption)))==(signed long)0))))){

__AS__Action__Act_OpsStandard();

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3)))){

__AS__Action__Act_OpsClampNoStopperInvOnceAndTwice();

}else{

__AS__Action__Act_OpsClampNoStopper();

}

}imp14_end0_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/Act_OpsRst.st"
static void __AS__Action__Act_OpsRst(void){
{
(eUSSMEMAAct=0);
(eDSSMEMAAct=0);
(eConvAct=0);
(eStopperAct=0);
(eAWAct=0);
(eClampAct=0);
(eInletShutterAct=0);
(eOutletShutterAct=0);
(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);
(eInvertAct=0);
(eUSSMEMA2Act=0);

(bBrdInserted=0);
(bBrdRemoved=0);

(bUSTimerRun=0);
(bDSTimerRun=0);
(bReachedEnd=0);
(bHvBrd=0);
(bGdBrd=0);
(bUS2TimerRun=0);

(bClampDisInitUnblk=0);
(bInvertPosInvalidSkipInit=0);
(bChangeBypassRetPneu=0);
(bChangeInvertExtPneu=0);

(fbFwdTimer.IN=0);;TON(&fbFwdTimer);
(fbRevTimer.IN=0);;TON(&fbRevTimer);

}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/SubSequence/Act_OpsStandard.st"
static void __AS__Action__Act_OpsStandard(void){
{
if((((signed long)eGotoOpsStep!=(signed long)eOpsStep))){

switch(eGotoOpsStep){

default: {
(eOpsStep=eGotoOpsStep);

}break;}

}

if((((signed long)eOpsStep==(signed long)eGotoOpsStep))){

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)0))){

switch(eOpsStep){

case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Check Condition"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bClampPrep)))){
if((((signed long)eInvertCurrPos==(signed long)2))){
(bInvertPosInvalidSkipInit=1);

if(((*(p_bClampDis)))){
(bClampDisInitUnblk=1);
}

(eGotoOpsStep=33);
}else{
(eGotoOpsStep=3);
}
}else{
if((((signed long)eInvertCurrPos==(signed long)2))){
(bInvertPosInvalidSkipInit=1);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}else{
(eGotoOpsStep=2);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Clamp Unblock"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClampAct=6);

if(((((signed long)((*(p_eClampStatus)))==(signed long)1))&(((signed long)((*(p_eClampStat)))==(signed long)6)))){

(eClampAct=0);
(eGotoOpsStep=2);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<39l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)bInvertCompl==(unsigned long)(unsigned char)0))){
if((((signed long)eInvertCurrPos==(signed long)0))){
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=4);
}else{
(eGotoOpsStep=6);
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=5);
}else{
(eGotoOpsStep=6);
}

}else{
(eGotoOpsStep=6);
}

}else{
(eGotoOpsStep=9);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 4:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Left"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 5:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Right"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 6:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Stopper Block"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=5);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))){
(eStopperAct=0);

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=7);

}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=8);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 7:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper At Left"; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 8:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper at Right"; for(zzIndex=0; zzIndex<37l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 9:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Stopper Unblock"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=6);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))){
(eStopperAct=0);
(eGotoOpsStep=10);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor to Right"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=12);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=42);
}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 12:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Closing Shutters"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=40);
}else{
(eGotoOpsStep=41);
}
}

}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 14:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Auto Width Change"; for(zzIndex=0; zzIndex<43l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=15);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 15:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Moving Auto Width"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eAWAct=16);

if(((((signed long)((*(p_eAWStatus)))==(signed long)1))&(((signed long)((*(p_eAWStat)))==(signed long)16)))){
(eAWAct=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 13:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Condition"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bUSAllow)))){
(eGotoOpsStep=18);
}
}else{
(eGotoOpsStep=21);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 18:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Initial Shutter Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=21);
}else{
(eGotoOpsStep=19);
}
}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterClose))))){
(eGotoOpsStep=21);
}else{
(eGotoOpsStep=20);
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));


}break;case 19:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Shutters Prior After Auto Width Change"; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=21);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}


}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Inlet Shutter and Closing Outlet Shutter"; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=21);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 21:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Checking Stopper Position"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=23);

}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=23);
}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=22);
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 22:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Block"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=5);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))){
(eStopperAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 23:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Unblock"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=6);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))){
(eStopperAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 24:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Upstream Standby Condition"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bUSTimerRun=0);

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else if((((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=26);
}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=25);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 25:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inserting Board By Timer"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

(fbUSTimer.IN=bConvSen);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;case 26:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Upstream Machine"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(((*(p_eUSCommMod)))){
case 0:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

(eUSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSSMEMAUSGdBrdRdy))));

{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

(eGotoOpsStep=24);
}

}

}break;case 1:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSHermesUSGdRdy))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;}

}break;case 27:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);

(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|bUSTimerRun)){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}


if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){

if((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}


if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
(eGotoOpsStep=32);
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eGotoOpsStep=32);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;}

}break;case 28:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=29);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eGotoOpsStep=29);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}break;}

}break;case 29:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Block After Entering Board"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=5);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))){
(eStopperAct=0);
(eGotoOpsStep=30);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 30:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Reverse Board"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(eConvAct=0);

(eGotoOpsStep=32);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 32:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){
if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 33:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Block Prior to Inversion"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClampAct=5);

if(((((signed long)((*(p_eClampStatus)))==(signed long)1))&(((signed long)((*(p_eClampStat)))==(signed long)5)))){

(eClampAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 34:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Inversion"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=35);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 35:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inverter Turning"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertReqPos==(signed long)0))){
(eInvertAct=1);
}else if((((signed long)eInvertReqPos==(signed long)1))){
(eInvertAct=2);
}

if(((((signed long)((*(p_eInvertStatus)))==(signed long)1))&((((signed long)((*(p_eInvertStat)))==(signed long)1))|(((signed long)((*(p_eInvertStat)))==(signed long)2))))){
(eInvertAct=0);

if(((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))|bClampDisInitUnblk)){

(bClampDisInitUnblk=0);

(eGotoOpsStep=37);

}else{
if((((signed long)eInvertCurrPos==(signed long)0))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=39);
}else{
(eGotoOpsStep=13);
}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=38);
}else{
(eGotoOpsStep=13);
}
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 37:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Unblock After Invert"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClampAct=6);

if(((((signed long)((*(p_eClampStatus)))==(signed long)1))&(((signed long)((*(p_eClampStat)))==(signed long)6)))){
(eClampAct=0);

if((((signed long)eInvertCurrPos==(signed long)0))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=39);
}else{
(eGotoOpsStep=13);
}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=38);
}else{
(eGotoOpsStep=13);
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 36:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Recovering Board Status"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(bInvertPosInvalidSkipInit=0);

if((((signed long)eInvertCurrPos==(signed long)0))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=38);
}

}else{
(bInvertPosInvalidSkipInit=0);
(eGotoOpsStep=13);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 38:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Unblock After Invert"; for(zzIndex=0; zzIndex<28l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=6);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))){
(eStopperAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 39:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Pre-Exiting Board"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=15);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)15)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 40:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"DS: Opening Inlet & Outlet Shutter"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);


if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 41:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Outlet Shutter"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eOutletShutterAct=6);

if(((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6)))){
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 42:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Downstream Standby Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bDSTimerRun=0);

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

if(((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if(((*(p_bDBAOnRgtSen)))){
if(((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1)))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}else{
if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 43:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Removing Board By Timer"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

(fbDSTimer.IN=(bConvSen^1));;TON(&fbDSTimer);

if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bHvBrd=0);

(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;case 44:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Downstream Machine"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
if(((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bLeftSen))^1)));;TON(&fbDSTimer);
}
}else{
if(((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bRightSen))^1)));;TON(&fbDSTimer);
}
}

switch(((*(p_eDSCommMod)))){
case 0:{
(eDSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bDSSMEMAConvStart)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eDSSMEMAAct=0);
}
}

}

}break;case 1:{
if((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;}

}break;case 47:{
switch(((*(p_eDSCommMod)))){
case 0:{
(eConvAct=17);

if(((((((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eDSSMEMAStat)))==(signed long)1)))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){

(eDSSMEMAAct=0);
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);
(eGotoOpsStep=13);


(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 1:{
(eConvAct=17);

if((((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)0))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;}

}break;}

}

}


(bBrdInserted=bUSTimerRun);
(bBrdRemoved=bDSTimerRun);


if(((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))|(((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))|(((signed long)eOpsStep==(signed long)10)))){
(bStepInitConv=1);
}else{
(bStepInitConv=0);
}

(bStepInitAwayStopper=((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))));
(bStepInitTwdStopper=((((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))));
(bStepInitDone=((((signed long)eOpsStep>(signed long)12))&(((unsigned long)(unsigned char)bInvertPosInvalidSkipInit==(unsigned long)(unsigned char)0))));
(bStepUSStandby=(((signed long)eOpsStep==(signed long)24)));
(bStepUSCommTmr=(((signed long)eOpsStep==(signed long)26)));
(bStepEntToEnd=(((signed long)eOpsStep==(signed long)27)));
(bStepEntToInOff=(((signed long)eOpsStep==(signed long)28)));
(bStepRev=(((signed long)eOpsStep==(signed long)30)));
(bStepPreExit=(((signed long)eOpsStep==(signed long)39)));
(bStepDSStandby=(((signed long)eOpsStep==(signed long)42)));
(bStepDSCommTmr=(((signed long)eOpsStep==(signed long)44)));
(bStepExitBrd=(((signed long)eOpsStep==(signed long)47)));
(bStepInvert=(((signed long)eOpsStep==(signed long)35)));
(bStepAWMov=(((signed long)eOpsStep==(signed long)15)));
}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/SubSequence/Act_OpsClampNoStopper.st"
static void __AS__Action__Act_OpsClampNoStopper(void){
{
if((((signed long)eGotoOpsStep!=(signed long)eOpsStep))){

switch(eGotoOpsStep){

default: {
(eOpsStep=eGotoOpsStep);

}break;}

}

if((((signed long)eOpsStep==(signed long)eGotoOpsStep))){

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)0))){

switch(eOpsStep){

case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Check Condition"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos==(signed long)2))){
(bInvertPosInvalidSkipInit=1);
(eGotoOpsStep=33);
}else{
(eGotoOpsStep=3);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Clamp Unblock"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClamp1Act=6);
(eClamp2Act=6);
(eClamp3Act=6);



if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)6))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)6))&(((signed long)((*(p_eClamp3Status)))==(signed long)1))&(((signed long)((*(p_eClamp3Stat)))==(signed long)6)))){

(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);

(eGotoOpsStep=2);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<39l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)bInvertCompl==(unsigned long)(unsigned char)0))){
if((((signed long)eInvertCurrPos==(signed long)0))){
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=4);
}else{
(eGotoOpsStep=7);
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=5);
}else{
(eGotoOpsStep=8);
}
}

}else{
(eGotoOpsStep=10);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 4:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Left"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=7);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=7);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 5:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Right"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=8);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=8);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 7:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper At Left"; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 8:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper at Right"; for(zzIndex=0; zzIndex<37l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor to Right"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=12);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=42);
}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 12:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Closing Shutters"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=40);
}else{
(eGotoOpsStep=41);
}
}

}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 14:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Auto Width Change"; for(zzIndex=0; zzIndex<43l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);
if((((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=17);
}else{
(eGotoOpsStep=15);
}
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 17:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Main In Standy Position For Safety"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)0))){
if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 15:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Moving Auto Width"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eAWAct=16);

if(((((signed long)((*(p_eAWStatus)))==(signed long)1))&(((signed long)((*(p_eAWStat)))==(signed long)16)))){
(eAWAct=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 13:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Condition"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){

(eGotoOpsStep=18);

}else{
(eGotoOpsStep=24);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 18:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Initial Shutter Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){

if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterOpen))))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0))&(((((*(p_bLeftSen))^1))&((*(p_bRightSen))))^1))){
(eGotoOpsStep=24);
}else{
(eGotoOpsStep=42);
}
}else{
(eGotoOpsStep=19);
}


}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0))){
if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterClose))))){
(eGotoOpsStep=24);
}else{
(eGotoOpsStep=20);
}
}else if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterClose))))){
(eGotoOpsStep=32);
}else{
(eGotoOpsStep=34);
}
}else{
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=40);
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));


}break;case 19:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Shutters Prior After Auto Width Change"; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=18);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}


}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Inlet Shutter and Closing Outlet Shutter"; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 24:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Upstream Standby Condition"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bUSTimerRun=0);

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|((*(p_bGoToStandby))))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else if((((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=26);
}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=25);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 25:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inserting Board By Timer"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

(fbUSTimer.IN=bConvSen);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;case 26:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Upstream Machine"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(((*(p_eUSCommMod)))){
case 0:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

(eUSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSSMEMAUSGdBrdRdy))));

{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

(eGotoOpsStep=24);
}

}

}break;case 1:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSHermesUSGdRdy))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=27);

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;}

}break;case 27:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){

(eConvAct=45);
(eUSSMEMAAct=0);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);

(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|bUSTimerRun)){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}


if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){

if((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){
if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}


if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)0))){

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
(eGotoOpsStep=32);
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}else if((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)1))){

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eGotoOpsStep=32);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;}

}break;case 28:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=30);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eGotoOpsStep=30);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}break;}

}break;case 30:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Reverse Board"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(eConvAct=0);

(eGotoOpsStep=32);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 32:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){

(eGotoOpsStep=33);

}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 33:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Block Prior to Inversion"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bClamp3Sen)))){

(eClamp1Act=5);
(eClamp2Act=5);
(eClamp3Act=5);



if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)5))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)5))&(((signed long)((*(p_eClamp3Status)))==(signed long)1))&(((signed long)((*(p_eClamp3Stat)))==(signed long)5)))){

(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);
if(((*(p_bGoToStandby)))){
(eGotoOpsStep=14);
}else if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}else if(((*(p_bClamp2Sen)))){
(eClamp1Act=5);
(eClamp2Act=5);


if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)5))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)5)))){

(eClamp1Act=0);
(eClamp2Act=0);
if(((*(p_bGoToStandby)))){
(eGotoOpsStep=14);
}else if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}else{
(eClamp1Act=5);

if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)5)))){

(eClamp1Act=0);
if(((*(p_bGoToStandby)))){
(eGotoOpsStep=14);
}else if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}

}break;case 34:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Inversion"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=35);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 35:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inverter Turning"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertReqPos==(signed long)0))){
(eInvertAct=1);
}else if((((signed long)eInvertReqPos==(signed long)1))){
(eInvertAct=2);
}

if(((((signed long)((*(p_eInvertStatus)))==(signed long)1))&((((signed long)((*(p_eInvertStat)))==(signed long)1))|(((signed long)((*(p_eInvertStat)))==(signed long)2))))){
(eInvertAct=0);

(eGotoOpsStep=37);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 37:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Unblock After Invert"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClamp1Act=6);
(eClamp2Act=6);
(eClamp3Act=6);



if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)6))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)6))&(((signed long)((*(p_eClamp3Status)))==(signed long)1))&(((signed long)((*(p_eClamp3Stat)))==(signed long)6)))){

(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);

if((((signed long)eInvertCurrPos==(signed long)0))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=39);
}else{
(eGotoOpsStep=13);
}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}else{
(eGotoOpsStep=13);
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 36:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Recovering Board Status"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(bInvertPosInvalidSkipInit=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

}else{
(bInvertPosInvalidSkipInit=0);
(eGotoOpsStep=13);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 39:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Pre-Exiting Board"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=15);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)15)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 40:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"DS: Opening Inlet & Outlet Shutter"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);


if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 41:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"DS: Opening Outlet Shutter"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eOutletShutterAct=6);

if(((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6)))){
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 42:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Downstream Standby Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

if(((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if(((*(p_bDBAOnRgtSen)))){
if(((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1)))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}else{
if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}
}else{
(eGotoOpsStep=14);
}
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 43:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Removing Board By Timer"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

(fbDSTimer.IN=(bConvSen^1));;TON(&fbDSTimer);

if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bHvBrd=0);

(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;case 44:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Downstream Machine"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
if(((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bLeftSen))^1)));;TON(&fbDSTimer);
}
}else{
if(((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bRightSen))^1)));;TON(&fbDSTimer);
}
}

switch(((*(p_eDSCommMod)))){
case 0:{
(eDSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bDSSMEMAConvStart)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if(((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))|((*(p_bGoToStandby))))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eDSSMEMAAct=0);
}
}

}

}break;case 1:{
if((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;}

}break;case 47:{
switch(((*(p_eDSCommMod)))){
case 0:{
(eConvAct=17);

if(((((((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eDSSMEMAStat)))==(signed long)1)))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){

(eDSSMEMAAct=0);
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);
(eGotoOpsStep=13);


(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 1:{
(eConvAct=17);

if((((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)0))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;}

}break;}

}

}


(bBrdInserted=bUSTimerRun);
(bBrdRemoved=bDSTimerRun);


if(((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))|(((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))|(((signed long)eOpsStep==(signed long)10)))){
(bStepInitConv=1);
}else{
(bStepInitConv=0);
}

(bStepInitAwayStopper=((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))));
(bStepInitTwdStopper=((((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))));
(bStepInitDone=((((signed long)eOpsStep>(signed long)12))&(((unsigned long)(unsigned char)bInvertPosInvalidSkipInit==(unsigned long)(unsigned char)0))));
(bStepUSStandby=(((signed long)eOpsStep==(signed long)24)));
(bStepUSCommTmr=(((signed long)eOpsStep==(signed long)26)));
(bStepEntToEnd=(((signed long)eOpsStep==(signed long)27)));
(bStepEntToInOff=(((signed long)eOpsStep==(signed long)28)));
(bStepRev=(((signed long)eOpsStep==(signed long)30)));
(bStepPreExit=(((signed long)eOpsStep==(signed long)39)));
(bStepDSStandby=(((signed long)eOpsStep==(signed long)42)));
(bStepDSCommTmr=(((signed long)eOpsStep==(signed long)44)));
(bStepExitBrd=(((signed long)eOpsStep==(signed long)47)));
(bStepSafeMode=(((signed long)eOpsStep==(signed long)17)));
}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/SubSequence/Act_OpsClampNoStopperInvOnceAndTwice.st"
static void __AS__Action__Act_OpsClampNoStopperInvOnceAndTwice(void){
{
if((((signed long)eGotoOpsStep!=(signed long)eOpsStep))){

switch(eGotoOpsStep){

default: {
(eOpsStep=eGotoOpsStep);

}break;}

}

if((((signed long)eOpsStep==(signed long)eGotoOpsStep))){

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)0))){

switch(eOpsStep){

case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Check Condition_InvOnce"; for(zzIndex=0; zzIndex<28l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos==(signed long)2))){
(bInvertPosInvalidSkipInit=1);
(eGotoOpsStep=33);
}else{
(eGotoOpsStep=3);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Clamp Unblock"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClamp1Act=6);
(eClamp2Act=6);
(eClamp3Act=6);



if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)6))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)6))&(((signed long)((*(p_eClamp3Status)))==(signed long)1))&(((signed long)((*(p_eClamp3Stat)))==(signed long)6)))){

(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);

(eGotoOpsStep=2);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<39l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)(unsigned char)bInvertCompl==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if((((signed long)eInvertCurrPos==(signed long)0))){
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=4);
}else{
(eGotoOpsStep=7);
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=5);
}else{
(eGotoOpsStep=8);
}
}

}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=11);

}else{
(eGotoOpsStep=10);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 4:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Left"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=7);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=7);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 5:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Right"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=8);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=8);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 7:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper At Left"; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 8:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper at Right"; for(zzIndex=0; zzIndex<37l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor to Right"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=12);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=42);
}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 11:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Return Board Init Conveyor "; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos==(signed long)0))){

if((((signed long)eInvertCurrPos==(signed long)eInvertReqPos))){
(eGotoOpsStep=39);
}else{
(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=12);
}

}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){
if(((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){
(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=33);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}
}else{
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}
}
}
}

}break;case 12:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Closing Shutters"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if((((*(p_bOutletShutterOpen)))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=42);

}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=41);

}else{
if(bInvOnceTwicePCBOut){

if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterClose))))){
(eGotoOpsStep=32);
}else{
(eGotoOpsStep=34);
}

}else{
(eGotoOpsStep=41);

}
}
}

}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 14:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Auto Width Change"; for(zzIndex=0; zzIndex<43l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);
if((((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=17);
}else{
(eGotoOpsStep=15);
}
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 17:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Main In Standy Position For Safety"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)0))){
if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 15:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Moving Auto Width"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eAWAct=16);

if(((((signed long)((*(p_eAWStatus)))==(signed long)1))&(((signed long)((*(p_eAWStat)))==(signed long)16)))){
(eAWAct=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 13:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Condition"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){

(eGotoOpsStep=18);

}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=49);

}else{
(eGotoOpsStep=24);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 18:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Initial Shutter Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterOpen))))){
if((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=24);
}else{
(eGotoOpsStep=42);
}
}else{
(eGotoOpsStep=19);
}

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0))){
if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterClose))))){
(eGotoOpsStep=24);
}else{
(eGotoOpsStep=20);
}
}else if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterClose))))){
(eGotoOpsStep=32);
}else{
(eGotoOpsStep=34);
}
}else{
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=40);
}
}

}else if((((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3)))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1)))){
if((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)0))){
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=49);
}else{
(eGotoOpsStep=54);
}
}else if(bHvBrd){
if((((*(p_bInletShutterClose)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=54);
}
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));


}break;case 19:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Shutters Prior After Auto Width Change"; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=18);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}


}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Inlet Shutter and Closing Outlet Shutter"; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}


}break;case 54:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Inlet Shutter and Open Outlet Shutter for Return Board"; for(zzIndex=0; zzIndex<62l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=49);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}


}break;case 24:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Upstream Standby Condition"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bUSTimerRun=0);

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|((*(p_bGoToStandby))))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else if((((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=26);
}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=25);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 25:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inserting Board By Timer"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

(fbUSTimer.IN=bConvSen);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

(eGotoOpsStep=27);

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;case 26:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Upstream Machine"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(((*(p_eUSCommMod)))){
case 0:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

(eUSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSSMEMAUSGdBrdRdy))));

{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=27);

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

(eGotoOpsStep=27);

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

(eGotoOpsStep=24);
}

}

}break;case 1:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSHermesUSGdRdy))));

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=27);

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=27);

}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}

}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;}

}break;case 27:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){

(eConvAct=45);
(eUSSMEMAAct=0);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);

(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|bUSTimerRun)){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

if((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}


}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}


if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)2))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
(eGotoOpsStep=32);
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}
}else if(((((unsigned long)(unsigned char)((*(p_usiLinkProdRcpCurrRcpMcMod)))==(unsigned long)(unsigned char)3))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eGotoOpsStep=32);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;}

}break;case 28:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=30);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eGotoOpsStep=30);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}break;}

}break;case 30:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Reverse Board"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(eConvAct=0);

(eGotoOpsStep=32);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 32:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){

(eGotoOpsStep=33);

}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 33:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Block Prior to Inversion"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bClamp3Sen)))){

(eClamp1Act=5);
(eClamp2Act=5);
(eClamp3Act=5);



if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)5))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)5))&(((signed long)((*(p_eClamp3Status)))==(signed long)1))&(((signed long)((*(p_eClamp3Stat)))==(signed long)5)))){

(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);
if(((*(p_bGoToStandby)))){
(eGotoOpsStep=14);
}else if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}else if(((*(p_bClamp2Sen)))){
(eClamp1Act=5);
(eClamp2Act=5);


if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)5))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)5)))){

(eClamp1Act=0);
(eClamp2Act=0);
if(((*(p_bGoToStandby)))){
(eGotoOpsStep=14);
}else if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}else{
(eClamp1Act=5);

if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)5)))){

(eClamp1Act=0);
if(((*(p_bGoToStandby)))){
(eGotoOpsStep=14);
}else if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}

}break;case 34:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Inversion"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=35);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 35:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inverter Turning"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertReqPos==(signed long)0))){
(eInvertAct=1);
}else if((((signed long)eInvertReqPos==(signed long)1))){
(eInvertAct=2);
}

if(((((signed long)((*(p_eInvertStatus)))==(signed long)1))&((((signed long)((*(p_eInvertStat)))==(signed long)1))|(((signed long)((*(p_eInvertStat)))==(signed long)2))))){
(eInvertAct=0);

(eGotoOpsStep=37);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 37:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Unblock After Invert"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClamp1Act=6);
(eClamp2Act=6);
(eClamp3Act=6);



if(((((signed long)((*(p_eClamp1Status)))==(signed long)1))&(((signed long)((*(p_eClamp1Stat)))==(signed long)6))&(((signed long)((*(p_eClamp2Status)))==(signed long)1))&(((signed long)((*(p_eClamp2Stat)))==(signed long)6))&(((signed long)((*(p_eClamp3Status)))==(signed long)1))&(((signed long)((*(p_eClamp3Stat)))==(signed long)6)))){

(eClamp1Act=0);
(eClamp2Act=0);
(eClamp3Act=0);

if((((signed long)eInvertCurrPos==(signed long)0))){

if((bInvertPosInvalidSkipInit&(((*(p_bLeftSen))^1)))){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){

(bInvertPosInvalidSkipInit=0);

(eGotoOpsStep=39);

}else if(((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1)))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}

}else{
(eGotoOpsStep=13);
}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){

if((bInvertPosInvalidSkipInit&(((*(p_bRightSen))^1)))){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bInvertPosInvalidSkipInit=0);
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}

}else{
(eGotoOpsStep=42);
}

}else if(((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1)))){
(eGotoOpsStep=39);

}else{
(eGotoOpsStep=13);
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 36:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Recovering Board Status"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if(((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0)))){
(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(bInvertPosInvalidSkipInit=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)1))){

if((((signed long)eInvertCurrPos==(signed long)eInvertReqPos))){

(bInvertPosInvalidSkipInit=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}

}else{
(bInvertPosInvalidSkipInit=0);
(eGotoOpsStep=13);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 39:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Pre-Exiting Board"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=15);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)15)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 40:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"DS: Opening Inlet & Outlet Shutter"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);


if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 41:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"DS: Opening Outlet Shutter"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eOutletShutterAct=6);

if(((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6)))){
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 42:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Downstream Standby Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_bGoToStandby)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

if(((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if(((*(p_bDBAOnRgtSen)))){
if(((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1)))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}else{
if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}
}else{
(eGotoOpsStep=14);
}
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 43:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Removing Board By Timer"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

(fbDSTimer.IN=(bConvSen^1));;TON(&fbDSTimer);

if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bHvBrd=0);

(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;case 44:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Downstream Machine"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((signed long)((*(p_eConvDirection)))==(signed long)2))|(((signed long)((*(p_eConvDirection)))==(signed long)1)))){
if(((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bLeftSen))^1)));;TON(&fbDSTimer);
}
}else{
if(((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bRightSen))^1)));;TON(&fbDSTimer);
}
}

switch(((*(p_eDSCommMod)))){
case 0:{
(eDSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bDSSMEMAConvStart)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if(((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))|((*(p_bGoToStandby))))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eDSSMEMAAct=0);
}
}

}

}break;case 1:{
if((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;}

}break;case 47:{
switch(((*(p_eDSCommMod)))){
case 0:{
(eConvAct=17);

if(((((((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eDSSMEMAStat)))==(signed long)1)))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){

(eDSSMEMAAct=0);
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);


if((bBoardInFromUS1&(bInvOnceTwicePCBOut^1))){
(eGotoOpsStep=48);
}else{
(eGotoOpsStep=13);
(bInvOnceTwicePCBOut=0);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 1:{
(eConvAct=17);

if((((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)0))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

if((bBoardInFromUS1&(bInvOnceTwicePCBOut^1))){
(eGotoOpsStep=48);
}else{
(eGotoOpsStep=13);
(bInvOnceTwicePCBOut=0);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;}

}break;case 48:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Waiting for Retun Board "; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bInvOnceTwicePCBOut=1);

(eGotoOpsStep=18);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 49:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Upstream 2 Standby Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bUS2TimerRun=0);

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|((*(p_bGoToStandby))))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else if((((unsigned long)(unsigned char)((*(p_bRtrnUSAllow)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=51);
}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=50);
}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=13);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 50:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inserting Board By Timer"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

(fbUS2Timer.IN=bConvSen);;TON(&fbUS2Timer);

if((((unsigned long)(unsigned char)fbUS2Timer.Q==(unsigned long)(unsigned char)1))){
(bUS2TimerRun=1);
(fbUS2Timer.IN=0);;TON(&fbUS2Timer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=52);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=53);
}

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=49);
}

}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=13);

}else{
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=49);
}

}

}break;case 51:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Upstream 2 Machine"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(((*(p_eUSComm2Mod)))){
case 0:{
(fbUS2Timer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUS2Timer);

(eUSSMEMA2Act=1);

if((((unsigned long)(unsigned char)((*(p_bUSSMEMA2Transporting)))==(unsigned long)(unsigned char)1))){
(bUS2TimerRun=0);
(fbUS2Timer.IN=0);;TON(&fbUS2Timer);

(bGdBrd=((*(p_bUSSMEMA2USGdBrdRdy))));

{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Return Board"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=52);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=53);
}

}else if((((unsigned long)(unsigned char)fbUS2Timer.Q==(unsigned long)(unsigned char)1))){
(bUS2TimerRun=1);
(fbUS2Timer.IN=0);;TON(&fbUS2Timer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=52);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=53);
}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bRtrnUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUS2TimerRun=0);
(fbUS2Timer.IN=0);;TON(&fbUS2Timer);

(eUSSMEMA2Act=0);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=49);
}

}else if((((unsigned long)(unsigned char)bInvOnceTwicePCBOut==(unsigned long)(unsigned char)0))){
(eGotoOpsStep=13);

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUS2TimerRun=0);
(fbUS2Timer.IN=0);;TON(&fbUS2Timer);

(eUSSMEMA2Act=0);

(eGotoOpsStep=49);
}

}



































































}break;}

}break;case 52:{
switch(((*(p_eUSComm2Mod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMA2Transporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)0)))){

(eConvAct=45);
(eUSSMEMA2Act=0);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);

(eGotoOpsStep=49);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMA2ConvStart)))|bUS2TimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Return Board"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|bUS2TimerRun)){
(bHvBrd=1);
}

if((((*(p_bUSSMEMA2ConvStop)))&(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}


if(((((((signed long)((*(p_eUSSMEMA2Status)))==(signed long)1))&(((signed long)((*(p_eUSSMEMA2Stat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eUSSMEMA2Act=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}






































}break;}

}break;case 53:{
switch(((*(p_eUSComm2Mod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMA2Transporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);
(eGotoOpsStep=49);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMA2ConvStart)))|bUS2TimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Return Board"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if((((*(p_bUSSMEMA2ConvStop)))&(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((((signed long)((*(p_eUSSMEMA2Status)))==(signed long)1))&(((signed long)((*(p_eUSSMEMA2Stat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUS2TimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eUSSMEMA2Act=0);

(eGotoOpsStep=30);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

































}break;}

}break;}

}

}


(bBrdInserted=bUSTimerRun);
(bBrdRemoved=bDSTimerRun);


if(((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))|(((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))|(((signed long)eOpsStep==(signed long)10))|(((signed long)eOpsStep==(signed long)11)))){
(bStepInitConv=1);
}else{
(bStepInitConv=0);
}

(bStepInitAwayStopper=((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))));
(bStepInitTwdStopper=((((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))));
(bStepInitDone=((((signed long)eOpsStep>(signed long)12))&(((unsigned long)(unsigned char)bInvertPosInvalidSkipInit==(unsigned long)(unsigned char)0))));
(bStepUSStandby=(((signed long)eOpsStep==(signed long)24)));
(bStepUSCommTmr=(((signed long)eOpsStep==(signed long)26)));
(bStepEntToEnd=(((signed long)eOpsStep==(signed long)27)));
(bStepEntToInOff=(((signed long)eOpsStep==(signed long)28)));
(bStepRev=(((signed long)eOpsStep==(signed long)30)));
(bStepPreExit=(((signed long)eOpsStep==(signed long)39)));
(bStepDSStandby=(((signed long)eOpsStep==(signed long)42)));
(bStepDSCommTmr=(((signed long)eOpsStep==(signed long)44)));
(bStepExitBrd=(((signed long)eOpsStep==(signed long)47)));
(bStepSafeMode=(((signed long)eOpsStep==(signed long)17)));
(bStepInvRtrnUSCommTmr=(((signed long)eOpsStep==(signed long)51)));
(bStepInvRtrnUSStandby=(((signed long)eOpsStep==(signed long)49)));
(bStepInvRtrnEntToEnd=(((signed long)eOpsStep==(signed long)52)));
(bStepInvRtrnEntToInOff=(((signed long)eOpsStep==(signed long)53)));

}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/SubSequence/Act_OpsStandard_Hermes.st"
static void __AS__Action__Act_OpsStandard_Hermes(void){
{

if((((signed long)eGotoOpsStep!=(signed long)eOpsStep))){

switch(eGotoOpsStep){

default: {
(eOpsStep=eGotoOpsStep);

}break;}

}

__AS__Action__Act_LogStep();

if((((signed long)eOpsStep==(signed long)eGotoOpsStep))){

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)0))){

switch(eOpsStep){

case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Check Condition"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bClampPrep)))){
if((((signed long)eInvertCurrPos==(signed long)2))){
(bInvertPosInvalidSkipInit=1);

if(((*(p_bClampDis)))){
(bClampDisInitUnblk=1);
}

(eGotoOpsStep=33);
}else{
(eGotoOpsStep=3);
}
}else{
if((((signed long)eInvertCurrPos==(signed long)2))){
(bInvertPosInvalidSkipInit=1);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}else{
(eGotoOpsStep=2);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Clamp Unblock"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClampAct=6);

if(((((signed long)((*(p_eClampStatus)))==(signed long)1))&(((signed long)((*(p_eClampStat)))==(signed long)6)))){

(eClampAct=0);
(eGotoOpsStep=2);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<39l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)bInvertCompl==(unsigned long)(unsigned char)0))){
if((((signed long)eInvertCurrPos==(signed long)0))){
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=4);
}else{
(eGotoOpsStep=6);
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=5);
}else{
(eGotoOpsStep=6);
}

}else{
(eGotoOpsStep=6);
}

}else{
(eGotoOpsStep=9);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 4:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Left"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 5:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Away Stopper At Right"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eConvAct=0);

(eGotoOpsStep=6);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 6:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Stopper Block"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=5);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))){
(eStopperAct=0);

if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=7);

}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=8);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 7:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper At Left"; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

(fbRevTimer.IN=1);;(fbRevTimer.PT=(plctime)((*(p_diRevDlyTm))));;TON(&fbRevTimer);

if((((unsigned long)(unsigned char)fbRevTimer.Q==(unsigned long)(unsigned char)1))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(fbRevTimer.IN=0);;TON(&fbRevTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 8:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor Toward Stopper at Right"; for(zzIndex=0; zzIndex<37l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

(fbFwdTimer.IN=1);;(fbFwdTimer.PT=(plctime)((*(p_diFwdDlyTm))));;TON(&fbFwdTimer);

if((((unsigned long)(unsigned char)fbFwdTimer.Q==(unsigned long)(unsigned char)1))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eConvAct=0);

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}else if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(fbFwdTimer.IN=0);;TON(&fbFwdTimer);
(eConvAct=0);

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 9:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Stopper Unblock"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=6);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))){
(eStopperAct=0);
(eGotoOpsStep=10);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Conveyor to Right"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=12);
}else{
if((((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))&(((*(p_bUSReversal))^1)))|(((*(p_bLeftSen)))&((*(p_bUSReversal)))))){
(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(eGotoOpsStep=42);
}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 12:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Init Closing Shutters"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

if((((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))&(((*(p_bUSReversal))^1)))|(((*(p_bLeftSen)))&((*(p_bUSReversal)))))){

(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
(eGotoOpsStep=41);
}else{
(eGotoOpsStep=40);
}
}

}else{
if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=15);
}else{
(eGotoOpsStep=13);
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 14:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Auto Width Change"; for(zzIndex=0; zzIndex<43l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=15);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 15:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Moving Auto Width"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eAWAct=16);

if(((((signed long)((*(p_eAWStatus)))==(signed long)1))&(((signed long)((*(p_eAWStat)))==(signed long)16)))){
(eAWAct=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 13:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Condition"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bUSAllow)))){
(eGotoOpsStep=18);
}
}else{
(eGotoOpsStep=21);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 18:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Check Initial Shutter Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=21);
}else{
(eGotoOpsStep=20);
}
}else{
if((((*(p_bInletShutterOpen)))&((*(p_bOutletShutterOpen))))){
(eGotoOpsStep=21);
}else{
(eGotoOpsStep=19);
}

}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));


}break;case 19:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Shutters Prior After Auto Width Change"; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=21);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}


}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Inlet Shutter and Closing Outlet Shutter"; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=21);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 21:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Checking Stopper Position"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos==(signed long)0))){
if(((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))^1)){
(eGotoOpsStep=23);
}else{
if((((*(p_bUSReversal))^1))){
(eGotoOpsStep=23);
}else{
(eGotoOpsStep=22);
}
}
}else if((((signed long)eInvertCurrPos==(signed long)1))){
if(((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))^1)){
(eGotoOpsStep=23);
}else{
if((((*(p_bUSReversal))^1))){
(eGotoOpsStep=22);
}else{
(eGotoOpsStep=23);
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 22:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Block"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=5);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))){
(eStopperAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 23:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Unblock"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=6);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))){
(eStopperAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 24:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Upstream Standby Condition"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bUSTimerRun=0);

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else if((((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=26);
}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=25);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}break;case 25:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inserting Board By Timer"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bConvSen=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));

(fbUSTimer.IN=bConvSen);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}
}else{
(eGotoOpsStep=27);

}

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;case 26:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Upstream Machine"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(((*(p_eUSCommMod)))){
case 0:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

(eUSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSSMEMAUSGdBrdRdy))));

{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}


}else{
(eGotoOpsStep=27);

}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
(eGotoOpsStep=28);
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=27);
}
}else{
(eGotoOpsStep=27);
}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eUSSMEMAAct=0);

(eGotoOpsStep=24);
}

}

}break;case 1:{
(fbUSTimer.IN=(((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMidSen)))));;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bUSHermesUSGdRdy))));

if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
if((((*(p_bUSReversal))^1))){
(eGotoOpsStep=28);
}else{
(eGotoOpsStep=27);
}
}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((*(p_bUSReversal))^1))){
(eGotoOpsStep=27);
}else{
(eGotoOpsStep=28);
}
}
}else{
if(bReverseStoppingPos){
(eGotoOpsStep=28);
}else{
(eGotoOpsStep=27);
}
}

}else if((((unsigned long)(unsigned char)fbUSTimer.Q==(unsigned long)(unsigned char)1))){
(bUSTimerRun=1);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(bGdBrd=((*(p_bInsertGdBrd))));

if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if((((signed long)eInvertCurrPos==(signed long)0))){
if((((*(p_bUSReversal))^1))){
(eGotoOpsStep=28);
}else{
(eGotoOpsStep=27);
}
}else if((((signed long)eInvertCurrPos==(signed long)1))){
if((((*(p_bUSReversal))^1))){
(eGotoOpsStep=27);
}else{
(eGotoOpsStep=28);
}
}
}else{
(eGotoOpsStep=27);
}

}else if(((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bUSAllow)))==(unsigned long)(unsigned char)0)))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

if((((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)1))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=14);
}else{
(eGotoOpsStep=15);
}
}else{
(eGotoOpsStep=24);
}

}else{

(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bUSTimerRun=0);
(fbUSTimer.IN=0);;TON(&fbUSTimer);

(eGotoOpsStep=24);
}

}

}break;}

}break;case 27:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);

(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|bUSTimerRun)){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}


if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}


}else{
if((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=32);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=7);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}


if((((signed long)(signed long)(short)((*(p_iHermesAction)))==(signed long)(signed long)(short)1))){
if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)7)))){
(eGotoOpsStep=32);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}


}else{
if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
(eGotoOpsStep=32);
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}


}

}break;}

}break;case 28:{
switch(((*(p_eUSCommMod)))){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bUSSMEMATransporting)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
(eConvAct=45);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)45)))){
(eConvAct=0);
(eGotoOpsStep=24);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}else{
if((((*(p_bUSSMEMAConvStart)))|bUSTimerRun)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if((((*(p_bUSSMEMAConvStop)))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((((signed long)((*(p_eUSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eUSSMEMAStat)))==(signed long)1)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))&(((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eUSSMEMAAct=0);
(eGotoOpsStep=29);

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}

}break;case 1:{
if((((*(p_bUSHermesTransporting)))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Entering Board"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=8);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesStopTransport)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Stopping"; for(zzIndex=0; zzIndex<17l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(eConvAct=45);
}

if(((((unsigned long)(unsigned char)((*(p_bConvHvBrd)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bUSTimerRun==(unsigned long)(unsigned char)1)))){
(bHvBrd=1);
}

if(((((unsigned long)(unsigned char)((*(p_bUSHermesTransporting)))==(unsigned long)(unsigned char)0))|bUSTimerRun)){
if((((signed long)((*(p_eConvStat)))==(signed long)45))){
if((((signed long)((*(p_eConvStatus)))==(signed long)1))){
(eConvAct=0);
(eGotoOpsStep=24);
}
}else{
if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)8)))){
(eGotoOpsStep=29);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}
}

}break;}

}break;case 29:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Block After Entering Board"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=5);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)5)))){
(eStopperAct=0);
(eGotoOpsStep=30);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 30:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Reverse Board"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=11);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)11)))){
(eConvAct=0);

(eGotoOpsStep=32);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 32:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Checking Invert Complete Condition"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertCurrPos!=(signed long)eInvertReqPos))){
if((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))){
(eGotoOpsStep=33);
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}
}
}else{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 33:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Block Prior to Inversion"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClampAct=5);

if(((((signed long)((*(p_eClampStatus)))==(signed long)1))&(((signed long)((*(p_eClampStat)))==(signed long)5)))){

(eClampAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
(eGotoOpsStep=34);
}else{
(eGotoOpsStep=35);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 34:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Closing Shutters Prior to Inversion"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=5);
(eOutletShutterAct=5);

if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)5)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)5))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=35);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 35:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Inverter Turning"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)eInvertReqPos==(signed long)0))){
(eInvertAct=1);
}else if((((signed long)eInvertReqPos==(signed long)1))){
(eInvertAct=2);
}

if(((((signed long)((*(p_eInvertStatus)))==(signed long)1))&((((signed long)((*(p_eInvertStat)))==(signed long)1))|(((signed long)((*(p_eInvertStat)))==(signed long)2))))){
(eInvertAct=0);

if(((((*(p_bClampPrep)))&(((unsigned long)(unsigned char)((*(p_bClampDis)))==(unsigned long)(unsigned char)0)))|bClampDisInitUnblk)){

(bClampDisInitUnblk=0);

(eGotoOpsStep=37);

}else{
if((((signed long)eInvertCurrPos==(signed long)0))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=39);
}else{
(eGotoOpsStep=13);
}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=38);
}else{
(eGotoOpsStep=13);
}
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 37:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Clamp Unblock After Invert"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eClampAct=6);

if(((((signed long)((*(p_eClampStatus)))==(signed long)1))&(((signed long)((*(p_eClampStat)))==(signed long)6)))){
(eClampAct=0);

if((((signed long)eInvertCurrPos==(signed long)0))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=39);
}else{
(eGotoOpsStep=13);
}
}

}else if((((signed long)eInvertCurrPos==(signed long)1))){

if(bInvertPosInvalidSkipInit){
(eGotoOpsStep=36);
}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(eGotoOpsStep=38);
}else{
(eGotoOpsStep=13);
}
}
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 36:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Recovering Board Status"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=1);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)1)))){
(eConvAct=0);

if((((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))&(((*(p_bUSReversal))^1)))|(((*(p_bLeftSen)))&((*(p_bUSReversal)))))){
(bHvBrd=1);
(bGdBrd=((*(p_bInitGdBrd))));

(bInvertPosInvalidSkipInit=0);

if((((signed long)eInvertCurrPos==(signed long)0))){
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}
}else if((((signed long)eInvertCurrPos==(signed long)1))){
(eGotoOpsStep=38);
}

}else{
(bInvertPosInvalidSkipInit=0);
(eGotoOpsStep=13);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 38:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Stopper Unblock After Invert"; for(zzIndex=0; zzIndex<28l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStopperAct=6);

if(((((signed long)((*(p_eStopperStatus)))==(signed long)1))&(((signed long)((*(p_eStopperStat)))==(signed long)6)))){
(eStopperAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 39:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Conveyor Pre-Exiting Board"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eConvAct=15);

if(((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)15)))){
(eConvAct=0);

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))|(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
if(((*(p_bOutletShutterOpen)))){
(eGotoOpsStep=42);
}else{
(eGotoOpsStep=41);
}
}else{
(eGotoOpsStep=42);
}

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 40:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"DS: Opening Inlet & Outlet Shutter"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eInletShutterAct=6);
(eOutletShutterAct=6);


if((((((signed long)((*(p_eInletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eInletShutterStat)))==(signed long)6)))&((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6))))){

(eInletShutterAct=0);
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 41:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Opening Outlet Shutter"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eOutletShutterAct=6);

if(((((signed long)((*(p_eOutletShutterStatus)))==(signed long)1))&(((signed long)((*(p_eOutletShutterStat)))==(signed long)6)))){
(eOutletShutterAct=0);

(eGotoOpsStep=42);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 42:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"In Downstream Standby Condition"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bDSTimerRun=0);

if(((*(p_bUSReversal)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

if(((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if(((*(p_bDBAOnRgtSen)))){
if(((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1)))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}else{
if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)1))){
(bReachedEnd=0);
(eGotoOpsStep=44);
}else if(((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)0)))){
(bReachedEnd=0);
(eGotoOpsStep=43);
}
}

if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;case 43:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Removing Board By Timer"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bUSReversal)))){
(bConvSen=((*(p_bLeftSen))));
}else{
(bConvSen=((*(p_bRightSen))));
}

(fbDSTimer.IN=(bConvSen^1));;TON(&fbDSTimer);

if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bHvBrd=0);

(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)bConvSen==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;case 44:{
{int zzIndex; plcstring* zzLValue=(plcstring*)sStepTxt; plcstring* zzRValue=(plcstring*)"Communicating Downstream Machine"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bUSReversal)))){
if(((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bLeftSen))^1)));;TON(&fbDSTimer);
}
}else{
if(((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eConvStatus)))!=(signed long)2)))){
(bReachedEnd=1);
}

if((((unsigned long)(unsigned char)bReachedEnd==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=(((*(p_bRightSen))^1)));;TON(&fbDSTimer);
}
}

switch(((*(p_eDSCommMod)))){
case 0:{
(eDSSMEMAAct=1);

if((((unsigned long)(unsigned char)((*(p_bDSSMEMAConvStart)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);
(eDSSMEMAAct=0);
(eConvAct=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(eDSSMEMAAct=0);
}
}

}

}break;case 1:{
if((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)1))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=47);

}else if((((unsigned long)(unsigned char)fbDSTimer.Q==(unsigned long)(unsigned char)1))){
(bDSTimerRun=1);
(fbDSTimer.IN=0);;TON(&fbDSTimer);
(bHvBrd=0);

(bReachedEnd=0);
(eConvAct=0);

(eGotoOpsStep=13);

}else if((((unsigned long)(unsigned char)((*(p_bDSAllow)))==(unsigned long)(unsigned char)0))){
(bDSTimerRun=0);
(fbDSTimer.IN=0);;TON(&fbDSTimer);

(bReachedEnd=0);

(eGotoOpsStep=42);

}else{
if((((signed long)((*(p_eConvStatus)))!=(signed long)2))){
(bPaused=((*(p_bStop))));

if((((unsigned long)(unsigned char)bPaused==(unsigned long)(unsigned char)1))){
(fbDSTimer.IN=0);;TON(&fbDSTimer);
}
}

}

}break;}

}break;case 47:{
switch(((*(p_eDSCommMod)))){
case 0:{
(eConvAct=17);

if(((((((signed long)((*(p_eDSSMEMAStatus)))==(signed long)1))&(((signed long)((*(p_eDSSMEMAStat)))==(signed long)1)))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){

(eDSSMEMAAct=0);
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);
(eGotoOpsStep=13);


(bPaused=(((*(p_bStop)))|((*(p_bStep)))));

}

}break;case 1:{
(eConvAct=17);

if((((((unsigned long)(unsigned char)((*(p_bDSHermesTransporting)))==(unsigned long)(unsigned char)0))|bDSTimerRun)&((((signed long)((*(p_eConvStatus)))==(signed long)1))&(((signed long)((*(p_eConvStat)))==(signed long)17))))){
(eConvAct=0);

(bHvBrd=0);
((*(p_bConvHvBrd))=0);

(eGotoOpsStep=13);

(bPaused=(((*(p_bStop)))|((*(p_bStep)))));
}

}break;}

}break;}

}

}


(bBrdInserted=bUSTimerRun);
(bBrdRemoved=bDSTimerRun);


if(((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))|(((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))|(((signed long)eOpsStep==(signed long)10)))){
(bStepInitConv=1);
}else{
(bStepInitConv=0);
}

(bStepInitAwayStopper=((((signed long)eOpsStep==(signed long)4))|(((signed long)eOpsStep==(signed long)5))));
(bStepInitTwdStopper=((((signed long)eOpsStep==(signed long)7))|(((signed long)eOpsStep==(signed long)8))));
(bStepInitDone=((((signed long)eOpsStep>(signed long)12))&(((unsigned long)(unsigned char)bInvertPosInvalidSkipInit==(unsigned long)(unsigned char)0))));
(bStepUSStandby=(((signed long)eOpsStep==(signed long)24)));
(bStepUSCommTmr=(((signed long)eOpsStep==(signed long)26)));
(bStepEntToEnd=(((signed long)eOpsStep==(signed long)27)));
(bStepEntToInOff=(((signed long)eOpsStep==(signed long)28)));
(bStepRev=(((signed long)eOpsStep==(signed long)30)));
(bStepPreExit=(((signed long)eOpsStep==(signed long)39)));
(bStepDSStandby=(((signed long)eOpsStep==(signed long)42)));
(bStepDSCommTmr=(((signed long)eOpsStep==(signed long)44)));
(bStepExitBrd=(((signed long)eOpsStep==(signed long)47)));
(bStepInvert=(((signed long)eOpsStep==(signed long)35)));
(bStepAWMov=(((signed long)eOpsStep==(signed long)15)));
}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Sequence/Act_LogStep.st"
static void __AS__Action__Act_LogStep(void){
{

if((bClsLog&~Edge0000900000&1?((Edge0000900000=bClsLog&1),1):((Edge0000900000=bClsLog&1),0))){
__AS__MEMSET(((unsigned long)(&logStep)),0,4000);
(logIndexStep=0);
}

(blog=(((signed long)eOpsStep!=(signed long)eGotoOpsStepDummy)));

if(blog){
(logStep[logIndexStep]=eOpsStep);
(logIndexStep=(logIndexStep+1));
if((((signed long)(signed long)(short)logIndexStep>(signed long)999))){
(logIndexStep=0);
}
}

(eGotoOpsStepDummy=eOpsStep);


}}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

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
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/OpsInvert/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/OpsInvert/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Operations/OpsInvert/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/OpsInvert/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'logStep'\\n\"");
__asm__(".previous");
