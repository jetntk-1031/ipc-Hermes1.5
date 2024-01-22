#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/MotorBrk/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.st"
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
__AS__Action__Act_LinkAction();
__AS__Action__Act_Action();
__AS__Action__Act_LinkEn();

if(((((unsigned long)(unsigned char)((*(p_bPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0)))){
__AS__Action__Act_Link();
__AS__Action__Act_Main();
__AS__Action__Act_Background();
}else{
if((((signed long)eStat!=(signed long)0))){
(eStatus=1);
}else{
(eStatus=0);
}
}

__AS__Action__Act_Alarm();

}

}imp12_end0_0:;}
#line 40 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkOpsRun=p_OpsRun);
(p_bLinkOpsSimu=p_SimuRun);


(p_udiRstErr=p_RstErrReset);
(p_bManual=p_UIMnlMod);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);

(p_bCWSen=p_DIInvertRemoteSen);
(p_bCCWSen=p_DIInvertHomeSen);

(p_diMtrOnDlyTm=p_NtParamMotorOnDlyTm);
(p_diMtrOffDlyTm=p_NtParamMotorOffDlyTm);
(p_diBrkOnDlyTm=p_NtParamBrakeOnDlyTm);
(p_diBrkOffDlyTm=p_NtParamBrakeOffDlyTm);
(p_diTimeOut=p_NtParamTimeOut);

(p_bInletShutterCloseRS=p_DIInShutterCloseRS);
(p_bOutletShutterCloseRS=p_DIOutShutterCloseRS);
(p_bInletShutterPrep=p_NtParamProjInletShutPrep);
(p_bInletShutterDis=p_McParamInShutterDis);
(p_bOutletShutterPrep=p_NtParamProjOutletShutPrep);
(p_bOutletShutterDis=p_McParamOutShutterDis);



}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkOpsRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_OpsInvertInvertAct);
}else if(((*(p_bLinkOpsSimu)))){
(p_eAct=p_SimuInvInvAct);
}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_UIInvertAct);
}else{
(p_eAct=((unsigned long)(&eAct)));
}

}imp8_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))&(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
((*(p_bInterruptSensor))=((((unsigned long)(unsigned char)((*(p_bInletShutterCloseRS)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bOutletShutterCloseRS)))==(unsigned long)(unsigned char)0))));

}else if((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))){
((*(p_bInterruptSensor))=(((unsigned long)(unsigned char)((*(p_bInletShutterCloseRS)))==(unsigned long)(unsigned char)0)));

}else if((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))){
((*(p_bInterruptSensor))=(((unsigned long)(unsigned char)((*(p_bOutletShutterCloseRS)))==(unsigned long)(unsigned char)0)));

}else{
((*(p_bInterruptSensor))=0);
}

}imp7_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp11_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_bManual=((unsigned long)(&bManual)));
(p_bOnDirMod=((unsigned long)(&bOnDirMod)));
(p_diMtrSigOnDlyTm=((unsigned long)(&diMtrSigOnDlyTm)));
(p_diMtrDirOffDlyTm=((unsigned long)(&diMtrDirOffDlyTm)));
(p_diMtrBrkOnDlyTm=((unsigned long)(&diMtrBrkOnDlyTm)));
(p_diMtrOnDlyTm=((unsigned long)(&diMtrOnDlyTm)));
(p_diMtrOffDlyTm=((unsigned long)(&diMtrOffDlyTm)));
(p_diBrkOnDlyTm=((unsigned long)(&diBrkOnDlyTm)));
(p_diBrkOffDlyTm=((unsigned long)(&diBrkOffDlyTm)));
(p_diTimeOut=((unsigned long)(&diTimeOut)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_bCCWSen=((unsigned long)(&bCCWSen)));
(p_bMidSen=((unsigned long)(&bMidSen)));
(p_bCWSen=((unsigned long)(&bCWSen)));
(p_bInterruptSensor=((unsigned long)(&bInterruptSensor)));

(p_bInletShutterCloseRS=((unsigned long)(&bInletShutterCloseRS)));
(p_bOutletShutterCloseRS=((unsigned long)(&bOutletShutterCloseRS)));
(p_bInletShutterPrep=((unsigned long)(&bInletShutterPrep)));
(p_bInletShutterDis=((unsigned long)(&bInletShutterDis)));
(p_bOutletShutterPrep=((unsigned long)(&bOutletShutterPrep)));
(p_bOutletShutterDis=((unsigned long)(&bOutletShutterDis)));

}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbRotCW.bOnDirMod=((*(p_bOnDirMod))));
(fbRotCW.tMtrOnDlyTm=(plctime)((*(p_diMtrOnDlyTm))));
(fbRotCW.tMtrOffDlyTm=(plctime)((*(p_diMtrOffDlyTm))));
(fbRotCW.tBrkOnDlyTm=(plctime)((*(p_diBrkOnDlyTm))));
(fbRotCW.tBrkOffDlyTm=(plctime)((*(p_diBrkOffDlyTm))));
(fbRotCW.tTxDlyTm=(plctime)((*(p_diTimeOut))));
(fbRotCW.tMtrSigOnDlyTm=(plctime)((*(p_diMtrSigOnDlyTm))));
(fbRotCW.tMtrDirOffDlyTm=(plctime)((*(p_diMtrDirOffDlyTm))));

(fbRotCW.bStartSen=1);
(fbRotCW.bConvLToR=1);
(fbRotCW.bEn=0);;fbConvSenToSenBrkTmLmt(&fbRotCW);

(fbRotCCW.bOnDirMod=((*(p_bOnDirMod))));
(fbRotCCW.tMtrOnDlyTm=(plctime)((*(p_diMtrOnDlyTm))));
(fbRotCCW.tMtrOffDlyTm=(plctime)((*(p_diMtrOffDlyTm))));
(fbRotCCW.tBrkOnDlyTm=(plctime)((*(p_diBrkOnDlyTm))));
(fbRotCCW.tBrkOffDlyTm=(plctime)((*(p_diBrkOffDlyTm))));
(fbRotCCW.tTxDlyTm=(plctime)((*(p_diTimeOut))));
(fbRotCCW.bStartSen=1);
(fbRotCCW.bConvLToR=0);
(fbRotCCW.bEn=0);;fbConvSenToSenBrkTmLmt(&fbRotCCW);

(fbMtrBrkRlsOn.bEn=0);;fbConvBrkOn(&fbMtrBrkRlsOn);
(fbMtrBrkRlsOff.bEn=0);;fbConvBrkOff(&fbMtrBrkRlsOff);

(fbStop.bEn=0);;fbConvMtrOff(&fbStop);


}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)3))&bRstErr)){
((*(p_eAct))=0);
(eStat=0);
}


if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2))|(((signed long)eStatus==(signed long)1)))){
(eStat=((*(p_eAct))));
}

}imp1_else1_0:imp1_end1_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbRotCW.bEn=0);;fbConvSenToSenBrkTmLmt(&fbRotCW);
(fbRotCCW.bEn=0);;fbConvSenToSenBrkTmLmt(&fbRotCCW);
(fbStop.bEn=0);;fbConvMtrOff(&fbStop);
(fbMtrBrkRlsOn.bEn=0);;fbConvBrkOn(&fbMtrBrkRlsOn);
(fbMtrBrkRlsOff.bEn=0);;fbConvBrkOff(&fbMtrBrkRlsOff);
(fbMtrSigOnDlyTm.IN=0);;TON(&fbMtrSigOnDlyTm);
(fbMtrDirOffDlyTm.IN=0);;TON(&fbMtrDirOffDlyTm);












if(((((signed long)eStatOld!=(signed long)0))&(((signed long)eStatOld!=(signed long)10))&(((signed long)eStatOld!=(signed long)11))&(((signed long)eStatOld!=(signed long)12))&(((signed long)eStatOld!=(signed long)13))&(((signed long)eStatOld!=(signed long)14))&(((signed long)eStatOld!=(signed long)15))&(((signed long)eStatOld!=(signed long)16))&(((signed long)eStatOld!=(signed long)17))&(((signed long)eStatOld!=(signed long)18))&(((signed long)eStatOld!=(signed long)19)))){

(bMtrSigOnOrCW=0);
(bMtrDirOrCCW=0);
(bMtrBrkRls=0);

}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
if((~((*(p_bManual)))&Edge0001000000&1?((Edge0001000000=((*(p_bManual)))&1),1):((Edge0001000000=((*(p_bManual)))&1),0))){
(bMtrSigOnOrCW=0);
(bMtrDirOrCCW=0);
(bMtrBrkRls=0);
}

(eStatus=0);
(bNotInterruptible=0);

}break;case 1:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bNotInterruptible=1);


(fbRotCW.bEndSen=((*(p_bCWSen))));
(fbRotCW.bLmtSen=0);

(fbRotCW.bEn=1);;fbConvSenToSenBrkTmLmt(&fbRotCW);

(bMtrSigOnOrCW=fbRotCW.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbRotCW.bMtrDirOrRToL);
(bMtrBrkRls=fbRotCW.bMtrBrk);

if((((unsigned long)fbRotCW.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbRotCW.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10000);
(eStatus=3);
}
}else if((((unsigned long)fbRotCW.udiStatus<(unsigned long)65534))){
(udiStatus=fbRotCW.udiStatus);
(eStatus=3);
}
}

}break;case 2:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bNotInterruptible=1);


(fbRotCCW.bEndSen=((*(p_bCCWSen))));
(fbRotCCW.bLmtSen=0);

(fbRotCCW.bEn=1);;fbConvSenToSenBrkTmLmt(&fbRotCCW);

(bMtrSigOnOrCW=fbRotCCW.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbRotCCW.bMtrDirOrRToL);
(bMtrBrkRls=fbRotCCW.bMtrBrk);

if((((unsigned long)fbRotCCW.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbRotCCW.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10001);
(eStatus=3);
}
}else if((((unsigned long)fbRotCCW.udiStatus<(unsigned long)65534))){
(udiStatus=fbRotCCW.udiStatus);
(eStatus=3);
}
}

}break;case 3:{
(bNotInterruptible=1);
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bNotInterruptible=1);


(fbRotCW.bEndSen=((*(p_bMidSen))));
(fbRotCW.bLmtSen=((*(p_bCWSen))));

(fbRotCW.bEn=1);;fbConvSenToSenBrkTmLmt(&fbRotCW);

(bMtrSigOnOrCW=fbRotCW.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbRotCW.bMtrDirOrRToL);
(bMtrBrkRls=fbRotCW.bMtrBrk);

if((((unsigned long)fbRotCW.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbRotCW.bLmtActivated==(unsigned long)(unsigned char)1))){
(udiStatus=10002);
(eStatus=3);
}else if((((unsigned long)(unsigned char)fbRotCW.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10003);
(eStatus=3);
}
}else if((((unsigned long)fbRotCW.udiStatus<(unsigned long)65534))){
(udiStatus=fbRotCW.udiStatus);
(eStatus=3);
}
}

}break;case 4:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bNotInterruptible=1);


(fbRotCW.bEndSen=((*(p_bCWSen))));
(fbRotCW.bLmtSen=0);

(fbRotCW.bEn=1);;fbConvSenToSenBrkTmLmt(&fbRotCW);

(bMtrSigOnOrCW=fbRotCW.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbRotCW.bMtrDirOrRToL);
(bMtrBrkRls=fbRotCW.bMtrBrk);

if((((unsigned long)fbRotCW.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbRotCW.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10004);
(eStatus=3);
}
}else if((((unsigned long)fbRotCW.udiStatus<(unsigned long)65534))){
(udiStatus=fbRotCW.udiStatus);
(eStatus=3);
}
}

}break;case 5:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bNotInterruptible=1);


(fbRotCCW.bEndSen=((*(p_bMidSen))));
(fbRotCCW.bLmtSen=((*(p_bCCWSen))));

(fbRotCCW.bEn=1);;fbConvSenToSenBrkTmLmt(&fbRotCCW);

(bMtrSigOnOrCW=fbRotCCW.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbRotCCW.bMtrDirOrRToL);
(bMtrBrkRls=fbRotCCW.bMtrBrk);

if((((unsigned long)fbRotCCW.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbRotCCW.bLmtActivated==(unsigned long)(unsigned char)1))){
(udiStatus=10005);
(eStatus=3);
}else if((((unsigned long)(unsigned char)fbRotCCW.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10006);
(eStatus=3);
}
}else if((((unsigned long)fbRotCCW.udiStatus<(unsigned long)65534))){
(udiStatus=fbRotCCW.udiStatus);
(eStatus=3);
}
}

}break;case 6:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bNotInterruptible=1);


(fbRotCCW.bEndSen=((*(p_bCCWSen))));
(fbRotCCW.bLmtSen=0);

(fbRotCCW.bEn=1);;fbConvSenToSenBrkTmLmt(&fbRotCCW);

(bMtrSigOnOrCW=fbRotCCW.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbRotCCW.bMtrDirOrRToL);
(bMtrBrkRls=fbRotCCW.bMtrBrk);

if((((unsigned long)fbRotCCW.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbRotCCW.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10007);
(eStatus=3);
}
}else if((((unsigned long)fbRotCCW.udiStatus<(unsigned long)65534))){
(udiStatus=fbRotCCW.udiStatus);
(eStatus=3);
}
}

}break;case 7:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbMtrBrkRlsOn.bEn=1);;fbConvBrkOn(&fbMtrBrkRlsOn);

(bMtrBrkRls=fbMtrBrkRlsOn.bMtrBrk);

if((((unsigned long)fbMtrBrkRlsOn.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbMtrBrkRlsOn.udiStatus<(unsigned long)65534))){
(udiStatus=fbMtrBrkRlsOn.udiStatus);
(eStatus=3);
}
}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbMtrBrkRlsOff.bEn=1);;fbConvBrkOff(&fbMtrBrkRlsOff);

(bMtrBrkRls=fbMtrBrkRlsOff.bMtrBrk);

if((((unsigned long)fbMtrBrkRlsOff.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbMtrBrkRlsOff.udiStatus<(unsigned long)65534))){
(udiStatus=fbMtrBrkRlsOff.udiStatus);
(eStatus=3);
}
}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbStop.bEn=1);;fbConvMtrOff(&fbStop);
(fbMtrBrkRlsOff.bEn=1);;fbConvBrkOff(&fbMtrBrkRlsOff);

(bMtrSigOnOrCW=fbStop.bMtrSigOnOrLToR);
(bMtrDirOrCCW=fbStop.bMtrDirOrRToL);
(bMtrBrkRls=fbMtrBrkRlsOff.bMtrBrk);

if(((((unsigned long)fbStop.udiStatus==(unsigned long)0))&(((unsigned long)fbMtrBrkRlsOff.udiStatus==(unsigned long)0)))){
(eStatus=1);
}else if(((((unsigned long)fbStop.udiStatus<(unsigned long)65534))&(((unsigned long)fbStop.udiStatus>(unsigned long)0)))){
(udiStatus=fbStop.udiStatus);
(eStatus=3);
}else if(((((unsigned long)fbMtrBrkRlsOff.udiStatus<(unsigned long)65534))&(((unsigned long)fbMtrBrkRlsOff.udiStatus>(unsigned long)0)))){
(udiStatus=fbMtrBrkRlsOff.udiStatus);
(eStatus=3);
}
}

}break;case 10:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bNotInterruptible=1);

(bMtrSigOnOrCW=1);
(eStatus=1);

}

}break;case 11:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bNotInterruptible=1);

(bMtrDirOrCCW=1);
(eStatus=1);

}

}break;case 18:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bNotInterruptible=1);

(bMtrDirOrCCW=1);
(fbMtrSigOnDlyTm.IN=1);;TON(&fbMtrSigOnDlyTm);

if(fbMtrSigOnDlyTm.Q){
(bMtrSigOnOrCW=1);
(fbMtrSigOnDlyTm.IN=0);;TON(&fbMtrSigOnDlyTm);
(eStatus=1);
}



}

}break;case 12:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrBrkRls=1);
(eStatus=1);

}

}break;case 13:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrSigOnOrCW=0);
(eStatus=1);

}

}break;case 14:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrDirOrCCW=0);
(eStatus=1);

}

}break;case 19:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(fbMtrDirOffDlyTm.IN=1);;TON(&fbMtrDirOffDlyTm);
if(fbMtrDirOffDlyTm.Q){
(fbMtrDirOffDlyTm.IN=0);;TON(&fbMtrDirOffDlyTm);
(bMtrDirOrCCW=0);
(eStatus=1);
}
(bMtrSigOnOrCW=0);


}

}break;case 15:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrBrkRls=0);
(eStatus=1);

}

}break;case 16:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bNotInterruptible=1);

(bMtrSigOnOrCW=1);
(bMtrDirOrCCW=1);
(bMtrBrkRls=1);
(eStatus=1);

}

}break;case 17:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrSigOnOrCW=0);
(bMtrDirOrCCW=0);
(bMtrBrkRls=0);
(eStatus=1);

}

}break;}

}imp10_case2_19:imp10_endcase2_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if(bNotInterruptible){
if((((unsigned long)(unsigned char)((*(p_bInterruptSensor)))==(unsigned long)(unsigned char)1))){
(eStatus=3);
(udiStatus=10008);

((*(p_eAct))=0);
(eStat=0);
}
}


}imp3_else1_0:imp3_end1_0:imp3_else0_0:imp3_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sMotorBrkProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData.udiCode>(unsigned long)10099)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((bRstErr&(((unsigned long)tyAlmData.udiCode!=(unsigned long)0)))){

(tyAlmData.udiCode=0);
(tyAlmData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.bAlm=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp2_else0_1:imp2_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

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
__asm__(".ascii \"iecfile \\\"Temp/Includes/AS_TempDecl/Inverter_XClamp_WShutter_/GlobalComponents/MpComponents.var\\\" scope \\\"global\\\"\\n\"");
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
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/MotorBrk/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/MotorBrk/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/MotorBrk/MotorBrk/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/MotorBrk/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
