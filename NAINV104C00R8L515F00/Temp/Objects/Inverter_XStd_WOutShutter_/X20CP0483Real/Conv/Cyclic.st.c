#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Conv/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.st"
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
#line 40 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkOpsRun=p_OpsRun);
(p_bLinkOpsSimu=p_SimuRun);

(p_bLinkUIBypsInitConv=p_UIOpsBypsInitConv);
(p_eLinkMcParamUSCommMod=p_McParamUSCommMod);
(p_bLinkOpsInvertBrdInserted=p_OpsInvertBrdInserted);
(p_eLinkMcParamUSComm2Mod=p_McParamUSComm2Mod);
(p_bLinkOpsInvertOnceTwicePCBOut=p_OpsInvertOnceTwicePCBOut);
(p_usiLinkMcMod=p_ProdRcpCurrRcp0McMod);

(p_tyNtParamCurr=p_NtParamCurr);


(p_udiRstErr=p_RstErrReset);
(p_bManual=p_UIMnlMod);
(p_bOnDirMod=p_NtParamConvOnDirMod);
(p_diInitTm=p_McParamConvInitTm);
(p_diRevDlyTm=p_NtParamConvRevDlyTm);
(p_tMtrOffDlyTm=p_NtParamConvMtrOffDlyTm);
(p_diTxInTimeOut=p_McParamTranInErrDlyTm);
(p_diTxOutTimeOut=p_McParamTranOutErrDlyTm);

(p_sProgNm=p_NtParamConvProgNm);
(p_bLeftSen=p_DIConvLftSen);
(p_bRightSen=p_DIConvRgtSen);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);




(p_bUSHermesDSRdy=p_USHermesDSRdy);
(p_bDSHermesUSRdy=p_DSHermesUSRdy);
(p_bUSHermesReversalDSRdy=p_USHermes2DSRdy);
(p_bDSHermesReversalUSRdy=p_DSHermes2USRdy);
}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkOpsRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_OpsInvertConvAct);
}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_UIConvAct);
}else if((((unsigned long)(unsigned char)((*(p_bLinkOpsSimu)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_SimuInvConvAct);

}else{
(p_eAct=((unsigned long)(&eAct)));
}

}imp8_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
if(((*(p_bLinkUIBypsInitConv)))){
(p_diInitTm=((unsigned long)(&diInitTm)));
}else{
(p_diInitTm=p_McParamConvInitTm);
}

if(((((signed long)eStatus==(signed long)3))&~Edge0000700000&1?((Edge0000700000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000700000=(((signed long)eStatus==(signed long)3))&1),0))){
(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);
}


if((((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)0))){
if((((unsigned long)(unsigned char)((*(p_bLinkOpsInvertBrdInserted)))==(unsigned long)(unsigned char)1))){
((*(p_bGdBrdEnt))=1);
}else{
(p_bGdBrdEnt=p_USSMEMAUSGdBrdRdy);
}
}else if((((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bLinkOpsInvertBrdInserted)))==(unsigned long)(unsigned char)1))){
((*(p_bGdBrdEnt))=1);
}else{
(p_bGdBrdEnt=p_USHermesUSGdRdy);
}
}

if((((signed long)((*(p_eLinkMcParamUSComm2Mod)))==(signed long)0))){
if((((unsigned long)(unsigned char)((*(p_bLinkOpsInvertBrdInserted)))==(unsigned long)(unsigned char)1))){
((*(p_bGdBrdEnt))=1);
}else{
(p_bGdBrdEnt=p_USSMEMA2USGdBrdRdy);
}
}else if((((signed long)((*(p_eLinkMcParamUSComm2Mod)))==(signed long)1))){
if((((unsigned long)(unsigned char)((*(p_bLinkOpsInvertBrdInserted)))==(unsigned long)(unsigned char)1))){
((*(p_bGdBrdEnt))=1);
}else{
(p_bGdBrdEnt=p_USHermesUSGdRdy);
}
}


(fbRev.tTimeOut=(plctime)((*(p_diTxInTimeOut))));


if((((((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)1)))|(((((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)3)))&(((*(p_bLinkOpsInvertOnceTwicePCBOut))^1))))){
(p_eDirection=p_NtParamProjConvDir);
}else if((((((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)2))|(((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)3)))&((*(p_bLinkOpsInvertOnceTwicePCBOut))))){
(p_eDirection=p_NtParamProjRtrnBrdConvDir);
}else if((((unsigned long)(unsigned char)((*(p_usiLinkMcMod)))==(unsigned long)(unsigned char)4))){
if(((((*(p_bUSHermesReversalDSRdy)))|((*(p_bDSHermesReversalUSRdy))))&~Edge0000700001&1?((Edge0000700001=(((*(p_bUSHermesReversalDSRdy)))|((*(p_bDSHermesReversalUSRdy))))&1),1):((Edge0000700001=(((*(p_bUSHermesReversalDSRdy)))|((*(p_bDSHermesReversalUSRdy))))&1),0))){
(p_eDirection=p_NtParamProjRtrnBrdConvDir);
}else if(((((*(p_bUSHermesDSRdy)))|((*(p_bDSHermesUSRdy))))&~Edge0000700002&1?((Edge0000700002=(((*(p_bUSHermesDSRdy)))|((*(p_bDSHermesUSRdy))))&1),1):((Edge0000700002=(((*(p_bUSHermesDSRdy)))|((*(p_bDSHermesUSRdy))))&1),0))){
(p_eDirection=p_NtParamProjConvDir);
}
}

}imp7_else9_1:imp7_end9_0:imp7_else8_2:imp7_end8_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp11_end0_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));

(p_bManual=((unsigned long)(&bManual)));
(p_bLongBrdPrep=((unsigned long)(&bLongBrdPrep)));
(p_bLongBrdEn=((unsigned long)(&bLongBrdEn)));
(p_bOnDirMod=((unsigned long)(&bOnDirMod)));
(p_diInitTm=((unsigned long)(&diInitTm)));
(p_diRevDlyTm=((unsigned long)(&diRevDlyTm)));
(p_tMtrOffDlyTm=((unsigned long)(&tMtrOffDlyTm)));
(p_diTxInTimeOut=((unsigned long)(&diTxInTimeOut)));
(p_diTxOutTimeOut=((unsigned long)(&diTxOutTimeOut)));
(p_eDirection=((unsigned long)(&eDirection)));
(p_bGdBrdEnt=((unsigned long)(&bGdBrdEnt)));
(p_bGdBrdInit=((unsigned long)(&bGdBrdInit)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_tPshrExtTO=((unsigned long)(&tPshrExtTO)));
(p_tPshrRetTO=((unsigned long)(&tPshrRetTO)));
(p_tPullerExtTO=((unsigned long)(&tPullerExtTO)));
(p_tPullerRetTO=((unsigned long)(&tPullerRetTO)));
(p_tRotHomeTO=((unsigned long)(&tRotHomeTO)));
(p_tRotRemoteTO=((unsigned long)(&tRotRemoteTO)));
(p_tRejectUpTO=((unsigned long)(&tRejectUpTO)));
(p_tRejectDownTO=((unsigned long)(&tRejectDownTO)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));

(p_bLeftSen=((unsigned long)(&bLeftSen)));
(p_bRightSen=((unsigned long)(&bRightSen)));
(p_bMiddleSen=((unsigned long)(&bMiddleSen)));
(p_bPullerChkSen=((unsigned long)(&bPullerChkSen)));
(p_bPshrExtSen=((unsigned long)(&bPshrExtSen)));
(p_bPshrRetSen=((unsigned long)(&bPshrRetSen)));
(p_bPshrExtSafetySen=((unsigned long)(&bPshrExtSafetySen)));
(p_bPshrRetSafetySen=((unsigned long)(&bPshrRetSafetySen)));
(p_bPullerExtSen=((unsigned long)(&bPullerExtSen)));
(p_bPullerRetSen=((unsigned long)(&bPullerRetSen)));
(p_bPullerExtSafetySen=((unsigned long)(&bPullerExtSafetySen)));
(p_bPullerRetSafetySen=((unsigned long)(&bPullerRetSafetySen)));
(p_bRotHomeSen=((unsigned long)(&bRotHomeSen)));
(p_bRotRemoteSen=((unsigned long)(&bRotRemoteSen)));
(p_bRotHomeSafetySen=((unsigned long)(&bRotHomeSafetySen)));
(p_bRotRemoteSafetySen=((unsigned long)(&bRotRemoteSafetySen)));
(p_bRejectUpSen=((unsigned long)(&bRejectUpSen)));
(p_bRejectDownSen=((unsigned long)(&bRejectDownSen)));
(p_bRejectUpSafetySen=((unsigned long)(&bRejectUpSafetySen)));
(p_bRejectDownSafetySen=((unsigned long)(&bRejectDownSafetySen)));

}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbWaitTm.IN=0);;TON(&fbWaitTm);

(fbInit.bOnDirMod=((*(p_bOnDirMod))));
(fbInit.bStartSen=1);
(fbInit.tMtrOffDlyTm=((*(p_tMtrOffDlyTm))));
(fbInit.bEn=0);;fbConvSenToSenTm(&fbInit);

(fbEnt.bOnDirMod=((*(p_bOnDirMod))));
(fbEnt.bStartSen=1);
(fbEnt.tMtrOffDlyTm=((*(p_tMtrOffDlyTm))));
(fbEnt.bEn=0);;fbConvSenToSen(&fbEnt);

(fbRev.bOnDirMod=((*(p_bOnDirMod))));
(fbRev.tTxDlyTm=(plctime)((*(p_diRevDlyTm))));
(fbRev.tMtrOffDlyTm=((*(p_tMtrOffDlyTm))));
(fbRev.bEn=0);;fbConvSenToSenTm1(&fbRev);

(fbPreExit.bOnDirMod=((*(p_bOnDirMod))));
(fbPreExit.bStartSen=1);
(fbPreExit.tMtrOffDlyTm=((*(p_tMtrOffDlyTm))));
(fbPreExit.bEn=0);;fbConvSenToSenTm(&fbPreExit);

(fbExit.bOnDirMod=((*(p_bOnDirMod))));
(fbExit.bStartSen=1);
(fbExit.tMtrOffDlyTm=((*(p_tMtrOffDlyTm))));
(fbExit.bEn=0);;fbConvSenToSenOff(&fbExit);

(fbExit1.bOnDirMod=((*(p_bOnDirMod))));
(fbExit1.bStartSen=1);
(fbExit1.tMtrOffDlyTm=((*(p_tMtrOffDlyTm))));
(fbExit1.bEn=0);;fbConvSenToSenOff1(&fbExit1);

(fbStop.bEn=0);;fbConvMtrOff(&fbStop);

(fbPshrExtChk.tTimeOut=((*(p_tPshrExtTO))));
(fbPshrExtChk.bEn=0);;fbPneuExtRetSenExtChk(&fbPshrExtChk);

(fbPshrRetChk.tTimeOut=((*(p_tPshrRetTO))));
(fbPshrRetChk.bEn=0);;fbPneuExtRetSenRetChk(&fbPshrRetChk);

(fbPullerExtChk.tTimeOut=((*(p_tPullerExtTO))));
(fbPullerExtChk.bEn=0);;fbPneuExtRetSenExtChk(&fbPullerExtChk);

(fbPullerRetChk.tTimeOut=((*(p_tPullerRetTO))));
(fbPullerRetChk.bEn=0);;fbPneuExtRetSenRetChk(&fbPullerRetChk);

(fbRotHomeChk.tTimeOut=((*(p_tRotHomeTO))));
(fbRotHomeChk.bEn=0);;fbPneuExtRetSenExtChk(&fbRotHomeChk);

(fbRotRemoteChk.tTimeOut=((*(p_tRotRemoteTO))));
(fbRotRemoteChk.bEn=0);;fbPneuExtRetSenRetChk(&fbRotRemoteChk);

(fbRejectUpChk.tTimeOut=((*(p_tRejectUpTO))));
(fbRejectUpChk.bEn=0);;fbPneuExtRetSenExtChk(&fbRejectUpChk);

(fbRejectDownChk.tTimeOut=((*(p_tRejectDownTO))));
(fbRejectDownChk.bEn=0);;fbPneuExtRetSenRetChk(&fbRejectDownChk);

}}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_Action.st"
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
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbInit.bEn=0);;fbConvSenToSenTm(&fbInit);
(fbEnt.bEn=0);;fbConvSenToSen(&fbEnt);
(fbRev.bEn=0);;fbConvSenToSenTm1(&fbRev);
(fbPreExit.bEn=0);;fbConvSenToSenTm(&fbPreExit);
(fbExit.bEn=0);;fbConvSenToSenOff(&fbExit);
(fbExit1.bEn=0);;fbConvSenToSenOff1(&fbExit1);
(fbStop.bEn=0);;fbConvMtrOff(&fbStop);
(fbPshrExtChk.bEn=0);;fbPneuExtRetSenExtChk(&fbPshrExtChk);
(fbPshrRetChk.bEn=0);;fbPneuExtRetSenRetChk(&fbPshrRetChk);
(fbPullerExtChk.bEn=0);;fbPneuExtRetSenExtChk(&fbPullerExtChk);
(fbPullerRetChk.bEn=0);;fbPneuExtRetSenRetChk(&fbPullerRetChk);
(fbRotHomeChk.bEn=0);;fbPneuExtRetSenExtChk(&fbRotHomeChk);
(fbRotRemoteChk.bEn=0);;fbPneuExtRetSenRetChk(&fbRotRemoteChk);
(fbRejectUpChk.bEn=0);;fbPneuExtRetSenExtChk(&fbRejectUpChk);
(fbRejectDownChk.bEn=0);;fbPneuExtRetSenRetChk(&fbRejectDownChk);
(fbWaitTm.IN=0);;TON(&fbWaitTm);







if(((((signed long)eStatOld!=(signed long)0))&(((signed long)eStatOld!=(signed long)49))&(((signed long)eStatOld!=(signed long)51))&(((signed long)eStatOld!=(signed long)50))&(((signed long)eStatOld!=(signed long)52))&(((signed long)eStatOld!=(signed long)53))&(((signed long)eStatOld!=(signed long)54)))){

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);

}

(bLmtSenActivated=0);
(bInletOff=0);
(usiStep=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
if((~((*(p_bManual)))&Edge0001000000&1?((Edge0001000000=((*(p_bManual)))&1),1):((Edge0001000000=((*(p_bManual)))&1),0))){
(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);
}

(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){

case 0:{
(bHvBrd=0);
(usiStep=1);

}break;case 1:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10000);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=((*(p_bRightSen))));
}else{
(fbInit.bEndSen=((*(p_bLeftSen))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10001);
(eStatus=3);
}else{
(eStatus=1);
}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10002);
(eStatus=3);
}else{
(eStatus=1);
}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}

}break;}

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(bHvBrd=0);
(usiStep=1);

}break;case 1:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10003);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=((*(p_bRightSen))));
}else{
(fbInit.bEndSen=((*(p_bLeftSen))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10004);
(eStatus=3);
}else{
(usiStep=2);
}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10005);
(eStatus=3);
}else{
(usiStep=2);
}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}

}break;case 2:{
if((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))){
(usiStep=3);
}else{
(eStatus=1);
}

}break;case 3:{
(fbWaitTm.IN=1);;(fbWaitTm.PT=500);;TON(&fbWaitTm);

if((((unsigned long)(unsigned char)fbWaitTm.Q==(unsigned long)(unsigned char)1))){
(fbWaitTm.IN=0);;TON(&fbWaitTm);

(usiStep=4);
}

}break;case 4:{

(fbRev.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)1))|(((signed long)((*(p_eDirection)))==(signed long)3))));

if((((unsigned long)(unsigned char)fbRev.bConvLToR==(unsigned long)(unsigned char)1))){
(fbRev.bStartSen=((*(p_bLeftSen))));
(fbRev.bEndSen=((*(p_bRightSen))));
}else{
(fbRev.bStartSen=((*(p_bRightSen))));
(fbRev.bEndSen=((*(p_bLeftSen))));
}

(fbRev.bEn=1);;fbConvSenToSenTm1(&fbRev);

(bMtrSigOnOrLToR=fbRev.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbRev.bMtrDirOrRToL);

if((((unsigned long)fbRev.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbRev.udiStatus<(unsigned long)65534))){
(udiStatus=fbRev.udiStatus);
(eStatus=3);
}

}break;}
}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(bHvBrd=0);
(usiStep=1);

}break;case 1:{
(bPshrExtCtrl=0);

(fbPshrRetChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrRetChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrRetChk.bRetSafety=((*(p_bPshrRetSafetySen))));
(fbPshrRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPshrRetChk);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)0))){
(bPshrRetracted=1);
(usiStep=2);
}else if((((unsigned long)fbPshrRetChk.udiStatus<(unsigned long)65534))){
(bPshrExtCtrl=1);

(eStatus=3);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10006);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10007);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10008);
}else{
(udiStatus=fbPshrRetChk.udiStatus);
}
}

}break;case 2:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10009);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=((*(p_bRightSen))));
}else{
(fbInit.bEndSen=((*(p_bLeftSen))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10010);
(eStatus=3);
}else{
(eStatus=1);
}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10011);
(eStatus=3);
}else{
(eStatus=1);
}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}
}break;}
}

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(bHvBrd=0);
(usiStep=1);

}break;case 1:{
(bRotRemoteCtrl=0);

(fbRotHomeChk.bExtSen=((*(p_bRotHomeSen))));
(fbRotHomeChk.bRetSen=((*(p_bRotRemoteSen))));
(fbRotHomeChk.bExtSafety=((*(p_bRotHomeSafetySen))));
(fbRotHomeChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRotHomeChk);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)0))){
(bRotAtHome=1);
(usiStep=2);
}else if((((unsigned long)fbRotHomeChk.udiStatus<(unsigned long)65534))){
(bRotRemoteCtrl=1);

(eStatus=3);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1503))){
(udiStatus=10012);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1506))){
(udiStatus=10013);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1507))){
(udiStatus=10014);
}else{
(udiStatus=fbRotHomeChk.udiStatus);
}
}

}break;case 2:{
(bPullerExtCtrl=0);
(bPullerRetCtrl=1);

(fbPullerRetChk.bExtSen=((*(p_bPullerExtSen))));
(fbPullerRetChk.bRetSen=((*(p_bPullerRetSen))));
(fbPullerRetChk.bRetSafety=((*(p_bPullerRetSafetySen))));
(fbPullerRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPullerRetChk);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)0))){
(bPullerRetracted=1);
(usiStep=3);
}else if((((unsigned long)fbPullerRetChk.udiStatus<(unsigned long)65534))){
(bPullerExtCtrl=1);
(bPullerRetCtrl=0);

(eStatus=3);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10015);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10016);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10017);
}else{
(udiStatus=fbPullerRetChk.udiStatus);
}
}

}break;case 3:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10018);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=((*(p_bRightSen))));
}else{
(fbInit.bEndSen=((*(p_bLeftSen))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10019);
(eStatus=3);
}else{
(eStatus=1);
}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10020);
(eStatus=3);
}else{
(eStatus=1);
}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}
}break;}
}

}break;case 5:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(bHvBrd=0);
(bRejHvBrd=0);
(usiStep=1);

}break;case 1:{
if((((unsigned long)(unsigned char)((*(p_bRejectDownSen)))==(unsigned long)(unsigned char)1))){
(usiStep=2);
}else{
(usiStep=4);
}

}break;case 2:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10079);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMiddleSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=(((*(p_bRightSen)))|((*(p_bMiddleSen)))));
}else{
(fbInit.bEndSen=(((*(p_bLeftSen)))|((*(p_bMiddleSen)))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10080);
(eStatus=3);

}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
(eStatus=1);
}else if((((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)1))){
(usiStep=3);
}else{
(eStatus=1);
}

}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10081);
(eStatus=3);

}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
(eStatus=1);
}else if((((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)1))){
(usiStep=3);
}else{
(eStatus=1);
}

}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}

}break;case 3:{
(bRejectUpCtrl=1);
(bRejectDownCtrl=0);

(fbRejectUpChk.bExtSen=((*(p_bRejectUpSen))));
(fbRejectUpChk.bRetSen=((*(p_bRejectDownSen))));
(fbRejectUpChk.bExtSafety=((*(p_bRejectUpSafetySen))));
(fbRejectUpChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRejectUpChk);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)0))){
(bRejectAtUp=1);
(bRejHvBrd=1);
(bHvBrd=0);
(eStatus=1);
}else if((((unsigned long)fbRejectUpChk.udiStatus<(unsigned long)65534))){
(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=3);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1503))){
(udiStatus=10082);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1506))){
(udiStatus=10083);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1507))){
(udiStatus=10084);
}else{
(udiStatus=fbRejectUpChk.udiStatus);
}
}

}break;case 4:{
(bRejectUpCtrl=1);
(bRejectDownCtrl=0);

(fbRejectUpChk.bExtSen=((*(p_bRejectUpSen))));
(fbRejectUpChk.bRetSen=((*(p_bRejectDownSen))));
(fbRejectUpChk.bExtSafety=((*(p_bRejectUpSafetySen))));
(fbRejectUpChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRejectUpChk);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)0))){
(bRejectAtUp=1);
(bRejHvBrd=1);
(usiStep=5);
}else if((((unsigned long)fbRejectUpChk.udiStatus<(unsigned long)65534))){
(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=3);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1503))){
(udiStatus=10088);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1506))){
(udiStatus=10089);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1507))){
(udiStatus=10090);
}else{
(udiStatus=fbRejectUpChk.udiStatus);
}
}

}break;case 5:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10091);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMiddleSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=((*(p_bRightSen))));
}else{
(fbInit.bEndSen=((*(p_bLeftSen))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10092);
(eStatus=3);
}else{
(eStatus=1);
}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10093);
(eStatus=3);
}else{
(eStatus=1);
}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}

}break;}

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(bHvBrd=0);
(bInspHvBrd=0);
(usiStep=1);

}break;case 1:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10085);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMiddleSen))))){
(bHvBrd=1);
(bGdBrd=((*(p_bGdBrdInit))));
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=(((*(p_bRightSen)))|((*(p_bMiddleSen)))));
}else{
(fbInit.bEndSen=(((*(p_bLeftSen)))|((*(p_bMiddleSen)))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10086);
(eStatus=3);

}else{
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
(eStatus=1);
}else if((((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)1))){
(bInspHvBrd=1);
(eStatus=1);
}else{
(eStatus=1);
}

}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10087);
(eStatus=3);

}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
(eStatus=1);
}else if((((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)1))){
(bInspHvBrd=1);
(eStatus=1);
}else{
(eStatus=1);
}

}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}

}break;}

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10021);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
}


(bGdBrd=((*(p_bGdBrdEnt))));


(fbEnt.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbEnt.tTimeOut=(plctime)((*(p_diTxInTimeOut))));

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
(fbEnt.bEndSen=((*(p_bRightSen))));
}else{
(fbEnt.bEndSen=((*(p_bLeftSen))));
}

(fbEnt.bEn=1);;fbConvSenToSen(&fbEnt);

(bMtrSigOnOrLToR=fbEnt.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbEnt.bMtrDirOrRToL);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbEnt.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)1101))){
(udiStatus=10114);
}else{
(udiStatus=fbEnt.udiStatus);
}
}

}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10123);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
}


(bGdBrd=((*(p_bGdBrdEnt))));


(fbEnt.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbEnt.tTimeOut=(plctime)((*(p_diTxInTimeOut))));

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
if((~((*(p_bLeftSen)))&Edge0001000001&1?((Edge0001000001=((*(p_bLeftSen)))&1),1):((Edge0001000001=((*(p_bLeftSen)))&1),0))){
(bInletOff=1);
}

(fbEnt.bEndSen=(((*(p_bRightSen)))|bInletOff));
}else{
if((~((*(p_bRightSen)))&Edge0001000002&1?((Edge0001000002=((*(p_bRightSen)))&1),1):((Edge0001000002=((*(p_bRightSen)))&1),0))){
(bInletOff=1);
}

(fbEnt.bEndSen=(((*(p_bLeftSen)))|bInletOff));
}

(fbEnt.bEn=1);;fbConvSenToSen(&fbEnt);

(bMtrSigOnOrLToR=fbEnt.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbEnt.bMtrDirOrRToL);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbEnt.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)1101))){
(udiStatus=10124);
}else{
(udiStatus=fbEnt.udiStatus);
}
}

}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10022);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
}


(bGdBrd=((*(p_bGdBrdEnt))));


(fbEnt.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbEnt.tTimeOut=(plctime)((*(p_diTxInTimeOut))));

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
(fbEnt.bEndSen=((*(p_bRightSen))));
}else{
(fbEnt.bEndSen=((*(p_bLeftSen))));
}

(fbEnt.bEn=1);;fbConvSenToSen(&fbEnt);

(bMtrSigOnOrLToR=fbEnt.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbEnt.bMtrDirOrRToL);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)0))){
(usiStep=1);
}else if((((unsigned long)fbEnt.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)1101))){
(udiStatus=10115);
}else{
(udiStatus=fbEnt.udiStatus);
}
}

}break;case 1:{
if((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))){
(usiStep=2);
}else{
(eStatus=1);
}

}break;case 2:{
(fbWaitTm.IN=1);;(fbWaitTm.PT=500);;TON(&fbWaitTm);

if((((unsigned long)(unsigned char)fbWaitTm.Q==(unsigned long)(unsigned char)1))){
(fbWaitTm.IN=0);;TON(&fbWaitTm);

(usiStep=3);
}

}break;case 3:{

(fbRev.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)1))|(((signed long)((*(p_eDirection)))==(signed long)3))));

if((((unsigned long)(unsigned char)fbRev.bConvLToR==(unsigned long)(unsigned char)1))){
(fbRev.bStartSen=((*(p_bLeftSen))));
(fbRev.bEndSen=((*(p_bRightSen))));
}else{
(fbRev.bStartSen=((*(p_bRightSen))));
(fbRev.bEndSen=((*(p_bLeftSen))));
}

(fbRev.bEn=1);;fbConvSenToSenTm1(&fbRev);

(bMtrSigOnOrLToR=fbRev.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbRev.bMtrDirOrRToL);

if((((unsigned long)fbRev.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbRev.udiStatus<(unsigned long)65534))){
(udiStatus=fbRev.udiStatus);
(eStatus=3);
}

}break;}
}

}break;case 10:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbRev.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)1))|(((signed long)((*(p_eDirection)))==(signed long)3))));

if((((unsigned long)(unsigned char)fbRev.bConvLToR==(unsigned long)(unsigned char)1))){
(fbRev.bStartSen=((*(p_bLeftSen))));
(fbRev.bEndSen=((*(p_bRightSen))));
}else{
(fbRev.bStartSen=((*(p_bRightSen))));
(fbRev.bEndSen=((*(p_bLeftSen))));
}

(fbRev.bEn=1);;fbConvSenToSenTm1(&fbRev);

(bMtrSigOnOrLToR=fbRev.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbRev.bMtrDirOrRToL);

if((((unsigned long)fbRev.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbRev.udiStatus<(unsigned long)65534))){
(udiStatus=fbRev.udiStatus);
(eStatus=3);
}

}

}break;case 11:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbRev.bStartSen=1);
(fbRev.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)1))|(((signed long)((*(p_eDirection)))==(signed long)3))));

if((((unsigned long)(unsigned char)fbRev.bConvLToR==(unsigned long)(unsigned char)1))){
(fbRev.bEndSen=((*(p_bRightSen))));
}else{
(fbRev.bEndSen=((*(p_bLeftSen))));
}

(fbRev.bEn=1);;fbConvSenToSenTm1(&fbRev);

(bMtrSigOnOrLToR=fbRev.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbRev.bMtrDirOrRToL);

if((((unsigned long)fbRev.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbRev.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbRev.udiStatus==(unsigned long)1101))){
(udiStatus=10125);
}else{
(udiStatus=fbRev.udiStatus);
}
}

}

}break;case 12:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(bPullerExtCtrl=1);
(bPullerRetCtrl=0);

(fbPullerExtChk.bExtSen=((*(p_bPullerExtSen))));
(fbPullerExtChk.bRetSen=((*(p_bPullerRetSen))));
(fbPullerExtChk.bExtSafety=((*(p_bPullerExtSafetySen))));
(fbPullerExtChk.bEn=1);;fbPneuExtRetSenExtChk(&fbPullerExtChk);

if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)0))){
(bPullerExtended=1);
(usiStep=1);
}else if((((unsigned long)fbPullerExtChk.udiStatus<(unsigned long)65534))){
(bPullerExtCtrl=0);
(bPullerRetCtrl=1);

(eStatus=3);

if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)1503))){
(udiStatus=10023);
}else if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)1506))){
(udiStatus=10024);
}else if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)1507))){
(udiStatus=10025);
}else{
(udiStatus=fbPullerExtChk.udiStatus);
}
}

}break;case 1:{
(bRotRemoteCtrl=1);

(fbRotRemoteChk.bExtSen=((*(p_bRotHomeSen))));
(fbRotRemoteChk.bRetSen=((*(p_bRotRemoteSen))));
(fbRotRemoteChk.bRetSafety=((*(p_bRotRemoteSafetySen))));
(fbRotRemoteChk.bEn=1);;fbPneuExtRetSenRetChk(&fbRotRemoteChk);

if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)0))){
(bRotAtRemote=1);
(usiStep=2);
}else if((((unsigned long)fbRotRemoteChk.udiStatus<(unsigned long)65534))){
(bRotRemoteCtrl=0);

(eStatus=3);

if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)1504))){
(udiStatus=10026);
}else if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)1505))){
(udiStatus=10027);
}else if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)1508))){
(udiStatus=10028);
}else{
(udiStatus=fbRotRemoteChk.udiStatus);
}
}

}break;case 2:{
(bPullerExtCtrl=0);
(bPullerRetCtrl=1);

(fbPullerRetChk.bExtSen=((*(p_bPullerExtSen))));
(fbPullerRetChk.bRetSen=((*(p_bPullerRetSen))));
(fbPullerRetChk.bRetSafety=((*(p_bPullerRetSafetySen))));
(fbPullerRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPullerRetChk);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)0))){
(bPullerRetracted=1);
(usiStep=3);
}else if((((unsigned long)fbPullerRetChk.udiStatus<(unsigned long)65534))){
(bPullerExtCtrl=1);
(bPullerRetCtrl=0);

(eStatus=3);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10029);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10030);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10031);
}else{
(udiStatus=fbPullerRetChk.udiStatus);
}
}

}break;case 3:{
(bRotRemoteCtrl=0);

(fbRotHomeChk.bExtSen=((*(p_bRotHomeSen))));
(fbRotHomeChk.bRetSen=((*(p_bRotRemoteSen))));
(fbRotHomeChk.bExtSafety=((*(p_bRotHomeSafetySen))));
(fbRotHomeChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRotHomeChk);

if(((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)0))&(((unsigned long)fbEnt.udiStatus==(unsigned long)0)))){
(bRotAtHome=1);
(eStatus=1);
}else if(((((unsigned long)fbRotHomeChk.udiStatus<(unsigned long)65534))&(((unsigned long)fbRotHomeChk.udiStatus>(unsigned long)0)))){
(bRotRemoteCtrl=1);

(eStatus=3);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1503))){
(udiStatus=10032);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1506))){
(udiStatus=10033);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1507))){
(udiStatus=10034);
}else{
(udiStatus=fbRotHomeChk.udiStatus);
}
}
}break;}

if((((unsigned long)(unsigned char)usiStep>=(unsigned long)(unsigned char)2))){


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10035);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen))))){
(bHvBrd=1);
}


(bGdBrd=((*(p_bGdBrdEnt))));


(fbEnt.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbEnt.tTimeOut=(plctime)((*(p_diTxInTimeOut))));

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
(fbEnt.bEndSen=((*(p_bRightSen))));
}else{
(fbEnt.bEndSen=((*(p_bLeftSen))));
}

(fbEnt.bEn=1);;fbConvSenToSen(&fbEnt);

(bMtrSigOnOrLToR=fbEnt.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbEnt.bMtrDirOrRToL);

if(((((unsigned long)fbEnt.udiStatus<(unsigned long)65534))&(((unsigned long)fbEnt.udiStatus>(unsigned long)0)))){
(eStatus=3);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)1101))){
(udiStatus=10116);
}else{
(udiStatus=fbEnt.udiStatus);
}
}
}
}

}break;case 13:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10094);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMiddleSen))))){
(bHvBrd=1);
}


(fbEnt.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbEnt.tTimeOut=(plctime)((*(p_diTxInTimeOut))));

(bGdBrd=((*(p_bGdBrdEnt))));

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
(fbEnt.bEndSen=(((*(p_bRightSen)))|((*(p_bMiddleSen)))));
}else{
(fbEnt.bEndSen=(((*(p_bLeftSen)))|((*(p_bMiddleSen)))));
}

(fbEnt.bEn=1);;fbConvSenToSen(&fbEnt);

(bMtrSigOnOrLToR=fbEnt.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbEnt.bMtrDirOrRToL);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
(eStatus=1);
}else{
(usiStep=1);
}

}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
(eStatus=1);
}else{
(usiStep=1);

}
}

}else if((((unsigned long)fbEnt.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)1101))){
(udiStatus=10117);
}else{
(udiStatus=fbEnt.udiStatus);
}
}

}break;case 1:{
(bRejectUpCtrl=1);
(bRejectDownCtrl=0);

(fbRejectUpChk.bExtSen=((*(p_bRejectUpSen))));
(fbRejectUpChk.bRetSen=((*(p_bRejectDownSen))));
(fbRejectUpChk.bExtSafety=((*(p_bRejectUpSafetySen))));
(fbRejectUpChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRejectUpChk);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)0))){
(bRejectAtUp=1);
(bRejHvBrd=1);
(bHvBrd=0);
(eStatus=1);
}else if((((unsigned long)fbRejectUpChk.udiStatus<(unsigned long)65534))){
(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=3);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1503))){
(udiStatus=10095);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1506))){
(udiStatus=10096);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1507))){
(udiStatus=10097);
}else{
(udiStatus=fbRejectUpChk.udiStatus);
}
}
}break;}

}

}break;case 14:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10098);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMiddleSen))))){
(bHvBrd=1);
}


(fbEnt.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbEnt.tTimeOut=(plctime)((*(p_diTxInTimeOut))));

(bGdBrd=((*(p_bGdBrdEnt))));

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
(fbEnt.bEndSen=(((*(p_bRightSen)))|((*(p_bMiddleSen)))));
}else{
(fbEnt.bEndSen=(((*(p_bLeftSen)))|((*(p_bMiddleSen)))));
}

(fbEnt.bEn=1);;fbConvSenToSen(&fbEnt);

(bMtrSigOnOrLToR=fbEnt.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbEnt.bMtrDirOrRToL);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbEnt.bConvLToR==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
}

(eStatus=1);

}else{
if((((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)1))){
(bLmtSenActivated=1);
}

(eStatus=1);

}

}else if((((unsigned long)fbEnt.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbEnt.udiStatus==(unsigned long)1101))){
(udiStatus=10118);
}else{
(udiStatus=fbEnt.udiStatus);
}
}

}

}break;case 15:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10036);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


(fbPreExit.tTxDlyTm=(plctime)((*(p_diInitTm))));
(fbPreExit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)3))));

if((((unsigned long)(unsigned char)fbPreExit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbPreExit.bEndSen=((*(p_bRightSen))));
}else{
(fbPreExit.bEndSen=((*(p_bLeftSen))));
}

(fbPreExit.bEn=1);;fbConvSenToSenTm(&fbPreExit);

(bMtrSigOnOrLToR=fbPreExit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbPreExit.bMtrDirOrRToL);

if((((unsigned long)fbPreExit.udiStatus==(unsigned long)0))){
if((((unsigned long)(unsigned char)fbPreExit.bEndSen==(unsigned long)(unsigned char)1))){
(eStatus=1);
}else{
(udiStatus=10037);
(eStatus=3);
}
}else if((((unsigned long)fbPreExit.udiStatus<(unsigned long)65534))){
(udiStatus=fbPreExit.udiStatus);
(eStatus=3);
}

}

}break;case 16:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
if(((((unsigned long)(unsigned char)((*(p_bRejectDownSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)1)))){
(eStatus=3);
(udiStatus=10099);
}else{
(usiStep=1);
}

}break;case 1:{
(bRejectUpCtrl=0);
(bRejectDownCtrl=1);

(fbRejectDownChk.bExtSen=((*(p_bRejectUpSen))));
(fbRejectDownChk.bRetSen=((*(p_bRejectDownSen))));
(fbRejectDownChk.bRetSafety=((*(p_bRejectDownSafetySen))));
(fbRejectDownChk.bEn=1);;fbPneuExtRetSenRetChk(&fbRejectDownChk);

if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)0))){
(usiStep=2);
}else if((((unsigned long)fbRejectDownChk.udiStatus<(unsigned long)65534))){
(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=3);

if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)1504))){
(udiStatus=10100);
}else if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)1505))){
(udiStatus=10101);
}else if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)1508))){
(udiStatus=10102);
}else{
(udiStatus=fbRejectDownChk.udiStatus);
}
}

}break;case 2:{
(bRejHvBrd=0);
(bHvBrd=0);
(usiStep=3);

}break;case 3:{

if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10103);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


if((((*(p_bLeftSen)))|((*(p_bRightSen)))|((*(p_bMiddleSen))))){
(bHvBrd=1);
}


(fbInit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)2))));
(fbInit.tTxDlyTm=(plctime)((*(p_diInitTm))));

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbInit.bEndSen=((*(p_bRightSen))));
}else{
(fbInit.bEndSen=((*(p_bLeftSen))));
}

(fbInit.bEn=1);;fbConvSenToSenTm(&fbInit);

(bMtrSigOnOrLToR=fbInit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbInit.bMtrDirOrRToL);

if((((unsigned long)fbInit.udiStatus==(unsigned long)0))){

if((((unsigned long)(unsigned char)fbInit.bConvLToR==(unsigned long)(unsigned char)1))){
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRightSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10104);
(eStatus=3);
}else{
(eStatus=1);
}
}else{
if(((((unsigned long)(unsigned char)bHvBrd==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLeftSen)))==(unsigned long)(unsigned char)0)))){
(udiStatus=10105);
(eStatus=3);
}else{
(eStatus=1);
}
}

}else if((((unsigned long)fbInit.udiStatus<(unsigned long)65534))){
(udiStatus=fbInit.udiStatus);
(eStatus=3);
}

}break;}

}

}break;case 17:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10038);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


(fbExit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)3))));
(fbExit.tTimeOut=(plctime)((*(p_diTxOutTimeOut))));

if((((unsigned long)(unsigned char)fbExit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbExit.bEndSen=((*(p_bRightSen))));
}else{
(fbExit.bEndSen=((*(p_bLeftSen))));
}

(fbExit.bEn=1);;fbConvSenToSenOff(&fbExit);

(bMtrSigOnOrLToR=fbExit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbExit.bMtrDirOrRToL);

if((((unsigned long)fbExit.udiStatus==(unsigned long)0))){
(bHvBrd=0);
(eStatus=1);
}else if((((unsigned long)fbExit.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbExit.udiStatus==(unsigned long)1101))){
(udiStatus=10119);
}else{
(udiStatus=fbExit.udiStatus);
}
}

}

}break;case 18:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10106);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


(fbExit1.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)3))));
(fbExit1.tTimeOut=(plctime)((*(p_diTxOutTimeOut))));

if((((unsigned long)(unsigned char)fbExit1.bConvLToR==(unsigned long)(unsigned char)1))){
(fbExit1.bEndSen=((*(p_bRightSen))));
}else{
(fbExit1.bEndSen=((*(p_bLeftSen))));
}

(fbExit1.bEn=1);;fbConvSenToSenOff1(&fbExit1);

(bMtrSigOnOrLToR=fbExit1.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbExit1.bMtrDirOrRToL);

if((((unsigned long)fbExit1.udiStatus==(unsigned long)0))){
(bHvBrd=0);
(eStatus=1);
}else if((((unsigned long)fbExit1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbExit1.udiStatus==(unsigned long)1101))){
(udiStatus=10121);
}else{
(udiStatus=fbExit1.udiStatus);
}
}

}

}break;case 19:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10039);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


(fbExit.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)3))));
(fbExit.tTimeOut=(plctime)((*(p_diTxOutTimeOut))));

if((((unsigned long)(unsigned char)fbExit.bConvLToR==(unsigned long)(unsigned char)1))){
(fbExit.bEndSen=((*(p_bRightSen))));
}else{
(fbExit.bEndSen=((*(p_bLeftSen))));
}

(fbExit.bEn=1);;fbConvSenToSenOff(&fbExit);

(bMtrSigOnOrLToR=fbExit.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbExit.bMtrDirOrRToL);

if(((((unsigned long)fbExit.udiStatus<(unsigned long)65534))&(((unsigned long)fbExit.udiStatus>(unsigned long)0)))){
(eStatus=3);

if((((unsigned long)fbExit.udiStatus==(unsigned long)1101))){
(udiStatus=10120);
}else{
(udiStatus=fbExit.udiStatus);
}
}


if((((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)0))){
(fbWaitTm.IN=1);;(fbWaitTm.PT=1000);;TON(&fbWaitTm);
}

if((((unsigned long)(unsigned char)fbWaitTm.Q==(unsigned long)(unsigned char)1))){
switch(usiStep){
case 0:{
(bPshrExtCtrl=1);

(fbPshrExtChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrExtChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrExtChk.bExtSafety=((*(p_bPshrExtSafetySen))));
(fbPshrExtChk.bEn=1);;fbPneuExtRetSenExtChk(&fbPshrExtChk);

if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)0))){
(bPshrExtended=1);
(bHvBrd=0);
(usiStep=1);
}else if((((unsigned long)fbPshrExtChk.udiStatus<(unsigned long)65534))){
(bPshrExtCtrl=0);

(eStatus=3);

if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1503))){
(udiStatus=10040);
}else if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1506))){
(udiStatus=10041);
}else if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1507))){
(udiStatus=10042);
}else{
(udiStatus=fbPshrExtChk.udiStatus);
}
}

}break;case 1:{
(bPshrExtCtrl=0);

(fbPshrRetChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrRetChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrRetChk.bRetSafety=((*(p_bPshrRetSafetySen))));
(fbPshrRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPshrRetChk);

if(((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)0))&(((unsigned long)fbExit.udiStatus==(unsigned long)0)))){
(bPshrRetracted=1);
(eStatus=1);
}else if(((((unsigned long)fbPshrRetChk.udiStatus<(unsigned long)65534))&(((unsigned long)fbPshrRetChk.udiStatus>(unsigned long)0)))){
(bPshrExtCtrl=1);

(eStatus=3);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10043);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10044);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10045);
}else{
(udiStatus=fbPshrRetChk.udiStatus);
}
}

}break;}
}

}

}break;case 20:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


if(((((unsigned long)(unsigned char)((*(p_bLongBrdPrep)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bLongBrdEn)))==(unsigned long)(unsigned char)0)))){
(fbLongBrd.bSen1=((*(p_bLeftSen))));
(fbLongBrd.bSen2=((*(p_bRightSen))));
fbConvLongBrd(&fbLongBrd);

if(((((unsigned long)fbLongBrd.udiStatus>(unsigned long)0))&(((unsigned long)fbLongBrd.udiStatus<(unsigned long)65534)))){
(eStatus=3);
if((((unsigned long)fbLongBrd.udiStatus==(unsigned long)1100))){
(udiStatus=10107);
}else{
(udiStatus=fbLongBrd.udiStatus);
}
}
}


(fbExit1.bConvLToR=((((signed long)((*(p_eDirection)))==(signed long)0))|(((signed long)((*(p_eDirection)))==(signed long)3))));
(fbExit1.tTimeOut=(plctime)((*(p_diTxOutTimeOut))));

if((((unsigned long)(unsigned char)fbExit1.bConvLToR==(unsigned long)(unsigned char)1))){
(fbExit1.bEndSen=((*(p_bRightSen))));
}else{
(fbExit1.bEndSen=((*(p_bLeftSen))));
}

(fbExit1.bEn=1);;fbConvSenToSenOff1(&fbExit1);

(bMtrSigOnOrLToR=fbExit1.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbExit1.bMtrDirOrRToL);

if(((((unsigned long)fbExit1.udiStatus<(unsigned long)65534))&(((unsigned long)fbExit1.udiStatus>(unsigned long)0)))){
(eStatus=3);

if((((unsigned long)fbExit1.udiStatus==(unsigned long)1101))){
(udiStatus=10122);
}else{
(udiStatus=fbExit1.udiStatus);
}
}


if((((unsigned long)(unsigned char)((*(p_bMiddleSen)))==(unsigned long)(unsigned char)0))){
(fbWaitTm.IN=1);;(fbWaitTm.PT=1000);;TON(&fbWaitTm);
}

if((((unsigned long)(unsigned char)fbWaitTm.Q==(unsigned long)(unsigned char)1))){
switch(usiStep){
case 0:{
(bPshrExtCtrl=1);

(fbPshrExtChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrExtChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrExtChk.bExtSafety=((*(p_bPshrExtSafetySen))));
(fbPshrExtChk.bEn=1);;fbPneuExtRetSenExtChk(&fbPshrExtChk);

if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)0))){
(bPshrExtended=1);
(bHvBrd=0);
(usiStep=1);
}else if((((unsigned long)fbPshrExtChk.udiStatus<(unsigned long)65534))){
(bPshrExtCtrl=0);

(eStatus=3);

if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1503))){
(udiStatus=10108);
}else if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1506))){
(udiStatus=10109);
}else if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1507))){
(udiStatus=10110);
}else{
(udiStatus=fbPshrExtChk.udiStatus);
}
}

}break;case 1:{
(bPshrExtCtrl=0);

(fbPshrRetChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrRetChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrRetChk.bRetSafety=((*(p_bPshrRetSafetySen))));
(fbPshrRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPshrRetChk);

if(((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)0))&(((unsigned long)fbExit1.udiStatus==(unsigned long)0)))){
(bPshrRetracted=1);
(eStatus=1);
}else if(((((unsigned long)fbPshrRetChk.udiStatus<(unsigned long)65534))&(((unsigned long)fbPshrRetChk.udiStatus>(unsigned long)0)))){
(bPshrExtCtrl=1);

(eStatus=3);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10111);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10112);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10113);
}else{
(udiStatus=fbPshrRetChk.udiStatus);
}
}

}break;}
}

}

}break;case 21:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPshrExtCtrl=1);

(eStatus=1);

}

}break;case 22:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPshrExtCtrl=0);

(eStatus=1);

}

}break;case 23:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPshrExtCtrl=1);
(bPshrExtended=1);

(eStatus=1);

}

}break;case 24:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPshrExtCtrl=0);
(bPshrRetracted=1);

(eStatus=1);

}

}break;case 25:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPshrExtCtrl=1);

(fbPshrExtChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrExtChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrExtChk.bExtSafety=((*(p_bPshrExtSafetySen))));
(fbPshrExtChk.bEn=1);;fbPneuExtRetSenExtChk(&fbPshrExtChk);

if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)0))){
(bPshrExtended=1);
(eStatus=1);
}else if((((unsigned long)fbPshrExtChk.udiStatus<(unsigned long)65534))){
(bPshrExtCtrl=0);

(eStatus=3);

if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1503))){
(udiStatus=10046);
}else if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1506))){
(udiStatus=10047);
}else if((((unsigned long)fbPshrExtChk.udiStatus==(unsigned long)1507))){
(udiStatus=10048);
}else{
(udiStatus=fbPshrExtChk.udiStatus);
}
}
}

}break;case 26:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPshrExtCtrl=0);

(fbPshrRetChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrRetChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrRetChk.bRetSafety=((*(p_bPshrRetSafetySen))));
(fbPshrRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPshrRetChk);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)0))){
(bPshrRetracted=1);
(eStatus=1);
}else if((((unsigned long)fbPshrRetChk.udiStatus<(unsigned long)65534))){
(bPshrExtCtrl=1);

(eStatus=3);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10049);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10050);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10051);
}else{
(udiStatus=fbPshrRetChk.udiStatus);
}
}
}

}break;case 27:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPullerExtCtrl=1);
(bPullerRetCtrl=1);

(eStatus=1);

}

}break;case 28:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPullerExtCtrl=0);
(bPullerRetCtrl=0);

(eStatus=1);

}

}break;case 29:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPullerExtCtrl=1);
(bPullerRetCtrl=0);
(bPullerExtended=1);

(eStatus=1);

}

}break;case 30:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPullerExtCtrl=0);
(bPullerRetCtrl=1);
(bPullerRetracted=1);

(eStatus=1);

}

}break;case 31:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPullerExtCtrl=1);
(bPullerRetCtrl=0);

(fbPullerExtChk.bExtSen=((*(p_bPullerExtSen))));
(fbPullerExtChk.bRetSen=((*(p_bPullerRetSen))));
(fbPullerExtChk.bExtSafety=((*(p_bPullerExtSafetySen))));
(fbPullerExtChk.bEn=1);;fbPneuExtRetSenExtChk(&fbPullerExtChk);

if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)0))){
(bPullerExtended=1);
(eStatus=1);
}else if((((unsigned long)fbPullerExtChk.udiStatus<(unsigned long)65534))){
(bPullerExtCtrl=0);
(bPullerRetCtrl=0);

(eStatus=3);

if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)1503))){
(udiStatus=10052);
}else if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)1506))){
(udiStatus=10053);
}else if((((unsigned long)fbPullerExtChk.udiStatus==(unsigned long)1507))){
(udiStatus=10054);
}else{
(udiStatus=fbPullerExtChk.udiStatus);
}
}
}

}break;case 32:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bPullerExtCtrl=0);
(bPullerRetCtrl=1);

(fbPullerRetChk.bExtSen=((*(p_bPullerExtSen))));
(fbPullerRetChk.bRetSen=((*(p_bPullerRetSen))));
(fbPullerRetChk.bRetSafety=((*(p_bPullerRetSafetySen))));
(fbPullerRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPullerRetChk);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)0))){
(bPullerRetracted=1);
(eStatus=1);
}else if((((unsigned long)fbPullerRetChk.udiStatus<(unsigned long)65534))){
(bPullerExtCtrl=0);
(bPullerRetCtrl=0);

(eStatus=3);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10055);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10056);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10057);
}else{
(udiStatus=fbPullerRetChk.udiStatus);
}
}
}

}break;case 33:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRotRemoteCtrl=1);

(eStatus=1);

}

}break;case 34:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRotRemoteCtrl=0);

(eStatus=1);

}

}break;case 35:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRotRemoteCtrl=0);
(bRotAtHome=1);

(eStatus=1);

}

}break;case 36:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRotRemoteCtrl=1);
(bRotAtRemote=1);

(eStatus=1);

}

}break;case 37:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRotRemoteCtrl=0);

(fbRotHomeChk.bExtSen=((*(p_bRotHomeSen))));
(fbRotHomeChk.bRetSen=((*(p_bRotRemoteSen))));
(fbRotHomeChk.bExtSafety=((*(p_bRotHomeSafetySen))));
(fbRotHomeChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRotHomeChk);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)0))){
(bRotAtHome=1);
(eStatus=1);
}else if((((unsigned long)fbRotHomeChk.udiStatus<(unsigned long)65534))){
(bRotRemoteCtrl=1);

(eStatus=3);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1503))){
(udiStatus=10058);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1506))){
(udiStatus=10059);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1507))){
(udiStatus=10060);
}else{
(udiStatus=fbRotHomeChk.udiStatus);
}
}
}

}break;case 38:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRotRemoteCtrl=1);

(fbRotRemoteChk.bExtSen=((*(p_bRotHomeSen))));
(fbRotRemoteChk.bRetSen=((*(p_bRotRemoteSen))));
(fbRotRemoteChk.bRetSafety=((*(p_bRotRemoteSafetySen))));
(fbRotRemoteChk.bEn=1);;fbPneuExtRetSenRetChk(&fbRotRemoteChk);

if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)0))){
(bRotAtRemote=1);
(eStatus=1);
}else if((((unsigned long)fbRotRemoteChk.udiStatus<(unsigned long)65534))){
(bRotRemoteCtrl=0);

(eStatus=3);

if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)1504))){
(udiStatus=10061);
}else if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)1505))){
(udiStatus=10062);
}else if((((unsigned long)fbRotRemoteChk.udiStatus==(unsigned long)1508))){
(udiStatus=10063);
}else{
(udiStatus=fbRotRemoteChk.udiStatus);
}
}
}

}break;case 39:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRejectUpCtrl=1);
(bRejectDownCtrl=1);

(eStatus=1);

}

}break;case 40:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=1);

}

}break;case 41:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRejectUpCtrl=1);
(bRejectDownCtrl=0);
(bRejectAtUp=1);

(eStatus=1);

}

}break;case 42:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRejectUpCtrl=0);
(bRejectDownCtrl=1);
(bRejectAtDown=1);

(eStatus=1);

}

}break;case 43:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRejectUpCtrl=1);
(bRejectDownCtrl=0);

(fbRejectUpChk.bExtSen=((*(p_bRejectUpSen))));
(fbRejectUpChk.bRetSen=((*(p_bRejectDownSen))));
(fbRejectUpChk.bExtSafety=((*(p_bRejectUpSafetySen))));
(fbRejectUpChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRejectUpChk);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)0))){
(bRejectAtUp=1);
(eStatus=1);
}else if((((unsigned long)fbRejectUpChk.udiStatus<(unsigned long)65534))){
(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=3);

if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1503))){
(udiStatus=10073);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1506))){
(udiStatus=10074);
}else if((((unsigned long)fbRejectUpChk.udiStatus==(unsigned long)1507))){
(udiStatus=10075);
}else{
(udiStatus=fbRejectUpChk.udiStatus);
}
}
}

}break;case 44:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);


(bRejectUpCtrl=0);
(bRejectDownCtrl=1);

(fbRejectDownChk.bExtSen=((*(p_bRejectUpSen))));
(fbRejectDownChk.bRetSen=((*(p_bRejectDownSen))));
(fbRejectDownChk.bRetSafety=((*(p_bRejectDownSafetySen))));
(fbRejectDownChk.bEn=1);;fbPneuExtRetSenRetChk(&fbRejectDownChk);

if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)0))){
(bRejectAtDown=1);
(eStatus=1);
}else if((((unsigned long)fbRejectDownChk.udiStatus<(unsigned long)65534))){
(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

(eStatus=3);

if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)1504))){
(udiStatus=10076);
}else if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)1505))){
(udiStatus=10077);
}else if((((unsigned long)fbRejectDownChk.udiStatus==(unsigned long)1508))){
(udiStatus=10078);
}else{
(udiStatus=fbRejectDownChk.udiStatus);
}
}
}

}break;case 45:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbStop.bEn=1);;fbConvMtrOff(&fbStop);

(bMtrSigOnOrLToR=fbStop.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbStop.bMtrDirOrRToL);

if((((unsigned long)fbStop.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbStop.udiStatus<(unsigned long)65534))){
(udiStatus=fbStop.udiStatus);
(eStatus=3);
}

}

}break;case 46:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbStop.bEn=1);;fbConvMtrOff(&fbStop);

(bMtrSigOnOrLToR=fbStop.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbStop.bMtrDirOrRToL);


(bPshrExtCtrl=0);

(fbPshrRetChk.bExtSen=((*(p_bPshrExtSen))));
(fbPshrRetChk.bRetSen=((*(p_bPshrRetSen))));
(fbPshrRetChk.bRetSafety=((*(p_bPshrRetSafetySen))));
(fbPshrRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPshrRetChk);

if(((((unsigned long)fbStop.udiStatus==(unsigned long)0))&(((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)0)))){
(bPshrRetracted=1);
(eStatus=1);
}else if(((((unsigned long)fbStop.udiStatus<(unsigned long)65534))&(((unsigned long)fbStop.udiStatus>(unsigned long)0)))){
(udiStatus=fbStop.udiStatus);
(eStatus=3);
}else if(((((unsigned long)fbPshrRetChk.udiStatus<(unsigned long)65534))&(((unsigned long)fbPshrRetChk.udiStatus>(unsigned long)0)))){
(bPshrExtCtrl=1);

(eStatus=3);

if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10064);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10065);
}else if((((unsigned long)fbPshrRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10066);
}else{
(udiStatus=fbPshrRetChk.udiStatus);
}
}

}

}break;case 47:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbStop.bEn=1);;fbConvMtrOff(&fbStop);

(bMtrSigOnOrLToR=fbStop.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbStop.bMtrDirOrRToL);

if(((((unsigned long)fbStop.udiStatus<(unsigned long)65534))&(((unsigned long)fbStop.udiStatus>(unsigned long)0)))){
(udiStatus=fbStop.udiStatus);
(eStatus=3);
}

switch(usiStep){
case 0:{
(bRotRemoteCtrl=0);

(fbRotHomeChk.bExtSen=((*(p_bRotHomeSen))));
(fbRotHomeChk.bRetSen=((*(p_bRotRemoteSen))));
(fbRotHomeChk.bExtSafety=((*(p_bRotHomeSafetySen))));
(fbRotHomeChk.bEn=1);;fbPneuExtRetSenExtChk(&fbRotHomeChk);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)0))){
(bRotAtHome=1);
(usiStep=1);
}else if((((unsigned long)fbRotHomeChk.udiStatus<(unsigned long)65534))){
(bRotRemoteCtrl=1);

(eStatus=3);

if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1503))){
(udiStatus=10067);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1506))){
(udiStatus=10068);
}else if((((unsigned long)fbRotHomeChk.udiStatus==(unsigned long)1507))){
(udiStatus=10069);
}else{
(udiStatus=fbRotHomeChk.udiStatus);
}
}

}break;case 1:{
(bPullerExtCtrl=0);
(bPullerRetCtrl=1);

(fbPullerRetChk.bExtSen=((*(p_bPullerExtSen))));
(fbPullerRetChk.bRetSen=((*(p_bPullerRetSen))));
(fbPullerRetChk.bRetSafety=((*(p_bPullerRetSafetySen))));
(fbPullerRetChk.bEn=1);;fbPneuExtRetSenRetChk(&fbPullerRetChk);

if(((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)0))&(((unsigned long)fbStop.udiStatus==(unsigned long)0)))){
(bPullerRetracted=1);
(eStatus=1);
}else if(((((unsigned long)fbPullerRetChk.udiStatus<(unsigned long)65534))&(((unsigned long)fbPullerRetChk.udiStatus>(unsigned long)0)))){
(bPullerExtCtrl=1);
(bPullerRetCtrl=0);

(eStatus=3);

if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1504))){
(udiStatus=10070);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1505))){
(udiStatus=10071);
}else if((((unsigned long)fbPullerRetChk.udiStatus==(unsigned long)1508))){
(udiStatus=10072);
}else{
(udiStatus=fbPullerRetChk.udiStatus);
}
}

}break;}

}

}break;case 48:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbStop.bEn=1);;fbConvMtrOff(&fbStop);

(bMtrSigOnOrLToR=fbStop.bMtrSigOnOrLToR);
(bMtrDirOrRToL=fbStop.bMtrDirOrRToL);


(bRejectUpCtrl=0);
(bRejectDownCtrl=0);

if((((unsigned long)fbStop.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbStop.udiStatus<(unsigned long)65534))){
(udiStatus=fbStop.udiStatus);
(eStatus=3);
}

}

}break;case 49:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrSigOnOrLToR=1);
(eStatus=1);

}

}break;case 50:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrDirOrRToL=1);
(eStatus=1);

}

}break;case 51:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrSigOnOrLToR=0);
(eStatus=1);

}

}break;case 52:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrDirOrRToL=0);
(eStatus=1);

}

}break;case 53:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrSigOnOrLToR=1);
(bMtrDirOrRToL=1);
(eStatus=1);

}

}break;case 54:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bMtrSigOnOrLToR=0);
(bMtrDirOrRToL=0);
(eStatus=1);

}

}break;}

}imp10_case2_54:imp10_endcase2_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if((((unsigned long)(unsigned char)((*(p_bPshrExtSen)))==(unsigned long)(unsigned char)0))){
(bPshrExtended=0);
}

if((((unsigned long)(unsigned char)((*(p_bPshrRetSen)))==(unsigned long)(unsigned char)0))){
(bPshrRetracted=0);
}

if((((unsigned long)(unsigned char)((*(p_bPullerExtSen)))==(unsigned long)(unsigned char)0))){
(bPullerExtended=0);
}

if((((unsigned long)(unsigned char)((*(p_bPullerRetSen)))==(unsigned long)(unsigned char)0))){
(bPullerRetracted=0);
}

if((((unsigned long)(unsigned char)((*(p_bRotHomeSen)))==(unsigned long)(unsigned char)0))){
(bRotAtHome=0);
}

if((((unsigned long)(unsigned char)((*(p_bRotRemoteSen)))==(unsigned long)(unsigned char)0))){
(bRotAtRemote=0);
}

if((((unsigned long)(unsigned char)((*(p_bRejectUpSen)))==(unsigned long)(unsigned char)0))){
(bRejectAtUp=0);
}

if((((unsigned long)(unsigned char)((*(p_bRejectDownSen)))==(unsigned long)(unsigned char)0))){
(bRejectAtDown=0);
}

}imp3_else7_0:imp3_end7_0:;}
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sConvProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData.udiCode>(unsigned long)10199)))){
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
#line 41 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Conv/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Conv/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Conv/Conv/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Conv/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
