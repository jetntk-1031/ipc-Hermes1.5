#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtHermes/fHermesFormSetConfigurationst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormSetConfiguration.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormSetConfiguration.st"
signed short fHermesFormSetConfiguration(struct tyXMLTableDat pa_tyXMLTable[80], struct DTStructure(* tyDTStructure), struct tyHermesSetConfiguration(* tyParameter)){signed short __AS__fHermesFormSetConfiguration=0;signed long zzIndex00000;signed short i=0;signed short iConfiguration=0;signed short iTotalIdxWrite=0;plcstring sTimestamp[24]="";{

__AS__MEMSET(((unsigned long)(pa_tyXMLTable)),0,20800);
(iTotalIdxWrite=0);

fHermesGetTimestamp(((unsigned long)(&sTimestamp)),&((*(tyDTStructure))));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ST"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Hermes"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Timestamp"; for(zzIndex=0; zzIndex<9l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)sTimestamp; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ST"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"SetConfiguration"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bMachineId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"MachineId"; for(zzIndex=0; zzIndex<9l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sMachineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bSupervisorySystemPort)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"SupervisorySystemPort"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
uint2str(((*(tyParameter)).tyData.uiSupervisorySystemPort),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

if((((signed long)(signed long)(short)((*(tyParameter)).tyAvl.iUpstreamConfigurations)>(signed long)(signed long)(short)0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ST"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamConfigurations"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

if((((signed long)(signed long)(short)((*(tyParameter)).tyAvl.iUpstreamConfigurations)<(signed long)(signed long)(short)4))){
(iConfiguration=(((*(tyParameter)).tyAvl.iUpstreamConfigurations)-1));
}else{
(iConfiguration=2);
}

for((i=0);i<=iConfiguration;i+=1){

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ST"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamConfiguration"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamLaneId"; for(zzIndex=0; zzIndex<14l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((*(tyParameter)).tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyUpstreamConfigurations[i].bUpstreamInterfaceId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamInterfaceId"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyUpstreamConfigurations[i].bHostAddress)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"HostAddress"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.a_tyUpstreamConfigurations[i].sHostAddress); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyUpstreamConfigurations[i].bPort)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Port"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
uint2str(((*(tyParameter)).tyData.a_tyUpstreamConfigurations[i].uiPort),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ES"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

}imp1_endfor4_0:;

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ET"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamConfigurations"; for(zzIndex=0; zzIndex<22l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

}

if((((signed long)(signed long)(short)((*(tyParameter)).tyAvl.iDownstreamConfigurations)>(signed long)(signed long)(short)0))){

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ST"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"DownstreamConfigurations"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

if((((signed long)(signed long)(short)((*(tyParameter)).tyAvl.iDownstreamConfigurations)<(signed long)(signed long)(short)4))){
(iConfiguration=(((*(tyParameter)).tyAvl.iDownstreamConfigurations)-1));
}else{
(iConfiguration=2);
}

for((i=0);i<=iConfiguration;i+=1){

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ST"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"DownstreamConfiguration"; for(zzIndex=0; zzIndex<23l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"DownstreamLaneId"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((*(tyParameter)).tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyDownstreamConfigurations[i].bDownstreamInterfaceId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"DownstreamInterfaceId"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyDownstreamConfigurations[i].bClientAddress)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"ClientAddress"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.a_tyDownstreamConfigurations[i].sClientAddress); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.a_tyDownstreamConfigurations[i].bPort)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Port"; for(zzIndex=0; zzIndex<4l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
uint2str(((*(tyParameter)).tyData.a_tyDownstreamConfigurations[i].uiPort),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ES"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

}imp1_endfor11_0:;

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ET"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"DownstreamConfigurations"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

}

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ET"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"SetConfiguration"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ET"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Hermes"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"EN"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)""; for(zzIndex=0; zzIndex<0l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

(iTotalIdxWrite=__AS__fHermesFormSetConfiguration);

}return __AS__fHermesFormSetConfiguration;}
#line 312 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormSetConfiguration.nodebug"

void __AS__ImplInitfHermesFormSetConfiguration_st(void){}

unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length)
{memset((char*)pDest, value, length); return pDest + length;}

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
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtHermes/fHermesFormSetConfiguration.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtHermes/fHermesFormSetConfiguration.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormSetConfiguration.st\\\"\\n\"");
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtHermes/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesSequenceUS\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesSequenceDS\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesSequenceSvy\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesSequenceTO\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesSequenceSvyTO\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesCmpSlt\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesGetSlt\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesGetSndConfig\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesParseXMLTable\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseCheckAlive\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseServiceDescription\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseSServiceDescription\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseNotification\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseBoardAvailable\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseMachineReady\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseStartTransport\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseStopTransport\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseTransportFinished\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseSetConfiguration\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseCurrentConfiguration\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseBoardForecast\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseQueryBoardInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseSendBoardInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseBoardArrived\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseBoardDeparted\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseQueryWorkOrderInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseSendWorkOrderInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesParseCommand\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormCheckAlive\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormServiceDescription\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormSServiceDescription\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormNotification\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormBoardAvailable\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormRevokeBoardAvailable\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormMachineReady\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormRevokeMachineReady\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormStartTransport\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormStopTransport\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormTransportFinished\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormSetConfiguration\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormGetConfiguration\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormCurrentConfiguration\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormBoardForecast\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormQueryBoardInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormSendBoardInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormBoardArrived\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormBoardDeparted\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormQueryWorkOrderInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormSendWorkOrderInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormReplyWorkOrderInfo\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesFormCommand\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamBAMR\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamBAST\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSTST\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSTTF\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamBFMR\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSD\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSSD\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamN\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamBA\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamMR\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSAT\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSOT\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamTF\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSC\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamCC\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamBF\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamQBI\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSBIQBI\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamSWQW\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesChkParamCommand\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesNotificationRstConn\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesNotificationRstState\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesCheckAlive\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesCheckAliveSendPing\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fbHermesCheckAliveRcvPing\\\" FUB\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgRmt\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgSvy\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgNotConnectedUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgSrvcDescripUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgNotAvlNotRdyUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgBrdAvlUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgMcRdyUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgAvlAndRdyUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgTransportingUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgTransportStopUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgTransportFiniUS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgNotConnectedDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgSrvcDescripDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgNotAvlNotRdyDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgBrdAvlDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgMcRdyDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgAvlAndRdyDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgTransportingDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgTransportStopDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgTransportFiniDS\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgNotConnectedSvy\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgSrvcDescripSvy\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesIllegalMsgConnectedSvy\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesGenerateUUID\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesGetTimestamp\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesRmvOneMsgSend\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesAddOneMsgSend\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesBrdAvltoBF\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesGenerateBrdAvlDat\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesAddEditAttribBrdAvlDat\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesSrchAttribValueBrdAvlDat\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesDeleteAttribBrdAvlDat\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesRmvOneCmdTyp\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesAddOneCmdTyp\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesAddOneCommandGate\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesProcessCmd\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesBroadCastCommand\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesRcvCmdReqToPause\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesSndCmdReqToPause\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesRcvCmdReqFromPause\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesSndCmdReqFromPause\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesRcvCmdReqFromLockCov\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesSndCmdReqToLockConv\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesRcvCmdReqFromOvenInfeed\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"fHermesSndCmdReqToOvenInfeed\\\" FUN\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'c_diHermesConfigMaxIdx'\\n\"");
__asm__(".previous");
