
ACTION Act_OptP0924Clamp1ChgLyr:
	
	IF tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bRtCompl THEN
		tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bRtCompl := FALSE;
		
		IF tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat));
		ELSE
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat));
		END_IF	
		
	END_IF
		

END_ACTION
