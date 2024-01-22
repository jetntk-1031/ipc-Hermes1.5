#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtUI/fbTableCtrlst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtUI/fbTableCtrl.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtUI/fbTableCtrl.st"
void fbTableCtrl(struct fbTableCtrl* inst){struct fbTableCtrl* __inst__=inst;{

(__inst__->bSliderActive=0);

for((__inst__->tyInternal.i=1);__inst__->tyInternal.i<=15;__inst__->tyInternal.i+=1){
if(((*(__inst__->a_tyUIHotspot))[__inst__->tyInternal.i-1].bRtCompl)){
(__inst__->bTableActive=1);
}

}imp1_endfor0_0:;

(__inst__->tyInternal.fbSliderRelease.CLK=((_4byte_bit_field_*)(&((*(__inst__->uiSliderStatus)))))->bit15);;F_TRIG(&__inst__->tyInternal.fbSliderRelease);

if(((_4byte_bit_field_*)(&((*(__inst__->uiSliderStatus)))))->bit15){
(__inst__->tyInternal.fbSliderOffTm.IN=0);;TON(&__inst__->tyInternal.fbSliderOffTm);

(__inst__->tyInternal.iTablePos=((*(__inst__->iSliderPos))));

if((((signed long)(signed long)(short)__inst__->tyInternal.iTablePos>(signed long)((__inst__->iTotalData-__inst__->iTotalRow)+1)))){
if((((signed long)((__inst__->iTotalData-__inst__->iTotalRow)+1)<(signed long)(signed long)(short)1))){
(__inst__->tyInternal.iTablePos=1);
}else{
(__inst__->tyInternal.iTablePos=((__inst__->iTotalData-__inst__->iTotalRow)+1));
}

}else if((((signed long)(signed long)(short)__inst__->tyInternal.iTablePos<(signed long)(signed long)(short)1))){
(__inst__->tyInternal.iTablePos=1);

}

((*(__inst__->uiTablePos))=(unsigned short)__inst__->tyInternal.iTablePos);
((*(__inst__->iSliderPos))=(signed short)((*(__inst__->uiTablePos))));

(__inst__->tyInternal.iTablePosTemp=(signed short)((*(__inst__->uiTablePos))));

(__inst__->bSliderActive=1);

}else if((((unsigned long)(unsigned char)__inst__->tyInternal.fbSliderRelease.Q==(unsigned long)(unsigned char)1))){
(__inst__->bSliderActive=1);
((*(__inst__->iSliderPos))=(signed short)((*(__inst__->uiTablePos))));

}else if(__inst__->bTableActive){

{int zzIndex; plcstring* zzLValue=(plcstring*)__inst__->tyInternal.fbTouchGetAction.sVisuNm; plcstring* zzRValue=(plcstring*)__inst__->sVisuNm; for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
fbTouchGetAction(&__inst__->tyInternal.fbTouchGetAction);


(__inst__->tyInternal.fbTouchFilter.bPressedIn=__inst__->tyInternal.fbTouchGetAction.bPressed);
(__inst__->tyInternal.fbTouchFilter.udiXIn=__inst__->tyInternal.fbTouchGetAction.udiX);
(__inst__->tyInternal.fbTouchFilter.udiYIn=__inst__->tyInternal.fbTouchGetAction.udiY);
fbTouchFilter(&__inst__->tyInternal.fbTouchFilter);


(__inst__->tyInternal.fbTouchGetSlideDist.udiWorkAreaStartX=__inst__->udiWorkAreaStartX);
(__inst__->tyInternal.fbTouchGetSlideDist.udiWorkAreaStartY=__inst__->udiWorkAreaStartY);
(__inst__->tyInternal.fbTouchGetSlideDist.udiWorkAreaEndX=__inst__->udiWorkAreaEndX);
(__inst__->tyInternal.fbTouchGetSlideDist.udiWorkAreaEndY=__inst__->udiWorkAreaEndY);
(__inst__->tyInternal.fbTouchGetSlideDist.udiMinXDist=__inst__->udiMinXDist);
(__inst__->tyInternal.fbTouchGetSlideDist.udiMinYDist=__inst__->udiMinYDist);
(__inst__->tyInternal.fbTouchGetSlideDist.bPressed=__inst__->tyInternal.fbTouchFilter.bPressedOut);
(__inst__->tyInternal.fbTouchGetSlideDist.udiX=__inst__->tyInternal.fbTouchFilter.udiXOut);
(__inst__->tyInternal.fbTouchGetSlideDist.udiY=__inst__->tyInternal.fbTouchFilter.udiYOut);
fbTouchGetSlideDist(&__inst__->tyInternal.fbTouchGetSlideDist);


(__inst__->tyInternal.fbTouchGetTap.udiWorkAreaStartX=__inst__->udiWorkAreaStartX);
(__inst__->tyInternal.fbTouchGetTap.udiWorkAreaStartY=__inst__->udiWorkAreaStartY);
(__inst__->tyInternal.fbTouchGetTap.udiWorkAreaEndX=__inst__->udiWorkAreaEndX);
(__inst__->tyInternal.fbTouchGetTap.udiWorkAreaEndY=__inst__->udiWorkAreaEndY);
(__inst__->tyInternal.fbTouchGetTap.udiMinSingleTapXDiff=__inst__->udiMinXDist);
(__inst__->tyInternal.fbTouchGetTap.udiMinSingleTapYDiff=__inst__->udiMinYDist);
(__inst__->tyInternal.fbTouchGetTap.bPressed=__inst__->tyInternal.fbTouchFilter.bPressedOut);
(__inst__->tyInternal.fbTouchGetTap.udiX=__inst__->tyInternal.fbTouchFilter.udiXOut);
(__inst__->tyInternal.fbTouchGetTap.udiY=__inst__->tyInternal.fbTouchFilter.udiYOut);
fbTouchGetTap(&__inst__->tyInternal.fbTouchGetTap);

fUIInRtStatOff(((unsigned long)(&((*(__inst__->uiSliderStatus))))));

if((((unsigned long)(unsigned char)__inst__->tyInternal.fbTouchFilter.bPressedOut==(unsigned long)(unsigned char)1))){
(__inst__->tyInternal.fbSliderOffTm.IN=0);;TON(&__inst__->tyInternal.fbSliderOffTm);
(__inst__->tyInternal.fbSingleTapChkDlyTm.IN=0);;TON(&__inst__->tyInternal.fbSingleTapChkDlyTm);

if((((unsigned long)(unsigned short)__inst__->uiSlideScale<(unsigned long)(unsigned short)1))){
(__inst__->uiSlideScale=1);
}

(__inst__->tyInternal.iTablePos=(__inst__->tyInternal.iTablePosTemp-(((signed long)((signed short)__inst__->tyInternal.fbTouchGetSlideDist.diYDist))/((signed long)((signed short)__inst__->uiSlideScale)))));

if((((signed long)(signed long)(short)__inst__->tyInternal.iTablePos>(signed long)((__inst__->iTotalData-__inst__->iTotalRow)+1)))){
if((((signed long)((__inst__->iTotalData-__inst__->iTotalRow)+1)<(signed long)(signed long)(short)1))){
(__inst__->tyInternal.iTablePos=1);
}else{
(__inst__->tyInternal.iTablePos=((__inst__->iTotalData-__inst__->iTotalRow)+1));
}

}else if((((signed long)(signed long)(short)__inst__->tyInternal.iTablePos<(signed long)(signed long)(short)1))){
(__inst__->tyInternal.iTablePos=1);

}

((*(__inst__->uiTablePos))=(unsigned short)__inst__->tyInternal.iTablePos);
((*(__inst__->iSliderPos))=(signed short)((*(__inst__->uiTablePos))));

}else{
(__inst__->tyInternal.iTablePosTemp=__inst__->tyInternal.iTablePos);

(__inst__->tyInternal.fbSingleTapChkDlyTm.IN=1);;TON(&__inst__->tyInternal.fbSingleTapChkDlyTm);

if((((unsigned long)(unsigned char)__inst__->tyInternal.fbSingleTapChkDlyTm.Q==(unsigned long)(unsigned char)1))){
for((__inst__->tyInternal.i=1);__inst__->tyInternal.i<=15;__inst__->tyInternal.i+=1){
((*(__inst__->a_tyUIHotspot))[__inst__->tyInternal.i-1].bRtCompl=0);
}imp1_endfor10_0:;

(__inst__->bTableActive=0);

}else{
for((__inst__->tyInternal.i=1);__inst__->tyInternal.i<=15;__inst__->tyInternal.i+=1){
if((((unsigned long)(unsigned char)((*(__inst__->a_tyUIHotspot))[__inst__->tyInternal.i-1].bValue)==(unsigned long)(unsigned char)1))){
if((((unsigned long)(unsigned char)__inst__->tyInternal.fbTouchGetTap.bSingleTap==(unsigned long)(unsigned char)1))){
(__inst__->uiSelectedRow=__inst__->tyInternal.i);
}

((*(__inst__->a_tyUIHotspot))[__inst__->tyInternal.i-1].bValue=0);

}

}imp1_endfor11_0:;

}

}

}else if((((unsigned long)(unsigned char)((_4byte_bit_field_*)(&((*(__inst__->uiSliderStatus)))))->bit0==(unsigned long)(unsigned char)0))){
(__inst__->tyInternal.fbSliderOffTm.IN=1);;TON(&__inst__->tyInternal.fbSliderOffTm);

if((((unsigned long)(unsigned char)__inst__->tyInternal.fbSliderOffTm.Q==(unsigned long)(unsigned char)1))){
fUIInRtStatHide(((unsigned long)(&((*(__inst__->uiSliderStatus))))));
(__inst__->tyInternal.fbSliderOffTm.IN=0);;TON(&__inst__->tyInternal.fbSliderOffTm);

}

}

(__inst__->tyInternal.fbSelectedRowMnlRise.CLK=__inst__->bSelectedRowMnl);;R_TRIG(&__inst__->tyInternal.fbSelectedRowMnlRise);
if(__inst__->tyInternal.fbSelectedRowMnlRise.Q){
(__inst__->uiSelectedRow=__inst__->uiSelectedRowMnl);
}

(__inst__->tyInternal.fbTablePosUpRise.CLK=__inst__->bTablePosPlus);;R_TRIG(&__inst__->tyInternal.fbTablePosUpRise);
if(__inst__->tyInternal.fbTablePosUpRise.Q){
((*(__inst__->uiTablePos))=(((*(__inst__->uiTablePos)))+1));
((*(__inst__->iSliderPos))=(((*(__inst__->iSliderPos)))+1));
(__inst__->tyInternal.iTablePos=(__inst__->tyInternal.iTablePos+1));
(__inst__->tyInternal.iTablePosTemp=(__inst__->tyInternal.iTablePosTemp+1));

}

(__inst__->tyInternal.fbTablePosDownRise.CLK=__inst__->bTablePosMinus);;R_TRIG(&__inst__->tyInternal.fbTablePosDownRise);
if(__inst__->tyInternal.fbTablePosDownRise.Q){
((*(__inst__->uiTablePos))=(((*(__inst__->uiTablePos)))-1));
((*(__inst__->iSliderPos))=(((*(__inst__->iSliderPos)))-1));
(__inst__->tyInternal.iTablePos=(__inst__->tyInternal.iTablePos-1));
(__inst__->tyInternal.iTablePosTemp=(__inst__->tyInternal.iTablePosTemp-1));

}

}imp1_else17_0:imp1_end17_0:;}
#line 169 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtUI/fbTableCtrl.nodebug"

void __AS__ImplInitfbTableCtrl_st(void){}

__asm__(".section \".plc\"");
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
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtUI/fbTableCtrl.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtUI/fbTableCtrl.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtUI/fbTableCtrl.st\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"fUIInRtStatOff\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIInRtStatHide\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIInRtStatLock\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIInRtStatFocus\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIInRtStatOpenTP\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIOutRtStatCursor1Valid\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIOutRtStatCursor2Valid\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIOutRtStatTPIsOpen\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIOutRtStatOnLock\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIOutRtStatHasFocus\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fUIOutRtStatInEdit\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fbTouchGetAction\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbTouchFilter\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbTouchGetSlideDist\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbTouchGetTap\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbTableCtrl\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbTableCtrl_v2\\\" FUB\\n\"");
__asm__(".previous");
