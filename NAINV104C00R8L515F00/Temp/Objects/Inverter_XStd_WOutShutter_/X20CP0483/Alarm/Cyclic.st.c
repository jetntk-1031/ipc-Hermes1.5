#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Alarm/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.st"
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

__AS__Action__Act_Background();
__AS__Action__Act_RstErr();
__AS__Action__Act_LinkAction();
__AS__Action__Act_Action();
__AS__Action__Act_Link();
__AS__Action__Act_Main();
__AS__Action__Act_Alarm();

}

}imp11_end0_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_tyLinkDIAlmData1=p_DIAlmData1);
(p_tyLinkDIAlmData2=p_DIAlmData2);
(p_tyLinkUsrMgmtAlmData=p_UsrMgmtAlmData);
(p_tyLinkUSSMEMAAlmData=p_USSMEMAAlmData);
(p_tyLinkDSSMEMAAlmData=p_DSSMEMAAlmData);
(p_tyLinkUSSMEMA2AlmData=p_USSMEMA2AlmData);
(p_tyLinkMcParamAlmData=p_McParamAlmData);
(p_tyLinkNtParamAlmData=p_NtParamAlmData);
(p_tyLinkProdRcpAlmData=p_ProdRcpAlmData);
(p_tyLinkAWAlmData=p_AWOpenAlmData);
(p_tyLinkAWAlmData1=p_AWOpenAlmData1);
(p_tyLinkAWAlmData2=p_AWOpenAlmData2);
(p_tyLinkAWAlmData3=p_AWOpenAlmData3);
(p_tyLinkMotorBrkAlmData=p_MotorBrkAlmData);
(p_tyLinkTimeAlmData=p_TimeAlmData);
(p_tyLinkTimeAlmData1=p_TimeAlmData1);
(p_tyLinkUsrFolderAlmData=p_UsrFolderAlmData);
(p_tyLinkLibVerAlmData=p_LibVerAlmData);
(p_tyLinkHWInfoAlmData=p_HWInfoAlmData);
(p_tyLinkConvAlmData=p_ConvAlmData);
(p_tyLinkMcAlmData=p_McAlmData);
(p_tyLinkMcAlmData1=p_McAlmData1);
(p_tyLinkPneuNoSenStopperAlmData=p_PneuNoSenStopperAlmData);
(p_tyLinkPneuNoSenClampAlmData=p_PneuNoSenClampAlmData);
(p_tyLinkOpsInvertAlmData=p_OpsInvertAlmData);
(p_tyLinkOpsInvertAlmData1=p_OpsInvertAlmData1);
(p_tyLinkHermesAlmData=p_HermesAlmData);
(p_tyLinkUSHermesAlmData=p_USHermesAlmData);
(p_tyLinkUSHermesAlmData1=p_USHermesAlmData1);
(p_tyLinkUSHermesAlmData2=p_USHermesAlmData2);
(p_tyLinkUSHermesAlmData3=p_USHermesAlmData3);
(p_tyLinkUSHermesAlmData4=p_USHermesAlmData4);
(p_tyLinkUSHermesAlmData5=p_USHermesAlmData5);
(p_tyLinkUSHermesInfoData=p_USHermesInfoData);
(p_tyLinkDSHermesAlmData=p_DSHermesAlmData);
(p_tyLinkDSHermesAlmData1=p_DSHermesAlmData1);
(p_tyLinkDSHermesAlmData2=p_DSHermesAlmData2);
(p_tyLinkDSHermesAlmData3=p_DSHermesAlmData3);
(p_tyLinkDSHermesAlmData4=p_DSHermesAlmData4);
(p_tyLinkDSHermesInfoData=p_DSHermesInfoData);
(p_tyLinkLFLeaderAlmData=p_LFLeaderAlmData);
(p_tyLinkLFFollowerAlmData=p_LFFollowerAlmData);
(p_tyLinkLFFollowerInfoData=p_LFFollowerInfoData);
(p_tyLinkLFFollowerInfoData1=p_LFFollowerInfoData1);
(p_tyLinkFollower1AlmData=p_Follower1AlmData);
(p_tyLinkFollower1InfoData=p_Follower1InfoData);
(p_tyLinkFollower1InfoData1=p_Follower1InfoData1);
(p_tyLinkLCSMngRcpAlmData=p_LCSMngRcpAlmData);
(p_tyLinkLCSLFAlmData=p_LCSLFAlmData);
(p_tyLinkLCSLFInfoData=p_LCSLFInfoData);
(p_tyLinkMpProdRcpAlmData=p_MpProdRcpAlmData);
(p_tyLinkPneu2SenInShutterAlmData=p_Pneu2SenInShutterAlmData);
(p_tyLinkPneu2SenOutShuttrAlmData=p_Pneu2SenOutShutterAlmData);
(p_tyLinkPneu2SenClamp1AlmData=p_Pneu2SenClamp1AlmData);
(p_tyLinkPneu2SenClamp2AlmData=p_Pneu2SenClamp2AlmData);
(p_tyLinkPneu2SenClamp3AlmData=p_Pneu2SenClamp3AlmData);



(p_udiRstErr=p_RstErrReset);
(p_eAct=p_StartupAlarmAct);
(p_dtCurrDT=p_TimeCurrDT);
(p_udiFileKeepDay=p_NtParamAlmFileKeepDay);
(p_sProgNm=p_NtParamAlmProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_bStartupUISettingsLoadDone=p_StartupUISettingsLoadDone);



}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{


(fbDlyTmr.IN=1);;TON(&fbDlyTmr);
if(fbDlyTmr.Q){
(fbDeleteLogTmr.IN=1);;TON(&fbDeleteLogTmr);
if((fbDeleteLogTmr.Q&(((signed long)eStatus!=(signed long)2)))){
((*(p_eAct))=2);
if(((((signed long)eStat==(signed long)2))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(fbDlyTmr.IN=0);;TON(&fbDlyTmr);
(fbDeleteLogTmr.IN=0);;TON(&fbDeleteLogTmr);
}
}
}

}imp8_else2_0:imp8_end2_0:imp8_else1_0:imp8_end1_0:imp8_else0_0:imp8_end0_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_Link.st"
static void __AS__Action__Act_Link(void){
{

((*(pa_tyAlmData))[2-1]=*(struct tyAlmDat*)&((*(p_tyLinkDIAlmData1))));
((*(pa_tyAlmData))[3-1]=*(struct tyAlmDat*)&((*(p_tyLinkDIAlmData2))));
((*(pa_tyAlmData))[4-1]=*(struct tyAlmDat*)&((*(p_tyLinkUsrMgmtAlmData))));
((*(pa_tyAlmData))[5-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSSMEMAAlmData))));
((*(pa_tyAlmData))[6-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSSMEMAAlmData))));
((*(pa_tyAlmData))[7-1]=*(struct tyAlmDat*)&((*(p_tyLinkMcParamAlmData))));
((*(pa_tyAlmData))[8-1]=*(struct tyAlmDat*)&((*(p_tyLinkNtParamAlmData))));
((*(pa_tyAlmData))[9-1]=*(struct tyAlmDat*)&((*(p_tyLinkProdRcpAlmData))));
((*(pa_tyAlmData))[10-1]=*(struct tyAlmDat*)&((*(p_tyLinkAWAlmData))));
((*(pa_tyAlmData))[11-1]=*(struct tyAlmDat*)&((*(p_tyLinkAWAlmData1))));
((*(pa_tyAlmData))[12-1]=*(struct tyAlmDat*)&((*(p_tyLinkAWAlmData2))));
((*(pa_tyAlmData))[13-1]=*(struct tyAlmDat*)&((*(p_tyLinkAWAlmData3))));
((*(pa_tyAlmData))[18-1]=*(struct tyAlmDat*)&((*(p_tyLinkTimeAlmData))));
((*(pa_tyAlmData))[19-1]=*(struct tyAlmDat*)&((*(p_tyLinkTimeAlmData1))));
((*(pa_tyAlmData))[20-1]=*(struct tyAlmDat*)&((*(p_tyLinkUsrFolderAlmData))));
((*(pa_tyAlmData))[21-1]=*(struct tyAlmDat*)&((*(p_tyLinkLibVerAlmData))));
((*(pa_tyAlmData))[22-1]=*(struct tyAlmDat*)&((*(p_tyLinkHWInfoAlmData))));
((*(pa_tyAlmData))[23-1]=*(struct tyAlmDat*)&((*(p_tyLinkConvAlmData))));
((*(pa_tyAlmData))[24-1]=*(struct tyAlmDat*)&((*(p_tyLinkMcAlmData))));
((*(pa_tyAlmData))[25-1]=*(struct tyAlmDat*)&((*(p_tyLinkMcAlmData1))));
((*(pa_tyAlmData))[26-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneuNoSenStopperAlmData))));
((*(pa_tyAlmData))[28-1]=*(struct tyAlmDat*)&((*(p_tyLinkOpsInvertAlmData))));
((*(pa_tyAlmData))[29-1]=*(struct tyAlmDat*)&((*(p_tyLinkHermesAlmData))));
((*(pa_tyAlmData))[30-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesAlmData))));
((*(pa_tyAlmData))[31-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesAlmData1))));
((*(pa_tyAlmData))[32-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesAlmData2))));
((*(pa_tyAlmData))[33-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesAlmData3))));
((*(pa_tyAlmData))[34-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesAlmData4))));
((*(pa_tyAlmData))[35-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesAlmData5))));
((*(pa_tyAlmData))[36-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSHermesInfoData))));
((*(pa_tyAlmData))[37-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSHermesAlmData))));
((*(pa_tyAlmData))[38-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSHermesAlmData1))));
((*(pa_tyAlmData))[39-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSHermesAlmData2))));
((*(pa_tyAlmData))[40-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSHermesAlmData3))));
((*(pa_tyAlmData))[41-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSHermesAlmData4))));
((*(pa_tyAlmData))[42-1]=*(struct tyAlmDat*)&((*(p_tyLinkLFLeaderAlmData))));
((*(pa_tyAlmData))[43-1]=*(struct tyAlmDat*)&((*(p_tyLinkLFFollowerAlmData))));
((*(pa_tyAlmData))[44-1]=*(struct tyAlmDat*)&((*(p_tyLinkLFFollowerInfoData))));
((*(pa_tyAlmData))[45-1]=*(struct tyAlmDat*)&((*(p_tyLinkLFFollowerInfoData1))));
((*(pa_tyAlmData))[46-1]=*(struct tyAlmDat*)&((*(p_tyLinkFollower1AlmData))));
((*(pa_tyAlmData))[47-1]=*(struct tyAlmDat*)&((*(p_tyLinkFollower1InfoData))));
((*(pa_tyAlmData))[48-1]=*(struct tyAlmDat*)&((*(p_tyLinkFollower1InfoData1))));
((*(pa_tyAlmData))[49-1]=*(struct tyAlmDat*)&((*(p_tyLinkLCSMngRcpAlmData))));
((*(pa_tyAlmData))[50-1]=*(struct tyAlmDat*)&((*(p_tyLinkLCSLFAlmData))));
((*(pa_tyAlmData))[51-1]=*(struct tyAlmDat*)&((*(p_tyLinkLCSLFInfoData))));
((*(pa_tyAlmData))[52-1]=*(struct tyAlmDat*)&((*(p_tyLinkMpProdRcpAlmData))));
((*(pa_tyAlmData))[53-1]=*(struct tyAlmDat*)&((*(p_tyLinkMotorBrkAlmData))));
((*(pa_tyAlmData))[54-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneuNoSenClampAlmData))));
((*(pa_tyAlmData))[55-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneu2SenInShutterAlmData))));
((*(pa_tyAlmData))[56-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneu2SenOutShuttrAlmData))));
((*(pa_tyAlmData))[57-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneu2SenClamp1AlmData))));
((*(pa_tyAlmData))[58-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneu2SenClamp2AlmData))));
((*(pa_tyAlmData))[59-1]=*(struct tyAlmDat*)&((*(p_tyLinkPneu2SenClamp3AlmData))));
((*(pa_tyAlmData))[60-1]=*(struct tyAlmDat*)&((*(p_tyLinkUSSMEMA2AlmData))));
((*(pa_tyAlmData))[61-1]=*(struct tyAlmDat*)&((*(p_tyLinkOpsInvertAlmData1))));
((*(pa_tyAlmData))[62-1]=*(struct tyAlmDat*)&((*(p_tyLinkDSHermesInfoData))));
}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}


if((((__AS__STRING_CMP(a_tyWarningCurrList[1-1].sMsg,"")!=0))&(((unsigned long)((*(p_tyLinkLibVerAlmData)).udiCode)==(unsigned long)0)))){

for((udi2=1);udi2<=(udiWarningMax-1);udi2+=1){
(udiRecorded1=udiRecorded[udi2-1]);
if(((((signed long)((*(pa_tyAlmData))[udiRecorded1-1].eSeverity)==(signed long)0))&(((unsigned long)udiRecorded1!=(unsigned long)0)))){
(bRstWarning=1);
goto imp10_endfor2_0;
}else{
(bRstWarning=0);
}

}imp10_endfor2_0:;
}else{
(bRstWarning=0);
}


}imp10_end1_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiCurrMax=((unsigned long)(&c_udiAlarmCurrMax)));
(p_udiHistoryMax=((unsigned long)(&c_udiAlarmHistoryMax)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_dtCurrDT=((unsigned long)(&dtCurrDT)));
(pa_tyAlmData=((unsigned long)(&a_tyAlmData)));
(p_udiFileKeepDay=((unsigned long)(&udiFileKeepDay)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));

}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate1.sDevice; plcstring* zzRValue=(plcstring*)"F"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate1.sDirName; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate1.bEn=0);;fbDirCreate(&fbDirCreate1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate2.sDevice; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate2.sDirName; plcstring* zzRValue=(plcstring*)"Alarm"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate2.bEn=0);;fbDirCreate(&fbDirCreate2);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sDevice; plcstring* zzRValue=(plcstring*)"Alarm"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sDevice; plcstring* zzRValue=(plcstring*)"Alarm"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sPath; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileOldDel1.sKeyword; plcstring* zzRValue=(plcstring*)"ALARM_"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sDevice; plcstring* zzRValue=(plcstring*)"Alarm"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sFile; plcstring* zzRValue=(plcstring*)"History.dat"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead1.udiOffset=0);
(fbFileRead1.p_Dest=((unsigned long)(&a_tyHistoryList)));
(fbFileRead1.udiLen=32400);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sDevice; plcstring* zzRValue=(plcstring*)"Alarm"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sFile; plcstring* zzRValue=(plcstring*)"History.dat"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite1.udiOffset=0);
(fbFileWrite1.p_Src=((unsigned long)(&a_tyHistoryList)));
(fbFileWrite1.udiLen=32400);
(fbFileWrite1.udiOption=0);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);

}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)3))&bRstErr)){
((*(p_eAct))=0);
(eStat=0);
}


if(((((signed long)eStatus==(signed long)1))&(((signed long)((*(p_eAct)))==(signed long)0)))){
(eStat=0);
}


if((((signed long)eStatus==(signed long)0))){
(eStat=((*(p_eAct))));
}

}imp1_else2_0:imp1_end2_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_Main.st"
static void __AS__Action__Act_Main(void){
{

switch(eStat){

case 0:{
if((((signed long)eStatus!=(signed long)0))){

(fbDirCreate1.bEn=0);;fbDirCreate(&fbDirCreate1);
(fbDirCreate2.bEn=0);;fbDirCreate(&fbDirCreate2);
(fbFileOldDel1.bEn=0);;fbFileOldDel(&fbFileOldDel1);
(fbFileRead1.bEn=0);;fbFileFullRead(&fbFileRead1);
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
(fbFileWrite1.bEn=0);;fbFileFullWrite(&fbFileWrite1);
(usiStep=0);

(bHistoryFileNotFound=0);
(udiWriteLogCntr=1);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
(eStatus=1);
}else if((((unsigned long)fbDirCreate2.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbDirCreate2.udiStatus==(unsigned long)1908))){
(udiStatus=10001);
}else{
(udiStatus=fbDirCreate2.udiStatus);
}
}

}break;}

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileOldDel1.dtDTNow=((*(p_dtCurrDT))));
(fbFileOldDel1.udiFileKeepDay=((*(p_udiFileKeepDay))));
(fbFileOldDel1.bEn=1);;fbFileOldDel(&fbFileOldDel1);
if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileOldDel1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1910))){
(udiStatus=10002);
}else if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1911))){
(udiStatus=10003);
}else if((((unsigned long)fbFileOldDel1.udiStatus==(unsigned long)1912))){
(udiStatus=10004);
}else{
(udiStatus=fbFileOldDel1.udiStatus);
}
}

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileRead1.bEn=1);;fbFileFullRead(&fbFileRead1);
if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileRead1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1900))){
(udiStatus=10005);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1902))){
(udiStatus=10006);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1904))){
(udiStatus=10007);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bHistoryFileNotFound=1);
}else{
(udiStatus=fbFileRead1.udiStatus);
}
}

}

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileWrite1.bEn=1);;fbFileFullWrite(&fbFileWrite1);
if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10008);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10009);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10010);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10011);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10012);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}

}break;case 5:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(dtCurrDTTemp=((*(p_dtCurrDT))));
dt2str(dtCurrDTTemp,fbFileAppend1.sFile,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)MID(fbFileAppend1.sFile,10,4); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT("ALARM_",fbFileAppend1.sFile); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT(fbFileAppend1.sFile,".dat"); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileAppend1.p_Src=((unsigned long)(&a_sLogList[udiWriteLogCntr-1])));
(fbFileAppend1.udiLen=LEN(a_sLogList[udiWriteLogCntr-1]));

(fbFileAppend1.bEn=1);;fbFileFullAppend(&fbFileAppend1);
if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)0))){
if((((unsigned long)udiWriteLogCntr>=(unsigned long)udiLogCntr))){
(eStatus=1);
}else{
(udiWriteLogCntr=(udiWriteLogCntr+1));
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);
}

}else if((((unsigned long)fbFileAppend1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1900))){
(udiStatus=10013);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1901))){
(udiStatus=10014);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1913))){
(udiStatus=10015);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1903))){
(udiStatus=10016);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1904))){
(udiStatus=10017);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1914))){
(udiStatus=10018);
}else{
(udiStatus=fbFileAppend1.udiStatus);
}
}

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(dtCurrDTTemp=((*(p_dtCurrDT))));
dt2str(dtCurrDTTemp,fbFileAppend1.sFile,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)MID(fbFileAppend1.sFile,10,4); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT("ALARM_",fbFileAppend1.sFile); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileAppend1.sFile; plcstring* zzRValue=(plcstring*)CONCAT(fbFileAppend1.sFile,".dat"); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileAppend1.p_Src=((unsigned long)(&a_sLogList[udiWriteLogCntr-1])));
(fbFileAppend1.udiLen=LEN(a_sLogList[udiWriteLogCntr-1]));

(fbFileAppend1.bEn=1);;fbFileFullAppend(&fbFileAppend1);
(fbFileWrite1.bEn=1);;fbFileFullWrite(&fbFileWrite1);

if(((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)0))&(((unsigned long)udiWriteLogCntr>=(unsigned long)udiLogCntr))&(((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0)))){
(eStatus=1);

}else if(((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)0))&(((unsigned long)udiWriteLogCntr<(unsigned long)udiLogCntr)))){
(udiWriteLogCntr=(udiWriteLogCntr+1));
(fbFileAppend1.bEn=0);;fbFileFullAppend(&fbFileAppend1);

}else if(((((unsigned long)fbFileWrite1.udiStatus>(unsigned long)0))&(((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534)))){
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10019);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10020);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10021);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10022);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10023);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}

}else if(((((unsigned long)fbFileAppend1.udiStatus>(unsigned long)0))&(((unsigned long)fbFileAppend1.udiStatus<(unsigned long)65534)))){
(eStatus=3);

if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1900))){
(udiStatus=10024);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1901))){
(udiStatus=10025);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1913))){
(udiStatus=10026);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1903))){
(udiStatus=10027);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1904))){
(udiStatus=10028);
}else if((((unsigned long)fbFileAppend1.udiStatus==(unsigned long)1914))){
(udiStatus=10029);
}else{
(udiStatus=fbFileAppend1.udiStatus);
}
}

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

__AS__MEMSET(((unsigned long)(&a_tyHistoryList)),0,32400);

(fbFileWrite1.bEn=1);;fbFileFullWrite(&fbFileWrite1);
if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10030);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10031);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10032);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10033);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10034);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bAlarmLog=1);
(eStatus=1);

}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bAlarmLog=0);
(eStatus=1);

}

}break;}

}imp9_case0_9:imp9_endcase0_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
((*(pa_tyAlmData))[1-1]=*(struct tyAlmDat*)&tyAlmData);

if((((unsigned long)(unsigned char)bRstErr==(unsigned long)(unsigned char)1))){

(bErr=0);
(bWarning=0);


__AS__MEMSET(((unsigned long)(&a_tyWarningCurrList)),0,83200);
(udiWarningMax=1);

__AS__MEMSET(((unsigned long)(&a_tyCurrList)),0,83200);
__AS__MEMSET(((unsigned long)(&a_sRecoveryList)),0,40200);
__AS__MEMSET(((unsigned long)(&a_udiRecoveryList)),0,800);


(udiAlmCntr=0);

(bAlmUpdt=0);

}

if((((unsigned long)(unsigned char)bRstWarning==(unsigned long)(unsigned char)1))){

if(((((unsigned long)(unsigned char)bErr==(unsigned long)(unsigned char)0))&(((unsigned long)(unsigned char)bWarning==(unsigned long)(unsigned char)1)))){

__AS__MEMSET(((unsigned long)(&a_tyWarningCurrList)),0,83200);
(udiWarningMax=1);

__AS__MEMSET(((unsigned long)(&a_tyCurrList)),0,83200);
__AS__MEMSET(((unsigned long)(&a_sRecoveryList)),0,40200);
__AS__MEMSET(((unsigned long)(&a_udiRecoveryList)),0,800);
(udiAlmCntr=0);
(bWarning=0);
}

(bAlmUpdt=0);

}


if(((((unsigned long)(unsigned char)bAlarmLog==(unsigned long)(unsigned char)1))&((*(p_bStartupUISettingsLoadDone))))){

if(((((unsigned long)(unsigned char)bAlmUpdt==(unsigned long)(unsigned char)0))|(((signed long)eStatus==(signed long)3)))){


(bInfo=0);
(bInfoLF=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(iInfoCntr=0);

for((udi=1);udi<=((*(p_udiCurrMax)));udi+=1){


if(((((unsigned long)((*(pa_tyAlmData))[udi-1].udiRunTime)!=(unsigned long)a_udiRunTimeOld[udi-1]))&(((unsigned long)((*(pa_tyAlmData))[udi-1].udiCode)!=(unsigned long)0))&(((signed long)((*(pa_tyAlmData))[udi-1].eSeverity)==(signed long)1)))){


(a_udiRunTimeOld[udi-1]=((*(pa_tyAlmData))[udi-1].udiRunTime));

(bAlmUpdt=1);

(udiAlmCntr=(udiAlmCntr+1));
if((((unsigned long)udiAlmCntr>(unsigned long)((*(p_udiCurrMax)))))){
(udiAlmCntr=((*(p_udiCurrMax))));
}

(udiLogCntr=(udiLogCntr+1));
if((((unsigned long)udiLogCntr>(unsigned long)((*(p_udiCurrMax)))))){
(udiLogCntr=((*(p_udiCurrMax))));
}

fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
(udiErrorCode=((((*(pa_tyAlmData))[udi-1].udiCode)-10000)+((*(pa_tyAlmData))[udi-1].udiModuleNum)));



(a_tyCurrList[udiAlmCntr-1].eSeverity=((*(pa_tyAlmData))[udi-1].eSeverity));
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyCurrList[udiAlmCntr-1].sProgNm; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sProgNm); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyCurrList[udiAlmCntr-1].sDT; plcstring* zzRValue=(plcstring*)sDT; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


(a_tyCurrList[udiAlmCntr-1].udiErrorCode=udiErrorCode);
(a_tyCurrList[udiAlmCntr-1].bAlm=((*(pa_tyAlmData))[udi-1].bAlm));


{int zzIndex; plcstring* zzLValue=(plcstring*)a_sRecoveryList[udiAlmCntr-1]; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sRcyMsg); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_udiRecoveryList[udiAlmCntr-1]=udiErrorCode);


memmove(((unsigned long)(&a_tyHistoryList[2-1])),((unsigned long)(&a_tyHistoryList[1-1])),(108*(((*(p_udiHistoryMax)))-1)));

{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHistoryList[1-1].sProgNm; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sProgNm); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHistoryList[1-1].sDT; plcstring* zzRValue=(plcstring*)sDT; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_tyHistoryList[1-1].udiModErrCode=((*(pa_tyAlmData))[udi-1].udiCode));
(a_tyHistoryList[1-1].udiErrorCode=udiErrorCode);



fLogAlmDispMsg(((unsigned long)(&sAlmMsg)),((*(p_dtCurrDT))),((*(pa_tyAlmData))[udi-1].sProgNm),((*(pa_tyAlmData))[udi-1].udiCode),((*(pa_tyAlmData))[udi-1].sAlmMsg));
{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLogList[udiLogCntr-1]; plcstring* zzRValue=(plcstring*)sAlmMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLogList[udiLogCntr-1]; plcstring* zzRValue=(plcstring*)CONCAT(a_sLogList[udiLogCntr-1],"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if((((signed long)((*(pa_tyAlmData))[udi-1].eSeverity)==(signed long)1))){
(bErr=1);
}



}else if(((((signed long)((*(pa_tyAlmData))[udi-1].eSeverity)==(signed long)2))&(((unsigned long)((*(pa_tyAlmData))[udi-1].udiCode)!=(unsigned long)0)))){



__AS__MEMSET(((unsigned long)(&sWarningCompareMsg)),0,301);

{int zzIndex; plcstring* zzLValue=(plcstring*)sWarningCompareMsg; plcstring* zzRValue=(plcstring*)CONCAT(sWarningCompareMsg,((*(pa_tyAlmData))[udi-1].sProgNm)); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sWarningCompareMsg; plcstring* zzRValue=(plcstring*)CONCAT(sWarningCompareMsg," | "); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
udint2str(((*(pa_tyAlmData))[udi-1].udiCode),sWarningID,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)sWarningCompareMsg; plcstring* zzRValue=(plcstring*)CONCAT(sWarningCompareMsg,sWarningID); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sWarningCompareMsg; plcstring* zzRValue=(plcstring*)CONCAT(sWarningCompareMsg," | "); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sWarningCompareMsg; plcstring* zzRValue=(plcstring*)CONCAT(sWarningCompareMsg,((*(pa_tyAlmData))[udi-1].sAlmMsg)); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


for((udi1=0);udi1<=udiWarningMax;udi1+=1){
(WarningListOccur=(((signed long)memcmp(((unsigned long)(&sWarningCompareMsg)),((unsigned long)(&a_tyWarningCurrList[udi1-1].sMsg)),301)==(signed long)0)));

if(WarningListOccur){
goto imp3_endfor10_0;
}

}imp3_endfor10_0:;


if((((unsigned long)(unsigned char)WarningListOccur==(unsigned long)(unsigned char)0))){

(bAlmUpdt=1);
(udiWarningMax=(udiWarningMax+1));

(udiAlmCntr=(udiAlmCntr+1));

if((((unsigned long)udiAlmCntr>(unsigned long)((*(p_udiCurrMax)))))){
(udiAlmCntr=((*(p_udiCurrMax))));
}

(udiRecorded[(udiWarningMax-1)-1]=udi);

(udiLogCntr=(udiLogCntr+1));

if((((unsigned long)udiLogCntr>(unsigned long)((*(p_udiCurrMax)))))){
(udiLogCntr=((*(p_udiCurrMax))));
}


{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyWarningCurrList[(udiWarningMax-1)-1].sMsg; plcstring* zzRValue=(plcstring*)sWarningCompareMsg; for(zzIndex=0; zzIndex<300l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


fLogDTConvert(((unsigned long)(&sDT)),((*(p_dtCurrDT))));
(udiErrorCode=((((*(pa_tyAlmData))[udi-1].udiCode)-10000)+((*(pa_tyAlmData))[udi-1].udiModuleNum)));


(a_tyCurrList[udiAlmCntr-1].eSeverity=((*(pa_tyAlmData))[udi-1].eSeverity));
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyCurrList[udiAlmCntr-1].sProgNm; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sProgNm); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyCurrList[udiAlmCntr-1].sDT; plcstring* zzRValue=(plcstring*)sDT; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_tyCurrList[udiAlmCntr-1].udiModErrCode=((*(pa_tyAlmData))[udi-1].udiCode));


(a_tyCurrList[udiAlmCntr-1].udiErrorCode=udiErrorCode);
(a_tyCurrList[udiAlmCntr-1].bWarning=((*(pa_tyAlmData))[udi-1].bWarning));


{int zzIndex; plcstring* zzLValue=(plcstring*)a_sRecoveryList[udiAlmCntr-1]; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sRcyMsg); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_udiRecoveryList[udiAlmCntr-1]=udiErrorCode);


memmove(((unsigned long)(&a_tyHistoryList[2-1])),((unsigned long)(&a_tyHistoryList[1-1])),(108*(((*(p_udiHistoryMax)))-1)));

{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHistoryList[1-1].sProgNm; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sProgNm); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)a_tyHistoryList[1-1].sDT; plcstring* zzRValue=(plcstring*)sDT; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(a_tyHistoryList[1-1].udiModErrCode=((*(pa_tyAlmData))[udi-1].udiCode));
(a_tyHistoryList[1-1].udiErrorCode=udiErrorCode);



fLogAlmDispMsg(((unsigned long)(&sWarningMsg)),((*(p_dtCurrDT))),((*(pa_tyAlmData))[udi-1].sProgNm),((*(pa_tyAlmData))[udi-1].udiCode),((*(pa_tyAlmData))[udi-1].sAlmMsg));

{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLogList[udiLogCntr-1]; plcstring* zzRValue=(plcstring*)sWarningMsg; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLogList[udiLogCntr-1]; plcstring* zzRValue=(plcstring*)CONCAT(a_sLogList[udiLogCntr-1],"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bWarning=1);

}



}else if(((((unsigned long)((*(pa_tyAlmData))[udi-1].udiCode)!=(unsigned long)0))&(((signed long)((*(pa_tyAlmData))[udi-1].eSeverity)==(signed long)3)))){

(iInfoCntr=(iInfoCntr+1));

if((((signed long)(signed long)(short)iInfoCntr==(signed long)(signed long)(short)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMsg; plcstring* zzRValue=(plcstring*)((*(pa_tyAlmData))[udi-1].sAlmMsg); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if((((__AS__STRING_CMP(((*(pa_tyAlmData))[udi-1].sProgNm),"Follower")==0))&((__AS__STRING_CMP(((*(pa_tyAlmData))[udi-1].sAlmMsg),"")!=0)))){

(bInfoLF=1);
(bInfo=1);

}else{
(bInfoLF=0);
(bInfo=1);
}


}else if((((signed long)(signed long)(short)iInfoCntr==(signed long)(signed long)(short)2))){
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMsg,"\r\n\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)sInfoMsg; plcstring* zzRValue=(plcstring*)CONCAT(sInfoMsg,((*(pa_tyAlmData))[udi-1].sAlmMsg)); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}

}imp3_endfor5_0:;

}else{

((*(p_eAct))=6);
if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)6)))){
((*(p_eAct))=0);
(bAlmUpdt=0);
(udiLogCntr=0);
}

}

}

}imp3_else17_0:imp3_end17_0:imp3_end4_0:imp3_else3_0:imp3_end3_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sAlarmProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Alarm/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Alarm/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/Alarm/Alarm/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/Alarm/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'a_tyCurrList'\\n\"");
__asm__(".ascii \"plcdata_const 'a_sRecoveryList'\\n\"");
__asm__(".ascii \"plcdata_const 'a_udiRecoveryList'\\n\"");
__asm__(".ascii \"plcdata_const 'sWarningCompareMsg'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyWarningCurrList'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyHistoryList'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiAlarmCurrMax'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiAlarmHistoryMax'\\n\"");
__asm__(".previous");
