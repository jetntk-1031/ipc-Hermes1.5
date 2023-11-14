
ACTION Act_EntP1022Disp: 
	
	//Access Address
			//new for Hermes 1.3
	IF p_tyNtParamCurr.bLFPrep OR p_tyNtParamCurr.bLCSLFPrep OR p_tyNtParamCurr.bLCSReqRcpPrep OR p_tyNtParamCurr.bLCSManageRcpPrep OR p_tyNtParamCurr.bLCSLiveDatPrep
		OR p_tyNtParamCurr.bLFUsrSetPrep OR p_tyNtParamCurr.bLFUsrSetPrep OR  p_tyNtParamCurr.bUSWidthChkPrep OR p_tyNtParamCurr.bDSWidthChkPrep THEN
		bNaviLyr1 := TRUE;
	ELSE	
		bNaviLyr1 := FALSE;
	END_IF
	
	IF (p_tyNtParamCurr.bHermesSvyPrep AND p_tyMcParamCurr.bHermesSvyEn)  THEN
		bNaviLyr2 := TRUE;
	ELSE
		bNaviLyr2 := FALSE;
	END_IF
	
	IF bNaviLyr1 AND NOT bNaviLyr2 THEN
		p_tyC0004Navi ACCESS ADR(tyP1022McSetVComm.tyNaviLyr1);
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)); //show
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)); 
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)); //show
		
	ELSIF NOT bNaviLyr1 AND bNaviLyr2 THEN
		p_tyC0004Navi ACCESS ADR(tyP1022McSetVComm.tyNaviLyr2);
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)); //show
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)); 
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)); //show
		
	ELSIF bNaviLyr1 AND bNaviLyr2 THEN
		p_tyC0004Navi ACCESS ADR(tyP1022McSetVComm.tyNaviLyr3);
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)); //show
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)); 
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)); //show
	END_IF
	
//	p_tyC0004Navi ACCESS ADR(tyP1022McSetVComm.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0006Set ACCESS ADR(tyCommon.tySet);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1022McSetVComm.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1022McSetVCommSel ACCESS ADR(tyP1022McSetVComm.tyVComSel);
	p_tyP1022McSetVCommLF ACCESS ADR(tyP1022McSetVComm.tyLF);
	p_tyP1022McSetVCommSvy ACCESS ADR(tyP1022McSetVComm.tyVComSvy); //new for Hermes 1.3
																(*ADD for 2023-0061E01*)
	IF p_tyNtParamCurr.bHermesSvyFirstMcInTheLine = FALSE AND p_tyNtParamCurr.bHermesSvyQueryBoardInfo = FALSE THEN
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.uiRtStat)); 
	END_IF
	
	//Backup Param
	tyP1022McSetVComm.tyVComSelBkUp	:= tyP1022McSetVComm.tyVComSel;
	tyP1022McSetVComm.tyLFBkUp		:= tyP1022McSetVComm.tyLF;
	tyP1022McSetVComm.tyVComSvyBkUp	:= tyP1022McSetVComm.tyVComSvy; //new for Hermes 1.3
	
END_ACTION
