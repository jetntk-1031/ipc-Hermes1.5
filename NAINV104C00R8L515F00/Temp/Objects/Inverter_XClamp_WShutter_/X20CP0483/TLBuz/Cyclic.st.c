#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/TLBuz/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.st"
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
__AS__Action__Act_Link();
__AS__Action__Act_Main();

switch(((*(p_eTLBuzMode)))){
case 0:{
__AS__Action__Act_Background();
}break;case 3:{
__AS__Action__Act_Background1();
}break;case 1:{
__AS__Action__Act_Background2();
}break;case 2:{
__AS__Action__Act_Background3();
}break;}

}

}imp12_case1_3:imp12_endcase1_0:imp12_end0_0:;}
#line 35 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkAlarmWarning=p_AlarmWarning);
(p_bLinkAlarmInfo=p_AlarmInfo);
(p_bLinkAlarmInfoLF=p_AlarmInfoLF);
(p_bLinkLFBuzMute=p_McParamLFBuzMute);


(p_bManual=p_UIUIMnlMod);
(p_bStartup=p_StartupRun);
(p_bErr=p_AlarmErr);
(p_bSeqStop=p_OpsStatusCycleStop);
(p_bStep=p_OpsStatusStep);
(p_bOps=p_OpsStatusRun);
(p_bStandby=p_OpsStatusStop);
(p_bMuteBuz=p_UIMuteBuz);

(p_tTLChgRcpBlinkTm=p_NtParamTLChgRcpBlinkTm);

(p_tTLErrBlinkTm=p_NtParamTLErrBlinkTm);
(p_tBuzErrOnTm=p_NtParamBuzErrOnTm);
(p_tBuzErrRestTm=p_NtParamBuzErrRestTm);
(p_usiBuzErrOnCntr=p_NtParamBuzErrOnCntr);
(p_bBuzErrStopSeqEn=p_NtParamBuzErrStopSeqEn);
(p_usiBuzErrStopSeqCntr=p_NtParamBuzErrStopSeqCntr);

(p_tTLWarnBlinkTm=p_NtParamTLWarnBlinkTm);
(p_tBuzWarnOnTm=p_NtParamBuzWarnOnTm);
(p_tBuzWarnRestTm=p_NtParamBuzWarnRestTm);
(p_usiBuzWarnOnCntr=p_NtParamBuzWarnOnCntr);
(p_bBuzWarnStopSeqEn=p_NtParamBuzWarnStopSeqEn);
(p_usiBuzWarnStopSeqCntr=p_NtParamBuzWarnStopSeqCntr);

(p_tTLWarn1BlinkTm=p_NtParamTLWarn1BlinkTm);
(p_tBuzWarn1OnTm=p_NtParamBuzWarn1OnTm);
(p_tBuzWarn1RestTm=p_NtParamBuzWarn1RestTm);
(p_usiBuzWarn1OnCntr=p_NtParamBuzWarn1OnCntr);
(p_bBuzWarn1StopSeqEn=p_NtParamBuzWarn1StopSeqEn);
(p_usiBuzWarn1StopSeqCntr=p_NtParamBuzWarn1StopSeqCntr);

(p_tTLWarn2BlinkTm=p_NtParamTLWarn2BlinkTm);
(p_tBuzWarn2OnTm=p_NtParamBuzWarn2OnTm);
(p_tBuzWarn2RestTm=p_NtParamBuzWarn2RestTm);
(p_usiBuzWarn2OnCntr=p_NtParamBuzWarn2OnCntr);
(p_bBuzWarn2StopSeqEn=p_NtParamBuzWarn2StopSeqEn);
(p_usiBuzWarn2StopSeqCntr=p_NtParamBuzWarn2StopSeqCntr);

(p_tTLWarn3BlinkTm=p_NtParamTLWarn3BlinkTm);
(p_tBuzWarn3OnTm=p_NtParamBuzWarn3OnTm);
(p_tBuzWarn3RestTm=p_NtParamBuzWarn3RestTm);
(p_usiBuzWarn3OnCntr=p_NtParamBuzWarn3OnCntr);
(p_bBuzWarn3StopSeqEn=p_NtParamBuzWarn3StopSeqEn);
(p_usiBuzWarn3StopSeqCntr=p_NtParamBuzWarn3StopSeqCntr);

(p_tTLWarn4BlinkTm=p_NtParamTLWarn4BlinkTm);
(p_tBuzWarn4OnTm=p_NtParamBuzWarn4OnTm);
(p_tBuzWarn4RestTm=p_NtParamBuzWarn4RestTm);
(p_usiBuzWarn4OnCntr=p_NtParamBuzWarn4OnCntr);
(p_bBuzWarn4StopSeqEn=p_NtParamBuzWarn4StopSeqEn);
(p_usiBuzWarn4StopSeqCntr=p_NtParamBuzWarn4StopSeqCntr);

(p_tTLWarn5BlinkTm=p_NtParamTLWarn5BlinkTm);
(p_tBuzWarn5OnTm=p_NtParamBuzWarn5OnTm);
(p_tBuzWarn5RestTm=p_NtParamBuzWarn5RestTm);
(p_usiBuzWarn5OnCntr=p_NtParamBuzWarn5OnCntr);
(p_bBuzWarn5StopSeqEn=p_NtParamBuzWarn5StopSeqEn);
(p_usiBuzWarn5StopSeqCntr=p_NtParamBuzWarn5StopSeqCntr);

(p_tBuzAlertOnTm=p_NtParamBuzAlertOnTm);
(p_tBuzAlertRestTm=p_NtParamBuzAlertRestTm);
(p_usiBuzAlertOnCntr=p_NtParamBuzAlertOnCntr);
(p_bBuzAlertStopSeqEn=p_NtParamBuzAlertStopSeqEn);
(p_usiBuzAlertStopSeqCntr=p_NtParamBuzAlertStopSeqCntr);

(p_tTLBlueBlinkTm=p_NtParamTLBlueBlinkTm);
(p_tTLAmberBlinkTm=p_NtParamTLAmberBlinkTm);
(p_tTLWhiteBlinkTm=p_NtParamTLWhiteBlinkTm);
(p_tTLRedBlinkTm=p_NtParamTLRedBlinkTm);
(p_tTLGreenBlinkTm=p_NtParamTLGreenBlinkTm);





















(p_bCoverSwitchSig=p_DICoverSWSig);
(p_eTLBuzMode=p_NtParamTLBuzMode);



}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_UITLBuzAct);
}else{
(p_eAct=((unsigned long)(&eAct)));
}

}imp10_end0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
((*(p_bWarning))=(((*(p_bLinkAlarmWarning)))|(((*(p_bLinkAlarmInfo)))&((((*(p_bLinkAlarmInfoLF)))&((*(p_bLinkLFBuzMute))))^1))));

((*(p_bWarningNoBuz))=(((*(p_bLinkAlarmInfoLF)))&((*(p_bLinkLFBuzMute)))));

}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_bManual=((unsigned long)(&bManual)));
(p_bStartup=((unsigned long)(&bStartup)));
(p_bErr=((unsigned long)(&bErr)));
(p_bErrNoBuz=((unsigned long)(&bErrNoBuz)));
(p_bWarning=((unsigned long)(&bWarning)));
(p_bWarningNoBuz=((unsigned long)(&bWarningNoBuz)));
(p_bWarning1=((unsigned long)(&bWarning1)));
(p_bWarning1NoBuz=((unsigned long)(&bWarning1NoBuz)));
(p_bWarning2=((unsigned long)(&bWarning2)));
(p_bWarning2NoBuz=((unsigned long)(&bWarning2NoBuz)));
(p_bWarning3=((unsigned long)(&bWarning3)));
(p_bWarning3NoBuz=((unsigned long)(&bWarning3NoBuz)));
(p_bWarning4=((unsigned long)(&bWarning4)));
(p_bWarning4NoBuz=((unsigned long)(&bWarning4NoBuz)));
(p_bWarning5=((unsigned long)(&bWarning5)));
(p_bWarning5NoBuz=((unsigned long)(&bWarning5NoBuz)));
(p_bChgRcp=((unsigned long)(&bChgRcp)));
(p_bSeqStop=((unsigned long)(&bSeqStop)));
(p_bStep=((unsigned long)(&bStep)));
(p_bOps=((unsigned long)(&bOps)));
(p_bStandby=((unsigned long)(&bStandby)));
(p_bSimulation=((unsigned long)(&bSimulation)));
(p_bMuteBuz=((unsigned long)(&bMuteBuz)));


(p_tTLChgRcpBlinkTm=((unsigned long)(&tTLChgRcpBlinkTm)));

(p_tTLErrBlinkTm=((unsigned long)(&tTLErrBlinkTm)));
(p_tBuzErrOnTm=((unsigned long)(&tBuzErrOnTm)));
(p_tBuzErrRestTm=((unsigned long)(&tBuzErrRestTm)));
(p_usiBuzErrOnCntr=((unsigned long)(&usiBuzErrOnCntr)));
(p_bBuzErrStopSeqEn=((unsigned long)(&bBuzErrStopSeqEn)));
(p_usiBuzErrStopSeqCntr=((unsigned long)(&usiBuzErrStopSeqCntr)));

(p_tTLWarnBlinkTm=((unsigned long)(&tTLWarnBlinkTm)));
(p_tBuzWarnOnTm=((unsigned long)(&tBuzWarnOnTm)));
(p_tBuzWarnRestTm=((unsigned long)(&tBuzWarnRestTm)));
(p_usiBuzWarnOnCntr=((unsigned long)(&usiBuzWarnOnCntr)));
(p_bBuzWarnStopSeqEn=((unsigned long)(&bBuzWarnStopSeqEn)));
(p_usiBuzWarnStopSeqCntr=((unsigned long)(&usiBuzWarnStopSeqCntr)));

(p_tTLWarn1BlinkTm=((unsigned long)(&tTLWarn1BlinkTm)));
(p_tBuzWarn1OnTm=((unsigned long)(&tBuzWarn1OnTm)));
(p_tBuzWarn1RestTm=((unsigned long)(&tBuzWarn1RestTm)));
(p_usiBuzWarn1OnCntr=((unsigned long)(&usiBuzWarn1OnCntr)));
(p_bBuzWarn1StopSeqEn=((unsigned long)(&bBuzWarn1StopSeqEn)));
(p_usiBuzWarn1StopSeqCntr=((unsigned long)(&usiBuzWarn1StopSeqCntr)));

(p_tTLWarn2BlinkTm=((unsigned long)(&tTLWarn2BlinkTm)));
(p_tBuzWarn2OnTm=((unsigned long)(&tBuzWarn2OnTm)));
(p_tBuzWarn2RestTm=((unsigned long)(&tBuzWarn2RestTm)));
(p_usiBuzWarn2OnCntr=((unsigned long)(&usiBuzWarn2OnCntr)));
(p_bBuzWarn2StopSeqEn=((unsigned long)(&bBuzWarn2StopSeqEn)));
(p_usiBuzWarn2StopSeqCntr=((unsigned long)(&usiBuzWarn2StopSeqCntr)));

(p_tTLWarn3BlinkTm=((unsigned long)(&tTLWarn3BlinkTm)));
(p_tBuzWarn3OnTm=((unsigned long)(&tBuzWarn3OnTm)));
(p_tBuzWarn3RestTm=((unsigned long)(&tBuzWarn3RestTm)));
(p_usiBuzWarn3OnCntr=((unsigned long)(&usiBuzWarn3OnCntr)));
(p_bBuzWarn3StopSeqEn=((unsigned long)(&bBuzWarn3StopSeqEn)));
(p_usiBuzWarn3StopSeqCntr=((unsigned long)(&usiBuzWarn3StopSeqCntr)));

(p_tTLWarn4BlinkTm=((unsigned long)(&tTLWarn4BlinkTm)));
(p_tBuzWarn4OnTm=((unsigned long)(&tBuzWarn4OnTm)));
(p_tBuzWarn4RestTm=((unsigned long)(&tBuzWarn4RestTm)));
(p_usiBuzWarnOnCntr=((unsigned long)(&usiBuzWarn4OnCntr)));
(p_bBuzWarn4StopSeqEn=((unsigned long)(&bBuzWarn4StopSeqEn)));
(p_usiBuzWarn4StopSeqCntr=((unsigned long)(&usiBuzWarn4StopSeqCntr)));

(p_tTLWarn5BlinkTm=((unsigned long)(&tTLWarn5BlinkTm)));
(p_tBuzWarn5OnTm=((unsigned long)(&tBuzWarn5OnTm)));
(p_tBuzWarn5RestTm=((unsigned long)(&tBuzWarn5RestTm)));
(p_usiBuzWarn5OnCntr=((unsigned long)(&usiBuzWarn5OnCntr)));
(p_bBuzWarn5StopSeqEn=((unsigned long)(&bBuzWarn5StopSeqEn)));
(p_usiBuzWarn5StopSeqCntr=((unsigned long)(&usiBuzWarn5StopSeqCntr)));

(p_tBuzAlertOnTm=((unsigned long)(&tBuzAlertOnTm)));
(p_tBuzAlertRestTm=((unsigned long)(&tBuzAlertRestTm)));
(p_usiBuzAlertOnCntr=((unsigned long)(&usiBuzAlertOnCntr)));
(p_bBuzAlertStopSeqEn=((unsigned long)(&bBuzAlertStopSeqEn)));
(p_usiBuzAlertStopSeqCntr=((unsigned long)(&usiBuzAlertStopSeqCntr)));

(p_tTLBlueBlinkTm=((unsigned long)(&tTLBlueBlinkTm)));
(p_tTLAmberBlinkTm=((unsigned long)(&tTLAmberBlinkTm)));
(p_tTLWhiteBlinkTm=((unsigned long)(&tTLWhiteBlinkTm)));
(p_tTLRedBlinkTm=((unsigned long)(&tTLRedBlinkTm)));
(p_tTLGreenBlinkTm=((unsigned long)(&tTLGreenBlinkTm)));


(p_tErrBlinkTm=((unsigned long)(&tErrBlinkTm)));
(p_tChgRcpBlinkTm=((unsigned long)(&tChgRcpBlinkTm)));
(p_tWarnBlinkTm=((unsigned long)(&tWarnBlinkTm)));
(p_tWarnRestTm=((unsigned long)(&tWarnRestTm)));
(p_usiWarnOnTm=((unsigned long)(&usiWarnOnTm)));
(p_tWarn1BlinkTm=((unsigned long)(&tWarn1BlinkTm)));
(p_tWarn1RestTm=((unsigned long)(&tWarn1RestTm)));
(p_usiWarn1OnTm=((unsigned long)(&usiWarn1OnTm)));
(p_tWarn2BlinkTm=((unsigned long)(&tWarn2BlinkTm)));
(p_tWarn2RestTm=((unsigned long)(&tWarn2RestTm)));
(p_usiWarn2OnTm=((unsigned long)(&usiWarn2OnTm)));
(p_tWarn3BlinkTm=((unsigned long)(&tWarn3BlinkTm)));
(p_tWarn3RestTm=((unsigned long)(&tWarn3RestTm)));
(p_usiWarn3OnTm=((unsigned long)(&usiWarn3OnTm)));
(p_tWarn4BlinkTm=((unsigned long)(&tWarn4BlinkTm)));
(p_tWarn4RestTm=((unsigned long)(&tWarn4RestTm)));
(p_usiWarn4OnTm=((unsigned long)(&usiWarn4OnTm)));
(p_tWarn5BlinkTm=((unsigned long)(&tWarn5BlinkTm)));
(p_tWarn5RestTm=((unsigned long)(&tWarn5RestTm)));
(p_usiWarn5OnTm=((unsigned long)(&usiWarn5OnTm)));

(p_bCoverSwitchSig=((unsigned long)(&bCoveSwitchSig)));
(p_eTLBuzMode=((unsigned long)(&eTLBuzMode)));

(p_bAOIErrSig=((unsigned long)(&bAOIErrSig)));
(p_bAOIOriginSig=((unsigned long)(&bAOIOriginSig)));

(p_bBuzAlertEn=((unsigned long)(&bBuzAlertEn)));
(p_bTLBlueFlashEn=((unsigned long)(&bTLBlueFlashEn)));
(p_bTLAmberFlashEn=((unsigned long)(&bTLAmberFlashEn)));
(p_bTLWhiteFlashEn=((unsigned long)(&bTLWhiteFlashEn)));
(p_bTLRedFlashEn=((unsigned long)(&bTLRedFlashEn)));
(p_bTLGreenFlashEn=((unsigned long)(&bTLGreenFlashEn)));


}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2))|(((signed long)eStatus==(signed long)1)))){
(eStat=((*(p_eAct))));
}

}imp1_else0_0:imp1_end0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){














if(((((signed long)eStatOld!=(signed long)0))&(((signed long)eStatOld!=(signed long)1))&(((signed long)eStatOld!=(signed long)2))&(((signed long)eStatOld!=(signed long)3))&(((signed long)eStatOld!=(signed long)5))&(((signed long)eStatOld!=(signed long)4))&(((signed long)eStatOld!=(signed long)6))&(((signed long)eStatOld!=(signed long)7))&(((signed long)eStatOld!=(signed long)8))&(((signed long)eStatOld!=(signed long)9))&(((signed long)eStatOld!=(signed long)11))&(((signed long)eStatOld!=(signed long)10))&(((signed long)eStatOld!=(signed long)12))&(((signed long)eStatOld!=(signed long)13))&(((signed long)eStatOld!=(signed long)14)))){

(bTLGreen=0);
(bTLAmber=0);
(bTLWhite=0);
(bTLBlue=0);
(bTLRed=0);
(bBuzBeep=0);

}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
if((((signed long)eStatus!=(signed long)0))){


{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLGreen=1);
(eStatus=1);

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLAmber=1);
(eStatus=1);

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLRed=1);
(eStatus=1);

}

}break;case 5:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLBlue=1);
(eStatus=1);

}

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLWhite=1);
(eStatus=1);

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bBuzBeep=1);
(eStatus=1);

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLGreen=0);
(eStatus=1);

}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLAmber=0);
(eStatus=1);

}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLRed=0);
(eStatus=1);

}

}break;case 11:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLBlue=0);
(eStatus=1);

}

}break;case 10:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLWhite=0);
(eStatus=1);

}

}break;case 12:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bBuzBeep=0);
(eStatus=1);

}

}break;case 13:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLGreen=1);
(bTLRed=1);
(bTLAmber=1);
(bTLWhite=1);
(bTLBlue=1);
(bBuzBeep=1);
(eStatus=1);

}

}break;case 14:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bTLGreen=0);
(bTLAmber=0);
(bTLRed=0);
(bTLWhite=0);
(bTLBlue=0);
(bBuzBeep=0);
(eStatus=1);

}

}break;}

}imp11_case2_14:imp11_endcase2_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if((((*(p_bManual)))&~Edge0000200000&1?((Edge0000200000=((*(p_bManual)))&1),1):((Edge0000200000=((*(p_bManual)))&1),0))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
(bBuzBeep=0);

}else if(((*(p_bManual)))){

if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

(bManualErrOn=1);

}else if(bManualErrOn){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bBuzBeep=0);

(bManualErrOn=0);

}

}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))){

(bManualErrOn=0);

if((((unsigned long)(unsigned char)((*(p_bStartup)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bTLAmber=1);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bErrNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarnRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarnOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarnStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarnStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarningNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning1)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn1RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn1OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn1StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn1StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning1NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning2)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn2RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn2OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn2StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn2StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning2NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning3)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn3RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn3OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn3StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn3StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning3NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning4)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn4RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn4OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn4StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn4StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning4NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning5)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn5RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn5OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn5StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn5StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning5NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSeqStop)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bChgRcp)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

if((fbBlink.bOut^Edge0000200001&1?((Edge0000200001=fbBlink.bOut&1),1):((Edge0000200001=fbBlink.bOut&1),0))){
if((((unsigned long)(unsigned char)bTLRed==(unsigned long)(unsigned char)1))){
(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
}else if((((unsigned long)(unsigned char)bTLAmber==(unsigned long)(unsigned char)1))){
(bTLRed=1);
(bTLAmber=0);
(bTLGreen=0);
}else{
(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
}
}

(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bStep)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=fbBlink.bOut);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSimulation)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=fbBlink.bOut);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bStandby)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}else{

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}

}

if(((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)0)))){
if(((*(p_bTLAmberFlashEn)))){

(fbBlink1.tOnTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.tOffTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.bEn=1);;fbTLBuzBlink(&fbBlink1);

(bTLAmber=fbBlink1.bOut);

}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
}

if(((*(p_bTLRedFlashEn)))){

(fbBlink2.tOnTm=((*(p_tTLRedBlinkTm))));
(fbBlink2.tOffTm=((*(p_tTLRedBlinkTm))));
(fbBlink2.bEn=1);;fbTLBuzBlink(&fbBlink2);

(bTLRed=fbBlink2.bOut);
}else{
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
}

if(((*(p_bTLGreenFlashEn)))){

(fbBlink3.tOnTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.tOffTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.bEn=1);;fbTLBuzBlink(&fbBlink3);

(bTLGreen=fbBlink3.bOut);
}else{
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
}

if(((((unsigned long)(unsigned char)((*(p_bBuzAlertEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){

(fbWarning1.tOnTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tOffTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tRstTm=((*(p_tBuzAlertRestTm))));
(fbWarning1.usiOnCnt=((*(p_usiBuzAlertOnCntr))));
(fbWarning1.bStopAftRptSeqEn=((*(p_bBuzAlertStopSeqEn))));
(fbWarning1.usiStopAftRptSeqCntr=((*(p_usiBuzAlertStopSeqCntr))));

(fbWarning1.bEn=1);;fbTLBuzWarn(&fbWarning1);

(bBuzBeep=(fbWarning1.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else{
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}
}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}


if(((*(p_bErr)))){
(usiWarnInfoStateNew=1);
}else if(((*(p_bWarning)))){
(usiWarnInfoStateNew=2);
}else if(((*(p_bWarning1)))){
(usiWarnInfoStateNew=3);
}else if(((*(p_bWarning2)))){
(usiWarnInfoStateNew=4);
}else if(((*(p_bWarning3)))){
(usiWarnInfoStateNew=5);
}else if(((*(p_bWarning4)))){
(usiWarnInfoStateNew=6);
}else if(((*(p_bWarning5)))){
(usiWarnInfoStateNew=7);
}else if((((*(p_bBuzAlertEn)))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){
(usiWarnInfoStateNew=8);
}else{
(usiWarnInfoStateNew=0);
}

if((((unsigned long)(unsigned char)usiWarnInfoStateOld!=(unsigned long)(unsigned char)usiWarnInfoStateNew))){
(usiWarnInfoStateOld=usiWarnInfoStateNew);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}

}imp2_else11_0:imp2_end11_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Background1.st"
static void __AS__Action__Act_Background1(void){
{
if((((*(p_bManual)))&~Edge0000300000&1?((Edge0000300000=((*(p_bManual)))&1),1):((Edge0000300000=((*(p_bManual)))&1),0))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
(bBuzBeep=0);

}else if(((*(p_bManual)))){

if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

(bManualErrOn=1);

}else if(bManualErrOn){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bBuzBeep=0);

(bManualErrOn=0);

}

}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))){

(bManualErrOn=0);

if((((unsigned long)(unsigned char)((*(p_bStartup)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bTLAmber=1);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bCoverSwitchSig)))==(unsigned long)(unsigned char)0))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bErrNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarnRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarnOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarnStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarnStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=fbBlink.bOut);
(bTLGreen=0);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarningNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=fbBlink.bOut);
(bTLGreen=0);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning1)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn1RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn1OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn1StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn1StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning1NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning2)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn2RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn2OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn2StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn2StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning2NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning3)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn3RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn3OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn3StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn3StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning3NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning4)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn4RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn4OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn4StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn4StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning4NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning5)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn5RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn5OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn5StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn5StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning5NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSeqStop)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=fbBlink.bOut);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bChgRcp)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

if((fbBlink.bOut^Edge0000300001&1?((Edge0000300001=fbBlink.bOut&1),1):((Edge0000300001=fbBlink.bOut&1),0))){
if((((unsigned long)(unsigned char)bTLRed==(unsigned long)(unsigned char)1))){
(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
}else if((((unsigned long)(unsigned char)bTLAmber==(unsigned long)(unsigned char)1))){
(bTLRed=1);
(bTLAmber=0);
(bTLGreen=0);
}else{
(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
}
}

(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bStep)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=fbBlink.bOut);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSimulation)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=fbBlink.bOut);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bStandby)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
(bBuzBeep=0);

}else{

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}

}

if(((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)0)))){
if(((*(p_bTLAmberFlashEn)))){

(fbBlink1.tOnTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.tOffTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.bEn=1);;fbTLBuzBlink(&fbBlink1);

(bTLAmber=fbBlink1.bOut);

}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
}

if(((*(p_bTLRedFlashEn)))){

(fbBlink2.tOnTm=((*(p_tTLRedBlinkTm))));
(fbBlink2.tOffTm=((*(p_tTLRedBlinkTm))));
(fbBlink2.bEn=1);;fbTLBuzBlink(&fbBlink2);

(bTLRed=fbBlink2.bOut);
}else{
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
}

if(((*(p_bTLGreenFlashEn)))){

(fbBlink3.tOnTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.tOffTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.bEn=1);;fbTLBuzBlink(&fbBlink3);

(bTLGreen=fbBlink3.bOut);
}else{
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
}

if(((((unsigned long)(unsigned char)((*(p_bBuzAlertEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){

(fbWarning1.tOnTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tOffTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tRstTm=((*(p_tBuzAlertRestTm))));
(fbWarning1.usiOnCnt=((*(p_usiBuzAlertOnCntr))));
(fbWarning1.bStopAftRptSeqEn=((*(p_bBuzAlertStopSeqEn))));
(fbWarning1.usiStopAftRptSeqCntr=((*(p_usiBuzAlertStopSeqCntr))));

(fbWarning1.bEn=1);;fbTLBuzWarn(&fbWarning1);

(bBuzBeep=(fbWarning1.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else{
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}
}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}


if(((*(p_bErr)))){
(usiWarnInfoStateNew=1);
}else if(((*(p_bWarning)))){
(usiWarnInfoStateNew=2);
}else if(((*(p_bWarning1)))){
(usiWarnInfoStateNew=3);
}else if(((*(p_bWarning2)))){
(usiWarnInfoStateNew=4);
}else if(((*(p_bWarning3)))){
(usiWarnInfoStateNew=5);
}else if(((*(p_bWarning4)))){
(usiWarnInfoStateNew=6);
}else if(((*(p_bWarning5)))){
(usiWarnInfoStateNew=7);
}else if((((*(p_bBuzAlertEn)))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){
(usiWarnInfoStateNew=8);
}else{
(usiWarnInfoStateNew=0);
}

if((((unsigned long)(unsigned char)usiWarnInfoStateOld!=(unsigned long)(unsigned char)usiWarnInfoStateNew))){
(usiWarnInfoStateOld=usiWarnInfoStateNew);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}

}imp3_else11_0:imp3_end11_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Background2.st"
static void __AS__Action__Act_Background2(void){
{
if((((*(p_bManual)))&~Edge0000400000&1?((Edge0000400000=((*(p_bManual)))&1),1):((Edge0000400000=((*(p_bManual)))&1),0))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
(bBuzBeep=0);

}else if(((*(p_bManual)))){

if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

(bManualErrOn=1);

}else if(bManualErrOn){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bBuzBeep=0);

(bManualErrOn=0);

}

}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))){

(bManualErrOn=0);

if((((unsigned long)(unsigned char)((*(p_bStartup)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bTLAmber=1);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bErrNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}else if(((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAOIErrSig)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAOIOriginSig)))==(unsigned long)(unsigned char)0)))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if(((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAOIErrSig)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAOIOriginSig)))==(unsigned long)(unsigned char)1)))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarnRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarnOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarnStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarnStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarningNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning1)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn1RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn1OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn1StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn1StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning1NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning2)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn2RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn2OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn2StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn2StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning2NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning3)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn3RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn3OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn3StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn3StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning3NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning4)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn4RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn4OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn4StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn4StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning4NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning5)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn5RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn5OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn5StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn5StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning5NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=((*(p_bStandby))));
(bTLAmber=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSeqStop)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bChgRcp)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

if((fbBlink.bOut^Edge0000400001&1?((Edge0000400001=fbBlink.bOut&1),1):((Edge0000400001=fbBlink.bOut&1),0))){
if((((unsigned long)(unsigned char)bTLRed==(unsigned long)(unsigned char)1))){
(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
}else if((((unsigned long)(unsigned char)bTLAmber==(unsigned long)(unsigned char)1))){
(bTLRed=1);
(bTLAmber=0);
(bTLGreen=0);
}else{
(bTLRed=0);
(bTLAmber=1);
(bTLGreen=0);
}
}

(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bStep)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=fbBlink.bOut);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSimulation)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=fbBlink.bOut);
(bTLAmber=fbBlink.bOut);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bStandby)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=1);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}else{

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=0);
(bBuzBeep=0);

}

}

if(((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)0)))){
if(((*(p_bTLAmberFlashEn)))){

(fbBlink1.tOnTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.tOffTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.bEn=1);;fbTLBuzBlink(&fbBlink1);

(bTLAmber=fbBlink1.bOut);

}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
}

if(((*(p_bTLRedFlashEn)))){

(fbBlink2.tOnTm=((*(p_tTLRedBlinkTm))));
(fbBlink2.tOffTm=((*(p_tTLRedBlinkTm))));
(fbBlink2.bEn=1);;fbTLBuzBlink(&fbBlink2);

(bTLRed=fbBlink2.bOut);
}else{
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
}

if(((*(p_bTLGreenFlashEn)))){

(fbBlink3.tOnTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.tOffTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.bEn=1);;fbTLBuzBlink(&fbBlink3);

(bTLGreen=fbBlink3.bOut);
}else{
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
}

if(((((unsigned long)(unsigned char)((*(p_bBuzAlertEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){

(fbWarning1.tOnTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tOffTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tRstTm=((*(p_tBuzAlertRestTm))));
(fbWarning1.usiOnCnt=((*(p_usiBuzAlertOnCntr))));
(fbWarning1.bStopAftRptSeqEn=((*(p_bBuzAlertStopSeqEn))));
(fbWarning1.usiStopAftRptSeqCntr=((*(p_usiBuzAlertStopSeqCntr))));

(fbWarning1.bEn=1);;fbTLBuzWarn(&fbWarning1);

(bBuzBeep=(fbWarning1.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else{
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}
}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}


if(((*(p_bErr)))){
(usiWarnInfoStateNew=1);
}else if(((*(p_bWarning)))){
(usiWarnInfoStateNew=2);
}else if(((*(p_bWarning1)))){
(usiWarnInfoStateNew=3);
}else if(((*(p_bWarning2)))){
(usiWarnInfoStateNew=4);
}else if(((*(p_bWarning3)))){
(usiWarnInfoStateNew=5);
}else if(((*(p_bWarning4)))){
(usiWarnInfoStateNew=6);
}else if(((*(p_bWarning5)))){
(usiWarnInfoStateNew=7);
}else if((((*(p_bBuzAlertEn)))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){
(usiWarnInfoStateNew=8);
}else{
(usiWarnInfoStateNew=0);
}

if((((unsigned long)(unsigned char)usiWarnInfoStateOld!=(unsigned long)(unsigned char)usiWarnInfoStateNew))){
(usiWarnInfoStateOld=usiWarnInfoStateNew);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}

}imp4_else11_0:imp4_end11_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Act_Background3.st"
static void __AS__Action__Act_Background3(void){
{
if((((*(p_bManual)))&~Edge0000500000&1?((Edge0000500000=((*(p_bManual)))&1),1):((Edge0000500000=((*(p_bManual)))&1),0))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLWhite=1);
(bTLGreen=0);
(bBuzBeep=0);

}else if(((*(p_bManual)))){

if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLAmber=fbBlink.bOut);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

(bManualErrOn=1);

}else if(bManualErrOn){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLAmber=0);
(bBuzBeep=0);

(bManualErrOn=0);

}

}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))){

(bManualErrOn=0);

if((((unsigned long)(unsigned char)((*(p_bStartup)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=1);
(bTLAmber=1);
(bTLWhite=1);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzErrOnTm))));
(fbWarning.tOffTm=((*(p_tBuzErrOnTm))));
(fbWarning.tRstTm=((*(p_tBuzErrRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzErrOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzErrStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzErrStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=fbBlink.bOut);
(bTLWhite=0);
(bTLGreen=0);
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bErrNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLErrBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLErrBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=fbBlink.bOut);
(bTLWhite=0);
(bTLGreen=0);
(bBuzBeep=0);


}else if((((unsigned long)(unsigned char)((*(p_bWarning)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarnOnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarnRestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarnOnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarnStopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarnStopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarningNoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarnBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning1)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn1OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn1RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn1OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn1StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn1StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning1NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn1BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning2)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn2OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn2RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn2OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn2StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn2StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning2NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn2BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning3)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn3OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn3RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn3OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn3StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn3StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning3NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn3BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning4)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn4OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn4RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn4OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn4StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn4StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning4NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn4BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bWarning5)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));

(fbWarning.tOnTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tOffTm=((*(p_tBuzWarn5OnTm))));
(fbWarning.tRstTm=((*(p_tBuzWarn5RestTm))));
(fbWarning.usiOnCnt=((*(p_usiBuzWarn5OnCntr))));
(fbWarning.bStopAftRptSeqEn=((*(p_bBuzWarn5StopSeqEn))));
(fbWarning.usiStopAftRptSeqCntr=((*(p_usiBuzWarn5StopSeqCntr))));

(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=1);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=(fbWarning.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bWarning5NoBuz)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.tOffTm=((*(p_tTLWarn5BlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=((*(p_bStandby))));
(bTLWhite=fbBlink.bOut);
(bTLGreen=((*(p_bOps))));
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSeqStop)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=fbBlink.bOut);
(bTLWhite=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bChgRcp)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.tOffTm=((*(p_tTLChgRcpBlinkTm))));
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

if((fbBlink.bOut^Edge0000500001&1?((Edge0000500001=fbBlink.bOut&1),1):((Edge0000500001=fbBlink.bOut&1),0))){
if((((unsigned long)(unsigned char)bTLAmber==(unsigned long)(unsigned char)1))){
(bTLAmber=0);
(bTLWhite=0);
(bTLGreen=1);
}else if((((unsigned long)(unsigned char)bTLWhite==(unsigned long)(unsigned char)1))){
(bTLAmber=1);
(bTLWhite=0);
(bTLGreen=0);
}else{
(bTLAmber=0);
(bTLWhite=1);
(bTLGreen=0);
}
}

(bBuzBeep=(fbBlink.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else if((((unsigned long)(unsigned char)((*(p_bStep)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=0);
(bTLWhite=0);
(bTLGreen=fbBlink.bOut);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLRed=0);
(bTLAmber=0);
(bTLGreen=1);
(bBuzBeep=0);

}else if((((unsigned long)(unsigned char)((*(p_bSimulation)))==(unsigned long)(unsigned char)1))){

(fbBlink.tOnTm=tBlinkTm);
(fbBlink.tOffTm=tBlinkTm);
(fbBlink.bEn=1);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=fbBlink.bOut);
(bTLAmber=fbBlink.bOut);
(bTLWhite=fbBlink.bOut);
(bTLGreen=1);
(bBuzBeep=0);


}else if((((unsigned long)(unsigned char)((*(p_bStandby)))==(unsigned long)(unsigned char)1))){

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=1);
(bTLWhite=0);
(bTLGreen=0);
(bBuzBeep=0);


}else{

(fbBlink.bEn=0);;fbTLBuzBlink(&fbBlink);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);

(bTLBlue=0);
(bTLAmber=0);
(bTLWhite=0);
(bTLGreen=0);
(bBuzBeep=0);


}

}

if(((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bErr)))==(unsigned long)(unsigned char)0)))){
if(((*(p_bTLAmberFlashEn)))){

(fbBlink1.tOnTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.tOffTm=((*(p_tTLAmberBlinkTm))));
(fbBlink1.bEn=1);;fbTLBuzBlink(&fbBlink1);

(bTLAmber=fbBlink1.bOut);

}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
}

if(((*(p_bTLWhiteFlashEn)))){

(fbBlink2.tOnTm=((*(p_tTLWhiteBlinkTm))));
(fbBlink2.tOffTm=((*(p_tTLWhiteBlinkTm))));
(fbBlink2.bEn=1);;fbTLBuzBlink(&fbBlink2);

(bTLWhite=fbBlink2.bOut);
}else{
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
}

if(((*(p_bTLGreenFlashEn)))){

(fbBlink3.tOnTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.tOffTm=((*(p_tTLGreenBlinkTm))));
(fbBlink3.bEn=1);;fbTLBuzBlink(&fbBlink3);

(bTLGreen=fbBlink3.bOut);
}else{
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
}

if(((*(p_bTLBlueFlashEn)))){

(fbBlink4.tOnTm=((*(p_tTLBlueBlinkTm))));
(fbBlink4.tOffTm=((*(p_tTLBlueBlinkTm))));
(fbBlink4.bEn=1);;fbTLBuzBlink(&fbBlink4);

(bTLGreen=fbBlink4.bOut);
}else{
(fbBlink4.bEn=0);;fbTLBuzBlink(&fbBlink4);
}

if(((((unsigned long)(unsigned char)((*(p_bBuzAlertEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){

(fbWarning1.tOnTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tOffTm=((*(p_tBuzAlertOnTm))));
(fbWarning1.tRstTm=((*(p_tBuzAlertRestTm))));
(fbWarning1.usiOnCnt=((*(p_usiBuzAlertOnCntr))));
(fbWarning1.bStopAftRptSeqEn=((*(p_bBuzAlertStopSeqEn))));
(fbWarning1.usiStopAftRptSeqCntr=((*(p_usiBuzAlertStopSeqCntr))));

(fbWarning1.bEn=1);;fbTLBuzWarn(&fbWarning1);

(bBuzBeep=(fbWarning1.bOut&(((unsigned long)(unsigned char)((*(p_bMuteBuz)))==(unsigned long)(unsigned char)0))));

}else{
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}
}else{
(fbBlink1.bEn=0);;fbTLBuzBlink(&fbBlink1);
(fbBlink2.bEn=0);;fbTLBuzBlink(&fbBlink2);
(fbBlink3.bEn=0);;fbTLBuzBlink(&fbBlink3);
(fbBlink4.bEn=0);;fbTLBuzBlink(&fbBlink4);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}


if(((*(p_bErr)))){
(usiWarnInfoStateNew=1);
}else if(((*(p_bWarning)))){
(usiWarnInfoStateNew=2);
}else if(((*(p_bWarning1)))){
(usiWarnInfoStateNew=3);
}else if(((*(p_bWarning2)))){
(usiWarnInfoStateNew=4);
}else if(((*(p_bWarning3)))){
(usiWarnInfoStateNew=5);
}else if(((*(p_bWarning4)))){
(usiWarnInfoStateNew=6);
}else if(((*(p_bWarning5)))){
(usiWarnInfoStateNew=7);
}else if((((*(p_bBuzAlertEn)))&(((unsigned long)(unsigned char)fbWarning.bEn==(unsigned long)(unsigned char)0)))){
(usiWarnInfoStateNew=8);
}else{
(usiWarnInfoStateNew=0);
}

if((((unsigned long)(unsigned char)usiWarnInfoStateOld!=(unsigned long)(unsigned char)usiWarnInfoStateNew))){
(usiWarnInfoStateOld=usiWarnInfoStateNew);
(fbWarning.bEn=0);;fbTLBuzWarn(&fbWarning);
(fbWarning1.bEn=0);;fbTLBuzWarn(&fbWarning1);
}

}imp5_else12_0:imp5_end12_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/TLBuz/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/TLBuz/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/TLBuz/TLBuz/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/TLBuz/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
