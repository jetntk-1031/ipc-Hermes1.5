#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LCS/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.st"
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

__AS__Action__Act_LinkEn();

if(((((unsigned long)(unsigned char)((*(p_bPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0)))){
__AS__Action__Act_Link();
__AS__Action__Act_Background();
}else{
__AS__Action__Act_Main_Disable();

(tyTagNm.udiStatus=10000);
}

}

}imp9_end2_0:imp9_end0_0:;}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);
(p_bLinkNtParamLCSLFPrep=p_NtParamLCSLFPrep);
(p_bLinkNtParamLCSManageRcpPrep=p_NtParamLCSManageRcpPrep);
(p_bLinkNtParamLCSReqRcpPrep=p_NtParamLCSReqRcpPrep);
(p_bLinkNtParamLCSLiveDatPrep=p_NtParamLCSLiveDatPrep);
(p_bLinkMcParamLCSLFEn=p_McParamLCSLFEn);
(p_bLinkMcParamLCSManageRcpEn=p_McParamLCSManageRcpEn);
(p_bLinkMcParamLCSReqRcpEn=p_McParamLCSReqRcpEn);
(p_bLinkMcParamLCSLiveDatEn=p_McParamLCSLiveDatEn);
(p_tyLinkUpdtProdRcp=p_Follower1UpdtProdRcp);

(p_bLinkConvHvBrd=p_OpsInvertHvBrd);
(p_tyLinkAlarmCurrList=p_AlarmCurrList);


(p_eLCSMngRcp_PLCStat=p_LCSMngRcpStat);
(p_udiLCSMngRcp_PLCStatus=p_LCSMngRcp_PLCStatus);
(p_iLCSMngRcp_PLCIdxAct=p_LCSMngRcp_PLCIdxAct);
(p_iLCSMngRcp_PLCIdxStat=p_LCSMngRcp_PLCIdxStat);
(p_tyLCSMngRcp_PLCProdRcpInfo=p_LCSMngRcp_PLCProdRcpInfo);
(p_eLCSLF_PLCStat=p_LCSLFStat);
(p_udiLCSLF_PLCStatus=p_LCSLF_PLCStatus);
(p_bLCSMngRcpChkLmt=p_LCSMngRcpChkLmt);
(p_bLCSLFChkLmt=p_LCSLFChkLmt);
(p_bOpsRun=p_OpsRun);
(p_bError=p_AlarmErr);
(p_bWarning=p_AlarmWarning);
(p_bInfo=p_AlarmInfo);
(p_bUIManual=p_UIUIMnlMod);
(p_tyProdRcpCurrRcp=p_Follower1UpdtProdRcp);
(p_tyNtParamCurr=p_NtParamCurr);
(p_sProgNm=p_NtParamLCSProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);



}}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{

((*(p_bPrep))=(((*(p_bLinkNtParamLCSLFPrep)))|((*(p_bLinkNtParamLCSManageRcpPrep)))|((*(p_bLinkNtParamLCSReqRcpPrep)))|((*(p_bLinkNtParamLCSLiveDatPrep)))));
((*(p_bEn))=(((*(p_bLinkMcParamLCSLFEn)))|((*(p_bLinkMcParamLCSManageRcpEn)))|((*(p_bLinkMcParamLCSReqRcpEn)))|((*(p_bLinkMcParamLCSLiveDatEn)))));
((*(p_bDis))=((*(p_bLinkStartupRun))));

}}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_Link.st"
static void __AS__Action__Act_Link(void){
{

if((((*(p_bLCSMngRcpChkLmt)))|((*(p_bLCSLFChkLmt))))){

if(((__AS__STRING_CMP(tyTagNm.tyProdRcpInfo.sRcpNm,"")==0))){

(bChkLmtOK=0);
(bChkLmtNG=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)sAddMsg; plcstring* zzRValue=(plcstring*)"Recipe Name Empty "; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((signed long)tyTagNm.tyProdRcpInfo.diWidthInUM<(signed long)((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMin)))){

(bChkLmtOK=0);
(bChkLmtNG=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)sAddMsg; plcstring* zzRValue=(plcstring*)"Width Lower Limit "; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((signed long)tyTagNm.tyProdRcpInfo.diWidthInUM>(signed long)((*(p_tyNtParamCurr)).tyProdRcpWidthLmt.diMax)))){

(bChkLmtOK=0);
(bChkLmtNG=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)sAddMsg; plcstring* zzRValue=(plcstring*)"Width Upper Limit "; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((unsigned long)(unsigned char)tyTagNm.tyProdRcpInfo.usiMcMod<(unsigned long)(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMin)))){

(bChkLmtOK=0);
(bChkLmtNG=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)sAddMsg; plcstring* zzRValue=(plcstring*)"Machine Mode Lower Limit "; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if((((unsigned long)(unsigned char)tyTagNm.tyProdRcpInfo.usiMcMod>(unsigned long)(unsigned char)((*(p_tyNtParamCurr)).tyProdRcpMcModLmt.diMax)))){

(bChkLmtOK=0);
(bChkLmtNG=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)sAddMsg; plcstring* zzRValue=(plcstring*)"Machine Mode Upper Limit "; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{

(bChkLmtOK=1);
(bChkLmtNG=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sAddMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}else{

(bChkLmtOK=0);
(bChkLmtNG=0);

}


(tyTagNm.bMngRcpEn=(((*(p_bLinkNtParamLCSManageRcpPrep)))&((*(p_bLinkMcParamLCSManageRcpEn)))));
(tyTagNm.bLFEn=(((*(p_bLinkNtParamLCSLFPrep)))&((*(p_bLinkMcParamLCSLFEn)))));
(tyTagNm.bLiveData=(((*(p_bLinkNtParamLCSLiveDatPrep)))&((*(p_bLinkMcParamLCSLiveDatEn)))));
(tyTagNm.usiBrdStatus=(unsigned char)(((*(p_bLinkConvHvBrd)))&1));


if((((signed long)tyTagNm.eAct==(signed long)9))){

(bLFRun=1);
(bMngRcpRun=0);

}








else if(((((signed long)tyTagNm.eAct==(signed long)1))|(((signed long)tyTagNm.eAct==(signed long)2))|(((signed long)tyTagNm.eAct==(signed long)3))|(((signed long)tyTagNm.eAct==(signed long)4))|(((signed long)tyTagNm.eAct==(signed long)5))|(((signed long)tyTagNm.eAct==(signed long)6))|(((signed long)tyTagNm.eAct==(signed long)7))|(((signed long)tyTagNm.eAct==(signed long)8))|(((signed long)tyTagNm.eAct==(signed long)10))|(((signed long)tyTagNm.eAct==(signed long)11)))){

(bLFRun=0);
(bMngRcpRun=1);

}else if((((signed long)tyTagNm.eAct==(signed long)0))){

(bLFRun=0);
(bMngRcpRun=0);

}

if((((unsigned long)(unsigned char)bLFRun==(unsigned long)(unsigned char)1))){
(eLCSLF_LCSAct=tyTagNm.eAct);
(tyLCSLF_LCSProdRcpInfo=*(struct tyProdRcpParam*)&tyTagNm.tyProdRcpInfo);


{int zzIndex; plcstring* zzLValue=(plcstring*)sLastModifiedTemp; plcstring* zzRValue=(plcstring*)CONCAT("DT#",tyTagNm.sLastModified); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyLCSLF_LCSProdRcpInfo.dtLastModified=str2dt(sLastModifiedTemp));

(tyTagNm.eStat=((*(p_eLCSLF_PLCStat))));
(tyTagNm.udiStatus=((*(p_udiLCSLF_PLCStatus))));

if(((((unsigned long)tyTagNm.udiStatus>(unsigned long)0))&(((unsigned long)tyTagNm.udiStatus<(unsigned long)65534)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sErrMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyTagNm.udiStatus-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)tyTagNm.udiStatus==(unsigned long)10010))|(((unsigned long)tyTagNm.udiStatus==(unsigned long)10011)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sErrMsg; plcstring* zzRValue=(plcstring*)CONCAT(sAddMsg,tyTagNm.sErrMsg); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}

}else if((((unsigned long)(unsigned char)bMngRcpRun==(unsigned long)(unsigned char)1))){
(eLCSMngRcp_LCSAct=tyTagNm.eAct);

(tyTagNm.eStat=((*(p_eLCSMngRcp_PLCStat))));
(tyTagNm.udiStatus=((*(p_udiLCSMngRcp_PLCStatus))));

if(((((unsigned long)tyTagNm.udiStatus>(unsigned long)0))&(((unsigned long)tyTagNm.udiStatus<(unsigned long)65534)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sErrMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyTagNm.udiStatus-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)tyTagNm.udiStatus==(unsigned long)10010))|(((unsigned long)tyTagNm.udiStatus==(unsigned long)10011)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sErrMsg; plcstring* zzRValue=(plcstring*)CONCAT(sAddMsg,tyTagNm.sErrMsg); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}

if((((signed long)tyTagNm.eAct==(signed long)10))){
if((((unsigned long)tyTagNm.udiStatus==(unsigned long)0))){
(tyTagNm.tyProdRcpInfo=*(struct tyProdRcpParam*)&((*(p_tyLCSMngRcp_PLCProdRcpInfo))));


dt2str(tyLCSMngRcp_LCSProdRcpInfo.dtLastModified,tyTagNm.sLastModified,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sLastModified; plcstring* zzRValue=(plcstring*)RIGHT(tyTagNm.sLastModified,(LEN(tyTagNm.sLastModified)-3)); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
(tyLCSMngRcp_LCSProdRcpInfo=*(struct tyProdRcpParam*)&tyTagNm.tyProdRcpInfo);

(tyLCSMngRcp_LCSProdRcpInfo.diWidthInUM2=tyTagNm.tyProdRcpInfo.diWidthInUM);

{int zzIndex; plcstring* zzLValue=(plcstring*)sLastModifiedTemp; plcstring* zzRValue=(plcstring*)CONCAT("DT#",tyTagNm.sLastModified); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyLCSMngRcp_LCSProdRcpInfo.dtLastModified=str2dt(sLastModifiedTemp));

}

}else if((((signed long)tyTagNm.eAct==(signed long)11))){
(iLCSMngRcp_LCSIdxStat=tyTagNm.iIdxAct);

(tyTagNm.iIdxStat=((*(p_iLCSMngRcp_PLCIdxAct))));

(tyTagNm.tyProdRcpInfo=*(struct tyProdRcpParam*)&((*(p_tyLCSMngRcp_PLCProdRcpInfo))));

dt2str(tyLCSMngRcp_LCSProdRcpInfo.dtLastModified,tyTagNm.sLastModified,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sLastModified; plcstring* zzRValue=(plcstring*)RIGHT(tyTagNm.sLastModified,(LEN(tyTagNm.sLastModified)-3)); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else{
(iLCSMngRcp_LCSIdxAct=tyTagNm.iIdxAct);
(tyLCSMngRcp_LCSProdRcpInfo=*(struct tyProdRcpParam*)&tyTagNm.tyProdRcpInfo);

(tyLCSMngRcp_LCSProdRcpInfo.diWidthInUM2=tyTagNm.tyProdRcpInfo.diWidthInUM);

{int zzIndex; plcstring* zzLValue=(plcstring*)sLastModifiedTemp; plcstring* zzRValue=(plcstring*)CONCAT("DT#",tyTagNm.sLastModified); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyLCSMngRcp_LCSProdRcpInfo.dtLastModified=str2dt(sLastModifiedTemp));

(tyTagNm.iIdxStat=((*(p_iLCSMngRcp_PLCIdxStat))));

}

}else{

(eLCSLF_LCSAct=0);
(eLCSMngRcp_LCSAct=0);
(tyTagNm.eStat=0);
(tyTagNm.udiStatus=65534);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sErrMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

}imp6_end3_0:;}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_eLCSMngRcp_PLCStat=((unsigned long)(&eLCSMngRcp_PLCStat)));
(p_udiLCSMngRcp_PLCStatus=((unsigned long)(&udiLCSMngRcp_PLCStatus)));
(p_iLCSMngRcp_PLCIdxAct=((unsigned long)(&iLCSMngRcp_PLCIdxAct)));
(p_iLCSMngRcp_PLCIdxStat=((unsigned long)(&iLCSMngRcp_PLCIdxStat)));
(p_tyLCSMngRcp_PLCProdRcpInfo=((unsigned long)(&tyLCSMngRcp_PLCProdRcpInfo)));
(p_eLCSLF_PLCStat=((unsigned long)(&eLCSLF_PLCStat)));
(p_udiLCSLF_PLCStatus=((unsigned long)(&udiLCSLF_PLCStatus)));
(p_bLCSMngRcpChkLmt=((unsigned long)(&bLCSMngRcpChkLmt)));
(p_bLCSLFChkLmt=((unsigned long)(&bLCSLFChkLmt)));
(p_bOpsRun=((unsigned long)(&bOpsRun)));
(p_bError=((unsigned long)(&bError)));
(p_bWarning=((unsigned long)(&bWarning)));
(p_bInfo=((unsigned long)(&bInfo)));
(p_bUIManual=((unsigned long)(&bUIManual)));
(p_tyProdRcpCurrRcp=((unsigned long)(&tyProdRcpCurrRcp)));
(p_tyNtParamCurr=((unsigned long)(&tyNtParamCurr)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));

}}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{


}}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
__AS__Action__Act_Background_LiveData();

if((((unsigned long)udiFlagNo==(unsigned long)0))){
__AS__MEMSET(((unsigned long)(&tyTagNm.sMcAlmMsg)),0,51200);
for((udi=1);udi<=c_udiAlarmCurrMax;udi+=1){
if(((__AS__STRING_CMP(((*(p_tyLinkAlarmCurrList))[udi-1].sMsg),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sMcAlmMsg[udi-1]; plcstring* zzRValue=(plcstring*)((*(p_tyLinkAlarmCurrList))[udi-1].sMsg); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else if((((unsigned long)udi==(unsigned long)1))){
goto imp1_endfor1_0;
}else{
(udiFlagNo=udi);
goto imp1_endfor1_0;
}
}imp1_endfor1_0:;
}else{
for((udi=1);udi<=c_udiAlarmCurrMax;udi+=1){
if(((__AS__STRING_CMP(((*(p_tyLinkAlarmCurrList))[udi-1].sMsg),"")!=0))){
}else{
if((((unsigned long)udiFlagNo!=(unsigned long)udi))){
(udiFlagNo=0);
}
goto imp1_endfor3_0;
}
}imp1_endfor3_0:;
}

if((~((*(p_bError)))&Edge0000100000&1?((Edge0000100000=((*(p_bError)))&1),1):((Edge0000100000=((*(p_bError)))&1),0))){
(udiFlagNo=0);
__AS__MEMSET(((unsigned long)(&tyTagNm.sMcAlmMsg)),0,51200);
}

}imp1_else6_0:imp1_end6_0:;}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_Background_LiveData.st"
static void __AS__Action__Act_Background_LiveData(void){
{
if((((*(p_bLinkNtParamLCSLiveDatPrep)))&((*(p_bLinkMcParamLCSLiveDatEn))))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyTagNm.sCurrRcpNm; plcstring* zzRValue=(plcstring*)((*(p_tyProdRcpCurrRcp)).sRcpNm); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyTagNm.rCurrWidth=((float)((*(p_tyProdRcpCurrRcp)).diWidthInUM)/1000));
(tyTagNm.usiMode=(unsigned char)((((*(p_bLinkNtParamLCSLFPrep)))&((*(p_bLinkMcParamLCSLFEn))))&1));

if((((unsigned long)(unsigned char)((*(p_bError)))==(unsigned long)(unsigned char)1))){
(tyTagNm.eCurrOpsStatus=3);
}else if(((((unsigned long)(unsigned char)((*(p_bWarning)))==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)((*(p_bInfo)))==(unsigned long)(unsigned char)1)))){
(tyTagNm.eCurrOpsStatus=4);
}else if((((unsigned long)(unsigned char)((*(p_bOpsRun)))==(unsigned long)(unsigned char)1))){
(tyTagNm.eCurrOpsStatus=0);
}else if((((unsigned long)(unsigned char)((*(p_bUIManual)))==(unsigned long)(unsigned char)1))){
(tyTagNm.eCurrOpsStatus=1);
}else{
(tyTagNm.eCurrOpsStatus=2);
}

}

}imp2_end1_0:imp2_else0_0:imp2_end0_0:;}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
}}
#line 32 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LCS/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LCS/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LCS/LCS/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LCS/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'tyTagNm'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiAlarmCurrMax'\\n\"");
__asm__(".previous");
