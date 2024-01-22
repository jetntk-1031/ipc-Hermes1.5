#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DInput/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((((unsigned long)(unsigned char)bInitDone==(unsigned long)(unsigned char)0))){
(bInitDone=1);

__AS__Action__Act_InitLocal();
__AS__Action__Act_InitGlobal();

}else if((((unsigned long)(unsigned char)bInitialDone==(unsigned long)(unsigned char)0))){
(bInitialDone=1);

__AS__Action__Act_Initial();

}else{
if((((*(p_bHermesCmdInitialCompl)))&~Edge0000900000&1?((Edge0000900000=((*(p_bHermesCmdInitialCompl)))&1),1):((Edge0000900000=((*(p_bHermesCmdInitialCompl)))&1),0))){
__AS__Action__Act_InitialCompl();
}
__AS__Action__Act_RstErr();
__AS__Action__Act_Background();
__AS__Action__Act_Alarm1();
__AS__Action__Act_Alarm2();

}

}imp9_end0_0:;}
#line 26 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{





(p_udiRstErr=p_RstErrReset);

(p_tyDISettings=p_NtParamDISettings);

(p_diConvLftSenOnTm=p_McParamConvLftSenOnTm);
(p_diConvLftSenOffTm=p_McParamConvLftSenOffTm);
(p_diConvRgtSenOnTm=p_McParamConvRgtSenOnTm);
(p_diConvRgtSenOffTm=p_McParamConvRgtSenOffTm);
(p_bRstErrSafetyRlyRst=p_RstErrSafetyRlyRst);
(p_sProgNm=p_NtParamDInputProgNm);


(p_bLinkStartupRun=p_StartupRun);
(p_bHermesCmdInitialCompl=p_HermesCmdInitialCompl);




}}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp8_end0_0:;}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_udiMax=((unsigned long)(&c_udiDInputMax)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_tyDISettings=((unsigned long)(&tyDISettings)));
(p_sProgNm=((unsigned long)(&sProgNm)));

(p_diConvLftSenOnTm=((unsigned long)(&diConvLftSenOnTm)));
(p_diConvLftSenOffTm=((unsigned long)(&diConvLftSenOffTm)));
(p_diConvRgtSenOnTm=((unsigned long)(&diConvRgtSenOnTm)));
(p_diConvRgtSenOffTm=((unsigned long)(&diConvRgtSenOffTm)));

(p_bHermesUSCmdFeaturePause=((unsigned long)(&bHermesDummyMem)));
(p_bHermesDSCmdFeaturePause=((unsigned long)(&bHermesDummyMem)));
}}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{


}}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_InitialCompl.st"
static void __AS__Action__Act_InitialCompl(void){
{


(p_bHermesUSCmdFeaturePause=p_HermesUSCmdFeaturePause);


(p_tyHermesUSCmdPause=p_HermesUSCmdPause);


(p_bHermesDSCmdFeaturePause=p_HermesDSCmdFeaturePause);


(p_tyHermesDSCmdPause=p_HermesDSCmdPause);


}}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_Background.st"
static void __AS__Action__Act_Background(void){
{

if(((((signed long)((*(p_tyDISettings)).diSafetyRlySig)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diSafetyRlySig)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bSafetyRlySig=a_bPhysicalDI[((*(p_tyDISettings)).diSafetyRlySig)-1]);
}else{
(tyDInput.bSafetyRlySig=1);
}

if(((((signed long)((*(p_tyDISettings)).diEStopSig)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diEStopSig)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bEStopSig=a_bPhysicalDI[((*(p_tyDISettings)).diEStopSig)-1]);
}else{
(tyDInput.bEStopSig=1);
}

if(((((signed long)((*(p_tyDISettings)).diCoverSWSig)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diCoverSWSig)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bCoverSWSig=a_bPhysicalDI[((*(p_tyDISettings)).diCoverSWSig)-1]);
}else{
(tyDInput.bCoverSWSig=1);
}

if(((((signed long)((*(p_tyDISettings)).diUBA)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUBA)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUBA=a_bPhysicalDI[((*(p_tyDISettings)).diUBA)-1]);
}else{
(tyDInput.bUBA=0);
}

if(((((signed long)((*(p_tyDISettings)).diUBAStat)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUBAStat)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUBAStat=a_bPhysicalDI[((*(p_tyDISettings)).diUBAStat)-1]);
}else{
(tyDInput.bUBAStat=0);
}

if(((((signed long)((*(p_tyDISettings)).diDSB)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diDSB)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bDSB=a_bPhysicalDI[((*(p_tyDISettings)).diDSB)-1]);
}else{
(tyDInput.bDSB=0);
}

if(((((signed long)((*(p_tyDISettings)).diUBA2)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUBA2)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUBA2=a_bPhysicalDI[((*(p_tyDISettings)).diUBA2)-1]);
}else{
(tyDInput.bUBA2=0);
}

if(((((signed long)((*(p_tyDISettings)).diUBAStat2)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUBAStat2)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUBAStat2=a_bPhysicalDI[((*(p_tyDISettings)).diUBAStat2)-1]);
}else{
(tyDInput.bUBAStat2=0);
}

if(((((signed long)((*(p_tyDISettings)).diConvLftSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diConvLftSen)<=(signed long)(signed long)((*(p_udiMax))))))){

(fbConvLftSigFltr.tSigOnFltrTm=(plctime)((*(p_diConvLftSenOnTm))));
(fbConvLftSigFltr.tSigOffFltrTm=(plctime)((*(p_diConvLftSenOffTm))));
(fbConvLftSigFltr.bSigIn=a_bPhysicalDI[((*(p_tyDISettings)).diConvLftSen)-1]);;fbSenFltr(&fbConvLftSigFltr);
(tyDInput.bConvLftSen=fbConvLftSigFltr.bSigOut);
}else{
(tyDInput.bConvLftSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diConvRgtSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diConvRgtSen)<=(signed long)(signed long)((*(p_udiMax))))))){

(fbConvRgtSigFltr.tSigOnFltrTm=(plctime)((*(p_diConvRgtSenOnTm))));
(fbConvRgtSigFltr.tSigOffFltrTm=(plctime)((*(p_diConvRgtSenOffTm))));
(fbConvRgtSigFltr.bSigIn=a_bPhysicalDI[((*(p_tyDISettings)).diConvRgtSen)-1]);;fbSenFltr(&fbConvRgtSigFltr);
(tyDInput.bConvRgtSen=fbConvRgtSigFltr.bSigOut);
}else{
(tyDInput.bConvRgtSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diThermalPrtSig)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diThermalPrtSig)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bThermalPrtSig=a_bPhysicalDI[((*(p_tyDISettings)).diThermalPrtSig)-1]);
}else{
(tyDInput.bThermalPrtSig=1);
}

if(((((signed long)((*(p_tyDISettings)).diUSWidthChkSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUSWidthChkSen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUSWidthChkSen=a_bPhysicalDI[((*(p_tyDISettings)).diUSWidthChkSen)-1]);
}else{
(tyDInput.bUSWidthChkSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diDSWidthChkSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diDSWidthChkSen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bDSWidthChkSen=a_bPhysicalDI[((*(p_tyDISettings)).diDSWidthChkSen)-1]);
}else{
(tyDInput.bDSWidthChkSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diInvertHomeSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diInvertHomeSen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bInvertHomeSen=a_bPhysicalDI[((*(p_tyDISettings)).diInvertHomeSen)-1]);
}else{
(tyDInput.bInvertHomeSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diInvertRemoteSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diInvertRemoteSen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bInvertRemoteSen=a_bPhysicalDI[((*(p_tyDISettings)).diInvertRemoteSen)-1]);
}else{
(tyDInput.bInvertRemoteSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diCoatingSen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diCoatingSen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bCoatingSen=a_bPhysicalDI[((*(p_tyDISettings)).diCoatingSen)-1]);
}else{
(tyDInput.bCoatingSen=0);
}

if(((((signed long)((*(p_tyDISettings)).diInShutterCloseRS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diInShutterCloseRS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bInShutterCloseRS=a_bPhysicalDI[((*(p_tyDISettings)).diInShutterCloseRS)-1]);
}else{
(tyDInput.bInShutterCloseRS=0);
}

if(((((signed long)((*(p_tyDISettings)).diInShutterOpenRS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diInShutterOpenRS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bInShutterOpenRS=a_bPhysicalDI[((*(p_tyDISettings)).diInShutterOpenRS)-1]);
}else{
(tyDInput.bInShutterOpenRS=0);
}

if(((((signed long)((*(p_tyDISettings)).diOutShutterCloseRS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diOutShutterCloseRS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bOutShutterCloseRS=a_bPhysicalDI[((*(p_tyDISettings)).diOutShutterCloseRS)-1]);
}else{
(tyDInput.bOutShutterCloseRS=0);
}

if(((((signed long)((*(p_tyDISettings)).diOutShutterOpenRS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diOutShutterOpenRS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bOutShutterOpenRS=a_bPhysicalDI[((*(p_tyDISettings)).diOutShutterOpenRS)-1]);
}else{
(tyDInput.bOutShutterOpenRS=0);
}

if(((((signed long)((*(p_tyDISettings)).diClamp2Sen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diClamp2Sen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bClamp2Sen=a_bPhysicalDI[((*(p_tyDISettings)).diClamp2Sen)-1]);
}else{
(tyDInput.bClamp2Sen=0);
}

if(((((signed long)((*(p_tyDISettings)).diClamp3Sen)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diClamp3Sen)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bClamp3Sen=a_bPhysicalDI[((*(p_tyDISettings)).diClamp3Sen)-1]);
}else{
(tyDInput.bClamp3Sen=0);
}

if(((((signed long)((*(p_tyDISettings)).diClampRS1)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diClampRS1)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bClampRS1=a_bPhysicalDI[((*(p_tyDISettings)).diClampRS1)-1]);
}else{
(tyDInput.bClampRS1=0);
}

if(((((signed long)((*(p_tyDISettings)).diUnClampRS1)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUnClampRS1)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUnClampRS1=a_bPhysicalDI[((*(p_tyDISettings)).diUnClampRS1)-1]);
}else{
(tyDInput.bUnClampRS1=0);
}

if(((((signed long)((*(p_tyDISettings)).diClampRS2)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diClampRS2)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bClampRS2=a_bPhysicalDI[((*(p_tyDISettings)).diClampRS2)-1]);
}else{
(tyDInput.bClampRS2=0);
}

if(((((signed long)((*(p_tyDISettings)).diUnClampRS2)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUnClampRS2)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUnClampRS2=a_bPhysicalDI[((*(p_tyDISettings)).diUnClampRS2)-1]);
}else{
(tyDInput.bUnClampRS2=0);
}

if(((((signed long)((*(p_tyDISettings)).diClampRS3)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diClampRS3)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bClampRS3=a_bPhysicalDI[((*(p_tyDISettings)).diClampRS3)-1]);
}else{
(tyDInput.bClampRS3=0);
}

if(((((signed long)((*(p_tyDISettings)).diUnClampRS3)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUnClampRS3)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUnClampRS3=a_bPhysicalDI[((*(p_tyDISettings)).diUnClampRS3)-1]);
}else{
(tyDInput.bUnClampRS3=0);
}

if(((((signed long)((*(p_tyDISettings)).diPressureSW)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diPressureSW)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bPressureSW=a_bPhysicalDI[((*(p_tyDISettings)).diPressureSW)-1]);
}else{
(tyDInput.bPressureSW=0);
}

if(((((signed long)((*(p_tyDISettings)).diUSWidthChkSen1)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUSWidthChkSen1)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUSWidthChkSen1=a_bPhysicalDI[((*(p_tyDISettings)).diUSWidthChkSen1)-1]);
}else{
(tyDInput.bUSWidthChkSen1=0);
}


if(((((signed long)((*(p_tyDISettings)).diCoverSWSig2)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diCoverSWSig2)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bCoverSWSig2=a_bPhysicalDI[((*(p_tyDISettings)).diCoverSWSig2)-1]);
}else{
(tyDInput.bCoverSWSig2=0);
}

if(((*(p_bHermesUSCmdFeaturePause)))){
(tyDInput.bSafetySigFromUS=((*(p_tyHermesUSCmdPause)).bMachineSafetySigFrom));
}else if(((((signed long)((*(p_tyDISettings)).diSafetySigFromUS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diSafetySigFromUS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bSafetySigFromUS=a_bPhysicalDI[((*(p_tyDISettings)).diSafetySigFromUS)-1]);
}else{
(tyDInput.bSafetySigFromUS=0);
}

if(((*(p_bHermesUSCmdFeaturePause)))){
(tyDInput.bUnlockCoverSigFromUS=((*(p_tyHermesUSCmdPause)).bUnlockCoverSigFrom));
}else if(((((signed long)((*(p_tyDISettings)).diUnlockCoverSigFromUS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUnlockCoverSigFromUS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUnlockCoverSigFromUS=a_bPhysicalDI[((*(p_tyDISettings)).diUnlockCoverSigFromUS)-1]);
}else{
(tyDInput.bUnlockCoverSigFromUS=0);
}


if(((*(p_bHermesDSCmdFeaturePause)))){
(tyDInput.bSafetySigFromDS=((*(p_tyHermesDSCmdPause)).bMachineSafetySigFrom));
}else if(((((signed long)((*(p_tyDISettings)).diSafetySigFromDS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diSafetySigFromDS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bSafetySigFromDS=a_bPhysicalDI[((*(p_tyDISettings)).diSafetySigFromDS)-1]);
}else{
(tyDInput.bSafetySigFromDS=0);
}

if(((*(p_bHermesDSCmdFeaturePause)))){
(tyDInput.bUnlockCoverSigFromDS=((*(p_tyHermesDSCmdPause)).bUnlockCoverSigFrom));
}else if(((((signed long)((*(p_tyDISettings)).diUnlockCoverSigFromDS)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diUnlockCoverSigFromDS)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bUnlockCoverSigFromDS=a_bPhysicalDI[((*(p_tyDISettings)).diUnlockCoverSigFromDS)-1]);
}else{
(tyDInput.bUnlockCoverSigFromDS=0);
}


if(((((signed long)((*(p_tyDISettings)).diCoverUnlockPB1)>(signed long)0))&(((signed long)((*(p_tyDISettings)).diCoverUnlockPB1)<=(signed long)(signed long)((*(p_udiMax))))))){
(tyDInput.bCoverUnlockPB1=a_bPhysicalDI[((*(p_tyDISettings)).diCoverUnlockPB1)-1]);
}else{
(tyDInput.bCoverUnlockPB1=0);
}


if((((unsigned long)DiagCpuIsSimulated()==(unsigned long)(unsigned char)1))){
(tyDInput.bSafetyRlySig=1);
(tyDInput.bEStopSig=1);
(tyDInput.bCoverSWSig=1);
(tyDInput.bThermalPrtSig=1);
(tyDInput.bPressureSW=1);
}

if(((((unsigned long)(unsigned char)tyDInput.bEStopSig==(unsigned long)(unsigned char)0))&(((signed long)eStatus1!=(signed long)3)))){
(eStatus1=3);
(udiStatus1=10000);
}


if(((((unsigned long)(unsigned char)tyDInput.bCoverSWSig==(unsigned long)(unsigned char)0))&(((signed long)eStatus2!=(signed long)3)))){
(eStatus2=3);
(udiStatus2=10001);
}

if(((*(p_bLinkStartupRun)))){
(fbSafetyRlyRstTm.IN=(((*(p_bRstErrSafetyRlyRst))^1)));;TON(&fbSafetyRlyRstTm);
if(((((unsigned long)(unsigned char)tyDInput.bSafetyRlySig==(unsigned long)(unsigned char)0))&fbSafetyRlyRstTm.Q)){
(bSafetySigErrNoBuz=1);
}
}else if((((unsigned long)(unsigned char)bSafetySigErrNoBuz==(unsigned long)(unsigned char)0))){
(fbSafetyRlyRstTm.IN=(((*(p_bRstErrSafetyRlyRst))^1)));;TON(&fbSafetyRlyRstTm);
if(((((unsigned long)(unsigned char)tyDInput.bSafetyRlySig==(unsigned long)(unsigned char)0))&((((signed long)eStatus2!=(signed long)3))&(((signed long)eStatus1!=(signed long)3)))&fbSafetyRlyRstTm.Q&tyDInput.bEStopSig&tyDInput.bCoverSWSig)){
(eStatus2=3);
(udiStatus2=10002);
}
}


if(((((signed long)eStatus1==(signed long)3))&bRstErr)){
(eStatus1=0);
(udiStatus1=0);
}

if(((((signed long)eStatus2==(signed long)3))&bRstErr)){
(eStatus2=0);
(udiStatus2=0);
}

if((bRstErr&bSafetySigErrNoBuz)){
(bSafetySigErrNoBuz=0);
}







}imp3_else44_0:imp3_end44_0:;}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_Alarm1.st"
static void __AS__Action__Act_Alarm1(void){
{

if(((((signed long)eStatus1==(signed long)3))&~Edge0000100000&1?((Edge0000100000=(((signed long)eStatus1==(signed long)3))&1),1):((Edge0000100000=(((signed long)eStatus1==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=1);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData1.bAlm=1);
(tyAlmData1.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDInputProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData1.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData1.udiCode>(unsigned long)10099)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData1.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData1.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if((bRstErr&(((unsigned long)tyAlmData1.udiCode!=(unsigned long)0)))){

(tyAlmData1.udiCode=0);
(tyAlmData1.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.bAlm=0);
}

}imp1_else0_1:imp1_end0_0:;}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Act_Alarm2.st"
static void __AS__Action__Act_Alarm2(void){
{

if(((((signed long)eStatus2==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus2==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus2==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.udiCode=udiStatus2);
(tyAlmData2.eSeverity=1);
(tyAlmData2.udiRunTime=(tyAlmData2.udiRunTime+1));
(tyAlmData2.bAlm=1);
(tyAlmData2.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDInputProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData2.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData2.udiCode>(unsigned long)10099)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData2.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData2.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if((bRstErr&(((unsigned long)tyAlmData2.udiCode!=(unsigned long)0)))){

(tyAlmData2.udiCode=0);
(tyAlmData2.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.bAlm=0);
}

}imp2_else0_1:imp2_end0_0:;}
#line 27 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DInput/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DInput/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/DInput/DInput/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/DInput/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'c_udiDInputMax'\\n\"");
__asm__(".previous");
