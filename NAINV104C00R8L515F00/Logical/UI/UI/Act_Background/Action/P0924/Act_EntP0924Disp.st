

ACTION Act_EntP0924Disp:
	
	//Access Address
	p_tyC0003DualMask ACCESS ADR(tyP0924ClampWithRS.tyDualMaskHide);
	
	p_tyC0004Navi ACCESS ADR(tyP0924ClampWithRS.tyNaviLyr1);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0924ClampWithRS.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyP0924Clamp1WithRSCom ACCESS ADR(tyP0924ClampWithRS.tyClamp1WithRSCom);
	p_tyP0924Clamp1WithRSDC ACCESS ADR(tyP0924ClampWithRS.tyClamp1WithRSDC);
	p_tyP0924Clamp1WithRSFB ACCESS ADR(tyP0924ClampWithRS.tyClamp1WithRSFB);
	p_tyP0924Clamp1WithRSDis ACCESS ADR(tyP0924ClampWithRS.tyClamp1WithRSDis);
	
	p_tyP0924Clamp2WithRSCom ACCESS ADR(tyP0924ClampWithRS.tyClamp2WithRSCom);
	p_tyP0924Clamp2WithRSDC ACCESS ADR(tyP0924ClampWithRS.tyClamp2WithRSDC);
	p_tyP0924Clamp2WithRSFB ACCESS ADR(tyP0924ClampWithRS.tyClamp2WithRSFB);
	p_tyP0924Clamp2WithRSDis ACCESS ADR(tyP0924ClampWithRS.tyClamp2WithRSDis);
			
	p_tyP0924Clamp3WithRSCom ACCESS ADR(tyP0924ClampWithRS.tyClamp3WithRSCom);
	p_tyP0924Clamp3WithRSDC ACCESS ADR(tyP0924ClampWithRS.tyClamp3WithRSDC);
	p_tyP0924Clamp3WithRSFB ACCESS ADR(tyP0924ClampWithRS.tyClamp3WithRSFB);
	p_tyP0924Clamp3WithRSDis ACCESS ADR(tyP0924ClampWithRS.tyClamp3WithRSDis);
		
	//Display
	tyP0924ClampWithRS.tyClamp1WithRSDis.tyLyr.uiRtStat.0	:= (p_tyNtParamCurr.bProjClampPrep); 
	tyP0924ClampWithRS.tyClamp2WithRSDis.tyLyr.uiRtStat.0	:= (p_tyNtParamCurr.bProjClampPrep); 
	tyP0924ClampWithRS.tyClamp3WithRSDis.tyLyr.uiRtStat.0	:= (p_tyNtParamCurr.bProjClampPrep); 
	
	fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyNaviLyr2.tyLyr.uiRtStat));
	
	fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSCom.tyLyr.uiRtStat));
	fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSCom.tyLyr.uiRtStat));
	
	fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSCom.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
	fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDis.tyLyr.uiRtStat));
	
	//Display
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
	
//	IF tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue = TRUE THEN
//		fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
//		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
//	ELSE	
//		fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
//		fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
//	END_IF
	
END_ACTION
