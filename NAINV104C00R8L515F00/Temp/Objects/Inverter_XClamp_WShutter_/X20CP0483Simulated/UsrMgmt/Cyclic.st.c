#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/UsrMgmt/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.st"
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
__AS__Action__Act_Link();
__AS__Action__Act_Main();
__AS__Action__Act_Alarm();

}

}imp10_end0_0:;}
#line 29 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkStartupRun=p_StartupRun);


(p_udiRstErr=p_RstErrReset);
(p_tyInfoIn=p_UIUsrMgmtInfoIn);
(p_tyAccessRightLvl1=p_UIUsrMgmtAccessRightLvl1Wr);
(p_tyAccessRightLvl2=p_UIUsrMgmtAccessRightLvl2Wr);
(p_tyAccessRightLvl3=p_UIUsrMgmtAccessRightLvl3Wr);
(p_sProgNm=p_NtParamUsrMgmtProgNm);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);



}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupUsrMgmtAct);
}else{
(p_eAct=p_UIUsrMgmtAct);
}

}imp7_end0_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

}imp9_end0_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiMax=((unsigned long)(&c_udiUsrMgmtMax)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_tyInfoIn=((unsigned long)(&tyInfoIn)));
(p_tyAccessRightLvl1=((unsigned long)(&tyAccessRightLvl1)));
(p_tyAccessRightLvl2=((unsigned long)(&tyAccessRightLvl2)));
(p_tyAccessRightLvl3=((unsigned long)(&tyAccessRightLvl3)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));

}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate1.sDevice; plcstring* zzRValue=(plcstring*)"F"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate1.sDirName; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate1.bEn=0);;fbDirCreate(&fbDirCreate1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate2.sDevice; plcstring* zzRValue=(plcstring*)"F"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate2.sDirName; plcstring* zzRValue=(plcstring*)"Private"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate2.bEn=0);;fbDirCreate(&fbDirCreate2);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate3.sDevice; plcstring* zzRValue=(plcstring*)"User"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbDirCreate3.sDirName; plcstring* zzRValue=(plcstring*)"UserMgmt"; for(zzIndex=0; zzIndex<8l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbDirCreate3.bEn=0);;fbDirCreate(&fbDirCreate3);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sDevice; plcstring* zzRValue=(plcstring*)"CustomerUser"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileRead1.sFile; plcstring* zzRValue=(plcstring*)"User.dat"; for(zzIndex=0; zzIndex<8l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileRead1.udiOffset=0);
(fbFileRead1.p_Dest=((unsigned long)(&tyFullData)));
(fbFileRead1.udiLen=3552);
(fbFileRead1.usiEncryptCode=130);
(fbFileRead1.bEn=0);;fbFileFullReadEncry(&fbFileRead1);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sDevice; plcstring* zzRValue=(plcstring*)"CustomerUser"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)fbFileWrite1.sFile; plcstring* zzRValue=(plcstring*)"User.dat"; for(zzIndex=0; zzIndex<8l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbFileWrite1.udiOffset=0);
(fbFileWrite1.p_Src=((unsigned long)(&tyFullDataTemp)));
(fbFileWrite1.udiLen=3552);
(fbFileWrite1.udiOption=0);
(fbFileWrite1.usiEncryptCode=130);
(fbFileWrite1.bEn=0);;fbFileFullWriteEncry(&fbFileWrite1);

}}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_Action.st"
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
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_Main.st"
static void __AS__Action__Act_Main(void){
{

switch(eStat){

case 0:{
if((((signed long)eStatus!=(signed long)0))){

(fbDirCreate1.bEn=0);;fbDirCreate(&fbDirCreate1);
(fbDirCreate2.bEn=0);;fbDirCreate(&fbDirCreate2);
(fbDirCreate3.bEn=0);;fbDirCreate(&fbDirCreate3);
(fbFileRead1.bEn=0);;fbFileFullReadEncry(&fbFileRead1);
(fbFileWrite1.bEn=0);;fbFileFullWriteEncry(&fbFileWrite1);
(usiStep=0);
(udiAddStatus=0);

(bListFull=0);
(bLoginSuccess=0);
(bNmEmpty=0);
(bNmExist=0);
(bNmNotExist=0);
(bPwMismatch=0);
(bFileNotFound=0);
(bUnableDelete=0);

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
(eStatus=1);
}else if((((unsigned long)fbDirCreate3.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbDirCreate3.udiStatus==(unsigned long)1908))){
(udiStatus=10002);
}else{
(udiStatus=fbDirCreate3.udiStatus);
}
}

}break;}

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNmNotExist=(((unsigned long)fRecipeGetInfo(((*(p_tyInfoIn)).sUsrNm),((unsigned long)(&tyInfoOut)),((unsigned long)(&tyFullData.a_tyAllList)),68,((unsigned long)(&tyFullData.a_tyAllList[1-1].sUsrNm)),31,((*(p_udiMax))))==(unsigned long)0)));

if((((unsigned long)(unsigned char)bNmNotExist==(unsigned long)(unsigned char)0))){

if(((__AS__STRING_CMP(((*(p_tyInfoIn)).sPw),tyInfoOut.sPw)==0))){
(bLoginSuccess=1);
(bPwMismatch=0);
(tyCurrUsr=*(struct tyUsrMgmtParam*)&tyInfoOut);

if((((signed long)tyCurrUsr.eUsrLvl==(signed long)1))){

(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl2);
(tyCurrAccessRight.bUsrMgmt=0);

if(((__AS__STRING_CMP(tyCurrAccessRight.sNm,"")==0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrAccessRight.sNm; plcstring* zzRValue=(plcstring*)"Level2"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if((((signed long)tyCurrUsr.eUsrLvl==(signed long)2))){

(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl3);
(tyCurrAccessRight.bUsrMgmt=0);

if(((__AS__STRING_CMP(tyCurrAccessRight.sNm,"")==0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrAccessRight.sNm; plcstring* zzRValue=(plcstring*)"Level3"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}else if((((signed long)tyCurrUsr.eUsrLvl==(signed long)3))){

(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyAccessRightAdmin);

}

}else{
(bLoginSuccess=0);
(bPwMismatch=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sUsrNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sPw; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrUsr.eUsrLvl=0);
(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl1);
(tyCurrAccessRight.bUsrMgmt=0);

if(((__AS__STRING_CMP(tyCurrAccessRight.sNm,"")==0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrAccessRight.sNm; plcstring* zzRValue=(plcstring*)"Level1"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}

}else{
(bLoginSuccess=0);
(bPwMismatch=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sUsrNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sPw; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrUsr.eUsrLvl=0);
(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl1);
(tyCurrAccessRight.bUsrMgmt=0);

if(((__AS__STRING_CMP(tyCurrAccessRight.sNm,"")==0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrAccessRight.sNm; plcstring* zzRValue=(plcstring*)"Level1"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}

}

(eStatus=1);

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bLoginSuccess=1);
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sUsrNm; plcstring* zzRValue=(plcstring*)"User Bypass"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sPw; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrUsr.eUsrLvl=3);
(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyAccessRightAdmin);

(eStatus=1);

}

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sUsrNm; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrUsr.sPw; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyCurrUsr.eUsrLvl=0);
(tyCurrAccessRight=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl1);
(tyCurrAccessRight.bUsrMgmt=0);

if(((__AS__STRING_CMP(tyCurrAccessRight.sNm,"")==0))){
{int zzIndex; plcstring* zzLValue=(plcstring*)tyCurrAccessRight.sNm; plcstring* zzRValue=(plcstring*)"Level1"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}


(eStatus=1);

}

}break;case 5:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(usiStep){
case 0:{
(udiAddStatus=fRecipeAdd(((unsigned long)(&((*(p_tyInfoIn))))),((unsigned long)(&tyFullDataTemp.a_tyAllList)),68,((unsigned long)(&tyFullDataTemp.a_tyAllList[1-1].sUsrNm)),31,((*(p_udiMax)))));

if((((unsigned long)udiAddStatus==(unsigned long)1600))){
(bNmEmpty=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)1601))){
(bListFull=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)1602))){
(bNmExist=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)0))){
(usiStep=1);

}

}break;case 1:{
(fbFileWrite1.bEn=1);;fbFileFullWriteEncry(&fbFileWrite1);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullData.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullDataTemp.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)1))){
(udiCnt=1);
__AS__MEMSET(((unsigned long)(&a_tyLvl2List)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)1))){
(a_tyLvl2List[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt=(udiCnt+1));
}
}imp8_endfor26_0:;

}else if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)2))){
(udiCnt=1);
__AS__MEMSET(((unsigned long)(&a_tyLvl3List)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)2))){
(a_tyLvl3List[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt=(udiCnt+1));
}
}imp8_endfor28_0:;

}else if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)3))){
(udiCnt=1);
(bLastAdmin=1);
__AS__MEMSET(((unsigned long)(&a_tyAdminList)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)3))){
(a_tyAdminList[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(bLastAdmin=(((unsigned long)udiCnt==(unsigned long)1)));
(udiCnt=(udiCnt+1));
}
}imp8_endfor30_0:;

}

(eStatus=1);

}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullDataTemp.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullData.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10004);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10005);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10006);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10007);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10008);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}break;}

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(usiStep){
case 0:{
(udiAddStatus=fRecipeAddEdit(((unsigned long)(&((*(p_tyInfoIn))))),((unsigned long)(&tyFullDataTemp.a_tyAllList)),68,((unsigned long)(&tyFullDataTemp.a_tyAllList[1-1].sUsrNm)),31,((*(p_udiMax)))));

if((((unsigned long)udiAddStatus==(unsigned long)1600))){
(bNmEmpty=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)1601))){
(bListFull=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)0))){
(usiStep=1);

}

}break;case 1:{
(fbFileWrite1.bEn=1);;fbFileFullWriteEncry(&fbFileWrite1);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullData.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullDataTemp.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

(udiCnt=1);
(udiCnt1=1);
(udiCnt2=1);
(bLastAdmin=1);
__AS__MEMSET(((unsigned long)(&a_tyLvl2List)),0,3400);
__AS__MEMSET(((unsigned long)(&a_tyLvl3List)),0,3400);
__AS__MEMSET(((unsigned long)(&a_tyAdminList)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)1))){
(a_tyLvl2List[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt=(udiCnt+1));
}else if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)2))){
(a_tyLvl3List[udiCnt1-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt1=(udiCnt1+1));
}else if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)3))){
(a_tyAdminList[udiCnt2-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(bLastAdmin=(((unsigned long)udiCnt2==(unsigned long)1)));
(udiCnt2=(udiCnt2+1));
}
}imp8_endfor37_0:;

(eStatus=1);

}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullDataTemp.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullData.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10014);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10015);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10016);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10017);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10018);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}break;}

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(usiStep){
case 0:{
if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)3))){
(usiStep=1);
}else{
(usiStep=2);
}

}break;case 1:{
if((((unsigned long)(unsigned char)bLastAdmin==(unsigned long)(unsigned char)0))){
(usiStep=2);
}else{
(bUnableDelete=1);
(eStatus=1);
}

}break;case 2:{
(udiAddStatus=fRecipeDelete(((unsigned long)(&((*(p_tyInfoIn))))),((unsigned long)(&tyFullDataTemp.a_tyAllList)),68,((unsigned long)(&tyFullDataTemp.a_tyAllList[1-1].sUsrNm)),31,((*(p_udiMax)))));

if((((unsigned long)udiAddStatus==(unsigned long)1600))){
(bUnableDelete=1);
(bNmEmpty=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)1603))){
(bUnableDelete=1);
(bNmNotExist=1);
(eStatus=1);

}else if((((unsigned long)udiAddStatus==(unsigned long)0))){
(usiStep=3);

}

}break;case 3:{
(fbFileWrite1.bEn=1);;fbFileFullWriteEncry(&fbFileWrite1);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullData.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullDataTemp.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)1))){
(udiCnt=1);
__AS__MEMSET(((unsigned long)(&a_tyLvl2List)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)1))){
(a_tyLvl2List[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt=(udiCnt+1));
}
}imp8_endfor47_0:;

}else if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)2))){
(udiCnt=1);
__AS__MEMSET(((unsigned long)(&a_tyLvl3List)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)2))){
(a_tyLvl3List[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt=(udiCnt+1));
}
}imp8_endfor49_0:;

}else if((((signed long)((*(p_tyInfoIn)).eUsrLvl)==(signed long)3))){
(udiCnt=1);
(bLastAdmin=1);
__AS__MEMSET(((unsigned long)(&a_tyAdminList)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)3))){
(a_tyAdminList[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(bLastAdmin=(((unsigned long)udiCnt==(unsigned long)1)));
(udiCnt=(udiCnt+1));
}
}imp8_endfor51_0:;

}

(eStatus=1);

}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullDataTemp.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullData.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10024);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10025);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10026);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10027);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10028);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}break;}

}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

switch(usiStep){
case 0:{
(tyFullDataTemp.tyAccessRightLvl1=*(struct tyUsrMgmtAccessRight*)&((*(p_tyAccessRightLvl1))));
(tyFullDataTemp.tyAccessRightLvl2=*(struct tyUsrMgmtAccessRight*)&((*(p_tyAccessRightLvl2))));
(tyFullDataTemp.tyAccessRightLvl3=*(struct tyUsrMgmtAccessRight*)&((*(p_tyAccessRightLvl3))));

(usiStep=1);

}break;case 1:{
(fbFileWrite1.bEn=1);;fbFileFullWriteEncry(&fbFileWrite1);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)0))){
(tyFullData.tyAccessRightLvl1=*(struct tyUsrMgmtAccessRight*)&tyFullDataTemp.tyAccessRightLvl1);
(tyFullData.tyAccessRightLvl2=*(struct tyUsrMgmtAccessRight*)&tyFullDataTemp.tyAccessRightLvl2);
(tyFullData.tyAccessRightLvl3=*(struct tyUsrMgmtAccessRight*)&tyFullDataTemp.tyAccessRightLvl3);
(eStatus=1);

}else if((((unsigned long)fbFileWrite1.udiStatus<(unsigned long)65534))){
(tyFullDataTemp.tyAccessRightLvl1=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl1);
(tyFullDataTemp.tyAccessRightLvl2=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl2);
(tyFullDataTemp.tyAccessRightLvl3=*(struct tyUsrMgmtAccessRight*)&tyFullData.tyAccessRightLvl3);
(eStatus=3);

if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1900))){
(udiStatus=10009);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1901))){
(udiStatus=10010);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1903))){
(udiStatus=10011);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1904))){
(udiStatus=10012);
}else if((((unsigned long)fbFileWrite1.udiStatus==(unsigned long)1914))){
(udiStatus=10013);
}else{
(udiStatus=fbFileWrite1.udiStatus);
}
}

}break;}

}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbFileRead1.bEn=1);;fbFileFullReadEncry(&fbFileRead1);
if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)0))){
{int zzIndex; unsigned char* zzLValue=(unsigned char*)tyFullDataTemp.a_tyAllList; unsigned char* zzRValue=(unsigned char*)tyFullData.a_tyAllList; for(zzIndex=0; zzIndex<3400l; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex];};

(udiCnt=1);
(udiCnt1=1);
(udiCnt2=1);
(bLastAdmin=1);
__AS__MEMSET(((unsigned long)(&a_tyLvl2List)),0,3400);
__AS__MEMSET(((unsigned long)(&a_tyLvl3List)),0,3400);
__AS__MEMSET(((unsigned long)(&a_tyAdminList)),0,3400);

for((udi=1);udi<=((*(p_udiMax)));udi+=1){
if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)1))){
(a_tyLvl2List[udiCnt-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt=(udiCnt+1));
}else if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)2))){
(a_tyLvl3List[udiCnt1-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(udiCnt1=(udiCnt1+1));
}else if((((signed long)tyFullData.a_tyAllList[udi-1].eUsrLvl==(signed long)3))){
(a_tyAdminList[udiCnt2-1]=*(struct tyUsrMgmtParam*)&tyFullData.a_tyAllList[udi-1]);
(bLastAdmin=(((unsigned long)udiCnt2==(unsigned long)1)));
(udiCnt2=(udiCnt2+1));
}
}imp8_endfor60_0:;

(eStatus=1);

}else if((((unsigned long)fbFileRead1.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1900))){
(udiStatus=10034);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1902))){
(udiStatus=10035);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1904))){
(udiStatus=10036);
}else if((((unsigned long)fbFileRead1.udiStatus==(unsigned long)1915))){
(eStatus=1);
(bFileNotFound=1);
}else{
(udiStatus=fbFileRead1.udiStatus);
}
}

}

}break;}

}imp8_case0_9:imp8_endcase0_0:;}
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sUsrMgmtProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


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
#line 30 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/UsrMgmt/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/UsrMgmt/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UsrMgmt/UsrMgmt/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/UsrMgmt/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'tyFullData'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyLvl2List'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyLvl3List'\\n\"");
__asm__(".ascii \"plcdata_const 'a_tyAdminList'\\n\"");
__asm__(".ascii \"plcdata_const 'tyFullDataTemp'\\n\"");
__asm__(".ascii \"plcdata_const 'c_udiUsrMgmtMax'\\n\"");
__asm__(".previous");
