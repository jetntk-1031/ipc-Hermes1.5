
ACTION Act_OptP1023Navi: 
	
	IF tyP1023McSetHComm.tyNaviLyr1.tyBtnBack.bRtCompl = TRUE OR tyP1023McSetHComm.tyNaviLyr2.tyBtnBack.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyNaviLyr1.tyBtnBack.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyNaviLyr2.tyBtnBack.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP1020McSetNavi;
		
	ELSIF tyP1023McSetHComm.tyNaviLyr1.tyBtnLeft.bRtCompl = TRUE OR tyP1023McSetHComm.tyNaviLyr1.tyBtnRgt.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyNaviLyr1.tyBtnLeft.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyNaviLyr1.tyBtnRgt.bRtCompl	:= FALSE;
		
		p_tyC0004Navi ACCESS ADR(tyP1023McSetHComm.tyNaviLyr2);
		
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
		
		IF tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx = 0 THEN
			
			p_tyP1023McSetHCommDSSel ACCESS ADR(tyP1023McSetHComm.tyDSSel);
			p_tyP1023McSetHCommDSSMEMA ACCESS ADR(tyP1023McSetHComm.tyDSSMEMA);
			p_tyP1023McSetHCommDSHermes ACCESS ADR(tyP1023McSetHComm.tyDSHermes);
			
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat));
				
		ELSIF tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx = 1 THEN
			
			p_tyP1023McSetHCommDSSel ACCESS ADR(tyP1023McSetHComm.tyDSSel2);
			p_tyP1023McSetHCommDSSMEMA ACCESS ADR(tyP1023McSetHComm.tyDSSMEMA2);
			p_tyP1023McSetHCommDSHermes ACCESS ADR(tyP1023McSetHComm.tyDSHermes2);
			
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat));
			

		END_IF 

	ELSIF tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl = TRUE OR tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl	:= FALSE;
		
		p_tyC0004Navi ACCESS ADR(tyP1023McSetHComm.tyNaviLyr1);
		
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat));
		
		
		IF tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx = 0 THEN
			
			p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel);
			p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA);
			p_tyP1023McSetHCommUSHermes ACCESS ADR(tyP1023McSetHComm.tyUSHermes);
			
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
				
		ELSIF tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx = 1 THEN
			
			p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel2);
			p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA2);
			p_tyP1023McSetHCommUSHermes ACCESS ADR(tyP1023McSetHComm.tyUSHermes2);
			
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
			

		END_IF 

//Testing		
//	ELSIF 	(tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl = TRUE OR tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl = TRUE) AND
//			tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx = 0  THEN
//			tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl	:= FALSE;
//			tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl	:= FALSE;
//		
//			p_tyC0004Navi ACCESS ADR(tyP1023McSetHComm.tyNaviLyr1);
//			p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel);
//			p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA);
//			p_tyP1023McSetHCommUSHermes ACCESS ADR(tyP1023McSetHComm.tyUSHermes);	
//	
//			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
//			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
//			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
//					
//	ELSIF 	(tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl = TRUE OR tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl = TRUE) AND
//			tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx = 1 THEN
//			tyP1023McSetHComm.tyNaviLyr2.tyBtnLeft.bRtCompl	:= FALSE;
//			tyP1023McSetHComm.tyNaviLyr2.tyBtnRgt.bRtCompl	:= FALSE;	
//		
//			p_tyC0004Navi ACCESS ADR(tyP1023McSetHComm.tyNaviLyr1);
//			p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel2);
//			p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA2);
//					
//			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
//			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
//			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
					
		
	END_IF
	
END_ACTION
