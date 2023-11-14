
ACTION Act_OptP0924Clamp2ChgLyr:
	
	IF	tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bRtCompl THEN
		tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bRtCompl := FALSE;
		
		IF tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat));
		ELSE
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat));
		END_IF	
		
	END_IF
	
END_ACTION
