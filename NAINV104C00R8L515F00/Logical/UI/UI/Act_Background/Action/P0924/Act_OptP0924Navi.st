
ACTION Act_OptP0924Navi:
	
	IF tyP0924ClampWithRS.tyNaviLyr1.tyBtnBack.bRtCompl = TRUE OR tyP0924ClampWithRS.tyNaviLyr2.tyBtnBack.bRtCompl = TRUE THEN
		tyP0924ClampWithRS.tyNaviLyr1.tyBtnBack.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyNaviLyr2.tyBtnBack.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0920MtrNPneuCtrl;
		
	ELSIF tyP0924ClampWithRS.tyNaviLyr1.tyBtnLeft.bRtCompl = TRUE OR tyP0924ClampWithRS.tyNaviLyr1.tyBtnRgt.bRtCompl = TRUE THEN
		tyP0924ClampWithRS.tyNaviLyr1.tyBtnLeft.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyNaviLyr1.tyBtnRgt.bRtCompl	:= FALSE;
		
		p_tyC0004Navi ACCESS ADR(tyP0924ClampWithRS.tyNaviLyr2);
		
		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR (tyP0924ClampWithRS.tyNaviLyr2.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSCom.tyLyr.uiRtStat));

		fUIInRtStatHide(ADR (tyP0924ClampWithRS.tyClamp1WithRSCom.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR (tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR (tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR (tyP0924ClampWithRS.tyClamp2WithRSCom.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR (tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR (tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat));
		
		IF tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
		ELSE	
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
		END_IF
	
		
		
	ELSIF tyP0924ClampWithRS.tyNaviLyr2.tyBtnLeft.bRtCompl = TRUE OR tyP0924ClampWithRS.tyNaviLyr2.tyBtnRgt.bRtCompl = TRUE THEN
		tyP0924ClampWithRS.tyNaviLyr2.tyBtnLeft.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyNaviLyr2.tyBtnRgt.bRtCompl	:= FALSE;
		
		p_tyC0004Navi ACCESS ADR(tyP0924ClampWithRS.tyNaviLyr1);
		
		fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyNaviLyr2.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSCom.tyLyr.uiRtStat));
		
		fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSCom.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSCom.tyLyr.uiRtStat));
		
		
		IF tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat));
		ELSE	
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat));
		END_IF
	
		IF tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat));
		ELSE	
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat));
		END_IF
		
		
		
		
	END_IF
	
	
	
END_ACTION
