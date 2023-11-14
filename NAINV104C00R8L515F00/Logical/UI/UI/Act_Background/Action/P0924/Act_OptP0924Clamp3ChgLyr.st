
ACTION Act_OptP0924Clamp3ChgLyr:
	
	IF tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bRtCompl THEN
		tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bRtCompl := FALSE;
		
		IF tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
		ELSE
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
		END_IF	
		
	END_IF
		

END_ACTION
