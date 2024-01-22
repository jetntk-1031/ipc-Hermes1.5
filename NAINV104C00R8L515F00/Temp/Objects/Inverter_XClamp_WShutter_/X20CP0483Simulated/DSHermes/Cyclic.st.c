#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/DSHermes/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.st"
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

}imp43_end0_0:;}
#line 48 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);
(p_eLinkMcParamDSCommMod=p_McParamDSCommMod);

(p_eLinkConvDir=p_NtParamProjConvDir);
(p_bLinkConvGdBrd=p_ConvGdBrd);
(p_bLinkDILeftSen=p_DIConvLftSen);
(p_bLinkDIRightSen=p_DIConvRgtSen);
(p_bLinkConvHvBrd=p_OpsInvertHvBrd);

(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamHermesPrep);
(p_tyParam=p_HermesDSParam1);
(p_sIPAddr=p_HWInfoIPAddr);
(pa_usiMacAddr=p_HWInfoMacAddr);
(p_tyDTStructure=p_TimeCurrDTStruct);
(p_dtCurrDT=p_TimeCurrDT);
(p_sMcId=p_McParamMcNm);
(p_sRecipeNm=p_ProdRcpCurrRcp0Nm);
(p_sRecipeZone1Nm=p_ProdRcpCurrRcp1Nm);


(p_diWidthInUM=p_ProdRcpCurrRcp0Width);
(p_diWidthZone1InUM=p_ProdRcpCurrRcp1Width);
(p_udiAliveIdleTimeInSec=p_NtParamDSHermesAliveTmInSec);
(p_tConnTimeOut=p_NtParamDSHermesConnTO);
(p_diTransferInTO=p_McParamTranOutErrDlyTm);


(pa_tyXMLTableDataBrdAvl1stZ=p_HermesBrdAvlDataTable1stZ);
(p_iXMLTableDataBrdAvlTtlIdx1stZ=p_HermesBrdAvlDataTtlIdx1stZ);
(pa_tyXMLTableDataBrdAvl=p_HermesBrdAvlDataTableLastZ);
(p_iXMLTableDataBrdAvlTtlIdx=p_HermesBrdAvlDataTtlIdxLastZ);
(p_bNewBrdAvlFirstZone=p_HermesBrdAvlDataNewBrdAvl1stZ);
(p_bNewBrdAvlLastZone=p_HermesBrdAvlDataNewBrdAvlLastZ);
(p_bOpsRun=p_OpsRun);
(p_bInterruptSen=p_DIConvRgtSen);
(p_udiFileKeepDay=p_NtParamDSHermesFileKeepDay);
(p_sRetainFileName=p_NtParamDSHermesRetainFileNm);
(p_sProgNm=p_NtParamDSHermesProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_sRmtMcId=p_RmtHermesCurrentConfMcId);
(p_bRmtPrep=p_NtParamHermesRmtPrep);
(p_bRmtEn=p_McParamHermesRmtEn);



(p_bUSHermesStopTransport=p_USHermesStopTransportSnd);



(p_tyUSHermestyBoardAvailable=p_USHermestyBoardAvailable);
(p_bNtParamProjInvertOncePrep=p_NtParamProjInvertOncePrep);
(p_bNtParamProjInvertTwicePrep=p_NtParamProjInvertTwicePrep);








(p_usiUSHermesReverseDSSendBFId=p_HermesReverseDS1SendBFId);
(p_bUSHermesProcessRouteTrigger=p_USHermes2ProcessRouteTrigger);
(p_tySvyHermesSendWorkOrderInfo=p_SvyHermesSendWorkOrderInfo);
(pa_RevtyXMLTableDataBrdAvl=p_USHermesTableDataBrdAvl);
(p_ReviXMLTableDataBrdAvlTtlIdx=p_USHermesTableDataBrdAvlTtlIdx);



(p_tyUSBoardArrivedData=p_USHermesBoardArrivedData);


(p_bRcvBoardInfo=p_USHermesRcvBoardInfoOk);
(p_tyBoardInfoData=p_USHermesBoardInfoData);


(p_bConvInitDone=p_OpsInvertStepInitConv);

(p_bHermesSwitchtoRvrseTransport=p_HermesSwitchtoReverseTransport);


}}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupDSHermesAct);
}else{
(p_eAct=((unsigned long)(&eAct)));

if(((((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1))&~Edge0003800000&1?((Edge0003800000=(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1))&1),1):((Edge0003800000=(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1))&1),0))){
(bHermesRun=1);
(bHermesStop=0);
}

if((~(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1))&Edge0003800001&1?((Edge0003800001=(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1))&1),1):((Edge0003800001=(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1))&1),0))){
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

}imp38_else9_0:imp38_end9_0:imp38_else8_0:imp38_end8_0:imp38_else7_0:imp38_end7_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Link.st"
static void __AS__Action__Act_Link(void){
{

((*(p_tyParam)).tRcvAlive=(((*(p_tyParam)).tSndAlive)*2));


(p_bRdySnd=p_OpsInvertStepDSCommTmr);



(bNewProduct=((((__AS__STRING_CMP(((*(p_sRecipeNm))),((*(p_sRecipeZone1Nm))))!=0))&~Edge0003700000&1?((Edge0003700000=((__AS__STRING_CMP(((*(p_sRecipeNm))),((*(p_sRecipeZone1Nm))))!=0))&1),1):((Edge0003700000=((__AS__STRING_CMP(((*(p_sRecipeNm))),((*(p_sRecipeZone1Nm))))!=0))&1),0))&(((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)0))));
(bNewWidth=(((((signed long)((*(p_diWidthInUM)))!=(signed long)((*(p_diWidthZone1InUM)))))&~Edge0003700001&1?((Edge0003700001=(((signed long)((*(p_diWidthInUM)))!=(signed long)((*(p_diWidthZone1InUM)))))&1),1):((Edge0003700001=(((signed long)((*(p_diWidthInUM)))!=(signed long)((*(p_diWidthZone1InUM)))))&1),0))&(((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)0))));
(bAllZoneEmpty=((((unsigned long)(unsigned char)((*(p_bLinkDIRightSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bLinkDILeftSen)))==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)0))));




if((((*(p_bHermesSwitchtoRvrseTransport))^1))){
if((~((*(p_bLinkDIRightSen)))&Edge0003700002&1?((Edge0003700002=((*(p_bLinkDIRightSen)))&1),1):((Edge0003700002=((*(p_bLinkDIRightSen)))&1),0))){
((*(p_bSndCompl))=1);
}
(bFirstZoneHaveBoard=((*(p_bLinkDILeftSen))));
(bFirstZoneEndSen=((*(p_bLinkDIRightSen))));
}else{
if((~((*(p_bLinkDILeftSen)))&Edge0003700003&1?((Edge0003700003=((*(p_bLinkDILeftSen)))&1),1):((Edge0003700003=((*(p_bLinkDILeftSen)))&1),0))){
((*(p_bSndCompl))=1);
}
(bFirstZoneHaveBoard=((*(p_bLinkDIRightSen))));
(bFirstZoneEndSen=((*(p_bLinkDILeftSen))));
}


if((((unsigned long)(unsigned char)((*(p_bLinkConvGdBrd)))==(unsigned long)(unsigned char)1))){
((*(p_eFailedBoard))=1);
}else{
((*(p_eFailedBoard))=2);
}



















}imp37_end3_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp42_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_InitLocal.st"
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
(p_bRdySnd=((unsigned long)(&bRdySnd)));
(p_bSndCompl=((unsigned long)(&bSndCompl)));
(p_bSndIncompl=((unsigned long)(&bSndInCompl)));
(p_bSndNotStart=((unsigned long)(&bSndNotStart)));
(p_bBAWidthEn=((unsigned long)(&bBAWidthEn)));
(p_bBASltEn=((unsigned long)(&bBASltEn)));
(p_bBFWidthEn=((unsigned long)(&bBFWidthEn)));
(p_bBFSltEn=((unsigned long)(&bBFSltEn)));
(p_sMcId=((unsigned long)(&sMcId)));
(p_sInterfaceId=((unsigned long)(&sInterfaceId)));
(p_sVersion=((unsigned long)(&sVersion)));
(p_eFailedBoard=((unsigned long)(&eFailedBoard)));
(p_sRecipeNm=((unsigned long)(&sRecipeNm)));
(p_eFlippedBoard=((unsigned long)(&eFlippedBoard)));
(p_sTopBarcode=((unsigned long)(&sTopBarcode)));
(p_sBottomBarcode=((unsigned long)(&sBottomBarcode)));
(p_rLength=((unsigned long)(&rLength)));
(p_rThickness=((unsigned long)(&rThickness)));
(p_rConveyorSpeed=((unsigned long)(&rConveyorSpeed)));
(p_rTopClearanceHeight=((unsigned long)(&rTopClearanceHeight)));
(p_rBottomClearanceHeight=((unsigned long)(&rBottomClearanceHeight)));
(p_rWeight=((unsigned long)(&rWeight)));
(p_sWorkOrderId=((unsigned long)(&sWorkOrderId)));
(p_sBatchId=((unsigned long)(&sBatchId)));
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
(pa_tyXMLTableDataBrdAvl=((unsigned long)(&a_tyXMLTableDataBrdAvl)));
(p_iXMLTableDataBrdAvlTtlIdx=((unsigned long)(&iXMLTableDataBrdAvlTtlIdx)));
(p_bNewBrdAvlFirstZone=((unsigned long)(&bNewBrdAvl)));
(p_bOpsRun=((unsigned long)(&bOpsRun)));
(p_bInterruptSen=((unsigned long)(&bInterruptSen)));
(p_udiFileKeepDay=((unsigned long)(&udiFileKeepDay)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_sRmtMcId=((unsigned long)(&sRmtMcId)));
(p_bRmtPrep=((unsigned long)(&bRmtPrep)));
(p_bRmtEn=((unsigned long)(&bRmtEn)));
(p_bInternalUse=((unsigned long)(&bInternalUse)));
(p_sInternalRcv=((unsigned long)(&sInternalRcv)));
(p_eFlippedBoard=((unsigned long)(&eFlippedBoard)));
(p_tyUSHermestyBoardAvailable=((unsigned long)(&tyUSHermestyBoardAvailable)));
(p_bManualInsertData=((unsigned long)(&bDummy)));

(p_rMcCycleTm=((unsigned long)(&rMachineCycleTime)));
(p_rAWCycleTm=((unsigned long)(&rAWCycleTm)));

(p_bProcessRouteEn=((unsigned long)(&bProcessRouteEn)));
(p_bManualRmvRoute=((unsigned long)(&bManualRmvRoute)));
(p_bReturnRoute=((unsigned long)(&bReturnRoute)));
(p_bNomRouteEn=((unsigned long)(&bNomRouteEn)));


(p_bReverseSentRoute=((unsigned long)(&bReverseSentRoute)));
(p_usiUSHermesReverseDSSendBFId=((unsigned long)(&usiUSHermesReverseDSSendBFId)));
(p_bUSHermesProcessRouteTrigger=((unsigned long)(&bUSHermesProcessRouteTrigger)));



}}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Initial.st"
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

((*(unsigned long*)&(fbSequenceDS.p_tyMsgTypeRcv))=((unsigned long)(&tyMsgTypeRcv)));
(fbSequenceDS.bEn=0);;fbHermesSequenceDS(&fbSequenceDS);

(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);

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
(fbFileRead1.p_Dest=((unsigned long)(&a_tyBoardDepartedInfo)));
(fbFileRead1.udiLen=77600);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sDevice; plcstring* zzRValue=(plcstring*)"Retain"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sFile; plcstring* zzRValue=(plcstring*)((*(p_sRetainFileName))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite1.udiOffset=0);
(fbFileWrite1.udiOption=0);
(fbFileWrite1.p_Src=((unsigned long)(&a_tyBoardDepartedInfoWr)));
(fbFileWrite1.udiLen=77600);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);

}}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Action.st"
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
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);

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


(fbFileRead1.bEn=1);;fbFileFullRead(&fbFileRead1);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)0))){
(eStatus=1);

{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyBoardDepartedInfoWr; unsigned char* zzRValue=(unsigned char*)a_tyBoardDepartedInfo; for(zzIndex=0; zzIndex<77600l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
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

}imp40_else13_0:imp40_end13_0:imp40_endcase1_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if((((unsigned long)(unsigned char)bRun==(unsigned long)(unsigned char)1))){
if((((unsigned long)udiSvrIdent==(unsigned long)0))){
if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
__AS__Action__Act_Background_TCPCreateSvr();

(tyParamOld=*(struct tyHermesDSParam*)&((*(p_tyParam))));
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
__AS__Action__Act_Background_SendBoardInfo();


__AS__Action__Act_Background_Sequence();
__AS__Action__Act_Background_SequenceTO();
__AS__Action__Act_Background_Err();



__AS__Action__Act_Background_Command();



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
(fbSequenceDS.bEn=0);;fbHermesSequenceDS(&fbSequenceDS);
(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bHandshakeDone=0);
(bRstState=0);
(bUSRdy=0);
(bDSRdy=0);
(bTransporting=0);
(bStopTransport=0);

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
(fbSequenceDS.bEn=0);;fbHermesSequenceDS(&fbSequenceDS);
(fbSend.bEn=0);;fbTCPSnd(&fbSend);
(fbCloseSvr.bEn=0);;fbTCPClose(&fbCloseSvr);
(fbCloseClnt.bEn=0);;fbTCPClose(&fbCloseClnt);
(fbCheckAlive.bEn=0);;fbHermesCheckAlive(&fbCheckAlive);
(fbCheckAliveSendPing.bEn=0);;fbHermesCheckAliveSendPing(&fbCheckAliveSendPing);
(fbCheckAliveRcvPing.bEn=0);;fbHermesCheckAliveRcvPing(&fbCheckAliveRcvPing);
(fbSequenceTO.bEn=0);;fbHermesSequenceTO(&fbSequenceTO);

(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(iWriteLogStep=0);

(bConnected=0);
(bHandshakeDone=0);
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

}imp7_else19_0:imp7_end19_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_TCPCreateSvr.st"
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

}imp29_end2_0:imp29_else1_1:imp29_end1_0:imp29_else0_0:imp29_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_TCPListen.st"
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

}imp30_end2_0:imp30_else1_3:imp30_end1_0:imp30_else0_0:imp30_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_TCPRcv.st"
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
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"RCV_FRM_DS\r\n")),LEN("RCV_FRM_DS\r\n"));
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
(tySendBoardInfo=*(struct tyHermesSendBoardInfo*)&fbParseXMLTable.tySendBoardInfo);
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

}imp31_else2_4:imp31_end2_0:imp31_else0_0:imp31_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_NotificationRcv.st"
static void __AS__Action__Act_Background_NotificationRcv(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bNotification==(unsigned long)(unsigned char)1))){
(tyMsgTypeRcv.bNotification=0);

(bRstConnection=(fHermesNotificationRstConn(&tyNotificationRcv)|bRstConnection));


}

}

}imp19_else1_0:imp19_end1_0:imp19_else0_0:imp19_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_IllegalMsg.st"
static void __AS__Action__Act_Background_IllegalMsg(void){
{
if((((signed long)eStatus2!=(signed long)3))){

(udiStatus2=fHermesIllegalMsgDS(fbSequenceDS.eState,&tyMsgTypeRcv));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2840))){
(udiStatus2=10016);
}else if((((unsigned long)udiStatus2==(unsigned long)2841))){
(udiStatus2=10017);
}else if((((unsigned long)udiStatus2==(unsigned long)2842))){
(udiStatus2=10018);
}else if((((unsigned long)udiStatus2==(unsigned long)2843))){
(udiStatus2=10019);
}else if((((unsigned long)udiStatus2==(unsigned long)2844))){
(udiStatus2=10020);
}else if((((unsigned long)udiStatus2==(unsigned long)2845))){
(udiStatus2=10021);
}else if((((unsigned long)udiStatus2==(unsigned long)2846))){
(udiStatus2=10022);
}else if((((unsigned long)udiStatus2==(unsigned long)2847))){
(udiStatus2=10023);
}else if((((unsigned long)udiStatus2==(unsigned long)2848))){
(udiStatus2=10024);
}else if((((unsigned long)udiStatus2==(unsigned long)2849))){
(udiStatus2=10025);
}else if((((unsigned long)udiStatus2==(unsigned long)2850))){
(udiStatus2=10026);
}else if((((unsigned long)udiStatus2==(unsigned long)2851))){
(udiStatus2=10027);
}else if((((unsigned long)udiStatus2==(unsigned long)2852))){
(udiStatus2=10028);
}else if((((unsigned long)udiStatus2==(unsigned long)2853))){
(udiStatus2=10029);
}else if((((unsigned long)udiStatus2==(unsigned long)2854))){
(udiStatus2=10030);
}else if((((unsigned long)udiStatus2==(unsigned long)2855))){
(udiStatus2=10031);
}else if((((unsigned long)udiStatus2==(unsigned long)2856))){
(udiStatus2=10032);
}else if((((unsigned long)udiStatus2==(unsigned long)2857))){
(udiStatus2=10033);
}else if((((unsigned long)udiStatus2==(unsigned long)2858))){
(udiStatus2=10034);
}else if((((unsigned long)udiStatus2==(unsigned long)2859))){
(udiStatus2=10035);
}else if((((unsigned long)udiStatus2==(unsigned long)2860))){
(udiStatus2=10036);
}else if((((unsigned long)udiStatus2==(unsigned long)2861))){
(udiStatus2=10037);
}else if((((unsigned long)udiStatus2==(unsigned long)2862))){
(udiStatus2=10038);
}else if((((unsigned long)udiStatus2==(unsigned long)2863))){
(udiStatus2=10039);
}else if((((unsigned long)udiStatus2==(unsigned long)2864))){
(udiStatus2=10040);
}else if((((unsigned long)udiStatus2==(unsigned long)2865))){
(udiStatus2=10041);
}else if((((unsigned long)udiStatus2==(unsigned long)2866))){
(udiStatus2=10042);
}else if((((unsigned long)udiStatus2==(unsigned long)2867))){
(udiStatus2=10043);
}else if((((unsigned long)udiStatus2==(unsigned long)2868))){
(udiStatus2=10044);
}else if((((unsigned long)udiStatus2==(unsigned long)2869))){
(udiStatus2=10045);
}else if((((unsigned long)udiStatus2==(unsigned long)2870))){
(udiStatus2=10046);
}else if((((unsigned long)udiStatus2==(unsigned long)2871))){
(udiStatus2=10047);
}else if((((unsigned long)udiStatus2==(unsigned long)2872))){
(udiStatus2=10048);
}else if((((unsigned long)udiStatus2==(unsigned long)2873))){
(udiStatus2=10049);
}else if((((unsigned long)udiStatus2==(unsigned long)2874))){
(udiStatus2=10050);
}else if((((unsigned long)udiStatus2==(unsigned long)2875))){
(udiStatus2=10051);
}else if((((unsigned long)udiStatus2==(unsigned long)2876))){
(udiStatus2=10052);
}else if((((unsigned long)udiStatus2==(unsigned long)2877))){
(udiStatus2=10053);
}else if((((unsigned long)udiStatus2==(unsigned long)2878))){
(udiStatus2=10054);
}else if((((unsigned long)udiStatus2==(unsigned long)2879))){
(udiStatus2=10055);
}else if((((unsigned long)udiStatus2==(unsigned long)2880))){
(udiStatus2=10056);
}else if((((unsigned long)udiStatus2==(unsigned long)2881))){
(udiStatus2=10057);
}else if((((unsigned long)udiStatus2==(unsigned long)2882))){
(udiStatus2=10058);
}else if((((unsigned long)udiStatus2==(unsigned long)2883))){
(udiStatus2=10059);
}else if((((unsigned long)udiStatus2==(unsigned long)2884))){
(udiStatus2=10060);
}else if((((unsigned long)udiStatus2==(unsigned long)2885))){
(udiStatus2=10061);
}else if((((unsigned long)udiStatus2==(unsigned long)2886))){
(udiStatus2=10062);
}else if((((unsigned long)udiStatus2==(unsigned long)2887))){
(udiStatus2=10063);
}else if((((unsigned long)udiStatus2==(unsigned long)2888))){
(udiStatus2=10064);
}else if((((unsigned long)udiStatus2==(unsigned long)2889))){
(udiStatus2=10065);
}else if((((unsigned long)udiStatus2==(unsigned long)2890))){
(udiStatus2=10066);
}else if((((unsigned long)udiStatus2==(unsigned long)2891))){
(udiStatus2=10067);
}else if((((unsigned long)udiStatus2==(unsigned long)2892))){
(udiStatus2=10068);
}else if((((unsigned long)udiStatus2==(unsigned long)2893))){
(udiStatus2=10069);
}else if((((unsigned long)udiStatus2==(unsigned long)2894))){
(udiStatus2=10070);
}else if((((unsigned long)udiStatus2==(unsigned long)2895))){
(udiStatus2=10071);
}else if((((unsigned long)udiStatus2==(unsigned long)2896))){
(udiStatus2=10072);
}else if((((unsigned long)udiStatus2==(unsigned long)2897))){
(udiStatus2=10073);
}else if((((unsigned long)udiStatus2==(unsigned long)2898))){
(udiStatus2=10074);
}else if((((unsigned long)udiStatus2==(unsigned long)2899))){
(udiStatus2=10075);
}else if((((unsigned long)udiStatus2==(unsigned long)2900))){
(udiStatus2=10076);
}else if((((unsigned long)udiStatus2==(unsigned long)2901))){
(udiStatus2=10077);
}else if((((unsigned long)udiStatus2==(unsigned long)2902))){
(udiStatus2=10078);
}else if((((unsigned long)udiStatus2==(unsigned long)2903))){
(udiStatus2=10079);
}else if((((unsigned long)udiStatus2==(unsigned long)2904))){
(udiStatus2=10080);
}else if((((unsigned long)udiStatus2==(unsigned long)2905))){
(udiStatus2=10081);
}else if((((unsigned long)udiStatus2==(unsigned long)2906))){
(udiStatus2=10082);
}else if((((unsigned long)udiStatus2==(unsigned long)2907))){
(udiStatus2=10083);
}else if((((unsigned long)udiStatus2==(unsigned long)2908))){
(udiStatus2=10084);
}else if((((unsigned long)udiStatus2==(unsigned long)2909))){
(udiStatus2=10085);
}else if((((unsigned long)udiStatus2==(unsigned long)2910))){
(udiStatus2=10108);
}else if((((unsigned long)udiStatus2==(unsigned long)2911))){
(udiStatus2=10109);
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

}imp17_else1_0:imp17_end1_0:imp17_else0_0:imp17_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_ChkParamRcv.st"
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

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bMachineReady==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamMR(&tyMachineReady));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2740))){
(udiStatus2=10098);
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

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bStartTransport==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSAT(&tyStartTransport));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2745))){
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

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bStopTransport==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSOT(&tyStopTransport));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2742))){
(udiStatus2=10099);
}else if((((unsigned long)udiStatus2==(unsigned long)2743))){
(udiStatus2=10100);
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

if(((((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureSendBoardInfo))){
if((((unsigned long)(unsigned char)tyMsgTypeRcv.bQueryBoardInfo==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamQBI(&tyQueryBoardInfo));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2766))){
(udiStatus2=10102);
}

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),6);

(tyNotificationSnd.tyAvl.bSeverity=1);
(tyNotificationSnd.tyAvl.bNotificationCode=1);
(tyNotificationSnd.tyAvl.bDescription=1);
(tyNotificationSnd.tyData.eSeverity=2);
(tyNotificationSnd.tyData.iNotificationCode=(signed short)udiStatus2);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyNotificationSnd.tyData.sDescription; plcstring* zzRValue=(plcstring*)a_tyAlmText[udiStatus2-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyMsgTypeRcv.bQueryBoardInfo=0);
}
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

}imp13_else22_0:imp13_end22_0:imp13_else21_0:imp13_end21_0:imp13_else0_0:imp13_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_CmpParamRcv.st"
static void __AS__Action__Act_Background_CmpParamRcv(void){
{
if((((signed long)eStatus2!=(signed long)3))){

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bStopTransport==(unsigned long)(unsigned char)1))){
(udiStatus2=fHermesChkParamSTST(&tyStartTransport,&tyStopTransport));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
(eStatus2=3);

if((((unsigned long)udiStatus2==(unsigned long)2712))){
(udiStatus2=10104);
}else if((((unsigned long)udiStatus2==(unsigned long)2713))){
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

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bStartTransport==(unsigned long)(unsigned char)1))){
if((((unsigned long)fHermesChkParamBAST(&tyBoardAvailableSnd,&tyStartTransport)!=(unsigned long)0))){
((*(p_bSndNotStart))=1);
}
}

if(bFeatureBoardForecast){
if(((((signed long)fbSequenceDS.eState==(signed long)6))&bSendBFId&bBFIdSent)){
(udiStatus2=fHermesChkParamBFMR(&tyBoardForecastSnd,&tyMachineReady));

if((((unsigned long)udiStatus2!=(unsigned long)0))){
__AS__MEMSET(((unsigned long)(&sInfoMcRdyMsg)),0,201);
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"Details mismatch between BoardForecast and MachineReady"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if((((unsigned long)udiStatus2==(unsigned long)2716))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"ForecastID sent:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,tyBoardForecastSnd.tyData.sForecastId); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"ForecastID received:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,tyMachineReady.tyData.sForecastId); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((unsigned long)udiStatus2==(unsigned long)2717))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"ProductType sent:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,tyBoardForecastSnd.tyData.sProductTypeId); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"ProductType received:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,tyMachineReady.tyData.sProductTypeId); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((unsigned long)udiStatus2==(unsigned long)2718))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"Width sent:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(tyBoardForecastSnd.tyData.rWidth,sTempRealWidth,16);
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,sTempRealWidth); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"Width received:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(tyMachineReady.tyData.rWidth,sTempRealWidth,16);
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,sTempRealWidth); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMcRdyMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,"Waiting New MachineReady or Ignore in:"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10999);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)sInfoMcRdyMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
(bRstSendBFId=1);
}

}
}


}

}imp14_end8_0:imp14_else7_0:imp14_end7_0:imp14_else6_0:imp14_end6_0:imp14_else0_0:imp14_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_BoardForecast.st"
static void __AS__Action__Act_Background_BoardForecast(void){
{



(bFeatureBoardForecast=((((unsigned long)(unsigned char)((*(p_tyParam)).bFeatureBoardForecast)==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureBoardForecast==(unsigned long)(unsigned char)1))));


if((bFeatureBoardForecast^1)){
(bNewChangeOver=0);
(bSendBFNoID=0);
(bSendBFId=0);
(bBFIdSent=0);
(bSndReverseBF=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
(bSndReverseBF=((((unsigned long)(unsigned char)((*(p_usiUSHermesReverseDSSendBFId)))!=(unsigned long)(unsigned char)0))&~Edge0000800000&1?((Edge0000800000=(((unsigned long)(unsigned char)((*(p_usiUSHermesReverseDSSendBFId)))!=(unsigned long)(unsigned char)0))&1),1):((Edge0000800000=(((unsigned long)(unsigned char)((*(p_usiUSHermesReverseDSSendBFId)))!=(unsigned long)(unsigned char)0))&1),0)));




(fbTimerRstBFId.IN=(bSendBFId&bBFIdSent&(bRstSendBFId^1)&(((unsigned long)tyInfoData.udiCode==(unsigned long)10999))&bDSRdy));;(fbTimerRstBFId.PT=1000000);;TON(&fbTimerRstBFId);


if((bRstSendBFId|fbTimerRstBFId.Q|((bAllZoneEmpty&((*(p_bConvInitDone))))&~Edge0000800001&1?((Edge0000800001=(bAllZoneEmpty&((*(p_bConvInitDone))))&1),1):((Edge0000800001=(bAllZoneEmpty&((*(p_bConvInitDone))))&1),0)))){
(bRstSendBFId=0);
(bSendBFId=0);
(bBFIdSent=0);
}else if(fbTimerRstBFId.IN){
real2str(((float)(fbTimerRstBFId.PT-fbTimerRstBFId.ET)/1.00000000000000000000E+03),sRstTim,16);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMcRdyMsg,CONCAT(sRstTim,"(seconds)")); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if(((bNewProduct&~Edge0000800002&1?((Edge0000800002=bNewProduct&1),1):((Edge0000800002=bNewProduct&1),0))|(bNewWidth&~Edge0000800003&1?((Edge0000800003=bNewWidth&1),1):((Edge0000800003=bNewWidth&1),0)))){
(bNewChangeOver=1);
(bBFIdSent=0);
}

if((bNewChangeOver&bAllZoneEmpty&((*(p_bConvInitDone))))){
(bNewChangeOver=0);
(bSendBFId=1);
}

if(((((unsigned long)(unsigned char)bSendBFId==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bBFIdSent==(unsigned long)(unsigned char)0)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

if((((unsigned long)(unsigned char)bSendBFId==(unsigned long)(unsigned char)0))){
(bSendBFNoID=0);
if((bFirstZoneHaveBoard&(bFirstZoneEndSen^1))){
(bSendBFNoID=1);
}else if(bSndReverseBF){
(bSendBFNoID=1);
}
}

}





}imp8_else6_1:imp8_end6_0:imp8_else5_0:imp8_end5_0:imp8_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_SendBoardInfo.st"
static void __AS__Action__Act_Background_SendBoardInfo(void){
{

if((((((unsigned long)(unsigned char)tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo==(unsigned long)(unsigned char)1))&((*(p_tyParam)).bFeatureSendBoardInfo)&bHandshakeDone)^1)){
(bSearchTop=0);
(bSearchBottom=0);
(siTopBarcodeIdx=-1);
(siBottomBarcodeIdx=-1);
(siFoundIdx=-1);
}else{
if((((signed long)eStatus2!=(signed long)3))){

if(tyMsgTypeRcv.bQueryBoardInfo){
(tyMsgTypeRcv.bQueryBoardInfo=0);

(bSearchTop=((__AS__STRING_CMP(tyQueryBoardInfo.tyData.sTopBarcode,"")!=0)));
(bSearchBottom=((__AS__STRING_CMP(tyQueryBoardInfo.tyData.sBottomBarcode,"")!=0)));

(siTopBarcodeIdx=-1);
(siBottomBarcodeIdx=-1);
for((siSearhIdx=0);siSearhIdx<=49;siSearhIdx+=1){
if(bSearchTop){


if((((signed long)memcmp(((unsigned long)(&tyQueryBoardInfo.tyData.sTopBarcode)),(((unsigned long)(&a_tyBoardDepartedInfo[0].tyData.sTopBarcode))+(siSearhIdx*1552)),255)==(signed long)0))){
(siTopBarcodeIdx=siSearhIdx);
}
}

if(bSearchBottom){


if((((signed long)memcmp(((unsigned long)(&tyQueryBoardInfo.tyData.sBottomBarcode)),(((unsigned long)(&a_tyBoardDepartedInfo[0].tyData.sBottomBarcode))+(siSearhIdx*1552)),255)==(signed long)0))){
(siBottomBarcodeIdx=siSearhIdx);
}
}


if((((bSearchTop^1)|(bSearchTop&(((signed long)(signed long)(char)siTopBarcodeIdx!=(signed long)(signed long)(char)-1))))&((bSearchBottom^1)|(bSearchBottom&(((signed long)(signed long)(char)siBottomBarcodeIdx!=(signed long)(signed long)(char)-1)))))){
goto imp23_endfor3_0;
}
}imp23_endfor3_0:;




(bCompleteSearch=(((bSearchTop&(((signed long)(signed long)(char)siTopBarcodeIdx==(signed long)(signed long)(char)-1)))^1)&((bSearchBottom&(((signed long)(signed long)(char)siBottomBarcodeIdx==(signed long)(signed long)(char)-1)))^1)&((bSearchTop&bSearchBottom&(((signed long)(signed long)(char)siTopBarcodeIdx!=(signed long)(signed long)(char)siBottomBarcodeIdx)))^1)));
if(bCompleteSearch){
if((((signed long)(signed long)(char)siTopBarcodeIdx!=(signed long)(signed long)(char)-1))){
(siFoundIdx=siTopBarcodeIdx);
}else if((((signed long)(signed long)(char)siBottomBarcodeIdx!=(signed long)(signed long)(char)-1))){
(siFoundIdx=siBottomBarcodeIdx);
}
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),31);

{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBoardId; plcstring* zzRValue=(plcstring*)a_tyBoardDepartedInfo[siFoundIdx].tyData.sBoardId; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)a_tyBoardDepartedInfo[siFoundIdx].tyData.sBoardIdCreatedBy; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendBoardInfo.tyData.eFailedBoard=a_tyBoardDepartedInfo[siFoundIdx].tyData.eFailedBoard);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)a_tyBoardDepartedInfo[siFoundIdx].tyData.sProductTypeId; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendBoardInfo.tyData.eFlippedBoard=a_tyBoardDepartedInfo[siFoundIdx].tyData.eFlippedBoard);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)a_tyBoardDepartedInfo[siFoundIdx].tyData.sTopBarcode; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)a_tyBoardDepartedInfo[siFoundIdx].tyData.sBottomBarcode; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendBoardInfo.tyData.rLength=a_tyBoardDepartedInfo[siFoundIdx].tyData.rLength);
(tySendBoardInfo.tyData.rWidth=a_tyBoardDepartedInfo[siFoundIdx].tyData.rWidth);
(tySendBoardInfo.tyData.rThickness=a_tyBoardDepartedInfo[siFoundIdx].tyData.rThickness);
(tySendBoardInfo.tyData.rTopClearanceHeight=a_tyBoardDepartedInfo[siFoundIdx].tyData.rTopClearanceHeight);
(tySendBoardInfo.tyData.rBottomClearanceHeight=a_tyBoardDepartedInfo[siFoundIdx].tyData.rBottomClearanceHeight);
(tySendBoardInfo.tyData.rWeight=a_tyBoardDepartedInfo[siFoundIdx].tyData.rWeight);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)a_tyBoardDepartedInfo[siFoundIdx].tyData.sWorkOrderId; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tySendBoardInfo.tyAvl.bBoardId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBoardId,"")!=0)));
(tySendBoardInfo.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBoardIdCreatedBy,"")!=0)));
(tySendBoardInfo.tyAvl.bFailedBoard=1);
(tySendBoardInfo.tyAvl.bProductTypeId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sProductTypeId,"")!=0)));
(tySendBoardInfo.tyAvl.bFlippedBoard=1);
(tySendBoardInfo.tyAvl.bTopBarcode=((__AS__STRING_CMP(tySendBoardInfo.tyData.sTopBarcode,"")!=0)));
(tySendBoardInfo.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBottomBarcode,"")!=0)));
(tySendBoardInfo.tyAvl.bLength=((tySendBoardInfo.tyData.rLength!=0)));
(tySendBoardInfo.tyAvl.bWidth=((tySendBoardInfo.tyData.rWidth!=0)));
(tySendBoardInfo.tyAvl.bThickness=((tySendBoardInfo.tyData.rThickness!=0)));
(tySendBoardInfo.tyAvl.bTopClearanceHeight=((tySendBoardInfo.tyData.rTopClearanceHeight!=0)));
(tySendBoardInfo.tyAvl.bBottomClearanceHeight=((tySendBoardInfo.tyData.rBottomClearanceHeight!=0)));
(tySendBoardInfo.tyAvl.bWeight=((tySendBoardInfo.tyData.rWeight!=0)));
(tySendBoardInfo.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sWorkOrderId,"")!=0)));

}else{
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),31);

{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBoardId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendBoardInfo.tyData.eFailedBoard=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendBoardInfo.tyData.eFlippedBoard=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)tyQueryBoardInfo.tyData.sTopBarcode; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)tyQueryBoardInfo.tyData.sBottomBarcode; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tySendBoardInfo.tyData.rLength=0);
(tySendBoardInfo.tyData.rWidth=0);
(tySendBoardInfo.tyData.rThickness=0);
(tySendBoardInfo.tyData.rTopClearanceHeight=0);
(tySendBoardInfo.tyData.rBottomClearanceHeight=0);
(tySendBoardInfo.tyData.rWeight=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tySendBoardInfo.tyData.sBatchId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tySendBoardInfo.tyAvl.bBoardId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBoardId,"")!=0)));
(tySendBoardInfo.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBoardIdCreatedBy,"")!=0)));
(tySendBoardInfo.tyAvl.bFailedBoard=0);
(tySendBoardInfo.tyAvl.bProductTypeId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sProductTypeId,"")!=0)));
(tySendBoardInfo.tyAvl.bFlippedBoard=0);
(tySendBoardInfo.tyAvl.bTopBarcode=((__AS__STRING_CMP(tySendBoardInfo.tyData.sTopBarcode,"")!=0)));
(tySendBoardInfo.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBottomBarcode,"")!=0)));
(tySendBoardInfo.tyAvl.bLength=((tySendBoardInfo.tyData.rLength!=0)));
(tySendBoardInfo.tyAvl.bWidth=((tySendBoardInfo.tyData.rWidth!=0)));
(tySendBoardInfo.tyAvl.bThickness=((tySendBoardInfo.tyData.rThickness!=0)));
(tySendBoardInfo.tyAvl.bTopClearanceHeight=((tySendBoardInfo.tyData.rTopClearanceHeight!=0)));
(tySendBoardInfo.tyAvl.bBottomClearanceHeight=((tySendBoardInfo.tyData.rBottomClearanceHeight!=0)));
(tySendBoardInfo.tyAvl.bWeight=((tySendBoardInfo.tyData.rWeight!=0)));
(tySendBoardInfo.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sWorkOrderId,"")!=0)));
(tySendBoardInfo.tyAvl.bBatchId=((__AS__STRING_CMP(tySendBoardInfo.tyData.sBatchId,"")!=0)));

}


}
}
}



}imp23_end9_0:imp23_else2_0:imp23_end2_0:imp23_else1_0:imp23_end1_0:imp23_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_Sequence.st"
static void __AS__Action__Act_Background_Sequence(void){
{
if((((signed long)eStatus1!=(signed long)3))){

if((((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)0))){
((*(p_bSndIncompl))=1);
}

if((((unsigned long)(unsigned char)tyMsgTypeRcv.bStopTransport==(unsigned long)(unsigned char)1))){
if((((signed long)tyStopTransport.tyData.eTransferState==(signed long)1))){
((*(p_bSndNotStart))=1);
}else if((((signed long)tyStopTransport.tyData.eTransferState==(signed long)2))){
((*(p_bSndIncompl))=1);
}
}

(bBlkDS=((*(p_bHermesSwitchtoRvrseTransport))));

(fbSequenceDS.bRstState=bRstState);
(fbSequenceDS.bRdySnd=((*(p_bRdySnd))));
(fbSequenceDS.bBlkDS=bBlkDS);
(fbSequenceDS.bSndCompl=((*(p_bSndCompl))));
(fbSequenceDS.bSndIncompl=((*(p_bSndIncompl))));
(fbSequenceDS.bSndNotStart=((*(p_bSndNotStart))));
(fbSequenceDS.bFeatureBoardForecast=bFeatureBoardForecast);
(fbSequenceDS.bOpsRun=((*(p_bOpsRun))));
(fbSequenceDS.bSendBFId=bSendBFId);
(fbSequenceDS.bBFIdSent=bBFIdSent);
(fbSequenceDS.bSendBFNoID=bSendBFNoID);
(fbSequenceDS.bEn=1);;fbHermesSequenceDS(&fbSequenceDS);
(bUSRdy=fbSequenceDS.bUSRdy);
(bDSRdy=fbSequenceDS.bDSRdy);
(bTransporting=fbSequenceDS.bTransporting);
(bStopTransport=fbSequenceDS.bStopTransport);


(bUSGdRdy=((((unsigned long)(unsigned char)tyBoardAvailableSnd.tyAvl.bFailedBoard==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)tyBoardAvailableSnd.tyAvl.bFailedBoard==(unsigned long)(unsigned char)1))&(((signed long)tyBoardAvailableSnd.tyData.eFailedBoard!=(signed long)2)))));


(bDSGdRdy=((((unsigned long)(unsigned char)tyMachineReady.tyAvl.bFailedBoard==(unsigned long)(unsigned char)0))|((((unsigned long)(unsigned char)tyMachineReady.tyAvl.bFailedBoard==(unsigned long)(unsigned char)1))&(((signed long)tyMachineReady.tyData.eFailedBoard!=(signed long)2)))));

if((((signed long)fbSequenceDS.eState>=(signed long)4))){
(bHandshakeDone=1);
}else{
(bHandshakeDone=0);
}

if(((((signed long)fbSequenceDS.eState==(signed long)8))&~Edge0002400000&1?((Edge0002400000=(((signed long)fbSequenceDS.eState==(signed long)8))&1),1):((Edge0002400000=(((signed long)fbSequenceDS.eState==(signed long)8))&1),0))){
((*(p_bSndCompl))=0);
((*(p_bSndIncompl))=0);
((*(p_bSndNotStart))=0);
}

if((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)4))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),4);

{int zzIndex; plcstring* zzLValue=(plcstring*)tyServiceDescriptionSnd.tyData.sMachineId; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyServiceDescriptionSnd.tyData.iLaneId=((*(p_tyParam)).iLaneID));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyServiceDescriptionSnd.tyData.sInterfaceId; plcstring* zzRValue=(plcstring*)((*(p_sInterfaceId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyServiceDescriptionSnd.tyData.sVersion; plcstring* zzRValue=(plcstring*)((*(p_sVersion))); for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCheckAliveResponse=(((*(p_tyParam)).bFeatureCheckAliveResponse)&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))));
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureBoardForecast=((*(p_tyParam)).bFeatureBoardForecast));
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureQueryBoardInfo=0);
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureSendBoardInfo=((*(p_tyParam)).bFeatureSendBoardInfo));
(tyServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCommand=((*(p_tyParam)).bFeatureCommand));

(tyServiceDescriptionSnd.tyAvl.bMachineId=((__AS__STRING_CMP(tyServiceDescriptionSnd.tyData.sMachineId,"")!=0)));
(tyServiceDescriptionSnd.tyAvl.bLaneId=(((signed long)(signed long)(short)tyServiceDescriptionSnd.tyData.iLaneId!=(signed long)(signed long)(short)0)));
(tyServiceDescriptionSnd.tyAvl.bInterfaceId=((__AS__STRING_CMP(tyServiceDescriptionSnd.tyData.sInterfaceId,"")!=0)));
(tyServiceDescriptionSnd.tyAvl.bVersion=1);
(tyServiceDescriptionSnd.tyAvl.bSupportedFeatures=(((*(p_tyParam)).bFeatureCheckAliveResponse)|((*(p_tyParam)).bFeatureBoardForecast)|((*(p_tyParam)).bFeatureSendBoardInfo)|((*(p_tyParam)).bFeatureCommand)));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse=(((*(p_tyParam)).bFeatureCheckAliveResponse)&(((signed long)((*(p_tyParam)).tRcvAlive)!=(signed long)0))&(((signed long)((*(p_tyParam)).tSndAlive)!=(signed long)0))));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureBoardForecast=((*(p_tyParam)).bFeatureBoardForecast));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureQueryBoardInfo=0);
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo=((*(p_tyParam)).bFeatureSendBoardInfo));
(tyServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCommand=((*(p_tyParam)).bFeatureCommand));
}else if((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)18))){

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),17);
fHermesGenerateUUID(((unsigned long)(&tyBoardForecastSnd.tyData.sForecastId)),&((*(p_tyDTStructure))),((*(pa_usiMacAddr))));
(bBFIdSent=1);

if((((unsigned long)(unsigned char)((*(p_bManualInsertData)))==(unsigned long)(unsigned char)0))){
(tyBoardForecastSnd.tyData.rTimeUntilAvailable=(((*(p_rMcCycleTm)))+((*(p_rAWCycleTm)))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFailedBoard=((*(p_eFailedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_sRecipeNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFlippedBoard=((*(p_eFlippedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_sTopBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_sBottomBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.rLength=((*(p_rLength))));
(tyBoardForecastSnd.tyData.rWidth=((float)((*(p_diWidthInUM)))/1000));
(tyBoardForecastSnd.tyData.rThickness=((*(p_rThickness))));
(tyBoardForecastSnd.tyData.rConveyorSpeed=((*(p_rConveyorSpeed))));
(tyBoardForecastSnd.tyData.rTopClearanceHeight=((*(p_rTopClearanceHeight))));
(tyBoardForecastSnd.tyData.rBottomClearanceHeight=((*(p_rBottomClearanceHeight))));
(tyBoardForecastSnd.tyData.rWeight=((*(p_rWeight))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)((*(p_sWorkOrderId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_sBatchId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardForecastSnd.tyAvl.bForecastId=1);
(tyBoardForecastSnd.tyAvl.bTimeUntilAvailable=((tyBoardForecastSnd.tyData.rTimeUntilAvailable!=0)));
(tyBoardForecastSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy=1);
(tyBoardForecastSnd.tyAvl.bFailedBoard=1);
(tyBoardForecastSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFlippedBoard=1);
(tyBoardForecastSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bLength=((tyBoardForecastSnd.tyData.rLength!=0)));
(tyBoardForecastSnd.tyAvl.bWidth=(((tyBoardForecastSnd.tyData.rWidth!=0))&(((unsigned long)(unsigned char)((*(p_bBFWidthEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bThickness=(((tyBoardForecastSnd.tyData.rThickness!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bConveyorSpeed=((tyBoardForecastSnd.tyData.rConveyorSpeed!=0)));
(tyBoardForecastSnd.tyAvl.bTopClearanceHeight=(((tyBoardForecastSnd.tyData.rTopClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bBottomClearanceHeight=(((tyBoardForecastSnd.tyData.rBottomClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bWeight=((tyBoardForecastSnd.tyData.rWeight!=0)));
(tyBoardForecastSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBatchId,"")!=0)));
}else{
(tyBoardForecastSnd.tyData.rTimeUntilAvailable=(((*(p_rMcCycleTm)))+((*(p_rAWCycleTm)))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFailedBoard=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFlippedBoard=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.rLength=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rLength));
(tyBoardForecastSnd.tyData.rWidth=((float)((*(p_diWidthInUM)))/1000));
(tyBoardForecastSnd.tyData.rThickness=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rThickness));
(tyBoardForecastSnd.tyData.rConveyorSpeed=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rConveyorSpeed));
(tyBoardForecastSnd.tyData.rTopClearanceHeight=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rTopClearanceHeight));
(tyBoardForecastSnd.tyData.rBottomClearanceHeight=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rBottomClearanceHeight));
(tyBoardForecastSnd.tyData.rWeight=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardForecastSnd.tyAvl.bForecastId=1);
(tyBoardForecastSnd.tyAvl.bTimeUntilAvailable=((tyBoardForecastSnd.tyData.rTimeUntilAvailable!=0)));
(tyBoardForecastSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy=1);
(tyBoardForecastSnd.tyAvl.bFailedBoard=1);
(tyBoardForecastSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFlippedBoard=1);
(tyBoardForecastSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bLength=((tyBoardForecastSnd.tyData.rLength!=0)));
(tyBoardForecastSnd.tyAvl.bWidth=(((tyBoardForecastSnd.tyData.rWidth!=0))&(((unsigned long)(unsigned char)((*(p_bBFWidthEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bThickness=(((tyBoardForecastSnd.tyData.rThickness!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bConveyorSpeed=((tyBoardForecastSnd.tyData.rConveyorSpeed!=0)));
(tyBoardForecastSnd.tyAvl.bTopClearanceHeight=(((tyBoardForecastSnd.tyData.rTopClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bBottomClearanceHeight=(((tyBoardForecastSnd.tyData.rBottomClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bWeight=((tyBoardForecastSnd.tyData.rWeight!=0)));
(tyBoardForecastSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBatchId,"")!=0)));

}

}else if((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)19))){

__AS__MEMSET(((unsigned long)(&tyBoardForecastSnd)),0,1196);
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),17);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sForecastId; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((*(p_bNewBrdAvlFirstZone)))&(((unsigned long)(unsigned char)((*(p_usiUSHermesReverseDSSendBFId)))!=(unsigned long)(unsigned char)0)))){

if((((unsigned long)(unsigned char)((*(p_usiUSHermesReverseDSSendBFId)))==(unsigned long)(unsigned char)1))){
(fbParseBrdAvlExternal.p_XMLTable=((unsigned long)(&((*(pa_RevtyXMLTableDataBrdAvl))))));
(fbParseBrdAvlExternal.iTotalIdxWrite=((*(p_ReviXMLTableDataBrdAvlTtlIdx))));
fbHermesParseXMLTable(&fbParseBrdAvlExternal);
fHermesBrdAvltoBF(((unsigned long)(&tyBoardForecastSnd)),((unsigned long)(&fbParseBrdAvlExternal.tyBoardAvailable)));
}else if((((unsigned long)(unsigned char)((*(p_usiUSHermesReverseDSSendBFId)))==(unsigned long)(unsigned char)2))){


(tyBoardForecastSnd.tyAvl.bFailedBoard=1);
(tyBoardForecastSnd.tyAvl.bFlippedBoard=1);
}
}else if((((*(p_bNewBrdAvlFirstZone)))&(((unsigned long)(unsigned char)((*(p_bManualInsertData)))==(unsigned long)(unsigned char)0)))){
fHermesGenerateUUID(((unsigned long)(&tyBoardForecastSnd.tyData.sBoardId)),&((*(p_tyDTStructure))),((*(pa_usiMacAddr))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFailedBoard=((*(p_eFailedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_sRecipeNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFlippedBoard=((*(p_eFlippedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_sTopBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_sBottomBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.rLength=((*(p_rLength))));
(tyBoardForecastSnd.tyData.rWidth=((float)((*(p_diWidthInUM)))/1000));
(tyBoardForecastSnd.tyData.rThickness=((*(p_rThickness))));
(tyBoardForecastSnd.tyData.rConveyorSpeed=((*(p_rConveyorSpeed))));
(tyBoardForecastSnd.tyData.rTopClearanceHeight=((*(p_rTopClearanceHeight))));
(tyBoardForecastSnd.tyData.rBottomClearanceHeight=((*(p_rBottomClearanceHeight))));
(tyBoardForecastSnd.tyData.rWeight=((*(p_rWeight))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)((*(p_sWorkOrderId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_sBatchId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardForecastSnd.tyAvl.bForecastId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sForecastId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bTimeUntilAvailable=((tyBoardForecastSnd.tyData.rTimeUntilAvailable!=0)));
(tyBoardForecastSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFailedBoard=1);
(tyBoardForecastSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFlippedBoard=1);
(tyBoardForecastSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bLength=((tyBoardForecastSnd.tyData.rLength!=0)));
(tyBoardForecastSnd.tyAvl.bWidth=(((tyBoardForecastSnd.tyData.rWidth!=0))&(((unsigned long)(unsigned char)((*(p_bBFWidthEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bThickness=(((tyBoardForecastSnd.tyData.rThickness!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bConveyorSpeed=((tyBoardForecastSnd.tyData.rConveyorSpeed!=0)));
(tyBoardForecastSnd.tyAvl.bTopClearanceHeight=(((tyBoardForecastSnd.tyData.rTopClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bBottomClearanceHeight=(((tyBoardForecastSnd.tyData.rBottomClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bWeight=((tyBoardForecastSnd.tyData.rWeight!=0)));
(tyBoardForecastSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBatchId,"")!=0)));
}else if((((*(p_bNewBrdAvlFirstZone)))&((*(p_bManualInsertData))))){
fHermesGenerateUUID(((unsigned long)(&tyBoardForecastSnd.tyData.sBoardId)),&((*(p_tyDTStructure))),((*(pa_usiMacAddr))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFailedBoard=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.eFlippedBoard=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardForecastSnd.tyData.rLength=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rLength));
(tyBoardForecastSnd.tyData.rWidth=((float)((*(p_diWidthInUM)))/1000));
(tyBoardForecastSnd.tyData.rThickness=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rThickness));
(tyBoardForecastSnd.tyData.rConveyorSpeed=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rConveyorSpeed));
(tyBoardForecastSnd.tyData.rTopClearanceHeight=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rTopClearanceHeight));
(tyBoardForecastSnd.tyData.rBottomClearanceHeight=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rBottomClearanceHeight));
(tyBoardForecastSnd.tyData.rWeight=((*(p_tySvyHermesSendWorkOrderInfo)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardForecastSnd.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tySvyHermesSendWorkOrderInfo)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardForecastSnd.tyAvl.bForecastId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sForecastId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bTimeUntilAvailable=((tyBoardForecastSnd.tyData.rTimeUntilAvailable!=0)));
(tyBoardForecastSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFailedBoard=1);
(tyBoardForecastSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFlippedBoard=1);
(tyBoardForecastSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bLength=((tyBoardForecastSnd.tyData.rLength!=0)));
(tyBoardForecastSnd.tyAvl.bWidth=(((tyBoardForecastSnd.tyData.rWidth!=0))&(((unsigned long)(unsigned char)((*(p_bBFWidthEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bThickness=(((tyBoardForecastSnd.tyData.rThickness!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bConveyorSpeed=((tyBoardForecastSnd.tyData.rConveyorSpeed!=0)));
(tyBoardForecastSnd.tyAvl.bTopClearanceHeight=(((tyBoardForecastSnd.tyData.rTopClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bBottomClearanceHeight=(((tyBoardForecastSnd.tyData.rBottomClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBFSltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardForecastSnd.tyAvl.bWeight=((tyBoardForecastSnd.tyData.rWeight!=0)));
(tyBoardForecastSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBatchId,"")!=0)));

}else{


(fbParseBrdAvlExternal.p_XMLTable=((unsigned long)(&((*(pa_tyXMLTableDataBrdAvl1stZ))))));
(fbParseBrdAvlExternal.iTotalIdxWrite=((*(p_iXMLTableDataBrdAvlTtlIdx1stZ))));
fbHermesParseXMLTable(&fbParseBrdAvlExternal);
fHermesBrdAvltoBF(((unsigned long)(&tyBoardForecastSnd)),((unsigned long)(&fbParseBrdAvlExternal.tyBoardAvailable)));


















(tyBoardForecastSnd.tyAvl.bForecastId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sForecastId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bTimeUntilAvailable=((tyBoardForecastSnd.tyData.rTimeUntilAvailable!=0)));
(tyBoardForecastSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFailedBoard=1);
(tyBoardForecastSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bFlippedBoard=1);
(tyBoardForecastSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardForecastSnd.tyAvl.bLength=((tyBoardForecastSnd.tyData.rLength!=0)));
(tyBoardForecastSnd.tyAvl.bWidth=((tyBoardForecastSnd.tyData.rWidth!=0)));
(tyBoardForecastSnd.tyAvl.bThickness=((tyBoardForecastSnd.tyData.rThickness!=0)));
(tyBoardForecastSnd.tyAvl.bConveyorSpeed=((tyBoardForecastSnd.tyData.rConveyorSpeed!=0)));
(tyBoardForecastSnd.tyAvl.bTopClearanceHeight=((tyBoardForecastSnd.tyData.rTopClearanceHeight!=0)));
(tyBoardForecastSnd.tyAvl.bBottomClearanceHeight=((tyBoardForecastSnd.tyData.rBottomClearanceHeight!=0)));
(tyBoardForecastSnd.tyAvl.bWeight=((tyBoardForecastSnd.tyData.rWeight!=0)));
(tyBoardForecastSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardForecastSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardForecastSnd.tyData.sBatchId,"")!=0)));


}
}else if((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)7))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),7);

(tyBoardAvailableSnd.tyData.iRoute=iRoute);
(tyBoardAvailableSnd.tyData.iAction=iAction);

(tyBoardAvailableSnd.tyAvl.bRoute=(((signed long)(signed long)(short)tyBoardAvailableSnd.tyData.iRoute!=(signed long)(signed long)(short)0)));
(tyBoardAvailableSnd.tyAvl.bAction=(((signed long)(signed long)(short)tyBoardAvailableSnd.tyData.iAction!=(signed long)(signed long)(short)0)));

if(((((unsigned long)(unsigned char)((*(p_bNewBrdAvlLastZone)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRcvBoardInfo)))==(unsigned long)(unsigned char)0)))){
if((bFeatureBoardForecast&bBFIdSent)){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBoardId; plcstring* zzRValue=(plcstring*)tyBoardForecastSnd.tyData.sBoardId; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
fHermesGenerateUUID(((unsigned long)(&tyBoardAvailableSnd.tyData.sBoardId)),&((*(p_tyDTStructure))),((*(pa_usiMacAddr))));
}

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_sMcId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableSnd.tyData.eFailedBoard=((*(p_eFailedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_sRecipeNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableSnd.tyData.eFlippedBoard=((*(p_eFlippedBoard))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_sTopBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_sBottomBarcode))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableSnd.tyData.rLength=((*(p_rLength))));
(tyBoardAvailableSnd.tyData.rWidth=((float)((*(p_diWidthInUM)))/1000));
(tyBoardAvailableSnd.tyData.rThickness=((*(p_rThickness))));
(tyBoardAvailableSnd.tyData.rConveyorSpeed=((*(p_rConveyorSpeed))));
(tyBoardAvailableSnd.tyData.rTopClearanceHeight=((*(p_rTopClearanceHeight))));
(tyBoardAvailableSnd.tyData.rBottomClearanceHeight=((*(p_rBottomClearanceHeight))));
(tyBoardAvailableSnd.tyData.rWeight=((*(p_rWeight))));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)((*(p_sWorkOrderId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_sBatchId))); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardAvailableSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBoardId,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bFailedBoard=1);
(tyBoardAvailableSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bFlippedBoard=1);
(tyBoardAvailableSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bLength=((tyBoardAvailableSnd.tyData.rLength!=0)));
(tyBoardAvailableSnd.tyAvl.bWidth=(((tyBoardAvailableSnd.tyData.rWidth!=0))&(((unsigned long)(unsigned char)((*(p_bBAWidthEn)))==(unsigned long)(unsigned char)1))));
(tyBoardAvailableSnd.tyAvl.bThickness=(((tyBoardAvailableSnd.tyData.rThickness!=0))&(((unsigned long)(unsigned char)((*(p_bBASltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardAvailableSnd.tyAvl.bConveyorSpeed=((tyBoardAvailableSnd.tyData.rConveyorSpeed!=0)));
(tyBoardAvailableSnd.tyAvl.bTopClearanceHeight=(((tyBoardAvailableSnd.tyData.rTopClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBASltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardAvailableSnd.tyAvl.bBottomClearanceHeight=(((tyBoardAvailableSnd.tyData.rBottomClearanceHeight!=0))&(((unsigned long)(unsigned char)((*(p_bBASltEn)))==(unsigned long)(unsigned char)1))));
(tyBoardAvailableSnd.tyAvl.bWeight=((tyBoardAvailableSnd.tyData.rWeight!=0)));
(tyBoardAvailableSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBatchId,"")!=0)));

}else if(((((unsigned long)(unsigned char)((*(p_bNewBrdAvlLastZone)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bRcvBoardInfo)))==(unsigned long)(unsigned char)1)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBoardId; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBoardIdCreatedBy; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableSnd.tyData.eFailedBoard=((*(p_tyBoardInfoData)).tyData.eFailedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sProductTypeId; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableSnd.tyData.eFlippedBoard=((*(p_tyBoardInfoData)).tyData.eFlippedBoard));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sTopBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBottomBarcode; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyBoardAvailableSnd.tyData.rLength=((*(p_tyBoardInfoData)).tyData.rLength));
(tyBoardAvailableSnd.tyData.rWidth=((*(p_tyBoardInfoData)).tyData.rWidth));
(tyBoardAvailableSnd.tyData.rThickness=((*(p_tyBoardInfoData)).tyData.rThickness));
(tyBoardAvailableSnd.tyData.rConveyorSpeed=((*(p_rConveyorSpeed))));
(tyBoardAvailableSnd.tyData.rTopClearanceHeight=((*(p_tyBoardInfoData)).tyData.rTopClearanceHeight));
(tyBoardAvailableSnd.tyData.rBottomClearanceHeight=((*(p_tyBoardInfoData)).tyData.rBottomClearanceHeight));
(tyBoardAvailableSnd.tyData.rWeight=((*(p_tyBoardInfoData)).tyData.rWeight));
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sWorkOrderId; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sWorkOrderId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyBoardAvailableSnd.tyData.sBatchId; plcstring* zzRValue=(plcstring*)((*(p_tyBoardInfoData)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyBoardAvailableSnd.tyAvl.bBoardId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBoardId,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bBoardIdCreatedBy=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBoardIdCreatedBy,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bFailedBoard=1);
(tyBoardAvailableSnd.tyAvl.bProductTypeId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sProductTypeId,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bFlippedBoard=1);
(tyBoardAvailableSnd.tyAvl.bTopBarcode=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sTopBarcode,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bBottomBarcode=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBottomBarcode,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bLength=((tyBoardAvailableSnd.tyData.rLength!=0)));
(tyBoardAvailableSnd.tyAvl.bWidth=((tyBoardAvailableSnd.tyData.rWidth!=0)));
(tyBoardAvailableSnd.tyAvl.bThickness=((tyBoardAvailableSnd.tyData.rThickness!=0)));
(tyBoardAvailableSnd.tyAvl.bConveyorSpeed=((tyBoardAvailableSnd.tyData.rConveyorSpeed!=0)));
(tyBoardAvailableSnd.tyAvl.bTopClearanceHeight=((tyBoardAvailableSnd.tyData.rTopClearanceHeight!=0)));
(tyBoardAvailableSnd.tyAvl.bBottomClearanceHeight=((tyBoardAvailableSnd.tyData.rBottomClearanceHeight!=0)));
(tyBoardAvailableSnd.tyAvl.bWeight=((tyBoardAvailableSnd.tyData.rWeight!=0)));
(tyBoardAvailableSnd.tyAvl.bWorkOrderId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sWorkOrderId,"")!=0)));
(tyBoardAvailableSnd.tyAvl.bBatchId=((__AS__STRING_CMP(tyBoardAvailableSnd.tyData.sBatchId,"")!=0)));

}else{

(fbParseBrdAvlExternal.p_XMLTable=((unsigned long)(&((*(pa_tyXMLTableDataBrdAvl))))));
(fbParseBrdAvlExternal.iTotalIdxWrite=((*(p_iXMLTableDataBrdAvlTtlIdx))));
fbHermesParseXMLTable(&fbParseBrdAvlExternal);
(tyBoardAvailableSnd=*(struct tyHermesBoardAvailable*)&fbParseBrdAvlExternal.tyBoardAvailable);
}

}else if((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)8))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),8);

}else if((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)13))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),13);

if((((unsigned long)(unsigned char)((*(p_bSndCompl)))==(unsigned long)(unsigned char)1))){
(tyTransportFinished.tyData.eTransferState=3);
}else if((((unsigned long)(unsigned char)((*(p_bSndIncompl)))==(unsigned long)(unsigned char)1))){
(tyTransportFinished.tyData.eTransferState=2);
}else{
(tyTransportFinished.tyData.eTransferState=1);
}
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTransportFinished.tyData.sBoardId; plcstring* zzRValue=(plcstring*)tyStartTransport.tyData.sBoardId; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyTransportFinished.tyAvl.bTransferState=1);
(tyTransportFinished.tyAvl.bBoardId=1);

}

}

}imp24_else6_5:imp24_end6_0:imp24_else0_0:imp24_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_SequenceTO.st"
static void __AS__Action__Act_Background_SequenceTO(void){
{
if(((((signed long)eStatus1!=(signed long)3))&(((signed long)eStatus2!=(signed long)3)))){


(fbSequenceTO.eState=fbSequenceDS.eState);
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
((*(p_bSndIncompl))=1);

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

}imp25_end2_0:imp25_else1_0:imp25_end1_0:imp25_else0_0:imp25_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_ChkAlive.st"
static void __AS__Action__Act_Background_ChkAlive(void){
{
if((((signed long)eStatus1!=(signed long)3))){


(fbCheckAlive.bDataRcv=(tyMsgTypeRcv.bCheckAlive|tyMsgTypeRcv.bMachineReady|tyMsgTypeRcv.bRevokeMachineReady|tyMsgTypeRcv.bStartTransport|tyMsgTypeRcv.bStopTransport|tyMsgTypeRcv.bQueryBoardInfo));
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
if((fbCheckAlive.bDataSend&~Edge0001000000&1?((Edge0001000000=fbCheckAlive.bDataSend&1),1):((Edge0001000000=fbCheckAlive.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),1);
(tyCheckAliveSnd=*(struct tyHermesCheckAlive*)&fbCheckAlive.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlive=0);

}

}imp10_else0_0:imp10_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_ChkAliveSendPing.st"
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
if((fbCheckAliveSendPing.bDataSend&~Edge0001200000&1?((Edge0001200000=fbCheckAliveSendPing.bDataSend&1),1):((Edge0001200000=fbCheckAliveSendPing.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),2);
(tyCheckAlivePingSnd=*(struct tyHermesCheckAlive*)&fbCheckAliveSendPing.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlivePong=0);

}

}imp12_else0_0:imp12_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_ChkAliveRcvPing.st"
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
if((fbCheckAliveRcvPing.bDataSend&~Edge0001100000&1?((Edge0001100000=fbCheckAliveRcvPing.bDataSend&1),1):((Edge0001100000=fbCheckAliveRcvPing.bDataSend&1),0))){
fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),3);
(tyCheckAlivePongSnd=*(struct tyHermesCheckAlive*)&fbCheckAliveRcvPing.tyDataSend);
}

}

(tyMsgTypeRcv.bCheckAlivePing=0);

}

}imp11_else0_0:imp11_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_ChgConfig.st"
static void __AS__Action__Act_Background_ChgConfig(void){
{
if((((signed long)eStatus2!=(signed long)3))){


if(((((signed long)(signed long)(short)tyParamOld.iLaneID!=(signed long)(signed long)(short)((*(p_tyParam)).iLaneID)))|((__AS__STRING_CMP(tyParamOld.sClientAddress,((*(p_tyParam)).sClientAddress))!=0))|(((unsigned long)(unsigned short)tyParamOld.uiClientPort!=(unsigned long)(unsigned short)((*(p_tyParam)).uiClientPort)))|(((unsigned long)(unsigned short)tyParamOld.uiSvrPort!=(unsigned long)(unsigned short)((*(p_tyParam)).uiSvrPort)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureBoardForecast!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureBoardForecast)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureCheckAliveResponse!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureCheckAliveResponse)))|(((unsigned long)(unsigned char)tyParamOld.bFeatureSendBoardInfo!=(unsigned long)(unsigned char)((*(p_tyParam)).bFeatureSendBoardInfo))))){


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

}imp9_else1_0:imp9_end1_0:imp9_else0_0:imp9_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_ProcessData.st"
static void __AS__Action__Act_Background_ProcessData(void){
{

if(((((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)10)))&~Edge0002100000&1?((Edge0002100000=((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)10)))&1),1):((Edge0002100000=((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)10)))&1),0))&(((unsigned long)(unsigned char)usiBAIndex==(unsigned long)(unsigned char)0)))){
for((usiBAIndex=0);usiBAIndex<=49;usiBAIndex+=1){
if((((signed long)memcmp(((unsigned long)(&a_tyBoardDepartedInfo[usiBAIndex].tyData.sBoardId)),((unsigned long)(&"")),1)==(signed long)0))){
goto imp21_endfor1_0;
}
}imp21_endfor1_0:;
(usiPrevBAIndex=usiBAIndex);
}


(bTransportFinishedSnd=((((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)13))&~Edge0002100001&1?((Edge0002100001=(((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)13))&1),1):((Edge0002100001=(((signed long)fbSequenceDS.eMsgTypeSnd==(signed long)13))&1),0)));

if(bTransportFinishedSnd){
if((((unsigned long)(unsigned char)usiBAIndex>=(unsigned long)(unsigned char)50))){
(usiBAIndex=0);
}
__AS__MEMSET(((unsigned long)(&a_tyBoardDepartedInfo[usiBAIndex])),0,1552);
__AS__MEMCPY(((unsigned long)(&a_tyBoardDepartedInfo[usiBAIndex])),((unsigned long)(&tyBoardAvailableSnd)),1552);
(usiBAIndex=(usiBAIndex+1));
}

if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)5)))){
(eAct=0);
(usiPrevBAIndex=usiBAIndex);
}else if(((((signed long)eStatus==(signed long)0))&(((signed long)eStat==(signed long)0))&(((unsigned long)(unsigned char)usiPrevBAIndex!=(unsigned long)(unsigned char)usiBAIndex)))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyBoardDepartedInfoWr; unsigned char* zzRValue=(unsigned char*)a_tyBoardDepartedInfo; for(zzIndex=0; zzIndex<77600l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(eAct=5);
}


}imp21_else5_1:imp21_end5_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_Command.st"
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

fHermesAddOneMsgSend(((unsigned long)(&a_eMsgSend)),((unsigned long)(&udiMsgSendBffr)),35);
(tyCommandSnd.tyData.eCommand=tyCommandParam.a_eCommandSndQ[0]);
(tyCommandSnd.tyAvl.bCommand=1);
fHermesRmvOneCmdTyp(((unsigned long)(&tyCommandParam.a_eCommandSndQ)),((unsigned long)(&tyCommandParam.udiMsgCmdBffr)));
}
}
}

}imp15_else4_0:imp15_end4_0:imp15_else2_0:imp15_end2_0:imp15_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_TCPSend.st"
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
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,30);

}else if((((signed long)a_eMsgSend[0]==(signed long)6))){
fHermesFormNotification(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyNotificationSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,14);

}else if((((signed long)a_eMsgSend[0]==(signed long)7))){
fHermesFormBoardAvailable(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardAvailableSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,88);

}else if((((signed long)a_eMsgSend[0]==(signed long)8))){
fHermesFormRevokeBoardAvailable(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))));
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,8);

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
(udiStatus1=10110);

}else if((((signed long)a_eMsgSend[0]==(signed long)13))){
fHermesFormTransportFinished(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyTransportFinished);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,12);

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
fHermesFormBoardForecast(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyBoardForecastSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,50);

}else if((((signed long)a_eMsgSend[0]==(signed long)30))){
(eStatus1=3);
(udiStatus1=10142);

}else if((((signed long)a_eMsgSend[0]==(signed long)31))){
fHermesFormSendBoardInfo(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tySendBoardInfo);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,34);

}else if((((signed long)a_eMsgSend[0]==(signed long)35))){
fHermesFormCommand(((unsigned long)(&a_tyXMLTableDataSnd)),&((*(p_tyDTStructure))),&tyCommandSnd);
fTableConvertToXML(((unsigned long)(&sSnd)),((unsigned long)(&udiSndMsgLen)),65536,((unsigned long)(&a_tyXMLTableDataSnd)),((unsigned long)(&a_tyXMLTableDataSnd[0].sTitle)),((unsigned long)(&a_tyXMLTableDataSnd[0].sValue)),((unsigned long)(&a_tyXMLTableDataSnd[0].uiSize)),260,10);

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
__AS__MEMCPY((((unsigned long)(&a_sLogList[udiLogCntr-1]))+LEN(a_sLogList[udiLogCntr-1])),((unsigned long)(&"SND_TO_DS\r\n")),LEN("SND_TO_DS\r\n"));
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

}imp32_end5_0:imp32_else3_2:imp32_end3_0:imp32_else0_0:imp32_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_TCPCloseSvr.st"
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

}imp28_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_TCPCloseClnt.st"
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

}imp27_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_Stop.st"
static void __AS__Action__Act_Background_Stop(void){
{
if((bStop&~Edge0002600000&1?((Edge0002600000=bStop&1),1):((Edge0002600000=bStop&1),0))){

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

}imp26_else3_0:imp26_end3_0:imp26_else2_0:imp26_end2_0:imp26_else1_0:imp26_end1_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_Log.st"
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

}imp18_case2_1:imp18_endcase2_0:imp18_else1_0:imp18_end1_0:imp18_else0_0:imp18_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_Err.st"
static void __AS__Action__Act_Background_Err(void){
{
if((((unsigned long)(unsigned char)bTransporting==(unsigned long)(unsigned char)1))){
if((bStopTransport&((*(p_bInterruptSen))))){
(eStatus2=3);
(udiStatus2=10157);
}
}

}imp16_else1_0:imp16_end1_0:imp16_else0_0:imp16_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
(bConnected=0);
(bHandshakeDone=0);
(bUSRdy=0);
(bDSRdy=0);
(bTransporting=0);
(bStopTransport=0);

}}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_CombineErr.st"
static void __AS__Action__Act_CombineErr(void){
{

if(((((signed long)eStatus==(signed long)3))|(((signed long)eStatus1==(signed long)3))|(((signed long)eStatus2==(signed long)3))|(((signed long)eStatus3==(signed long)3)))){
(eMainStatus=3);
}else{
(eMainStatus=eStatus);
}

}imp33_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Alarm1.st"
static void __AS__Action__Act_Alarm1(void){
{

if(((((signed long)eStatus1==(signed long)3))&~Edge0000300000&1?((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),1):((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=1);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData1.bAlm=1);
(tyAlmData1.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Alarm2.st"
static void __AS__Action__Act_Alarm2(void){
{

if(((((signed long)eStatus2==(signed long)3))&~Edge0000400000&1?((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),1):((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.udiCode=udiStatus2);
(tyAlmData2.eSeverity=1);
(tyAlmData2.udiRunTime=(tyAlmData2.udiRunTime+1));
(tyAlmData2.bAlm=1);
(tyAlmData2.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Alarm3.st"
static void __AS__Action__Act_Alarm3(void){
{

if(((((signed long)eStatus3==(signed long)3))&~Edge0000500000&1?((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),1):((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData3.udiCode=udiStatus3);
(tyAlmData3.eSeverity=1);
(tyAlmData3.udiRunTime=(tyAlmData3.udiRunTime+1));
(tyAlmData3.bAlm=1);
(tyAlmData3.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Alarm4.st"
static void __AS__Action__Act_Alarm4(void){
{

if(((((unsigned long)(unsigned char)bConnected==(unsigned long)(unsigned char)0))&(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)1)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData4.udiCode=udiStatus4);
(tyAlmData4.eSeverity=2);
(tyAlmData4.udiRunTime=(tyAlmData4.udiRunTime+1));
(tyAlmData4.bWarning=1);
(tyAlmData4.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sDSHermesProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData4.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData4.udiCode>(unsigned long)10199)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData4.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData4.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)tyAlmData4.sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(((bConnected&(((unsigned long)tyAlmData4.udiCode!=(unsigned long)0)))|(((signed long)((*(p_eLinkMcParamDSCommMod)))==(signed long)0)))){

(tyAlmData4.udiCode=0);
(tyAlmData4.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData4.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyAlmData4.bWarning=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp6_else0_1:imp6_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Act_Background_NotificationSnd.st"
static void __AS__Action__Act_Background_NotificationSnd(void){
{
if((((signed long)a_eMsgSend[0]==(signed long)6))){
(bRstConnection=(fHermesNotificationRstConn(&tyNotificationSnd)|bRstConnection));

}

}imp20_else0_0:imp20_end0_0:;}
#line 49 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/DSHermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/DSHermes/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Hermes/DSHermes/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/DSHermes/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataBrdAvl'\\n\"");
__asm__(".ascii \"plcdata_const 'sSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'sRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyXMLTableDataSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'a_eMsgSend'\\n\"");
__asm__(".ascii \"plcdata_const 'tyMsgTypeRcv'\\n\"");
__asm__(".ascii \"plcdata_const 'tyBoardAvailableSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyBoardDepartedInfo'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyBoardDepartedInfoWr'\\n\"");
__asm__(".ascii \"plcdata_const 'tyBoardForecastSnd'\\n\"");
__asm__(".ascii \"plcdata_const 'tyQueryBoardInfo'\\n\"");
__asm__(".ascii \"plcdata_const 'a_sLogList'\\n\"");
__asm__(".ascii \"plcdata_const 'sInfoMcRdyMsg'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".previous");
