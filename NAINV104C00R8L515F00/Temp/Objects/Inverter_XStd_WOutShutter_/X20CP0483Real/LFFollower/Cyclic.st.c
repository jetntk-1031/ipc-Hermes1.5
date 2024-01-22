#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LFFollower/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.st"
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
__AS__Action__Act_LinkEn();

if(((((unsigned long)(unsigned char)((*(p_bPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bEn)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0)))){
__AS__Action__Act_Link();
__AS__Action__Act_Background();

}else{
__AS__Action__Act_Main_Disable();

}

__AS__Action__Act_Alarm();

}

}imp13_end0_0:;}
#line 35 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);
(p_eLinkMcParamUSCommMod=p_McParamUSCommMod);

(p_bLinkOpsRun=p_OpsRun);
(p_bLinkConvHvBrd=p_OpsInvertHvBrd);
(p_bLinkUSWidthChkSen=p_DIUSWidthChkSen);
(p_bLinkUSWidthChkSen1=p_DIUSWidthChkSen1);
(p_bLinkDIInvertHomeSen=p_DIInvertHomeSen);
(p_bLinkDIInvertRemoteSen=p_DIInvertRemoteSen);


(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamLFPrep);
(p_bEn=p_McParamLFEn);
(p_sIPAddr=p_HWInfoIPAddr);
(p_sMcNm=p_McParamMcNm);
(p_bAWPrep=p_NtParamAWPrep);
(p_bAWDis=p_McParamAWDis);
(p_bMnlAccData=p_McParamMnlAccDat);
(p_bSectionLeader=p_McParamSectionLeader);
(p_diWidthLimit=p_NtParamLFWidthLimit);
(p_bUSWidthChkPrep=p_NtParamUSWidthChkPrep);
(p_bUSWidthChkEn=p_McParamUSWidthChkEn);

(p_bDSWidthChkPrep=p_NtParamDSWidthChkPrep);
(p_bDSWidthChkEn=p_McParamDSWidthChkEn);
(p_bDSWidthChkSen=p_DIDSWidthChkSen);
(p_bProdWidthChk=p_NtParamLFProdWidthChk);
(p_bUIProdAccData=p_UIProdAccData);
(p_bUIProdUpdtData=p_UIProdAccData);
(pa_tyProdRcpList=p_ProdRcpCurrList);
(p_tyCurrProdRcp=p_ProdRcpCurrRcp0);
(p_tyDispProdRcp=p_ProdRcpCurrRcp1);
(p_eTimeStat=p_TimeStat);
(p_eTimeStatus=p_TimeStatus);
(p_tyToLeaderProdRcp=p_Follower1UpdtProdRcp);
(p_sProgNm=p_NtParamLFFollowerProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);

(p_tOnlineChkDlyTm=p_NtParamLFFllowerOnlineChkDlyTm);
(p_bManual=p_UIUIMnlMod);
(p_bErr=p_AlarmErr);
(p_bOps=p_OpsStatusRun);
(p_bStandby=p_OpsStatusStop);
(p_bWarning=p_AlarmWarning);
(p_eAWStat=p_AWOpenStat);
(p_bWidth2Prep=p_NtParamLFWidth2Prep);
(p_bDBAOnWOAlign=p_McParamDBAOnWOAlign);


(p_eProdRcpStat=p_ProdRcpStat);
(p_eProdRcpStatus=p_ProdRcpStatus);
(p_eLinkUIProdRcpAct=p_UIProdRcpAct);
(p_tyProdRcpCurrRcpWr=p_UIProdRcpCurrRcpWr);



}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{

((*(p_bDis))=((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))|(((signed long)((*(p_eLinkMcParamUSCommMod)))==(signed long)1))));

}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
(bFollowerInfo=(tyFollowerToLeaderTag.bProdWidthErr|bProdRcpErrNotExist|bProdRcpErrWidthMismatch));



(bLeaderInfo=(tyLeaderToFollowerTag.bProdWidthUSWarn|tyLeaderToFollowerTag.bProdWidthDSWarn|((tyLeaderToFollowerTag.bProdNameUSWarn|tyLeaderToFollowerTag.bProdNameDSWarn)&(((unsigned long)(unsigned char)((*(p_bAWPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAWDis)))==(unsigned long)(unsigned char)0))&(((signed long)((*(p_eAWStat)))!=(signed long)16)))));


if(bFollowerInfo){
if(((((unsigned long)(unsigned char)tyFollowerToLeaderTag.bProdWidthErr==(unsigned long)(unsigned char)1))|bProdRcpErrWidthMismatch)){

{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Product Recipe Width Does Not Match"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Check Product Width And"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Leader Request Width"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(bProdRcpErrNotExist){

{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"New Product Not Found"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"In Product Recipe List"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Create New Product"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"In Product Setting"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else{


if((((__AS__STRING_CMP(tyLeaderToFollowerTag.sReqProdRcpNm,((*(p_tyCurrProdRcp)).sRcpNm))!=0))&((__AS__STRING_CMP(tyLeaderToFollowerTag.sReqProdRcpNm,"")!=0))&(((unsigned long)(unsigned char)bLeaderInfo==(unsigned long)(unsigned char)0)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Leader Request New Recipe"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Old Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),((*(p_tyDispProdRcp)).sRcpNm)); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Old Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(((*(p_tyDispProdRcp)).diWidthInUM)))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"New Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),tyLeaderToFollowerTag.sReqProdRcpNm); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"New Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(tyLeaderToFollowerTag.diReqProdRcpWidth))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(tyLeaderToFollowerTag.bProdNameUSWarn){
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"US Machine Request New Recipe"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Old Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),((*(p_tyDispProdRcp)).sRcpNm)); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Old Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(((*(p_tyDispProdRcp)).diWidthInUM)))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"New Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),tyLeaderToFollowerTag.sReqProdRcpNm); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"New Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(tyLeaderToFollowerTag.diReqProdRcpWidth))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(tyLeaderToFollowerTag.bProdNameDSWarn){
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Different Recipe"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"From DS Machine"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Current Recipe Name : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),((*(p_tyCurrProdRcp)).sRcpNm)); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Current Recipe Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(((*(p_tyCurrProdRcp)).diWidthInUM2)))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(tyLeaderToFollowerTag.bProdWidthUSWarn){
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Product Recipe Width Does Not Match"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Check Product Width And"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Leader Request Width"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}else if(tyLeaderToFollowerTag.bProdWidthDSWarn){
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)"Same Recipe : "; for(zzIndex=0; zzIndex<14l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),((*(p_tyDispProdRcp)).sRcpNm)); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"But Different Width"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"With DS Machine"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"\r\n"); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),"Machine Outgoing Width : "); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((((signed long)(((*(p_tyDispProdRcp)).diWidthInUM2)))/((signed long)(1000))),sWidthInUMTemp,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)((*(p_sInfoMsg))); plcstring* zzRValue=(plcstring*)CONCAT(((*(p_sInfoMsg))),sWidthInUMTemp); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}
}



((*(p_bAccNewRcpCond))=((((unsigned long)(unsigned char)((*(p_bLinkOpsRun)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bLinkConvHvBrd)))==(unsigned long)(unsigned char)0))));


((*(p_bUpdtNewRcpCond))=1);






if(((*(p_bErr)))){
(eCurrMachineStat=4);
}else{
if(((*(p_bWarning)))){
(eCurrMachineStat=3);
}else{
if(((*(p_bOps)))){
(eCurrMachineStat=0);
}else{
if(((*(p_bManual)))){
(eCurrMachineStat=2);
}else{
(eCurrMachineStat=1);
}
}
}
}




if(((*(p_bLinkDIInvertHomeSen)))){
((*(p_bUSWidthChkSen))=((*(p_bLinkUSWidthChkSen))));
}else if(((*(p_bLinkDIInvertRemoteSen)))){
((*(p_bUSWidthChkSen))=((*(p_bLinkUSWidthChkSen1))));
}


}imp9_else7_1:imp9_end7_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp12_end0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_sIPAddr=((unsigned long)(&sIPAddr)));
(p_sMcNm=((unsigned long)(&sMcNm)));
(p_bAWPrep=((unsigned long)(&bAWPrep)));
(p_bAWDis=((unsigned long)(&bAWDis)));
(p_bMnlAccData=((unsigned long)(&bMnlAccData)));
(p_bSectionLeader=((unsigned long)(&bSectionLeader)));
(p_sMagRcpNm=((unsigned long)(&sMagRcpNm)));
(p_diWidthLimit=((unsigned long)(&diWidthLimit)));
(p_bUSWidthChkPrep=((unsigned long)(&bUSWidthChkPrep)));
(p_bUSWidthChkEn=((unsigned long)(&bUSWidthChkEn)));
(p_bUSWidthChkSen=((unsigned long)(&bUSWidthChkSen)));
(p_bDSWidthChkPrep=((unsigned long)(&bDSWidthChkPrep)));
(p_bDSWidthChkEn=((unsigned long)(&bDSWidthChkEn)));
(p_bDSWidthChkSen=((unsigned long)(&bDSWidthChkSen)));
(p_bProdWidthChk=((unsigned long)(&bProdWidthChk)));
(p_bUIProdAccData=((unsigned long)(&bUIProdAccData)));
(p_bUIProdUpdtData=((unsigned long)(&bUIProdUpdtData)));
(p_bUIMagAccData=((unsigned long)(&bUIMagAccData)));
(pa_tyProdRcpList=((unsigned long)(&a_tyProdRcpList)));
(p_tyCurrProdRcp=((unsigned long)(&tyCurrProdRcp)));
(p_tyDispProdRcp=((unsigned long)(&tyDispProdRcp)));
(p_sCurrMagRcpNm=((unsigned long)(&sCurrMagRcpNm)));
(p_eTimeStat=((unsigned long)(&eTimeStat)));
(p_eTimeStatus=((unsigned long)(&eTimeStatus)));
(p_bAccNewRcpCond=((unsigned long)(&bAccNewRcpCond)));
(p_bUpdtNewRcpCond=((unsigned long)(&bUpdtNewRcpCond)));
(p_bAutoUpdtData=((unsigned long)(&bAutoUpdtData)));
(p_sInfoMsg=((unsigned long)(&sInfoMsg)));
(p_bInternalUse=((unsigned long)(&bInternalUse)));
(p_tyInternalReqProdRcp=((unsigned long)(&tyInternalReqProdRcp)));
(p_bNewBrdEnteredCond=((unsigned long)(&bNewBrdEnteredCond)));
(p_bOldBrdExitedCond=((unsigned long)(&bOldBrdExitedCond)));
(p_bRlsBrd=((unsigned long)(&bRlsBrd)));
(p_tyToLeaderProdRcp=((unsigned long)(&tyToLeaderProdRcp)));
(p_bInternalReqProdRcpDiff=((unsigned long)(&bInternalReqProdRcpDiff)));
(p_bUpdtProdRcpDiff=((unsigned long)(&bUpdtProdRcpDiff)));
(p_bRlsBrdProdRcpDiff=((unsigned long)(&bRlsBrdProdRcpDiff)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_tOnlineChkDlyTm=((unsigned long)(&tOnlineChkDlyTm)));
(p_bManual=((unsigned long)(&bManual)));
(p_bErr=((unsigned long)(&bErr)));
(p_bWarning=((unsigned long)(&bWarning)));
(p_bOps=((unsigned long)(&bOps)));
(p_bStandby=((unsigned long)(&bStandby)));
(p_eAWStat=((unsigned long)(&eAWStat)));
(p_bWidth2Prep=((unsigned long)(&bWidth2Prep)));
(p_bDBAOnWOAlign=((unsigned long)(&bDBAOnWOAlign)));
}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

(fbFollower.diWidthLimit=((*(p_diWidthLimit))));
(fbFollower.bEn=0);;fbLFFollower(&fbFollower);

((*(unsigned long*)&(fbOnlineChk.p_tyLeaderInfo))=((unsigned long)(&tyLeaderInfo)));
(fbOnlineChk.tDlyTm=((*(p_tOnlineChkDlyTm))));
(fbOnlineChk.bEn=0);;fbLFFollowerOnlineChk(&fbOnlineChk);

}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyLeaderToFollowerTag.sReqProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_tyInternalReqProdRcp)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if(((*(p_bWidth2Prep)))){
(tyLeaderToFollowerTag.diReqProdRcpWidth=((*(p_tyInternalReqProdRcp)).diWidthInUM2));
}else{
(tyLeaderToFollowerTag.diReqProdRcpWidth=((*(p_tyInternalReqProdRcp)).diWidthInUM));
}
{int zzIndex; plcstring* zzLValue=(plcstring*)tyLeaderToFollowerTag.sReqMagRcpNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyLeaderToFollowerTag.bMnlAccData=0);
(tyLeaderToFollowerTag.bBypassMnlAccData=0);
(tyLeaderToFollowerTag.bBlkDS=0);
(tyLeaderToFollowerTag.bBlkUS=0);
(tyLeaderToFollowerTag.bBypassWidthChk=1);
(tyLeaderToFollowerTag.bSetTm=0);
(tyLeaderToFollowerTag.dtTm=0);
(tyLeaderToFollowerTag.uiTmZone=0);
(tyLeaderToFollowerTag.usiRunTm=0);
(tyLeaderToFollowerTag.bProdNameUSWarn=0);
(tyLeaderToFollowerTag.bProdNameDSWarn=0);
(tyLeaderToFollowerTag.bProdWidthUSWarn=0);
(tyLeaderToFollowerTag.bProdWidthDSWarn=0);
(tyLeaderToFollowerTag.bLeaderSeqCtrlInActive=0);
}

__AS__Action__Act_Background_UpdtData();


(fbFollower.tyLeaderToFollowerTag=*(struct tyLFLeaderToFollowerTag*)&tyLeaderToFollowerTag);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFollower.sMcNm; plcstring* zzRValue=(plcstring*)((*(p_sMcNm))); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFollower.sIPAddr; plcstring* zzRValue=(plcstring*)((*(p_sIPAddr))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFollower.bSectionLeader=((*(p_bSectionLeader))));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFollower.sCurrProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_tyCurrProdRcp)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFollower.diCurrProdWidthUS=((*(p_tyCurrProdRcp)).diWidthInUM));
(fbFollower.diCurrProdWidthDS=((*(p_tyCurrProdRcp)).diWidthInUM2));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFollower.sCurrMagRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sCurrMagRcpNm))); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFollower.sUpdtLeaderProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_tyToLeaderProdRcp)).sRcpNm); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFollower.diUpdtLeaderProdWidthUS=((*(p_tyToLeaderProdRcp)).diWidthInUM));
(fbFollower.diUpdtLeaderProdWidthDS=((*(p_tyToLeaderProdRcp)).diWidthInUM2));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFollower.sUpdtLeaderMagRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sMagRcpNm))); for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFollower.bMnlAccDat=((*(p_bMnlAccData))));
(fbFollower.bAWEn=((((unsigned long)(unsigned char)((*(p_bAWPrep)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)((*(p_bAWDis)))==(unsigned long)(unsigned char)0))));
(fbFollower.bUSWidthChkEn=(((*(p_bUSWidthChkPrep)))&((*(p_bUSWidthChkEn)))));
(fbFollower.bUSWidthChkSen=((*(p_bUSWidthChkSen))));
(fbFollower.bDSWidthChkEn=(((*(p_bDSWidthChkPrep)))&((*(p_bDSWidthChkEn)))));
(fbFollower.bDSWidthChkSen=((*(p_bDSWidthChkSen))));
(fbFollower.bProdWidthChk=((*(p_bProdWidthChk))));
(fbFollower.bProdRcpErr=bProdRcpErr);
(fbFollower.bMagRcpErr=bMagRcpErr);
(fbFollower.bSetTmErr=bSetTmErr);
(fbFollower.eCurrMachineStat=eCurrMachineStat);
(fbFollower.bProdChgOverActive=(((signed long)((*(p_eAWStat)))==(signed long)16)));
(fbFollower.bDBAOnWOAlign=((*(p_bDBAOnWOAlign))));

(fbFollower.bEn=1);;fbLFFollower(&fbFollower);

(tyFollowerToLeaderTag=*(struct tyLFFollowerToLeaderTag*)&fbFollower.tyFollowerToLeaderTag);
(bProdAccDataReq=(fbFollower.bProdAccDataReq|(((unsigned long)(unsigned char)((*(p_bInternalReqProdRcpDiff)))==(unsigned long)(unsigned char)1))));
(bMagAccDataReq=fbFollower.bMagAccDataReq);
(bAutoAccData=fbFollower.bAutoAccData);

if(((*(p_bInternalUse)))){
(bLeaderOnline=1);
}else{
(bLeaderOnline=tyLeaderInfo.bOnline);
}

if((((unsigned long)(unsigned char)bLeaderOnline==(unsigned long)(unsigned char)0))){
(bUSAllow=1);
(bDSAllow=1);
(bLeaderSeqCtrlInActive=0);
}else{
(bUSAllow=(fbFollower.bUSAllow&(((unsigned long)(unsigned char)((*(p_bInternalReqProdRcpDiff)))==(unsigned long)(unsigned char)0))));
(bDSAllow=fbFollower.bDSAllow);
(bLeaderSeqCtrlInActive=tyLeaderToFollowerTag.bLeaderSeqCtrlInActive);
}

(fbOnlineChk.tyLeaderToFollowerTag=*(struct tyLFLeaderToFollowerTag*)&tyLeaderToFollowerTag);
(fbOnlineChk.bEn=1);;fbLFFollowerOnlineChk(&fbOnlineChk);

__AS__Action__Act_Background_AccData();
__AS__Action__Act_Background_ChkRlsBrd();


if((tyLeaderToFollowerTag.bSetTm&~Edge0000200000&1?((Edge0000200000=tyLeaderToFollowerTag.bSetTm&1),1):((Edge0000200000=tyLeaderToFollowerTag.bSetTm&1),0))){
(bSetTm=1);
}

if((((unsigned long)(unsigned char)bSetTm==(unsigned long)(unsigned char)1))){
(eTimeAct=3);

if(((((signed long)((*(p_eTimeStat)))==(signed long)3))&(((signed long)((*(p_eTimeStatus)))==(signed long)1)))){
(eTimeAct=0);
(bSetTm=0);
}else if((((signed long)((*(p_eTimeStatus)))==(signed long)3))){
(eTimeAct=0);
(bSetTm=0);
}
}

(bSetTmErr=(((signed long)((*(p_eTimeStatus)))==(signed long)3)));

if(((((signed long)eStatus==(signed long)3))&bRstErr)){
(eStatus=0);
(udiStatus=0);
(bProdRcpErr=0);
(bProdRcpErrNotExist=0);
(bProdRcpErrWidthMismatch=0);
(bMagRcpErr=0);
}

}imp2_else7_0:imp2_end7_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Background_ChkRlsBrd.st"
static void __AS__Action__Act_Background_ChkRlsBrd(void){
{
if(((__AS__STRING_CMP(tyRlsBrdProdRcpNm.sRcpNm,"")==0))){
(tyRlsBrdProdRcpNm=*(struct tyProdRcpParam*)&((*(p_tyCurrProdRcp))));

}else if((((__AS__STRING_CMP(tyRlsBrdProdRcpNm.sRcpNm,((*(p_tyCurrProdRcp)).sRcpNm))!=0))|(((unsigned long)(unsigned char)((*(p_bRlsBrdProdRcpDiff)))==(unsigned long)(unsigned char)1)))){

if((((unsigned long)(unsigned char)((*(p_bNewBrdEnteredCond)))==(unsigned long)(unsigned char)1))){
(bNewBrdEntered=1);
}

if((((unsigned long)(unsigned char)((*(p_bOldBrdExitedCond)))==(unsigned long)(unsigned char)1))){
(bOldBrdExited=1);
}

if((bNewBrdEntered&bOldBrdExited)){
(bWaitRlsBrd=1);
}

if((bWaitRlsBrd&((*(p_bRlsBrd))))){
(tyRlsBrdProdRcpNm=*(struct tyProdRcpParam*)&((*(p_tyCurrProdRcp))));
}

}else{
(bNewBrdEntered=0);
(bOldBrdExited=0);
(bWaitRlsBrd=0);

}

}imp4_end0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Background_UpdtData.st"
static void __AS__Action__Act_Background_UpdtData(void){
{

switch(usiProdUpdtDatStep){
case 0:{

if(((__AS__STRING_CMP(tyUpdtProdRcp.sRcpNm,"")!=0))){
if((((__AS__STRING_CMP(((*(p_tyCurrProdRcp)).sRcpNm),tyUpdtProdRcp.sRcpNm)!=0))|(((unsigned long)(unsigned char)((*(p_bUpdtProdRcpDiff)))==(unsigned long)(unsigned char)1)))){
if((((unsigned long)(unsigned char)((*(p_bUpdtNewRcpCond)))==(unsigned long)(unsigned char)1))){
(usiProdUpdtDatStep=1);
}
}
}else{
(tyUpdtProdRcp=*(struct tyProdRcpParam*)&((*(p_tyCurrProdRcp))));
}

}break;case 1:{

if((((unsigned long)(unsigned char)((*(p_bAutoUpdtData)))==(unsigned long)(unsigned char)0))){
(bProdUpdtDataMnl=1);

if((((unsigned long)(unsigned char)((*(p_bUIProdUpdtData)))==(unsigned long)(unsigned char)1))){
(bProdUpdtDataMnl=0);
(usiProdUpdtDatStep=2);
}
}else{
(bProdUpdtDataMnl=0);
(usiProdUpdtDatStep=2);
}

}break;case 2:{

(tyUpdtProdRcp=*(struct tyProdRcpParam*)&((*(p_tyCurrProdRcp))));

(usiProdUpdtDatStep=0);

}break;}

}imp5_case0_2:imp5_endcase0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Background_AccData.st"
static void __AS__Action__Act_Background_AccData(void){
{
switch(usiProdAccDatStep){
case 0:{


if((((((signed long)eStatus!=(signed long)3))&(((unsigned long)(unsigned char)bProdAccDataReq==(unsigned long)(unsigned char)1)))|bProdRcpErr)){
{int zzIndex; plcstring* zzLValue=(plcstring*)sReqProdRcpNm; plcstring* zzRValue=(plcstring*)tyLeaderToFollowerTag.sReqProdRcpNm; for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(diReqProdRcpWidth=tyLeaderToFollowerTag.diReqProdRcpWidth);
(usiProdAccDatStep=1);
}

if((((unsigned long)(unsigned char)bLeaderOnline==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bProdRcpErr=0);
(bProdRcpErrNotExist=0);
(bProdRcpErrWidthMismatch=0);
}

}break;case 1:{
if(((*(p_bInternalUse)))){
(usiProdAccDatStep=2);
}else{

for((i=1);i<=2000;i+=1){
if(((__AS__STRING_CMP(sReqProdRcpNm,"")==0))){
goto imp3_endfor4_0;
}else if(((__AS__STRING_CMP(sReqProdRcpNm,((*(pa_tyProdRcpList))[i-1].sRcpNm))==0))){
goto imp3_endfor4_0;
}
}imp3_endfor4_0:;

if((((__AS__STRING_CMP(sReqProdRcpNm,((*(pa_tyProdRcpList))[i-1].sRcpNm))==0))&(((signed long)diReqProdRcpWidth!=(signed long)((*(pa_tyProdRcpList))[i-1].diWidthInUM))))){

(bProdRcpErr=1);
(bProdRcpErrWidthMismatch=1);
(bProdRcpErrNotExist=0);
(usiProdAccDatStep=0);
}else if((((signed long)(signed long)(short)i>(signed long)(signed long)(short)2000))){

(bProdRcpErr=1);
(bProdRcpErrNotExist=1);
(bProdRcpErrWidthMismatch=0);
(usiProdAccDatStep=0);
}else{
(bProdRcpErr=0);
(bProdRcpErrNotExist=0);
(bProdRcpErrWidthMismatch=0);
(usiProdAccDatStep=2);
}


if((((unsigned long)(unsigned char)bLeaderOnline==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bProdRcpErr=0);
(bProdRcpErrNotExist=0);
(bProdRcpErrWidthMismatch=0);
}else{

if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)0))){
if((bLeaderInfo|bFollowerInfo)){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}else{
if(((__AS__STRING_CMP(((*(p_sInfoMsg))),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}
}
}
}break;case 2:{

if((((unsigned long)(unsigned char)bProdAccDataReq==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)bAutoAccData==(unsigned long)(unsigned char)0))){
(bProdAccDataMnl=1);


if((((unsigned long)(unsigned char)bLeaderOnline==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
if(((__AS__STRING_CMP(((*(p_sInfoMsg))),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}

if((((unsigned long)(unsigned char)((*(p_bUIProdAccData)))==(unsigned long)(unsigned char)1))){
((*(p_bUIProdAccData))=0);
(bProdAccDataMnl=0);
(usiProdAccDatStep=3);
}
}else{
(bProdAccDataMnl=0);
((*(p_bUIProdAccData))=0);
(usiProdAccDatStep=3);
}
}else{
(bProdAccDataMnl=0);
(usiProdAccDatStep=6);
}

}break;case 3:{

if((((unsigned long)(unsigned char)bProdAccDataReq==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)((*(p_bAccNewRcpCond)))==(unsigned long)(unsigned char)1))){

(usiProdAccDatStep=4);
}else{

if((((unsigned long)(unsigned char)bLeaderOnline==(unsigned long)(unsigned char)0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
if(((__AS__STRING_CMP(((*(p_sInfoMsg))),"")!=0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=10000);
(tyInfoData.eSeverity=3);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)((*(p_sInfoMsg))); for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}
}
}
}else{
(usiProdAccDatStep=6);
}

}break;case 4:{

if((((unsigned long)(unsigned char)((*(p_bInternalUse)))==(unsigned long)(unsigned char)1))){

((*(p_tyCurrProdRcp))=*(struct tyProdRcpParam*)&((*(p_tyInternalReqProdRcp))));
(usiProdAccDatStep=6);
}else{

for((i=1);i<=2000;i+=1){
if(((__AS__STRING_CMP(sReqProdRcpNm,"")==0))){
goto imp3_endfor21_0;
}else if(((__AS__STRING_CMP(sReqProdRcpNm,((*(pa_tyProdRcpList))[i-1].sRcpNm))==0))){
((*(p_tyCurrProdRcp))=*(struct tyProdRcpParam*)&((*(pa_tyProdRcpList))[i-1]));

goto imp3_endfor21_0;
}
}imp3_endfor21_0:;

if((((signed long)(signed long)(short)i>(signed long)(signed long)(short)2000))){

(bProdRcpErr=1);
(bProdRcpErrNotExist=1);
}
(usiProdAccDatStep=5);
}

}break;case 5:{

((*(p_tyProdRcpCurrRcpWr))=*(struct tyProdRcpParam*)&((*(p_tyCurrProdRcp))));
((*(p_eLinkUIProdRcpAct))=11);

if(((((signed long)((*(p_eProdRcpStat)))==(signed long)11))&(((signed long)((*(p_eProdRcpStatus)))==(signed long)1)))){
((*(p_eLinkUIProdRcpAct))=0);
(usiProdAccDatStep=6);
}

}break;case 6:{

{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(usiProdAccDatStep=0);

}break;}

}imp3_case0_6:imp3_endcase0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
(bUSAllow=1);
(bDSAllow=1);
(bProdAccDataMnl=0);
(bProdUpdtDataMnl=0);
(bMagAccDataMnl=0);
(bWaitRlsBrd=0);

(usiProdAccDatStep=0);
(usiProdUpdtDatStep=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData.udiCode=0);
(tyInfoData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(usiMagAccDatStep=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sProgNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyInfoData1.udiCode=0);
(tyInfoData1.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyInfoData1.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bSetTm=0);

(eStatus=0);
(udiStatus=0);
(bProdRcpErr=0);
(bMagRcpErr=0);
(bLeaderSeqCtrlInActive=0);

(bProdRcpErrNotExist=0);
(bProdRcpErrWidthMismatch=0);


}}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000100000&1?((Edge0000100000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000100000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sLFFollowerProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

if(((((unsigned long)tyAlmData.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData.udiCode>(unsigned long)10099)))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)"Unknown"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}else{
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData.udiCode-10000].sAlmText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)a_tyAlmText[tyAlmData.udiCode-10000].sRcyText; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if((bRstErr&(((unsigned long)tyAlmData.udiCode!=(unsigned long)0)))){

(tyAlmData.udiCode=0);
(tyAlmData.eSeverity=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sAlmMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sRcyMsg; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.bAlm=0);
}

}imp1_else0_1:imp1_end0_0:;}
#line 36 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

signed long __AS__STRING_CMP(char* pstr1, char* pstr2)
{while (*pstr1 != 0 && *pstr1 == *pstr2){ pstr1++;pstr2++; } return (*pstr1 == 0 && *pstr2 != 0) ? -1 : (*pstr1 != 0 && *pstr2 == 0) ? 1 : *pstr1 - *pstr2;}

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
__asm__(".ascii \"iecfile \\\"Logical/LF/LFFollower/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LFFollower/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LFFollower/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LFFollower/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LFFollower/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFFollower/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/LFFollower/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'c_udiProdRcpMax'\\n\"");
__asm__(".previous");
