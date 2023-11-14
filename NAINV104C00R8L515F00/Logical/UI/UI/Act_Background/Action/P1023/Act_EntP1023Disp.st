
ACTION Act_EntP1023Disp: 
	
	//Access Address
	p_tyC0004Navi ACCESS ADR(tyP1023McSetHComm.tyNaviLyr1);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0006Set ACCESS ADR(tyCommon.tySet);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1023McSetHCommGen ACCESS ADR(tyP1023McSetHComm.tyGen);
	
	p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel);
	p_tyP1023McSetHCommDSSel ACCESS ADR(tyP1023McSetHComm.tyDSSel);
	p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA);
	p_tyP1023McSetHCommDSSMEMA ACCESS ADR(tyP1023McSetHComm.tyDSSMEMA);
	p_tyP1023McSetHCommUSHermes ACCESS ADR(tyP1023McSetHComm.tyUSHermes);
	p_tyP1023McSetHCommDSHermes ACCESS ADR(tyP1023McSetHComm.tyDSHermes);
	
	p_tyP1023McSetHCommUSSel2 ACCESS ADR(tyP1023McSetHComm.tyUSSel2);
	p_tyP1023McSetHCommUSSMEMA2 ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA2);
	
	//DropDown
	tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx 	:=0;
	tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx 	:=0;
	
	tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueMaxIdx 	:=1;
	tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueMaxIdx 	:=1;
	
	//Display
	fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSMEMA.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSHermes.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSMEMA2.tyLyr.uiRtStat));
	
	//Backup Param
	tyP1023McSetHComm.tyUSSelBkUp		:= tyP1023McSetHComm.tyUSSel;
	tyP1023McSetHComm.tyUSSMEMABkUp		:= tyP1023McSetHComm.tyUSSMEMA;
	tyP1023McSetHComm.tyUSHermesBkUp	:= tyP1023McSetHComm.tyUSHermes;
	tyP1023McSetHComm.tyDSSelBkUp		:= tyP1023McSetHComm.tyDSSel;
	tyP1023McSetHComm.tyDSSMEMABkUp		:= tyP1023McSetHComm.tyDSSMEMA;
	tyP1023McSetHComm.tyDSHermesBkUp	:= tyP1023McSetHComm.tyDSHermes;
	
	//Backup Param Upstream 2
	tyP1023McSetHComm.tyUSSelBkUp2		:= tyP1023McSetHComm.tyUSSel2;
	tyP1023McSetHComm.tyUSSMEMABkUp2	:= tyP1023McSetHComm.tyUSSMEMA2;
	tyP1023McSetHComm.tyUSHermesBkUp2	:= tyP1023McSetHComm.tyUSHermes2;	
END_ACTION
