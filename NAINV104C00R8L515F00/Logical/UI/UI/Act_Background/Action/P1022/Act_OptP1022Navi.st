
ACTION Act_OptP1022Navi: 
	
//	//tyP1022McSetVComm.tyNaviBack.tyBtnBack.bRtLk	:= tyCommon.tySet.tyBtnSave.bRtCompl;
//	
//	IF tyP1022McSetVComm.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN	
//		eChgPage	:= UIP1020McSetNavi;
//		
//		tyP1022McSetVComm.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
//		
//	END_IF
	
	
	
	tyP1022McSetVComm.tyNaviBack.tyBtnBack.bRtLk	:= tyCommon.tySet.tyBtnSave.bRtCompl;
	
	IF tyP1022McSetVComm.tyNaviLyr1.tyBtnBack.bRtCompl OR tyP1022McSetVComm.tyNaviLyr2.tyBtnBack.bRtCompl OR 
		tyP1022McSetVComm.tyNaviLyr3.tyBtnBack.bRtCompl OR tyP1022McSetVComm.tyNaviLyr4.tyBtnBack.bRtCompl THEN	
		tyP1022McSetVComm.tyNaviLyr1.tyBtnBack.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyNaviLyr2.tyBtnBack.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyNaviLyr3.tyBtnBack.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyNaviLyr4.tyBtnBack.bRtCompl	:= FALSE;
	
		eChgPage	:= UIP1020McSetNavi;
		
		
	ELSIF tyP1022McSetVComm.tyNaviLyr3.tyBtnLeft.bRtCompl = TRUE OR tyP1022McSetVComm.tyNaviLyr3.tyBtnRgt.bRtCompl = TRUE THEN
		tyP1022McSetVComm.tyNaviLyr3.tyBtnLeft.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyNaviLyr3.tyBtnRgt.bRtCompl	:= FALSE;
		
		p_tyC0004Navi ACCESS ADR(tyP1022McSetVComm.tyNaviLyr4);
		
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat)); //new for Hermes 1.3
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyLF.tyLyr.uiRtStat));
		
	ELSIF tyP1022McSetVComm.tyNaviLyr4.tyBtnLeft.bRtCompl = TRUE OR tyP1022McSetVComm.tyNaviLyr4.tyBtnRgt.bRtCompl = TRUE THEN
		tyP1022McSetVComm.tyNaviLyr4.tyBtnLeft.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyNaviLyr4.tyBtnRgt.bRtCompl	:= FALSE;
		
		p_tyC0004Navi ACCESS ADR(tyP1022McSetVComm.tyNaviLyr3);
		
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyVComSel.tyLyr.uiRtStat)); 
		fUIInRtStatHide(ADR(tyP1022McSetVComm.tyVComSvy.tyLyr.uiRtStat));  //new for Hermes 1.3
		fUIInRtStatOff(ADR(tyP1022McSetVComm.tyLF.tyLyr.uiRtStat)); 
	END_IF

END_ACTION
