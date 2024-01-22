#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/RmtHermes/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.st"
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
__AS__Action__Act_Background_ProcessData();
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

}

}imp33_end0_0:;}
#line 47 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);


(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamHermesPrep);
(p_sIPAddr=p_HWInfoIPAddr);
(p_tyDTStructure=p_TimeCurrDTStruct);
(p_dtCurrDT=p_TimeCurrDT);
(p_sMcId=p_McParamMcNm);
(p_bRmtPrep=p_NtParamHermesRmtPrep);
(p_bRmtEn=p_McParamHermesRmtEn);
(p_udiSndBffrSize=p_NtParamRmtHermesSndBffrSize);
(p_udiRcvBffrSize=p_NtParamRmtHermesRcvBffrSize);
(p_udiAliveIdleTimeInSec=p_NtParamRmtHermesAliveTmInSec);
(p_udiFileKeepDay=p_NtParamRmtHermesFileKeepDay);
(p_sConfigFileName=p_NtParamRmtHermesConfigFileNm);
(p_sProgNm=p_NtParamRmtHermesProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_tyHermesConfiguration=p_HermesConfiguration);
(p_eHermesStat=p_HermesStat);
(p_eHermesStatus=p_HermesStatus);
(p_eMcParamStat=p_McParamStat);
(p_eMcParamStatus=p_McParamStatus);
(p_iInput=p_NtParamHermesInput);
(p_iOutput=p_NtParamHermesOutput);


}}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupRmtHermesAct);
}else{
(p_eAct=((unsigned long)(&eAct)));

if(((((*(p_bRmtPrep)))&((*(p_bRmtEn))))&~Edge0002800000&1?((Edge0002800000=(((*(p_bRmtPrep)))&((*(p_bRmtEn))))&1),1):((Edge0002800000=(((*(p_bRmtPrep)))&((*(p_bRmtEn))))&1),0))){
(bRmtHermesRun=1);
(bRmtHermesStop=0);
}

if(((~((*(p_bRmtPrep)))&Edge0002800001&1?((Edge0002800001=((*(p_bRmtPrep)))&1),1):((Edge0002800001=((*(p_bRmtPrep)))&1),0))|(~((*(p_bRmtEn)))&Edge0002800002&1?((Edge0002800002=((*(p_bRmtEn)))&1),1):((Edge0002800002=((*(p_bRmtEn)))&1),0)))){
(bRmtHermesRun=0);
(bRmtHermesStop=1);
}

if((((unsigned long)(unsigned char)bRmtHermesRun==(unsigned long)(unsigned char)1))){
((*(p_eAct))=1);

if(((((signed long)eStat==(signed long)1))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bRmtHermesRun=0);
}
}

if((((unsigned long)(unsigned char)bRmtHermesStop==(unsigned long)(unsigned char)1))){
((*(p_eAct))=2);

if(((((signed long)eStat==(signed long)2))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bRmtHermesStop=0);
}
}

}

}imp28_else6_0:imp28_end6_0:imp28_else5_0:imp28_end5_0:imp28_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Link.st"
static void __AS__Action__Act_Link(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Hermes Configuration Received From Remote Station"; for(zzIndex=0; zzIndex<49l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((signed long)(signed long)(short)((*(p_iInput)))>(signed long)((signed short)c_diHermesConfigMaxIdx+1)))){
((*(p_iInput))=((signed short)c_diHermesConfigMaxIdx+1));
}

if((((signed long)(signed long)(short)((*(p_iOutput)))>(signed long)((signed short)c_diHermesConfigMaxIdx+1)))){
((*(p_iOutput))=((signed short)c_diHermesConfigMaxIdx+1));
}

}imp27_else1_0:imp27_end1_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp32_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_InitLocal.st"
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
(p_sMcId=((unsigned long)(&sMcId)));
(p_bRmtPrep=((unsigned long)(&bRmtPrep)));
(p_bRmtEn=((unsigned long)(&bRmtEn)));
(p_udiSndBffrSize=((unsigned long)(&udiSndBffrSize)));
(p_udiRcvBffrSize=((unsigned long)(&udiRcvBffrSize)));
(p_udiAliveIdleTimeInSec=((unsigned long)(&udiAliveIdleTimeInSec)));
(p_udiFileKeepDay=((unsigned long)(&udiFileKeepDay)));
(p_sConfigFileName=((unsigned long)(&sConfigFileName)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_sInfoMsg=((unsigned long)(&sInfoMsg)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_sInfoMsg=((unsigned long)(&sInfoMsg)));
(p_tyHermesConfiguration=((unsigned long)(&tyHermesCurrConfiguration)));
(p_iInput=((unsigned long)(&iInput)));
(p_iOutput=((unsigned long)(&iOutput)));

}}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbCreateSvr.udiSndBffrSize=((*(p_udiSndBffrSize))));
(fbCreateSvr.udiRcvBffrSize=((*(p_udiRcvBffrSize))));
(fbCreateSvr.udiAliveIdleTmInSec=((*(p_udiAliveIdleTimeInSec))));
(fbCreateSvr.bEn=0);;fbTCPCreateSvr(&fbCreateSvr);

(fbListen.bEn=0);;fbTCPListen(&fbListen);

(fbRcv.udiBffrSize=65536);
(fbRcv.p_BffrDest=((unsigned long)(&sRcv)));
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);

(fbSend.p_BffrDest=((unsigned long)(&sSnd)));
(fbSend.bEn=0);;fbTCPSnd(&fbSend);

(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);

(fbParseXMLTable.p_XMLTable=((unsigned long)(&a_tyXMLTableDataRcv)));

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sDevice; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sDevice; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sPath; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sKeyword; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileOldDel1.udiFileKeepDay=((*(p_udiFileKeepDay))));
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);

}}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Action.st"
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
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);
(bFileNotFound=0);
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
(udiStatus=10111);
}else if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1911))){
(udiStatus=10112);
}else if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1912))){
(udiStatus=10113);
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

}imp30_else7_0:imp30_end7_0:imp30_endcase1_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if((((unsigned long)(unsigned char)bRun==(unsigned long)(unsigned char)1))){
if((((unsigned long)udiSvrIdent==(unsigned long)0))){
__AS__Action__Act_Background_TCPCreateSvr();

(tyParamOld=*(struct tyHermesRmtParam*)&((*(p_tyParam))));

}else{
if((((unsigned long)(unsigned char)bRstConnection==(unsigned long)(unsigned char)0))){

if((((unsigned long)udiClntIdent==(unsigned long)0))){
__AS__Action__Act_Background_TCPListen();
}

if((((unsigned long)udiClntIdent!=(unsigned long)0))){
__AS__Action__Act_Background_TCPRcv();
}

__AS__Action__Act_Background_NotificationRcv();

__AS__Action__Act_Background_IllegalMsg();
__AS__Action__Act_Background_UpdtConfig();

__AS__Action__Act_Background_SendConfig();

__AS__Action__Act_Background_Err();

if((((unsigned long)udiClntIdent!=(unsigned long)0))){
__AS__Action__Act_Background_TCPSend();
}

__AS__Action__Act_Background_Log();

}else{
if((((unsigned long)udiClntIdent!=(unsigned long)0))){
__AS__Action__Act_Background_TCPCloseClnt();
}else{
if((((unsigned long)udiSvrIdent!=(unsigned long)0))){
__AS__Action__Act_Background_TCPCloseSvr();
}
}

}

}

__AS__Action__Act_Background_Stop();

}



if(((~bRun&Edge0000600000&1?((Edge0000600000=bRun&1),1):((Edge0000600000=bRun&1),0))|(~(((unsigned long)udiSvrIdent==(unsigned long)0))&Edge0000600001&1?((Edge0000600001=(((unsigned long)udiSvrIdent==(unsigned long)0))&1),1):((Edge0000600001=(((unsigned long)udiSvrIdent==(unsigned long)0))&1),0)))){

(fbCreateSvr.bEn=0);;fbTCPCreateSvr(&fbCreateSvr);
}

if(((~bRun&Edge0000600002&1?((Edge0000600002=bRun&1),1):((Edge0000600002=bRun&1),0))|(~(((unsigned long)udiClntIdent==(unsigned long)0))&Edge0000600003&1?((Edge0000600003=(((unsigned long)udiClntIdent==(unsigned long)0))&1),1):((Edge0000600003=(((unsigned long)udiClntIdent==(unsigned long)0))&1),0)))){

(fbListen.bEn=0);;fbTCPListen(&fbListen);

(bConnected=bRun);
}

if(((~bRun&Edge0000600004&1?((Edge0000600004=bRun&1),1):((Edge0000600004=bRun&1),0))|(~(((unsigned long)udiSvrIdent!=(unsigned long)0))&Edge0000600005&1?((Edge0000600005=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),1):((Edge0000600005=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),0))|(~(((unsigned long)udiClntIdent!=(unsigned long)0))&Edge0000600006&1?((Edge0000600006=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),1):((Edge0000600006=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),0)))){
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);

(bConnected=0);

__AS__MEMSET(((unsigned long)(&a_eMsgSend)),0,204);
(udiMsgSendBffr=0);
}

if((~bRun&Edge0000600007&1?((Edge0000600007=bRun&1),1):((Edge0000600007=bRun&1),0))){
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

__AS__MEMSET(((unsigned long)(&tyMsgTypeRcv)),0,24);
}

if(((~bRun&Edge0000600008&1?((Edge0000600008=bRun&1),1):((Edge0000600008=bRun&1),0))|(~(((unsigned long)udiSvrIdent!=(unsigned long)0))&Edge0000600009&1?((Edge0000600009=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),1):((Edge0000600009=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),0)))){
(bRstConnection=0);
(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);
}

if(((~bRun&Edge0000600010&1?((Edge0000600010=bRun&1),1):((Edge0000600010=bRun&1),0))|(~(((unsigned long)udiClntIdent!=(unsigned long)0))&Edge0000600011&1?((Edge0000600011=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),1):((Edge0000600011=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),0)))){
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);
}


if(((((signed long)eStatus1==(signed long)3))&bRstErr)){
(eStatus1=0);
(udiStatus1=0);

(fbCreateSvr.bEn=0);;fbTCPCreateSvr(&fbCreateSvr);
(fbListen.bEn=0);;fbTCPListen(&fbListen);
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);
(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bRstConnection=0);

__AS__MEMSET(((unsigned long)(&tyMsgTypeRcv)),0,24);
__AS__MEMSET(((unsigned long)(&a_eMsgSend)),0,204);
(udiMsgSendBffr=0);
}

if(((((signed long)eStatus2==(signed long)3))&bRstErr)){
(eStatus2=0);
(udiStatus2=0);


}

if(((((signed long)eStatus3==(signed long)3))&bRstErr)){
(eStatus3=0);
(udiStatus3=0);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);
}

}imp6_else16_0:imp6_end16_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_ProcessData.st"
static void __AS__Action__Act_Background_ProcessData(void){
{

(fbDelayTm.IN=bWriteConfig);;(fbDelayTm.PT=500);;TON(&fbDelayTm);

if(fbDelayTm.Q){

(eHermesAct=15);
(eMcParamAct=3);


if(((((signed long)((*(p_eHermesStatus)))==(signed long)1))&(((signed long)((*(p_eHermesStat)))==(signed long)15))&(((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)1)))){

(eMcParamAct=0);
(eHermesAct=0);
(bWriteConfig=0);
(bUpdateUIData=1);
(fbDelayTm.IN=0);;TON(&fbDelayTm);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


}else if((((((signed long)((*(p_eHermesStatus)))==(signed long)3))&(((signed long)((*(p_eHermesStat)))==(signed long)15)))|((((signed long)((*(p_eMcParamStat)))==(signed long)3))&(((signed long)((*(p_eMcParamStatus)))==(signed long)3))))){

(eMcParamAct=0);
(eHermesAct=0);
(bWriteConfig=0);
(bUpdateUIData=0);
(fbDelayTm.IN=0);;TON(&fbDelayTm);

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(udiStatus2=10199);
(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}


if(bUpdateUIData){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}


(fbDelayTm1.IN=bUpdateUIData);;(fbDelayTm1.PT=2000);;TON(&fbDelayTm1);
if((((unsigned long)(unsigned char)fbDelayTm1.Q==(unsigned long)(unsigned char)1))){


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bUpdateUIData=0);
(bFoundIndexUS1=0);
(bFoundIndexUS2=0);
(bFoundIndexUS3=0);
(bFoundIndexUS4=0);
(bFoundIndexDS1=0);
(bFoundIndexDS2=0);
(bFoundIndexDS3=0);
(bFoundIndexDS4=0);
(fbDelayTm1.IN=0);;TON(&fbDelayTm1);
}


}imp13_else3_0:imp13_end3_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_TCPCreateSvr.st"
static void __AS__Action__Act_Background_TCPCreateSvr(void){
{
if((((signed long)eStatus1!=(signed long)3))){


{int zzIndex; plcstring* zzLValue=(plcstring*)fbCreateSvr.sSvrIP; plcstring* zzRValue=(plcstring*)((*(p_sIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbCreateSvr.uiSvrPort=((*(p_tyParam)).uiSvrPort));
(fbCreateSvr.bEn=1);;fbTCPCreateSvr(&fbCreateSvr);

if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)0))){
(udiSvrIdent=fbCreateSvr.udiTCPIdent);
(fbCreateSvr.bEn=0);;fbTCPCreateSvr(&fbCreateSvr);

}else if((((unsigned long)fbCreateSvr.udiStatus<(unsigned long)65534))){
(eStatus1=3);

if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2300))){
(udiStatus1=10000);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2302))){
(udiStatus1=10001);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2303))){
(udiStatus1=10002);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2304))){
(udiStatus1=10003);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2305))){
(udiStatus1=10004);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2306))){
(udiStatus1=10005);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2307))){
(udiStatus1=10006);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2308))){
(udiStatus1=10007);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2309))){
(udiStatus1=10008);
}else if((((unsigned long)fbCreateSvr.udiStatus==(unsigned long)2310))){
(udiStatus1=10009);
}else{
(udiStatus1=fbCreateSvr.udiStatus);
}

}

}

}imp18_end2_0:imp18_else1_1:imp18_end1_0:imp18_else0_0:imp18_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_TCPListen.st"
static void __AS__Action__Act_Background_TCPListen(void){
{
if(((((signed long)eStatus1!=(signed long)3))&(((signed long)eStatus2!=(signed long)3)))){

(fbListen.udiSvrIdent=udiSvrIdent);
(fbListen.bEn=1);;fbTCPListen(&fbListen);

if((((unsigned long)fbListen.udiStatus==(unsigned long)0))){
(udiClntIdent=fbListen.udiClntIdent);
(fbListen.bEn=0);;fbTCPListen(&fbListen);

}else if((((unsigned long)fbListen.udiStatus==(unsigned long)2311))){
(fbListen.bEn=0);;fbTCPListen(&fbListen);

}else if((((unsigned long)fbListen.udiStatus<(unsigned long)65534))){
(eStatus1=3);

if((((unsigned long)fbListen.udiStatus==(unsigned long)2300))){
(udiStatus1=10010);
}else if((((unsigned long)fbListen.udiStatus==(unsigned long)2312))){
(udiStatus1=10012);
}else{
(udiStatus1=fbListen.udiStatus);
}

}

}

}imp19_end2_0:imp19_else1_2:imp19_end1_0:imp19_else0_0:imp19_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_TCPRcv.st"
static void __AS__Action__Act_Background_TCPRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbRcv.udiTCPIdent=udiClntIdent);
(fbRcv.bEn=1);;fbTCPRcv(&fbRcv);

if((((unsigned long)fbRcv.udiStatus==(unsigned long)0))){

fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
__AS__MEMSET(((unsigned long)(&a_sLogList[udiLogCntr-1])),0,65536);
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sDT)),LEN(sDT));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n")),LEN("\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"RCV_FRM_RMT\r\n")),LEN("RCV_FRM_RMT\r\n"));
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
(tyCheckAlive=*(struct tyHermesCheckAlive*)&fbParseXMLTable.tyCheckAlive);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCheckAlivePing==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCheckAlivePing=1);
(tyCheckAlivePing=*(struct tyHermesCheckAlive*)&fbParseXMLTable.tyCheckAlivePing);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCheckAlivePong==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCheckAlivePong=1);
(tyCheckAlivePong=*(struct tyHermesCheckAlive*)&fbParseXMLTable.tyCheckAlivePong);
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
(tySetConfigurationRcv=*(struct tyHermesSetConfiguration*)&fbParseXMLTable.tySetConfiguration);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bGetConfiguration==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bGetConfiguration=1);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bCurrentConfiguration==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bCurrentConfiguration=1);
(tyCurrentConfigurationRcv=*(struct tyHermesCurrentConfiguration*)&fbParseXMLTable.tyCurrentConfiguration);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bBoardForecast==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bBoardForecast=1);
(tyBoardForecast=*(struct tyHermesBoardForecast*)&fbParseXMLTable.tyBoardForecast);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bQueryBoardInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bQueryBoardInfo=1);
(tyQueryBoardInfo=*(struct tyHermesQueryBoardInfo*)&fbParseXMLTable.tyQueryBoardInfo);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bSendBoardInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bSendBoardInfo=1);
(tySendBoardInfo=*(struct tyHermesSendBoardInfo*)&fbParseXMLTable.tySendBoardInfo);
}

(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if((((unsigned long)fbRcv.udiStatus==(unsigned long)2317))){
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if((((unsigned long)fbRcv.udiStatus==(unsigned long)2316))){
(bRstConnection=1);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if((((unsigned long)fbRcv.udiStatus==(unsigned long)2318))){
(bRstConnection=1);

__AS__MEMSET(((unsigned long)(&sRcv)),0,65536);

}else if((((unsigned long)fbRcv.udiStatus<(unsigned long)65534))){
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

}imp20_else1_4:imp20_end1_0:imp20_else0_0:imp20_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_NotificationRcv.st"
static void __AS__Action__Act_Background_NotificationRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bNotification==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bNotification=0);

(bRstConnection=(fHermesNotificationRstConn(&tyNotificationRcv)|bRstConnection));

}

}

}imp11_else1_0:imp11_end1_0:imp11_else0_0:imp11_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_IllegalMsg.st"
static void __AS__Action__Act_Background_IllegalMsg(void){
{
if((((signed long)eStatus2!=(signed long)3))){

(udiStatus2=fHermesIllegalMsgRmt(&tyMsgTypeRcv));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2925))){
(udiStatus2=10114);
}else if((((unsigned long)udiStatus2==(unsigned long)2926))){
(udiStatus2=10115);
}else if((((unsigned long)udiStatus2==(unsigned long)2927))){
(udiStatus2=10116);
}else if((((unsigned long)udiStatus2==(unsigned long)2928))){
(udiStatus2=10117);
}else if((((unsigned long)udiStatus2==(unsigned long)2929))){
(udiStatus2=10118);
}else if((((unsigned long)udiStatus2==(unsigned long)2930))){
(udiStatus2=10119);
}else if((((unsigned long)udiStatus2==(unsigned long)2931))){
(udiStatus2=10120);
}else if((((unsigned long)udiStatus2==(unsigned long)2932))){
(udiStatus2=10121);
}else if((((unsigned long)udiStatus2==(unsigned long)2933))){
(udiStatus2=10122);
}else if((((unsigned long)udiStatus2==(unsigned long)2934))){
(udiStatus2=10123);
}else if((((unsigned long)udiStatus2==(unsigned long)2935))){
(udiStatus2=10124);
}else if((((unsigned long)udiStatus2==(unsigned long)2936))){
(udiStatus2=10125);
}else if((((unsigned long)udiStatus2==(unsigned long)2937))){
(udiStatus2=10126);
}else if((((unsigned long)udiStatus2==(unsigned long)2938))){
(udiStatus2=10127);
}else if((((unsigned long)udiStatus2==(unsigned long)2939))){
(udiStatus2=10128);
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

}imp9_else1_0:imp9_end1_0:imp9_else0_0:imp9_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_UpdtConfig.st"
static void __AS__Action__Act_Background_UpdtConfig(void){
{
if((((signed long)eStatus2!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bSetConfiguration==(unsigned long)(unsigned char)1))){

(tySetConfiguration.tyAvl.bMachineId=tySetConfigurationRcv.tyAvl.bMachineId);
(tySetConfiguration.tyAvl.bSupervisorySystemPort=tySetConfigurationRcv.tyAvl.bSupervisorySystemPort);
(tySetConfiguration.tyAvl.bUpstreamConfigurations=tySetConfigurationRcv.tyAvl.bUpstreamConfigurations);
(tySetConfiguration.tyAvl.bDownstreamConfigurations=tySetConfigurationRcv.tyAvl.bDownstreamConfigurations);
(tySetConfiguration.tyAvl.iUpstreamConfigurations=tySetConfigurationRcv.tyAvl.iUpstreamConfigurations);
(tySetConfiguration.tyAvl.iDownstreamConfigurations=tySetConfigurationRcv.tyAvl.iDownstreamConfigurations);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tySetConfiguration.tyAvl.a_tyUpstreamConfigurations; unsigned char* zzRValue=(unsigned char*)tySetConfigurationRcv.tyAvl.a_tyUpstreamConfigurations; for(zzIndex=0; zzIndex<16l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tySetConfiguration.tyAvl.a_tyDownstreamConfigurations; unsigned char* zzRValue=(unsigned char*)tySetConfigurationRcv.tyAvl.a_tyDownstreamConfigurations; for(zzIndex=0; zzIndex<16l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfiguration.tyData.sMachineId; plcstring* zzRValue=(plcstring*)tySetConfigurationRcv.tyData.sMachineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfiguration.tyData.uiSupervisorySystemPort=tySetConfigurationRcv.tyData.uiSupervisorySystemPort);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tySetConfiguration.tyData.a_tyUpstreamConfigurations; unsigned char* zzRValue=(unsigned char*)tySetConfigurationRcv.tyData.a_tyUpstreamConfigurations; for(zzIndex=0; zzIndex<1360l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tySetConfiguration.tyData.a_tyDownstreamConfigurations; unsigned char* zzRValue=(unsigned char*)tySetConfigurationRcv.tyData.a_tyDownstreamConfigurations; for(zzIndex=0; zzIndex<1360l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

(udiTargetAddress=((unsigned long)(&tySetConfiguration.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId)));
(udiSizeAddress=340);

(udiTargetAddress1=((unsigned long)(&tySetConfiguration.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId)));
(udiSizeAddress1=340);


for((k=0);k<=c_diHermesConfigMaxIdx;k+=1){

if((((signed long)memcmp((udiTargetAddress+(k*udiSizeAddress)),((unsigned long)(&j)),1)==(signed long)0))){

(bFoundIndexUS1=1);
(udiFoundIndexUS1=k);

(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].iUpstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].sHostAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].sHostAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].sUpstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[0].uiPort=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS1].uiPort);

}else if((((signed long)memcmp((udiTargetAddress+(k*udiSizeAddress)),((unsigned long)(&jj)),1)==(signed long)0))){

(bFoundIndexUS2=1);
(udiFoundIndexUS2=k);

(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].iUpstreamLaneId=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].iUpstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].sHostAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].sHostAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].sUpstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[1].uiPort=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS2].uiPort);

}else if((((signed long)memcmp((udiTargetAddress+(k*udiSizeAddress)),((unsigned long)(&jjj)),1)==(signed long)0))){

(bFoundIndexUS3=1);
(udiFoundIndexUS3=k);

(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].iUpstreamLaneId=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].iUpstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].sHostAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sHostAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sUpstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[2].uiPort=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].uiPort);

}else if((((signed long)memcmp((udiTargetAddress+(k*udiSizeAddress)),((unsigned long)(&jjjj)),1)==(signed long)0))){

(bFoundIndexUS4=1);
(udiFoundIndexUS4=k);

(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].iUpstreamLaneId=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].iUpstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].sHostAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sHostAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].sUpstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyUpstreamConfigurations[3].uiPort=tySetConfiguration.tyData.a_tyUpstreamConfigurations[udiFoundIndexUS3].uiPort);

}

}imp22_endfor2_0:;

for((kk=0);kk<=c_diHermesConfigMaxIdx;kk+=1){

if((((signed long)memcmp((udiTargetAddress1+(kk*udiSizeAddress1)),((unsigned long)(&j)),1)==(signed long)0))){

(bFoundIndexDS1=1);
(udiFoundIndexDS1=kk);

(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].iDownstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].sClientAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].sClientAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].sDownstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[0].uiPort=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS1].uiPort);

}else if((((signed long)memcmp((udiTargetAddress1+(kk*udiSizeAddress1)),((unsigned long)(&jj)),1)==(signed long)0))){

(bFoundIndexDS2=1);
(udiFoundIndexDS2=kk);

(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].iDownstreamLaneId=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].iDownstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].sClientAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].sClientAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].sDownstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[1].uiPort=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS2].uiPort);

}else if((((signed long)memcmp((udiTargetAddress1+(kk*udiSizeAddress1)),((unsigned long)(&jjj)),1)==(signed long)0))){

(bFoundIndexDS3=1);
(udiFoundIndexDS3=kk);

(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].iDownstreamLaneId=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].iDownstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].sClientAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].sClientAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].sDownstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[2].uiPort=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS3].uiPort);

}else if((((signed long)memcmp((udiTargetAddress1+(kk*udiSizeAddress1)),((unsigned long)(&jjjj)),1)==(signed long)0))){

(bFoundIndexDS4=1);
(udiFoundIndexDS4=kk);

(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].iDownstreamLaneId=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].iDownstreamLaneId);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].sClientAddress; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].sClientAddress; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].sDownstreamInterfaceId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.a_tyDownstreamConfigurations[3].uiPort=tySetConfiguration.tyData.a_tyDownstreamConfigurations[udiFoundIndexDS4].uiPort);
}

}imp22_endfor4_0:;

(tySetConfigurationModified.tyAvl.bMachineId=tySetConfiguration.tyAvl.bMachineId);
(tySetConfigurationModified.tyAvl.bSupervisorySystemPort=tySetConfiguration.tyAvl.bSupervisorySystemPort);
(tySetConfigurationModified.tyAvl.bUpstreamConfigurations=tySetConfiguration.tyAvl.bUpstreamConfigurations);
(tySetConfigurationModified.tyAvl.bDownstreamConfigurations=tySetConfiguration.tyAvl.bDownstreamConfigurations);
(tySetConfigurationModified.tyAvl.iUpstreamConfigurations=tySetConfiguration.tyAvl.iUpstreamConfigurations);
(tySetConfigurationModified.tyAvl.iDownstreamConfigurations=tySetConfiguration.tyAvl.iDownstreamConfigurations);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tySetConfigurationModified.tyAvl.a_tyUpstreamConfigurations; unsigned char* zzRValue=(unsigned char*)tySetConfiguration.tyAvl.a_tyUpstreamConfigurations; for(zzIndex=0; zzIndex<16l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tySetConfigurationModified.tyAvl.a_tyDownstreamConfigurations; unsigned char* zzRValue=(unsigned char*)tySetConfiguration.tyAvl.a_tyDownstreamConfigurations; for(zzIndex=0; zzIndex<16l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

{int zzIndex; plcstring* zzLValue=(plcstring*)tySetConfigurationModified.tyData.sMachineId; plcstring* zzRValue=(plcstring*)tySetConfiguration.tyData.sMachineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySetConfigurationModified.tyData.uiSupervisorySystemPort=tySetConfiguration.tyData.uiSupervisorySystemPort);

if((((unsigned long)(unsigned char)bUpdateUIData==(unsigned long)(unsigned char)0))){
(bWriteConfig=1);
(tyMsgTypeRcv.bSetConfiguration=0);
}


}

}



}imp22_else6_0:imp22_end6_0:imp22_else1_0:imp22_end1_0:imp22_else0_0:imp22_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_SendConfig.st"
static void __AS__Action__Act_Background_SendConfig(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bGetConfiguration==(unsigned long)(unsigned char)1))){

if(((((unsigned long)(unsigned char)bWriteConfig==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUpdateUIData==(unsigned long)(unsigned char)0)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort=((*(p_tyHermesConfiguration)).tySvyParam.uiSvySvstemPort));

for((i=0);i<=(((*(p_iInput)))-1);i+=1){
(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId=((*(p_tyHermesConfiguration)).a_tyUSParam[i].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[i].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[i].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort=((*(p_tyHermesConfiguration)).a_tyUSParam[i].uiHostPort));
}imp14_endfor3_0:;

for((i=0);i<=(((*(p_iOutput)))-1);i+=1){
(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId=((*(p_tyHermesConfiguration)).a_tyDSParam[i].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[i].sClientAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[i].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort=((*(p_tyHermesConfiguration)).a_tyDSParam[i].uiSvrPort));
}imp14_endfor4_0:;

(tyCurrentConfigurationSnd.tyAvl.bMachineId=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.sMachineId,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.bSupervisorySystemPort=(((unsigned long)(unsigned short)tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort!=(unsigned long)(unsigned short)0)));
(tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations=1);
(tyCurrentConfigurationSnd.tyAvl.bDownstreamConfigurations=1);
(tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations=((*(p_iInput))));
(tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations=((*(p_iOutput))));

for((i=0);i<=(((*(p_iInput)))-1);i+=1){
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId=(((signed long)(signed long)(short)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId!=(signed long)(signed long)(short)0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamInterfaceId=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bPort=(((unsigned long)(unsigned short)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort!=(unsigned long)(unsigned short)0)));
}imp14_endfor5_0:;

for((i=0);i<=(((*(p_iOutput)))-1);i+=1){
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId=(((signed long)(signed long)(short)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId!=(signed long)(signed long)(short)0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamInterfaceId=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bPort=(((unsigned long)(unsigned short)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort!=(unsigned long)(unsigned short)0)));
}imp14_endfor6_0:;


fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),16);

(tyMsgTypeRcv.bGetConfiguration=0);

}

}

}

}imp14_else2_0:imp14_end2_0:imp14_else1_0:imp14_end1_0:imp14_else0_0:imp14_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_TCPSend.st"
static void __AS__Action__Act_Background_TCPSend(void){
{

if((((signed long)a_eMsgSend[0]!=(signed long)0))){

if((((signed long)a_eMsgSend[0]==(signed long)1))){
(eStatus1=3);
(udiStatus1=10106);

}else if((((signed long)a_eMsgSend[0]==(signed long)2))){
(eStatus1=3);
(udiStatus1=10107);

}else if((((signed long)a_eMsgSend[0]==(signed long)3))){
(eStatus1=3);
(udiStatus1=10108);

}else if((((signed long)a_eMsgSend[0]==(signed long)4))){
(eStatus1=3);
(udiStatus1=10130);

}else if((((signed long)a_eMsgSend[0]==(signed long)6))){
fHermesFormNotification(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyNotificationSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,14);

}else if((((signed long)a_eMsgSend[0]==(signed long)7))){
(eStatus1=3);
(udiStatus1=10131);

}else if((((signed long)a_eMsgSend[0]==(signed long)8))){
(eStatus1=3);
(udiStatus1=10132);

}else if((((signed long)a_eMsgSend[0]==(signed long)9))){
(eStatus1=3);
(udiStatus1=10135);

}else if((((signed long)a_eMsgSend[0]==(signed long)10))){
(eStatus1=3);
(udiStatus1=10136);

}else if((((signed long)a_eMsgSend[0]==(signed long)11))){
(eStatus1=3);
(udiStatus1=10137);

}else if((((signed long)a_eMsgSend[0]==(signed long)12))){
(eStatus1=3);
(udiStatus1=10133);

}else if((((signed long)a_eMsgSend[0]==(signed long)13))){
(eStatus1=3);
(udiStatus1=10134);

}else if((((signed long)a_eMsgSend[0]==(signed long)14))){
(eStatus1=3);
(udiStatus1=10138);

}else if((((signed long)a_eMsgSend[0]==(signed long)15))){
(eStatus1=3);
(udiStatus1=10139);

}else if((((signed long)a_eMsgSend[0]==(signed long)16))){
fHermesFormCurrentConfiguration(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCurrentConfigurationSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,200);


}else if((((signed long)a_eMsgSend[0]==(signed long)17))){
(eStatus1=3);
(udiStatus1=10141);

}else if((((signed long)a_eMsgSend[0]==(signed long)30))){
(eStatus1=3);
(udiStatus1=10142);

}else if((((signed long)a_eMsgSend[0]==(signed long)31))){
(eStatus1=3);
(udiStatus1=10159);

}else if((((signed long)a_eMsgSend[0]==(signed long)32))){
(eStatus1=3);
(udiStatus1=10160);

}else if((((signed long)a_eMsgSend[0]==(signed long)33))){
(eStatus1=3);
(udiStatus1=10161);

}else if((((signed long)a_eMsgSend[0]==(signed long)20))){
(eStatus1=3);
(udiStatus1=10162);

}else if((((signed long)a_eMsgSend[0]==(signed long)25))){
(eStatus1=3);
(udiStatus1=10163);

}


(fbSend.udiTCPIdent=udiClntIdent);
(fbSend.udiSndSize=udiSndMsgLen);
(fbSend.bEn=1);;fbTCPSnd(&fbSend);

if((((unsigned long)fbSend.udiStatus==(unsigned long)0))){

fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
__AS__MEMSET(((unsigned long)(&a_sLogList[udiLogCntr-1])),0,65536);
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sDT)),LEN(sDT));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n")),LEN("\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"SND_TO_RMT\r\n")),LEN("SND_TO_RMT\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sSnd)),LEN(sSnd));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n\r\n")),LEN("\r\n\r\n"));

(udiLogCntr=(udiLogCntr+1));
if((((unsigned long)udiLogCntr==(unsigned long)11))){
(udiLogCntr=1);
}

__AS__Action__Act_Background_NotificationSnd();
fHermesRmvOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)));

(fbSend.bEn=0);;fbTCPSnd(&fbSend);

}else if((((unsigned long)fbSend.udiStatus==(unsigned long)2321))){
(bRstConnection=1);

}else if((((unsigned long)fbSend.udiStatus<(unsigned long)65534))){
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

}imp21_end4_0:imp21_else2_2:imp21_end2_0:imp21_else0_0:imp21_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_TCPCloseSvr.st"
static void __AS__Action__Act_Background_TCPCloseSvr(void){
{

(fbCloseSvr.udiTCPIdent=udiSvrIdent);
(fbCloseSvr.bEn=1);;fbTCPClose(&fbCloseSvr);

if((((unsigned long)fbCloseSvr.udiStatus==(unsigned long)0))){
(udiSvrIdent=0);
(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);

}else if((((unsigned long)fbCloseSvr.udiStatus<(unsigned long)65534))){
(udiSvrIdent=0);
(eStatus1=3);

if((((unsigned long)fbCloseSvr.udiStatus==(unsigned long)2300))){
(udiStatus1=10146);
}else if((((unsigned long)fbCloseSvr.udiStatus==(unsigned long)2310))){
(udiStatus1=10147);
}else{
(udiStatus1=fbCloseSvr.udiStatus);
}

}

}imp17_end1_0:imp17_else0_1:imp17_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_TCPCloseClnt.st"
static void __AS__Action__Act_Background_TCPCloseClnt(void){
{

(fbCloseClnt.udiTCPIdent=udiClntIdent);
(fbCloseClnt.bEn=1);;fbTCPClose(&fbCloseClnt);

if((((unsigned long)fbCloseClnt.udiStatus==(unsigned long)0))){
(udiClntIdent=0);
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);

}else if((((unsigned long)fbCloseClnt.udiStatus<(unsigned long)65534))){
(udiClntIdent=0);
(eStatus1=3);

if((((unsigned long)fbCloseClnt.udiStatus==(unsigned long)2300))){
(udiStatus1=10154);
}else if((((unsigned long)fbCloseClnt.udiStatus==(unsigned long)2310))){
(udiStatus1=10155);
}else{
(udiStatus1=fbCloseClnt.udiStatus);
}

}

}imp16_end1_0:imp16_else0_1:imp16_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_Stop.st"
static void __AS__Action__Act_Background_Stop(void){
{
if((((unsigned long)(unsigned char)bStop==(unsigned long)(unsigned char)1))){

(bRstConnection=1);

if((((unsigned long)udiSvrIdent==(unsigned long)0))){

(bRun=0);

}

}

}imp15_else1_0:imp15_end1_0:imp15_else0_0:imp15_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_Log.st"
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

}imp10_case2_1:imp10_endcase2_0:imp10_else1_0:imp10_end1_0:imp10_else0_0:imp10_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_Err.st"
static void __AS__Action__Act_Background_Err(void){
{
}}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
(bConnected=0);

}}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_CombineErr.st"
static void __AS__Action__Act_CombineErr(void){
{

if(((((signed long)eStatus==(signed long)3))|(((signed long)eStatus1==(signed long)3))|(((signed long)eStatus2==(signed long)3))|(((signed long)eStatus3==(signed long)3)))){
(eMainStatus=3);
}else{
(eMainStatus=eStatus);
}

}imp23_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sRmtHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Alarm1.st"
static void __AS__Action__Act_Alarm1(void){
{

if(((((signed long)eStatus1==(signed long)3))&~Edge0000300000&1?((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),1):((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=1);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData1.bAlm=1);
(tyAlmData1.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sRmtHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Alarm2.st"
static void __AS__Action__Act_Alarm2(void){
{

if(((((signed long)eStatus2==(signed long)3))&~Edge0000400000&1?((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),1):((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.udiCode=udiStatus2);
(tyAlmData2.eSeverity=1);
(tyAlmData2.udiRunTime=(tyAlmData2.udiRunTime+1));
(tyAlmData2.bAlm=1);
(tyAlmData2.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sRmtHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Alarm3.st"
static void __AS__Action__Act_Alarm3(void){
{

if(((((signed long)eStatus3==(signed long)3))&~Edge0000500000&1?((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),1):((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData3.udiCode=udiStatus3);
(tyAlmData3.eSeverity=1);
(tyAlmData3.udiRunTime=(tyAlmData3.udiRunTime+1));
(tyAlmData3.bAlm=1);
(tyAlmData3.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sRmtHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Act_Background_NotificationSnd.st"
static void __AS__Action__Act_Background_NotificationSnd(void){
{
if((((signed long)a_eMsgSend[0]==(signed long)6))){
(bRstConnection=(fHermesNotificationRstConn(&tyNotificationSnd)|bRstConnection));
}

}imp12_else0_0:imp12_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Hermes/RmtHermes/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/RmtHermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/RmtHermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/RmtHermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/RmtHermes/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/RmtHermes/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/RmtHermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'sSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'sRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'a_eMsgSend'\\n\"");
__asm__(".ascii \"plcdata_const 'tyMsgTypeRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'tySetConfiguration'\\n\"");
__asm__(".ascii \"plcdata_const 'a_sLogList'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".previous");
