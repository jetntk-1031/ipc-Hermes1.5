#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/Hermes/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.st"
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
__AS__Action__Act_Background_Route();

__AS__Action__Act_Link();
__AS__Action__Act_Background_Action();
__AS__Action__Act_Background();
__AS__Action__Act_Main();
__AS__Action__Act_Background_Command();

}else{
if((((signed long)eStat!=(signed long)0))){
(eStatus=1);
}else{
(eStatus=0);
}
}

__AS__Action__Act_Alarm();

}

}imp15_end0_0:;}
#line 45 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);


(p_bLinkUSHermesTransporting=p_USHermesTransporting);
(p_eLinkMcParamUSComm2Mod=p_McParamUSComm2Mod);




(p_bLinkOpsInvertStepInitDone=p_OpsInvertStepInitDone);
(p_bLinkOpsInvertStepEntToEnd=p_OpsInvertStepEntToEnd);
(p_bLinkOpsInvertStepEntToInOff=p_OpsInvertStepEntToInOff);
(p_bLinkOpsInvertStepExitBrd=p_OpsInvertStepExitBrd);
(p_bLinkConvHvBrd=p_OpsInvertHvBrd);
(p_bLinkOpsInvertStepInvert=p_OpsInvertStepInvert);




(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamHermesPrep);
(pa_tyUSParam=p_UIHermesUSParamWr);
(pa_tyDSParam=p_UIHermesDSParamWr);
(p_tySvyParam=p_UIHermesSvyParamWr);
(p_tyRmtSetConfiguration=p_RmtHermesSetConfiguration);
(p_tySvySetConfiguration=p_SvyHermesSetConfiguration);








(p_bRmtPrep=p_NtParamHermesRmtPrep);
(p_bRmtEn=p_McParamHermesRmtEn);
(p_bSvyPrep=p_NtParamHermesSvyPrep);
(p_bSvyEn=p_McParamHermesSvyEn);
(p_sRetainFileName1=((unsigned long)(&sRetainFileName1)));
(p_sRetainFileName2=((unsigned long)(&sRetainFileName2)));
(p_sRetainFileName3=((unsigned long)(&sRetainFileName3)));
(p_sRetainFileName4=((unsigned long)(&sRetainFileName4)));
(p_udiRetainDataAddr1=((unsigned long)(&udiRetainDataAddr1)));
(p_udiRetainDataLen1=((unsigned long)(&udiRetainDataLen1)));
(p_udiRetainDataAddr2=((unsigned long)(&udiRetainDataAddr2)));
(p_udiRetainDataLen2=((unsigned long)(&udiRetainDataLen2)));
(p_udiRetainDataAddr3=((unsigned long)(&udiRetainDataAddr3)));
(p_udiRetainDataLen3=((unsigned long)(&udiRetainDataLen3)));
(p_udiRetainDataAddr4=((unsigned long)(&udiRetainDataAddr4)));
(p_udiRetainDataLen4=((unsigned long)(&udiRetainDataLen4)));

(p_sConfigFileName=p_NtParamHermesConfigFileNm);
(p_sProgNm=p_NtParamHermesProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_bRmtHermesWriteConfig=p_RmtHermesWriteConfig);
(p_bSvyHermesWriteConfig=p_SvyHermesWriteConfig);
(p_bUISaveHMIConfigure=p_UISaveHMIConfigure);
(p_bUISaveHMISvyConfig=p_UISaveHMISvyConfig);
(p_sMcId=p_McParamMcNm);


(p_bRmtFoundIndexUS1=p_RmtHermesFoundIndexUS1);
(p_bRmtFoundIndexUS2=p_RmtHermesFoundIndexUS2);
(p_bRmtFoundIndexUS3=p_RmtHermesFoundIndexUS3);
(p_bRmtFoundIndexUS4=p_RmtHermesFoundIndexUS4);
(p_bRmtFoundIndexDS1=p_RmtHermesFoundIndexDS1);
(p_bRmtFoundIndexDS2=p_RmtHermesFoundIndexDS2);
(p_bRmtFoundIndexDS3=p_RmtHermesFoundIndexDS3);
(p_bRmtFoundIndexDS4=p_RmtHermesFoundIndexDS4);
(p_udiRmtIndexUS1=p_RmtHermesIndexUS1);
(p_udiRmtIndexUS2=p_RmtHermesIndexUS2);
(p_udiRmtIndexUS3=p_RmtHermesIndexUS3);
(p_udiRmtIndexUS4=p_RmtHermesIndexUS4);
(p_udiRmtIndexDS1=p_RmtHermesIndexDS1);
(p_udiRmtIndexDS2=p_RmtHermesIndexDS2);
(p_udiRmtIndexDS3=p_RmtHermesIndexDS3);
(p_udiRmtIndexDS4=p_RmtHermesIndexDS4);

(p_bSvyFoundIndexUS1=p_SvyHermesFoundIndexUS1);
(p_bSvyFoundIndexUS2=p_SvyHermesFoundIndexUS2);
(p_bSvyFoundIndexUS3=p_SvyHermesFoundIndexUS3);
(p_bSvyFoundIndexUS4=p_SvyHermesFoundIndexUS4);
(p_bSvyFoundIndexDS1=p_SvyHermesFoundIndexDS1);
(p_bSvyFoundIndexDS2=p_SvyHermesFoundIndexDS2);
(p_bSvyFoundIndexDS3=p_SvyHermesFoundIndexDS3);
(p_bSvyFoundIndexDS4=p_SvyHermesFoundIndexDS4);
(p_udiSvyIndexUS1=p_SvyHermesIndexUS1);
(p_udiSvyIndexUS2=p_SvyHermesIndexUS2);
(p_udiSvyIndexUS3=p_SvyHermesIndexUS3);
(p_udiSvyIndexUS4=p_SvyHermesIndexUS4);
(p_udiSvyIndexDS1=p_SvyHermesIndexDS1);
(p_udiSvyIndexDS2=p_SvyHermesIndexDS2);
(p_udiSvyIndexDS3=p_SvyHermesIndexDS3);
(p_udiSvyIndexDS4=p_SvyHermesIndexDS4);






(p_bNTParamUnlockCovPrep=p_NTParamUnlockCovPrep);
(p_bNTParamMachineSafetySig=p_NTParamMachineSafetySig);



(p_bOpsInvertStepInitDone=p_OpsInvertStepInitDone);
(p_bOpsInvertHvBrd=p_OpsInvertHvBrd);



(pa_usiMacAddr=p_HWInfoMacAddr);
(p_tyDTStructure=p_TimeCurrDTStruct);
}}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupHermesAct);
}else if(((*(p_bSvyHermesWriteConfig)))){
(p_eAct=p_SvyHermesAct);
}else if(((*(p_bRmtHermesWriteConfig)))){
(p_eAct=p_RmtHermesAct);
}else if((((*(p_bUISaveHMIConfigure)))|((*(p_bUISaveHMISvyConfig))))){
(p_eAct=p_UIHermesAct);
}

}imp11_else0_3:imp11_end0_0:;}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Link.st"
static void __AS__Action__Act_Link(void){
{


if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)0))){



if(((((unsigned long)(unsigned char)((*(p_bLinkOpsInvertStepInitDone)))==(unsigned long)(unsigned char)1))&~Edge0001000000&1?((Edge0001000000=(((unsigned long)(unsigned char)((*(p_bLinkOpsInvertStepInitDone)))==(unsigned long)(unsigned char)1))&1),1):((Edge0001000000=(((unsigned long)(unsigned char)((*(p_bLinkOpsInvertStepInitDone)))==(unsigned long)(unsigned char)1))&1),0))){

if((((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)0))){

(a_tyHermesBrdAvlData[1].bNewBrdAvl=1);
(bHermesWriteRetainLane1=1);
}

}


if(((((*(p_bLinkConvHvBrd)))&~Edge0001000001&1?((Edge0001000001=((*(p_bLinkConvHvBrd)))&1),1):((Edge0001000001=((*(p_bLinkConvHvBrd)))&1),0))&((((unsigned long)(unsigned char)((*(p_bLinkOpsInvertStepEntToEnd)))==(unsigned long)(unsigned char)1))|((*(p_bLinkOpsInvertStepEntToInOff)))))){

if(((*(p_bLinkUSHermesTransporting)))){

{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl; unsigned char* zzRValue=(unsigned char*)((*(pa_tyLinkXMLTableDataBrdAvl))); for(zzIndex=0; zzIndex<52260l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(a_tyHermesBrdAvlData[1].iXMLTableDataBrdAvlTtlIdx=((*(p_iLinkXMLTableDataBrdAvlTtlIdx))));
(a_tyHermesBrdAvlData[1].bNewBrdAvl=0);

(bHermesWriteRetainLane1=1);

}else{

(a_tyHermesBrdAvlData[1].bNewBrdAvl=1);

(bHermesWriteRetainLane1=1);


(tyHermesBoardAvailableAttribAddr.udiProductTypeId=p_ProdRcpCurrRcp0Nm);
(tyHermesBoardAvailableAttribAddr.udiWidth=p_ProdRcpCurrRcp0Width);
fHermesGenerateBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[1])),&tyHermesBoardAvailableAttribAddr);
}

}


if(((~((*(p_bLinkConvHvBrd)))&Edge0001000002&1?((Edge0001000002=((*(p_bLinkConvHvBrd)))&1),1):((Edge0001000002=((*(p_bLinkConvHvBrd)))&1),0))&(((unsigned long)(unsigned char)((*(p_bLinkOpsInvertStepInitDone)))==(unsigned long)(unsigned char)1)))){

(a_tyHermesBrdAvlData[1].bNewBrdAvl=1);

(bHermesWriteRetainLane1=1);
}


if(((((unsigned long)(unsigned char)bHermesWriteRetainLane1==(unsigned long)(unsigned char)1))&(((signed long)eStatus!=(signed long)2)))){
((*(p_eAct))=5);

if(((((signed long)eStat==(signed long)5))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bHermesWriteRetainLane1=0);
}
}

}


if((~((*(p_bLinkOpsInvertStepInvert)))&Edge0001000003&1?((Edge0001000003=((*(p_bLinkOpsInvertStepInvert)))&1),1):((Edge0001000003=((*(p_bLinkOpsInvertStepInvert)))&1),0))){
for((i=0);i<=200;i+=1){
if(((__AS__STRING_CMP(a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sTitle,"AT")==0))){
fConvertToLower_254(((unsigned long)(&sLowerCase)),a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sValue);

if(((__AS__STRING_CMP(sLowerCase,"flippedboard")==0))){
if(((__AS__STRING_CMP(a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sTitle,"AV")==0))){
if((((signed long)((*(p_tyUSHermestyBoardAvailable)).tyData.eFlippedBoard)==(signed long)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sValue; plcstring* zzRValue=(plcstring*)"2"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((signed long)((*(p_tyUSHermestyBoardAvailable)).tyData.eFlippedBoard)==(signed long)2))){
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sValue; plcstring* zzRValue=(plcstring*)"1"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sValue; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}


goto imp10_endfor9_0;

}

}

}
}imp10_endfor9_0:;
}



}imp10_else8_0:imp10_end8_0:;}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp14_end0_0:;}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(pa_tyUSParam=((unsigned long)(&a_tyUSParam)));
(pa_tyDSParam=((unsigned long)(&a_tyDSParam)));
(p_tyRmtParam=((unsigned long)(&tyRmtParam)));
(p_tySvyParam=((unsigned long)(&tySvyParam)));
(p_tyRmtSetConfiguration=((unsigned long)(&tyRmtSetConfiguration)));
(p_tySvySetConfiguration=((unsigned long)(&tySvySetConfiguration)));

(p_bRmtPrep=((unsigned long)(&bRmtPrep)));
(p_bRmtEn=((unsigned long)(&bRmtEn)));
(p_bSvyPrep=((unsigned long)(&bSvyPrep)));
(p_bSvyEn=((unsigned long)(&bSvyEn)));
(p_sRetainFileName1=((unsigned long)(&sRetainFileName1)));
(p_sRetainFileName2=((unsigned long)(&sRetainFileName2)));
(p_sRetainFileName3=((unsigned long)(&sRetainFileName3)));
(p_sRetainFileName4=((unsigned long)(&sRetainFileName4)));
(p_udiRetainDataAddr1=((unsigned long)(&udiRetainDataAddr1)));
(p_udiRetainDataLen1=((unsigned long)(&udiRetainDataLen1)));
(p_udiRetainDataAddr2=((unsigned long)(&udiRetainDataAddr2)));
(p_udiRetainDataLen2=((unsigned long)(&udiRetainDataLen2)));
(p_udiRetainDataAddr3=((unsigned long)(&udiRetainDataAddr3)));
(p_udiRetainDataLen3=((unsigned long)(&udiRetainDataLen3)));
(p_udiRetainDataAddr4=((unsigned long)(&udiRetainDataAddr4)));
(p_udiRetainDataLen4=((unsigned long)(&udiRetainDataLen4)));

(p_sConfigFileName=((unsigned long)(&sConfigFileName)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_bRmtHermesWriteConfig=((unsigned long)(&bRmtHermesWriteConfig)));
(p_bSvyHermesWriteConfig=((unsigned long)(&bSvyHermesWriteConfig)));
(p_bUISaveHMIConfigure=((unsigned long)(&bUISaveHMIConfigure)));
(p_bUISaveHMISvyConfig=((unsigned long)(&bUISaveHMISvyConfig)));
(p_sMcId=((unsigned long)(&sMcId)));

(p_bRmtFoundIndexUS1=((unsigned long)(&bRmtFoundIndexUS1)));
(p_bRmtFoundIndexUS2=((unsigned long)(&bRmtFoundIndexUS2)));
(p_bRmtFoundIndexUS3=((unsigned long)(&bRmtFoundIndexUS3)));
(p_bRmtFoundIndexUS4=((unsigned long)(&bRmtFoundIndexUS4)));
(p_bRmtFoundIndexDS1=((unsigned long)(&bRmtFoundIndexDS1)));
(p_bRmtFoundIndexDS2=((unsigned long)(&bRmtFoundIndexDS2)));
(p_bRmtFoundIndexDS3=((unsigned long)(&bRmtFoundIndexDS3)));
(p_bRmtFoundIndexDS4=((unsigned long)(&bRmtFoundIndexDS4)));
(p_udiRmtIndexUS1=((unsigned long)(&udiRmtIndexUS1)));
(p_udiRmtIndexUS2=((unsigned long)(&udiRmtIndexUS2)));
(p_udiRmtIndexUS3=((unsigned long)(&udiRmtIndexUS3)));
(p_udiRmtIndexUS4=((unsigned long)(&udiRmtIndexUS4)));
(p_udiRmtIndexDS1=((unsigned long)(&udiRmtIndexDS1)));
(p_udiRmtIndexDS2=((unsigned long)(&udiRmtIndexDS2)));
(p_udiRmtIndexDS3=((unsigned long)(&udiRmtIndexDS3)));
(p_udiRmtIndexDS4=((unsigned long)(&udiRmtIndexDS4)));

(p_bSvyFoundIndexUS1=((unsigned long)(&bSvyFoundIndexUS1)));
(p_bSvyFoundIndexUS2=((unsigned long)(&bSvyFoundIndexUS2)));
(p_bSvyFoundIndexUS3=((unsigned long)(&bSvyFoundIndexUS3)));
(p_bSvyFoundIndexUS4=((unsigned long)(&bSvyFoundIndexUS4)));
(p_bSvyFoundIndexDS1=((unsigned long)(&bSvyFoundIndexDS1)));
(p_bSvyFoundIndexDS2=((unsigned long)(&bSvyFoundIndexDS2)));
(p_bSvyFoundIndexDS3=((unsigned long)(&bSvyFoundIndexDS3)));
(p_bSvyFoundIndexDS4=((unsigned long)(&bSvyFoundIndexDS4)));

(p_udiSvyIndexUS1=((unsigned long)(&udiSvyIndexUS1)));
(p_udiSvyIndexUS2=((unsigned long)(&udiSvyIndexUS2)));
(p_udiSvyIndexUS3=((unsigned long)(&udiSvyIndexUS3)));
(p_udiSvyIndexUS4=((unsigned long)(&udiSvyIndexUS4)));
(p_udiSvyIndexDS1=((unsigned long)(&udiSvyIndexDS1)));
(p_udiSvyIndexDS2=((unsigned long)(&udiSvyIndexDS2)));
(p_udiSvyIndexDS3=((unsigned long)(&udiSvyIndexDS3)));
(p_udiSvyIndexDS4=((unsigned long)(&udiSvyIndexDS4)));

(p_bReverseReceiveRoute=((unsigned long)(&bReverseReceiveRoute)));
(p_bReverseSentRoute=((unsigned long)(&bReverseSendRoute)));

(p_bManualRmvRoute=((unsigned long)(&bManualRmvRoute)));
(p_bReturnRoute=((unsigned long)(&bReturnRoute)));
(p_bNomRouteEn=((unsigned long)(&bNomRouteEn)));
}}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{


((*(p_udiRetainDataAddr1))=((unsigned long)(&a_tyHermesBrdAvlData)));
((*(p_udiRetainDataLen1))=365848);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate1.sDevice; plcstring* zzRValue=(plcstring*)"F"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate1.sDirName; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate1.bEn=0);;fbDirCreate(&fbDirCreate1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate2.sDevice; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate2.sDirName; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate2.bEn=0);;fbDirCreate(&fbDirCreate2);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate3.sDevice; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate3.sDirName; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate3.bEn=0);;fbDirCreate(&fbDirCreate3);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate4.sDevice; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate4.sDirName; plcstring* zzRValue=(plcstring*)"MachineParameter"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate4.bEn=0);;fbDirCreate(&fbDirCreate4);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sDevice; plcstring* zzRValue=(plcstring*)"McParam"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sFile; plcstring* zzRValue=(plcstring*)((*(p_sConfigFileName))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead1.udiOffset=0);
(fbFileRead1.p_Dest=((unsigned long)(&tyCurrConfiguration)));
(fbFileRead1.udiLen=1720);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sDevice; plcstring* zzRValue=(plcstring*)"McParam"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sFile; plcstring* zzRValue=(plcstring*)((*(p_sConfigFileName))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite1.udiOffset=0);
(fbFileWrite1.p_Src=((unsigned long)(&tyConfigurationWr)));
(fbFileWrite1.udiLen=1720);
(fbFileWrite1.udiOption=0);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead2.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead2.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName1))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead2.udiOffset=0);
(fbFileRead2.p_Dest=((*(p_udiRetainDataAddr1))));
(fbFileRead2.udiLen=((*(p_udiRetainDataLen1))));
(fbFileRead2.bEn=0);;fbFileFullRead(&fbFileRead2);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite2.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite2.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName1))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite2.udiOffset=0);
(fbFileWrite2.p_Src=((*(p_udiRetainDataAddr1))));
(fbFileWrite2.udiLen=((*(p_udiRetainDataLen1))));
(fbFileWrite2.udiOption=0);
(fbFileWrite2.bEn=0);;fbFileFullWrite(&fbFileWrite2);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead3.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead3.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName2))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead3.udiOffset=0);
(fbFileRead3.p_Dest=((*(p_udiRetainDataAddr2))));
(fbFileRead3.udiLen=((*(p_udiRetainDataLen2))));
(fbFileRead3.bEn=0);;fbFileFullRead(&fbFileRead3);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite3.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite3.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName2))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite3.udiOffset=0);
(fbFileWrite3.udiOption=0);
(fbFileWrite3.p_Src=((*(p_udiRetainDataAddr2))));
(fbFileWrite3.udiLen=((*(p_udiRetainDataLen2))));
(fbFileWrite3.bEn=0);;fbFileFullWrite(&fbFileWrite3);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead4.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead4.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName3))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead4.udiOffset=0);
(fbFileRead4.p_Dest=((*(p_udiRetainDataAddr3))));
(fbFileRead4.udiLen=((*(p_udiRetainDataLen3))));
(fbFileRead4.bEn=0);;fbFileFullRead(&fbFileRead4);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite4.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite4.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName3))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite4.udiOffset=0);
(fbFileWrite4.udiOption=0);
(fbFileWrite4.p_Src=((*(p_udiRetainDataAddr3))));
(fbFileWrite4.udiLen=((*(p_udiRetainDataLen3))));
(fbFileWrite4.bEn=0);;fbFileFullWrite(&fbFileWrite4);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead5.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead5.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName4))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead5.udiOffset=0);
(fbFileRead5.p_Dest=((*(p_udiRetainDataAddr4))));
(fbFileRead5.udiLen=((*(p_udiRetainDataLen4))));
(fbFileRead5.bEn=0);;fbFileFullRead(&fbFileRead5);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite5.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite5.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName4))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite5.udiOffset=0);
(fbFileWrite5.udiOption=0);
(fbFileWrite5.p_Src=((*(p_udiRetainDataAddr4))));
(fbFileWrite5.udiLen=((*(p_udiRetainDataLen4))));
(fbFileWrite5.bEn=0);;fbFileFullWrite(&fbFileWrite5);





__AS__MEMSET(((unsigned long)(&a_tyCommandProcessList)),0,112);
(usiProcessCmdBffr=0);
(usiUSIdent=fHermesAddOneCommandGate(1,p_USHermesCommandParam,((unsigned long)(&tyCurrConfiguration.a_tyUSParam[0].sUpstreamInterfaceId)),p_McParamUSCommMod,((unsigned long)(&a_tyCommandProcessList)),((unsigned long)(&usiProcessCmdBffr))));
(usiDSIdent=fHermesAddOneCommandGate(0,p_DSHermesCommandParam,((unsigned long)(&tyCurrConfiguration.a_tyDSParam[0].sDownstreamInterfaceId)),p_McParamDSCommMod,((unsigned long)(&a_tyCommandProcessList)),((unsigned long)(&usiProcessCmdBffr))));
(usiUSIdent2=fHermesAddOneCommandGate(1,p_USHermes2CommandParam,((unsigned long)(&tyCurrConfiguration.a_tyUSParam[1].sUpstreamInterfaceId)),p_McParamUSComm2Mod,((unsigned long)(&a_tyCommandProcessList)),((unsigned long)(&usiProcessCmdBffr))));


(bCmdInitialCompl=1);



(p_HermesUSCmdFeaturePause=((unsigned long)(&tyCurrConfiguration.a_tyUSParam[0].bFeatureCommand)));
(p_HermesUSCmdPause=((unsigned long)(&a_tyCommandPause[usiUSIdent])));
(p_HermesDSCmdFeaturePause=((unsigned long)(&tyCurrConfiguration.a_tyDSParam[0].bFeatureCommand)));
(p_HermesDSCmdPause=((unsigned long)(&a_tyCommandPause[usiDSIdent])));
(a_tyCommandPause[usiUSIdent].bFeatureRequestFrom=((*(p_bNTParamMachineSafetySig))));
(a_tyCommandPause[usiUSIdent].bFeatureRequestTo=((*(p_bNTParamUnlockCovPrep))));

(a_tyCommandPause[usiDSIdent].bFeatureRequestFrom=((*(p_bNTParamMachineSafetySig))));
(a_tyCommandPause[usiDSIdent].bFeatureRequestTo=((*(p_bNTParamUnlockCovPrep))));









(usiZoneSupported=3);

(tbActionSupportedByZone[1-1][1-1]=1);
(tbActionSupportedByZone[1-1][2-1]=1);

(tbActionSupportedByZone[2-1][4-1]=1);
(tbActionSupportedByZone[2-1][2-1]=1);

(tbActionSupportedByZone[3-1][3-1]=1);
(tbActionSupportedByZone[3-1][1-1]=1);


(tyHermesBoardAvailableAttribAddr.udiMacAddrForGUID=p_HWInfoMacAddr);
(tyHermesBoardAvailableAttribAddr.udiDateTimeForGUID=p_TimeCurrDTStruct);
(tyHermesBoardAvailableAttribAddr.udiBoardIdCreatedBy=p_McParamMcNm);





}}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Action.st"
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
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbDirCreate1.bEn=0);;fbDirCreate(&fbDirCreate1);
(fbDirCreate2.bEn=0);;fbDirCreate(&fbDirCreate2);
(fbDirCreate3.bEn=0);;fbDirCreate(&fbDirCreate3);
(fbDirCreate4.bEn=0);;fbDirCreate(&fbDirCreate4);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);
(fbFileRead2.bEn=0);;fbFileFullRead(&fbFileRead2);
(fbFileWrite2.bEn=0);;fbFileFullWrite(&fbFileWrite2);
(fbFileRead3.bEn=0);;fbFileFullRead(&fbFileRead3);
(fbFileWrite3.bEn=0);;fbFileFullWrite(&fbFileWrite3);
(fbFileRead4.bEn=0);;fbFileFullRead(&fbFileRead4);
(fbFileWrite4.bEn=0);;fbFileFullWrite(&fbFileWrite4);
(fbFileRead5.bEn=0);;fbFileFullRead(&fbFileRead5);
(fbFileWrite5.bEn=0);;fbFileFullWrite(&fbFileWrite5);
(usiStep=0);
(bFileNotFound=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
(eStatus=0);

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

switch(usiStep){
case 0:{
(fbDirCreate1.bEn=1);;fbDirCreate(&fbDirCreate1);
if((((unsigned long)fbDirCreate1.udiStatus==(unsigned long)0))){
(usiStep=1);
}else if((((unsigned long)fbDirCreate1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbDirCreate1.udiStatus==(unsigned long)1908))){
(udiStatus=10000);
}else{
(udiStatus=fbDirCreate1.udiStatus);
}
}

}break;case 1:{
(fbDirCreate2.bEn=1);;fbDirCreate(&fbDirCreate2);
if((((unsigned long)fbDirCreate2.udiStatus==(unsigned long)0))){
(usiStep=2);
}else if((((unsigned long)fbDirCreate2.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbDirCreate2.udiStatus==(unsigned long)1908))){
(udiStatus=10001);
}else{
(udiStatus=fbDirCreate2.udiStatus);
}
}

}break;case 2:{
(fbDirCreate3.bEn=1);;fbDirCreate(&fbDirCreate3);
if((((unsigned long)fbDirCreate3.udiStatus==(unsigned long)0))){
(usiStep=3);
}else if((((unsigned long)fbDirCreate3.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbDirCreate3.udiStatus==(unsigned long)1908))){
(udiStatus=10010);
}else{
(udiStatus=fbDirCreate3.udiStatus);
}
}

}break;case 3:{
(fbDirCreate4.bEn=1);;fbDirCreate(&fbDirCreate4);
if((((unsigned long)fbDirCreate4.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbDirCreate4.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbDirCreate4.udiStatus==(unsigned long)1908))){
(udiStatus=10011);
}else{
(udiStatus=fbDirCreate4.udiStatus);
}
}

}break;}

}

}break;case 11:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileRead2.bEn=1);;fbFileFullRead(&fbFileRead2);

if((((unsigned long)fbFileRead2.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileRead2.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead2.udiStatus==(unsigned long)1900))){
(udiStatus=10002);
}else if((((unsigned long)fbFileRead2.udiStatus==(unsigned long)1902))){
(udiStatus=10003);
}else if((((unsigned long)fbFileRead2.udiStatus==(unsigned long)1904))){
(udiStatus=10004);
}else if((((unsigned long)fbFileRead2.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead2.udiStatus);
}
}

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileWrite2.bEn=1);;fbFileFullWrite(&fbFileWrite2);

if((((unsigned long)fbFileWrite2.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite2.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite2.udiStatus==(unsigned long)1900))){
(udiStatus=10005);
}else if((((unsigned long)fbFileWrite2.udiStatus==(unsigned long)1901))){
(udiStatus=10006);
}else if((((unsigned long)fbFileWrite2.udiStatus==(unsigned long)1903))){
(udiStatus=10007);
}else if((((unsigned long)fbFileWrite2.udiStatus==(unsigned long)1904))){
(udiStatus=10008);
}else if((((unsigned long)fbFileWrite2.udiStatus==(unsigned long)1914))){
(udiStatus=10009);
}else{
(udiStatus=fbFileWrite2.udiStatus);
}
}

}

}break;case 12:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileRead3.bEn=1);;fbFileFullRead(&fbFileRead3);

if((((unsigned long)fbFileRead3.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileRead3.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead3.udiStatus==(unsigned long)1900))){
(udiStatus=10032);
}else if((((unsigned long)fbFileRead3.udiStatus==(unsigned long)1902))){
(udiStatus=10033);
}else if((((unsigned long)fbFileRead3.udiStatus==(unsigned long)1904))){
(udiStatus=10034);
}else if((((unsigned long)fbFileRead3.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead3.udiStatus);
}
}

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileWrite3.bEn=1);;fbFileFullWrite(&fbFileWrite3);

if((((unsigned long)fbFileWrite3.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite3.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite3.udiStatus==(unsigned long)1900))){
(udiStatus=10035);
}else if((((unsigned long)fbFileWrite3.udiStatus==(unsigned long)1901))){
(udiStatus=10036);
}else if((((unsigned long)fbFileWrite3.udiStatus==(unsigned long)1903))){
(udiStatus=10037);
}else if((((unsigned long)fbFileWrite3.udiStatus==(unsigned long)1904))){
(udiStatus=10038);
}else if((((unsigned long)fbFileWrite3.udiStatus==(unsigned long)1914))){
(udiStatus=10039);
}else{
(udiStatus=fbFileWrite3.udiStatus);
}
}

}

}break;case 13:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileRead4.bEn=1);;fbFileFullRead(&fbFileRead4);

if((((unsigned long)fbFileRead4.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileRead4.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead4.udiStatus==(unsigned long)1900))){
(udiStatus=10042);
}else if((((unsigned long)fbFileRead4.udiStatus==(unsigned long)1902))){
(udiStatus=10043);
}else if((((unsigned long)fbFileRead4.udiStatus==(unsigned long)1904))){
(udiStatus=10044);
}else if((((unsigned long)fbFileRead4.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead4.udiStatus);
}
}

}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileWrite4.bEn=1);;fbFileFullWrite(&fbFileWrite4);

if((((unsigned long)fbFileWrite4.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite4.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite4.udiStatus==(unsigned long)1900))){
(udiStatus=10045);
}else if((((unsigned long)fbFileWrite4.udiStatus==(unsigned long)1901))){
(udiStatus=10046);
}else if((((unsigned long)fbFileWrite4.udiStatus==(unsigned long)1903))){
(udiStatus=10047);
}else if((((unsigned long)fbFileWrite4.udiStatus==(unsigned long)1904))){
(udiStatus=10048);
}else if((((unsigned long)fbFileWrite4.udiStatus==(unsigned long)1914))){
(udiStatus=10049);
}else{
(udiStatus=fbFileWrite4.udiStatus);
}
}

}

}break;case 14:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileRead5.bEn=1);;fbFileFullRead(&fbFileRead5);

if((((unsigned long)fbFileRead5.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileRead5.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead5.udiStatus==(unsigned long)1900))){
(udiStatus=10052);
}else if((((unsigned long)fbFileRead5.udiStatus==(unsigned long)1902))){
(udiStatus=10053);
}else if((((unsigned long)fbFileRead5.udiStatus==(unsigned long)1904))){
(udiStatus=10054);
}else if((((unsigned long)fbFileRead5.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead5.udiStatus);
}
}

}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);


(fbFileWrite5.bEn=1);;fbFileFullWrite(&fbFileWrite5);

if((((unsigned long)fbFileWrite5.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite5.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite5.udiStatus==(unsigned long)1900))){
(udiStatus=10055);
}else if((((unsigned long)fbFileWrite5.udiStatus==(unsigned long)1901))){
(udiStatus=10056);
}else if((((unsigned long)fbFileWrite5.udiStatus==(unsigned long)1903))){
(udiStatus=10057);
}else if((((unsigned long)fbFileWrite5.udiStatus==(unsigned long)1904))){
(udiStatus=10058);
}else if((((unsigned long)fbFileWrite5.udiStatus==(unsigned long)1914))){
(udiStatus=10059);
}else{
(udiStatus=fbFileWrite5.udiStatus);
}
}

}

}break;case 16:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(fbFileRead1.bEn=1);;fbFileFullRead(&fbFileRead1);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)0))){
(eStatus=1);
(tyConfigurationWr=*(struct tyHermesConfiguration*)&tyCurrConfiguration);
}else if((((unsigned long)fbFileRead1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1900))){
(udiStatus=10012);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1902))){
(udiStatus=10013);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1904))){
(udiStatus=10014);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead1.udiStatus);
}
}

}

}break;case 15:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(fbFileWrite1.bEn=1);;fbFileFullWrite(&fbFileWrite1);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
(eStatus=1);
(tyCurrConfiguration=*(struct tyHermesConfiguration*)&tyConfigurationWr);
}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10015);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10016);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10017);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10018);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10019);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}



}break;default: {
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){
(eStatus=1);
}

}break;}

}imp13_else42_0:imp13_end42_0:imp13_endcase1_0:;}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Background.st"
static void __AS__Action__Act_Background(void){
{


if(((((unsigned long)(unsigned char)((*(p_bSvyPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bSvyEn)))==(unsigned long)(unsigned char)1))&((*(p_bSvyHermesWriteConfig))))){

if(((*(p_bSvyFoundIndexUS1)))){
(tyConfigurationWr.a_tyUSParam[0].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[0].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[0].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[0].uiHostPort=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[0].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[0].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[0].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexUS2)))){
(tyConfigurationWr.a_tyUSParam[1].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[1].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[1].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[1].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[1].uiHostPort=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[1].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[1].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[1].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexUS3)))){
(tyConfigurationWr.a_tyUSParam[2].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[2].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[2].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[2].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[2].uiHostPort=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[2].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[2].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[2].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexUS4)))){
(tyConfigurationWr.a_tyUSParam[3].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[3].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[3].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[3].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[3].uiHostPort=((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[3].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[3].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyUpstreamConfigurations[3].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexDS1)))){
(tyConfigurationWr.a_tyDSParam[0].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[0].uiSvrPort=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[0].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[0].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[0].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexDS2)))){
(tyConfigurationWr.a_tyDSParam[1].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[1].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[1].uiSvrPort=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[1].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[1].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[1].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexDS3)))){
(tyConfigurationWr.a_tyDSParam[2].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[2].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[2].uiSvrPort=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[2].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[2].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[2].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bSvyFoundIndexDS4)))){
(tyConfigurationWr.a_tyDSParam[3].iLaneID=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[3].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[3].uiSvrPort=((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[3].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[3].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.a_tyDownstreamConfigurations[3].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if((((unsigned long)(unsigned char)((*(p_tySvySetConfiguration)).tyAvl.bMachineId)==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[0].sMachineId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[0].sMachineId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.tySvyParam.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_tySvySetConfiguration)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

if((((unsigned long)(unsigned char)((*(p_tySvySetConfiguration)).tyAvl.bSupervisorySystemPort)==(unsigned long)(unsigned char)1))){

(tyConfigurationWr.tySvyParam.uiSvySvstemPort=((*(p_tySvySetConfiguration)).tyData.uiSupervisorySystemPort));

}



}else if(((((unsigned long)(unsigned char)((*(p_bRmtPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRmtEn)))==(unsigned long)(unsigned char)1))&((*(p_bRmtHermesWriteConfig))))){

if(((*(p_bRmtFoundIndexUS1)))){
(tyConfigurationWr.a_tyUSParam[0].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS1)))].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[0].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS1)))].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[0].uiHostPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS1)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[0].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS1)))].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexUS2)))){
(tyConfigurationWr.a_tyUSParam[1].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS2)))].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[1].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS2)))].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[1].uiHostPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS2)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[1].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS2)))].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexUS3)))){
(tyConfigurationWr.a_tyUSParam[2].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS3)))].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[2].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS3)))].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[2].uiHostPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS3)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[2].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS3)))].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexUS4)))){
(tyConfigurationWr.a_tyUSParam[3].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS4)))].iUpstreamLaneId));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[3].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS4)))].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyConfigurationWr.a_tyUSParam[3].uiHostPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS4)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[3].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyUpstreamConfigurations[((*(p_udiRmtIndexUS4)))].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexDS1)))){
(tyConfigurationWr.a_tyDSParam[0].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS1)))].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[0].uiSvrPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS1)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[0].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS1)))].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexDS2)))){
(tyConfigurationWr.a_tyDSParam[1].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS2)))].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[1].uiSvrPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS2)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[1].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS2)))].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexDS3)))){
(tyConfigurationWr.a_tyDSParam[2].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS3)))].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[2].uiSvrPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS3)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[2].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS3)))].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((*(p_bRmtFoundIndexDS4)))){
(tyConfigurationWr.a_tyDSParam[3].iLaneID=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS4)))].iDownstreamLaneId));
(tyConfigurationWr.a_tyDSParam[3].uiSvrPort=((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS4)))].uiPort));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[3].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.a_tyDownstreamConfigurations[((*(p_udiRmtIndexDS4)))].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if((((unsigned long)(unsigned char)((*(p_tyRmtSetConfiguration)).tyAvl.bMachineId)==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyUSParam[0].sMachineId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.a_tyDSParam[0].sMachineId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyConfigurationWr.tySvyParam.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_tyRmtSetConfiguration)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

if((((unsigned long)(unsigned char)((*(p_tyRmtSetConfiguration)).tyAvl.bSupervisorySystemPort)==(unsigned long)(unsigned char)1))){

(tyConfigurationWr.tySvyParam.uiSvySvstemPort=((*(p_tyRmtSetConfiguration)).tyData.uiSupervisorySystemPort));

}


}else if(((*(p_bUISaveHMIConfigure)))){

(tyConfigurationWr.a_tyUSParam[0]=*(struct tyHermesUSParam*)&((*(pa_tyUSParam))[0]));
(tyConfigurationWr.a_tyDSParam[0]=*(struct tyHermesDSParam*)&((*(pa_tyDSParam))[0]));
(tyConfigurationWr.a_tyUSParam[1]=*(struct tyHermesUSParam*)&((*(pa_tyUSParam))[1]));
(tyConfigurationWr.a_tyDSParam[1]=*(struct tyHermesDSParam*)&((*(pa_tyDSParam))[1]));
(tyConfigurationWr.a_tyUSParam[2]=*(struct tyHermesUSParam*)&((*(pa_tyUSParam))[2]));
(tyConfigurationWr.a_tyDSParam[2]=*(struct tyHermesDSParam*)&((*(pa_tyDSParam))[2]));
(tyConfigurationWr.a_tyUSParam[3]=*(struct tyHermesUSParam*)&((*(pa_tyUSParam))[3]));
(tyConfigurationWr.a_tyDSParam[3]=*(struct tyHermesDSParam*)&((*(pa_tyDSParam))[3]));


}else if(((*(p_bUISaveHMISvyConfig)))){

(tyConfigurationWr.tySvyParam=*(struct tyHermesSvyParam*)&((*(p_tySvyParam))));

}


}imp3_else0_3:imp3_end0_0:;}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Background_Command.st"
static void __AS__Action__Act_Background_Command(void){
{










for((usiIdx=0);usiIdx<=7;usiIdx+=1){
if(((((unsigned long)a_tyCommandProcessList[usiIdx].udiCommandParam==(unsigned long)0))|(((unsigned long)a_tyCommandProcessList[usiIdx].udiComMode==(unsigned long)0))|(((unsigned long)a_tyCommandProcessList[usiIdx].udiInterfaceString==(unsigned long)0)))){
goto imp5_endfor0_0;
}
(p_tyHermesCmdParam=a_tyCommandProcessList[usiIdx].udiCommandParam);
(p_tyHermesCmdPause=((unsigned long)(&a_tyCommandPause[usiIdx])));
(p_tyHermesCmdLockConv=((unsigned long)(&a_tyCommandLockInputConv[usiIdx])));
(p_tyHermesCmdOvenInfeed=((unsigned long)(&a_tyCommandOvenInfeed[usiIdx])));
(p_udiComMode=a_tyCommandProcessList[usiIdx].udiComMode);

if(((((unsigned long)(unsigned char)((*(p_tyHermesCmdParam)).usiCommandIdx)!=(unsigned long)(unsigned char)a_usiCommandIdx[usiIdx]))&(((unsigned long)((*(p_udiComMode)))==(unsigned long)1)))){

(usiPrevCmdIdx=a_usiCommandIdx[usiIdx]);


if(((*(p_tyHermesCmdPause)).bFeatureRequestTo)){
fHermesRcvCmdReqToPause(((unsigned long)(&a_usiCommandIdx[usiIdx])),((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdPause))))));
}

if(((*(p_tyHermesCmdPause)).bFeatureRequestFrom)){
fHermesRcvCmdReqFromPause(((unsigned long)(&a_usiCommandIdx[usiIdx])),((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdPause))))));
}

if(((*(p_tyHermesCmdLockConv)).bFeatureLockConvFrom)){
fHermesRcvCmdReqFromLockCov(((unsigned long)(&a_usiCommandIdx[usiIdx])),((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdLockConv))))));
}

if(((*(p_tyHermesCmdOvenInfeed)).bFeatureOvenInfeedFrom)){
fHermesRcvCmdReqFromOvenInfeed(((unsigned long)(&a_usiCommandIdx[usiIdx])),((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdOvenInfeed))))));
}





if((((unsigned long)(unsigned char)a_usiCommandIdx[usiIdx]==(unsigned long)(unsigned char)usiPrevCmdIdx))){
for((usiCmpIdx=0);usiCmpIdx<=7;usiCmpIdx+=1){
if(((((unsigned long)a_tyCommandProcessList[usiCmpIdx].udiCommandParam==(unsigned long)0))|(((unsigned long)a_tyCommandProcessList[usiCmpIdx].udiComMode==(unsigned long)0))|(((unsigned long)a_tyCommandProcessList[usiCmpIdx].udiInterfaceString==(unsigned long)0)))){
goto imp5_endfor8_0;
}
if((((unsigned long)(unsigned char)usiIdx!=(unsigned long)(unsigned char)usiCmpIdx))){
(p_sInterface=a_tyCommandProcessList[usiIdx].udiInterfaceString);
(p_sCmpInterface=a_tyCommandProcessList[usiCmpIdx].udiInterfaceString);
(p_udiComMode=a_tyCommandProcessList[usiCmpIdx].udiComMode);
if((((__AS__STRING_CMP(((*(p_sInterface))),((*(p_sCmpInterface))))!=0))&(((unsigned long)((*(p_udiComMode)))==(unsigned long)1)))){

(p_udiHermesCmpCmdParam=a_tyCommandProcessList[usiCmpIdx].udiCommandParam);
if(((((signed long)((*(p_tyHermesCmdParam)).eCommand)==(signed long)1))|(((signed long)((*(p_tyHermesCmdParam)).eCommand)==(signed long)2)))){
if(a_tyCommandProcessList[usiCmpIdx].bUSTrueDSFalse){
fHermesAddOneCmdTyp(((unsigned long)(&((*(p_udiHermesCmpCmdParam)).a_eCommandSndQ))),((unsigned long)(&((*(p_udiHermesCmpCmdParam)).udiMsgCmdBffr))),((*(p_tyHermesCmdParam)).eCommand));
}
}else if((((signed long)((*(p_tyHermesCmdParam)).eCommand)==(signed long)1000))){
if((((unsigned long)(unsigned char)a_tyCommandProcessList[usiCmpIdx].bUSTrueDSFalse==(unsigned long)(unsigned char)0))){
fHermesAddOneCmdTyp(((unsigned long)(&((*(p_udiHermesCmpCmdParam)).a_eCommandSndQ))),((unsigned long)(&((*(p_udiHermesCmpCmdParam)).udiMsgCmdBffr))),((*(p_tyHermesCmdParam)).eCommand));
}
}else{
fHermesAddOneCmdTyp(((unsigned long)(&((*(p_udiHermesCmpCmdParam)).a_eCommandSndQ))),((unsigned long)(&((*(p_udiHermesCmpCmdParam)).udiMsgCmdBffr))),((*(p_tyHermesCmdParam)).eCommand));
}
}
}
}imp5_endfor8_0:;
(a_usiCommandIdx[usiIdx]=(a_usiCommandIdx[usiIdx]+1));
}
}




if(((*(p_tyHermesCmdPause)).bFeatureRequestTo)){
fHermesSndCmdReqToPause(((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdPause))))));
}

if(((*(p_tyHermesCmdPause)).bFeatureRequestFrom)){
fHermesSndCmdReqFromPause(((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdPause))))));
}

if(((*(p_tyHermesCmdLockConv)).bFeatureLockConvTo)){
fHermesSndCmdReqToLockConv(((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdLockConv))))));
}

if(((*(p_tyHermesCmdOvenInfeed)).bFeatureOvenInfeedTo)){
fHermesSndCmdReqToOvenInfeed(((unsigned long)(&((*(p_tyHermesCmdParam))))),((unsigned long)(&((*(p_tyHermesCmdOvenInfeed))))));
}

}imp5_endfor0_0:;


}}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Background_Route.st"
static void __AS__Action__Act_Background_Route(void){
{

if((bSwitchtoReverseTransport^1)){
(p_tyUSHermestyBoardAvailable=p_USHermestyBoardAvailable);
(p_tyDSHermesCurrBASnd=p_DSHermesBrdAvlSnd);
(p_tyUSRevHermesBFRcv=p_USHermes2BrdForecast);
(p_bUSHermesBrdAvlRcved=p_USHermesBoardAvailableRcved);
(p_bUSRevHermesBrdForecastRcv=p_USHermes2BrdForecastRcv);
(p_bUSHermesStopTransport=p_USHermesStopTransportSent);
(p_tyUSHermesStopTransport=p_USHermesStopTransportSentMsg);
(p_bReceiveReverseUSMcRdy=p_DSHermesUSRdy);
(pa_tyLinkXMLTableDataBrdAvl=p_USHermesTableDataBrdAvl);
(p_iLinkXMLTableDataBrdAvlTtlIdx=p_USHermesTableDataBrdAvlTtlIdx);
(p_bLinkUSHermesTransporting=p_USHermesTransporting);
(p_bUSCurrHermesBrdForecastRcv=p_USHermesBrdForecastRcv);
(p_tyUSCurrHermesBFRcv=p_USHermesBrdForecast);


(p_bDSHermesTransportFinished=p_DSHermesTransportFinish);
(p_tyDSHermesTransportFinished=p_DSHermesTransportFinishMsg);

(p_usiReverseDSSndBfWBrdID=((unsigned long)(&usiReverseDS2SndBfWBrdID)));
}else if(bSwitchtoReverseTransport){
(p_tyUSHermestyBoardAvailable=p_USHermes2tyBoardAvailable);
(p_tyDSHermesCurrBASnd=p_DSHermes2BrdAvlSnd);
(p_tyUSRevHermesBFRcv=p_USHermesBrdForecast);
(p_bUSHermesBrdAvlRcved=p_USHermes2BoardAvailableRcved);
(p_bUSRevHermesBrdForecastRcv=p_USHermesBrdForecastRcv);
(p_bUSHermesStopTransport=p_USHermes2StopTransportSent);
(p_tyUSHermesStopTransport=p_USHermes2StopTransportSentMsg);
(p_bReceiveReverseUSMcRdy=p_DSHermes2USRdy);
(pa_tyLinkXMLTableDataBrdAvl=p_USHermes2TableDataBrdAvl);
(p_iLinkXMLTableDataBrdAvlTtlIdx=p_USHermes2TableDataBrdAvlTtlIdx);

(p_bDSHermesTransportFinished=p_DSHermes2TransportFinish);
(p_tyDSHermesTransportFinished=p_DSHermes2TransportFinishMsg);
(p_bLinkUSHermesTransporting=p_USHermes2Transporting);
(p_bUSCurrHermesBrdForecastRcv=p_USHermes2BrdForecastRcv);
(p_tyUSCurrHermesBFRcv=p_USHermes2BrdForecast);

(p_usiReverseDSSndBfWBrdID=((unsigned long)(&usiReverseDS1SndBfWBrdID)));
}
(usiReverseDS1SndBfWBrdID=0);
(usiReverseDS2SndBfWBrdID=0);


if(((((*(p_bReverseReceiveRoute))^1))&(((*(p_bReverseSentRoute))^1)))){
(bSwitchtoReverseTransport=0);
}else{
if(((*(p_bReverseReceiveRoute)))){

if(((((*(p_bUSRevHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyDSHermesCurrBASnd)).tyData.sBoardId),((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId))==0))&((__AS__STRING_CMP(((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId),"")!=0)))&~Edge0000600000&1?((Edge0000600000=(((*(p_bUSRevHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyDSHermesCurrBASnd)).tyData.sBoardId),((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId))==0))&((__AS__STRING_CMP(((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId),"")!=0)))&1),1):((Edge0000600000=(((*(p_bUSRevHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyDSHermesCurrBASnd)).tyData.sBoardId),((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId))==0))&((__AS__STRING_CMP(((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId),"")!=0)))&1),0))){

(bReqReverseAfterTransptFinished=1);
}else if(((((*(p_bUSRevHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId),"")==0)))&~Edge0000600001&1?((Edge0000600001=(((*(p_bUSRevHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId),"")==0)))&1),1):((Edge0000600001=(((*(p_bUSRevHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyUSRevHermesBFRcv)).tyData.sBoardId),"")==0)))&1),0))){

(bReqReverseAfterTransptFinished=0);

}
if((bReqReverseAfterTransptFinished&((((*(p_bDSHermesTransportFinished)))&(((signed long)((*(p_tyDSHermesTransportFinished)).tyData.eTransferState)==(signed long)3)))&~Edge0000600002&1?((Edge0000600002=(((*(p_bDSHermesTransportFinished)))&(((signed long)((*(p_tyDSHermesTransportFinished)).tyData.eTransferState)==(signed long)3)))&1),1):((Edge0000600002=(((*(p_bDSHermesTransportFinished)))&(((signed long)((*(p_tyDSHermesTransportFinished)).tyData.eTransferState)==(signed long)3)))&1),0)))){
(bReqReverseAfterTransptFinished=0);
(bPrevReversalCondition=bSwitchtoReverseTransport);
(bSwitchtoReverseTransport=(bSwitchtoReverseTransport^1));
}else if(((((unsigned long)(unsigned char)bPrevReversalCondition!=(unsigned long)(unsigned char)bSwitchtoReverseTransport))&((((*(p_bUSCurrHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyUSCurrHermesBFRcv)).tyData.sBoardId),"")==0)))&~Edge0000600003&1?((Edge0000600003=(((*(p_bUSCurrHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyUSCurrHermesBFRcv)).tyData.sBoardId),"")==0)))&1),1):((Edge0000600003=(((*(p_bUSCurrHermesBrdForecastRcv)))&((__AS__STRING_CMP(((*(p_tyUSCurrHermesBFRcv)).tyData.sBoardId),"")==0)))&1),0)))){
(bSwitchtoReverseTransport=bPrevReversalCondition);
}
}
if(((*(p_bReverseSentRoute)))){

if(bStopTransportSucceed){
(bSelfReverseAfterTransptFinished=1);
}


if(bBFWithoutBoardID){
(bBFWithoutBoardID=0);
((*(p_usiReverseDSSndBfWBrdID))=2);
}

if((bSelfReverseAfterTransptFinished&((((*(p_bDSHermesTransportFinished)))&(((signed long)((*(p_tyDSHermesTransportFinished)).tyData.eTransferState)==(signed long)3)))&~Edge0000600004&1?((Edge0000600004=(((*(p_bDSHermesTransportFinished)))&(((signed long)((*(p_tyDSHermesTransportFinished)).tyData.eTransferState)==(signed long)3)))&1),1):((Edge0000600004=(((*(p_bDSHermesTransportFinished)))&(((signed long)((*(p_tyDSHermesTransportFinished)).tyData.eTransferState)==(signed long)3)))&1),0)))){
(bSelfReverseAfterTransptFinished=0);
(bSwitchtoReverseTransport=(bSwitchtoReverseTransport^1));
}else if((bSelfReverseAfterTransptFinished&((((*(p_bOpsInvertStepInitDone)))&(((*(p_bOpsInvertHvBrd))^1)))&~Edge0000600005&1?((Edge0000600005=(((*(p_bOpsInvertStepInitDone)))&(((*(p_bOpsInvertHvBrd))^1)))&1),1):((Edge0000600005=(((*(p_bOpsInvertStepInitDone)))&(((*(p_bOpsInvertHvBrd))^1)))&1),0)))){
(bSelfReverseAfterTransptFinished=0);
(bSwitchtoReverseTransport=(bSwitchtoReverseTransport^1));
(bBFWithoutBoardID=1);
}

}
}

(fbRstReverseRcvGate.IN=bSwitchtoReverseTransport);;TON(&fbRstReverseRcvGate);
(bNotifyRstReverseRcvGate=fbRstReverseRcvGate.Q);





if(((((*(p_bManualRmvRoute)))|((*(p_bReturnRoute)))|((*(p_bNomRouteEn))))^1)){
(usiReverseDS1SndBfWBrdID=0);
(usiReverseDS2SndBfWBrdID=0);
(bManualRmvBrdCond=0);
(iGotoLane=0);
(bProcessRouteReversal=0);
(bTriggerRouteReversal=0);
}else{

if(((((*(p_bReturnRoute)))&bProcessRouteMachine)&((((*(p_bUSHermesBrdAvlRcved)))&(((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)==(signed long)(signed long)(short)900)))&~Edge0000600006&1?((Edge0000600006=(((*(p_bUSHermesBrdAvlRcved)))&(((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)==(signed long)(signed long)(short)900)))&1),1):((Edge0000600006=(((*(p_bUSHermesBrdAvlRcved)))&(((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)==(signed long)(signed long)(short)900)))&1),0)))){
(bProcessRouteReversal=1);
}else if(((((*(p_bReturnRoute)))&bTriggerRouteMachine)&((((*(p_bUSHermesBrdAvlRcved)))&((*(p_tyUSHermestyBoardAvailable)).tyAvl.bFlippedBoard)&(((signed long)((*(p_tyUSHermestyBoardAvailable)).tyData.eFlippedBoard)==(signed long)1)))&~Edge0000600007&1?((Edge0000600007=(((*(p_bUSHermesBrdAvlRcved)))&((*(p_tyUSHermestyBoardAvailable)).tyAvl.bFlippedBoard)&(((signed long)((*(p_tyUSHermestyBoardAvailable)).tyData.eFlippedBoard)==(signed long)1)))&1),1):((Edge0000600007=(((*(p_bUSHermesBrdAvlRcved)))&((*(p_tyUSHermestyBoardAvailable)).tyAvl.bFlippedBoard)&(((signed long)((*(p_tyUSHermestyBoardAvailable)).tyData.eFlippedBoard)==(signed long)1)))&1),0)))){
(bTriggerRouteReversal=1);
}

(bRouteHaveBeenTriggerred=((bProcessRouteReversal|bTriggerRouteReversal)&~Edge0000600008&1?((Edge0000600008=(bProcessRouteReversal|bTriggerRouteReversal)&1),1):((Edge0000600008=(bProcessRouteReversal|bTriggerRouteReversal)&1),0)));
(bStopTransportFailed=((((*(p_bUSHermesStopTransport)))&((((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)2))|(((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)1))))&~Edge0000600009&1?((Edge0000600009=(((*(p_bUSHermesStopTransport)))&((((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)2))|(((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)1))))&1),1):((Edge0000600009=(((*(p_bUSHermesStopTransport)))&((((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)2))|(((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)1))))&1),0)));
(bStopTransportSucceed=((((*(p_bUSHermesStopTransport)))&(((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)3))&((*(p_bLinkConvHvBrd))))&~Edge0000600010&1?((Edge0000600010=(((*(p_bUSHermesStopTransport)))&(((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)3))&((*(p_bLinkConvHvBrd))))&1),1):((Edge0000600010=(((*(p_bUSHermesStopTransport)))&(((signed long)((*(p_tyUSHermesStopTransport)).tyData.eTransferState)==(signed long)3))&((*(p_bLinkConvHvBrd))))&1),0)));


if((((*(p_tyUSHermestyBoardAvailable)).tyAvl.bRoute)^1)){
(iGotoLane=0);
}else{
if((((*(p_bManualRmvRoute)))&(((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)==(signed long)(signed long)(short)999)))){
(bManualRmvBrdCond=1);

}else if((((*(p_bReturnRoute)))&(bProcessRouteReversal|bTriggerRouteReversal))){


if(bRouteHaveBeenTriggerred){
((*(p_usiReverseDSSndBfWBrdID))=1);


}

if((bProcessRouteReversal|bTriggerRouteReversal)){
if(bStopTransportFailed){
(bProcessRouteReversal=0);
(bTriggerRouteReversal=0);
}else if(bStopTransportSucceed){
(bSwitchtoReverseTransport=(bSwitchtoReverseTransport^1));
for((i=0);i<=200;i+=1){
if(((__AS__STRING_CMP(a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sTitle,"AT")==0))){
fConvertToLower_254(((unsigned long)(&sLowerCase)),a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sValue);
if(((__AS__STRING_CMP(sLowerCase,"route")==0))){
if(((__AS__STRING_CMP(a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sTitle,"AV")==0))){
if(((((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)==(signed long)(signed long)(short)900))&bProcessRouteReversal)){
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sValue; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if(((((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)!=(signed long)(signed long)(short)900))&bTriggerRouteReversal)){
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[(i+1)].sValue; plcstring* zzRValue=(plcstring*)"900"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
goto imp6_endfor16_0;
}
}
}
}imp6_endfor16_0:;
(bProcessRouteReversal=0);
(bTriggerRouteReversal=0);
}
}


}else if(((*(p_bNomRouteEn)))){
(iMinDis=0);
for((usidx=0);usidx<=2;usidx+=1){

if((((signed long)(signed long)(short)((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)==(signed long)(signed long)(short)tyCurrConfiguration.a_tyDSParam[usidx].iLaneID))){
(iGotoLane=usidx);
goto imp6_endfor21_0;
}else if((((signed long)(signed long)(short)iMinDis==(signed long)(signed long)(short)0))){
(iMinDis=((((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)<0?-((((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)):(((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)));
(iGotoLane=usidx);
}else{
if((((signed long)(signed long)(short)iMinDis>(signed long)((((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)<0?-((((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)):(((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID))))){
(iGotoLane=usidx);
(iMinDis=((((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)<0?-((((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)):(((*(p_tyUSHermestyBoardAvailable)).tyData.iRoute)-tyCurrConfiguration.a_tyDSParam[usidx].iLaneID)));
}
}
}imp6_endfor21_0:;
}


(bEntToReversePosition=(bProcessRouteReversal|bTriggerRouteReversal));
}












}








}imp6_end11_0:imp6_end9_0:;}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Background_Action.st"
static void __AS__Action__Act_Background_Action(void){
{

if((bSimBrdInZone1&~Edge0000400000&1?((Edge0000400000=bSimBrdInZone1&1),1):((Edge0000400000=bSimBrdInZone1&1),0))){
(tyHermesBoardAvailableAttribAddr.udiProductTypeId=p_ProdRcpCurrRcp0Nm);
(tyHermesBoardAvailableAttribAddr.udiWidth=p_ProdRcpCurrRcp0Width);
fHermesGenerateBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[1])),&tyHermesBoardAvailableAttribAddr);
fHermesAddEditAttribBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[1])),"Action",sSelectedActtoUpdate);
(bSimBrdInZone1=0);
}
if((bSimBrdInZone2&~Edge0000400001&1?((Edge0000400001=bSimBrdInZone2&1),1):((Edge0000400001=bSimBrdInZone2&1),0))){
(tyHermesBoardAvailableAttribAddr.udiProductTypeId=p_ProdRcpCurrRcp0Nm);
(tyHermesBoardAvailableAttribAddr.udiWidth=p_ProdRcpCurrRcp0Width);
fHermesGenerateBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[2])),&tyHermesBoardAvailableAttribAddr);
fHermesAddEditAttribBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[2])),"Action",sSelectedActtoUpdate);
(bSimBrdInZone2=0);
}
if((bSimBrdInZone3&~Edge0000400002&1?((Edge0000400002=bSimBrdInZone3&1),1):((Edge0000400002=bSimBrdInZone3&1),0))){
(tyHermesBoardAvailableAttribAddr.udiProductTypeId=p_ProdRcpCurrRcp0Nm);
(tyHermesBoardAvailableAttribAddr.udiWidth=p_ProdRcpCurrRcp0Width);
fHermesGenerateBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[3])),&tyHermesBoardAvailableAttribAddr);
fHermesAddEditAttribBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[3])),"Action",sSelectedActtoUpdate);
(bSimBrdInZone3=0);
}







if((bSimShiftBoardFoward&~Edge0000400003&1?((Edge0000400003=bSimShiftBoardFoward&1),1):((Edge0000400003=bSimShiftBoardFoward&1),0))){
memmove(((unsigned long)(&a_tyHermesBrdAvlData[endpos])),((unsigned long)(&a_tyHermesBrdAvlData[startpos])),52264);
__AS__MEMSET(((unsigned long)(&a_tyHermesBrdAvlData[startpos])),0,52264);
memmove(((unsigned long)(&a_bLinkOpsGConvHvBrd[endpos-1])),((unsigned long)(&a_bLinkOpsGConvHvBrd[startpos-1])),1);
__AS__MEMSET(((unsigned long)(&a_bLinkOpsGConvHvBrd[startpos-1])),0,1);
}
if((bSimClear&~Edge0000400004&1?((Edge0000400004=bSimClear&1),1):((Edge0000400004=bSimClear&1),0))){
__AS__MEMSET(((unsigned long)(&a_tyHermesBrdAvlData[dltpos])),0,52264);
}









for((usiZone=usiZoneSupported);usiZone>=1;usiZone+=-1){


if((a_bUIZonePause[usiZone-1]^1)){
(a_bBlkDSForAction[usiZone-1]=0);
(a_bUIPromptActionSelect[usiZone-1]=0);
}else{
(a_bBlkDSForAction[usiZone-1]=1);
if((a_bOpsDsStandByStep[usiZone-1]&~Edge0000400005&1?((Edge0000400005=a_bOpsDsStandByStep[usiZone-1]&1),1):((Edge0000400005=a_bOpsDsStandByStep[usiZone-1]&1),0))){
(a_bUIPromptActionSelect[usiZone-1]=1);
}

if((~a_bUIPromptActionSelect[usiZone-1]&Edge0000400006&1?((Edge0000400006=a_bUIPromptActionSelect[usiZone-1]&1),1):((Edge0000400006=a_bUIPromptActionSelect[usiZone-1]&1),0))){
(a_bUIZonePause[usiZone-1]=0);
(udiSelectedModtoUpt=a_eModSelectedforCurrZone[usiZone-1]);
udint2str(udiSelectedModtoUpt,sSelectedActtoUpdate,81);
fHermesAddEditAttribBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[usiZone])),"Action",sSelectedActtoUpdate);

}
}












if((((unsigned long)(unsigned char)usiZone==(unsigned long)(unsigned char)usiZoneSupported))){
(usiLeftmostBlockedZone=usiZone);
}else if((((unsigned long)(unsigned char)usiZone<(unsigned long)(unsigned char)usiLeftmostBlockedZone))){
(usiLeftmostBlockedZone=usiZone);
}


if(a_bLinkOpsGConvStepInitDone[usiZone-1]){
if((a_bLinkOpsGConvHvBrd[usiZone-1]^1)){
__AS__MEMSET(((unsigned long)(&a_tyActionReservedForZone[usiZone-1])),0,262);
if((((unsigned long)(unsigned char)usiLeftmostBlockedZone!=(unsigned long)(unsigned char)0))){
for((usiBrdZone=usiLeftmostBlockedZone);usiBrdZone>=1;usiBrdZone+=-1){
if(a_bLinkOpsGConvHvBrd[usiBrdZone-1]){
if((((unsigned long)(usiBrdZone-1)<(unsigned long)(unsigned char)usiZone))){
(usiLeftmostBlockedZone=usiBrdZone);
}
(iActionAttributeIdx=fHermesSrchAttribValueBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[usiBrdZone])),"Action",((unsigned long)(&sAttribReadValue))));
if((((signed long)(signed long)(short)iActionAttributeIdx!=(signed long)(signed long)(short)-1))){
(iActionOnBrd=str2int(sAttribReadValue));
if(((((signed long)(signed long)(short)iActionOnBrd!=(signed long)(signed long)(short)0))&((((signed long)(signed long)(short)1<=(signed long)(signed long)(short)iActionOnBrd))&(((signed long)(signed long)(short)iActionOnBrd<=(signed long)(unsigned char)usiMaxActionSupported))))){
if(tbActionSupportedByZone[usiZone-1][iActionOnBrd-1]){
fHermesSrchAttribValueBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[usiBrdZone])),"BoardId",((unsigned long)(&sAttribReadValue)));

if((((unsigned long)(usiBrdZone-1)<(unsigned long)(unsigned char)usiZone))){
(usiLeftmostBlockedZone=(usiBrdZone-1));
}
(a_tyActionReservedForZone[usiZone-1].iAction=iActionOnBrd);
(a_tyActionReservedForZone[usiZone-1].iAttributeIdx=(iActionAttributeIdx+1));
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyActionReservedForZone[usiZone-1].sBoardId; plcstring* zzRValue=(plcstring*)sAttribReadValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
goto imp4_endfor13_0;
}
}
}
if(((((signed long)(signed long)(short)a_tyActionReservedForZone[usiZone-1].iAction!=(signed long)(signed long)(short)iActionOnBrd))|(((signed long)(signed long)(short)iActionOnBrd==(signed long)(signed long)(short)0)))){
goto imp4_endfor13_0;
}
}
}imp4_endfor13_0:;
}
}else{
if((((unsigned long)(usiZone-1)<(unsigned long)(unsigned char)usiLeftmostBlockedZone))){
(usiLeftmostBlockedZone=(usiZone-1));
}

fHermesSrchAttribValueBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[usiZone])),"BoardId",((unsigned long)(&sAttribReadValue)));
if(((((signed long)(signed long)(short)a_tyActionReservedForZone[usiZone-1].iAction!=(signed long)(signed long)(short)0))&((__AS__STRING_CMP(sAttribReadValue,a_tyActionReservedForZone[usiZone-1].sBoardId)==0)))){
if(a_tyActionReservedForZone[usiZone-1].bActionCompl){
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[a_tyActionReservedForZone[usiZone-1].iAttributeIdx].sValue; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else{
__AS__MEMSET(((unsigned long)(&a_tyActionReservedForZone[usiZone-1])),0,262);
(iActionAttributeIdx=fHermesSrchAttribValueBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[usiZone])),"Action",((unsigned long)(&sAttribReadValue))));
if((((signed long)(signed long)(short)iActionAttributeIdx!=(signed long)(signed long)(short)-1))){
(iActionOnBrd=str2int(sAttribReadValue));
if(((((signed long)(signed long)(short)iActionOnBrd!=(signed long)(signed long)(short)0))&((((signed long)(signed long)(short)1<=(signed long)(signed long)(short)iActionOnBrd))&(((signed long)(signed long)(short)iActionOnBrd<=(signed long)(unsigned char)usiMaxActionSupported))))){
if(tbActionSupportedByZone[usiZone-1][iActionOnBrd-1]){

fHermesSrchAttribValueBrdAvlDat(((unsigned long)(&a_tyHermesBrdAvlData[usiZone])),"BoardId",((unsigned long)(&sAttribReadValue)));
(a_tyActionReservedForZone[usiZone-1].iAction=iActionOnBrd);
(a_tyActionReservedForZone[usiZone-1].iAttributeIdx=(iActionAttributeIdx+1));
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyActionReservedForZone[usiZone-1].sBoardId; plcstring* zzRValue=(plcstring*)sAttribReadValue; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
goto imp4_endfor5_0;
}
}
}
}
}

}



}imp4_endfor5_0:;



}}
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 46 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

signed long __AS__STRING_CMP(char* pstr1, char* pstr2)
{while (*pstr1 != 0 && *pstr1 == *pstr2){ pstr1++;pstr2++; } return (*pstr1 == 0 && *pstr2 != 0) ? -1 : (*pstr1 != 0 && *pstr2 == 0) ? 1 : *pstr1 - *pstr2;}

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
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/Hermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/Hermes/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/Hermes/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/Hermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'a_tyHermesBrdAvlData'\\n\"");
__asm__(".ascii \"plcdata_const 'tyCurrConfiguration'\\n\"");
__asm__(".ascii \"plcdata_const 'tyConfigurationWr'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyCommandProcessList'\\n\"");
__asm__(".ascii \"plcdata_const 'usiMaxActionSupported'\\n\"");
__asm__(".ascii \"plcdata_const 'usiMaxZoneSupported'\\n\"");
__asm__(".ascii \"plcdata_const 'a_bLinkOpsGConvHvBrd'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyActionReservedForZone'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxInterfaceIdx'\\n\"");
__asm__(".previous");
