#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/LFLeader/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.st"
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
__AS__Action__Act_Background();
__AS__Action__Act_Main();

}else{
__AS__Action__Act_Main_Disable();

if((((signed long)eStat!=(signed long)0))){
(eStatus=1);
}else{
(eStatus=0);
}
}

__AS__Action__Act_Alarm();

}

}imp16_end0_0:;}
#line 43 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);
(p_bLinkNtParamLFPrep=p_NtParamLFPrep);
(p_bLinkNtParamLeaderMc=p_NtParamLeaderMc);
(p_bLinkNtParamLFUsrSetPrep=p_NtParamLFUsrSetPrep);
(p_bLinkMcParamLFLeaderMc=p_McParamLFLeaderMc);
(p_bLinkUILeaderRun=p_UILeaderRun);


(p_eAct=p_UILFLeaderAct);
(p_udiRstErr=p_RstErrReset);
(p_bEn=p_McParamLFEn);
(p_sReqProdRcpNm=p_ProdRcpCurrRcp0Nm);

(p_diBeforeOven=p_McParamLFMcIdxBeforeOven);
(p_diAfterOven=p_McParamLFMcIdxAfterOven);
(p_tOnlineChkDlyTm=p_NtParamLFLeaderOnlineChkDlyTm);
(p_tSetTmOffDlyTm=p_NtParamLFLeaderSetTmOffDlyTm);
(p_dtCurrDT=p_TimeCurrDT);
(pa_sLFIPAddr=p_McParamLFIPAddr);
(pa_bLFOnline=p_McParamLFOnline);
(p_sProgNm=p_NtParamLFLeaderProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);

(p_diBeforeOven2=p_McParamLFMcIdxBeforeOven2);
(p_diAfterOven2=p_McParamLFMcIdxAfterOven2);

(p_bWidth2Prep=p_NtParamLFWidth2Prep);
(p_bLFSeqStayActive=p_McParamLFSeqStayActive);



}}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if(((((unsigned long)(unsigned char)((*(p_bLinkUILeaderRun)))==(unsigned long)(unsigned char)1))&((((unsigned long)(unsigned char)bRun1==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)bRun2==(unsigned long)(unsigned char)0))))){
(bUILeaderStart=1);
(bUILeaderStop=0);
}

if(((((unsigned long)(unsigned char)((*(p_bLinkUILeaderRun)))==(unsigned long)(unsigned char)0))&((((unsigned long)(unsigned char)bRun1==(unsigned long)(unsigned char)1))|(((unsigned long)(unsigned char)bRun2==(unsigned long)(unsigned char)1))))){
(bUILeaderStart=0);
(bUILeaderStop=1);
}

if((((unsigned long)(unsigned char)bUILeaderStart==(unsigned long)(unsigned char)1))){
((*(p_eAct))=1);

if(((((signed long)eStat==(signed long)1))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bUILeaderStart=0);
}

}else if((((unsigned long)(unsigned char)bUILeaderStop==(unsigned long)(unsigned char)1))){
((*(p_eAct))=2);

if(((((signed long)eStat==(signed long)2))&(((signed long)eStatus==(signed long)1)))){
((*(p_eAct))=0);
(bUILeaderStop=0);
}

}

}imp11_else4_0:imp11_end4_0:imp11_else2_1:imp11_end2_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{

((*(p_bPrep))=((*(p_bLinkNtParamLFPrep))));
((*(p_bDis))=(((*(p_bLinkStartupRun)))|((((*(p_bLinkNtParamLFUsrSetPrep))^1))&(((*(p_bLinkNtParamLeaderMc))^1)))|(((*(p_bLinkNtParamLFUsrSetPrep)))&(((*(p_bLinkMcParamLFLeaderMc))^1)))));

}}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Link.st"
static void __AS__Action__Act_Link(void){
{if(((*(p_bWidth2Prep)))){
(p_diReqProdWidth=p_ProdRcpCurrRcp0Width2);
}else{
(p_diReqProdWidth=p_ProdRcpCurrRcp0Width);
}

}imp10_end0_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp15_end0_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_sReqProdRcpNm=((unsigned long)(&sReqProdRcpNm)));
(p_diReqProdWidth=((unsigned long)(&diReqProdWidth)));
(p_sReqMagRcpNm=((unsigned long)(&sReqMagRcpNm)));
(p_diBeforeOven=((unsigned long)(&diBeforeOven)));
(p_diAfterOven=((unsigned long)(&diAfterOven)));
(p_diBeforeOven2=((unsigned long)(&diBeforeOven2)));
(p_diAfterOven2=((unsigned long)(&diAfterOven2)));
(p_tOnlineChkDlyTm=((unsigned long)(&tOnlineChkDlyTm)));
(p_tSetTmOffDlyTm=((unsigned long)(&tSetTmOffDlyTm)));
(p_dtCurrDT=((unsigned long)(&dtCurrDT)));
(pa_sLFIPAddr=((unsigned long)(&a_sLFIPAddr)));
(pa_bLFOnline=((unsigned long)(&a_bLFOnline)));
(p_sLeaderProgTagNm=((unsigned long)(&sLeaderProgTagNm)));
(p_sFollowerProgTagNm=((unsigned long)(&sFollowerProgTagNm)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_bWidth2Prep=((unsigned long)(&bWidth2Prep)));


}}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

((*(unsigned long*)&(fbOnlineChk.pa_tyLeaderToFollowerTag))=((unsigned long)(&a_tyLeaderToFollowerTag)));
((*(unsigned long*)&(fbOnlineChk.pa_tyFollowerInfo))=((unsigned long)(&a_tyFollowerInfo)));
(fbOnlineChk.tDlyTm=((*(p_tOnlineChkDlyTm))));
(fbOnlineChk.bEn=0);;fbLFLeaderOnlineChk(&fbOnlineChk);

((*(unsigned long*)&(fbSyncTm.pa_tyLeaderToFollowerTag))=((unsigned long)(&a_tyLeaderToFollowerTag)));
(fbSyncTm.tDlyTm=((*(p_tSetTmOffDlyTm))));
(fbSyncTm.bEn=0);;fbLFLeaderSyncTm(&fbSyncTm);

((*(unsigned long*)&(fbChgAll.pa_tyLeaderToFollowerTag))=((unsigned long)(&a_tyLeaderToFollowerTag)));
(fbChgAll.bEn=0);;fbLFLeaderChgAll(&fbChgAll);

((*(unsigned long*)&(fbChgSeq.pa_tyLeaderToFollowerTag))=((unsigned long)(&a_tyLeaderToFollowerTag)));
(fbChgSeq.bEn=0);;fbLFLeaderChgSeq(&fbChgSeq);

((*(unsigned long*)&(fbBlkUSDS.pa_tyLeaderToFollowerTag))=((unsigned long)(&a_tyLeaderToFollowerTag)));
(fbBlkUSDS.bEn=0);;fbLFLeaderBlkUSDS(&fbBlkUSDS);

((*(unsigned long*)&(fbDataUpdt.pa_tyLeaderToFollowerTag))=((unsigned long)(&a_tyLeaderToFollowerTag)));
(fbDataUpdt.bEn=0);;fbLFLeaderDataUpdt(&fbDataUpdt);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbConnect.tyOPCUAParam.sPort; plcstring* zzRValue=(plcstring*)"4840"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbConnect.bEn=0);;fbOPCUAConnect(&fbConnect);

(fbGetNodeHdlListWr.uiTagNmCnt=17);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[0]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.sReqProdRcpNm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[1]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.diReqProdRcpWidth"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[2]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.sReqMagRcpNm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[3]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bMnlAccData"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[4]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bBypassMnlAccData"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[5]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bBlkDS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[6]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bBlkUS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[7]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bSetTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[8]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.dtTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[9]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.uiTmZone"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[10]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bBypassWidthChk"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[11]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.usiRunTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[12]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bProdNameUSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[13]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bProdNameDSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[14]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bProdWidthUSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[15]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bProdWidthDSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListWr.a_sServerTagNm[16]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyLeaderToFollowerTag.bLeaderSeqCtrlInActive"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbGetNodeHdlListWr.bEn=0);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListWr);

(fbGetNodeHdlListRd.uiTagNmCnt=14);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[0]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.sCurrProdRcp"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[1]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.diCurrProdWidthUS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[2]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.sCurrMagRcp"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[3]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.sIPAddr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[4]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.sMcNm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[5]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.bSectionLeader"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[6]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.usiRunTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[7]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.bProdRcpErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[8]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.bProdWidthErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[9]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.bMagRcpErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[10]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.bSyncTmErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[11]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.diCurrProdWidthDS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[12]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.eCurrMachineStat"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbGetNodeHdlListRd.a_sServerTagNm[13]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT("::",((*(p_sFollowerProgTagNm)))),":tyFollowerToLeaderTag.bProdChgOverActive"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbGetNodeHdlListRd.bEn=0);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListRd);

(fbWriteList.uiTagNmCnt=17);
(fbWriteList.bEn=0);;fbOPCUAWriteList(&fbWriteList);

(fbReadList.uiTagNmCnt=14);
(fbReadList.bEn=0);;fbOPCUAReadList(&fbReadList);

(fbDisconnect.bEn=0);;fbOPCUADisconnect(&fbDisconnect);

}}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Action.st"
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
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Main.st"
static void __AS__Action__Act_Main(void){
{
if((((signed long)eStatOld!=(signed long)eStat))){
(fbSyncTm.bEn=0);;fbLFLeaderSyncTm(&fbSyncTm);
(fbChgAll.bEn=0);;fbLFLeaderChgAll(&fbChgAll);
(fbChgSeq.bEn=0);;fbLFLeaderChgSeq(&fbChgSeq);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(eStatOld=eStat);

(eStatus=2);
}


switch(eStat){

case 0:{
(eStatus=0);

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(bRun1=1);
(bRun2=1);
(bStop=0);
(bStop1Done=0);
(bStop2Done=0);
(eStatus=1);

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

(bStop=1);

if((bStop1Done&bStop2Done)){

(bRun1=0);
(bRun2=0);
(bStop=0);
(bStop1Done=0);
(bStop2Done=0);
(eStatus=1);

}

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

if((bRun1&bRun2)){
(eStatus=2);

(fbSyncTm.dtCurrDT=((*(p_dtCurrDT))));
(fbSyncTm.diMcNum=diMcNum);
(fbSyncTm.bEn=1);;fbLFLeaderSyncTm(&fbSyncTm);

if((((unsigned long)fbSyncTm.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbSyncTm.udiStatus<(unsigned long)65534))){
(eStatus=3);
(udiStatus=fbSyncTm.udiStatus);
}

}else{
(eStatus=3);
(udiStatus=10000);
}

}

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

if((bRun1&bRun2)){
(eStatus=2);

(fbChgAll.bChgAuto=1);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgAll.a_bOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgAll.a_tyFollowerToLeaderTag; unsigned char* zzRValue=(unsigned char*)a_tyFollowerToLeaderTag; for(zzIndex=0; zzIndex<17800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgAll.sReqProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqProdRcpNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgAll.diReqProdRcpWidth=((*(p_diReqProdWidth))));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgAll.sReqMagRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqMagRcpNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgAll.diMcNum=diMcNum);
(fbChgAll.bEn=1);;fbLFLeaderChgAll(&fbChgAll);

if((((unsigned long)fbChgAll.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbChgAll.udiStatus<(unsigned long)65534))){
(eStatus=3);
(udiStatus=fbChgAll.udiStatus);
}

}else{
(eStatus=3);
(udiStatus=10001);
}

}

}break;case 5:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

if((bRun1&bRun2)){
(eStatus=2);

(fbChgAll.bChgAuto=0);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgAll.a_bOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgAll.a_tyFollowerToLeaderTag; unsigned char* zzRValue=(unsigned char*)a_tyFollowerToLeaderTag; for(zzIndex=0; zzIndex<17800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgAll.sReqProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqProdRcpNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgAll.diReqProdRcpWidth=((*(p_diReqProdWidth))));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgAll.sReqMagRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqMagRcpNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgAll.diMcNum=diMcNum);
(fbChgAll.bEn=1);;fbLFLeaderChgAll(&fbChgAll);

if((((unsigned long)fbChgAll.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbChgAll.udiStatus<(unsigned long)65534))){
(eStatus=3);
(udiStatus=fbChgAll.udiStatus);
}

}else{
(eStatus=3);
(udiStatus=10002);
}

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

if((bRun1&bRun2)){
(eStatus=2);

(fbChgSeq.bChgAuto=1);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgSeq.a_bOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgSeq.a_tyFollowerToLeaderTag; unsigned char* zzRValue=(unsigned char*)a_tyFollowerToLeaderTag; for(zzIndex=0; zzIndex<17800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgSeq.sReqProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqProdRcpNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgSeq.diReqProdRcpWidth=((*(p_diReqProdWidth))));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgSeq.sReqMagRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqMagRcpNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgSeq.diMcNum=diMcNum);
(fbChgSeq.bEn=1);;fbLFLeaderChgSeq(&fbChgSeq);

if((((unsigned long)fbChgSeq.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbChgSeq.udiStatus<(unsigned long)65534))){
(eStatus=3);
(udiStatus=fbChgSeq.udiStatus);
}

}else{
(eStatus=3);
(udiStatus=10003);
}

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

if((bRun1&bRun2)){
(eStatus=2);

(fbChgSeq.bChgAuto=0);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgSeq.a_bOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbChgSeq.a_tyFollowerToLeaderTag; unsigned char* zzRValue=(unsigned char*)a_tyFollowerToLeaderTag; for(zzIndex=0; zzIndex<17800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgSeq.sReqProdRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqProdRcpNm))); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgSeq.diReqProdRcpWidth=((*(p_diReqProdWidth))));
{int zzIndex; plcstring* zzLValue=(plcstring*)fbChgSeq.sReqMagRcpNm; plcstring* zzRValue=(plcstring*)((*(p_sReqMagRcpNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbChgSeq.diMcNum=diMcNum);
(fbChgSeq.bEn=1);;fbLFLeaderChgSeq(&fbChgSeq);

if((((unsigned long)fbChgSeq.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbChgSeq.udiStatus<(unsigned long)65534))){
(eStatus=3);
(udiStatus=fbChgSeq.udiStatus);
}

}else{
(eStatus=3);
(udiStatus=10004);
}

}

}break;}

}imp13_case1_7:imp13_endcase1_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Background.st"
static void __AS__Action__Act_Background(void){
{
if(((bRun1&bRun2)&~Edge0000300000&1?((Edge0000300000=(bRun1&bRun2)&1),1):((Edge0000300000=(bRun1&bRun2)&1),0))){

for((di=1);di<=c_diLFClntNum;di+=1){
if(((__AS__STRING_CMP(((*(pa_sLFIPAddr))[di-1]),"")==0))){
(diMcNum=(di-1));
goto imp3_endfor1_0;
}
}imp3_endfor1_0:;

}

__AS__Action__Act_Background_OPCUA();
__AS__Action__Act_Background_Process();
__AS__Action__Act_Background_Disconnect();

}}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Background_OPCUA.st"
static void __AS__Action__Act_Background_OPCUA(void){
{
if((((unsigned long)(unsigned char)bRun1==(unsigned long)(unsigned char)1))){

switch(eOPCUAStep){

case 0:{
(udiNodeCntr=(udiNodeCntr+1));

if((((unsigned long)udiNodeCntr>(unsigned long)c_diLFClntNum))){
(udiNodeCntr=1);
}

(eOPCUAStep=1);

}break;case 1:{
if(((__AS__STRING_CMP(((*(pa_sLFIPAddr))[udiNodeCntr-1]),"")!=0))){
if((((unsigned long)(unsigned char)((*(pa_bLFOnline))[udiNodeCntr-1])==(unsigned long)(unsigned char)1))){
if((((unsigned long)a_dwConnectionHdl[udiNodeCntr-1]!=(unsigned long)0))){
if((((unsigned long)(unsigned char)a_bNodeWr[udiNodeCntr-1]==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)a_bNodeRd[udiNodeCntr-1]==(unsigned long)(unsigned char)1))){
(eOPCUAStep=5);
}else{
(eOPCUAStep=4);
}
}else{
(eOPCUAStep=3);
}
}else{
(eOPCUAStep=2);
}
}else{
(eOPCUAStep=0);
}
}else{
(udiNodeCntr=0);
(eOPCUAStep=7);
}

}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)fbConnect.tyOPCUAParam.sIPAddr; plcstring* zzRValue=(plcstring*)((*(pa_sLFIPAddr))[udiNodeCntr-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbConnect.bEn=1);;fbOPCUAConnect(&fbConnect);

if((((unsigned long)fbConnect.udiStatus==(unsigned long)0))){
(a_dwConnectionHdl[udiNodeCntr-1]=fbConnect.dwConnectionHdl);
(fbConnect.bEn=0);;fbOPCUAConnect(&fbConnect);
(eOPCUAStep=3);
}else if((((unsigned long)fbConnect.udiStatus<(unsigned long)65534))){
(a_dwConnectionHdl[udiNodeCntr-1]=0);
(fbConnect.bEn=0);;fbOPCUAConnect(&fbConnect);
(eOPCUAStep=7);
}

}break;case 3:{
(fbGetNodeHdlListWr.dwConnectionHdl=a_dwConnectionHdl[udiNodeCntr-1]);
(fbGetNodeHdlListWr.bEn=1);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListWr);

if((((unsigned long)fbGetNodeHdlListWr.udiStatus==(unsigned long)0))){
(a_bNodeWr[udiNodeCntr-1]=1);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyWriteHdls[udiNodeCntr-1].a_dwHdls; unsigned char* zzRValue=(unsigned char*)fbGetNodeHdlListWr.a_dwNodeHdlList; for(zzIndex=0; zzIndex<256l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(fbGetNodeHdlListWr.bEn=0);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListWr);
(eOPCUAStep=4);
}else if((((unsigned long)fbGetNodeHdlListWr.udiStatus<(unsigned long)65534))){
(a_bNodeWr[udiNodeCntr-1]=0);
(fbGetNodeHdlListWr.bEn=0);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListWr);
(eOPCUAStep=7);
}

}break;case 4:{
(fbGetNodeHdlListRd.dwConnectionHdl=a_dwConnectionHdl[udiNodeCntr-1]);
(fbGetNodeHdlListRd.bEn=1);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListRd);

if((((unsigned long)fbGetNodeHdlListRd.udiStatus==(unsigned long)0))){
(a_bNodeRd[udiNodeCntr-1]=1);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)a_tyReadHdls[udiNodeCntr-1].a_dwHdls; unsigned char* zzRValue=(unsigned char*)fbGetNodeHdlListRd.a_dwNodeHdlList; for(zzIndex=0; zzIndex<256l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(fbGetNodeHdlListRd.bEn=0);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListRd);
(eOPCUAStep=5);
}else if((((unsigned long)fbGetNodeHdlListRd.udiStatus<(unsigned long)65534))){
(a_bNodeRd[udiNodeCntr-1]=0);
(fbGetNodeHdlListRd.bEn=0);;fbOPCUAGetNodeHdlList(&fbGetNodeHdlListRd);
(eOPCUAStep=7);
}

}break;case 5:{
(fbWriteList.dwConnectionHdl=a_dwConnectionHdl[udiNodeCntr-1]);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbWriteList.a_dwNodeHdlList; unsigned char* zzRValue=(unsigned char*)a_tyWriteHdls[udiNodeCntr-1].a_dwHdls; for(zzIndex=0; zzIndex<256l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
udint2str(udiNodeCntr,sNodeCntr,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[0]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].sReqProdRcpNm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[1]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].diReqProdRcpWidth"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[2]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].sReqMagRcpNm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[3]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bMnlAccData"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[4]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bBypassMnlAccData"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[5]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bBlkDS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[6]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bBlkUS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[7]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bSetTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[8]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].dtTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[9]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].uiTmZone"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[10]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bBypassWidthChk"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[11]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].usiRunTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[12]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bProdNameUSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[13]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bProdNameDSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[14]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bProdWidthUSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[15]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bProdWidthDSWarn"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbWriteList.a_sClientTagNm[16]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyLeaderToFollowerTag["),sNodeCntr),"].bLeaderSeqCtrlInActive"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbWriteList.bEn=1);;fbOPCUAWriteList(&fbWriteList);

if((((unsigned long)fbWriteList.udiStatus==(unsigned long)0))){
(fbWriteList.bEn=0);;fbOPCUAWriteList(&fbWriteList);
(eOPCUAStep=6);
}else if((((unsigned long)fbWriteList.udiStatus<(unsigned long)65534))){
(fbWriteList.bEn=0);;fbOPCUAWriteList(&fbWriteList);
(eOPCUAStep=7);
}

}break;case 6:{
(fbReadList.dwConnectionHdl=a_dwConnectionHdl[udiNodeCntr-1]);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbReadList.a_dwNodeHdlList; unsigned char* zzRValue=(unsigned char*)a_tyReadHdls[udiNodeCntr-1].a_dwHdls; for(zzIndex=0; zzIndex<256l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
udint2str(udiNodeCntr,sNodeCntr,81);
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[0]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].sCurrProdRcp"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[1]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].diCurrProdWidthUS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[2]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].sCurrMagRcp"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[3]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].sIPAddr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[4]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].sMcNm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[5]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].bSectionLeader"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[6]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].usiRunTm"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[7]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].bProdRcpErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[8]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].bProdWidthErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[9]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].bMagRcpErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[10]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].bSyncTmErr"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[11]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].diCurrProdWidthDS"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[12]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].eCurrMachineStat"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbReadList.a_sClientTagNm[13]; plcstring* zzRValue=(plcstring*)CONCAT(CONCAT(CONCAT(CONCAT("::",((*(p_sLeaderProgTagNm)))),":a_tyFollowerToLeaderTag["),sNodeCntr),"].bProdChgOverActive"); for(zzIndex=0; zzIndex<255l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbReadList.bEn=1);;fbOPCUAReadList(&fbReadList);

if((((unsigned long)fbReadList.udiStatus==(unsigned long)0))){
(fbReadList.bEn=0);;fbOPCUAReadList(&fbReadList);
(eOPCUAStep=7);
}else if((((unsigned long)fbReadList.udiStatus<(unsigned long)65534))){
(fbReadList.bEn=0);;fbOPCUAReadList(&fbReadList);
(eOPCUAStep=7);
}

}break;case 7:{
if((bStop&bStop2Done)){
if((((unsigned long)(unsigned char)bCntr==(unsigned long)(unsigned char)0))){
(bCntr=1);
}else{
(bStop1Done=1);
(bCntr=0);
}
}else{
(bCntr=0);
}

(eOPCUAStep=0);

}break;}

}

}imp5_case1_7:imp5_endcase1_0:imp5_else0_0:imp5_end0_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Background_Process.st"
static void __AS__Action__Act_Background_Process(void){
{
if(((((unsigned long)(unsigned char)bRun2==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bStop==(unsigned long)(unsigned char)0)))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbOnlineChk.a_bOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbOnlineChk.a_tyFollowerToLeaderTag; unsigned char* zzRValue=(unsigned char*)a_tyFollowerToLeaderTag; for(zzIndex=0; zzIndex<17800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(fbOnlineChk.diMcNum=diMcNum);
(fbOnlineChk.bEn=1);;fbLFLeaderOnlineChk(&fbOnlineChk);

{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbBlkUSDS.a_tyFollowerToLeaderTag; unsigned char* zzRValue=(unsigned char*)a_tyFollowerToLeaderTag; for(zzIndex=0; zzIndex<17800l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(fbBlkUSDS.diBeforeOven1=((*(p_diBeforeOven))));
(fbBlkUSDS.diAfterOven1=((*(p_diAfterOven))));
(fbBlkUSDS.diBeforeOven2=((*(p_diBeforeOven2))));
(fbBlkUSDS.diAfterOven2=((*(p_diAfterOven2))));
(fbBlkUSDS.diMcNum=diMcNum);
{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbBlkUSDS.pa_bLFOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(fbBlkUSDS.bSeqMode=((((signed long)eStat==(signed long)6))|(((signed long)eStat==(signed long)7))));
(fbBlkUSDS.bEn=1);;fbLFLeaderBlkUSDS(&fbBlkUSDS);

{int zzIndex; unsigned char* zzLValue=(unsigned char*)fbDataUpdt.a_bOnline; unsigned char* zzRValue=(unsigned char*)((*(pa_bLFOnline))); for(zzIndex=0; zzIndex<50l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(fbDataUpdt.diMcNum=diMcNum);
(fbDataUpdt.bEn=1);;fbLFLeaderDataUpdt(&fbDataUpdt);


}else if((((unsigned long)(unsigned char)bStop==(unsigned long)(unsigned char)1))){
(fbOnlineChk.bEn=0);;fbLFLeaderOnlineChk(&fbOnlineChk);
(fbBlkUSDS.bEn=0);;fbLFLeaderBlkUSDS(&fbBlkUSDS);
(fbDataUpdt.bEn=0);;fbLFLeaderDataUpdt(&fbDataUpdt);
(bStop2Done=1);

}

}imp6_else0_1:imp6_end0_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Background_Disconnect.st"
static void __AS__Action__Act_Background_Disconnect(void){
{
if(((((signed long)memcmp(((unsigned long)(&((*(pa_sLFIPAddr))))),((unsigned long)(&a_sLFIPAddrOld)),800)!=(signed long)0))&(((unsigned long)(unsigned char)bDisconnecting==(unsigned long)(unsigned char)0)))){
for((di=1);di<=c_diLFClntNum;di+=1){

if(((__AS__STRING_CMP(((*(pa_sLFIPAddr))[di-1]),a_sLFIPAddrOld[di-1])!=0))){
(diDisconnectIdx=di);
(bDisconnecting=1);
goto imp4_endfor1_0;
}

}imp4_endfor1_0:;
}

if((((unsigned long)(unsigned char)bDisconnecting==(unsigned long)(unsigned char)1))){

if((((unsigned long)a_dwConnectionHdl[diDisconnectIdx-1]!=(unsigned long)0))){
(fbDisconnect.dwConnectionHdl=a_dwConnectionHdl[diDisconnectIdx-1]);
(fbDisconnect.bEn=1);;fbOPCUADisconnect(&fbDisconnect);

if((((unsigned long)fbDisconnect.udiStatus==(unsigned long)0))){
(a_dwConnectionHdl[diDisconnectIdx-1]=0);
(a_bNodeWr[diDisconnectIdx-1]=0);
(a_bNodeRd[diDisconnectIdx-1]=0);
__AS__MEMSET(((unsigned long)(&a_tyFollowerToLeaderTag[diDisconnectIdx-1])),0,356);
(fbDisconnect.bEn=0);;fbOPCUADisconnect(&fbDisconnect);

{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLFIPAddrOld[diDisconnectIdx-1]; plcstring* zzRValue=(plcstring*)((*(pa_sLFIPAddr))[diDisconnectIdx-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bDisconnecting=0);

}else if((((unsigned long)fbDisconnect.udiStatus<(unsigned long)65534))){
(a_dwConnectionHdl[diDisconnectIdx-1]=0);
(a_bNodeWr[diDisconnectIdx-1]=0);
(a_bNodeRd[diDisconnectIdx-1]=0);
__AS__MEMSET(((unsigned long)(&a_tyFollowerToLeaderTag[diDisconnectIdx-1])),0,356);
(fbDisconnect.bEn=0);;fbOPCUADisconnect(&fbDisconnect);

{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLFIPAddrOld[diDisconnectIdx-1]; plcstring* zzRValue=(plcstring*)((*(pa_sLFIPAddr))[diDisconnectIdx-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bDisconnecting=0);

}

}else{
(a_bNodeWr[diDisconnectIdx-1]=0);
(a_bNodeRd[diDisconnectIdx-1]=0);
__AS__MEMSET(((unsigned long)(&a_tyFollowerToLeaderTag[diDisconnectIdx-1])),0,356);

{int zzIndex; plcstring* zzLValue=(plcstring*)a_sLFIPAddrOld[diDisconnectIdx-1]; plcstring* zzRValue=(plcstring*)((*(pa_sLFIPAddr))[diDisconnectIdx-1]); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(bDisconnecting=0);

}

}

}imp4_end4_0:imp4_else3_0:imp4_end3_0:;}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
}}
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sLFLeaderProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

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
#line 44 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/LF/LFLeader/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LFLeader/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/LF/LFLeader/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/LFLeader/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/LFLeader/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/LF/LFLeader/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/LFLeader/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'a_tyFollowerToLeaderTag'\\n\"");
__asm__(".ascii \"plcdata_const 'a_sLFIPAddrOld'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_ELEMENTS_INDEXRANGE'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_ELEMENTS_NODELIST'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_INDEX_INDEXRANGE'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_INDEX_NODELIST'\\n\"");
__asm__(".ascii \"plcdata_const 'c_diLFClntNum'\\n\"");
__asm__(".previous");
