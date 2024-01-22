#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/SvyHermes/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.st"
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
__AS__Action__Act_Alarm4();

}

}imp49_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);


(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamHermesPrep);
(p_tyParam=p_HermesSvyParam);
(p_sIPAddr=p_HWInfoIPAddr);
(pa_usiMacAddr=p_HWInfoMacAddr);
(p_tyDTStructure=p_TimeCurrDTStruct);
(p_dtCurrDT=p_TimeCurrDT);
(p_sMcId=p_McParamMcNm);
(p_sRecipeNm=p_ProdRcpCurrRcp0Nm);



(p_udiAliveIdleTimeInSec=p_NtParamSvyHermesAliveTmInSec);
(p_tConnTimeOut=p_NtParamSvyHermesConnTO);
(p_diTransferInTO=p_McParamTranOutErrDlyTm);
(p_bNewBrdAvlLastZone=p_HermesBrdAvlDataNewBrdAvlLastZ);
(p_bOpsRun=p_OpsRun);
(p_udiFileKeepDay=p_NtParamSvyHermesFileKeepDay);
(p_sConfigFileName=p_NtParamSvyHermesConfigFileNm);
(p_sProgNm=p_NtParamSvyHermesProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_bSvyPrep=p_NtParamHermesSvyPrep);
(p_bSvyEn=p_McParamHermesSvyEn);



(p_tyHermesConfiguration=p_HermesConfiguration);
(p_bUSHermesStopTransport1=p_USHermesStopTransportSnd);















(p_eHermesStat=p_HermesStat);
(p_eHermesStatus=p_HermesStatus);
(p_eMcParamStat=p_McParamStat);
(p_eMcParamStatus=p_McParamStatus);


(p_bFirstMcIntheLine=p_NtParamHermesSvyFirstMc);
(p_sRetainFileName=p_NtParamSvyHermesRetainFileNm);




(p_bConvRgtSen=p_DIConvRgtSen);
(p_bConvLftSen=p_DIConvLftSen);
(p_tyProdRcpCurrRcp=p_ProdRcpCurrRcp0);
(p_tyMcParamCurr=p_McParamCurr);
(p_tyNtParamCurr=p_NtParamCurr);
(p_eLinkMcParamDSCommMod=p_McParamDSCommMod);
(p_bAWWidthPosDiff=p_AWOpenWidthPosDiff);







}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupSvyHermesAct);
}else{
(p_eAct=((unsigned long)(&eAct)));

if(((((*(p_bSvyPrep)))&((*(p_bSvyEn))))&~Edge0004400000&1?((Edge0004400000=(((*(p_bSvyPrep)))&((*(p_bSvyEn))))&1),1):((Edge0004400000=(((*(p_bSvyPrep)))&((*(p_bSvyEn))))&1),0))){
(bHermesRun=1);
(bHermesStop=0);
}

if((~(((*(p_bSvyPrep)))&((*(p_bSvyEn))))&Edge0004400001&1?((Edge0004400001=(((*(p_bSvyPrep)))&((*(p_bSvyEn))))&1),1):((Edge0004400001=(((*(p_bSvyPrep)))&((*(p_bSvyEn))))&1),0))){
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

}imp44_else6_0:imp44_end6_0:imp44_else5_0:imp44_end5_0:imp44_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Link.st"
static void __AS__Action__Act_Link(void){
{

((*(p_tyParam)).tRcvAlive=(((*(p_tyParam)).tSndAlive)*2));


if(((((unsigned long)(unsigned char)((*(p_bFirstMcIntheLine)))==(unsigned long)(unsigned char)1))&((*(p_bNewBrdAvlLastZone))))){
((*(p_eBoardTransfer1))=3);
}else if(((((unsigned long)(unsigned char)((*(p_bFirstMcIntheLine)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bNewBrdAvlLastZone)))==(unsigned long)(unsigned char)0)))){
((*(p_eBoardTransfer1))=1);
}else if(((((unsigned long)(unsigned char)((*(p_bFirstMcIntheLine)))==(unsigned long)(unsigned char)0))&((*(p_bNewBrdAvlLastZone))))){
((*(p_eBoardTransfer1))=3);
}else if(((((unsigned long)(unsigned char)((*(p_bFirstMcIntheLine)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bNewBrdAvlLastZone)))==(unsigned long)(unsigned char)0)))){
((*(p_eBoardTransfer1))=1);
}



{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Hermes Configuration Received From Supervisory System"; for(zzIndex=0; zzIndex<53l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)"Work Order Info Received From Supervisory System"; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg1))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg1))),"PCB Work Order Info Will Be Overwritten"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg2))); plcstring* zzRValue=(plcstring*)"Work Order Info Not Found From Supervisory System"; for(zzIndex=0; zzIndex<49l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg2))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg2))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg2))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg2))),"Please Try Again"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg3))); plcstring* zzRValue=(plcstring*)"Query Work Order Not Possible"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg3))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg3))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg3))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg3))),"Please Empty the Machines"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg3))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg3))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg3))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg3))),"and Try Again"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg4))); plcstring* zzRValue=(plcstring*)"Waiting For LCS"; for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg5))); plcstring* zzRValue=(plcstring*)"Waiting for Board insert"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg6))); plcstring* zzRValue=(plcstring*)"Remove Board"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};




((*(p_bAcceptCondition))=((*(p_bAllZonesEmpty))));

}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp48_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_tyParam=((unsigned long)(&tyParam)));
(p_sIPAddr=((unsigned long)(&sIPAddr)));
(pa_usiMacAddr=((unsigned long)(&a_usiMacAddr)));
(p_tyDTStructure=((unsigned long)(&tyDTStructure)));
(p_dtCurrDT=((unsigned long)(&dtCurrDT)));
(p_sMcId=((unsigned long)(&sMcId)));
(p_sMagazineId=((unsigned long)(&sMagazineId)));
(p_iSlotId=((unsigned long)(&iSlotId)));
(p_eBoardTransfer1=((unsigned long)(&eBoardTransfer1)));
(p_eBoardTransfer2=((unsigned long)(&eBoardTransfer2)));
(p_eBoardTransfer3=((unsigned long)(&eBoardTransfer3)));
(p_eBoardTransfer4=((unsigned long)(&eBoardTransfer4)));
(p_sVersion=((unsigned long)(&sVersion)));
(p_sBarcode=((unsigned long)(&sBarcode)));
(p_sRecipeNm=((unsigned long)(&sRecipeNm)));
(p_udiSndBffrSize=((unsigned long)(&udiSndBffrSize)));
(p_udiRcvBffrSize=((unsigned long)(&udiRcvBffrSize)));
(p_udiAliveIdleTimeInSec=((unsigned long)(&udiAliveIdleTimeInSec)));
(p_tConnTimeOut=((unsigned long)(&tConnTimeOut)));
(p_diTransferInTO=((unsigned long)(&diTransferInTO)));
(p_bNewBrdAvlLastZone=((unsigned long)(&bNewBrdAvl)));
(p_bOpsRun=((unsigned long)(&bOpsRun)));
(p_udiFileKeepDay=((unsigned long)(&udiFileKeepDay)));
(p_sConfigFileName=((unsigned long)(&sConfigFileName)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_bSvyPrep=((unsigned long)(&bSvyPrep)));
(p_bSvyEn=((unsigned long)(&bSvyEn)));
(p_bQueryWorkOrderInfo=((unsigned long)(&bQueryWorkOrderInfo)));
(p_bReinsertBrd=((unsigned long)(&bReinsertBrd)));
(p_bInsertBoard=((unsigned long)(&bInsertBoard)));
(p_tyHermesConfiguration=((unsigned long)(&tyHermesCurrConfiguration)));
(p_bUSHermesStopTransport1=((unsigned long)(&bUSHermesStopTransportSnd1)));
(p_bUSHermesStopTransport2=((unsigned long)(&bUSHermesStopTransportSnd2)));
(p_bUSHermesStopTransport3=((unsigned long)(&bUSHermesStopTransportSnd3)));
(p_bUSHermesStopTransport4=((unsigned long)(&bUSHermesStopTransportSnd4)));
(p_tyUSBoardArrived1=((unsigned long)(&tyUSHermesBoardArrivedData1)));
(p_tyUSBoardArrived2=((unsigned long)(&tyUSHermesBoardArrivedData2)));
(p_tyUSBoardArrived3=((unsigned long)(&tyUSHermesBoardArrivedData3)));
(p_tyUSBoardArrived4=((unsigned long)(&tyUSHermesBoardArrivedData4)));
(p_bDSHermesTransportFinished1=((unsigned long)(&bDSHermesTransportFinishedSnd1)));
(p_bDSHermesTransportFinished2=((unsigned long)(&bDSHermesTransportFinishedSnd2)));
(p_bDSHermesTransportFinished3=((unsigned long)(&bDSHermesTransportFinishedSnd3)));
(p_bDSHermesTransportFinished4=((unsigned long)(&bDSHermesTransportFinishedSnd4)));
(p_tyDSBoardDeparted1=((unsigned long)(&tyDSHermesBoardDepartedData1)));
(p_tyDSBoardDeparted2=((unsigned long)(&tyDSHermesBoardDepartedData2)));
(p_tyDSBoardDeparted3=((unsigned long)(&tyDSHermesBoardDepartedData3)));
(p_tyDSBoardDeparted4=((unsigned long)(&tyDSHermesBoardDepartedData4)));
(p_sInfoMsg=((unsigned long)(&sInfoMsg)));
(p_sInfoMsg1=((unsigned long)(&sInfoMsg1)));
(p_sInfoMsg2=((unsigned long)(&sInfoMsg2)));
(p_sInfoMsg3=((unsigned long)(&sInfoMsg3)));
(p_sInfoMsg4=((unsigned long)(&sInfoMsg4)));
(p_sInfoMsg5=((unsigned long)(&sInfoMsg5)));
(p_sInfoMsg6=((unsigned long)(&sInfoMsg6)));
(p_bInternalUse=((unsigned long)(&bInternalUse)));
(p_sInternalRcv=((unsigned long)(&sInternalRcv)));
(p_bAcceptCondition=((unsigned long)(&bAcceptCondition)));
(p_bAllZonesEmpty=((unsigned long)(&bAllZonesEmpty)));
(p_bDeleteWorkOrder=((unsigned long)(&bDeleteWorkOrder)));
(p_bFirstMcIntheLine=((unsigned long)(&bFirstMcIntheLine)));
(p_sRetainFileName=((unsigned long)(&sRetainFileName)));
(p_udiRetainDataAddr=((unsigned long)(&udiRetainDataAddr)));
(p_udiRetainDataLen=((unsigned long)(&udiRetainDataLen)));


}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Initial.st"
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

(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);

(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);

(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);

((*(unsigned long*)&(fbSequenceSvy.p_tyMsgTypeRcv))=((unsigned long)(&tyMsgTypeRcv)));
(fbSequenceSvy.bEn=0);;fbHermesSequenceSvy(&fbSequenceSvy);

(fbSequenceTO.bEn=0);;fbHermesSequenceSvyTO(&fbSequenceTO);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sDevice; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sDevice; plcstring* zzRValue=(plcstring*)"Log"; for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sPath; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sKeyword; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileOldDel1.udiFileKeepDay=((*(p_udiFileKeepDay))));
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead1.udiOffset=0);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite1.udiOffset=0);
(fbFileWrite1.udiOption=0);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);


}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Action.st"
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
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);
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

}break;case 10:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(fbFileRead1.p_Dest=((*(p_udiRetainDataAddr))));
(fbFileRead1.udiLen=((*(p_udiRetainDataLen))));
(fbFileRead1.bEn=1);;fbFileFullRead(&fbFileRead1);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileRead1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1900))){
(udiStatus=10114);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1902))){
(udiStatus=10115);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1904))){
(udiStatus=10116);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead1.udiStatus);
}
}

}

}break;case 5:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(fbFileWrite1.p_Src=((*(p_udiRetainDataAddr))));
(fbFileWrite1.udiLen=((*(p_udiRetainDataLen))));
(fbFileWrite1.bEn=1);;fbFileFullWrite(&fbFileWrite1);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10117);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10118);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10119);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10120);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10121);
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

}imp46_else13_0:imp46_end13_0:imp46_endcase1_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if((((unsigned long)(unsigned char)bRun==(unsigned long)(unsigned char)1))){
if((((unsigned long)udiSvrIdent==(unsigned long)0))){
if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
__AS__Action__Act_Background_TCPCreateSvr();

(tyParamOld=*(struct tyHermesSvyParam*)&((*(p_tyParam))));
}else{
(udiSvrIdent=1);
}

}else{
if((((unsigned long)(unsigned char)bRstConnection==(unsigned long)(unsigned char)0))){

__AS__Action__Act_Background_ChgConfig();

if((((unsigned long)udiClntIdent==(unsigned long)0))){
if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
__AS__Action__Act_Background_TCPListen();
}else{
(udiClntIdent=1);
}

}else{
__AS__Action__Act_Background_TCPRcv();

__AS__Action__Act_Background_NotificationRcv();

__AS__Action__Act_Background_IllegalMsg();
__AS__Action__Act_Background_ChkParamRcv();
__AS__Action__Act_Background_CmpParamRcv();
__AS__Action__Act_Background_UpdtConfig();


if((((unsigned long)(unsigned char)bHandshakeDone==(unsigned long)(unsigned char)1))){
if(((((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0)))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureCheckAliveResponse==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_tyParam)).bFeatureCheckAliveResponse)==(unsigned long)(unsigned char)1)))){
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

__AS__Action__Act_Background_Sequence();
__AS__Action__Act_Background_SequenceTO();
__AS__Action__Act_Background_Err();

if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureQueryWorkOrderInfo)&bHandshakeDone)){
__AS__Action__Act_Background_QueryWorkOrderInfo();
}

__AS__Action__Act_Background_SendBoardArrivedLane1();
__AS__Action__Act_Background_SendBoardArrivedLane2();
__AS__Action__Act_Background_SendBoardArrivedLane3();
__AS__Action__Act_Background_SendBoardArrivedLane4();
__AS__Action__Act_Background_SendBoardDepartedLane1();
__AS__Action__Act_Background_SendBoardDepartedLane2();
__AS__Action__Act_Background_SendBoardDepartedLane3();
__AS__Action__Act_Background_SendBoardDepartedLane4();
__AS__Action__Act_Background_TCPSend();

__AS__Action__Act_Background_Log();

}

}else{
if((((unsigned long)udiClntIdent!=(unsigned long)0))){
__AS__Action__Act_Background_TCPCloseClnt();
}else{
if((((unsigned long)udiSvrIdent!=(unsigned long)0))){
__AS__Action__Act_Background_TCPCloseSvr();
}
}

}


if((((unsigned long)udiClntIdentExtra==(unsigned long)0))){

}else{

}

}

__AS__Action__Act_Background_Stop();

}



if(((~bRun&Edge0000700000&1?((Edge0000700000=bRun&1),1):((Edge0000700000=bRun&1),0))|(~(((unsigned long)udiSvrIdent==(unsigned long)0))&Edge0000700001&1?((Edge0000700001=(((unsigned long)udiSvrIdent==(unsigned long)0))&1),1):((Edge0000700001=(((unsigned long)udiSvrIdent==(unsigned long)0))&1),0)))){

(fbCreateSvr.bEn=0);;fbTCPCreateSvr(&fbCreateSvr);
}

if(((~bRun&Edge0000700002&1?((Edge0000700002=bRun&1),1):((Edge0000700002=bRun&1),0))|(~(((unsigned long)udiClntIdent==(unsigned long)0))&Edge0000700003&1?((Edge0000700003=(((unsigned long)udiClntIdent==(unsigned long)0))&1),1):((Edge0000700003=(((unsigned long)udiClntIdent==(unsigned long)0))&1),0)))){

(fbListen.bEn=0);;fbTCPListen(&fbListen);

(bConnected=bRun);
}

if(((~bRun&Edge0000700004&1?((Edge0000700004=bRun&1),1):((Edge0000700004=bRun&1),0))|(~(((unsigned long)udiSvrIdent!=(unsigned long)0))&Edge0000700005&1?((Edge0000700005=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),1):((Edge0000700005=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),0))|(~(((unsigned long)udiClntIdent!=(unsigned long)0))&Edge0000700006&1?((Edge0000700006=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),1):((Edge0000700006=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),0)))){
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);
(fbSequenceSvy.bEn=0);;fbHermesSequenceSvy(&fbSequenceSvy);
(fbSequenceTO.bEn=0);;fbHermesSequenceSvyTO(&fbSequenceTO);
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bHandshakeDone=0);
(bRstState=0);

__AS__MEMSET(((unsigned long)(&tyMsgTypeRcv)),0,24);
__AS__MEMSET(((unsigned long)(&a_eMsgSend)),0,204);
(udiMsgSendBffr=0);
}

if(((~bRun&Edge0000700007&1?((Edge0000700007=bRun&1),1):((Edge0000700007=bRun&1),0))|(~(((unsigned long)udiSvrIdent!=(unsigned long)0))&Edge0000700008&1?((Edge0000700008=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),1):((Edge0000700008=(((unsigned long)udiSvrIdent!=(unsigned long)0))&1),0)))){
(bRstConnection=0);
(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);
}

if(((~bRun&Edge0000700009&1?((Edge0000700009=bRun&1),1):((Edge0000700009=bRun&1),0))|(~(((unsigned long)udiClntIdent!=(unsigned long)0))&Edge0000700010&1?((Edge0000700010=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),1):((Edge0000700010=(((unsigned long)udiClntIdent!=(unsigned long)0))&1),0)))){
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);
}


if(((((signed long)eStatus1==(signed long)3))&bRstErr)){
(eStatus1=0);
(udiStatus1=0);

(fbCreateSvr.bEn=0);;fbTCPCreateSvr(&fbCreateSvr);
(fbListen.bEn=0);;fbTCPListen(&fbListen);
(fbRcv.bEn=0);;fbTCPRcv(&fbRcv);
(fbSequenceSvy.bEn=0);;fbHermesSequenceSvy(&fbSequenceSvy);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);
(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
(fbSequenceTO.bEn=0);;fbHermesSequenceSvyTO(&fbSequenceTO);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bHandshakeDone=0);
(bRstConnection=0);
(bRstState=0);

__AS__MEMSET(((unsigned long)(&tyMsgTypeRcv)),0,24);
__AS__MEMSET(((unsigned long)(&a_eMsgSend)),0,204);
(udiMsgSendBffr=0);
}

if(((((signed long)eStatus2==(signed long)3))&bRstErr)){
(eStatus2=0);
(udiStatus2=0);

(fbSequenceTO.bEn=0);;fbHermesSequenceSvyTO(&fbSequenceTO);

}

if(((((signed long)eStatus3==(signed long)3))&bRstErr)){
(eStatus3=0);
(udiStatus3=0);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);
}

}imp7_else20_0:imp7_end20_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_ProcessData.st"
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


{int zzIndex; plcstring* zzLValue=(plcstring*)sBatchId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sBatchId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


((*(p_udiRetainDataAddr))=((unsigned long)(&sWorkOrderId)));
((*(p_udiRetainDataLen))=81);


if((bRcvWorkOrderInfo1&~Edge0001900000&1?((Edge0001900000=bRcvWorkOrderInfo1&1),1):((Edge0001900000=bRcvWorkOrderInfo1&1),0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sWorkOrderId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
((*(p_eAct))=5);

}else if(((~(((unsigned long)(unsigned char)((*(p_bSvyEn)))==(unsigned long)(unsigned char)1))&Edge0001900001&1?((Edge0001900001=(((unsigned long)(unsigned char)((*(p_bSvyEn)))==(unsigned long)(unsigned char)1))&1),1):((Edge0001900001=(((unsigned long)(unsigned char)((*(p_bSvyEn)))==(unsigned long)(unsigned char)1))&1),0))|(~(((unsigned long)(unsigned char)((*(p_bSvyPrep)))==(unsigned long)(unsigned char)1))&Edge0001900002&1?((Edge0001900002=(((unsigned long)(unsigned char)((*(p_bSvyPrep)))==(unsigned long)(unsigned char)1))&1),1):((Edge0001900002=(((unsigned long)(unsigned char)((*(p_bSvyPrep)))==(unsigned long)(unsigned char)1))&1),0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sWorkOrderId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
((*(p_eAct))=5);

}else if((~(((unsigned long)(unsigned char)((*(p_tyHermesConfiguration)).tySvyParam.bFeatureQueryWorkOrderInfo)==(unsigned long)(unsigned char)1))&Edge0001900003&1?((Edge0001900003=(((unsigned long)(unsigned char)((*(p_tyHermesConfiguration)).tySvyParam.bFeatureQueryWorkOrderInfo)==(unsigned long)(unsigned char)1))&1),1):((Edge0001900003=(((unsigned long)(unsigned char)((*(p_tyHermesConfiguration)).tySvyParam.bFeatureQueryWorkOrderInfo)==(unsigned long)(unsigned char)1))&1),0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sWorkOrderId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
((*(p_eAct))=5);

}else if((((*(p_bDeleteWorkOrder)))&~Edge0001900004&1?((Edge0001900004=((*(p_bDeleteWorkOrder)))&1),1):((Edge0001900004=((*(p_bDeleteWorkOrder)))&1),0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sWorkOrderId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
((*(p_eAct))=5);
((*(p_bDeleteWorkOrder))=0);
}

if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)5)))){
((*(p_eAct))=0);
}










if((bTest&~Edge0001900005&1?((Edge0001900005=bTest&1),1):((Edge0001900005=bTest&1),0))){



}

}imp19_else6_0:imp19_end6_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_TCPCreateSvr.st"
static void __AS__Action__Act_Background_TCPCreateSvr(void){
{
if((((signed long)eStatus1!=(signed long)3))){


{int zzIndex; plcstring* zzLValue=(plcstring*)fbCreateSvr.sSvrIP; plcstring* zzRValue=(plcstring*)((*(p_sIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbCreateSvr.uiSvrPort=((*(p_tyParam)).uiSvySvstemPort));
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

}imp34_end2_0:imp34_else1_1:imp34_end1_0:imp34_else0_0:imp34_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_TCPListen.st"
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

}else if(((((unsigned long)fbListen.udiStatus==(unsigned long)2312))|(((unsigned long)(unsigned char)bConnected==(unsigned long)(unsigned char)0)))){
(udiStatus4=10012);
(fbListen.bEn=0);;fbTCPListen(&fbListen);

}else if((((unsigned long)fbListen.udiStatus<(unsigned long)65534))){
(eStatus1=3);

if((((unsigned long)fbListen.udiStatus==(unsigned long)2300))){
(udiStatus1=10010);
}else{
(udiStatus1=fbListen.udiStatus);
}

}

}

}imp35_end2_0:imp35_else1_3:imp35_end1_0:imp35_else0_0:imp35_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_TCPRcv.st"
static void __AS__Action__Act_Background_TCPRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){


if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
(fbRcv.udiTCPIdent=udiClntIdent);
(fbRcv.bEn=1);;fbTCPRcv(&fbRcv);
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)sRcv; plcstring* zzRValue=(plcstring*)((*(p_sInternalRcv))); for(zzIndex=0; zzIndex<65535l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((((unsigned long)fbRcv.udiStatus==(unsigned long)0))|((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)1))&(((signed long)LEN(sRcv)>(signed long)(signed long)(short)0))))){

fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
__AS__MEMSET(((unsigned long)(&a_sLogList[udiLogCntr-1])),0,65536);
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&sDT)),LEN(sDT));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"\r\n")),LEN("\r\n"));
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"RCV_FRM_SVY\r\n")),LEN("RCV_FRM_SVY\r\n"));
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

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bSServiceDescription==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bSServiceDescription=1);
(tySServiceDescriptionRcv=*(struct tyHermesSServiceDescription*)&fbParseXMLTable.tySServiceDescription);
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

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bBoardArrived==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bBoardArrived=1);
(tyBoardArrivedRcv=*(struct tyHermesBoardArrived*)&fbParseXMLTable.tyBoardArrived);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bBoardDeparted==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bBoardDeparted=1);
(tyBoardDepartedRcv=*(struct tyHermesBoardDeparted*)&fbParseXMLTable.tyBoardDeparted);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bQueryBoardInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bQueryBoardInfo=1);
(tyQueryBoardInfo=*(struct tyHermesQueryBoardInfo*)&fbParseXMLTable.tyQueryBoardInfo);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bSendBoardInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bSendBoardInfo=1);
(tySendBoardInfo=*(struct tyHermesSendBoardInfo*)&fbParseXMLTable.tySendBoardInfo);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bQueryWorkOrderInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bQueryWorkOrderInfo=1);
(tyQueryWorkOrderInfo=*(struct tyHermesQueryWorkOrderInfo*)&fbParseXMLTable.tyQueryWorkOrderInfo);
}

if((((unsigned long)(unsigned char)fbParseXMLTable.tyMsgType.bSendWorkOrderInfo==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bSendWorkOrderInfo=1);
(tySendWorkOrderInfoRcv=*(struct tyHermesSendWorkOrderInfo*)&fbParseXMLTable.tySendWorkOrderInfo);
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

}imp36_else2_4:imp36_end2_0:imp36_else0_0:imp36_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_NotificationRcv.st"
static void __AS__Action__Act_Background_NotificationRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bNotification==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bNotification=0);

(bRstConnection=(fHermesNotificationRstConn(&tyNotificationRcv)|bRstConnection));


}

}

}imp17_else1_0:imp17_end1_0:imp17_else0_0:imp17_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_IllegalMsg.st"
static void __AS__Action__Act_Background_IllegalMsg(void){
{
if((((signed long)eStatus2!=(signed long)3))){

(udiStatus2=fHermesIllegalMsgSvy(fbSequenceSvy.eState,&tyMsgTypeRcv));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2940))){
(udiStatus2=10016);
}else if((((unsigned long)udiStatus2==(unsigned long)2941))){
(udiStatus2=10017);
}else if((((unsigned long)udiStatus2==(unsigned long)2942))){
(udiStatus2=10018);
}else if((((unsigned long)udiStatus2==(unsigned long)2943))){
(udiStatus2=10019);
}else if((((unsigned long)udiStatus2==(unsigned long)2944))){
(udiStatus2=10020);
}else if((((unsigned long)udiStatus2==(unsigned long)2945))){
(udiStatus2=10021);
}else if((((unsigned long)udiStatus2==(unsigned long)2946))){
(udiStatus2=10022);
}else if((((unsigned long)udiStatus2==(unsigned long)2947))){
(udiStatus2=10023);
}else if((((unsigned long)udiStatus2==(unsigned long)2948))){
(udiStatus2=10024);
}else if((((unsigned long)udiStatus2==(unsigned long)2949))){
(udiStatus2=10025);
}else if((((unsigned long)udiStatus2==(unsigned long)2950))){
(udiStatus2=10026);
}else if((((unsigned long)udiStatus2==(unsigned long)2951))){
(udiStatus2=10027);
}else if((((unsigned long)udiStatus2==(unsigned long)2952))){
(udiStatus2=10028);
}else if((((unsigned long)udiStatus2==(unsigned long)2953))){
(udiStatus2=10029);
}else if((((unsigned long)udiStatus2==(unsigned long)2954))){
(udiStatus2=10030);
}else if((((unsigned long)udiStatus2==(unsigned long)2955))){
(udiStatus2=10031);
}else if((((unsigned long)udiStatus2==(unsigned long)2956))){
(udiStatus2=10032);
}else if((((unsigned long)udiStatus2==(unsigned long)2957))){
(udiStatus2=10033);
}else if((((unsigned long)udiStatus2==(unsigned long)2958))){
(udiStatus2=10034);
}else if((((unsigned long)udiStatus2==(unsigned long)2959))){
(udiStatus2=10035);
}else if((((unsigned long)udiStatus2==(unsigned long)2960))){
(udiStatus2=10036);
}else if((((unsigned long)udiStatus2==(unsigned long)2961))){
(udiStatus2=10037);
}else if((((unsigned long)udiStatus2==(unsigned long)2962))){
(udiStatus2=10038);
}else if((((unsigned long)udiStatus2==(unsigned long)2963))){
(udiStatus2=10039);
}else if((((unsigned long)udiStatus2==(unsigned long)2964))){
(udiStatus2=10040);
}else if((((unsigned long)udiStatus2==(unsigned long)2965))){
(udiStatus2=10041);
}else if((((unsigned long)udiStatus2==(unsigned long)2966))){
(udiStatus2=10042);
}else if((((unsigned long)udiStatus2==(unsigned long)2967))){
(udiStatus2=10043);
}else if((((unsigned long)udiStatus2==(unsigned long)2968))){
(udiStatus2=10044);
}else if((((unsigned long)udiStatus2==(unsigned long)2969))){
(udiStatus2=10045);
}else if((((unsigned long)udiStatus2==(unsigned long)2970))){
(udiStatus2=10046);
}else if((((unsigned long)udiStatus2==(unsigned long)2971))){
(udiStatus2=10047);
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

}imp15_else1_0:imp15_end1_0:imp15_else0_0:imp15_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_ChkParamRcv.st"
static void __AS__Action__Act_Background_ChkParamRcv(void){
{
if((((signed long)eStatus2!=(signed long)3))){


if((((unsigned long)(unsigned char)tyMsgTypeRcv.bSServiceDescription==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSSD(&tySServiceDescriptionRcv));

if((((unsigned long)udiStatus2==(unsigned long)2731))){
(udiStatus2=0);
}

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);


if((((unsigned long)udiStatus2==(unsigned long)2719))){
(udiStatus2=10087);
}else if((((unsigned long)udiStatus2==(unsigned long)2730))){
(udiStatus2=10088);
}else if((((unsigned long)udiStatus2==(unsigned long)2731))){
(udiStatus2=10089);
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



}

}imp12_else6_0:imp12_end6_0:imp12_else5_0:imp12_end5_0:imp12_else0_0:imp12_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_CmpParamRcv.st"
static void __AS__Action__Act_Background_CmpParamRcv(void){
{
if((((signed long)eStatus2!=(signed long)3))){

if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureQueryWorkOrderInfo))){

if(((((unsigned long)(unsigned char)tyMsgTypeRcv.bSendWorkOrderInfo==(unsigned long)(unsigned char)1))&(((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd)))))){
(udiStatus2=fHermesChkParamSWQW(&tySendWorkOrderInfoRcv,&tyQueryWorkOrderInfo));


if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2767))){
(udiStatus2=10164);
}else if((((unsigned long)udiStatus2==(unsigned long)2768))){
(udiStatus2=10165);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyMsgTypeRcv.bSendWorkOrderInfo=0);
}
}
}

}

}imp13_else3_0:imp13_end3_0:imp13_else2_0:imp13_end2_0:imp13_else1_0:imp13_end1_0:imp13_else0_0:imp13_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_Sequence.st"
static void __AS__Action__Act_Background_Sequence(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbSequenceSvy.bRstState=bRstState);
(fbSequenceSvy.bEn=1);;fbHermesSequenceSvy(&fbSequenceSvy);

if((((signed long)fbSequenceSvy.eState>=(signed long)1))){
(bHandshakeDone=1);
}else{
(bHandshakeDone=0);
}

if((((signed long)fbSequenceSvy.eMsgTypeSnd==(signed long)5))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),5);


{int zzIndex; plcstring* zzLValue=(plcstring*)tySServiceDescriptionSnd.tyData.sSystemId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySServiceDescriptionSnd.tyData.sVersion; plcstring* zzRValue=(plcstring*)((*(p_sVersion))); for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCheckAliveResponse=(((*(p_tyParam)).bFeatureCheckAliveResponse)&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))));
(tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureConfiguration=((*(p_tyParam)).bFeatureConfiguration));
(tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureBoardTracking=((*(p_tyParam)).bFeatureBoardTracking));
(tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureQueryWorkOrderInfo=((*(p_tyParam)).bFeatureQueryWorkOrderInfo));
(tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureSendWorkOrderInfo=0);

(tySServiceDescriptionSnd.tyAvl.bSystemId=((__AS__STRING_CMP(tySServiceDescriptionSnd.tyData.sSystemId,"")!=0)));
(tySServiceDescriptionSnd.tyAvl.bVersion=1);
(tySServiceDescriptionSnd.tyAvl.bSupportedFeatures=(((*(p_tyParam)).bFeatureCheckAliveResponse)|((*(p_tyParam)).bFeatureConfiguration)|((*(p_tyParam)).bFeatureBoardTracking)|((*(p_tyParam)).bFeatureQueryWorkOrderInfo)|((*(p_tyParam)).bFeatureSendWorkOrderInfo)));
(tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse=(((*(p_tyParam)).bFeatureCheckAliveResponse)&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))));
(tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureConfiguration=((*(p_tyParam)).bFeatureConfiguration));
(tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureBoardTracking=((*(p_tyParam)).bFeatureBoardTracking));
(tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureQueryWorkOrderInfo=((*(p_tyParam)).bFeatureQueryWorkOrderInfo));
(tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo=0);


}else if(((((signed long)fbSequenceSvy.eMsgTypeSnd==(signed long)16))&(((unsigned long)(unsigned char)bWriteConfig==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bUpdateUIData==(unsigned long)(unsigned char)0)))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),16);


(tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations=2);
(tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations=2);
(tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations=(((signed long)(signed long)(short)tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations>(signed long)(signed long)(short)0)));
(tyCurrentConfigurationSnd.tyAvl.bDownstreamConfigurations=(((unsigned long)(unsigned char)tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations>(unsigned long)(unsigned char)0)));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort=((*(p_tyHermesConfiguration)).tySvyParam.uiSvySvstemPort));
(tyCurrentConfigurationSnd.tyAvl.bMachineId=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.sMachineId,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.bSupervisorySystemPort=(((unsigned long)(unsigned short)tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort!=(unsigned long)(unsigned short)0)));

if((((signed long)(tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations-1)>=(signed long)(signed long)(short)0))){
for((i=0);i<=(tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations-1);i+=1){
(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId=((*(p_tyHermesConfiguration)).a_tyUSParam[i].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[i].sHostAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[i].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort=((*(p_tyHermesConfiguration)).a_tyUSParam[i].uiHostPort));

(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId=(((signed long)(signed long)(short)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId!=(signed long)(signed long)(short)0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamInterfaceId=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bPort=(((unsigned long)(unsigned short)tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort!=(unsigned long)(unsigned short)0)));
}imp29_endfor4_0:;
}


if((((signed long)(tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations-1)>=(signed long)(signed long)(short)0))){
for((i=0);i<=(tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations-1);i+=1){
(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId=((*(p_tyHermesConfiguration)).a_tyDSParam[i].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[i].sClientAddress); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[i].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort=((*(p_tyHermesConfiguration)).a_tyDSParam[i].uiSvrPort));

(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId=(((signed long)(signed long)(short)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId!=(signed long)(signed long)(short)0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamInterfaceId=((__AS__STRING_CMP(tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId,"")!=0)));
(tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bPort=(((unsigned long)(unsigned short)tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort!=(unsigned long)(unsigned short)0)));
}imp29_endfor6_0:;
}




}

}

}imp29_else5_0:imp29_end5_0:imp29_else2_1:imp29_end2_0:imp29_else0_0:imp29_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SequenceTO.st"
static void __AS__Action__Act_Background_SequenceTO(void){
{
if(((((signed long)eStatus1!=(signed long)3))&(((signed long)eStatus2!=(signed long)3)))){


(fbSequenceTO.eState=fbSequenceSvy.eState);
(fbSequenceTO.tConnTimeOut=((*(p_tConnTimeOut))));
(fbSequenceTO.bEn=1);;fbHermesSequenceSvyTO(&fbSequenceTO);

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

}imp30_end2_0:imp30_else1_0:imp30_end1_0:imp30_else0_0:imp30_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_ChkAlive.st"
static void __AS__Action__Act_Background_ChkAlive(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbCheckAlive.bDataRcv=(tyMsgTypeRcv.bCheckAlive|tyMsgTypeRcv.bSetConfiguration|tyMsgTypeRcv.bGetConfiguration|tyMsgTypeRcv.bSendWorkOrderInfo));
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
if((fbCheckAlive.bDataSend&~Edge0000900000&1?((Edge0000900000=fbCheckAlive.bDataSend&1),1):((Edge0000900000=fbCheckAlive.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),1);
(tyCheckAliveSnd=*(struct tyHermesCheckAlive*)&fbCheckAlive.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlive=0);

}

}imp9_else0_0:imp9_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_ChkAliveSendPing.st"
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
if((fbCheckAliveSendPing.bDataSend&~Edge0001100000&1?((Edge0001100000=fbCheckAliveSendPing.bDataSend&1),1):((Edge0001100000=fbCheckAliveSendPing.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),2);
(tyCheckAlivePingSnd=*(struct tyHermesCheckAlive*)&fbCheckAliveSendPing.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlivePong=0);

}

}imp11_else0_0:imp11_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_ChkAliveRcvPing.st"
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
if((fbCheckAliveRcvPing.bDataSend&~Edge0001000000&1?((Edge0001000000=fbCheckAliveRcvPing.bDataSend&1),1):((Edge0001000000=fbCheckAliveRcvPing.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),3);
(tyCheckAlivePongSnd=*(struct tyHermesCheckAlive*)&fbCheckAliveRcvPing.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlivePing=0);

}

}imp10_else0_0:imp10_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_UpdtConfig.st"
static void __AS__Action__Act_Background_UpdtConfig(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if((tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureConfiguration&((*(p_tyParam)).bFeatureConfiguration))){

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

}imp38_endfor3_0:;

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

}imp38_endfor5_0:;

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
}else{

(bWriteConfig=0);
(tyMsgTypeRcv.bSetConfiguration=0);
}

}






}imp38_end1_0:imp38_else0_0:imp38_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_ChgConfig.st"
static void __AS__Action__Act_Background_ChgConfig(void){
{
if((((signed long)eStatus2!=(signed long)3))){




if(((((unsigned long)(unsigned short)tyParamOld.uiSvySvstemPort!=(unsigned long)(unsigned short)((*(p_tyParam)).uiSvySvstemPort)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureBoardTracking!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureBoardTracking)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureCheckAliveResponse!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureCheckAliveResponse)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureConfiguration!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureConfiguration)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureQueryWorkOrderInfo!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureQueryWorkOrderInfo)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureQueryWorkOrderInfo!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureReplyWorkOrderInfo))))){

if((((unsigned long)udiClntIdent!=(unsigned long)0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=1);
(tyNotificationSnd.tyData.iNotificationCode=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)"Configuration Changed"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

(bRstConnection=1);

}

}

}imp8_else1_0:imp8_end1_0:imp8_else0_0:imp8_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_QueryWorkOrderInfo.st"
static void __AS__Action__Act_Background_QueryWorkOrderInfo(void){
{
if((((signed long)eStatus2!=(signed long)3))){

if((((((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd))))&~Edge0002000000&1?((Edge0002000000=(((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd))))&1),1):((Edge0002000000=(((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd))))&1),0))&((*(p_bAcceptCondition))))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),32);

fHermesGenerateUUID(((unsigned long)(&tyQueryWorkOrderInfo.tyData.sQueryId)),&((*(p_tyDTStructure))),((*(pa_usiMacAddr))));

{int zzIndex; plcstring* zzLValue=(plcstring*)tyQueryWorkOrderInfo.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyQueryWorkOrderInfo.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)((*(p_sMagazineId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyQueryWorkOrderInfo.tyData.iSlotId=((*(p_iSlotId))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyQueryWorkOrderInfo.tyData.sBarcode; plcstring* zzRValue=(plcstring*)((*(p_sBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyQueryWorkOrderInfo.tyAvl.bQueryId=((__AS__STRING_CMP(tyQueryWorkOrderInfo.tyData.sQueryId,"")!=0)));
(tyQueryWorkOrderInfo.tyAvl.bMachineId=((__AS__STRING_CMP(tyQueryWorkOrderInfo.tyData.sMachineId,"")!=0)));
(tyQueryWorkOrderInfo.tyAvl.bMagazineId=((__AS__STRING_CMP(tyQueryWorkOrderInfo.tyData.sMagazineId,"")!=0)));
(tyQueryWorkOrderInfo.tyAvl.bSlotId=(((signed long)(signed long)(short)tyQueryWorkOrderInfo.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyQueryWorkOrderInfo.tyAvl.bBarcode=((__AS__STRING_CMP(tyQueryWorkOrderInfo.tyData.sBarcode,"")!=0)));
(bQueryInsertBoard=1);
(bRcvInsertBoardInfo=0);
(bManualInsertData=0);
(bReplyWorkOrderInfo=0);
(bRcvWorkOrderInfo2=0);
}

if(((((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd))))&(((unsigned long)(unsigned char)((*(p_bAcceptCondition)))==(unsigned long)(unsigned char)0)))){
(bRstWorkOrderInfo=1);
}

if(tyMsgTypeRcv.bSendWorkOrderInfo){

if(((((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd))))&(((unsigned long)udiStatus2==(unsigned long)0)))){

if((tySendWorkOrderInfoRcv.tyAvl.bWorkOrderId&((__AS__STRING_CMP(tySendWorkOrderInfoRcv.tyData.sWorkOrderId,"")!=0))&((*(p_bAcceptCondition)))&((tySendWorkOrderInfoRcv.tyData.rWidth>=5.00000000000000000000E+01))&((tySendWorkOrderInfoRcv.tyData.rWidth<=4.60000000000000000000E+02)))){


(bRcvWorkOrderInfo2=0);
(bRcvInsertBoardInfo=1);
(tySendWorkOrderInfoAcc=*(struct tyHermesSendWorkOrderInfo*)&tySendWorkOrderInfoRcv);
(tyMsgTypeRcv.bSendWorkOrderInfo=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sWorkOrderId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


}
else if((((((unsigned long)(unsigned char)tySendWorkOrderInfoRcv.tyAvl.bWorkOrderId==(unsigned long)(unsigned char)0))|((__AS__STRING_CMP(tySendWorkOrderInfoRcv.tyData.sWorkOrderId,"")==0)))|((tySendWorkOrderInfoRcv.tyData.rWidth<5.00000000000000000000E+01))|((tySendWorkOrderInfoRcv.tyData.rWidth>4.60000000000000000000E+02)))){
(bRcvWorkOrderInfo2=1);
(bRcvInsertBoardInfo=0);
(tyMsgTypeRcv.bSendWorkOrderInfo=0);
}

}else if(((((unsigned long)(unsigned char)((*(p_bQueryWorkOrderInfo)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bReinsertBrd)))==(unsigned long)(unsigned char)0)))){
(tyMsgTypeRcv.bSendWorkOrderInfo=0);
}

}

if((((unsigned long)(unsigned char)bRcvWorkOrderInfo1==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData1.udiCode=10000);
(tyInfoData1.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg1))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)bRcvWorkOrderInfo2==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData2.udiCode=10000);
(tyInfoData2.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg2))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}


if((((unsigned long)(unsigned char)bRstWorkOrderInfo==(unsigned long)(unsigned char)1))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData3.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData3.udiCode=10000);
(tyInfoData3.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData3.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg3))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

if((bQueryInsertBoard&~Edge0002000001&1?((Edge0002000001=bQueryInsertBoard&1),1):((Edge0002000001=bQueryInsertBoard&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData4.udiCode=10000);
(tyInfoData4.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg4))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((((unsigned long)(unsigned char)((*(p_bAcceptCondition)))==(unsigned long)(unsigned char)1))&bManualInsertData&(((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)0)))&~Edge0002000002&1?((Edge0002000002=((((unsigned long)(unsigned char)((*(p_bAcceptCondition)))==(unsigned long)(unsigned char)1))&bManualInsertData&(((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)0)))&1),1):((Edge0002000002=((((unsigned long)(unsigned char)((*(p_bAcceptCondition)))==(unsigned long)(unsigned char)1))&bManualInsertData&(((unsigned long)(unsigned char)((*(p_bAWWidthPosDiff)))==(unsigned long)(unsigned char)0)))&1),0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData4.udiCode=0);
(tyInfoData4.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData5.udiCode=10000);
(tyInfoData5.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg5))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};







}

if((((bRcvInsertBoardInfo|bRcvWorkOrderInfo2)&~Edge0002000003&1?((Edge0002000003=(bRcvInsertBoardInfo|bRcvWorkOrderInfo2)&1),1):((Edge0002000003=(bRcvInsertBoardInfo|bRcvWorkOrderInfo2)&1),0))&(((unsigned long)udiStatus2==(unsigned long)0)))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),34);

if((bRcvInsertBoardInfo&((*(p_bAcceptCondition))))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyReplyWorkOrderInfo.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyReplyWorkOrderInfo.tyData.sBatchId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sBatchId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyReplyWorkOrderInfo.tyData.iStatus=1);
(bReplyWorkOrderInfo=1);
}else if(bRcvWorkOrderInfo2){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyReplyWorkOrderInfo.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoRcv.tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyReplyWorkOrderInfo.tyData.sBatchId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoRcv.tyData.sBatchId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyReplyWorkOrderInfo.tyData.iStatus=0);
(bRcvWorkOrderInfo2=0);
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyReplyWorkOrderInfo.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyReplyWorkOrderInfo.tyData.sBatchId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoAcc.tyData.sBatchId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyReplyWorkOrderInfo.tyData.iStatus=2);
(bReplyWorkOrderInfo=1);
}

(tyReplyWorkOrderInfo.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyReplyWorkOrderInfo.tyData.sWorkOrderId,"")!=0)));
(tyReplyWorkOrderInfo.tyAvl.bBatchId=((__AS__STRING_CMP(tyReplyWorkOrderInfo.tyData.sBatchId,"")!=0)));
(tyReplyWorkOrderInfo.tyAvl.bStatus=1);
}


if(((((*(p_bQueryWorkOrderInfo)))|((*(p_bReinsertBrd))))&((*(p_bAcceptCondition)))&tySendWorkOrderInfoRcv.tyAvl.bWidth&bRcvInsertBoardInfo)){

(diReqWidthInUM=(signed long)((tySendWorkOrderInfoRcv.tyData.rWidth*1000)>=0.0?(tySendWorkOrderInfoRcv.tyData.rWidth*1000)+0.5:(tySendWorkOrderInfoRcv.tyData.rWidth*1000)-0.5));
{int zzIndex; plcstring* zzLValue=(plcstring*)sWorkOrderId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoRcv.tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sBatchId; plcstring* zzRValue=(plcstring*)tySendWorkOrderInfoRcv.tyData.sBatchId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

((*(p_tyProdRcpCurrRcp)).diWidthInUM=diReqWidthInUM);
(bQueryInsertBoard=0);

(bManualInsertData=1);
(tySendWorkOrderInfoRcv.tyAvl.bWidth=0);
}

if((((((unsigned long)(unsigned char)((*(p_bQueryWorkOrderInfo)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bQueryInsertBoard==(unsigned long)(unsigned char)0)))&(((*(p_bConvRgtSen))^1)))){


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData1.udiCode=0);
(tyInfoData1.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRcvWorkOrderInfo1=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData2.udiCode=0);
(tyInfoData2.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData2.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRcvWorkOrderInfo2=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData3.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData3.udiCode=0);
(tyInfoData3.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData3.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bRstWorkOrderInfo=0);


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData4.udiCode=0);
(tyInfoData4.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(((((unsigned long)(unsigned char)((*(p_bReinsertBrd)))==(unsigned long)(unsigned char)0))&((*(p_bConvRgtSen))))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData5.udiCode=0);
(tyInfoData5.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bQueryInsertBoard=0);

}else if(((~((*(p_bConvRgtSen)))&Edge0002000004&1?((Edge0002000004=((*(p_bConvRgtSen)))&1),1):((Edge0002000004=((*(p_bConvRgtSen)))&1),0))&((*(p_bHermesSvyQueryBoardInfo))))){
(bRcvWorkOrderInfo1=0);
}

if(((~(((*(p_bConvRgtSen)))|((*(p_bConvLftSen))))&Edge0002000005&1?((Edge0002000005=(((*(p_bConvRgtSen)))|((*(p_bConvLftSen))))&1),1):((Edge0002000005=(((*(p_bConvRgtSen)))|((*(p_bConvLftSen))))&1),0))&(((unsigned long)tyInfoData6.udiCode!=(unsigned long)0)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData6.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData6.udiCode=0);
(tyInfoData6.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData6.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}


if(((~((*(p_bConvRgtSen)))&Edge0002000006&1?((Edge0002000006=((*(p_bConvRgtSen)))&1),1):((Edge0002000006=((*(p_bConvRgtSen)))&1),0))|(((*(p_bOpsRun))^1))|((~((*(p_bInsertBoard)))&Edge0002000007&1?((Edge0002000007=((*(p_bInsertBoard)))&1),1):((Edge0002000007=((*(p_bInsertBoard)))&1),0))&(((*(p_bConvRgtSen))^1))))){
(bRcvInsertBoardInfo=0);
(bManualInsertData=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData5.udiCode=0);
(tyInfoData5.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bQueryInsertBoard=0);

}


if((((unsigned long)(unsigned char)((*(p_bInsertBoard)))==(unsigned long)(unsigned char)0))){
(bQueryInsertBoard=0);
}

}

if(((((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)0))|(((signed long)eStatus2==(signed long)3)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData5.udiCode=0);
(tyInfoData5.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData5.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bQueryInsertBoard=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData4.udiCode=0);
(tyInfoData4.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData4.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendWorkOrderInfoRcv.tyAvl.bWidth=0);
}

}imp20_else16_0:imp20_end16_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardArrivedLane1.st"
static void __AS__Action__Act_Background_SendBoardArrivedLane1(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bUSHermesStopTransport1)))&~Edge0002100000&1?((Edge0002100000=((*(p_bUSHermesStopTransport1)))&1),1):((Edge0002100000=((*(p_bUSHermesStopTransport1)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),21);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived1.tyData.iUpstreamLaneId=((*(p_tyHermesConfiguration)).a_tyUSParam[0].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[0].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived1.tyData.iSlotId=iSlotId);
(tyBoardArrived1.tyData.eBoadTransfer=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived1.tyData.eFailedBoard=((*(p_tyUSBoardArrived1)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived1.tyData.eFlippedBoard=((*(p_tyUSBoardArrived1)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived1.tyData.rLength=((*(p_tyUSBoardArrived1)).tyData.rLength));
(tyBoardArrived1.tyData.rWidth=((*(p_tyUSBoardArrived1)).tyData.rWidth));
(tyBoardArrived1.tyData.rThickness=((*(p_tyUSBoardArrived1)).tyData.rThickness));
(tyBoardArrived1.tyData.rConveyorSpeed=((*(p_tyUSBoardArrived1)).tyData.rConveyorSpeed));
(tyBoardArrived1.tyData.rTopClearanceHeight=((*(p_tyUSBoardArrived1)).tyData.rTopClearanceHeight));
(tyBoardArrived1.tyData.rBottomClearanceHeight=((*(p_tyUSBoardArrived1)).tyData.rBottomClearanceHeight));
(tyBoardArrived1.tyData.rWeight=((*(p_tyUSBoardArrived1)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived1.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived1)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardArrived1.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sMachineId,"")!=0)));
(tyBoardArrived1.tyAvl.bUpstreamLaneId=(((signed long)(signed long)(short)tyBoardArrived1.tyData.iUpstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardArrived1.tyAvl.bUpstreamInterfaceId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sUpstreamInterfaceId,"")!=0)));
(tyBoardArrived1.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sMagazineId,"")!=0)));
(tyBoardArrived1.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardArrived1.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardArrived1.tyAvl.bBoardTransfer=1);
(tyBoardArrived1.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sBoardId,"")!=0)));
(tyBoardArrived1.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardArrived1.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardArrived1.tyAvl.bFailedBoard=1);
(tyBoardArrived1.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sProductTypeId,"")!=0)));
(tyBoardArrived1.tyAvl.bFlippedBoard=1);
(tyBoardArrived1.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardArrived1.tyData.sTopBarcode,"")!=0)));
(tyBoardArrived1.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardArrived1.tyData.sBottomBarcode,"")!=0)));
(tyBoardArrived1.tyAvl.bLength=((tyBoardArrived1.tyData.rLength!=0)));
(tyBoardArrived1.tyAvl.bWidth=((tyBoardArrived1.tyData.rWidth!=0)));
(tyBoardArrived1.tyAvl.bThickness=((tyBoardArrived1.tyData.rThickness!=0)));
(tyBoardArrived1.tyAvl.bConveyorSpeed=((tyBoardArrived1.tyData.rConveyorSpeed!=0)));
(tyBoardArrived1.tyAvl.bTopClearanceHeight=((tyBoardArrived1.tyData.rTopClearanceHeight!=0)));
(tyBoardArrived1.tyAvl.bBottomClearanceHeight=((tyBoardArrived1.tyData.rBottomClearanceHeight!=0)));
(tyBoardArrived1.tyAvl.bWeight=((tyBoardArrived1.tyData.rWeight!=0)));
(tyBoardArrived1.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sWorkOrdedId,"")!=0)));
(tyBoardArrived1.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardArrived1.tyData.sBatchId,"")!=0)));

}

}

}

}imp21_else2_0:imp21_end2_0:imp21_else1_0:imp21_end1_0:imp21_else0_0:imp21_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardArrivedLane2.st"
static void __AS__Action__Act_Background_SendBoardArrivedLane2(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bUSHermesStopTransport2)))&~Edge0002200000&1?((Edge0002200000=((*(p_bUSHermesStopTransport2)))&1),1):((Edge0002200000=((*(p_bUSHermesStopTransport2)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),22);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived2.tyData.iUpstreamLaneId=((*(p_tyHermesConfiguration)).a_tyUSParam[1].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[1].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived2.tyData.iSlotId=iSlotId);
(tyBoardArrived2.tyData.eBoadTransfer=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived2.tyData.eFailedBoard=((*(p_tyUSBoardArrived2)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived2.tyData.eFlippedBoard=((*(p_tyUSBoardArrived2)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived2.tyData.rLength=((*(p_tyUSBoardArrived2)).tyData.rLength));
(tyBoardArrived2.tyData.rWidth=((*(p_tyUSBoardArrived2)).tyData.rWidth));
(tyBoardArrived2.tyData.rThickness=((*(p_tyUSBoardArrived2)).tyData.rThickness));
(tyBoardArrived2.tyData.rConveyorSpeed=((*(p_tyUSBoardArrived2)).tyData.rConveyorSpeed));
(tyBoardArrived2.tyData.rTopClearanceHeight=((*(p_tyUSBoardArrived2)).tyData.rTopClearanceHeight));
(tyBoardArrived2.tyData.rBottomClearanceHeight=((*(p_tyUSBoardArrived2)).tyData.rBottomClearanceHeight));
(tyBoardArrived2.tyData.rWeight=((*(p_tyUSBoardArrived2)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived2.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived2)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardArrived2.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sMachineId,"")!=0)));
(tyBoardArrived2.tyAvl.bUpstreamLaneId=(((signed long)(signed long)(short)tyBoardArrived2.tyData.iUpstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardArrived2.tyAvl.bUpstreamInterfaceId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sUpstreamInterfaceId,"")!=0)));
(tyBoardArrived2.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sMagazineId,"")!=0)));
(tyBoardArrived2.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardArrived2.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardArrived2.tyAvl.bBoardTransfer=1);
(tyBoardArrived2.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sBoardId,"")!=0)));
(tyBoardArrived2.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardArrived2.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardArrived2.tyAvl.bFailedBoard=1);
(tyBoardArrived2.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sProductTypeId,"")!=0)));
(tyBoardArrived2.tyAvl.bFlippedBoard=1);
(tyBoardArrived2.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardArrived2.tyData.sTopBarcode,"")!=0)));
(tyBoardArrived2.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardArrived2.tyData.sBottomBarcode,"")!=0)));
(tyBoardArrived2.tyAvl.bLength=((tyBoardArrived2.tyData.rLength!=0)));
(tyBoardArrived2.tyAvl.bWidth=((tyBoardArrived2.tyData.rWidth!=0)));
(tyBoardArrived2.tyAvl.bThickness=((tyBoardArrived2.tyData.rThickness!=0)));
(tyBoardArrived2.tyAvl.bConveyorSpeed=((tyBoardArrived2.tyData.rConveyorSpeed!=0)));
(tyBoardArrived2.tyAvl.bTopClearanceHeight=((tyBoardArrived2.tyData.rTopClearanceHeight!=0)));
(tyBoardArrived2.tyAvl.bBottomClearanceHeight=((tyBoardArrived2.tyData.rBottomClearanceHeight!=0)));
(tyBoardArrived2.tyAvl.bWeight=((tyBoardArrived2.tyData.rWeight!=0)));
(tyBoardArrived2.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sWorkOrdedId,"")!=0)));
(tyBoardArrived2.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardArrived2.tyData.sBatchId,"")!=0)));

}

}

}

}imp22_else2_0:imp22_end2_0:imp22_else1_0:imp22_end1_0:imp22_else0_0:imp22_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardArrivedLane3.st"
static void __AS__Action__Act_Background_SendBoardArrivedLane3(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bUSHermesStopTransport3)))&~Edge0002300000&1?((Edge0002300000=((*(p_bUSHermesStopTransport3)))&1),1):((Edge0002300000=((*(p_bUSHermesStopTransport3)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),23);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived3.tyData.iUpstreamLaneId=((*(p_tyHermesConfiguration)).a_tyUSParam[2].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[2].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived3.tyData.iSlotId=iSlotId);
(tyBoardArrived3.tyData.eBoadTransfer=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived3.tyData.eFailedBoard=((*(p_tyUSBoardArrived3)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived3.tyData.eFlippedBoard=((*(p_tyUSBoardArrived3)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived3.tyData.rLength=((*(p_tyUSBoardArrived3)).tyData.rLength));
(tyBoardArrived3.tyData.rWidth=((*(p_tyUSBoardArrived3)).tyData.rWidth));
(tyBoardArrived3.tyData.rThickness=((*(p_tyUSBoardArrived3)).tyData.rThickness));
(tyBoardArrived3.tyData.rConveyorSpeed=((*(p_tyUSBoardArrived3)).tyData.rConveyorSpeed));
(tyBoardArrived3.tyData.rTopClearanceHeight=((*(p_tyUSBoardArrived3)).tyData.rTopClearanceHeight));
(tyBoardArrived3.tyData.rBottomClearanceHeight=((*(p_tyUSBoardArrived3)).tyData.rBottomClearanceHeight));
(tyBoardArrived3.tyData.rWeight=((*(p_tyUSBoardArrived3)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived3.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived3)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardArrived3.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sMachineId,"")!=0)));
(tyBoardArrived3.tyAvl.bUpstreamLaneId=(((signed long)(signed long)(short)tyBoardArrived3.tyData.iUpstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardArrived3.tyAvl.bUpstreamInterfaceId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sUpstreamInterfaceId,"")!=0)));
(tyBoardArrived3.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sMagazineId,"")!=0)));
(tyBoardArrived3.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardArrived3.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardArrived3.tyAvl.bBoardTransfer=1);
(tyBoardArrived3.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sBoardId,"")!=0)));
(tyBoardArrived3.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardArrived3.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardArrived3.tyAvl.bFailedBoard=1);
(tyBoardArrived3.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sProductTypeId,"")!=0)));
(tyBoardArrived3.tyAvl.bFlippedBoard=1);
(tyBoardArrived3.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardArrived3.tyData.sTopBarcode,"")!=0)));
(tyBoardArrived3.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardArrived3.tyData.sBottomBarcode,"")!=0)));
(tyBoardArrived3.tyAvl.bLength=((tyBoardArrived3.tyData.rLength!=0)));
(tyBoardArrived3.tyAvl.bWidth=((tyBoardArrived3.tyData.rWidth!=0)));
(tyBoardArrived3.tyAvl.bThickness=((tyBoardArrived3.tyData.rThickness!=0)));
(tyBoardArrived3.tyAvl.bConveyorSpeed=((tyBoardArrived3.tyData.rConveyorSpeed!=0)));
(tyBoardArrived3.tyAvl.bTopClearanceHeight=((tyBoardArrived3.tyData.rTopClearanceHeight!=0)));
(tyBoardArrived3.tyAvl.bBottomClearanceHeight=((tyBoardArrived3.tyData.rBottomClearanceHeight!=0)));
(tyBoardArrived3.tyAvl.bWeight=((tyBoardArrived3.tyData.rWeight!=0)));
(tyBoardArrived3.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sWorkOrdedId,"")!=0)));
(tyBoardArrived3.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardArrived3.tyData.sBatchId,"")!=0)));

}

}

}

}imp23_else2_0:imp23_end2_0:imp23_else1_0:imp23_end1_0:imp23_else0_0:imp23_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardArrivedLane4.st"
static void __AS__Action__Act_Background_SendBoardArrivedLane4(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bUSHermesStopTransport4)))&~Edge0002400000&1?((Edge0002400000=((*(p_bUSHermesStopTransport4)))&1),1):((Edge0002400000=((*(p_bUSHermesStopTransport4)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),24);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived4.tyData.iUpstreamLaneId=((*(p_tyHermesConfiguration)).a_tyUSParam[3].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sUpstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyUSParam[3].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived4.tyData.iSlotId=iSlotId);
(tyBoardArrived4.tyData.eBoadTransfer=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived4.tyData.eFailedBoard=((*(p_tyUSBoardArrived4)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived4.tyData.eFlippedBoard=((*(p_tyUSBoardArrived4)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardArrived4.tyData.rLength=((*(p_tyUSBoardArrived4)).tyData.rLength));
(tyBoardArrived4.tyData.rWidth=((*(p_tyUSBoardArrived4)).tyData.rWidth));
(tyBoardArrived4.tyData.rThickness=((*(p_tyUSBoardArrived4)).tyData.rThickness));
(tyBoardArrived4.tyData.rConveyorSpeed=((*(p_tyUSBoardArrived4)).tyData.rConveyorSpeed));
(tyBoardArrived4.tyData.rTopClearanceHeight=((*(p_tyUSBoardArrived4)).tyData.rTopClearanceHeight));
(tyBoardArrived4.tyData.rBottomClearanceHeight=((*(p_tyUSBoardArrived4)).tyData.rBottomClearanceHeight));
(tyBoardArrived4.tyData.rWeight=((*(p_tyUSBoardArrived4)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardArrived4.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyUSBoardArrived4)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardArrived4.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sMachineId,"")!=0)));
(tyBoardArrived4.tyAvl.bUpstreamLaneId=(((signed long)(signed long)(short)tyBoardArrived4.tyData.iUpstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardArrived4.tyAvl.bUpstreamInterfaceId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sUpstreamInterfaceId,"")!=0)));
(tyBoardArrived4.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sMagazineId,"")!=0)));
(tyBoardArrived4.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardArrived4.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardArrived4.tyAvl.bBoardTransfer=1);
(tyBoardArrived4.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sBoardId,"")!=0)));
(tyBoardArrived4.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardArrived4.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardArrived4.tyAvl.bFailedBoard=1);
(tyBoardArrived4.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sProductTypeId,"")!=0)));
(tyBoardArrived4.tyAvl.bFlippedBoard=1);
(tyBoardArrived4.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardArrived4.tyData.sTopBarcode,"")!=0)));
(tyBoardArrived4.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardArrived4.tyData.sBottomBarcode,"")!=0)));
(tyBoardArrived4.tyAvl.bLength=((tyBoardArrived4.tyData.rLength!=0)));
(tyBoardArrived4.tyAvl.bWidth=((tyBoardArrived4.tyData.rWidth!=0)));
(tyBoardArrived4.tyAvl.bThickness=((tyBoardArrived4.tyData.rThickness!=0)));
(tyBoardArrived4.tyAvl.bConveyorSpeed=((tyBoardArrived4.tyData.rConveyorSpeed!=0)));
(tyBoardArrived4.tyAvl.bTopClearanceHeight=((tyBoardArrived4.tyData.rTopClearanceHeight!=0)));
(tyBoardArrived4.tyAvl.bBottomClearanceHeight=((tyBoardArrived4.tyData.rBottomClearanceHeight!=0)));
(tyBoardArrived4.tyAvl.bWeight=((tyBoardArrived4.tyData.rWeight!=0)));
(tyBoardArrived4.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sWorkOrdedId,"")!=0)));
(tyBoardArrived4.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardArrived4.tyData.sBatchId,"")!=0)));

}

}

}

}imp24_else2_0:imp24_end2_0:imp24_else1_0:imp24_end1_0:imp24_else0_0:imp24_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardDepartedLane1.st"
static void __AS__Action__Act_Background_SendBoardDepartedLane1(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bDSHermesTransportFinished1)))&~Edge0002500000&1?((Edge0002500000=((*(p_bDSHermesTransportFinished1)))&1),1):((Edge0002500000=((*(p_bDSHermesTransportFinished1)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),26);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted1.tyData.iDownstreamLaneId=((*(p_tyHermesConfiguration)).a_tyDSParam[0].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[0].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted1.tyData.iSlotId=iSlotId);
(tyBoardDeparted1.tyData.eBoadTransfer=((*(p_eBoardTransfer1))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted1.tyData.eFailedBoard=((*(p_tyDSBoardDeparted1)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted1.tyData.eFlippedBoard=((*(p_tyDSBoardDeparted1)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted1.tyData.rLength=((*(p_tyDSBoardDeparted1)).tyData.rLength));
(tyBoardDeparted1.tyData.rWidth=((*(p_tyDSBoardDeparted1)).tyData.rWidth));
(tyBoardDeparted1.tyData.rThickness=((*(p_tyDSBoardDeparted1)).tyData.rThickness));
(tyBoardDeparted1.tyData.rConveyorSpeed=((*(p_tyDSBoardDeparted1)).tyData.rConveyorSpeed));
(tyBoardDeparted1.tyData.rTopClearanceHeight=((*(p_tyDSBoardDeparted1)).tyData.rTopClearanceHeight));
(tyBoardDeparted1.tyData.rBottomClearanceHeight=((*(p_tyDSBoardDeparted1)).tyData.rBottomClearanceHeight));
(tyBoardDeparted1.tyData.rWeight=((*(p_tyDSBoardDeparted1)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted1.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted1)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardDeparted1.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sMachineId,"")!=0)));
(tyBoardDeparted1.tyAvl.bDownstreamLaneId=(((signed long)(signed long)(short)tyBoardDeparted1.tyData.iDownstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted1.tyAvl.bDownstreamInterfaceId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sDownstreamInterfaceId,"")!=0)));
(tyBoardDeparted1.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sMagazineId,"")!=0)));
(tyBoardDeparted1.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardDeparted1.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted1.tyAvl.bBoardTransfer=1);
(tyBoardDeparted1.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sBoardId,"")!=0)));
(tyBoardDeparted1.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardDeparted1.tyAvl.bFailedBoard=1);
(tyBoardDeparted1.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sProductTypeId,"")!=0)));
(tyBoardDeparted1.tyAvl.bFlippedBoard=1);
(tyBoardDeparted1.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sTopBarcode,"")!=0)));
(tyBoardDeparted1.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sBottomBarcode,"")!=0)));
(tyBoardDeparted1.tyAvl.bLength=((tyBoardDeparted1.tyData.rLength!=0)));
(tyBoardDeparted1.tyAvl.bWidth=((tyBoardDeparted1.tyData.rWidth!=0)));
(tyBoardDeparted1.tyAvl.bThickness=((tyBoardDeparted1.tyData.rThickness!=0)));
(tyBoardDeparted1.tyAvl.bConveyorSpeed=((tyBoardDeparted1.tyData.rConveyorSpeed!=0)));
(tyBoardDeparted1.tyAvl.bTopClearanceHeight=((tyBoardDeparted1.tyData.rTopClearanceHeight!=0)));
(tyBoardDeparted1.tyAvl.bBottomClearanceHeight=((tyBoardDeparted1.tyData.rBottomClearanceHeight!=0)));
(tyBoardDeparted1.tyAvl.bWeight=((tyBoardDeparted1.tyData.rWeight!=0)));
(tyBoardDeparted1.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sWorkOrdedId,"")!=0)));
(tyBoardDeparted1.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardDeparted1.tyData.sBatchId,"")!=0)));

}

}

}

}imp25_else2_0:imp25_end2_0:imp25_else1_0:imp25_end1_0:imp25_else0_0:imp25_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardDepartedLane2.st"
static void __AS__Action__Act_Background_SendBoardDepartedLane2(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bDSHermesTransportFinished2)))&~Edge0002600000&1?((Edge0002600000=((*(p_bDSHermesTransportFinished2)))&1),1):((Edge0002600000=((*(p_bDSHermesTransportFinished2)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),27);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted2.tyData.iDownstreamLaneId=((*(p_tyHermesConfiguration)).a_tyDSParam[1].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[1].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted2.tyData.iSlotId=iSlotId);
(tyBoardDeparted2.tyData.eBoadTransfer=((*(p_eBoardTransfer2))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted2.tyData.eFailedBoard=((*(p_tyDSBoardDeparted2)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted2.tyData.eFlippedBoard=((*(p_tyDSBoardDeparted2)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted2.tyData.rLength=((*(p_tyDSBoardDeparted2)).tyData.rLength));
(tyBoardDeparted2.tyData.rWidth=((*(p_tyDSBoardDeparted2)).tyData.rWidth));
(tyBoardDeparted2.tyData.rThickness=((*(p_tyDSBoardDeparted2)).tyData.rThickness));
(tyBoardDeparted2.tyData.rConveyorSpeed=((*(p_tyDSBoardDeparted2)).tyData.rConveyorSpeed));
(tyBoardDeparted2.tyData.rTopClearanceHeight=((*(p_tyDSBoardDeparted2)).tyData.rTopClearanceHeight));
(tyBoardDeparted2.tyData.rBottomClearanceHeight=((*(p_tyDSBoardDeparted2)).tyData.rBottomClearanceHeight));
(tyBoardDeparted2.tyData.rWeight=((*(p_tyDSBoardDeparted2)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted2.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted2)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardDeparted2.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sMachineId,"")!=0)));
(tyBoardDeparted2.tyAvl.bDownstreamLaneId=(((signed long)(signed long)(short)tyBoardDeparted2.tyData.iDownstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted2.tyAvl.bDownstreamInterfaceId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sDownstreamInterfaceId,"")!=0)));
(tyBoardDeparted2.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sMagazineId,"")!=0)));
(tyBoardDeparted2.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardDeparted2.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted2.tyAvl.bBoardTransfer=1);
(tyBoardDeparted2.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sBoardId,"")!=0)));
(tyBoardDeparted2.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardDeparted2.tyAvl.bFailedBoard=1);
(tyBoardDeparted2.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sProductTypeId,"")!=0)));
(tyBoardDeparted2.tyAvl.bFlippedBoard=1);
(tyBoardDeparted2.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sTopBarcode,"")!=0)));
(tyBoardDeparted2.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sBottomBarcode,"")!=0)));
(tyBoardDeparted2.tyAvl.bLength=((tyBoardDeparted2.tyData.rLength!=0)));
(tyBoardDeparted2.tyAvl.bWidth=((tyBoardDeparted2.tyData.rWidth!=0)));
(tyBoardDeparted2.tyAvl.bThickness=((tyBoardDeparted2.tyData.rThickness!=0)));
(tyBoardDeparted2.tyAvl.bConveyorSpeed=((tyBoardDeparted2.tyData.rConveyorSpeed!=0)));
(tyBoardDeparted2.tyAvl.bTopClearanceHeight=((tyBoardDeparted2.tyData.rTopClearanceHeight!=0)));
(tyBoardDeparted2.tyAvl.bBottomClearanceHeight=((tyBoardDeparted2.tyData.rBottomClearanceHeight!=0)));
(tyBoardDeparted2.tyAvl.bWeight=((tyBoardDeparted2.tyData.rWeight!=0)));
(tyBoardDeparted2.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sWorkOrdedId,"")!=0)));
(tyBoardDeparted2.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardDeparted2.tyData.sBatchId,"")!=0)));

}

}

}

}imp26_else2_0:imp26_end2_0:imp26_else1_0:imp26_end1_0:imp26_else0_0:imp26_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardDepartedLane3.st"
static void __AS__Action__Act_Background_SendBoardDepartedLane3(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bDSHermesTransportFinished3)))&~Edge0002700000&1?((Edge0002700000=((*(p_bDSHermesTransportFinished3)))&1),1):((Edge0002700000=((*(p_bDSHermesTransportFinished3)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),28);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted3.tyData.iDownstreamLaneId=((*(p_tyHermesConfiguration)).a_tyDSParam[2].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[2].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted3.tyData.iSlotId=iSlotId);
(tyBoardDeparted3.tyData.eBoadTransfer=((*(p_eBoardTransfer3))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted3.tyData.eFailedBoard=((*(p_tyDSBoardDeparted3)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted3.tyData.eFlippedBoard=((*(p_tyDSBoardDeparted3)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted3.tyData.rLength=((*(p_tyDSBoardDeparted3)).tyData.rLength));
(tyBoardDeparted3.tyData.rWidth=((*(p_tyDSBoardDeparted3)).tyData.rWidth));
(tyBoardDeparted3.tyData.rThickness=((*(p_tyDSBoardDeparted3)).tyData.rThickness));
(tyBoardDeparted3.tyData.rConveyorSpeed=((*(p_tyDSBoardDeparted3)).tyData.rConveyorSpeed));
(tyBoardDeparted3.tyData.rTopClearanceHeight=((*(p_tyDSBoardDeparted3)).tyData.rTopClearanceHeight));
(tyBoardDeparted3.tyData.rBottomClearanceHeight=((*(p_tyDSBoardDeparted3)).tyData.rBottomClearanceHeight));
(tyBoardDeparted3.tyData.rWeight=((*(p_tyDSBoardDeparted3)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted3.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted3)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardDeparted3.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sMachineId,"")!=0)));
(tyBoardDeparted3.tyAvl.bDownstreamLaneId=(((signed long)(signed long)(short)tyBoardDeparted3.tyData.iDownstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted3.tyAvl.bDownstreamInterfaceId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sDownstreamInterfaceId,"")!=0)));
(tyBoardDeparted3.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sMagazineId,"")!=0)));
(tyBoardDeparted3.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardDeparted3.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted3.tyAvl.bBoardTransfer=1);
(tyBoardDeparted3.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sBoardId,"")!=0)));
(tyBoardDeparted3.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardDeparted3.tyAvl.bFailedBoard=1);
(tyBoardDeparted3.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sProductTypeId,"")!=0)));
(tyBoardDeparted3.tyAvl.bFlippedBoard=1);
(tyBoardDeparted3.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sTopBarcode,"")!=0)));
(tyBoardDeparted3.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sBottomBarcode,"")!=0)));
(tyBoardDeparted3.tyAvl.bLength=((tyBoardDeparted3.tyData.rLength!=0)));
(tyBoardDeparted3.tyAvl.bWidth=((tyBoardDeparted3.tyData.rWidth!=0)));
(tyBoardDeparted3.tyAvl.bThickness=((tyBoardDeparted3.tyData.rThickness!=0)));
(tyBoardDeparted3.tyAvl.bConveyorSpeed=((tyBoardDeparted3.tyData.rConveyorSpeed!=0)));
(tyBoardDeparted3.tyAvl.bTopClearanceHeight=((tyBoardDeparted3.tyData.rTopClearanceHeight!=0)));
(tyBoardDeparted3.tyAvl.bBottomClearanceHeight=((tyBoardDeparted3.tyData.rBottomClearanceHeight!=0)));
(tyBoardDeparted3.tyAvl.bWeight=((tyBoardDeparted3.tyData.rWeight!=0)));
(tyBoardDeparted3.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sWorkOrdedId,"")!=0)));
(tyBoardDeparted3.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardDeparted3.tyData.sBatchId,"")!=0)));

}

}

}

}imp27_else2_0:imp27_end2_0:imp27_else1_0:imp27_end1_0:imp27_else0_0:imp27_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_SendBoardDepartedLane4.st"
static void __AS__Action__Act_Background_SendBoardDepartedLane4(void){
{
if((((signed long)eStatus2!=(signed long)3))){
if(((((unsigned long)(unsigned char)tySServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureBoardTracking==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureBoardTracking)&bHandshakeDone)){
if((((*(p_bDSHermesTransportFinished4)))&~Edge0002800000&1?((Edge0002800000=((*(p_bDSHermesTransportFinished4)))&1),1):((Edge0002800000=((*(p_bDSHermesTransportFinished4)))&1),0))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),29);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted4.tyData.iDownstreamLaneId=((*(p_tyHermesConfiguration)).a_tyDSParam[3].iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sDownstreamInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_tyHermesConfiguration)).a_tyDSParam[3].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sMagazineId; plcstring* zzRValue=(plcstring*)sMagazineId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted4.tyData.iSlotId=iSlotId);
(tyBoardDeparted4.tyData.eBoadTransfer=((*(p_eBoardTransfer4))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted4.tyData.eFailedBoard=((*(p_tyDSBoardDeparted4)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted4.tyData.eFlippedBoard=((*(p_tyDSBoardDeparted4)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardDeparted4.tyData.rLength=((*(p_tyDSBoardDeparted4)).tyData.rLength));
(tyBoardDeparted4.tyData.rWidth=((*(p_tyDSBoardDeparted4)).tyData.rWidth));
(tyBoardDeparted4.tyData.rThickness=((*(p_tyDSBoardDeparted4)).tyData.rThickness));
(tyBoardDeparted4.tyData.rConveyorSpeed=((*(p_tyDSBoardDeparted4)).tyData.rConveyorSpeed));
(tyBoardDeparted4.tyData.rTopClearanceHeight=((*(p_tyDSBoardDeparted4)).tyData.rTopClearanceHeight));
(tyBoardDeparted4.tyData.rBottomClearanceHeight=((*(p_tyDSBoardDeparted4)).tyData.rBottomClearanceHeight));
(tyBoardDeparted4.tyData.rWeight=((*(p_tyDSBoardDeparted4)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sWorkOrdedId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardDeparted4.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyDSBoardDeparted4)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardDeparted4.tyAvl.bMachineId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sMachineId,"")!=0)));
(tyBoardDeparted4.tyAvl.bDownstreamLaneId=(((signed long)(signed long)(short)tyBoardDeparted4.tyData.iDownstreamLaneId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted4.tyAvl.bDownstreamInterfaceId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sDownstreamInterfaceId,"")!=0)));
(tyBoardDeparted4.tyAvl.bMagazineId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sMagazineId,"")!=0)));
(tyBoardDeparted4.tyAvl.bSlotId=(((signed long)(signed long)(short)tyBoardDeparted4.tyData.iSlotId!=(signed long)(signed long)(short)0)));
(tyBoardDeparted4.tyAvl.bBoardTransfer=1);
(tyBoardDeparted4.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sBoardId,"")!=0)));
(tyBoardDeparted4.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardDeparted4.tyAvl.bFailedBoard=1);
(tyBoardDeparted4.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sProductTypeId,"")!=0)));
(tyBoardDeparted4.tyAvl.bFlippedBoard=1);
(tyBoardDeparted4.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sTopBarcode,"")!=0)));
(tyBoardDeparted4.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sBottomBarcode,"")!=0)));
(tyBoardDeparted4.tyAvl.bLength=((tyBoardDeparted4.tyData.rLength!=0)));
(tyBoardDeparted4.tyAvl.bWidth=((tyBoardDeparted4.tyData.rWidth!=0)));
(tyBoardDeparted4.tyAvl.bThickness=((tyBoardDeparted4.tyData.rThickness!=0)));
(tyBoardDeparted4.tyAvl.bConveyorSpeed=((tyBoardDeparted4.tyData.rConveyorSpeed!=0)));
(tyBoardDeparted4.tyAvl.bTopClearanceHeight=((tyBoardDeparted4.tyData.rTopClearanceHeight!=0)));
(tyBoardDeparted4.tyAvl.bBottomClearanceHeight=((tyBoardDeparted4.tyData.rBottomClearanceHeight!=0)));
(tyBoardDeparted4.tyAvl.bWeight=((tyBoardDeparted4.tyData.rWeight!=0)));
(tyBoardDeparted4.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sWorkOrdedId,"")!=0)));
(tyBoardDeparted4.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardDeparted4.tyData.sBatchId,"")!=0)));

}

}

}

}imp28_else2_0:imp28_end2_0:imp28_else1_0:imp28_end1_0:imp28_else0_0:imp28_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_TCPSend.st"
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

}else if((((signed long)a_eMsgSend[0]==(signed long)5))){
fHermesFormSServiceDescription(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tySServiceDescriptionSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,32);

}else if((((signed long)a_eMsgSend[0]==(signed long)6))){
fHermesFormNotification(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyNotificationSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,14);

}else if((((signed long)a_eMsgSend[0]==(signed long)7))){
(eStatus1=3);
(udiStatus1=10125);

}else if((((signed long)a_eMsgSend[0]==(signed long)8))){
(eStatus1=3);
(udiStatus1=10122);

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
(udiStatus1=10123);

}else if((((signed long)a_eMsgSend[0]==(signed long)13))){
(eStatus1=3);
(udiStatus1=10124);

}else if((((signed long)a_eMsgSend[0]==(signed long)14))){
(eStatus1=3);
(udiStatus1=10138);

}else if((((signed long)a_eMsgSend[0]==(signed long)15))){
(eStatus1=3);
(udiStatus1=10139);

}else if((((signed long)a_eMsgSend[0]==(signed long)16))){
fHermesFormCurrentConfiguration(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCurrentConfigurationSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,80);


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
fHermesFormQueryWorkOrderInfo(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyQueryWorkOrderInfo);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,20);


}else if((((signed long)a_eMsgSend[0]==(signed long)33))){
(eStatus1=3);
(udiStatus1=10161);

}else if((((signed long)a_eMsgSend[0]==(signed long)34))){
fHermesFormReplyWorkOrderInfo(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyReplyWorkOrderInfo);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,16);

}else if((((signed long)a_eMsgSend[0]==(signed long)21))){
fHermesFormBoardArrived(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardArrived1);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)22))){
fHermesFormBoardArrived(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardArrived2);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)23))){
fHermesFormBoardArrived(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardArrived3);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)24))){
fHermesFormBoardArrived(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardArrived4);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)26))){
fHermesFormBoardDeparted(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardDeparted1);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)27))){
fHermesFormBoardDeparted(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardDeparted2);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)28))){
fHermesFormBoardDeparted(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardDeparted3);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)29))){
fHermesFormBoardDeparted(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardDeparted4);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);


}else if((((signed long)a_eMsgSend[0]==(signed long)34))){
fHermesFormReplyWorkOrderInfo(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyReplyWorkOrderInfo);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,20);


}


if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
(fbSend.udiTCPIdent=udiClntIdent);
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
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"SND_TO_SVY\r\n")),LEN("SND_TO_SVY\r\n"));
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

}imp37_end5_0:imp37_else3_2:imp37_end3_0:imp37_else0_0:imp37_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_TCPCloseSvr.st"
static void __AS__Action__Act_Background_TCPCloseSvr(void){
{

if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
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

}else{
(udiSvrIdent=0);

}

}imp33_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_TCPCloseClnt.st"
static void __AS__Action__Act_Background_TCPCloseClnt(void){
{

if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
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

}else{
(udiClntIdent=0);

}

}imp32_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_Stop.st"
static void __AS__Action__Act_Background_Stop(void){
{
if((bStop&~Edge0003100000&1?((Edge0003100000=bStop&1),1):((Edge0003100000=bStop&1),0))){

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

if((((unsigned long)udiSvrIdent==(unsigned long)0))){

(bRun=0);

}

}

}

}imp31_else3_0:imp31_end3_0:imp31_else2_0:imp31_end2_0:imp31_else1_0:imp31_end1_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_Log.st"
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

}imp16_case2_1:imp16_endcase2_0:imp16_else1_0:imp16_end1_0:imp16_else0_0:imp16_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_Err.st"
static void __AS__Action__Act_Background_Err(void){
{

}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
(bConnected=0);
(bHandshakeDone=0);

}}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_CombineErr.st"
static void __AS__Action__Act_CombineErr(void){
{

if(((((signed long)eStatus==(signed long)3))|(((signed long)eStatus1==(signed long)3))|(((signed long)eStatus2==(signed long)3))|(((signed long)eStatus3==(signed long)3)))){
(eMainStatus=3);
}else{
(eMainStatus=eStatus);
}

}imp39_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sSvyHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
(tyAlmData1.bAlm=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp2_else0_1:imp2_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Alarm1.st"
static void __AS__Action__Act_Alarm1(void){
{

if(((((signed long)eStatus1==(signed long)3))&~Edge0000300000&1?((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),1):((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=1);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData1.bAlm=1);
(tyAlmData1.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sSvyHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Alarm2.st"
static void __AS__Action__Act_Alarm2(void){
{

if(((((signed long)eStatus2==(signed long)3))&~Edge0000400000&1?((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),1):((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.udiCode=udiStatus2);
(tyAlmData2.eSeverity=1);
(tyAlmData2.udiRunTime=(tyAlmData2.udiRunTime+1));
(tyAlmData2.bAlm=1);
(tyAlmData2.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sSvyHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Alarm3.st"
static void __AS__Action__Act_Alarm3(void){
{

if(((((signed long)eStatus3==(signed long)3))&~Edge0000500000&1?((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),1):((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData3.udiCode=udiStatus3);
(tyAlmData3.eSeverity=1);
(tyAlmData3.udiRunTime=(tyAlmData3.udiRunTime+1));
(tyAlmData3.bAlm=1);
(tyAlmData3.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sSvyHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Alarm4.st"
static void __AS__Action__Act_Alarm4(void){
{

if(((((unsigned long)(unsigned char)bConnected==(unsigned long)(unsigned char)0))&((*(p_bSvyEn))))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData4.udiCode=udiStatus4);
(tyAlmData4.eSeverity=2);
(tyAlmData4.udiRunTime=(tyAlmData4.udiRunTime+1));

(tyAlmData4.bWarning=1);
(tyAlmData4.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sSvyHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)tyAlmData4.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData4.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData4.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData4.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData4.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(((bConnected&(((unsigned long)tyAlmData4.udiCode!=(unsigned long)0)))|(((unsigned long)(unsigned char)((*(p_bSvyEn)))==(unsigned long)(unsigned char)0)))){

(tyAlmData4.udiCode=0);
(tyAlmData4.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyAlmData4.bWarning=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp6_else0_1:imp6_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Act_Background_NotificationSnd.st"
static void __AS__Action__Act_Background_NotificationSnd(void){
{
if((((signed long)a_eMsgSend[0]==(signed long)6))){
(bRstConnection=(fHermesNotificationRstConn(&tyNotificationSnd)|bRstConnection));

}

}imp18_else0_0:imp18_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Hermes/SvyHermes/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/SvyHermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/SvyHermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/SvyHermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/SvyHermes/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/SvyHermes/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/SvyHermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'sWorkOrderId'\\n\"");
__asm__(".ascii \"plcdata_const 'sSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'sRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'a_eMsgSend'\\n\"");
__asm__(".ascii \"plcdata_const 'tyMsgTypeRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'tySetConfiguration'\\n\"");
__asm__(".ascii \"plcdata_const 'a_sLogList'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diLFClntNum'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".previous");
