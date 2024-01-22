#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DOutput/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((((unsigned long)(unsigned char)bInitDone==(unsigned long)(unsigned char)0))){
(bInitDone=1);

__AS__Action__Act_InitLocal();
__AS__Action__Act_InitGlobal();

}else if((((unsigned long)(unsigned char)bInitialDone==(unsigned long)(unsigned char)0))){
(bInitialDone=1);

__AS__Action__Act_Initial();

}else{
if((((*(p_bHermesCmdInitialCompl)))&~Edge0001000000&1?((Edge0001000000=((*(p_bHermesCmdInitialCompl)))&1),1):((Edge0001000000=((*(p_bHermesCmdInitialCompl)))&1),0))){
__AS__Action__Act_InitialCompl();
}
__AS__Action__Act_LinkAction();
__AS__Action__Act_Action();
__AS__Action__Act_Link();
__AS__Action__Act_Main();
__AS__Action__Act_Background();

}

}imp10_end0_0:;}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_eLinkOpsInvertInvertCurrPos=p_OpsInvertInvertCurrPos);
(p_bLinkConvMtrSigOnOrLToR=p_ConvMtrSigOnOrLToR);
(p_bLinkConvMtrDirOrRToL=p_ConvMtrDirOrRToL);

(p_bLinkUIConvDCCtrl=p_UIConvDCCtrl);

(p_usiLinkProdRcpCurrRcpMcMod=p_ProdRcpCurrRcp1McMod);
(p_eConvStatus=p_ConvStatus);

(p_bLinkOpsInvertStepInitTwdStpr=p_OpsInvertStepInitTwdStpr);
(p_bLinkOpsInvertStepInitAwayStpr=p_OpsInvertStepInitAwayStpr);


(p_eAct=p_UIDOAct);
(p_tyDOSettings=p_NtParamDOSettings);

(p_bManual=p_UIUIMnlMod);
(p_bSafetyRlyRst=p_RstErrSafetyRlyRst);
(p_bTLWhite=p_TLBuzWhite);
(p_bTLAmber=p_TLBuzAmber);
(p_bTLGreen=p_TLBuzGreen);
(p_bTLRed=p_TLBuzRed);
(p_bTLBlue=p_TLBuzBlue);
(p_bBuz=p_TLBuzBeep);
(p_bUSB=p_USSMEMAUSB);
(p_bDBA=p_DSSMEMADBA);
(p_bUSB2=p_USSMEMA2USB);
(p_bDBAStat=p_DSSMEMADBAStat);
(p_bStprUnblkCtrl=p_PneuNoSenStopperRetCtrl);
(p_bStprBlkCtrl=p_PneuNoSenStopperExtCtrl);
(p_bInvertHome=p_MotorBrkMtrSigOnOrCW);
(p_bInvertRemote=p_MotorBrkMtrDirOrCCW);
(p_bInvertBrake=p_MotorBrkMtrBrkRls);
(p_bClampControl=p_PneuNoSenClampExtCtrl);
(p_bUnclampControl=p_PneuNoSenClampRetCtrl);
(p_bInShutterOpenCtrl=p_Pneu2SenInShutterRetCtrl);
(p_bInShutterCloseCtrl=p_Pneu2SenInShutterExtCtrl);
(p_bOutShutterOpenCtrl=p_Pneu2SenOutShutterRetCtrl);
(p_bOutShutterCloseCtrl=p_Pneu2SenOutShutterExtCtrl);


(p_bClamp1Ctrl=p_Pneu2SenClamp1ExtCtrl);
(p_bUnClamp1Ctrl=p_Pneu2SenClamp1RetCtrl);
(p_bClamp2Ctrl=p_Pneu2SenClamp2ExtCtrl);
(p_bUnClamp2Ctrl=p_Pneu2SenClamp2RetCtrl);
(p_bClamp3Ctrl=p_Pneu2SenClamp3ExtCtrl);
(p_bUnClamp3Ctrl=p_Pneu2SenClamp3RetCtrl);

(p_tyDI=p_DI);
(p_bHermesCmdInitialCompl=p_HermesCmdInitialCompl);






}}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((~((*(p_bManual)))&Edge0000800000&1?((Edge0000800000=((*(p_bManual)))&1),1):((Edge0000800000=((*(p_bManual)))&1),0))){
((*(p_eAct))=0);
}

}imp8_else0_0:imp8_end0_0:;}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_Link.st"
static void __AS__Action__Act_Link(void){
{





if(((*(p_bManual)))){
(p_bBypsCoverSW1=p_UIMnlModBypassTopCover1);
(p_bTopCvrUnlckToDS=p_UIMnlModTopCvrUnlckToDS);
(p_bTopCvrUnlckToUS=p_UIMnlModTopCvrUnlckToUS);
(p_bMachineSafetySigToDS=p_UIMnlModMachineSafetySigToDS);
(p_bMachineSafetySigToUS=p_UIMnlModMachineSafetySigToUS);
(p_bSafetyTopCoverSWCoil1=p_UIMnlModSafetyTopCoverSWCoil1);
(p_bCoverPBLED1=p_UIMnlModCoverPBLED1);
}else{
(p_bBypsCoverSW1=p_UIBypassTopCover1);
(p_bMachineSafetySigToDS=p_UIMachineSafetySigToDS);
(p_bMachineSafetySigToUS=p_UIMachineSafetySigToUS);
(p_bTopCvrUnlckToDS=p_UITopCvrUnlckToDS);
(p_bTopCvrUnlckToUS=p_UITopCvrUnlckToUS);
(p_bSafetyTopCoverSWCoil1=p_UISafetyTopCoverSWCoil1);
(p_bCoverPBLED1=p_UICoverPBLED1);
}


if((((signed long)((*(p_eLinkOpsInvertInvertCurrPos)))==(signed long)0))){

if((((signed long)((*(p_eConvStatus)))==(signed long)2))){
((*(p_bConvMtrCW))=((*(p_bLinkConvMtrDirOrRToL))));
((*(p_bConvMtrCCW))=((*(p_bLinkConvMtrSigOnOrLToR))));
}else{
if(((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkUIConvDCCtrl)))==(unsigned long)(unsigned char)1)))){
((*(p_bConvMtrCW))=((*(p_bLinkConvMtrSigOnOrLToR))));
((*(p_bConvMtrCCW))=((*(p_bLinkConvMtrDirOrRToL))));
}else{
((*(p_bConvMtrCW))=0);
((*(p_bConvMtrCCW))=0);
}

}

}else if((((signed long)((*(p_eLinkOpsInvertInvertCurrPos)))==(signed long)1))){

if((((signed long)((*(p_eConvStatus)))==(signed long)2))){
((*(p_bConvMtrCW))=((*(p_bLinkConvMtrSigOnOrLToR))));
((*(p_bConvMtrCCW))=((*(p_bLinkConvMtrDirOrRToL))));
}else{
if(((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkUIConvDCCtrl)))==(unsigned long)(unsigned char)1)))){
((*(p_bConvMtrCW))=((*(p_bLinkConvMtrSigOnOrLToR))));
((*(p_bConvMtrCCW))=((*(p_bLinkConvMtrDirOrRToL))));
}else{
((*(p_bConvMtrCW))=0);
((*(p_bConvMtrCCW))=0);
}

}

}else{
((*(p_bConvMtrCW))=((*(p_bLinkConvMtrSigOnOrLToR))));
((*(p_bConvMtrCCW))=((*(p_bLinkConvMtrDirOrRToL))));
}





if((((*(p_tyDI)).bSafetyRlySig)&((*(p_tyDI)).bCoverSWSig)&((*(p_tyDI)).bEStopSig)&((*(p_tyDI)).bThermalPrtSig))){
((*(p_bMtrPwrRly))=1);
}else{
((*(p_bMtrPwrRly))=0);
}

}imp7_end6_0:;}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_udiMax=((unsigned long)(&c_udiDOutputMax)));
(p_eAct=((unsigned long)(&eAct)));
(p_tyDOSettings=((unsigned long)(&tyDOSettings)));
(p_bManual=((unsigned long)(&bManual)));
(p_bSafetyRlyRst=((unsigned long)(&bSafetyRlyRst)));
(p_bTLRed=((unsigned long)(&bTLRed)));
(p_bTLAmber=((unsigned long)(&bTLAmber)));
(p_bTLGreen=((unsigned long)(&bTLGreen)));
(p_bTLWhite=((unsigned long)(&bTLWhite)));
(p_bTLBlue=((unsigned long)(&bTLBlue)));
(p_bBuz=((unsigned long)(&bBuz)));
(p_bUSB=((unsigned long)(&bUSB)));
(p_bDBA=((unsigned long)(&bDBA)));
(p_bDBAStat=((unsigned long)(&bDBAStat)));
(p_bUSB2=((unsigned long)(&bUSB2)));
(p_bConvMtrCW=((unsigned long)(&bConvMtrCW)));
(p_bConvMtrCCW=((unsigned long)(&bConvMtrCCW)));
(p_bStprUnblkCtrl=((unsigned long)(&bStprUnblkCtrl)));
(p_bStprBlkCtrl=((unsigned long)(&bStprBlkCtrl)));
(p_bInvertHome=((unsigned long)(&bInvertHome)));
(p_bInvertRemote=((unsigned long)(&bInvertRemote)));
(p_bInvertBrake=((unsigned long)(&bInvertBrake)));
(p_bClampControl=((unsigned long)(&bClampControl)));
(p_bUnclampControl=((unsigned long)(&bUnclampControl)));
(p_bMtrPwrRly=((unsigned long)(&bMtrPwrRly)));
(p_bInShutterOpenCtrl=((unsigned long)(&bInShutterOpenCtrl)));
(p_bInShutterCloseCtrl=((unsigned long)(&bInShutterCloseCtrl)));
(p_bOutShutterOpenCtrl=((unsigned long)(&bOutShutterOpenCtrl)));
(p_bOutShutterCloseCtrl=((unsigned long)(&bOutShutterCloseCtrl)));
(p_bClamp1Ctrl=((unsigned long)(&bClamp1Ctrl)));
(p_bUnClamp1Ctrl=((unsigned long)(&bUnClamp1Ctrl)));
(p_bClamp2Ctrl=((unsigned long)(&bClamp2Ctrl)));
(p_bUnClamp2Ctrl=((unsigned long)(&bUnClamp2Ctrl)));
(p_bClamp3Ctrl=((unsigned long)(&bClamp3Ctrl)));
(p_bUnClamp3Ctrl=((unsigned long)(&bUnClamp3Ctrl)));

(p_bBypsCoverSW1=((unsigned long)(&bBypassTopCover1)));
(p_bTopCvrUnlckToDS=((unsigned long)(&bTopCvrUnlckToDS)));
(p_bTopCvrUnlckToUS=((unsigned long)(&bTopCvrUnlckToUS)));
(p_bMachineSafetySigToDS=((unsigned long)(&bMachineSafetySigToDS)));
(p_bMachineSafetySigToUS=((unsigned long)(&bMachineSafetySigToUS)));
(p_bSafetyTopCoverSWCoil1=((unsigned long)(&bSafetyTopCoverSWCoil1)));
(p_bCoverPBLED1=((unsigned long)(&bCoverPBLED1)));

(p_bHermesUSCmdFeaturePause=((unsigned long)(&bHermesDummyMem)));
(p_bHermesDSCmdFeaturePause=((unsigned long)(&bHermesDummyMem)));
}}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_InitialCompl.st"
static void __AS__Action__Act_InitialCompl(void){
{


(p_bHermesUSCmdFeaturePause=p_HermesUSCmdFeaturePause);


(p_tyHermesUSCmdPause=p_HermesUSCmdPause);


(p_bHermesDSCmdFeaturePause=p_HermesDSCmdFeaturePause);


(p_tyHermesDSCmdPause=p_HermesDSCmdPause);

}}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2))|(((signed long)eStatus==(signed long)1)))){
(eStat=((*(p_eAct))));
}

}imp1_else0_0:imp1_end0_0:;}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){


(eStatus=1);

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){


(eStatus=1);

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){


(eStatus=1);

}

}break;}

}imp9_case1_3:imp9_endcase1_0:;}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Act_Background.st"
static void __AS__Action__Act_Background(void){
{

__AS__MEMSET(((unsigned long)(&a_bPhysicalDO)),0,40);


if(((((signed long)((*(p_tyDOSettings)).diSafetyRlyRst)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diSafetyRlyRst)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diSafetyRlyRst)-1]=((*(p_bSafetyRlyRst))));
}

if(((((signed long)((*(p_tyDOSettings)).diTLRed)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTLRed)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTLRed)-1]=((*(p_bTLRed))));
}

if(((((signed long)((*(p_tyDOSettings)).diTLAmber)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTLAmber)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTLAmber)-1]=((*(p_bTLAmber))));
}

if(((((signed long)((*(p_tyDOSettings)).diTLGreen)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTLGreen)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTLGreen)-1]=((*(p_bTLGreen))));
}

if(((((signed long)((*(p_tyDOSettings)).diTLWhite)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTLWhite)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTLWhite)-1]=((*(p_bTLWhite))));
}

if(((((signed long)((*(p_tyDOSettings)).diTLBlue)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTLBlue)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTLBlue)-1]=((*(p_bTLBlue))));
}

if(((((signed long)((*(p_tyDOSettings)).diBuz)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diBuz)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diBuz)-1]=((*(p_bBuz))));
}

if(((((signed long)((*(p_tyDOSettings)).diDBA)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diDBA)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diDBA)-1]=((*(p_bDBA))));
}

if(((((signed long)((*(p_tyDOSettings)).diDBAStat)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diDBAStat)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diDBAStat)-1]=((*(p_bDBAStat))));
}

if(((((signed long)((*(p_tyDOSettings)).diUSB)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diUSB)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diUSB)-1]=((*(p_bUSB))));
}

if(((((signed long)((*(p_tyDOSettings)).diUSB2)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diUSB2)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diUSB2)-1]=((*(p_bUSB2))));
}

if(((((signed long)((*(p_tyDOSettings)).diConvMtrCW)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diConvMtrCW)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diConvMtrCW)-1]=((*(p_bConvMtrCW))));
}

if(((((signed long)((*(p_tyDOSettings)).diConvMtrCCW)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diConvMtrCCW)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diConvMtrCCW)-1]=((*(p_bConvMtrCCW))));
}

if(((((signed long)((*(p_tyDOSettings)).diStprUnblkCtrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diStprUnblkCtrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diStprUnblkCtrl)-1]=((*(p_bStprUnblkCtrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diStprBlkCtrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diStprBlkCtrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diStprBlkCtrl)-1]=((*(p_bStprBlkCtrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diInvertHome)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diInvertHome)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diInvertHome)-1]=((*(p_bInvertHome))));
}

if(((((signed long)((*(p_tyDOSettings)).diInvertRemote)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diInvertRemote)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diInvertRemote)-1]=((*(p_bInvertRemote))));
}

if(((((signed long)((*(p_tyDOSettings)).diInvertBrake)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diInvertBrake)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diInvertBrake)-1]=((*(p_bInvertBrake))));
}

if(((((signed long)((*(p_tyDOSettings)).diClampControl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diClampControl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diClampControl)-1]=((*(p_bClampControl))));
}

if(((((signed long)((*(p_tyDOSettings)).diUnclampControl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diUnclampControl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diUnclampControl)-1]=((*(p_bUnclampControl))));
}

if(((((signed long)((*(p_tyDOSettings)).diMtrPwrRly)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diMtrPwrRly)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diMtrPwrRly)-1]=((*(p_bMtrPwrRly))));
}

if(((((signed long)((*(p_tyDOSettings)).diInShutterOpenCtrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diInShutterOpenCtrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diInShutterOpenCtrl)-1]=((*(p_bInShutterOpenCtrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diInShutterCloseCtrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diInShutterCloseCtrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diInShutterCloseCtrl)-1]=((*(p_bInShutterCloseCtrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diOutShutterOpenCtrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diOutShutterOpenCtrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diOutShutterOpenCtrl)-1]=((*(p_bOutShutterOpenCtrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diOutShutterCloseCtrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diOutShutterCloseCtrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diOutShutterCloseCtrl)-1]=((*(p_bOutShutterCloseCtrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diClamp1Ctrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diClamp1Ctrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diClamp1Ctrl)-1]=((*(p_bClamp1Ctrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diUnClamp1Ctrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diUnClamp1Ctrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diUnClamp1Ctrl)-1]=((*(p_bUnClamp1Ctrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diClamp2Ctrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diClamp2Ctrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diClamp2Ctrl)-1]=((*(p_bClamp2Ctrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diUnClamp2Ctrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diUnClamp2Ctrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diUnClamp2Ctrl)-1]=((*(p_bUnClamp2Ctrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diClamp3Ctrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diClamp3Ctrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diClamp3Ctrl)-1]=((*(p_bClamp3Ctrl))));
}

if(((((signed long)((*(p_tyDOSettings)).diUnClamp3Ctrl)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diUnClamp3Ctrl)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diUnClamp3Ctrl)-1]=((*(p_bUnClamp3Ctrl))));
}


if(((*(p_bHermesUSCmdFeaturePause)))){
if(((*(p_tyHermesUSCmdPause)).bFeatureRequestFrom)){

((*(p_tyHermesUSCmdPause)).bMachineSafetySigTo=((*(p_bMachineSafetySigToUS))));
}
if(((*(p_tyHermesUSCmdPause)).bFeatureRequestTo)){

((*(p_tyHermesUSCmdPause)).bUnlockCoverSigTo=((*(p_bTopCvrUnlckToUS))));
}
}else{
if(((((signed long)((*(p_tyDOSettings)).diMachineSafetySigToUS)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diMachineSafetySigToUS)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diMachineSafetySigToUS)-1]=((*(p_bMachineSafetySigToUS))));
}
if(((((signed long)((*(p_tyDOSettings)).diTopCvrUnlckToUS)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTopCvrUnlckToUS)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTopCvrUnlckToUS)-1]=((*(p_bTopCvrUnlckToUS))));
}
}
if(((*(p_bHermesDSCmdFeaturePause)))){
if(((*(p_tyHermesDSCmdPause)).bFeatureRequestTo)){

((*(p_tyHermesDSCmdPause)).bMachineSafetySigTo=((*(p_bMachineSafetySigToDS))));
}
if(((*(p_tyHermesDSCmdPause)).bFeatureRequestFrom)){

((*(p_tyHermesDSCmdPause)).bUnlockCoverSigTo=((*(p_bTopCvrUnlckToDS))));
}
}else{
if(((((signed long)((*(p_tyDOSettings)).diMachineSafetySigToDS)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diMachineSafetySigToDS)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diMachineSafetySigToDS)-1]=((*(p_bMachineSafetySigToDS))));
}
if(((((signed long)((*(p_tyDOSettings)).diTopCvrUnlckToDS)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diTopCvrUnlckToDS)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diTopCvrUnlckToDS)-1]=((*(p_bTopCvrUnlckToDS))));
}
}

if(((((signed long)((*(p_tyDOSettings)).diSafetyTopCoverSWCoil1)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diSafetyTopCoverSWCoil1)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diSafetyTopCoverSWCoil1)-1]=((*(p_bSafetyTopCoverSWCoil1))));
}
if(((((signed long)((*(p_tyDOSettings)).diCoverPBLED1)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diCoverPBLED1)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diCoverPBLED1)-1]=((*(p_bCoverPBLED1))));
}
if(((((signed long)((*(p_tyDOSettings)).diBypassTopCover1)>(signed long)0))&(((signed long)((*(p_tyDOSettings)).diBypassTopCover1)<=(signed long)(signed long)((*(p_udiMax))))))){
(a_bPhysicalDO[((*(p_tyDOSettings)).diBypassTopCover1)-1]=((*(p_bBypsCoverSW1))));
}




(tyDOutput.bSafetyRlyRst=((*(p_bSafetyRlyRst))));
(tyDOutput.bTLWhite=((*(p_bTLWhite))));
(tyDOutput.bTLAmber=((*(p_bTLAmber))));
(tyDOutput.bTLGreen=((*(p_bTLGreen))));
(tyDOutput.bTLRed=((*(p_bTLRed))));
(tyDOutput.bTLBlue=((*(p_bTLBlue))));
(tyDOutput.bBuz=((*(p_bBuz))));
(tyDOutput.bUSB=((*(p_bUSB))));
(tyDOutput.bDBA=((*(p_bDBA))));
(tyDOutput.bDBAStat=((*(p_bDBAStat))));
(tyDOutput.bUSB2=((*(p_bUSB2))));
(tyDOutput.bConvMtrCW=((*(p_bConvMtrCW))));
(tyDOutput.bConvMtrCCW=((*(p_bConvMtrCCW))));
(tyDOutput.bStprUnblkCtrl=((*(p_bStprUnblkCtrl))));
(tyDOutput.bStprBlkCtrl=((*(p_bStprBlkCtrl))));
(tyDOutput.bInvertHome=((*(p_bInvertHome))));
(tyDOutput.bInvertRemote=((*(p_bInvertRemote))));
(tyDOutput.bInvertBrake=((*(p_bInvertBrake))));
(tyDOutput.bClampControl=((*(p_bClampControl))));
(tyDOutput.bUnclampControl=((*(p_bUnclampControl))));
(tyDOutput.bMtrPwrRly=((*(p_bMtrPwrRly))));
(tyDOutput.bInShutterOpenCtrl=((*(p_bInShutterOpenCtrl))));
(tyDOutput.bInShutterCloseCtrl=((*(p_bInShutterCloseCtrl))));
(tyDOutput.bOutShutterOpenCtrl=((*(p_bOutShutterOpenCtrl))));
(tyDOutput.bOutShutterCloseCtrl=((*(p_bOutShutterCloseCtrl))));
(tyDOutput.bClamp1Ctrl=((*(p_bClamp1Ctrl))));
(tyDOutput.bUnClamp1Ctrl=((*(p_bUnClamp1Ctrl))));
(tyDOutput.bClamp2Ctrl=((*(p_bClamp2Ctrl))));
(tyDOutput.bUnClamp2Ctrl=((*(p_bUnClamp2Ctrl))));
(tyDOutput.bClamp3Ctrl=((*(p_bClamp3Ctrl))));
(tyDOutput.bUnClamp3Ctrl=((*(p_bUnClamp3Ctrl))));



(tyDOutput.bMachineSafetySigToDS=((*(p_bMachineSafetySigToDS))));
(tyDOutput.bMachineSafetySigToUS=((*(p_bMachineSafetySigToUS))));
(tyDOutput.bSafetyTopCoverSWCoil1=((*(p_bSafetyTopCoverSWCoil1))));
(tyDOutput.bBypassTopCover1=((*(p_bBypsCoverSW1))));
(tyDOutput.bCoverPBLED1=((*(p_bCoverPBLED1))));
(tyDOutput.bTopCvrUnlckToDS=((*(p_bMachineSafetySigToUS))));
(tyDOutput.bTopCvrUnlckToUS=((*(p_bMachineSafetySigToDS))));
}}
#line 28 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DOutput/DOutput/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DOutput/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DOutput/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DOutput/DOutput/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DOutput/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'a_bPhysicalDO'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiDOutputMax'\\n\"");
__asm__(".previous");
