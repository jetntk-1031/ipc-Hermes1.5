#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtHermes/fHermesFormBoardArrivedst.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormBoardArrived.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormBoardArrived.st"
signed short fHermesFormBoardArrived(struct tyXMLTableDat pa_tyXMLTable[50], struct DTStructure(* tyDTStructure), struct tyHermesBoardArrived(* tyParameter)){signed short __AS__fHermesFormBoardArrived=0;signed short iTotalIdxWrite=0;plcstring sTimestamp[24]="";{

__AS__MEMSET(((unsigned long)(pa_tyXMLTable)),0,13000);
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
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BoardArrived"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
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

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bUpstreamLaneId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamLaneId"; for(zzIndex=0; zzIndex<14l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((*(tyParameter)).tyData.iUpstreamLaneId),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bUpstreamInterfaceId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"UpstreamInterfaceId"; for(zzIndex=0; zzIndex<19l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sUpstreamInterfaceId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bMagazineId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"MagazineId"; for(zzIndex=0; zzIndex<10l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sMagazineId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bSlotId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"SlotId"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((*(tyParameter)).tyData.iSlotId),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bBoardTransfer)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BoardTransfer"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((signed long)((*(tyParameter)).tyData.eBoadTransfer),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bBoardId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BoardId"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sBoardId); for(zzIndex=0; zzIndex<36l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bBoardIdCreatedBy)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BoardIdCreatedBy"; for(zzIndex=0; zzIndex<16l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sBoardIdCreatedBy); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bFailedBoard)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"FailedBoard"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((signed long)((*(tyParameter)).tyData.eFailedBoard),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bProductTypeId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"ProductTypeId"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sProductTypeId); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bFlippedBoard)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"FlippedBoard"; for(zzIndex=0; zzIndex<12l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
dint2str((signed long)((*(tyParameter)).tyData.eFlippedBoard),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bTopBarcode)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"TopBarcode"; for(zzIndex=0; zzIndex<10l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sTopBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bBottomBarcode)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BottomBarcode"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sBottomBarcode); for(zzIndex=0; zzIndex<254l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bLength)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Length"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rLength),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bWidth)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Width"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rWidth),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bThickness)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Thickness"; for(zzIndex=0; zzIndex<9l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rThickness),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bConveyorSpeed)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"ConveyorSpeed"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rConveyorSpeed),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bTopClearanceHeight)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"TopClearanceHeight"; for(zzIndex=0; zzIndex<18l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rTopClearanceHeight),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bBottomClearanceHeight)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BottomClearanceHeight"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rBottomClearanceHeight),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bWeight)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Weight"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
real2str(((*(tyParameter)).tyData.rWeight),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bWorkOrderId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"WorkOrderId"; for(zzIndex=0; zzIndex<11l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sWorkOrdedId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bBatchId)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"BatchId"; for(zzIndex=0; zzIndex<7l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)((*(tyParameter)).tyData.sBatchId); for(zzIndex=0; zzIndex<80l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bRoute)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Route"; for(zzIndex=0; zzIndex<5l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((*(tyParameter)).tyData.iRoute),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

if((((unsigned long)(unsigned char)((*(tyParameter)).tyAvl.bAction)==(unsigned long)(unsigned char)1))){
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AT"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sValue; plcstring* zzRValue=(plcstring*)"Action"; for(zzIndex=0; zzIndex<6l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"AV"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
int2str(((*(tyParameter)).tyData.iAction),pa_tyXMLTable[iTotalIdxWrite].sValue,255);
(pa_tyXMLTable[iTotalIdxWrite].uiSize=LEN(pa_tyXMLTable[iTotalIdxWrite].sValue));

(iTotalIdxWrite=(iTotalIdxWrite+1));
}

{int zzIndex; plcstring* zzLValue=(plcstring*)pa_tyXMLTable[iTotalIdxWrite].sTitle; plcstring* zzRValue=(plcstring*)"ES"; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
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

(iTotalIdxWrite=__AS__fHermesFormBoardArrived);

}return __AS__fHermesFormBoardArrived;}
#line 396 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormBoardArrived.nodebug"

void __AS__ImplInitfHermesFormBoardArrived_st(void){}

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
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtHermes/fHermesFormBoardArrived.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XClamp_WShutter_/X20CP0483/NtHermes/fHermesFormBoardArrived.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fHermesFormBoardArrived.st\\\"\\n\"");
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
