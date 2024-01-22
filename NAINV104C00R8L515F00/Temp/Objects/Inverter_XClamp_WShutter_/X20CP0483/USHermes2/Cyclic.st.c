#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/USHermes2/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.st"
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
__AS__Action__Act_Main_Disable();

if((((signed long)eStat!=(signed long)0))){
(eStatus=1);
}else{
(eStatus=0);
}
}

__AS__Action__Act_CombineErr();
__AS__Action__Act_Alarm();
__AS__Action__Act_Alarm1();
__AS__Action__Act_Alarm2();
__AS__Action__Act_Alarm3();
__AS__Action__Act_Alarm4();
__AS__Action__Act_Alarm5();


}

}imp47_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);
(p_eLinkMcParamUSCommMod=p_McParamUSComm2Mod);

(p_eLinkConvDir=p_NtParamProjConvDir);
(p_bLinkDILeftSen=p_DIConvLftSen);
(p_bLinkDIRightSen=p_DIConvRgtSen);

(p_bLinkOpsInvertStepInitDone=p_OpsInvertStepInitDone);
(p_bLinkOpsRun=p_OpsRun);


(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamHermesPrep);
(p_tyParam=p_HermesUSParam2);
(p_sIPAddr=p_HWInfoIPAddr);
(p_tyDTStructure=p_TimeCurrDTStruct);
(p_dtCurrDT=p_TimeCurrDT);
(p_sMcId=p_McParamMcNm);
(p_sRecipeNm=p_ProdRcpCurrRcp0Nm);
(p_diWidthInUM=p_ProdRcpCurrRcp0Width);
(p_udiAliveIdleTimeInSec=p_NtParamUSHermes2AliveTmInSec);
(p_tConnTimeOut=p_NtParamUSHermes2ConnTO);
(p_diTransferInTO=p_McParamTranInErrDlyTm);
(p_bInterruptSen=p_DIConvLftSen);
(p_bOpsRun=p_OpsRun);
(p_udiFileKeepDay=p_NtParamUSHermes2FileKeepDay);
(p_sProgNm=p_NtParamUSHermes2ProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_bAccDataRdy=p_USHermes2USRdy);
(p_sRmtMcId=p_RmtHermesCurrentConfMcId);
(p_bRmtPrep=p_NtParamHermesRmtPrep);
(p_bRmtEn=p_McParamHermesRmtEn);
(pa_tyProdRcpList=p_ProdRcpCurrList);
(p_tyProdRcpCurrRcp=p_ProdRcpCurrRcp0);
(p_bMcParamMnlAccData=p_McParamMnlAccDat);
(p_bUIAccData=p_UIProdAccData);


(pa_tyHermesDSParam=pa_HermesDSParam);


(p_bHermesSwitchtoRvrseTransport=p_HermesSwitchtoReverseTransport);

(p_bTransportFinished=p_DSHermesTransportFinish);
(p_bQueryBoardInfo=p_UIQueryBoardInfo);
(p_bManualInsertZoneHvBrd=p_ConvHvBrd);
(p_bManualInsertEndSen=p_DIConvRgtSen);
(p_bConvHvBrd=p_ConvHvBrd);

(p_tyDSHermesCurrBASnd=p_DSHermesBrdAvlSnd);


}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupUSHermesAct);
}else{
(p_eAct=((unsigned long)(&eAct)));

if(((((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))&~Edge0004200000&1?((Edge0004200000=(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))&1),1):((Edge0004200000=(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))&1),0))){
(bHermesRun=1);
(bHermesStop=0);
}

if((~(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))&Edge0004200001&1?((Edge0004200001=(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))&1),1):((Edge0004200001=(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))&1),0))){
(bHermesRun=0);
(bHermesStop=1);
}

if((((unsigned long)(unsigned char)bHermesRun==(unsigned long)(unsigned char)1))){
((*(p_eAct))=1);

if(((((signed long)eStat==(signed long)1))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bHermesRun=0);
}
}

if((((unsigned long)(unsigned char)bHermesStop==(unsigned long)(unsigned char)1))){
((*(p_eAct))=2);

if(((((signed long)eStat==(signed long)2))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bHermesStop=0);
}
}

}



(fbDlyTmr.IN=1);;TON(&fbDlyTmr);
if(fbDlyTmr.Q){
(fbDeleteLogTmr.IN=1);;TON(&fbDeleteLogTmr);
if((fbDeleteLogTmr.Q&(((signed long)eStatus!=(signed long)2)))){
((*(p_eAct))=3);
if(((((signed long)eStat==(signed long)3))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(fbDlyTmr.IN=0);;TON(&fbDlyTmr);
(fbDeleteLogTmr.IN=0);;TON(&fbDeleteLogTmr);
}
}
}

}imp42_else9_0:imp42_end9_0:imp42_else8_0:imp42_end8_0:imp42_else7_0:imp42_end7_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Link.st"
static void __AS__Action__Act_Link(void){
{

((*(p_tyParam)).tRcvAlive=(((*(p_tyParam)).tSndAlive)*2));


if(((((signed long)((*(p_eLinkConvDir)))==(signed long)0))|(((signed long)((*(p_eLinkConvDir)))==(signed long)2)))){
((*(p_bRcvCompl))=(~((*(p_bLinkDIRightSen)))&Edge0004100000&1?((Edge0004100000=((*(p_bLinkDIRightSen)))&1),1):((Edge0004100000=((*(p_bLinkDIRightSen)))&1),0)));
}else{
((*(p_bRcvCompl))=(~((*(p_bLinkDILeftSen)))&Edge0004100001&1?((Edge0004100001=((*(p_bLinkDILeftSen)))&1),1):((Edge0004100001=((*(p_bLinkDILeftSen)))&1),0)));
}


(p_bRdyRcv=p_OpsInvertStepUSCommTmr);


((*(p_bRdyTransport))=1);


((*(p_bAccNewRcpCond))=(((unsigned long)(unsigned char)((*(p_bLinkOpsRun)))==(unsigned long)(unsigned char)1)));




((*(p_bProcessRouteEn))=(((*(p_bManualRmvRoute)))|((*(p_bReturnRoute)))|((*(p_bNomRouteEn)))));



((*(p_bReverseReceiveRoute))=1);
((*(p_bReturnRoute))=1);
}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp46_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_tyParam=((unsigned long)(&tyParam)));
(p_sIPAddr=((unsigned long)(&sIPAddr)));
(p_tyDTStructure=((unsigned long)(&tyDTStructure)));
(p_dtCurrDT=((unsigned long)(&dtCurrDT)));
(p_bRdyRcv=((unsigned long)(&bRdyRcv)));
(p_bRdyTransport=((unsigned long)(&bRdyTransport)));
(p_bRcvCompl=((unsigned long)(&bRcvCompl)));
(p_bRcvIncompl=((unsigned long)(&bRcvInCompl)));
(p_bRcvNotStart=((unsigned long)(&bRcvNotStart)));
(p_bBAWidthEn=((unsigned long)(&bBAWidthEn)));
(p_bBASltEn=((unsigned long)(&bBASltEn)));
(p_bBFWidthEn=((unsigned long)(&bBFWidthEn)));
(p_bBFSltEn=((unsigned long)(&bBFSltEn)));
(p_sMcId=((unsigned long)(&sMcId)));
(p_sInterfaceId=((unsigned long)(&sInterfaceId)));
(p_sVersion=((unsigned long)(&sVersion)));
(p_eFailedBoard=((unsigned long)(&eFailedBoard)));
(p_sRecipeNm=((unsigned long)(&sRecipeNm)));
(p_diWidthInUM=((unsigned long)(&diWidthInUM)));
(p_diMinSltValue=((unsigned long)(&diMinSltValue)));
(p_diMaxSltValue=((unsigned long)(&diMaxSltValue)));
(p_diPitch=((unsigned long)(&diPitch)));
(p_diTtlSlt=((unsigned long)(&diTtlSlt)));
(p_diSltToSltInUM=((unsigned long)(&diSltToSltInUM)));
(p_udiSndBffrSize=((unsigned long)(&udiSndBffrSize)));
(p_udiRcvBffrSize=((unsigned long)(&udiRcvBffrSize)));
(p_udiAliveIdleTimeInSec=((unsigned long)(&udiAliveIdleTimeInSec)));
(p_tConnTimeOut=((unsigned long)(&tConnTimeOut)));
(p_diTransferInTO=((unsigned long)(&diTransferInTO)));
(p_bOpsRun=((unsigned long)(&bOpsRun)));
(p_bInterruptSen=((unsigned long)(&bInterruptSen)));
(p_udiFileKeepDay=((unsigned long)(&udiFileKeepDay)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_bAccDataRdy=((unsigned long)(&bAccDataRdy)));
(p_sRmtMcId=((unsigned long)(&sRmtMcId)));
(p_bRmtPrep=((unsigned long)(&bRmtPrep)));
(p_bRmtEn=((unsigned long)(&bRmtEn)));
(p_bAccNewRcpCond=((unsigned long)(&bAccNewRcpCond)));
(p_sInfoMsg=((unsigned long)(&sInfoMsg)));
(p_sInfoMsg1=((unsigned long)(&sInfoMsg1)));
(p_sInfoMsg2=((unsigned long)(&sInfoMsg2)));
(p_bInternalUse=((unsigned long)(&bInternalUse)));
(p_sInternalRcv=((unsigned long)(&sInternalRcv)));
(pa_tyProdRcpList=((unsigned long)(&a_tyProdRcpList)));
(p_tyProdRcpCurrRcp=((unsigned long)(&tyProdRcpCurrRcp)));
(p_bMcParamMnlAccData=((unsigned long)(&bMcParamMnlAccData)));
(p_bUIAccData=((unsigned long)(&bUIAccData)));


(p_tyDSHermesCurrBASnd=((unsigned long)(&tyBoardAvailableDummy)));


(p_bManualRmvRoute=((unsigned long)(&bManualRmvRoute)));
(p_bReturnRoute=((unsigned long)(&bReturnRoute)));
(p_bNomRouteEn=((unsigned long)(&bNomRouteEn)));
(p_bProcessRouteEn=((unsigned long)(&bProcessRouteEn)));


(p_bReverseReceiveRoute=((unsigned long)(&bReverseReceiveRoute)));
(p_bReceiveReverseUSMcRdy=((unsigned long)(&bReceiveReverseUSMcRdy)));

(p_sTopBarcode=((unsigned long)(&sUITopBarcode)));
(p_sBottomBarcode=((unsigned long)(&sUIBottomBarcode)));

(p_bHermesSwitchtoRvrseTransport=((unsigned long)(&bSwitchtoReverseRcv)));
}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbClntConnect.udiSndBffrSize=((*(p_udiSndBffrSize))));
(fbClntConnect.udiRcvBffrSize=((*(p_udiRcvBffrSize))));
(fbClntConnect.udiAliveIdleTmInSec=((*(p_udiAliveIdleTimeInSec))));
(fbClntConnect.tConnectTO=((*(p_tConnTimeOut))));
(fbClntConnect.bEn=0);;fbTCPClntConnect(&fbClntConnect);

(fbRcv.udiBffrSize=65536);
(fbRcv.p_BffrDest=((unsigned long)(&sRcv)));
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);

(fbSend.p_BffrDest=((unsigned long)(&sSnd)));
(fbSend.bEn=0);;fbTCPSnd(&fbSend);

(fbClose.bEn=0);;fbTCPClose(&fbClose);

(fbParseXMLTable.p_XMLTable=((unsigned long)(&a_tyXMLTableDataRcv)));

(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);

(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);

(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);

((*(unsigned long*)&(fbSequenceUS.p_tyMsgTypeRcv))=((unsigned long)(&tyMsgTypeRcv)));
(fbSequenceUS.bEn=0);;fbHermesSequenceUS(&fbSequenceUS);

(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sDevice; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sDevice; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sPath; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sKeyword; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileOldDel1.udiFileKeepDay=((*(p_udiFileKeepDay))));
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);

}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)3))&bRstErr)){
((*(p_eAct))=0);
(eStat=0);
}


if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)1)))){
(eStat=((*(p_eAct))));
}

}imp1_else1_0:imp1_end1_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bRun=1);
(bStop=0);
(eStatus=1);

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bStop=1);
(eStatus=1);

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(fbFileOldDel1.dtDTNow=((*(p_dtCurrDT))));
(fbFileOldDel1.bEn=1);;fbFileOldDel(&fbFileOldDel1);
if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileOldDel1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1910))){
(udiStatus=10154);
}else if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1911))){
(udiStatus=10155);
}else if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1912))){
(udiStatus=10156);
}else{
(udiStatus=fbFileOldDel1.udiStatus);
}
}

}

}break;default: {
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){
(eStatus=1);
}

}break;}

}imp44_else7_0:imp44_end7_0:imp44_endcase1_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background.st"
static void __AS__Action__Act_Background(void){
{__AS__Action__Act_Background_Info();
if((((unsigned long)(unsigned char)bRun==(unsigned long)(unsigned char)1))){
if((((unsigned long)udiTCPIdent==(unsigned long)0))){
if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
__AS__Action__Act_Background_TCPConnect();

(tyParamOld=*(struct tyHermesUSParam*)&((*(p_tyParam))));
}else{
(udiTCPIdent=1);
}

}else{
if((((unsigned long)(unsigned char)bRstConnection==(unsigned long)(unsigned char)0))){
__AS__Action__Act_Background_TCPRcv();

__AS__Action__Act_Background_NotificationRcv();

__AS__Action__Act_Background_IllegalMsg();
__AS__Action__Act_Background_ChkParamRcv();
__AS__Action__Act_Background_CmpParamRcv();

if((((unsigned long)(unsigned char)bHandshakeDone==(unsigned long)(unsigned char)1))){
if(((((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0)))){
if(((((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureCheckAliveResponse==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyParam)).bFeatureCheckAliveResponse)==(unsigned long)(unsigned char)1)))){
__AS__Action__Act_Background_ChkAliveSendPing();
__AS__Action__Act_Background_ChkAliveRcvPing();
}else{
__AS__Action__Act_Background_ChkAlive();
}
}else{
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
}
}
__AS__Action__Act_Background_BoardForecast();

__AS__Action__Act_Background_RequestedBoardChk();

__AS__Action__Act_Background_Sequence();
__AS__Action__Act_Background_SequenceTO();
__AS__Action__Act_Background_Err();


__AS__Action__Act_Background_ProcessData();
__AS__Action__Act_Background_QueryBoardInfo();



__AS__Action__Act_Background_Command();

__AS__Action__Act_Background_ChgConfig();

__AS__Action__Act_Background_TCPSend();

__AS__Action__Act_Background_Log();

}else{
__AS__Action__Act_Background_TCPClose();

}

}

__AS__Action__Act_Background_Stop();

}

if(((~bRun&Edge0000800000&1?((Edge0000800000=bRun&1),1):((Edge0000800000=bRun&1),0))|(~(((unsigned long)udiTCPIdent==(unsigned long)0))&Edge0000800001&1?((Edge0000800001=(((unsigned long)udiTCPIdent==(unsigned long)0))&1),1):((Edge0000800001=(((unsigned long)udiTCPIdent==(unsigned long)0))&1),0)))){

(fbClntConnect.bEn=0);;fbTCPClntConnect(&fbClntConnect);

(bConnected=bRun);
}

if(((~bRun&Edge0000800002&1?((Edge0000800002=bRun&1),1):((Edge0000800002=bRun&1),0))|(~(((unsigned long)udiTCPIdent!=(unsigned long)0))&Edge0000800003&1?((Edge0000800003=(((unsigned long)udiTCPIdent!=(unsigned long)0))&1),1):((Edge0000800003=(((unsigned long)udiTCPIdent!=(unsigned long)0))&1),0)))){
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);
(fbSequenceUS.bEn=0);;fbHermesSequenceUS(&fbSequenceUS);
(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);
(fbClose.bEn=0);;fbTCPClose(&fbClose);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bHandshakeDone=0);
(bBlkUS=0);
(bBABlkUS=0);
(bBFBlkUS=0);
(bManuallInsertLastZone=0);
(bAccDataReq=0);
(bBFAccDataReq=0);
(bOverWriteSlt=0);
(bOverWriteWidth=0);
(bBFOverWriteSlt=0);
(bBFOverWriteWidth=0);
(bRstConnection=0);
(bRstState=0);
(bUSRdy=0);
(bDSRdy=0);
(bTransporting=0);
(bStopTransport=0);

__AS__MEMSET(((unsigned long)(&tyMsgTypeRcv)),0,24);
__AS__MEMSET(((unsigned long)(&a_eMsgSend)),0,204);
(udiMsgSendBffr=0);
}


if(((((signed long)eStatus1==(signed long)3))&bRstErr)){
(eStatus1=0);
(udiStatus1=0);

(fbClntConnect.bEn=0);;fbTCPClntConnect(&fbClntConnect);
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);
(fbSequenceUS.bEn=0);;fbHermesSequenceUS(&fbSequenceUS);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);
(fbClose.bEn=0);;fbTCPClose(&fbClose);
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bHandshakeDone=0);
(bBlkUS=0);
(bBABlkUS=0);
(bBFBlkUS=0);
(bManuallInsertLastZone=0);
(bAccDataReq=0);
(bBFAccDataReq=0);
(bOverWriteSlt=0);
(bOverWriteWidth=0);
(bBFOverWriteSlt=0);
(bBFOverWriteWidth=0);
(bRstConnection=0);
(bRstState=0);
(bUSRdy=0);
(bDSRdy=0);
(bTransporting=0);
(bStopTransport=0);
(bBoardChkReq=0);

__AS__MEMSET(((unsigned long)(&tyMsgTypeRcv)),0,24);
__AS__MEMSET(((unsigned long)(&a_eMsgSend)),0,204);
(udiMsgSendBffr=0);
}

if(((((signed long)eStatus2==(signed long)3))&bRstErr)){
(eStatus2=0);
(udiStatus2=0);

(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);

}

if(((((signed long)eStatus3==(signed long)3))&bRstErr)){
(eStatus3=0);
(udiStatus3=0);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);
}

if(((((signed long)eStatus4==(signed long)3))&bRstErr)){
(eStatus4=0);
(udiStatus4=0);
}

__AS__Action__Act_Background_AccData();


}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_Info.st"
static void __AS__Action__Act_Background_Info(void){
{if(((((unsigned long)(unsigned char)usiAccDataStep!=(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)usiBFAccDataStep!=(unsigned long)(unsigned char)0)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Upstream Hermes Request New Recipe"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Old Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),((*(p_sRecipeNm)))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Old Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(((*(p_diWidthInUM)))))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"New Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sReqRecipeNm); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"New Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(diReqWidthInUM))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(bRcvBoardInfoOk){

{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)"Board Info Received From Upstream"; for(zzIndex=0; zzIndex<33l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"PCB Transfer to Last Zone is Blocked"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"Please Insert PCB to Last Zone Outlet"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"and PCB Data Will Be Overwritten"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"To Cancel,unpress the Query Board Info Button"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(bRcvBoardInfoIncompl){
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg2))); plcstring* zzRValue=(plcstring*)"Board Info Not Found From Upstream"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}


}imp22_else2_0:imp22_end2_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_TCPConnect.st"
static void __AS__Action__Act_Background_TCPConnect(void){
{
if(((((signed long)eStatus1!=(signed long)3))&(((signed long)eStatus2!=(signed long)3)))){


{int zzIndex; plcstring* zzLValue=(plcstring*)fbClntConnect.sClntIP; plcstring* zzRValue=(plcstring*)((*(p_sIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbClntConnect.sSvrIP; plcstring* zzRValue=(plcstring*)((*(p_tyParam)).sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbClntConnect.uiClntPort=((*(p_tyParam)).uiClntPort));
(fbClntConnect.uiSvrPort=((*(p_tyParam)).uiHostPort));
(fbClntConnect.bEn=1);;fbTCPClntConnect(&fbClntConnect);

if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)0))){
(udiTCPIdent=fbClntConnect.udiTCPIdent);
(fbClntConnect.bEn=0);;fbTCPClntConnect(&fbClntConnect);

}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2313))){
(fbClntConnect.bEn=0);;fbTCPClntConnect(&fbClntConnect);

}else if(((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2323))|(((unsigned long)(unsigned char)bConnected==(unsigned long)(unsigned char)0)))){
(udiStatus5=10013);

}else if((((unsigned long)fbClntConnect.udiStatus<(unsigned long)65534))){
(eStatus1=3);

if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2300))){
(udiStatus1=10000);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2302))){
(udiStatus1=10001);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2303))){
(udiStatus1=10002);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2304))){
(udiStatus1=10003);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2305))){
(udiStatus1=10004);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2306))){
(udiStatus1=10005);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2307))){
(udiStatus1=10006);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2308))){
(udiStatus1=10007);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2309))){
(udiStatus1=10008);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2310))){
(udiStatus1=10009);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2313))){
(udiStatus1=10010);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2314))){
(udiStatus1=10011);
}else if((((unsigned long)fbClntConnect.udiStatus==(unsigned long)2315))){
(udiStatus1=10012);

}else{
(udiStatus1=fbClntConnect.udiStatus);
}

}

}

}imp34_end2_0:imp34_else1_3:imp34_end1_0:imp34_else0_0:imp34_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_TCPRcv.st"
static void __AS__Action__Act_Background_TCPRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){


if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
(fbRcv.udiTCPIdent=udiTCPIdent);
(fbRcv.bEn=1);;fbTCPRcv(&fbRcv);
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)sRcv; plcstring* zzRValue=(plcstring*)((*(p_sInternalRcv))); for(zzIndex=0; zzIndex<65535l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((((unsigned long)fbRcv.udiStatus==(unsigned long)0))|((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)1))&(((signed long)LEN(sRcv)>(signed long)(signed long)(short)0))))){

fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
__AS__MEMSET(((unsigned long)(&a_sLogList[udiLogCntr-1])),0,65536);
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sDT)),LEN(sDT));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n")),LEN("\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"RCV_FRM_US\r\n")),LEN("RCV_FRM_US\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sRcv)),LEN(sRcv));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n\r\n")),LEN("\r\n\r\n"));

(udiLogCntr=(udiLogCntr+1));
if((((unsigned long)udiLogCntr==(unsigned long)11))){
(udiLogCntr=1);
}

fXMLConvertToTable(((unsigned long)(&sRcv)),LEN(sRcv),((unsigned long)(&a_tyXMLTableDataRcv)),((unsigned long)(&a_tyXMLTableDataRcv[0].sTitle)),3,((unsigned long)(&a_tyXMLTableDataRcv[0].sValue)),255,((unsigned long)(&a_tyXMLTableDataRcv[0].uiSize)),260,201,((unsigned long)(&udiXMLTableWriteIdx)));

(fbParseXMLTable.iTotalIdxWrite=(signed short)udiXMLTableWriteIdx);
fbHermesParseXMLTable(&fbParseXMLTable);

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCheckAlive==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCheckAlive=1);
(tyCheckAliveRcv=*(struct tyHermesCheckAlive*)&fbParseXMLTable.tyCheckAlive);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCheckAlivePing==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCheckAlivePing=1);
(tyCheckAlivePingRcv=*(struct tyHermesCheckAlive*)&fbParseXMLTable.tyCheckAlivePing);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCheckAlivePong==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCheckAlivePong=1);
(tyCheckAlivePongRcv=*(struct tyHermesCheckAlive*)&fbParseXMLTable.tyCheckAlivePong);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bServiceDescription==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bServiceDescription=1);
(tyServiceDescriptionRcv=*(struct tyHermesServiceDescription*)&fbParseXMLTable.tyServiceDescription);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bNotification==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bNotification=1);
(tyNotificationRcv=*(struct tyHermesNotification*)&fbParseXMLTable.tyNotification);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bBoardAvailable==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bBoardAvailable=1);
(tyBoardAvailableRcv=*(struct tyHermesBoardAvailable*)&fbParseXMLTable.tyBoardAvailable);

__AS__MEMSET(((unsigned long)(&a_tyXMLTableDataBrdAvl)),0,52260);
__AS__MEMCPY(((unsigned long)(&a_tyXMLTableDataBrdAvl)),(((unsigned long)(&a_tyXMLTableDataRcv))+(fbParseXMLTable.iBoardAvailableFirstIdx*260)),(((fbParseXMLTable.iBoardAvailableLastIdx-fbParseXMLTable.iBoardAvailableFirstIdx)+1)*260));

(iXMLTableDataBrdAvlTtlIdx=((fbParseXMLTable.iBoardAvailableLastIdx-fbParseXMLTable.iBoardAvailableFirstIdx)+1));

}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bRevokeBoardAvailable==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bRevokeBoardAvailable=1);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bMachineReady==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bMachineReady=1);
(tyMachineReady=*(struct tyHermesMachineReady*)&fbParseXMLTable.tyMachineReady);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bRevokeMachineReady==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bRevokeMachineReady=1);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bStartTransport==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bStartTransport=1);
(tyStartTransport=*(struct tyHermesStartTransport*)&fbParseXMLTable.tyStartTransport);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bStopTransport==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bStopTransport=1);
(tyStopTransport=*(struct tyHermesStopTransport*)&fbParseXMLTable.tyStopTransport);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bTransportFinished==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bTransportFinished=1);
(tyTransportFinished=*(struct tyHermesTransportFinished*)&fbParseXMLTable.tyTransportFinished);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bSetConfiguration==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bSetConfiguration=1);
(tySetConfiguration=*(struct tyHermesSetConfiguration*)&fbParseXMLTable.tySetConfiguration);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bGetConfiguration==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bGetConfiguration=1);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCurrentConfiguration==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCurrentConfiguration=1);
(tyCurrentConfiguration=*(struct tyHermesCurrentConfiguration*)&fbParseXMLTable.tyCurrentConfiguration);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bBoardForecast==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bBoardForecast=1);
(tyBoardForecastRcv=*(struct tyHermesBoardForecast*)&fbParseXMLTable.tyBoardForecast);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bQueryBoardInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bQueryBoardInfo=1);
(tyQueryBoardInfo=*(struct tyHermesQueryBoardInfo*)&fbParseXMLTable.tyQueryBoardInfo);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bSendBoardInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bSendBoardInfo=1);
(tySendBoardInfoRcv=*(struct tyHermesSendBoardInfo*)&fbParseXMLTable.tySendBoardInfo);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCommand==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCommand=1);
(tyCommandRcv=*(struct tyHermesCommand*)&fbParseXMLTable.tyCommand);
}

(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if(((((unsigned long)fbRcv.udiStatus==(unsigned long)2317))&(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0)))){
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if(((((unsigned long)fbRcv.udiStatus==(unsigned long)2316))&(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0)))){
(bRstConnection=1);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if(((((unsigned long)fbRcv.udiStatus==(unsigned long)2318))&(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0)))){
(bRstConnection=1);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if(((((unsigned long)fbRcv.udiStatus<(unsigned long)65534))&(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0)))){
(eStatus1=3);

if((((unsigned long)fbRcv.udiStatus==(unsigned long)2300))){
(udiStatus1=10014);
}else if((((unsigned long)fbRcv.udiStatus==(unsigned long)2319))){
(udiStatus1=10015);
}else{
(udiStatus1=fbRcv.udiStatus);
}

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}

}

}imp35_else2_4:imp35_end2_0:imp35_else0_0:imp35_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_NotificationRcv.st"
static void __AS__Action__Act_Background_NotificationRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bNotification==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bNotification=0);

(bRstConnection=(fHermesNotificationRstConn(&tyNotificationRcv)|bRstConnection));


}

}

}imp24_else1_0:imp24_end1_0:imp24_else0_0:imp24_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_IllegalMsg.st"
static void __AS__Action__Act_Background_IllegalMsg(void){
{
if((((signed long)eStatus2!=(signed long)3))){

(udiStatus2=fHermesIllegalMsgUS(fbSequenceUS.eState,&tyMsgTypeRcv,fbSequenceUS.bBoardAvailable));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2770))){
(udiStatus2=10016);
}else if((((unsigned long)udiStatus2==(unsigned long)2771))){
(udiStatus2=10017);
}else if((((unsigned long)udiStatus2==(unsigned long)2772))){
(udiStatus2=10018);
}else if((((unsigned long)udiStatus2==(unsigned long)2773))){
(udiStatus2=10019);
}else if((((unsigned long)udiStatus2==(unsigned long)2774))){
(udiStatus2=10020);
}else if((((unsigned long)udiStatus2==(unsigned long)2775))){
(udiStatus2=10021);
}else if((((unsigned long)udiStatus2==(unsigned long)2776))){
(udiStatus2=10022);
}else if((((unsigned long)udiStatus2==(unsigned long)2777))){
(udiStatus2=10023);
}else if((((unsigned long)udiStatus2==(unsigned long)2778))){
(udiStatus2=10024);
}else if((((unsigned long)udiStatus2==(unsigned long)2779))){
(udiStatus2=10025);
}else if((((unsigned long)udiStatus2==(unsigned long)2780))){
(udiStatus2=10026);
}else if((((unsigned long)udiStatus2==(unsigned long)2781))){
(udiStatus2=10027);
}else if((((unsigned long)udiStatus2==(unsigned long)2782))){
(udiStatus2=10028);
}else if((((unsigned long)udiStatus2==(unsigned long)2783))){
(udiStatus2=10029);
}else if((((unsigned long)udiStatus2==(unsigned long)2784))){
(udiStatus2=10030);
}else if((((unsigned long)udiStatus2==(unsigned long)2785))){
(udiStatus2=10031);
}else if((((unsigned long)udiStatus2==(unsigned long)2786))){
(udiStatus2=10032);
}else if((((unsigned long)udiStatus2==(unsigned long)2787))){
(udiStatus2=10033);
}else if((((unsigned long)udiStatus2==(unsigned long)2788))){
(udiStatus2=10034);
}else if((((unsigned long)udiStatus2==(unsigned long)2789))){
(udiStatus2=10035);
}else if((((unsigned long)udiStatus2==(unsigned long)2790))){
(udiStatus2=10036);
}else if((((unsigned long)udiStatus2==(unsigned long)2791))){
(udiStatus2=10037);
}else if((((unsigned long)udiStatus2==(unsigned long)2792))){
(udiStatus2=10038);
}else if((((unsigned long)udiStatus2==(unsigned long)2793))){
(udiStatus2=10039);
}else if((((unsigned long)udiStatus2==(unsigned long)2794))){
(udiStatus2=10040);
}else if((((unsigned long)udiStatus2==(unsigned long)2795))){
(udiStatus2=10041);
}else if((((unsigned long)udiStatus2==(unsigned long)2796))){
(udiStatus2=10042);
}else if((((unsigned long)udiStatus2==(unsigned long)2797))){
(udiStatus2=10043);
}else if((((unsigned long)udiStatus2==(unsigned long)2798))){
(udiStatus2=10044);
}else if((((unsigned long)udiStatus2==(unsigned long)2799))){
(udiStatus2=10045);
}else if((((unsigned long)udiStatus2==(unsigned long)2800))){
(udiStatus2=10046);
}else if((((unsigned long)udiStatus2==(unsigned long)2801))){
(udiStatus2=10047);
}else if((((unsigned long)udiStatus2==(unsigned long)2802))){
(udiStatus2=10048);
}else if((((unsigned long)udiStatus2==(unsigned long)2803))){
(udiStatus2=10049);
}else if((((unsigned long)udiStatus2==(unsigned long)2804))){
(udiStatus2=10050);
}else if((((unsigned long)udiStatus2==(unsigned long)2805))){
(udiStatus2=10051);
}else if((((unsigned long)udiStatus2==(unsigned long)2806))){
(udiStatus2=10052);
}else if((((unsigned long)udiStatus2==(unsigned long)2807))){
(udiStatus2=10053);
}else if((((unsigned long)udiStatus2==(unsigned long)2808))){
(udiStatus2=10054);
}else if((((unsigned long)udiStatus2==(unsigned long)2809))){
(udiStatus2=10055);
}else if((((unsigned long)udiStatus2==(unsigned long)2810))){
(udiStatus2=10056);
}else if((((unsigned long)udiStatus2==(unsigned long)2811))){
(udiStatus2=10057);
}else if((((unsigned long)udiStatus2==(unsigned long)2812))){
(udiStatus2=10058);
}else if((((unsigned long)udiStatus2==(unsigned long)2813))){
(udiStatus2=10059);
}else if((((unsigned long)udiStatus2==(unsigned long)2814))){
(udiStatus2=10060);
}else if((((unsigned long)udiStatus2==(unsigned long)2815))){
(udiStatus2=10061);
}else if((((unsigned long)udiStatus2==(unsigned long)2816))){
(udiStatus2=10062);
}else if((((unsigned long)udiStatus2==(unsigned long)2817))){
(udiStatus2=10063);
}else if((((unsigned long)udiStatus2==(unsigned long)2818))){
(udiStatus2=10064);
}else if((((unsigned long)udiStatus2==(unsigned long)2819))){
(udiStatus2=10065);
}else if((((unsigned long)udiStatus2==(unsigned long)2820))){
(udiStatus2=10066);
}else if((((unsigned long)udiStatus2==(unsigned long)2821))){
(udiStatus2=10067);
}else if((((unsigned long)udiStatus2==(unsigned long)2822))){
(udiStatus2=10068);
}else if((((unsigned long)udiStatus2==(unsigned long)2823))){
(udiStatus2=10069);
}else if((((unsigned long)udiStatus2==(unsigned long)2824))){
(udiStatus2=10070);
}else if((((unsigned long)udiStatus2==(unsigned long)2825))){
(udiStatus2=10071);
}else if((((unsigned long)udiStatus2==(unsigned long)2826))){
(udiStatus2=10072);
}else if((((unsigned long)udiStatus2==(unsigned long)2827))){
(udiStatus2=10073);
}else if((((unsigned long)udiStatus2==(unsigned long)2828))){
(udiStatus2=10074);
}else if((((unsigned long)udiStatus2==(unsigned long)2829))){
(udiStatus2=10075);
}else if((((unsigned long)udiStatus2==(unsigned long)2830))){
(udiStatus2=10076);
}else if((((unsigned long)udiStatus2==(unsigned long)2831))){
(udiStatus2=10077);
}else if((((unsigned long)udiStatus2==(unsigned long)2832))){
(udiStatus2=10078);
}else if((((unsigned long)udiStatus2==(unsigned long)2833))){
(udiStatus2=10079);
}else if((((unsigned long)udiStatus2==(unsigned long)2834))){
(udiStatus2=10080);
}else if((((unsigned long)udiStatus2==(unsigned long)2835))){
(udiStatus2=10081);
}else if((((unsigned long)udiStatus2==(unsigned long)2836))){
(udiStatus2=10082);
}else if((((unsigned long)udiStatus2==(unsigned long)2837))){
(udiStatus2=10083);
}else if((((unsigned long)udiStatus2==(unsigned long)2838))){
(udiStatus2=10084);
}else if((((unsigned long)udiStatus2==(unsigned long)2839))){
(udiStatus2=10085);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}

}imp21_else1_0:imp21_end1_0:imp21_else0_0:imp21_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_ChkParamRcv.st"
static void __AS__Action__Act_Background_ChkParamRcv(void){
{
if((((signed long)eStatus2!=(signed long)3))){


if((((unsigned long)(unsigned char)tyMsgTypeRcv.bServiceDescription==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSD(&tyServiceDescriptionRcv,((*(p_tyParam)).iLaneID)));

if((((unsigned long)udiStatus2==(unsigned long)2731))){
(udiStatus2=0);
}

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2726))){
(udiStatus2=10086);
}else if((((unsigned long)udiStatus2==(unsigned long)2727))){
(udiStatus2=10087);
}else if((((unsigned long)udiStatus2==(unsigned long)2728))){
(udiStatus2=10088);
}else if((((unsigned long)udiStatus2==(unsigned long)2729))){
(udiStatus2=10089);
}else if((((unsigned long)udiStatus2==(unsigned long)2730))){
(udiStatus2=10090);
}else if((((unsigned long)udiStatus2==(unsigned long)2731))){
(udiStatus2=10091);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bNotification==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamN(&tyNotificationRcv));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2732))){
(udiStatus2=10092);
}else if((((unsigned long)udiStatus2==(unsigned long)2733))){
(udiStatus2=10093);
}else if((((unsigned long)udiStatus2==(unsigned long)2734))){
(udiStatus2=10094);
}else if((((unsigned long)udiStatus2==(unsigned long)2735))){
(udiStatus2=10095);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bBoardAvailable==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamBA(&tyBoardAvailableRcv));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2736))){
(udiStatus2=10096);
}else if((((unsigned long)udiStatus2==(unsigned long)2737))){
(udiStatus2=10097);
}else if((((unsigned long)udiStatus2==(unsigned long)2738))){
(udiStatus2=10098);
}else if((((unsigned long)udiStatus2==(unsigned long)2739))){
(udiStatus2=10099);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bTransportFinished==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamTF(&tyTransportFinished));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2744))){
(udiStatus2=10100);
}else if((((unsigned long)udiStatus2==(unsigned long)2745))){
(udiStatus2=10101);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bBoardForecast==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)bFeatureBoardForecast==(unsigned long)(unsigned char)1))){

(udiStatus2=fHermesChkParamBF(&tyBoardForecastRcv));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2764))){
(udiStatus2=10102);

}else if((((unsigned long)udiStatus2==(unsigned long)2765))){
(udiStatus2=10103);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}else{
(tyMsgTypeRcv.bBoardForecast=0);
}
}



if((((unsigned long)(unsigned char)tyMsgTypeRcv.bCommand==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamCommand(&tyCommandRcv));


if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);








fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}


}


}

}imp17_else19_0:imp17_end19_0:imp17_else18_0:imp17_end18_0:imp17_else0_0:imp17_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_CmpParamRcv.st"
static void __AS__Action__Act_Background_CmpParamRcv(void){
{
if((((signed long)eStatus2!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bTransportFinished==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSTTF(&tyStartTransport,&tyTransportFinished));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2714))){
(udiStatus2=10104);
}else if((((unsigned long)udiStatus2==(unsigned long)2715))){
(udiStatus2=10105);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}


if(((((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureQueryBoardInfo))){
if((((unsigned long)(unsigned char)tyMsgTypeRcv.bSendBoardInfo==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSBIQBI(&tySendBoardInfoRcv,&tyQueryBoardInfo));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2769))){
(udiStatus2=10170);
}else if((((unsigned long)udiStatus2==(unsigned long)2770))){
(udiStatus2=10171);
}else if((((unsigned long)udiStatus2==(unsigned long)2771))){
(udiStatus2=10172);
}else if((((unsigned long)udiStatus2==(unsigned long)2772))){
(udiStatus2=10173);
}


fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyMsgTypeRcv.bSendBoardInfo=0);
}
}
}


fHermesChkParamBFMR(&tyBoardForecastRcv,&tyMachineReady);

}

}imp18_else0_0:imp18_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_Sequence.st"
static void __AS__Action__Act_Background_Sequence(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)0))){
((*(p_bRcvIncompl))=1);
}

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bTransportFinished==(unsigned long)(unsigned char)1))){
if((((signed long)tyTransportFinished.tyData.eTransferState==(signed long)1))){
((*(p_bRcvNotStart))=1);
}else if((((signed long)tyTransportFinished.tyData.eTransferState==(signed long)2))){
((*(p_bRcvIncompl))=1);
}
}




(bBlkUS=(bBABlkUS|bBFBlkUS|bManuallInsertLastZone|bReverseDSSndBfWBrdID|bReverseRcvBlkUS|(((*(p_bHermesSwitchtoRvrseTransport))^1))));

(bBoardAvailableRcved=tyMsgTypeRcv.bBoardAvailable);


(fbSequenceUS.bRstState=bRstState);
(fbSequenceUS.bRdyRcv=(((*(p_bRdyRcv)))&(((signed long)eStatus2!=(signed long)3))));
(fbSequenceUS.bBlkUS=bBlkUS);
(fbSequenceUS.bRdyTransport=((*(p_bRdyTransport))));
(fbSequenceUS.bRcvCompl=((*(p_bRcvCompl))));
(fbSequenceUS.bRcvIncompl=((*(p_bRcvIncompl))));
(fbSequenceUS.bRcvNotStart=((*(p_bRcvNotStart))));
(fbSequenceUS.bProcessBoardForecastId=bProcessBoardForecastId);

(fbSequenceUS.bEn=1);;fbHermesSequenceUS(&fbSequenceUS);

(bNotAvlNotRdy=fbSequenceUS.bNotAvlNotRdy);

(bUSRdy=fbSequenceUS.bUSRdy);
(bDSRdy=fbSequenceUS.bDSRdy);
(bTransporting=fbSequenceUS.bTransporting);
(bStopTransport=fbSequenceUS.bStopTransport);
(bUSGdRdy=((((unsigned long)(unsigned char)tyBoardAvailableRcv.tyAvl.bFailedBoard==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)tyBoardAvailableRcv.tyAvl.bFailedBoard==(unsigned long)(unsigned char)1))&(((signed long)tyBoardAvailableRcv.tyData.eFailedBoard!=(signed long)2)))));
(bDSGdRdy=((((unsigned long)(unsigned char)tyMachineReady.tyAvl.bFailedBoard==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)tyMachineReady.tyAvl.bFailedBoard==(unsigned long)(unsigned char)1))&(((signed long)tyMachineReady.tyData.eFailedBoard!=(signed long)2)))));


(iAction=((((unsigned long)(unsigned char)tyBoardAvailableRcv.tyAvl.bAction==(unsigned long)(unsigned char)1))*tyBoardAvailableRcv.tyData.iAction));

if((((signed long)fbSequenceUS.eState>=(signed long)4))){
(bHandshakeDone=1);
}else{
(bHandshakeDone=0);
}

if(((((signed long)fbSequenceUS.eState==(signed long)8))&~Edge0003000000&1?((Edge0003000000=(((signed long)fbSequenceUS.eState==(signed long)8))&1),1):((Edge0003000000=(((signed long)fbSequenceUS.eState==(signed long)8))&1),0))){
((*(p_bRcvCompl))=0);
((*(p_bRcvIncompl))=0);
((*(p_bRcvNotStart))=0);
}

if((((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)4))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),4);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyServiceDescriptionSnd.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyServiceDescriptionSnd.tyData.iLaneId=((*(p_tyParam)).iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyServiceDescriptionSnd.tyData.sInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyParam)).sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyServiceDescriptionSnd.tyData.sVersion; plcstring* zzRValue=(plcstring*)((*(p_sVersion))); for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCheckAliveResponse=(((*(p_tyParam)).bFeatureCheckAliveResponse)&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))));
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureBoardForecast=((*(p_tyParam)).bFeatureBoardForecast));
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureQueryBoardInfo=((*(p_tyParam)).bFeatureQueryBoardInfo));
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureSendBoardInfo=0);

(tyServiceDescriptionSnd.tyAvl.bMachineId=1);
(tyServiceDescriptionSnd.tyAvl.bLaneId=(((signed long)(signed long)(short)tyServiceDescriptionSnd.tyData.iLaneId!=(signed long)(signed long)(short)0)));
(tyServiceDescriptionSnd.tyAvl.bInterfaceId=((__AS__STRING_CMP(tyServiceDescriptionSnd.tyData.sInterfaceId,"")!=0)));
(tyServiceDescriptionSnd.tyAvl.bVersion=1);
(tyServiceDescriptionSnd.tyAvl.bSupportedFeatures=(((*(p_tyParam)).bFeatureCheckAliveResponse)|((*(p_tyParam)).bFeatureBoardForecast)|((*(p_tyParam)).bFeatureQueryBoardInfo)));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse=(((*(p_tyParam)).bFeatureCheckAliveResponse)&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureBoardForecast=((*(p_tyParam)).bFeatureBoardForecast));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo=((*(p_tyParam)).bFeatureQueryBoardInfo));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo=0);

}else if((((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)9))){
if((((unsigned long)(unsigned char)bReplyMcRdyId==(unsigned long)(unsigned char)0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),9);

(tyMachineReady.tyData.eFailedBoard=((*(p_eFailedBoard))));
(tyMachineReady.tyAvl.bFailedBoard=1);
(tyMachineReady.tyAvl.bForecastId=0);
(tyMachineReady.tyAvl.bBoardId=0);
(tyMachineReady.tyAvl.bProductTypeId=0);
(tyMachineReady.tyAvl.bFlippedBoard=0);
(tyMachineReady.tyAvl.bLength=0);
(tyMachineReady.tyAvl.bWidth=0);
(tyMachineReady.tyAvl.bThickness=0);
(tyMachineReady.tyAvl.bConveyorSpeed=0);
(tyMachineReady.tyAvl.bTopClearanceHeight=0);
(tyMachineReady.tyAvl.bBottomClearanceHeight=0);
(tyMachineReady.tyAvl.bWeight=0);
(tyMachineReady.tyAvl.bWorkOrderId=0);
(tyMachineReady.tyAvl.bBatchId=0);

}else{
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),9);

(tyMachineReady.tyData.eFailedBoard=((*(p_eFailedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMachineReady.tyData.sForecastId; plcstring* zzRValue=(plcstring*)tyBoardForecastAcc.tyData.sForecastId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyMachineReady.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_sRecipeNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyMachineReady.tyData.rWidth=((float)((*(p_diWidthInUM)))/1000));
(tyMachineReady.tyAvl.bFailedBoard=1);
(tyMachineReady.tyAvl.bForecastId=((__AS__STRING_CMP(tyBoardForecastAcc.tyData.sForecastId,"")!=0)));
(tyMachineReady.tyAvl.bBoardId=0);
(tyMachineReady.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardForecastAcc.tyData.sProductTypeId,"")!=0)));
(tyMachineReady.tyAvl.bFlippedBoard=0);
(tyMachineReady.tyAvl.bLength=0);
(tyMachineReady.tyAvl.bWidth=((tyMachineReady.tyData.rWidth!=0)));
(tyMachineReady.tyAvl.bThickness=0);
(tyMachineReady.tyAvl.bConveyorSpeed=0);
(tyMachineReady.tyAvl.bTopClearanceHeight=0);
(tyMachineReady.tyAvl.bBottomClearanceHeight=0);
(tyMachineReady.tyAvl.bWeight=0);
(tyMachineReady.tyAvl.bWorkOrderId=0);
(tyMachineReady.tyAvl.bBatchId=0);

}

}else if((((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)10))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),10);

}else if((((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)11))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),11);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyStartTransport.tyData.sBoardId; plcstring* zzRValue=(plcstring*)tyBoardAvailableRcv.tyData.sBoardId; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyStartTransport.tyAvl.bBoardId=1);
(tyStartTransport.tyAvl.bConveyorSpeed=0);

}else if((((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)12))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),12);

if((((unsigned long)(unsigned char)((*(p_bRcvCompl)))==(unsigned long)(unsigned char)1))){
(tyStopTransport.tyData.eTransferState=3);
}else if((((unsigned long)(unsigned char)((*(p_bRcvIncompl)))==(unsigned long)(unsigned char)1))){
(tyStopTransport.tyData.eTransferState=2);
}else{
(tyStopTransport.tyData.eTransferState=1);
}
{int zzIndex; plcstring* zzLValue=(plcstring*)tyStopTransport.tyData.sBoardId; plcstring* zzRValue=(plcstring*)tyStartTransport.tyData.sBoardId; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyStopTransport.tyAvl.bTransferState=1);
(tyStopTransport.tyAvl.bBoardId=1);

}

}

(bStopTransportSent=(((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)12)));


}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_SequenceTO.st"
static void __AS__Action__Act_Background_SequenceTO(void){
{
if(((((signed long)eStatus1!=(signed long)3))&(((signed long)eStatus2!=(signed long)3)))){


(fbSequenceTO.eState=fbSequenceUS.eState);
(fbSequenceTO.tConnTimeOut=((*(p_tConnTimeOut))));
(fbSequenceTO.tTransportTimeOut=(plctime)((*(p_diTransferInTO))));
(fbSequenceTO.bEn=1);;fbHermesSequenceTO(&fbSequenceTO);

if(((((unsigned long)fbSequenceTO.udiStatus>(unsigned long)0))&(((unsigned long)fbSequenceTO.udiStatus<(unsigned long)65534)))){

if((((unsigned long)fbSequenceTO.udiStatus==(unsigned long)2912))){
(eStatus1=3);
(udiStatus1=10106);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus1-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)fbSequenceTO.udiStatus==(unsigned long)2913))){
((*(p_bRcvIncompl))=1);

(eStatus2=3);
(udiStatus2=10107);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
(eStatus2=3);
(udiStatus2=fbSequenceTO.udiStatus);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}

}

}imp31_end2_0:imp31_else1_0:imp31_end1_0:imp31_else0_0:imp31_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_BoardForecast.st"
static void __AS__Action__Act_Background_BoardForecast(void){
{

(bFeatureBoardForecast=((((unsigned long)(unsigned char)((*(p_tyParam)).bFeatureBoardForecast)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureBoardForecast==(unsigned long)(unsigned char)1))));


if(bFeatureBoardForecast){
(bBrdForecastRcv=tyMsgTypeRcv.bBoardForecast);

if((tyMsgTypeRcv.bBoardForecast&((__AS__STRING_CMP(tyBoardForecastRcv.tyData.sForecastId,"")!=0))&(((unsigned long)(unsigned char)bProcessBoardForecastId==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bBFAccDataReq==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bManuallInsertLastZone==(unsigned long)(unsigned char)0)))){
(bProcessBoardForecastId=1);
(tyBoardForecastAcc=*(struct tyHermesBoardForecast*)&tyBoardForecastRcv);
(tyMsgTypeRcv.bBoardForecast=0);

}else if((tyMsgTypeRcv.bBoardForecast&((__AS__STRING_CMP(tyBoardForecastRcv.tyData.sForecastId,"")==0))&(((unsigned long)(unsigned char)bProcessBoardForecastId==(unsigned long)(unsigned char)0)))){
(tyBoardForecastAcc=*(struct tyHermesBoardForecast*)&tyBoardForecastRcv);
(tyMsgTypeRcv.bBoardForecast=0);
}
}else{
(bProcessBoardForecastId=0);
}






























































































































































































































































}imp12_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_ChkAlive.st"
static void __AS__Action__Act_Background_ChkAlive(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbCheckAlive.bDataRcv=(tyMsgTypeRcv.bCheckAlive|tyMsgTypeRcv.bBoardAvailable|tyMsgTypeRcv.bRevokeBoardAvailable|tyMsgTypeRcv.bTransportFinished|tyMsgTypeRcv.bTransportFinished|tyMsgTypeRcv.bBoardForecast|tyMsgTypeRcv.bSendBoardInfo|tyMsgTypeRcv.bCommand));
(fbCheckAlive.tSendTm=((*(p_tyParam)).tSndAlive));
(fbCheckAlive.tRcvTimeOut=((*(p_tyParam)).tRcvAlive));
(fbCheckAlive.bEn=1);;fbHermesCheckAlive(&fbCheckAlive);

if(((((unsigned long)fbCheckAlive.udiStatus>(unsigned long)0))&(((unsigned long)fbCheckAlive.udiStatus<(unsigned long)65534)))){
(eStatus1=3);

if((((unsigned long)fbCheckAlive.udiStatus==(unsigned long)2767))){
(udiStatus1=10132);
}else{
(udiStatus1=fbCheckAlive.udiStatus);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus1-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
if((fbCheckAlive.bDataSend&~Edge0001400000&1?((Edge0001400000=fbCheckAlive.bDataSend&1),1):((Edge0001400000=fbCheckAlive.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),1);
(tyCheckAliveSnd=*(struct tyHermesCheckAlive*)&fbCheckAlive.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlive=0);

}

}imp14_else0_0:imp14_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_ChkAliveSendPing.st"
static void __AS__Action__Act_Background_ChkAliveSendPing(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbCheckAliveSendPing.bDataRcv=tyMsgTypeRcv.bCheckAlivePong);
(fbCheckAliveSendPing.tyDataRcv=*(struct tyHermesCheckAlive*)&tyCheckAlivePongRcv);
(fbCheckAliveSendPing.tyDTStructure=*(struct DTStructure*)&((*(p_tyDTStructure))));
(fbCheckAliveSendPing.tSendTm=((*(p_tyParam)).tSndAlive));
(fbCheckAliveSendPing.tRcvTimeOut=((*(p_tyParam)).tRcvAlive));
(fbCheckAliveSendPing.bEn=1);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);

if(((((unsigned long)fbCheckAliveSendPing.udiStatus>(unsigned long)0))&(((unsigned long)fbCheckAliveSendPing.udiStatus<(unsigned long)65534)))){
(eStatus1=3);

if((((unsigned long)fbCheckAliveSendPing.udiStatus==(unsigned long)2768))){
(udiStatus1=10133);
}else if((((unsigned long)fbCheckAliveSendPing.udiStatus==(unsigned long)2769))){
(udiStatus1=10134);
}else{
(udiStatus1=fbCheckAliveSendPing.udiStatus);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus1-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
if((fbCheckAliveSendPing.bDataSend&~Edge0001600000&1?((Edge0001600000=fbCheckAliveSendPing.bDataSend&1),1):((Edge0001600000=fbCheckAliveSendPing.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),2);
(tyCheckAlivePingSnd=*(struct tyHermesCheckAlive*)&fbCheckAliveSendPing.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlivePong=0);

}

}imp16_else0_0:imp16_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_ChkAliveRcvPing.st"
static void __AS__Action__Act_Background_ChkAliveRcvPing(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbCheckAliveRcvPing.bDataRcv=tyMsgTypeRcv.bCheckAlivePing);
(fbCheckAliveRcvPing.tyDataRcv=*(struct tyHermesCheckAlive*)&tyCheckAlivePingRcv);
(fbCheckAliveRcvPing.bEn=1);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);

if(((((unsigned long)fbCheckAliveRcvPing.udiStatus>(unsigned long)0))&(((unsigned long)fbCheckAliveRcvPing.udiStatus<(unsigned long)65534)))){
(eStatus1=3);
(udiStatus1=fbCheckAliveRcvPing.udiStatus);

}else{
if((fbCheckAliveRcvPing.bDataSend&~Edge0001500000&1?((Edge0001500000=fbCheckAliveRcvPing.bDataSend&1),1):((Edge0001500000=fbCheckAliveRcvPing.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),3);
(tyCheckAlivePongSnd=*(struct tyHermesCheckAlive*)&fbCheckAliveRcvPing.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlivePing=0);

}

}imp15_else0_0:imp15_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_ChgConfig.st"
static void __AS__Action__Act_Background_ChgConfig(void){
{
if((((signed long)eStatus2!=(signed long)3))){




if(((((signed long)(signed long)(short)tyParamOld.iLaneID!=(signed long)(signed long)(short)((*(p_tyParam)).iLaneID)))|((__AS__STRING_CMP(tyParamOld.sHostAddress,((*(p_tyParam)).sHostAddress))!=0))|(((unsigned long)(unsigned short)tyParamOld.uiHostPort!=(unsigned long)(unsigned short)((*(p_tyParam)).uiHostPort)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureBoardForecast!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureBoardForecast)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureCheckAliveResponse!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureCheckAliveResponse)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureQueryBoardInfo!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureQueryBoardInfo)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureCommand!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureCommand))))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)"Configuration Changed"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bRstConnection=1);

}

}

}imp13_else1_0:imp13_end1_0:imp13_else0_0:imp13_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_ProcessData.st"
static void __AS__Action__Act_Background_ProcessData(void){
{



(bStopTransportSnd=(((((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)12))&~Edge0002600000&1?((Edge0002600000=(((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)12))&1),1):((Edge0002600000=(((signed long)fbSequenceUS.eMsgTypeSnd==(signed long)12))&1),0))&((*(p_bConvHvBrd)))));

if(bStopTransportSnd){
(tyBoardArrivedInfo=*(struct tyHermesBoardAvailable*)&tyBoardAvailableRcv);
}








}imp26_else0_0:imp26_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_Command.st"
static void __AS__Action__Act_Background_Command(void){
{

if(((((*(p_tyParam)).bFeatureCommand)&tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureCommand&bHandshakeDone)^1)){
if((((signed long)tyCommandParam.a_eCommandSndQ[0]!=(signed long)0))){
fHermesRmvOneCmdTyp(((unsigned long)(&tyCommandParam.a_eCommandSndQ)),((unsigned long)(&tyCommandParam.udiMsgCmdBffr)));
}
}else{
if((((signed long)eStatus2!=(signed long)3))){


if(tyMsgTypeRcv.bCommand){
(tyCommandParam.usiCommandIdx=(tyCommandParam.usiCommandIdx+1));
(tyCommandParam.eCommand=tyCommandRcv.tyData.eCommand);
(tyMsgTypeRcv.bCommand=0);
}


if((((signed long)tyCommandParam.a_eCommandSndQ[0]!=(signed long)0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),26);
(tyCommandSnd.tyData.eCommand=tyCommandParam.a_eCommandSndQ[0]);
(tyCommandSnd.tyAvl.bCommand=1);
fHermesRmvOneCmdTyp(((unsigned long)(&tyCommandParam.a_eCommandSndQ)),((unsigned long)(&tyCommandParam.udiMsgCmdBffr)));
}
}
}

}imp19_else4_0:imp19_end4_0:imp19_else2_0:imp19_end2_0:imp19_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_QueryBoardInfo.st"
static void __AS__Action__Act_Background_QueryBoardInfo(void){
{if((((((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureQueryBoardInfo)&bHandshakeDone)^1)){
(bRcvBoardInfoOk=0);
(bManuallInsertLastZone=0);
(bRcvBoardInfoIncompl=0);
}else{
if((((signed long)eStatus2!=(signed long)3))){

if((((*(p_bQueryBoardInfo)))&~Edge0002700000&1?((Edge0002700000=((*(p_bQueryBoardInfo)))&1),1):((Edge0002700000=((*(p_bQueryBoardInfo)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),22);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyQueryBoardInfo.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_sTopBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyQueryBoardInfo.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_sBottomBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyQueryBoardInfo.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyQueryBoardInfo.tyData.sTopBarcode,"")!=0)));
(tyQueryBoardInfo.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyQueryBoardInfo.tyData.sBottomBarcode,"")!=0)));

}

if(tyMsgTypeRcv.bSendBoardInfo){

if((((*(p_bQueryBoardInfo)))&(((unsigned long)udiStatus2==(unsigned long)0)))){
if((tySendBoardInfoRcv.tyAvl.bBoardId&tySendBoardInfoRcv.tyAvl.bBoardIdCreatedBy&(((unsigned long)(unsigned char)((*(p_bManualInsertZoneHvBrd)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bManualInsertEndSen)))==(unsigned long)(unsigned char)0)))){

(bRcvBoardInfoOk=1);
(tySendBoardInfoAcc=*(struct tyHermesSendBoardInfo*)&tySendBoardInfoRcv);
(tyMsgTypeRcv.bSendBoardInfo=0);

}else if(((((unsigned long)(unsigned char)tySendBoardInfoRcv.tyAvl.bBoardId==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)tySendBoardInfoRcv.tyAvl.bBoardIdCreatedBy==(unsigned long)(unsigned char)0)))){
(bRcvBoardInfoIncompl=1);
(bManuallInsertLastZone=0);
(tyMsgTypeRcv.bSendBoardInfo=0);
}

}else if((((unsigned long)(unsigned char)((*(p_bQueryBoardInfo)))==(unsigned long)(unsigned char)0))){
(tyMsgTypeRcv.bSendBoardInfo=0);
}

}


if((((unsigned long)(unsigned char)bRcvBoardInfoOk==(unsigned long)(unsigned char)1))){
(bManuallInsertLastZone=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData1.udiCode=10000);
(tyInfoData1.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg1))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((*(p_bTransportFinished)))){

(bRcvBoardInfoOk=0);
(bManuallInsertLastZone=0);
}


}else if((((unsigned long)(unsigned char)bRcvBoardInfoIncompl==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData2.udiCode=10000);
(tyInfoData2.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg2))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

if((((unsigned long)(unsigned char)((*(p_bQueryBoardInfo)))==(unsigned long)(unsigned char)0))){


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData1.udiCode=0);
(tyInfoData1.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRcvBoardInfoOk=0);
(bManuallInsertLastZone=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData2.udiCode=0);
(tyInfoData2.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRcvBoardInfoIncompl=0);

}

}


}


}imp27_else8_0:imp27_end8_0:imp27_else1_0:imp27_end1_0:imp27_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_TCPSend.st"
static void __AS__Action__Act_Background_TCPSend(void){
{

if((((signed long)a_eMsgSend[0]!=(signed long)0))){

if((((signed long)a_eMsgSend[0]==(signed long)1))){
fHermesFormCheckAlive(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCheckAliveSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

}else if((((signed long)a_eMsgSend[0]==(signed long)2))){
fHermesFormCheckAlive(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCheckAlivePingSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

}else if((((signed long)a_eMsgSend[0]==(signed long)3))){
fHermesFormCheckAlive(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCheckAlivePongSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

}else if((((signed long)a_eMsgSend[0]==(signed long)4))){
fHermesFormServiceDescription(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyServiceDescriptionSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,32);

}else if((((signed long)a_eMsgSend[0]==(signed long)6))){
fHermesFormNotification(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyNotificationSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,14);

}else if((((signed long)a_eMsgSend[0]==(signed long)7))){
(eStatus1=3);
(udiStatus1=10135);

}else if((((signed long)a_eMsgSend[0]==(signed long)8))){
(eStatus1=3);
(udiStatus1=10136);

}else if((((signed long)a_eMsgSend[0]==(signed long)9))){
fHermesFormMachineReady(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyMachineReady);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);
(bReplyMcRdyId=0);

}else if((((signed long)a_eMsgSend[0]==(signed long)10))){
fHermesFormRevokeMachineReady(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))));
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,8);

}else if((((signed long)a_eMsgSend[0]==(signed long)11))){
fHermesFormStartTransport(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyStartTransport);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

}else if((((signed long)a_eMsgSend[0]==(signed long)12))){
fHermesFormStopTransport(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyStopTransport);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

}else if((((signed long)a_eMsgSend[0]==(signed long)13))){
(eStatus1=3);
(udiStatus1=10137);

}else if((((signed long)a_eMsgSend[0]==(signed long)14))){
(eStatus1=3);
(udiStatus1=10138);

}else if((((signed long)a_eMsgSend[0]==(signed long)15))){
(eStatus1=3);
(udiStatus1=10139);

}else if((((signed long)a_eMsgSend[0]==(signed long)16))){
(eStatus1=3);
(udiStatus1=10140);

}else if((((signed long)a_eMsgSend[0]==(signed long)17))){
(eStatus1=3);
(udiStatus1=10141);

}else if((((signed long)a_eMsgSend[0]==(signed long)22))){
fHermesFormQueryBoardInfo(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyQueryBoardInfo);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

}else if((((signed long)a_eMsgSend[0]==(signed long)23))){
(eStatus1=3);
(udiStatus1=10159);

}else if((((signed long)a_eMsgSend[0]==(signed long)24))){
(eStatus1=3);
(udiStatus1=10160);

}else if((((signed long)a_eMsgSend[0]==(signed long)25))){
(eStatus1=3);
(udiStatus1=10161);

}else if((((signed long)a_eMsgSend[0]==(signed long)20))){
(eStatus1=3);
(udiStatus1=10162);

}else if((((signed long)a_eMsgSend[0]==(signed long)21))){
(eStatus1=3);
(udiStatus1=10163);

}else if((((signed long)a_eMsgSend[0]==(signed long)26))){
fHermesFormCommand(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCommandSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,10);

}


if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
(fbSend.udiTCPIdent=udiTCPIdent);
(fbSend.udiSndSize=udiSndMsgLen);
(fbSend.bEn=1);;fbTCPSnd(&fbSend);
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)sInternalSnd; plcstring* zzRValue=(plcstring*)sSnd; for(zzIndex=0; zzIndex<65535l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((((unsigned long)fbSend.udiStatus==(unsigned long)0))|(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)1)))){

fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
__AS__MEMSET(((unsigned long)(&a_sLogList[udiLogCntr-1])),0,65536);
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sDT)),LEN(sDT));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n")),LEN("\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"SND_TO_US\r\n")),LEN("SND_TO_US\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sSnd)),LEN(sSnd));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n\r\n")),LEN("\r\n\r\n"));

(udiLogCntr=(udiLogCntr+1));
if((((unsigned long)udiLogCntr==(unsigned long)11))){
(udiLogCntr=1);
}

__AS__Action__Act_Background_NotificationSnd();
fHermesRmvOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)));

(fbSend.bEn=0);;fbTCPSnd(&fbSend);

}else if(((((unsigned long)fbSend.udiStatus==(unsigned long)2321))&(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0)))){
(bRstConnection=1);

}else if(((((unsigned long)fbSend.udiStatus<(unsigned long)65534))&(((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0)))){
(eStatus1=3);

if((((unsigned long)fbSend.udiStatus==(unsigned long)2300))){
(udiStatus1=10143);
}else if((((unsigned long)fbSend.udiStatus==(unsigned long)2320))){
(udiStatus1=10144);
}else if((((unsigned long)fbSend.udiStatus==(unsigned long)2322))){
(udiStatus1=10145);
}else{
(udiStatus1=fbSend.udiStatus);
}

}

}

}imp36_end5_0:imp36_else3_2:imp36_end3_0:imp36_else0_0:imp36_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_TCPClose.st"
static void __AS__Action__Act_Background_TCPClose(void){
{

if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
(fbClose.udiTCPIdent=udiTCPIdent);
(fbClose.bEn=1);;fbTCPClose(&fbClose);

if((((unsigned long)fbClose.udiStatus==(unsigned long)0))){
(udiTCPIdent=0);
(fbClose.bEn=0);;fbTCPClose(&fbClose);

}else if((((unsigned long)fbClose.udiStatus<(unsigned long)65534))){
(udiTCPIdent=0);
(eStatus1=3);

if((((unsigned long)fbClose.udiStatus==(unsigned long)2300))){
(udiStatus1=10146);
}else if((((unsigned long)fbClose.udiStatus==(unsigned long)2310))){
(udiStatus1=10147);
}else{
(udiStatus1=fbClose.udiStatus);
}

}

}else{
(udiTCPIdent=0);

}

}imp33_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_Stop.st"
static void __AS__Action__Act_Background_Stop(void){
{
if((bStop&~Edge0003200000&1?((Edge0003200000=bStop&1),1):((Edge0003200000=bStop&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=4);
(tyNotificationSnd.tyData.iNotificationCode=5);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)"Machine Shutdown"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

if((((unsigned long)(unsigned char)bStop==(unsigned long)(unsigned char)1))){

if((((signed long)a_eMsgSend[0]==(signed long)0))){

(bRstConnection=1);

if((((unsigned long)udiTCPIdent==(unsigned long)0))){

(bRun=0);

}

}

}

}imp32_else3_0:imp32_end3_0:imp32_else2_0:imp32_end2_0:imp32_else1_0:imp32_end1_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_Log.st"
static void __AS__Action__Act_Background_Log(void){
{
if((((signed long)eStatus3!=(signed long)3))){

if((((unsigned long)udiWriteLogCntr!=(unsigned long)udiLogCntr))){

switch(iWriteLogStep){

case 0:{
(dtCurrDTTemp=((*(p_dtCurrDT))));
dt2str(dtCurrDTTemp,fbFileAppend1.sFile,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)MID(fbFileAppend1.sFile,10,4); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT("_",fbFileAppend1.sFile); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sProgNm))),fbFileAppend1.sFile); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT(fbFileAppend1.sFile,".dat"); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileAppend1.p_Src=((unsigned long)(&a_sLogList[udiWriteLogCntr-1])));
(fbFileAppend1.udiLen=LEN(a_sLogList[udiWriteLogCntr-1]));

(iWriteLogStep=1);

}break;case 1:{
(fbFileAppend1.bEn=1);;fbFileFullAppend(&fbFileAppend1);
if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)0))){
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);

(udiWriteLogCntr=(udiWriteLogCntr+1));
if((((unsigned long)udiWriteLogCntr==(unsigned long)11))){
(udiWriteLogCntr=1);
}

(iWriteLogStep=0);

}else if((((unsigned long)fbFileAppend1.udiStatus<(unsigned long)65534))){
(eStatus3=3);

if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1900))){
(udiStatus3=10148);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1901))){
(udiStatus3=10149);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1913))){
(udiStatus3=10150);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1903))){
(udiStatus3=10151);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1904))){
(udiStatus3=10152);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1914))){
(udiStatus3=10153);
}else{
(udiStatus3=fbFileAppend1.udiStatus);
}

(iWriteLogStep=0);

}

}break;}

}

}

}imp23_case2_1:imp23_endcase2_0:imp23_else1_0:imp23_end1_0:imp23_else0_0:imp23_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_Err.st"
static void __AS__Action__Act_Background_Err(void){
{
if((((unsigned long)(unsigned char)bTransporting==(unsigned long)(unsigned char)1))){
if((bStopTransport&((*(p_bInterruptSen))))){
(eStatus2=3);
(udiStatus2=10157);
}
}

}imp20_else1_0:imp20_end1_0:imp20_else0_0:imp20_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_AccData.st"
static void __AS__Action__Act_Background_AccData(void){
{

switch(usiAccDataStep){
case 0:{

if((bBoardChkReq&(((signed long)eMainStatus!=(signed long)3))&(((unsigned long)(unsigned char)bAccDataReq==(unsigned long)(unsigned char)1)))){
(usiAccDataStep=1);
}

}break;case 1:{

if((((unsigned long)(unsigned char)bAccDataReq==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bMcParamMnlAccData)))==(unsigned long)(unsigned char)1))){
(bAccDataMnl=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((unsigned long)(unsigned char)((*(p_bUIAccData)))==(unsigned long)(unsigned char)1))){
(bAccDataMnl=0);
(usiAccDataStep=2);
}
}else{
(bAccDataMnl=0);
(usiAccDataStep=2);
}
}else{
(bAccDataMnl=0);
(usiAccDataStep=4);
}

}break;case 2:{
if((((unsigned long)(unsigned char)bAccDataReq==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bAccNewRcpCond)))==(unsigned long)(unsigned char)1))){
(usiAccDataStep=3);
}else{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else{
(usiAccDataStep=4);
}

}break;case 3:{

if(((((unsigned long)(unsigned char)bOverWriteWidth==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bOverWriteSlt==(unsigned long)(unsigned char)1)))){


if((((unsigned long)(unsigned char)bOverWriteWidth==(unsigned long)(unsigned char)1))){
((*(p_tyProdRcpCurrRcp)).diWidthInUM=diReqWidthInUM);
}


if((((unsigned long)(unsigned char)bOverWriteSlt==(unsigned long)(unsigned char)1))){
*((char volatile*)&(diReqMaxSltValue)) = *((char*)&(diReqMaxSltValue));
*((char volatile*)&(diReqMinSltValue)) = *((char*)&(diReqMinSltValue));
*((char volatile*)&(diReqPitch)) = *((char*)&(diReqPitch));
}

}else{


for((i=1);i<=2000;i+=1){
if(((__AS__STRING_CMP(sReqRecipeNm,((*(pa_tyProdRcpList))[i-1].sRcpNm))==0))){
((*(p_tyProdRcpCurrRcp))=*(struct tyProdRcpParam*)&((*(pa_tyProdRcpList))[i-1]));
goto imp9_endfor10_0;
}
}imp9_endfor10_0:;

if((((signed long)(signed long)(short)i>(signed long)(signed long)(short)2000))){

(eStatus4=3);
(udiStatus4=10169);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus4);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus4-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}

(usiAccDataStep=4);

}break;case 4:{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(usiAccDataStep=0);

}break;}




}imp9_case0_4:imp9_endcase0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
(bConnected=0);
(bHandshakeDone=0);
(bAccDataReq=0);
(bOverWriteSlt=0);
(bOverWriteWidth=0);
(bUSRdy=0);
(bDSRdy=0);
(bTransporting=0);
(bStopTransport=0);

}}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_CombineErr.st"
static void __AS__Action__Act_CombineErr(void){
{

if(((((signed long)eStatus==(signed long)3))|(((signed long)eStatus1==(signed long)3))|(((signed long)eStatus2==(signed long)3))|(((signed long)eStatus3==(signed long)3))|(((signed long)eStatus4==(signed long)3)))){
(eMainStatus=3);
}else{
(eMainStatus=eStatus);
}

}imp37_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Alarm1.st"
static void __AS__Action__Act_Alarm1(void){
{

if(((((signed long)eStatus1==(signed long)3))&~Edge0000300000&1?((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),1):((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=1);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData1.bAlm=1);
(tyAlmData1.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData1.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData1.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData1.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData1.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData1.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((bRstErr&(((unsigned long)tyAlmData1.udiCode!=(unsigned long)0)))){

(tyAlmData1.udiCode=0);
(tyAlmData1.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.bAlm=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp3_else0_1:imp3_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Alarm2.st"
static void __AS__Action__Act_Alarm2(void){
{

if(((((signed long)eStatus2==(signed long)3))&~Edge0000400000&1?((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),1):((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.udiCode=udiStatus2);
(tyAlmData2.eSeverity=1);
(tyAlmData2.udiRunTime=(tyAlmData2.udiRunTime+1));
(tyAlmData2.bAlm=1);
(tyAlmData2.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData2.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData2.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData2.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData2.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData2.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((bRstErr&(((unsigned long)tyAlmData2.udiCode!=(unsigned long)0)))){

(tyAlmData2.udiCode=0);
(tyAlmData2.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.bAlm=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp4_else0_1:imp4_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Alarm3.st"
static void __AS__Action__Act_Alarm3(void){
{

if(((((signed long)eStatus3==(signed long)3))&~Edge0000500000&1?((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),1):((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData3.udiCode=udiStatus3);
(tyAlmData3.eSeverity=1);
(tyAlmData3.udiRunTime=(tyAlmData3.udiRunTime+1));
(tyAlmData3.bAlm=1);
(tyAlmData3.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData3.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData3.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData3.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData3.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData3.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((bRstErr&(((unsigned long)tyAlmData3.udiCode!=(unsigned long)0)))){

(tyAlmData3.udiCode=0);
(tyAlmData3.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData3.bAlm=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp5_else0_1:imp5_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Alarm4.st"
static void __AS__Action__Act_Alarm4(void){
{

if(((((signed long)eStatus4==(signed long)3))&~Edge0000600000&1?((Edge0000600000=(((signed long)eStatus4==(signed long)3))&1),1):((Edge0000600000=(((signed long)eStatus4==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData4.udiCode=udiStatus4);
(tyAlmData4.eSeverity=1);
(tyAlmData4.udiRunTime=(tyAlmData4.udiRunTime+1));
(tyAlmData4.bAlm=1);
(tyAlmData4.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData4.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData4.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData4.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData4.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData4.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((bRstErr&(((unsigned long)tyAlmData4.udiCode!=(unsigned long)0)))){

(tyAlmData4.udiCode=0);
(tyAlmData4.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData4.bAlm=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp6_else0_1:imp6_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Alarm5.st"
static void __AS__Action__Act_Alarm5(void){
{

if(((((unsigned long)(unsigned char)bConnected==(unsigned long)(unsigned char)0))&(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData5.udiCode=udiStatus5);
(tyAlmData5.eSeverity=2);
(tyAlmData5.udiRunTime=(tyAlmData5.udiRunTime+1));
(tyAlmData5.bWarning=1);
(tyAlmData5.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};



if(((((unsigned long)tyAlmData5.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData5.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData5.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData5.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData5.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(((bConnected&(((unsigned long)tyAlmData5.udiCode!=(unsigned long)0)))|(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)0)))){

(tyAlmData5.udiCode=0);
(tyAlmData5.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData5.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData5.bWarning=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp7_else0_1:imp7_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_RequestedBoardChk.st"
static void __AS__Action__Act_Background_RequestedBoardChk(void){
{
if((((signed long)eStatus2!=(signed long)3))){
(bBoardChkReq=0);
__AS__MEMSET(((unsigned long)(&tyBoardAvailableReq)),0,1552);
if((bProcessBoardForecastId&bNotAvlNotRdy)){
(tyBoardAvailableReq.tyAvl.bProductTypeId=tyBoardForecastAcc.tyAvl.bProductTypeId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableReq.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)tyBoardForecastAcc.tyData.sProductTypeId; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableReq.tyAvl.bThickness=tyBoardForecastAcc.tyAvl.bThickness);
(tyBoardAvailableReq.tyAvl.bWidth=tyBoardForecastAcc.tyAvl.bWidth);
(tyBoardAvailableReq.tyData.rWidth=tyBoardForecastAcc.tyData.rWidth);
(tyBoardAvailableReq.tyAvl.bTopClearanceHeight=tyBoardForecastAcc.tyAvl.bTopClearanceHeight);
(tyBoardAvailableReq.tyAvl.bBottomClearanceHeight=tyBoardForecastAcc.tyAvl.bBottomClearanceHeight);
(tyBoardAvailableReq.tyData.eFlippedBoard=tyBoardForecastAcc.tyData.eFlippedBoard);
(tyBoardAvailableReq.tyData.rThickness=tyBoardForecastAcc.tyData.rThickness);
(tyBoardAvailableReq.tyData.rTopClearanceHeight=tyBoardForecastAcc.tyData.rTopClearanceHeight);
(tyBoardAvailableReq.tyData.rBottomClearanceHeight=tyBoardForecastAcc.tyData.rBottomClearanceHeight);
(bBoardChkReq=1);
}else if((bRcvBoardInfoOk&bManuallInsertLastZone)){
(tyBoardAvailableReq.tyAvl.bProductTypeId=tySendBoardInfoAcc.tyAvl.bProductTypeId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableReq.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)tySendBoardInfoAcc.tyData.sProductTypeId; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableReq.tyAvl.bThickness=tySendBoardInfoAcc.tyAvl.bThickness);
(tyBoardAvailableReq.tyAvl.bWidth=tySendBoardInfoAcc.tyAvl.bWidth);
(tyBoardAvailableReq.tyData.rWidth=tySendBoardInfoAcc.tyData.rWidth);
(tyBoardAvailableReq.tyAvl.bTopClearanceHeight=tySendBoardInfoAcc.tyAvl.bTopClearanceHeight);
(tyBoardAvailableReq.tyAvl.bBottomClearanceHeight=tySendBoardInfoAcc.tyAvl.bBottomClearanceHeight);
(tyBoardAvailableReq.tyData.eFlippedBoard=tySendBoardInfoAcc.tyData.eFlippedBoard);
(tyBoardAvailableReq.tyData.rThickness=tySendBoardInfoAcc.tyData.rThickness);
(tyBoardAvailableReq.tyData.rTopClearanceHeight=tySendBoardInfoAcc.tyData.rTopClearanceHeight);
(tyBoardAvailableReq.tyData.rBottomClearanceHeight=tySendBoardInfoAcc.tyData.rBottomClearanceHeight);
(bBoardChkReq=1);
}else if(((*(p_bAccDataRdy)))){
__AS__MEMCPY(((unsigned long)(&tyBoardAvailableReq)),((unsigned long)(&tyBoardAvailableRcv)),1552);
(bBoardChkReq=1);
}

if((bBoardChkReq&(((unsigned long)(unsigned char)bTransporting==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)1)))){

(bAccDataReq=0);
(bBABlkUS=0);
(bOverWriteSlt=0);
(bOverWriteWidth=0);

if((((unsigned long)(unsigned char)((*(p_tyParam)).bCmpTypeId)==(unsigned long)(unsigned char)1))){

if((((unsigned long)(unsigned char)tyBoardAvailableReq.tyAvl.bProductTypeId==(unsigned long)(unsigned char)1))){

if(((__AS__STRING_CMP(tyBoardAvailableReq.tyData.sProductTypeId,((*(p_sRecipeNm))))!=0))){

(bAccDataReq=1);
(bBABlkUS=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)sReqRecipeNm; plcstring* zzRValue=(plcstring*)tyBoardAvailableReq.tyData.sProductTypeId; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(diReqWidthInUM=(signed long)((tyBoardAvailableReq.tyData.rWidth*1000)>=0.0?(tyBoardAvailableReq.tyData.rWidth*1000)+0.5:(tyBoardAvailableReq.tyData.rWidth*1000)-0.5));

}else{

if((((unsigned long)(unsigned char)((*(p_tyParam)).bCmpParam)==(unsigned long)(unsigned char)1))){
if((tyBoardAvailableReq.tyAvl.bThickness&tyBoardAvailableReq.tyAvl.bTopClearanceHeight&tyBoardAvailableReq.tyAvl.bBottomClearanceHeight&((*(p_bBASltEn))))){
(udiStatus2=fHermesCmpSlt(tyBoardAvailableReq.tyData.eFlippedBoard,tyBoardAvailableReq.tyData.rThickness,tyBoardAvailableReq.tyData.rTopClearanceHeight,tyBoardAvailableReq.tyData.rBottomClearanceHeight,((*(p_diMinSltValue))),((*(p_diMaxSltValue))),((*(p_diPitch))),((*(p_diSltToSltInUM))),((*(p_diTtlSlt)))));

if((((unsigned long)udiStatus2!=(unsigned long)0))){

(bBABlkUS=1);

(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2914))){
(udiStatus2=10108);
}else if((((unsigned long)udiStatus2==(unsigned long)2915))){
(udiStatus2=10109);
}else if((((unsigned long)udiStatus2==(unsigned long)2916))){
(udiStatus2=10110);
}else if((((unsigned long)udiStatus2==(unsigned long)2917))){
(udiStatus2=10111);
}else if((((unsigned long)udiStatus2==(unsigned long)2918))){
(udiStatus2=10112);
}else if((((unsigned long)udiStatus2==(unsigned long)2919))){
(udiStatus2=10113);
}else if((((unsigned long)udiStatus2==(unsigned long)2920))){
(udiStatus2=10114);
}else if((((unsigned long)udiStatus2==(unsigned long)2921))){
(udiStatus2=10115);
}else if((((unsigned long)udiStatus2==(unsigned long)2922))){
(udiStatus2=10116);
}else if((((unsigned long)udiStatus2==(unsigned long)2923))){
(udiStatus2=10117);
}else if((((unsigned long)udiStatus2==(unsigned long)2924))){
(udiStatus2=10118);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

if((tyBoardAvailableReq.tyAvl.bWidth&((*(p_bBAWidthEn))))){
if((((signed long)(signed long)((tyBoardAvailableReq.tyData.rWidth*1000)>=0.0?(tyBoardAvailableReq.tyData.rWidth*1000)+0.5:(tyBoardAvailableReq.tyData.rWidth*1000)-0.5)!=(signed long)((*(p_diWidthInUM)))))){

(bBABlkUS=1);

(eStatus2=3);
(udiStatus2=10119);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

}

}

}else{

(eStatus2=3);
(udiStatus2=10158);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}else{

if(((*(p_tyParam)).bOverwrite)){

if((tyBoardAvailableReq.tyAvl.bThickness&tyBoardAvailableReq.tyAvl.bTopClearanceHeight&tyBoardAvailableReq.tyAvl.bBottomClearanceHeight&((*(p_bBASltEn))))){

(udiStatus2=fHermesCmpSlt(tyBoardAvailableReq.tyData.eFlippedBoard,tyBoardAvailableReq.tyData.rThickness,tyBoardAvailableReq.tyData.rTopClearanceHeight,tyBoardAvailableReq.tyData.rBottomClearanceHeight,((*(p_diMinSltValue))),((*(p_diMaxSltValue))),((*(p_diPitch))),((*(p_diSltToSltInUM))),((*(p_diTtlSlt)))));

if((((unsigned long)udiStatus2!=(unsigned long)0))){

(bAccDataReq=1);
(bBABlkUS=1);
(bOverWriteSlt=1);

(fbGetSlt.eFlippedBrd=tyBoardAvailableReq.tyData.eFlippedBoard);
(fbGetSlt.rThicknessInMM=tyBoardAvailableReq.tyData.rThickness);
(fbGetSlt.rTopClearanceHeightInMM=tyBoardAvailableReq.tyData.rTopClearanceHeight);
(fbGetSlt.rBtmClearanceHeightInMM=tyBoardAvailableReq.tyData.rBottomClearanceHeight);
(fbGetSlt.diSltToSltInUM=((*(p_diSltToSltInUM))));
(fbGetSlt.diTtlSlt=((*(p_diTtlSlt))));
fbHermesGetSlt(&fbGetSlt);

(diReqMinSltValue=fbGetSlt.diMinSltValue);
(diReqMaxSltValue=fbGetSlt.diMaxSltValue);
(diReqPitch=fbGetSlt.diPitch);

}

}

if((tyBoardAvailableReq.tyAvl.bWidth&((*(p_bBAWidthEn))))){
if((((signed long)(signed long)((tyBoardAvailableReq.tyData.rWidth*1000)>=0.0?(tyBoardAvailableReq.tyData.rWidth*1000)+0.5:(tyBoardAvailableReq.tyData.rWidth*1000)-0.5)!=(signed long)((*(p_diWidthInUM)))))){

(bAccDataReq=1);
(bBABlkUS=1);
(bOverWriteWidth=1);

(diReqWidthInUM=(signed long)((tyBoardAvailableReq.tyData.rWidth*1000)>=0.0?(tyBoardAvailableReq.tyData.rWidth*1000)+0.5:(tyBoardAvailableReq.tyData.rWidth*1000)-0.5));

}
}

}else{

if((tyBoardAvailableReq.tyAvl.bThickness&tyBoardAvailableReq.tyAvl.bTopClearanceHeight&tyBoardAvailableReq.tyAvl.bBottomClearanceHeight&((*(p_bBASltEn)))&((*(p_bRdyRcv))))){
(udiStatus2=fHermesCmpSlt(tyBoardAvailableReq.tyData.eFlippedBoard,tyBoardAvailableReq.tyData.rThickness,tyBoardAvailableReq.tyData.rTopClearanceHeight,tyBoardAvailableReq.tyData.rBottomClearanceHeight,((*(p_diMinSltValue))),((*(p_diMaxSltValue))),((*(p_diPitch))),((*(p_diSltToSltInUM))),((*(p_diTtlSlt)))));

if((((unsigned long)udiStatus2!=(unsigned long)0))){

(bBABlkUS=1);

(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2914))){
(udiStatus2=10120);
}else if((((unsigned long)udiStatus2==(unsigned long)2915))){
(udiStatus2=10121);
}else if((((unsigned long)udiStatus2==(unsigned long)2916))){
(udiStatus2=10122);
}else if((((unsigned long)udiStatus2==(unsigned long)2917))){
(udiStatus2=10123);
}else if((((unsigned long)udiStatus2==(unsigned long)2918))){
(udiStatus2=10124);
}else if((((unsigned long)udiStatus2==(unsigned long)2919))){
(udiStatus2=10125);
}else if((((unsigned long)udiStatus2==(unsigned long)2920))){
(udiStatus2=10126);
}else if((((unsigned long)udiStatus2==(unsigned long)2921))){
(udiStatus2=10127);
}else if((((unsigned long)udiStatus2==(unsigned long)2922))){
(udiStatus2=10128);
}else if((((unsigned long)udiStatus2==(unsigned long)2923))){
(udiStatus2=10129);
}else if((((unsigned long)udiStatus2==(unsigned long)2924))){
(udiStatus2=10130);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

if((tyBoardAvailableReq.tyAvl.bWidth&((*(p_bBAWidthEn)))&((*(p_bRdyRcv))))){
if((((signed long)(signed long)((tyBoardAvailableReq.tyData.rWidth*1000)>=0.0?(tyBoardAvailableReq.tyData.rWidth*1000)+0.5:(tyBoardAvailableReq.tyData.rWidth*1000)-0.5)!=(signed long)((*(p_diWidthInUM)))))){

(bBABlkUS=1);

(eStatus2=3);
(udiStatus2=10131);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}

}

}

}else if(((bBoardChkReq^1)|(((unsigned long)(unsigned char)bTransporting==(unsigned long)(unsigned char)1)))){

(bAccDataReq=0);
(bBABlkUS=0);
(bOverWriteSlt=0);
(bOverWriteWidth=0);

}


if(((((unsigned long)(unsigned char)bProcessBoardForecastId==(unsigned long)(unsigned char)1))&bBoardChkReq&(((unsigned long)(unsigned char)bTransporting==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)1)))){
if(((((unsigned long)(unsigned char)bBABlkUS==(unsigned long)(unsigned char)0))|(bBFBlkUS&(((signed long)eStatus2==(signed long)3))))){
if((((signed long)eStatus2!=(signed long)3))){
(bReplyMcRdyId=1);
}
(bProcessBoardForecastId=0);
}
}

}else{

(bAccDataReq=0);
(bBABlkUS=1);
(bOverWriteSlt=0);
(bOverWriteWidth=0);
(bBoardChkReq=0);
}

}imp28_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Act_Background_NotificationSnd.st"
static void __AS__Action__Act_Background_NotificationSnd(void){
{
if((((signed long)a_eMsgSend[0]==(signed long)6))){
(bRstConnection=(fHermesNotificationRstConn(&tyNotificationSnd)|bRstConnection));

}

}imp25_else0_0:imp25_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes2/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes2/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes2/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/USHermes2/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/USHermes2/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/USHermes2/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/USHermes2/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataBrdAvl'\\n\"");
__asm__(".ascii \"plcdata_const 'diReqMinSltValue'\\n\"");
__asm__(".ascii \"plcdata_const 'diReqMaxSltValue'\\n\"");
__asm__(".ascii \"plcdata_const 'diReqPitch'\\n\"");
__asm__(".ascii \"plcdata_const 'tyBoardAvailableRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'tyBoardAvailableReq'\\n\"");
__asm__(".ascii \"plcdata_const 'sSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'sRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'a_eMsgSend'\\n\"");
__asm__(".ascii \"plcdata_const 'tyMsgTypeRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_sLogList'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiProdRcpMax'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".previous");
