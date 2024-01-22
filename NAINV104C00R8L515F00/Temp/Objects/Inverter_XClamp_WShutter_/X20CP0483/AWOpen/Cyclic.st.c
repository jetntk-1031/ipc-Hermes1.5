#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/AWOpen/Cyclicst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.st"
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

if(((((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0))&~Edge0001700000&1?((Edge0001700000=(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0))&1),1):((Edge0001700000=(((unsigned long)(unsigned char)((*(p_bDis)))==(unsigned long)(unsigned char)0))&1),0))){
(bModuleNotOK=1);
}

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

__AS__Action__Act_CombineErr();
__AS__Action__Act_Alarm();
__AS__Action__Act_Alarm1();
__AS__Action__Act_Alarm2();
__AS__Action__Act_Alarm3();

}

}imp17_end0_0:;}
#line 50 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_InitGlobal.st"
static void __AS__Action__Act_InitGlobal(void){
{



(p_bLinkOpsRun=p_OpsRun);
(p_bLinkStartupRun=p_StartupRun);


(p_udiRstErr=p_RstErrReset);
(p_bPrep=p_NtParamAWPrep);
(p_bDis=p_McParamAWDis);
(p_bOps=p_OpsStatusRun);
(p_bManual=p_UIMnlMod);
(p_diWidthAtHmPos=p_McParamWidthAtHmPos);
(p_tyTuning=p_NtParamAWTuning);
(p_diJogVelInUMPS=p_UIMnlAWJogSpd);
(p_diMovePosInUM=p_UIMnlAWTargetPos);
(p_diMoveDistInUM=p_UIMnlAWStepSize);
(p_diMoveAcc=p_NtParamAWAcc);
(p_diMoveDec=p_NtParamAWDec);
(p_diMinWidthInUM=p_NtParamProdRcpMinWidth);
(p_diMaxWidthInUM=p_NtParamProdRcpMaxWidth);

(p_diWidthOffsetInUM=p_McParamWidthOffset);
(p_bInletSensor=p_DIConvLftSen);
(p_bOutletSensor=p_DIConvRgtSen);
(p_bDir=p_NtParamAWDir);
(p_bDirBl=p_NtParamAWDirBl);
(p_usiNode=p_NtParamAWNode);
(p_sDevice=p_NtParamAWDevice);
(p_sProgNm=p_NtParamAWProgNm);
(p_diMoveBacklashDistInUM=p_NtParamAWMovBlDistInUM);
(p_diPitchInUM=p_NtParamAWPitchInUM);
(p_tyParamInHm=p_NtParamAWParamInHm);
(p_tyParamInConvert=p_NtParamAWParamInConvert);
(p_bNtSettingsLoadDone=p_StartupNtSettingsLoadDone);
(p_eNtParamMotorType=p_NtParamAWMotorType);

(p_bClamp2Sensor=p_DIClamp2Sen);
(p_bClamp3Sensor=p_DIClamp3Sen);

(p_bInletShutterCloseRS=p_DIInShutterCloseRS);
(p_bOutletShutterCloseRS=p_DIOutShutterCloseRS);
(p_bInletShutterPrep=p_NtParamProjInletShutPrep);
(p_bInletShutterDis=p_McParamInShutterDis);
(p_bOutletShutterPrep=p_NtParamProjOutletShutPrep);
(p_bOutletShutterDis=p_McParamOutShutterDis);


}}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_LinkAction.st"
static void __AS__Action__Act_LinkAction(void){
{
if((((signed long)eStatus==(signed long)0))){
if(bModuleNotOK){
(p_eAct=((unsigned long)(&eAct)));
}else{
if((((unsigned long)(unsigned char)((*(p_bLinkStartupRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_StartupAWAct);
}else if((((unsigned long)(unsigned char)((*(p_bLinkOpsRun)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_OpsInvertAWAct);
}else if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))){
(p_eAct=p_UIAWOpenAct);
}else{
(p_eAct=((unsigned long)(&eAct)));
}
}
}

if(((~((*(p_bManual)))&Edge0001200000&1?((Edge0001200000=((*(p_bManual)))&1),1):((Edge0001200000=((*(p_bManual)))&1),0))|(~((*(p_bLinkOpsRun)))&Edge0001200001&1?((Edge0001200001=((*(p_bLinkOpsRun)))&1),1):((Edge0001200001=((*(p_bLinkOpsRun)))&1),0))|(~((*(p_bLinkStartupRun)))&Edge0001200002&1?((Edge0001200002=((*(p_bLinkStartupRun)))&1),1):((Edge0001200002=((*(p_bLinkStartupRun)))&1),0)))){
(tyParamOutDriver.uiCtrlword_6040=0);
}

}imp12_else3_0:imp12_end3_0:;}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_LinkEn.st"
static void __AS__Action__Act_LinkEn(void){
{


}}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Link.st"
static void __AS__Action__Act_Link(void){
{
if((((unsigned long)(unsigned char)((*(p_bManual)))==(unsigned long)(unsigned char)1))){
(p_diGoWidth=p_UIMnlAWGoWidth);
(p_diMoveVelInUMPS=p_UIMnlAWNomSpd);
}else{
(p_diGoWidth=p_ProdRcpCurrRcp0Width);
(p_diMoveVelInUMPS=p_NtParamAWAutoSpd);
}

if(((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))&(((*(p_bOutletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bOutletShutterDis)))==(unsigned long)(unsigned char)0))))){
((*(p_bInterruptSensor))=(((*(p_bClamp2Sensor)))|((*(p_bClamp3Sensor)))|(((unsigned long)(unsigned char)((*(p_bInletShutterCloseRS)))==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)((*(p_bOutletShutterCloseRS)))==(unsigned long)(unsigned char)0))));

}else if((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))){
((*(p_bInterruptSensor))=(((*(p_bClamp2Sensor)))|((*(p_bClamp3Sensor)))|(((unsigned long)(unsigned char)((*(p_bInletShutterCloseRS)))==(unsigned long)(unsigned char)0))));

}else if((((*(p_bInletShutterPrep)))&(((unsigned long)(unsigned char)((*(p_bInletShutterDis)))==(unsigned long)(unsigned char)0)))){
((*(p_bInterruptSensor))=(((*(p_bClamp2Sensor)))|((*(p_bClamp3Sensor)))|(((unsigned long)(unsigned char)((*(p_bOutletShutterCloseRS)))==(unsigned long)(unsigned char)0))));

}else{
((*(p_bInterruptSensor))=(((*(p_bClamp2Sensor)))|((*(p_bClamp3Sensor)))));
}

}imp11_end1_0:;}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_RstErr.st"
static void __AS__Action__Act_RstErr(void){
{
if((((unsigned long)((*(p_udiRstErr)))!=(unsigned long)udiRstErrOld))){
(bRstErr=1);
(udiRstErrOld=((*(p_udiRstErr))));
}else{
(bRstErr=0);
}

(((_2byte_bit_field_*)(&tyParamOutDriver.uiCtrlword_6040))->bit7=bRstErr);

}}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_InitLocal.st"
static void __AS__Action__Act_InitLocal(void){
{

(p_eAct=((unsigned long)(&eAct)));
(p_udiRstErr=((unsigned long)(&udiRstErr)));
(p_bPrep=((unsigned long)(&bPrep)));
(p_bEn=((unsigned long)(&bEn)));
(p_bDis=((unsigned long)(&bDis)));
(p_bOps=((unsigned long)(&bOps)));
(p_bManual=((unsigned long)(&bManual)));
(p_diWidthAtHmPos=((unsigned long)(&diWidthAtHmPos)));
(p_tyTuning=((unsigned long)(&tyTuning)));
(p_diGoWidth=((unsigned long)(&diGoWidth)));
(p_diJogVelInUMPS=((unsigned long)(&diJogVelInUMPS)));
(p_diMovePosInUM=((unsigned long)(&diMovePosInUM)));
(p_diMoveDistInUM=((unsigned long)(&diMoveDistInUM)));
(p_diMoveVelInUMPS=((unsigned long)(&diMoveVelInUMPS)));
(p_diMoveAcc=((unsigned long)(&diMoveAcc)));
(p_diMoveDec=((unsigned long)(&diMoveDec)));
(p_diMinAbsPosInUM=((unsigned long)(&diMinAbsPosInUM)));
(p_diMaxAbsPosInUM=((unsigned long)(&diMaxAbsPosInUM)));
(p_diMinWidthInUM=((unsigned long)(&diMinWidthInUM)));
(p_diMaxWidthInUM=((unsigned long)(&diMaxWidthInUM)));
(p_diWidthOffsetInUM=((unsigned long)(&diWidthOffsetInUM)));
(p_bInletSensor=((unsigned long)(&bInletSensor)));
(p_bOutletSensor=((unsigned long)(&bOutletSensor)));
(p_bClearSensor=((unsigned long)(&bClearSensor)));
(p_bMiddleSensor=((unsigned long)(&bMiddleSensor)));
(p_bInterruptSensor=((unsigned long)(&bInterruptSensor)));
(p_bOpenInterruptSensor=((unsigned long)(&bOpenInterruptSensor)));
(p_bCloseInterruptSensor=((unsigned long)(&bCloseInterruptSensor)));
(p_bDir=((unsigned long)(&bDir)));
(p_bDirBl=((unsigned long)(&bDirBl)));
(p_bNoIndexPulse=((unsigned long)(&bNoIndexPulse)));
(p_usiNode=((unsigned long)(&usiNode)));
(p_sDevice=((unsigned long)(&sDevice)));
(p_sProgNm=((unsigned long)(&sProgNm)));
(p_diMoveBacklashDistInUM=((unsigned long)(&diMoveBacklashDistInUM)));
(p_diPitchInUM=((unsigned long)(&diPitchInUM)));
(p_tyParamInHm=((unsigned long)(&tyParamInHm)));
(p_tyParamInConvert=((unsigned long)(&tyParamInConvert)));
(p_bNtSettingsLoadDone=((unsigned long)(&bNtSettingsLoadDone)));
(p_eNtParamMotorType=((unsigned long)(&eMotorType)));

(p_bClamp2Sensor=((unsigned long)(&bClamp2Sensor)));
(p_bClamp3Sensor=((unsigned long)(&bClamp3Sensor)));

(p_bInletShutterCloseRS=((unsigned long)(&bInletShutterCloseRS)));
(p_bOutletShutterCloseRS=((unsigned long)(&bOutletShutterCloseRS)));
(p_bInletShutterPrep=((unsigned long)(&bInletShutterPrep)));
(p_bInletShutterDis=((unsigned long)(&bInletShutterDis)));
(p_bOutletShutterPrep=((unsigned long)(&bOutletShutterPrep)));
(p_bOutletShutterDis=((unsigned long)(&bOutletShutterDis)));

}}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Initial.st"
static void __AS__Action__Act_Initial(void){
{

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(tyParamInMove.diBacklashDistInUM=((*(p_diMoveBacklashDistInUM))));
(tyParamInMove.diAcc=((*(p_diMoveAcc))));
(tyParamInMove.diDec=((*(p_diMoveDec))));



{int zzIndex; plcstring* zzLValue=(plcstring*)fbModuleOK.sDevice; plcstring* zzRValue=(plcstring*)((*(p_sDevice))); for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbModuleOK.usiNode=((*(p_usiNode))));
(fbModuleOK.tDlyTm=5000);
(fbModuleOK.bEn=0);;fbMotionCANModuleOK(&fbModuleOK);

{int zzIndex; plcstring* zzLValue=(plcstring*)fbSDOWrite.sDevice; plcstring* zzRValue=(plcstring*)((*(p_sDevice))); for(zzIndex=0; zzIndex<3l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(fbSDOWrite.usiNode=((*(p_usiNode))));
(fbSDOWrite.eMotorType=((*(p_eNtParamMotorType))));
(fbSDOWrite.bEn=0);;fbCANSDOWriteArrayParam(&fbSDOWrite);

((*(unsigned long*)&(fbFullMovAbsBl.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbFullMovAbsBl.tyParamInMove.diBacklashDistInUM=((*(p_diMoveBacklashDistInUM))));
(fbFullMovAbsBl.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbFullMovAbsBl.tyParamInMove.diDec=((*(p_diMoveDec))));

(fbFullMovAbsBl.bDir=((*(p_bDir))));
(fbFullMovAbsBl.bDirBl=((*(p_bDirBl))));
(fbFullMovAbsBl.bNoIndexPulse=((*(p_bNoIndexPulse))));
(fbFullMovAbsBl.eMotorType=((*(p_eNtParamMotorType))));
(fbFullMovAbsBl.bEn=0);;fbMotionCANFullMovAbsBl(&fbFullMovAbsBl);

((*(unsigned long*)&(fbFullMovAbs.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbFullMovAbs.tyParamInMove.diBacklashDistInUM=((*(p_diMoveBacklashDistInUM))));
(fbFullMovAbs.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbFullMovAbs.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbFullMovAbs.tyParamInConvert=*(struct tyMotionCANParamInConvert*)&((*(p_tyParamInConvert))));
(fbFullMovAbs.bDir=((*(p_bDir))));
(fbFullMovAbs.bNoIndexPulse=((*(p_bNoIndexPulse))));
(fbFullMovAbs.eMotorType=((*(p_eNtParamMotorType))));
(fbFullMovAbs.bEn=0);;fbMotionCANFullMovAbs(&fbFullMovAbs);

((*(unsigned long*)&(fbFullHm.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbFullHm.bDir=((*(p_bDir))));
(fbFullHm.bNoIndexPulse=((*(p_bNoIndexPulse))));
(fbFullHm.eMotorType=((*(p_eNtParamMotorType))));
(fbFullHm.bEn=0);;fbMotionCANFullHm(&fbFullHm);

((*(unsigned long*)&(fbPwrOn.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbPwrOn.eMotorType=((*(p_eNtParamMotorType))));
(fbPwrOn.bEn=0);;fbMotionCANPwrOn(&fbPwrOn);

((*(unsigned long*)&(fbPwrOff.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbPwrOff.eMotorType=((*(p_eNtParamMotorType))));
(fbPwrOff.bEn=0);;fbMotionCANPwrOff(&fbPwrOff);

((*(unsigned long*)&(fbHoming.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbHoming.bDir=((*(p_bDir))));
(fbHoming.bNoIndexPulse=((*(p_bNoIndexPulse))));
(fbHoming.eMotorType=((*(p_eNtParamMotorType))));
(fbHoming.bEn=0);;fbMotionCANHoming(&fbHoming);

((*(unsigned long*)&(fbMovAbs.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbMovAbs.tyParamInMove.diBacklashDistInUM=((*(p_diMoveBacklashDistInUM))));
(fbMovAbs.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbMovAbs.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbMovAbs.tyParamInConvert=*(struct tyMotionCANParamInConvert*)&((*(p_tyParamInConvert))));
(fbMovAbs.bDir=((*(p_bDir))));
(fbMovAbs.eMotorType=((*(p_eNtParamMotorType))));
(fbMovAbs.bEn=0);;fbMotionCANMovAbs(&fbMovAbs);

((*(unsigned long*)&(fbMovRel.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbMovRel.tyParamInMove.diBacklashDistInUM=((*(p_diMoveBacklashDistInUM))));
(fbMovRel.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbMovRel.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbMovRel.tyParamInConvert=*(struct tyMotionCANParamInConvert*)&((*(p_tyParamInConvert))));
(fbMovRel.bDir=((*(p_bDir))));
(fbMovRel.eMotorType=((*(p_eNtParamMotorType))));
(fbMovRel.bEn=0);;fbMotionCANMovRel(&fbMovRel);

((*(unsigned long*)&(fbJog.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbJog.tyParamInConvert=*(struct tyMotionCANParamInConvert*)&((*(p_tyParamInConvert))));
(fbJog.eMotorType=((*(p_eNtParamMotorType))));
(fbJog.bEn=0);;fbMotionCANJog(&fbJog);

((*(unsigned long*)&(fbRstAxisErr.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbRstAxisErr.bEn=0);;fbMotionCANRstAxisErr(&fbRstAxisErr);

((*(unsigned long*)&(fbStop.p_tyParamOutDriver))=((unsigned long)(&tyParamOutDriver)));
(fbStop.bEn=0);;fbMotionCANStop(&fbStop);

(bModuleNotOK=1);

}}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Action.st"
static void __AS__Action__Act_Action(void){
{

if(((((signed long)eStatus==(signed long)3))&bRstErr)){
((*(p_eAct))=0);
(eStat=0);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
}


if(((((signed long)eStatus==(signed long)1))&(((signed long)((*(p_eAct)))==(signed long)0)))){
(eStat=0);
}









if((((((signed long)eStatus==(signed long)0))&(((signed long)eStatus1==(signed long)0))&(((signed long)eStatus2==(signed long)0))&(((signed long)eStatus3==(signed long)0)))|(((signed long)((*(p_eAct)))==(signed long)0))|(((signed long)((*(p_eAct)))==(signed long)12))|((((signed long)((*(p_eAct)))==(signed long)10))&(((signed long)eStatus==(signed long)1))))){
(eStat=((*(p_eAct))));
}

if((bModuleNotOK&~Edge0000100000&1?((Edge0000100000=bModuleNotOK&1),1):((Edge0000100000=bModuleNotOK&1),0))){
(eStat=0);
}

}imp1_else3_0:imp1_end3_0:;}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Main.st"
static void __AS__Action__Act_Main(void){
{

if((((unsigned long)(unsigned char)bModuleNotOK==(unsigned long)(unsigned char)0))){

switch(eStat){

case 0:{
if((((signed long)eStatus!=(signed long)0))){

(fbStop.bEn=0);;fbMotionCANStop(&fbStop);
(fbRstAxisErr.bEn=0);;fbMotionCANRstAxisErr(&fbRstAxisErr);
(fbJog.bEn=0);;fbMotionCANJog(&fbJog);
(fbMovRel.bEn=0);;fbMotionCANMovRel(&fbMovRel);
(fbMovAbs.bEn=0);;fbMotionCANMovAbs(&fbMovAbs);
(fbHoming.bEn=0);;fbMotionCANHoming(&fbHoming);
(fbPwrOff.bEn=0);;fbMotionCANPwrOff(&fbPwrOff);
(fbPwrOn.bEn=0);;fbMotionCANPwrOn(&fbPwrOn);
(fbFullHm.bEn=0);;fbMotionCANFullHm(&fbFullHm);
(fbFullMovAbs.bEn=0);;fbMotionCANFullMovAbs(&fbFullMovAbs);
(fbFullMovAbsBl.bEn=0);;fbMotionCANFullMovAbsBl(&fbFullMovAbsBl);
(fbSDOWrite.bEn=0);;fbCANSDOWriteArrayParam(&fbSDOWrite);
(fbTm.IN=0);;TON(&fbTm);
(usiStep=0);
(usiCount=0);
(bNotInterruptible=0);
(((_2byte_bit_field_*)(&tyParamOutDriver.uiCtrlword_6040))->bit7=0);
{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

(eStatus=0);

if((~((*(p_bManual)))&Edge0001400000&1?((Edge0001400000=((*(p_bManual)))&1),1):((Edge0001400000=((*(p_bManual)))&1),0))){
fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
}

}break;case 1:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

switch(usiStep){
case 0:{
((*(p_diMovePosInUM))=fAWWidthToPosInUM(((*(p_diGoWidth))),((*(p_diWidthAtHmPos)))));
(usiStep=1);

}break;case 1:{
if((((unsigned long)(unsigned char)tyParamOut.bPosDiff==(unsigned long)(unsigned char)1))){
(usiStep=2);
}else{
(eStatus=1);
}

}break;case 2:{
(fbFullMovAbsBl.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbFullMovAbsBl.tyParamInMove.diPosInUM=((*(p_diMovePosInUM))));
(fbFullMovAbsBl.tyParamInMove.diDistInUM=((*(p_diMoveDistInUM))));
(fbFullMovAbsBl.tyParamInMove.diVelInUMPS=((*(p_diMoveVelInUMPS))));
(fbFullMovAbsBl.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbFullMovAbsBl.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbFullMovAbsBl.tyParamOut=*(struct tyMotionCANParamOut*)&tyParamOut);
(fbFullMovAbsBl.bEn=1);;fbMotionCANFullMovAbsBl(&fbFullMovAbsBl);

if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1401))){
(udiStatus=10002);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1402))){
(udiStatus=10003);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1403))){
(udiStatus=10004);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1405))){
(udiStatus=10005);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1408))){
(udiStatus=10006);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1409))){
(udiStatus=10007);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1411))){
(udiStatus=10008);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1412))){
(udiStatus=10009);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1413))){
(udiStatus=10010);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1414))){
(udiStatus=10011);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1415))){
(udiStatus=10012);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1416))){
(udiStatus=10013);
}else{
(udiStatus=fbFullMovAbsBl.udiStatus);
}
}

}break;}

}

}break;case 16:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

switch(usiStep){
case 0:{
((*(p_diMovePosInUM))=fAWWidthToPosInUM(((*(p_diGoWidth))),((*(p_diWidthAtHmPos)))));
(usiStep=1);

}break;case 1:{
if((((unsigned long)(unsigned char)tyParamOut.bPosDiff==(unsigned long)(unsigned char)1))){
(usiStep=2);
}else{
(eStatus=1);
}

}break;case 2:{
(fbFullMovAbsBl.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbFullMovAbsBl.tyParamInMove.diPosInUM=((*(p_diMovePosInUM))));
(fbFullMovAbsBl.tyParamInMove.diDistInUM=((*(p_diMoveDistInUM))));
(fbFullMovAbsBl.tyParamInMove.diVelInUMPS=((*(p_diMoveVelInUMPS))));
(fbFullMovAbsBl.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbFullMovAbsBl.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbFullMovAbsBl.tyParamOut=*(struct tyMotionCANParamOut*)&tyParamOut);
(fbFullMovAbsBl.bEn=1);;fbMotionCANFullMovAbsBl(&fbFullMovAbsBl);

if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)0))){
(usiStep=3);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1401))){
(udiStatus=10035);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1402))){
(udiStatus=10036);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1403))){
(udiStatus=10037);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1405))){
(udiStatus=10038);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1408))){
(udiStatus=10039);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1409))){
(udiStatus=10040);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1411))){
(udiStatus=10041);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1412))){
(udiStatus=10042);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1413))){
(udiStatus=10043);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1414))){
(udiStatus=10044);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1415))){
(udiStatus=10045);
}else if((((unsigned long)fbFullMovAbsBl.udiStatus==(unsigned long)1416))){
(udiStatus=10046);
}else{
(udiStatus=fbFullMovAbsBl.udiStatus);
}
}

}break;case 3:{
fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
(eStatus=1);

}break;}

}

}break;case 2:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

(fbFullHm.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbFullHm.tyParamOut=*(struct tyMotionCANParamOut*)&tyParamOut);
(fbFullHm.bEn=1);;fbMotionCANFullHm(&fbFullHm);

if((((unsigned long)fbFullHm.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbFullHm.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1401))){
(udiStatus=10014);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1402))){
(udiStatus=10015);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1405))){
(udiStatus=10016);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1408))){
(udiStatus=10017);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1411))){
(udiStatus=10018);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1412))){
(udiStatus=10019);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1413))){
(udiStatus=10020);
}else if((((unsigned long)fbFullHm.udiStatus==(unsigned long)1414))){
(udiStatus=10021);
}else{
(udiStatus=fbFullHm.udiStatus);
}
}

}

}break;case 3:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbPwrOn.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbPwrOn.bEn=1);;fbMotionCANPwrOn(&fbPwrOn);

if((((unsigned long)fbPwrOn.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbPwrOn.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbPwrOn.udiStatus==(unsigned long)1401))){
(udiStatus=10022);
}else{
(udiStatus=fbPwrOn.udiStatus);
}
}

}

}break;case 4:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbPwrOff.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbPwrOff.bEn=1);;fbMotionCANPwrOff(&fbPwrOff);

if((((unsigned long)fbPwrOff.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbPwrOff.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbPwrOff.udiStatus==(unsigned long)1400))){
(udiStatus=10023);
}else{
(udiStatus=fbPwrOff.udiStatus);
}
}

}

}break;case 5:{

if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

(fbHoming.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbHoming.tyParamOut=*(struct tyMotionCANParamOut*)&tyParamOut);
(fbHoming.bEn=1);;fbMotionCANHoming(&fbHoming);

if((((unsigned long)fbHoming.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbHoming.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbHoming.udiStatus==(unsigned long)1402))){
(udiStatus=10024);
}else if((((unsigned long)fbHoming.udiStatus==(unsigned long)1411))){
(udiStatus=10018);

}else if((((unsigned long)fbHoming.udiStatus==(unsigned long)1413))){
(udiStatus=10020);
}else if((((unsigned long)fbHoming.udiStatus==(unsigned long)1414))){
(udiStatus=10021);
}else{
(udiStatus=fbHoming.udiStatus);
}
}

}

}break;case 6:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

(fbMovAbs.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbMovAbs.tyParamInMove.diPosInUM=((*(p_diMovePosInUM))));
(fbMovAbs.tyParamInMove.diDistInUM=((*(p_diMoveDistInUM))));
(fbMovAbs.tyParamInMove.diVelInUMPS=((*(p_diMoveVelInUMPS))));
(fbMovAbs.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbMovAbs.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbMovAbs.bEn=1);;fbMotionCANMovAbs(&fbMovAbs);

if((((unsigned long)fbMovAbs.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbMovAbs.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbMovAbs.udiStatus==(unsigned long)1403))){
(udiStatus=10025);
}else{
(udiStatus=fbMovAbs.udiStatus);
}
}

}

}break;case 7:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

(fbMovRel.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbMovRel.tyParamInMove.diPosInUM=((*(p_diMovePosInUM))));
(fbMovRel.tyParamInMove.diDistInUM=((*(p_diMoveDistInUM))));
(fbMovRel.tyParamInMove.diVelInUMPS=((*(p_diMoveVelInUMPS))));
(fbMovRel.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbMovRel.tyParamInMove.diDec=((*(p_diMoveDec))));
(fbMovRel.bEn=1);;fbMotionCANMovRel(&fbMovRel);

if((((unsigned long)fbMovRel.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbMovRel.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbMovRel.udiStatus==(unsigned long)1404))){
(udiStatus=10026);
}else{
(udiStatus=fbMovRel.udiStatus);
}
}

}

}break;case 8:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

(fbJog.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbJog.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbJog.tyParamInMove.diDec=((*(p_diMoveDec))));

if((((unsigned long)(unsigned char)((*(p_bDir)))==(unsigned long)(unsigned char)1))){
(fbJog.tyParamInJog.diVelInUMPS=((*(p_diJogVelInUMPS))));
}else{
(fbJog.tyParamInJog.diVelInUMPS=(((*(p_diJogVelInUMPS)))*-1));
}

(fbJog.bEn=1);;fbMotionCANJog(&fbJog);

if((((unsigned long)fbJog.udiStatus==(unsigned long)0))){
(bJogging=1);
(bJogOpen=1);
(eStatus=1);
}else if((((unsigned long)fbJog.udiStatus<(unsigned long)65534))){
(udiStatus=fbJog.udiStatus);
(eStatus=3);
}

}

}break;case 9:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bNotInterruptible=1);

(fbJog.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbJog.tyParamInMove.diAcc=((*(p_diMoveAcc))));
(fbJog.tyParamInMove.diDec=((*(p_diMoveDec))));


if((((unsigned long)(unsigned char)((*(p_bDir)))==(unsigned long)(unsigned char)1))){
(fbJog.tyParamInJog.diVelInUMPS=(((*(p_diJogVelInUMPS)))*-1));
}else{
(fbJog.tyParamInJog.diVelInUMPS=((*(p_diJogVelInUMPS))));
}

(fbJog.bEn=1);;fbMotionCANJog(&fbJog);

if((((unsigned long)fbJog.udiStatus==(unsigned long)0))){
(bJogging=1);
(bJogClose=1);
(eStatus=1);
}else if((((unsigned long)fbJog.udiStatus<(unsigned long)65534))){
(udiStatus=fbJog.udiStatus);
(eStatus=3);
}

}

}break;case 10:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

fMotionCANJogStop(((unsigned long)(&tyParamOutDriver)));
(bJogging=0);
(bJogClose=0);
(bJogOpen=0);
(eStatus=1);

}

}break;case 11:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbRstAxisErr.bEn=1);;fbMotionCANRstAxisErr(&fbRstAxisErr);

if((((unsigned long)fbRstAxisErr.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbRstAxisErr.udiStatus<(unsigned long)65534))){
(udiStatus=fbRstAxisErr.udiStatus);
(eStatus=3);
}

}

}break;case 12:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbStop.tyParamInDriver=*(struct tyMotionCANDriverIn*)&tyParamInDriver);
(fbStop.bEn=1);;fbMotionCANStop(&fbStop);

if((((unsigned long)fbStop.udiStatus==(unsigned long)0))){
(bJogging=0);
(bJogClose=0);
(bJogOpen=0);
(eStatus=1);
}else if((((unsigned long)fbStop.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbStop.udiStatus==(unsigned long)1405))){
(udiStatus=10027);
}else{
(udiStatus=fbStop.udiStatus);
}
}

}
}break;}

}else{
switch(eStat){
case 13:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(fbTm.IN=1);;TON(&fbTm);

if(fbTm.Q){

(fbSDOWrite.tyParamOut=*(struct tyMotionCANParamOut*)&tyParamOut);
(fbSDOWrite.tyTuning=*(struct tyMotionCANTuning*)&((*(p_tyTuning))));

(fbSDOWrite.bEn=1);;fbCANSDOWriteArrayParam(&fbSDOWrite);


if((((unsigned long)fbSDOWrite.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbSDOWrite.udiStatus<(unsigned long)65534))){
fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));

if((((unsigned long)(unsigned char)usiCount<(unsigned long)(unsigned char)5))){
(fbTm.IN=0);;TON(&fbTm);
(fbSDOWrite.bEn=0);;fbCANSDOWriteArrayParam(&fbSDOWrite);

(usiCount=(usiCount+1));
}else{
(eStatus=3);

if((((unsigned long)fbSDOWrite.udiStatus==(unsigned long)1406))){
(udiStatus=10028);
}else{
(udiStatus=fbSDOWrite.udiStatus);
}
}

}

}

}

}break;case 14:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bModuleOKChk=1);
(eStatus=1);

}

}break;case 15:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

(bModuleOKChk=0);
(eStatus=1);

}

}break;case 0:{
if((((signed long)eStatus!=(signed long)0))){

(fbStop.bEn=0);;fbMotionCANStop(&fbStop);
(fbRstAxisErr.bEn=0);;fbMotionCANRstAxisErr(&fbRstAxisErr);
(fbJog.bEn=0);;fbMotionCANJog(&fbJog);
(fbMovRel.bEn=0);;fbMotionCANMovRel(&fbMovRel);
(fbMovAbs.bEn=0);;fbMotionCANMovAbs(&fbMovAbs);
(fbHoming.bEn=0);;fbMotionCANHoming(&fbHoming);
(fbPwrOff.bEn=0);;fbMotionCANPwrOff(&fbPwrOff);
(fbPwrOn.bEn=0);;fbMotionCANPwrOn(&fbPwrOn);
(fbFullHm.bEn=0);;fbMotionCANFullHm(&fbFullHm);
(fbFullMovAbs.bEn=0);;fbMotionCANFullMovAbs(&fbFullMovAbs);
(fbFullMovAbsBl.bEn=0);;fbMotionCANFullMovAbsBl(&fbFullMovAbsBl);
(fbSDOWrite.bEn=0);;fbCANSDOWriteArrayParam(&fbSDOWrite);
(fbTm.IN=0);;TON(&fbTm);
(usiStep=0);
(usiCount=0);
(bNotInterruptible=0);
(((_2byte_bit_field_*)(&tyParamOutDriver.uiCtrlword_6040))->bit7=0);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}

(eStatus=0);

if((~((*(p_bManual)))&Edge0001400001&1?((Edge0001400001=((*(p_bManual)))&1),1):((Edge0001400001=((*(p_bManual)))&1),0))){
fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
}

}break;case 17:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if(bRstErr){
(fbModuleOK.bEn=0);;(fbModuleOK.bModuleOK=bModuleOK);;fbMotionCANModuleOK(&fbModuleOK);
}
(fbModuleOK.bEn=1);;fbMotionCANModuleOK(&fbModuleOK);
if((((unsigned long)fbModuleOK.udiStatus==(unsigned long)0))){
(fbModuleOK.bEn=0);;fbMotionCANModuleOK(&fbModuleOK);
(eStatus=1);
}else if((((unsigned long)fbModuleOK.udiStatus<(unsigned long)65534))){
(eStatus=3);

if((((unsigned long)fbModuleOK.udiStatus==(unsigned long)1407))){
(udiStatus=10001);
(fbModuleOK.bEn=0);;fbMotionCANModuleOK(&fbModuleOK);
}else{
(udiStatus=fbModuleOK.udiStatus);
}
}
}

}break;case 11:{
if(((((signed long)eStatus==(signed long)0))|(((signed long)eStatus==(signed long)2)))){

(eStatus=2);

{int zzIndex; plcstring* zzLValue=(plcstring*)sStatTxt; plcstring* zzRValue=(plcstring*)a_sStatText[eStat]; for(zzIndex=0; zzIndex<200l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


(fbRstAxisErr.bEn=1);;fbMotionCANRstAxisErr(&fbRstAxisErr);

if((((unsigned long)fbRstAxisErr.udiStatus==(unsigned long)0))){
(eStatus=1);
}else if((((unsigned long)fbRstAxisErr.udiStatus<(unsigned long)65534))){
(udiStatus=fbRstAxisErr.udiStatus);
(eStatus=3);
}

}


}break;}
}

}imp14_case44_5:imp14_endcase44_0:imp14_end0_0:;}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Main_Disable.st"
static void __AS__Action__Act_Main_Disable(void){
{
(tyParamOut.bAxisErr=0);
(tyParamOut.bFwdLmtSen=0);
(tyParamOut.bInPos=1);
(tyParamOut.bIsHomed=1);
(tyParamOut.bPosDiff=0);
(tyParamOut.bPwrOn=1);
(tyParamOut.bRevLmtSen=0);
(tyParamOut.bStopped=1);
(tyParamOut.diActualPosInUM=0);
(tyParamOut.diHmAcc=0);
(tyParamOut.diHmSpdForSwitch=0);
(tyParamOut.diHmSpdForZero=0);
(tyParamOut.diProfileAcc=0);
(tyParamOut.diProfileDec=0);
(tyParamOut.udiAxisErrID=0);

(bWidthPosDiff=0);
(bModuleNotOK=0);
}}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Background.st"
static void __AS__Action__Act_Background(void){
{

if((((unsigned long)(unsigned char)bModuleOK==(unsigned long)(unsigned char)1))){

(tyParamInMove.diPosInUM=((*(p_diMovePosInUM))));
(tyParamInMove.diDistInUM=((*(p_diMoveDistInUM))));
(tyParamInMove.diVelInUMPS=((*(p_diMoveVelInUMPS))));
(tyParamInMove.diAcc=((*(p_diMoveAcc))));
(tyParamInMove.diDec=((*(p_diMoveDec))));

fMotionCANUpdtDat(((unsigned long)(&tyParamOut)),&((*(p_tyParamInConvert))),&tyParamOutDriver,&tyParamInDriver,&tyParamInMove,&((*(p_tyParamInHm))),((*(p_bDir))),((*(p_eNtParamMotorType))));

(bWidthPosDiff=((((unsigned long)(unsigned char)tyParamOut.bIsHomed==(unsigned long)(unsigned char)0))|(((signed long)((fAWWidthToPosInUM(((*(p_diGoWidth))),((*(p_diWidthAtHmPos))))-tyParamOut.diActualPosInUM)<0?-((fAWWidthToPosInUM(((*(p_diGoWidth))),((*(p_diWidthAtHmPos))))-tyParamOut.diActualPosInUM)):(fAWWidthToPosInUM(((*(p_diGoWidth))),((*(p_diWidthAtHmPos))))-tyParamOut.diActualPosInUM))>(signed long)500))));

((*(p_tyParamInConvert)).diPitchInUM=fPitchCalc(((*(p_diWidthOffsetInUM))),((*(p_diMaxWidthInUM))),((*(p_diMinWidthInUM))),((*(p_diPitchInUM)))));

(fbFullMovAbsBl.tyParamInConvert=*(struct tyMotionCANParamInConvert*)&((*(p_tyParamInConvert))));

if((((unsigned long)(unsigned char)((*(p_bDir)))==(unsigned long)(unsigned char)1))){
(bOpenSen=tyParamOut.bFwdLmtSen);
(bCloseSen=tyParamOut.bRevLmtSen);
}else{
(bOpenSen=tyParamOut.bRevLmtSen);
(bCloseSen=tyParamOut.bFwdLmtSen);
}

switch(((*(p_eNtParamMotorType)))){
case 0:{
switch(tyParamOut.udiAxisErrID){
case 8976:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Over Current"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12560:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Over Voltage"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12576:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Under Voltage"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12592:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Input Power Phase Loss"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12816:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Regeneration Error"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12848:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Overload"; for(zzIndex=0; zzIndex<8l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12849:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Pre-overload Warning"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 13056:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"U,V,W Wiring Error"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 16912:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"IGBT Temperature Error"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21296:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Memory Error"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21569:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Emergency Stop Activated"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21570:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Forward Limit Switch Error"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21571:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Reverse Limit Switch Error"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21572:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Forward Software Limit"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21573:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Reverse Software Limit"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21760:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"DSP Firmware Upgrade"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 25088:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANopen SYNC Error"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 25360:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANopen Data Initial Error"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 25376:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Adjustment Error"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 28961:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor Protection Error"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 28962:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor Error"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29445:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Encoder Error"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29446:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Encoder Output Error"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29968:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial Communication Error"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29984:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial Communication Time Out"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33024:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANbus Error (Bus-off)"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33040:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANopen SDO receive buffer overrun"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33056:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANbus Error (Warning)"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33072:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Node Guarding or Heartbeat Error"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33280:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANopen PDO Object Error"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33792:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Over Speed"; for(zzIndex=0; zzIndex<10l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 34304:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Abnormal Pulse Control Command"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 34320:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Full Closed Loop Excessive Deviation"; for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 34321:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Excessive Deviation"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;}

}break;case 1:{
switch(tyParamOut.udiAxisErrID){
case 8724:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Over Current"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 8976:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor Overload"; for(zzIndex=0; zzIndex<14l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 8977:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Drive overload (foldback)"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 9088:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Calculated offsets for current sensors out OF range"; for(zzIndex=0; zzIndex<51l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 9089:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor phase missing"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 9090:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Overcurrent detected at one OF the digital outputs"; for(zzIndex=0; zzIndex<50l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12560:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"DC Bus Over Voltage"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12576:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"DC Bus Under Voltage"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12672:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Braking Resistor Overload"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12673:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Safety function Safe Torque Off (STO) triggered"; for(zzIndex=0; zzIndex<47l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12674:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"DC bus voltage measurement"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12675:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Missing mains supply, undervoltage mains supply"; for(zzIndex=0; zzIndex<47l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12676:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The encoder supply voltage has dropped under operational value"; for(zzIndex=0; zzIndex<62l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12677:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The multi turn encoder battery voltage has dropped under 3 Vdc"; for(zzIndex=0; zzIndex<62l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12678:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Internal position synchronization error\tdetected between the multi turn AND the single turn modules"; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12679:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Generic error code of the multi turn module is detected"; for(zzIndex=0; zzIndex<55l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 12697:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Braking resistor overload"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 16512:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Drive overtemperature (IPM)"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 16513:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Drive overtemperature (controller)"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 16534:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Temperature sensor inoperative"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 17168:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Power stage overtemperature"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 17280:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The encoder temperature is too high"; for(zzIndex=0; zzIndex<35l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 17424:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor overtemperature"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21808:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (nonvolatilememory)"; for(zzIndex=0; zzIndex<41l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21893:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Error detected in non-volatile memory"; for(zzIndex=0; zzIndex<37l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21889:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (nonvolatile memory)"; for(zzIndex=0; zzIndex<42l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21890:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (CAN power supply)"; for(zzIndex=0; zzIndex<40l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21891:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (selftest)"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 21894:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (NV ACCESS)"; for(zzIndex=0; zzIndex<33l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 25472:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Target position rejected"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 25985:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected(FPGA)"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 28816:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (FPGA does NOT match firmware)"; for(zzIndex=0; zzIndex<52l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 28817:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Emergency Stop Activated"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 28961:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor blocked"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29080:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Commutation error detected"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29568:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Error detected in communication with motor encoder"; for(zzIndex=0; zzIndex<50l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29574:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Drive is not synchronous wit master cycle"; for(zzIndex=0; zzIndex<41l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29581:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected (encoder)"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29587:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Encoder overvoltage or overcurrent"; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29592:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The returned position value are no longer considered valid"; for(zzIndex=0; zzIndex<58l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 29593:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The multi turn encoder requires an explicit configuration command"; for(zzIndex=0; zzIndex<65l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 30081:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Target position rejected"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 30082:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"No target values received via the fieldbus"; for(zzIndex=0; zzIndex<42l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33072:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CANopen: Heartbeat error detected"; for(zzIndex=0; zzIndex<33l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33296:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"R_PDO is too short"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33921:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Actual Motor Velocity Too High"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33553:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor torque too high FOR an excessive period OF time"; for(zzIndex=0; zzIndex<53l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33664:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Unstable current loop"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 33922:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Velocity deviation too high"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 34321:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Position deviation too high"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 34432:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Position deviation via signal output function MC_OK"; for(zzIndex=0; zzIndex<51l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 34441:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Position deviation too high (following error)"; for(zzIndex=0; zzIndex<45l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 61568:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Fieldbus: Communication\terror detected"; for(zzIndex=0; zzIndex<38l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65282:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Not possible to read data of electronic motor nameplate"; for(zzIndex=0; zzIndex<55l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65296:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Forward Limit Switch Error"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65297:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Reverse Limit Switch Error"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65281:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"System error detected"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65298:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Forward Software Limit"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65299:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Reverse Software Limit"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65301:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The encoder firmware cannot operate on the provided hardware"; for(zzIndex=0; zzIndex<60l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}break;}

}break;case 2:{
switch(tyParamOut.udiAxisErrID){
case 65281:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Parameter breakdown"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65282:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"AD shift channels breakdown"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65283:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Overspeed"; for(zzIndex=0; zzIndex<9l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65284:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Overload"; for(zzIndex=0; zzIndex<8l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65285:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Position error counteroverflow "; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65286:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Position error pulse overflow"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65287:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The setting of electronic gear or given pulse frequency is not reasonable"; for(zzIndex=0; zzIndex<73l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65288:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The 1st channel of current detection is wrong."; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65289:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"The 2nd channel of current detection is wrong."; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65290:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Incremental Encoder is break off."; for(zzIndex=0; zzIndex<33l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65292:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Overcurrent"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65293:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Overvoltage"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65294:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Undervoltage"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65295:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Bleeder resistor error"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65296:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Regeneration error"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65297:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Resolver error"; for(zzIndex=0; zzIndex<14l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65298:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"IGBT superheat alarm"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65299:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor overheat alarm"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65300:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Power line phase shortage"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65301:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Instantaneous power off alarm"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65302:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor temperature detection sensor is break off."; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65303:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Brake overcurrent alarm"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65305:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor power line U overcurrent"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65306:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor power line V overcurrent"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65307:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Motor power line W overcurrent"; for(zzIndex=0; zzIndex<30l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65322:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Servomotor type error"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65323:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Servo drive type error"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65325:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Absolute encoder multiturn information error"; for(zzIndex=0; zzIndex<44l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65326:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Absolute encoder multiturn information overflow"; for(zzIndex=0; zzIndex<47l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65327:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Battery voltage below 2.5V"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65328:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Battery voltage below 3.1V"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65330:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial encoder communication overtime "; for(zzIndex=0; zzIndex<38l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65331:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Absolute encoder overspeed alarm detected"; for(zzIndex=0; zzIndex<41l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65332:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Absolute state of serial encoder error"; for(zzIndex=0; zzIndex<38l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65333:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial encoder calcaution error"; for(zzIndex=0; zzIndex<31l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65334:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Parity bit or end bit in serial encoder control domain error"; for(zzIndex=0; zzIndex<60l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65335:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial encoder communication data checking error"; for(zzIndex=0; zzIndex<48l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65336:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"End bit in serial encoder control domain error"; for(zzIndex=0; zzIndex<46l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65338:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial encoder data empty"; for(zzIndex=0; zzIndex<25l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65339:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Serial encoder data format error"; for(zzIndex=0; zzIndex<32l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65340:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Communication module not detected "; for(zzIndex=0; zzIndex<34l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65341:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Communication unsuccessful"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65342:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Servo drive can not receive the period data of communication module "; for(zzIndex=0; zzIndex<68l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65343:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Communication module can not receive the servo drive response data."; for(zzIndex=0; zzIndex<67l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65344:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Communication module and bus connectionless"; for(zzIndex=0; zzIndex<43l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65346:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"CAN communication abnormal"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65347:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Receiving heartbeat timeout"; for(zzIndex=0; zzIndex<27l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65349:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Synchronization signal monitoring cycle is longer than setting"; for(zzIndex=0; zzIndex<62l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;case 65362:{{int zzIndex; plcstring* zzLValue=(plcstring*)sAxisErrTxt; plcstring* zzRValue=(plcstring*)"Torque output alarm"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
}break;}
}break;}

}else{

(tyParamOut.bAxisErr=0);
(tyParamOut.bFwdLmtSen=0);
(tyParamOut.bInPos=0);
(tyParamOut.bIsHomed=0);
(tyParamOut.bPosDiff=1);
(tyParamOut.bPwrOn=0);
(tyParamOut.bRevLmtSen=0);
(tyParamOut.bStopped=1);
(tyParamOut.diActualPosInUM=0);
(tyParamOut.diHmAcc=0);
(tyParamOut.diHmSpdForSwitch=0);
(tyParamOut.diHmSpdForZero=0);
(tyParamOut.diProfileAcc=0);
(tyParamOut.diProfileDec=0);
(tyParamOut.udiAxisErrID=0);

(bWidthPosDiff=1);

}


if((((signed long)eStatus1!=(signed long)3))){
if(((((unsigned long)(unsigned char)((*(p_bOps)))==(unsigned long)(unsigned char)1))&(((signed long)eStatus==(signed long)0)))){
if(((((signed long)((tyParamOut.diActualPosInUM-diActualPosInUMOld)<0?-((tyParamOut.diActualPosInUM-diActualPosInUMOld)):(tyParamOut.diActualPosInUM-diActualPosInUMOld))>(signed long)2000))&(((signed long)((tyParamOut.diActualPosInUM-diActualPosInUMOld)<0?-((tyParamOut.diActualPosInUM-diActualPosInUMOld)):(tyParamOut.diActualPosInUM-diActualPosInUMOld))<(signed long)10000)))){
(eStatus1=3);
(udiStatus1=10000);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);
}
}else{
(diActualPosInUMOld=tyParamOut.diActualPosInUM);
}
}


if(((((signed long)eStatus1==(signed long)3))&bRstErr)){
(eStatus1=0);
(udiStatus1=0);
}




if((((*(p_bOps)))&((((signed long)tyParamInMove.diPosInUM<(signed long)((*(p_diMinAbsPosInUM)))))|(((signed long)tyParamInMove.diPosInUM>(signed long)((*(p_diMaxAbsPosInUM))))))&(((signed long)eStatus2!=(signed long)3)))){
(eStatus2=3);
(udiStatus2=10029);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);
}


if(((((signed long)eStatus2==(signed long)3))&bRstErr)){
(eStatus2=0);
(udiStatus2=0);
}


if(((((unsigned long)(unsigned char)bNotInterruptible==(unsigned long)(unsigned char)1))&(((signed long)eStatus3!=(signed long)3)))){

if((((unsigned long)(unsigned char)((*(p_bInletSensor)))==(unsigned long)(unsigned char)1))){
(eStatus3=3);
(udiStatus3=10030);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);

}else if((((unsigned long)(unsigned char)((*(p_bOutletSensor)))==(unsigned long)(unsigned char)1))){
(eStatus3=3);
(udiStatus3=10031);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);

}else if((((unsigned long)(unsigned char)((*(p_bClearSensor)))==(unsigned long)(unsigned char)1))){
(eStatus3=3);
(udiStatus3=10032);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);

}else if((((unsigned long)(unsigned char)((*(p_bMiddleSensor)))==(unsigned long)(unsigned char)1))){
(eStatus3=3);
(udiStatus3=10033);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);

}else if((((unsigned long)(unsigned char)((*(p_bInterruptSensor)))==(unsigned long)(unsigned char)1))){
(eStatus3=3);
(udiStatus3=10034);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);

}else if(((((unsigned long)(unsigned char)((*(p_bCloseInterruptSensor)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bJogOpen==(unsigned long)(unsigned char)0)))){
(eStatus3=3);
(udiStatus3=10047);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);

}else if(((((unsigned long)(unsigned char)((*(p_bOpenInterruptSensor)))==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)bJogClose==(unsigned long)(unsigned char)0)))){
(eStatus3=3);
(udiStatus3=10048);

fMotionCANRstCtrlWord(((unsigned long)(&tyParamOutDriver)));
((*(p_eAct))=0);
(eStat=0);
}

}





if((((((signed long)eStatus3==(signed long)3))&bRstErr)|(((*(p_bOpenInterruptSensor)))&(((signed long)eStat==(signed long)9)))|(((*(p_bCloseInterruptSensor)))&(((signed long)eStat==(signed long)8))))){
(eStatus3=0);
(udiStatus3=0);
}

if(bRstErr){
(udiStatus=0);
(bJogging=0);
(bJogClose=0);
(bJogOpen=0);
}

(fbServoModuleOk.IN=bModuleOK);;TON(&fbServoModuleOk);
(fbServoModuleNotOk.IN=(((unsigned long)(unsigned char)bModuleOK==(unsigned long)(unsigned char)0)));;TON(&fbServoModuleNotOk);
if((fbServoModuleNotOk.Q&(((unsigned long)udiStatus!=(unsigned long)10001)))){

(bModuleNotOK=1);
(bModuleNotOKLock=1);
(usiRstStep=0);
(tyParamOutDriver.uiCtrlword_6040=0);
(tyParamOutDriver.siModOfOpt_6060=0);
(tyParamOutDriver.diTargetPos_607A=0);
(tyParamOutDriver.udiMoveSpd_6081=0);
(tyParamOutDriver.siHmMethod_6098=0);
(tyParamOutDriver.diJogVel_60FF=0);

switch(((*(p_eNtParamMotorType)))){

case 0:{
(fbModuleOK.bModuleOK=0);;fbMotionCANModuleOK(&fbModuleOK);
if((((signed long)eStatus==(signed long)0))){
(eAct=17);
}

if((((((signed long)eStatus==(signed long)1))|(((signed long)eStatus==(signed long)3)))&(((signed long)eStat==(signed long)17)))){

(eAct=0);
}

}break;case 2:{
(fbModuleOK.bModuleOK=0);;fbMotionCANModuleOK(&fbModuleOK);
if((((signed long)eStatus==(signed long)0))){
(eAct=17);
}

if((((((signed long)eStatus==(signed long)1))|(((signed long)eStatus==(signed long)3)))&(((signed long)eStat==(signed long)17)))){

(eAct=0);
}

}break;case 1:{

}break;}

}else if(((((unsigned long)(unsigned char)bModuleNotOK==(unsigned long)(unsigned char)1))&fbServoModuleOk.Q)){


switch(usiRstStep){

case 0:{
if((((signed long)eStatus==(signed long)0))){
(eAct=11);
}

if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)11)))){
(eAct=0);
(usiRstStep=4);
}

}break;case 4:{(tyParamOutDriver.siModOfOpt_6060=1);
(usiRstStep=5);

}break;case 5:{(tyParamOutDriver.siModOfOpt_6060=1);
(fbRstNodeTimer.IN=1);;TON(&fbRstNodeTimer);

if((((signed long)(signed long)(char)tyParamInDriver.siModOfOptDisp_6061==(signed long)(signed long)(char)1))){
(usiRstStep=6);
(fbRstNodeTimer.IN=0);;TON(&fbRstNodeTimer);
}else if(fbRstNodeTimer.Q){
(usiRstStep=8);
(fbRstNodeTimer.IN=0);;TON(&fbRstNodeTimer);
}


}break;case 6:{(tyParamOutDriver.siModOfOpt_6060=6);
(fbRstNodeTimer.IN=0);;TON(&fbRstNodeTimer);
(usiRstStep=7);

}break;case 7:{(tyParamOutDriver.siModOfOpt_6060=6);
(fbRstNodeTimer.IN=1);;TON(&fbRstNodeTimer);

if((((signed long)(signed long)(char)tyParamInDriver.siModOfOptDisp_6061==(signed long)(signed long)(char)6))){
(usiRstStep=10);
(fbRstNodeTimer.IN=0);;TON(&fbRstNodeTimer);
}else if(fbRstNodeTimer.Q){
(usiRstStep=9);
(fbRstNodeTimer.IN=0);;TON(&fbRstNodeTimer);
}



}break;case 8:{(fbModuleOK.bEn=1);;(fbModuleOK.bModuleOK=0);;fbMotionCANModuleOK(&fbModuleOK);
(fbRstNodeTimer.IN=0);;TON(&fbRstNodeTimer);
(usiRstStep=9);

}break;case 9:{(fbModuleOK.bModuleOK=0);;fbMotionCANModuleOK(&fbModuleOK);
if((((signed long)eStatus==(signed long)0))){
(eAct=17);
}

if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)17)))){
(usiRstStep=0);
(eAct=0);
}

}break;case 10:{if((((signed long)eStatus==(signed long)0))){
(eAct=11);
}

if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)11)))){
(eAct=0);
(usiRstStep=11);
}


}break;case 11:{

if((((signed long)eStatus==(signed long)0))){
(eAct=13);
}

if(((((signed long)eStatus==(signed long)1))&(((signed long)eStat==(signed long)13)))){
(eAct=0);
(usiRstStep=13);

}else if((((unsigned long)udiStatus==(unsigned long)10028))){
(eAct=0);
(usiRstStep=0);
}



}break;case 13:{(bModuleNotOK=0);
(usiRstStep=0);
}break;}
}else{
(eAct=0);

}

if((((unsigned long)(unsigned char)tyParamOut.bPosDiff==(unsigned long)(unsigned char)0))){
(((_2byte_bit_field_*)(&tyParamOutDriver.uiCtrlword_6040))->bit4=0);
}

}imp6_else33_0:imp6_end33_0:;}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_CombineErr.st"
static void __AS__Action__Act_CombineErr(void){
{

if(((((signed long)eStatus==(signed long)3))|(((signed long)eStatus1==(signed long)3))|(((signed long)eStatus2==(signed long)3))|(((signed long)eStatus3==(signed long)3)))){
(eMainStatus=3);
}else{
(eMainStatus=eStatus);
}

}imp7_end0_0:;}
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Alarm.st"
static void __AS__Action__Act_Alarm(void){
{

if(((((signed long)eStatus==(signed long)3))&~Edge0000200000&1?((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),1):((Edge0000200000=(((signed long)eStatus==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData.udiCode=udiStatus);
(tyAlmData.eSeverity=1);
(tyAlmData.udiRunTime=(tyAlmData.udiRunTime+1));
(tyAlmData.bAlm=1);
(tyAlmData.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sAWOpenProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData.udiCode>(unsigned long)10299)))){
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
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Alarm1.st"
static void __AS__Action__Act_Alarm1(void){
{

if(((((signed long)eStatus1==(signed long)3))&~Edge0000300000&1?((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),1):((Edge0000300000=(((signed long)eStatus1==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData1.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData1.udiCode=udiStatus1);
(tyAlmData1.eSeverity=1);
(tyAlmData1.udiRunTime=(tyAlmData1.udiRunTime+1));
(tyAlmData1.bAlm=1);
(tyAlmData1.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sAWOpenProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData1.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData1.udiCode>(unsigned long)10099)))){
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
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Alarm2.st"
static void __AS__Action__Act_Alarm2(void){
{

if(((((signed long)eStatus2==(signed long)3))&~Edge0000400000&1?((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),1):((Edge0000400000=(((signed long)eStatus2==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData2.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData2.udiCode=udiStatus2);
(tyAlmData2.eSeverity=1);
(tyAlmData2.udiRunTime=(tyAlmData2.udiRunTime+1));
(tyAlmData2.bAlm=1);
(tyAlmData2.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sAWOpenProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData2.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData2.udiCode>(unsigned long)10099)))){
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
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"
#line 2 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Act_Alarm3.st"
static void __AS__Action__Act_Alarm3(void){
{

if(((((signed long)eStatus3==(signed long)3))&~Edge0000500000&1?((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),1):((Edge0000500000=(((signed long)eStatus3==(signed long)3))&1),0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)tyAlmData3.sProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(tyAlmData3.udiCode=udiStatus3);
(tyAlmData3.eSeverity=1);
(tyAlmData3.udiRunTime=(tyAlmData3.udiRunTime+1));
(tyAlmData3.bAlm=1);
(tyAlmData3.udiModuleNum=udiModuleNum);
{int zzIndex; plcstring* zzLValue=(plcstring*)g_sAWOpenProgNm; plcstring* zzRValue=(plcstring*)((*(p_sProgNm))); for(zzIndex=0; zzIndex<15l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};


if(((((unsigned long)tyAlmData3.udiCode<(unsigned long)10000))|(((unsigned long)tyAlmData3.udiCode>(unsigned long)10099)))){
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
#line 51 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

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
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AWOpen/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AWOpen/InputRef.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AWOpen/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/AWOpen/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/AWOpen/Cyclic.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/CANOpenServo/AW/AWOpen/Cyclic.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/AWOpen/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
