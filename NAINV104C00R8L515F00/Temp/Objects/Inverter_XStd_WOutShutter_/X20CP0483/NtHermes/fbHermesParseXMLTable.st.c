#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/NtHermes/fbHermesParseXMLTablest.h"
#line 1 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fbHermesParseXMLTable.nodebug"
#line 3 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fbHermesParseXMLTable.st"
void fbHermesParseXMLTable(struct fbHermesParseXMLTable* inst){struct fbHermesParseXMLTable* __inst__=inst;{

__AS__MEMSET(((unsigned long)(&__inst__->tyMsgType)),0,24);
__AS__MEMSET(((unsigned long)(&__inst__->tyCheckAlive)),0,92);
__AS__MEMSET(((unsigned long)(&__inst__->tyCheckAlivePing)),0,92);
__AS__MEMSET(((unsigned long)(&__inst__->tyCheckAlivePong)),0,92);
__AS__MEMSET(((unsigned long)(&__inst__->tyServiceDescription)),0,274);
__AS__MEMSET(((unsigned long)(&__inst__->tySServiceDescription)),0,184);
__AS__MEMSET(((unsigned long)(&__inst__->tyNotification)),0,268);
__AS__MEMSET(((unsigned long)(&__inst__->tyBoardAvailable)),0,1552);
__AS__MEMSET(((unsigned long)(&__inst__->tyMachineReady)),0,592);
__AS__MEMSET(((unsigned long)(&__inst__->tyStartTransport)),0,48);
__AS__MEMSET(((unsigned long)(&__inst__->tyStopTransport)),0,48);
__AS__MEMSET(((unsigned long)(&__inst__->tyTransportFinished)),0,48);
__AS__MEMSET(((unsigned long)(&__inst__->tySetConfiguration)),0,2844);
__AS__MEMSET(((unsigned long)(&__inst__->tyCurrentConfiguration)),0,2844);
__AS__MEMSET(((unsigned long)(&__inst__->tyBoardForecast)),0,1196);
__AS__MEMSET(((unsigned long)(&__inst__->tyBoardArrived)),0,1368);
__AS__MEMSET(((unsigned long)(&__inst__->tyBoardDeparted)),0,1368);
__AS__MEMSET(((unsigned long)(&__inst__->tyQueryBoardInfo)),0,512);
__AS__MEMSET(((unsigned long)(&__inst__->tySendBoardInfo)),0,1100);
__AS__MEMSET(((unsigned long)(&__inst__->tyQueryWorkOrderInfo)),0,508);
__AS__MEMSET(((unsigned long)(&__inst__->tySendWorkOrderInfo)),0,1192);
__AS__MEMSET(((unsigned long)(&__inst__->tyCommand)),0,8);

(__inst__->iCheckAliveFirstIdx=-1);
(__inst__->iCheckAliveLastIdx=-1);
(__inst__->iCheckAlivePingFirstIdx=-1);
(__inst__->iCheckAlivePingLastIdx=-1);
(__inst__->iCheckAlivePongFirstIdx=-1);
(__inst__->iCheckAlivePongLastIdx=-1);
(__inst__->iServiceDescriptionFirstIdx=-1);
(__inst__->iServiceDescriptionLastIdx=-1);
(__inst__->iSServiceDescriptionFirstIdx=-1);
(__inst__->iSServiceDescriptionLastIdx=-1);
(__inst__->iNotificationFirstIdx=-1);
(__inst__->iNotificationLastIdx=-1);
(__inst__->iBoardAvailableFirstIdx=-1);
(__inst__->iBoardAvailableLastIdx=-1);
(__inst__->iRevokeBoardAvailableFirstIdx=-1);
(__inst__->iRevokeBoardAvailableLastIdx=-1);
(__inst__->iMachineReadyFirstIdx=-1);
(__inst__->iMachineReadyLastIdx=-1);
(__inst__->iRevokeMachineReadyFirstIdx=-1);
(__inst__->iRevokeMachineReadyLastIdx=-1);
(__inst__->iStartTransportFirstIdx=-1);
(__inst__->iStartTransportLastIdx=-1);
(__inst__->iStopTransportFirstIdx=-1);
(__inst__->iStopTransportLastIdx=-1);
(__inst__->iTransportFinishedFirstIdx=-1);
(__inst__->iTransportFinishedLastIdx=-1);
(__inst__->iSetConfigurationFirstIdx=-1);
(__inst__->iSetConfigurationLastIdx=-1);
(__inst__->iGetConfigurationFirstIdx=-1);
(__inst__->iGetConfigurationLastIdx=-1);
(__inst__->iCurrentConfigurationFirstIdx=-1);
(__inst__->iCurrentConfigurationLastIdx=-1);
(__inst__->iBoardForecastFirstIdx=-1);
(__inst__->iBoardForecastLastIdx=-1);
(__inst__->iBoardArrivedFirstIdx=-1);
(__inst__->iBoardArrivedLastIdx=-1);
(__inst__->iBoardDepartedFirstIdx=-1);
(__inst__->iBoardDepartedLastIdx=-1);
(__inst__->iQueryBoardInfoFirstIdx=-1);
(__inst__->iQueryBoardInfoLastIdx=-1);
(__inst__->iSendBoardInfoFirstIdx=-1);
(__inst__->iSendBoardInfoLastIdx=-1);
(__inst__->iQueryWorkOrderInfoFirstIdx=-1);
(__inst__->iQueryWorkOrderInfoLastIdx=-1);
(__inst__->iSendWorkOrderInfoFirstIdx=-1);
(__inst__->iSendWorkOrderInfoLastIdx=-1);
(__inst__->iCommandFirstIdx=-1);
(__inst__->iCommandLastIdx1=-1);
(__inst__->iHermesIdx=-1);


(__inst__->iSubBoardCntr=-1);

(__inst__->eMsgType=0);

for((__inst__->udi=__inst__->p_XMLTable);__inst__->udi<=(__inst__->p_XMLTable+((__inst__->iTotalIdxWrite-2)*260));__inst__->udi+=260){

(__inst__->p_tyXMLTable=__inst__->udi);
(__inst__->p_tyXMLTable1=(__inst__->udi+260));

fConvertToLower_254(((unsigned long)(&__inst__->sLowerCase)),((*(__inst__->p_tyXMLTable)).sValue));

if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"hermes")==0)))){

(__inst__->eMsgType=0);
(__inst__->iHermesIdx=(signed short)(((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260))));

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ET")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"hermes")==0)))){

(__inst__->iHermesIdx=-1);

switch(__inst__->eMsgType){

case 1:{
(__inst__->iCheckAliveLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));

if(((((unsigned long)(unsigned char)__inst__->tyCheckAlive.tyAvl.bType==(unsigned long)(unsigned char)1))&(((signed long)__inst__->tyCheckAlive.tyData.eType==(signed long)1)))){
(__inst__->tyMsgType.bCheckAlivePing=1);
(__inst__->tyCheckAlivePing=*(struct tyHermesCheckAlive*)&__inst__->tyCheckAlive);
(__inst__->iCheckAlivePingFirstIdx=__inst__->iCheckAliveFirstIdx);
(__inst__->iCheckAlivePingLastIdx=__inst__->iCheckAliveLastIdx);

__AS__MEMSET(((unsigned long)(&__inst__->tyCheckAlive)),0,92);
(__inst__->tyMsgType.bCheckAlive=0);
(__inst__->iCheckAliveFirstIdx=-1);
(__inst__->iCheckAliveLastIdx=-1);

}else if(((((unsigned long)(unsigned char)__inst__->tyCheckAlive.tyAvl.bType==(unsigned long)(unsigned char)1))&(((signed long)__inst__->tyCheckAlive.tyData.eType==(signed long)2)))){
(__inst__->tyMsgType.bCheckAlivePong=1);
(__inst__->tyCheckAlivePong=*(struct tyHermesCheckAlive*)&__inst__->tyCheckAlive);
(__inst__->iCheckAlivePongFirstIdx=__inst__->iCheckAliveFirstIdx);
(__inst__->iCheckAlivePongLastIdx=__inst__->iCheckAliveLastIdx);

__AS__MEMSET(((unsigned long)(&__inst__->tyCheckAlive)),0,92);
(__inst__->tyMsgType.bCheckAlive=0);
(__inst__->iCheckAliveFirstIdx=-1);
(__inst__->iCheckAliveLastIdx=-1);

}

}break;case 4:{(__inst__->iServiceDescriptionLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 5:{(__inst__->iSServiceDescriptionLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 6:{(__inst__->iNotificationLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 7:{(__inst__->iBoardAvailableLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 8:{(__inst__->iRevokeBoardAvailableLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 9:{(__inst__->iMachineReadyLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 10:{(__inst__->iRevokeMachineReadyLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 11:{(__inst__->iStartTransportLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 12:{(__inst__->iStopTransportLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 13:{(__inst__->iTransportFinishedLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 14:{(__inst__->iSetConfigurationLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 15:{(__inst__->iGetConfigurationLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 16:{(__inst__->iCurrentConfigurationLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 17:{(__inst__->iBoardForecastLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 20:{(__inst__->iBoardArrivedLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 21:{(__inst__->iBoardDepartedLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 22:{(__inst__->iQueryBoardInfoLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 23:{(__inst__->iSendBoardInfoLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 24:{(__inst__->iQueryWorkOrderInfoLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));
}break;case 25:{(__inst__->iSendWorkOrderInfoLastIdx=(signed short)((((unsigned long)((__inst__->udi-__inst__->p_XMLTable)))/((unsigned long)(260)))+1));

}break;}

(__inst__->eMsgType=0);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"checkalive")==0)))){

(__inst__->eMsgType=1);
(__inst__->tyMsgType.bCheckAlive=1);
(__inst__->iCheckAliveFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"servicedescription")==0)))){

(__inst__->eMsgType=4);
(__inst__->tyMsgType.bServiceDescription=1);
(__inst__->iServiceDescriptionFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"supervisoryservicedescription")==0)))){

(__inst__->eMsgType=5);
(__inst__->tyMsgType.bSServiceDescription=1);
(__inst__->iSServiceDescriptionFirstIdx=__inst__->iHermesIdx);


}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"notification")==0)))){

(__inst__->eMsgType=6);
(__inst__->tyMsgType.bNotification=1);
(__inst__->iNotificationFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"boardavailable")==0)))){

(__inst__->eMsgType=7);
(__inst__->tyMsgType.bBoardAvailable=1);
(__inst__->iBoardAvailableFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"revokeboardavailable")==0)))){

(__inst__->eMsgType=8);
(__inst__->tyMsgType.bRevokeBoardAvailable=1);
(__inst__->iRevokeBoardAvailableFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"machineready")==0)))){

(__inst__->eMsgType=9);
(__inst__->tyMsgType.bMachineReady=1);
(__inst__->iMachineReadyFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"revokemachineready")==0)))){

(__inst__->eMsgType=10);
(__inst__->tyMsgType.bRevokeMachineReady=1);
(__inst__->iRevokeMachineReadyFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"starttransport")==0)))){

(__inst__->eMsgType=11);
(__inst__->tyMsgType.bStartTransport=1);
(__inst__->iStartTransportFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"stoptransport")==0)))){

(__inst__->eMsgType=12);
(__inst__->tyMsgType.bStopTransport=1);
(__inst__->iStopTransportFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"transportfinished")==0)))){

(__inst__->eMsgType=13);
(__inst__->tyMsgType.bTransportFinished=1);
(__inst__->iTransportFinishedFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"setconfiguration")==0)))){

(__inst__->eMsgType=14);
(__inst__->tyMsgType.bSetConfiguration=1);
(__inst__->iSetConfigurationFirstIdx=__inst__->iHermesIdx);
(__inst__->bSetUpstream=0);
(__inst__->bSetDownstream=0);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"getconfiguration")==0)))){

(__inst__->eMsgType=15);
(__inst__->tyMsgType.bGetConfiguration=1);
(__inst__->iGetConfigurationFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"currentconfiguration")==0)))){

(__inst__->eMsgType=16);
(__inst__->tyMsgType.bCurrentConfiguration=1);
(__inst__->iCurrentConfigurationFirstIdx=__inst__->iHermesIdx);
(__inst__->bCurrUpstream=0);
(__inst__->bCurrDownstream=0);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"boardforecast")==0)))){

(__inst__->eMsgType=17);
(__inst__->tyMsgType.bBoardForecast=1);
(__inst__->iBoardForecastFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"boardarrived")==0)))){

(__inst__->eMsgType=20);
(__inst__->tyMsgType.bBoardArrived=1);
(__inst__->iBoardArrivedFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"boarddeparted")==0)))){

(__inst__->eMsgType=21);
(__inst__->tyMsgType.bBoardDeparted=1);
(__inst__->iBoardDepartedFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"queryboardinfo")==0)))){

(__inst__->eMsgType=22);
(__inst__->tyMsgType.bQueryBoardInfo=1);
(__inst__->iQueryBoardInfoFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"sendboardinfo")==0)))){

(__inst__->eMsgType=23);
(__inst__->tyMsgType.bSendBoardInfo=1);
(__inst__->iSendBoardInfoFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"queryworkorderinfo")==0)))){

(__inst__->eMsgType=24);
(__inst__->tyMsgType.bQueryWorkOrderInfo=1);
(__inst__->iQueryWorkOrderInfoFirstIdx=__inst__->iHermesIdx);

}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"sendworkorderinfo")==0)))){

(__inst__->eMsgType=25);
(__inst__->tyMsgType.bSendWorkOrderInfo=1);
(__inst__->iSendWorkOrderInfoFirstIdx=__inst__->iHermesIdx);
}else if((((__AS__STRING_CMP(((*(__inst__->p_tyXMLTable)).sTitle),"ST")==0))&((__AS__STRING_CMP(__inst__->sLowerCase,"command")==0)))){

(__inst__->eMsgType=26);
(__inst__->tyMsgType.bCommand=1);
(__inst__->iCommandFirstIdx=__inst__->iHermesIdx);
}else{

switch(__inst__->eMsgType){
case 1:{
fHermesParseCheckAlive(((unsigned long)(&__inst__->tyCheckAlive)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 4:{
fHermesParseServiceDescription(((unsigned long)(&__inst__->tyServiceDescription)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 5:{
fHermesParseSServiceDescription(((unsigned long)(&__inst__->tySServiceDescription)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 6:{
fHermesParseNotification(((unsigned long)(&__inst__->tyNotification)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 7:{
fHermesParseBoardAvailable(((unsigned long)(&__inst__->tyBoardAvailable)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase,((unsigned long)(&__inst__->iSubBoardCntr)));

}break;case 9:{
fHermesParseMachineReady(((unsigned long)(&__inst__->tyMachineReady)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 11:{
fHermesParseStartTransport(((unsigned long)(&__inst__->tyStartTransport)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 12:{
fHermesParseStopTransport(((unsigned long)(&__inst__->tyStopTransport)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 13:{
fHermesParseTransportFinished(((unsigned long)(&__inst__->tyTransportFinished)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 14:{
fHermesParseSetConfiguration(((unsigned long)(&__inst__->tySetConfiguration)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase,&__inst__->bSetUpstream,&__inst__->bSetDownstream);

}break;case 16:{
fHermesParseCurrentConfiguration(((unsigned long)(&__inst__->tyCurrentConfiguration)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase,&__inst__->bCurrUpstream,&__inst__->bCurrDownstream);

}break;case 17:{
fHermesParseBoardForecast(((unsigned long)(&__inst__->tyBoardForecast)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 20:{
fHermesParseBoardArrived(((unsigned long)(&__inst__->tyBoardArrived)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 21:{
fHermesParseBoardDeparted(((unsigned long)(&__inst__->tyBoardDeparted)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 22:{
fHermesParseQueryBoardInfo(((unsigned long)(&__inst__->tyQueryBoardInfo)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 23:{
fHermesParseSendBoardInfo(((unsigned long)(&__inst__->tySendBoardInfo)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 24:{
fHermesParseQueryWorkOrderInfo(((unsigned long)(&__inst__->tyQueryWorkOrderInfo)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 25:{
fHermesParseSendWorkOrderInfo(((unsigned long)(&__inst__->tySendWorkOrderInfo)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;case 26:{
fHermesParseCommand(((unsigned long)(&__inst__->tyCommand)),&((*(__inst__->p_tyXMLTable))),&((*(__inst__->p_tyXMLTable1))),__inst__->sLowerCase);

}break;}

}

}imp1_endfor0_0:;

}}
#line 354 "C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fbHermesParseXMLTable.nodebug"

void __AS__ImplInitfbHermesParseXMLTable_st(void){}

signed long __AS__STRING_CMP(char* pstr1, char* pstr2)
{while (*pstr1 != 0 && *pstr1 == *pstr2){ pstr1++;pstr2++; } return (*pstr1 == 0 && *pstr2 != 0) ? -1 : (*pstr1 != 0 && *pstr2 == 0) ? 1 : *pstr1 - *pstr2;}

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
__asm__(".ascii \"iecfile \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/NtHermes/fbHermesParseXMLTable.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp/Objects/Inverter_XStd_WOutShutter_/X20CP0483/NtHermes/fbHermesParseXMLTable.st.c\\\" \\\"C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/NtLibraries/NtHermes/fbHermesParseXMLTable.st\\\"\\n\"");
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
__asm__(".ascii \"plcexport \\\"fHermesGenerateBrdXmlTbl\\\" FUN\\n\"");
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
