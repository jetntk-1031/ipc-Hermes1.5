
ACTION Act_OptP1021Navi: 

	IF tyP1021McSetGen.tyNaviLyr1.tyBtnBack.bRtCompl = TRUE OR tyP1021McSetGen.tyNaviLyr2.tyBtnBack.bRtCompl = TRUE THEN
		eChgPage	:= UIP1020McSetNavi;
		
		tyP1021McSetGen.tyNaviLyr1.tyBtnBack.bRtCompl	:= FALSE;
		tyP1021McSetGen.tyNaviLyr2.tyBtnBack.bRtCompl	:= FALSE;

	//Navi From Layer 1 to Layer 2
	ELSIF tyP1021McSetGen.tyNaviLyr1.tyBtnRgt.bRtCompl = TRUE THEN
		p_tyC0004Navi ACCESS ADR (tyP1021McSetGen.tyNaviLyr2);
		
		fUIInRtStatHide(ADR(tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat));
		fUIInRtStatOff(ADR(tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat));
		
		tyP1021McSetGen.tyNaviLyr1.tyBtnRgt.bRtCompl	:= FALSE;
		
	ELSIF tyP1021McSetGen.tyNaviLyr1.tyBtnLeft.bRtCompl = TRUE THEN
		p_tyC0004Navi ACCESS ADR (tyP1021McSetGen.tyNaviLyr2);
		
		fUIInRtStatHide(ADR(tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat));
		fUIInRtStatOff(ADR(tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat));
		
		tyP1021McSetGen.tyNaviLyr1.tyBtnLeft.bRtCompl	:= FALSE;
		
	//Navi Form Layer 2 to Layer 1
	ELSIF tyP1021McSetGen.tyNaviLyr2.tyBtnRgt.bRtCompl = TRUE THEN
		p_tyC0004Navi ACCESS ADR(tyP1021McSetGen.tyNaviLyr1);
		
		fUIInRtStatOff(ADR(tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat));
		fUIInRtStatHide(ADR(tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat));
		
		tyP1021McSetGen.tyNaviLyr2.tyBtnRgt.bRtCompl	:= FALSE;
		
	ELSIF tyP1021McSetGen.tyNaviLyr2.tyBtnLeft.bRtCompl = TRUE THEN
		p_tyC0004Navi ACCESS ADR(tyP1021McSetGen.tyNaviLyr1);
		
		fUIInRtStatOff(ADR(tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat));
		fUIInRtStatHide(ADR(tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat));
		
		tyP1021McSetGen.tyNaviLyr2.tyBtnLeft.bRtCompl	:= FALSE;
		
	END_IF
	
END_ACTION
