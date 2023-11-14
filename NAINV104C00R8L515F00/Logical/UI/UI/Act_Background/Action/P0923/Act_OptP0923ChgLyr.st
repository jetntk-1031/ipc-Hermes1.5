
ACTION Act_OptP0923ChgLyr: 
	
	IF tyP0923Stopper.tyCom.tyBtnDCCtrl.bRtCompl = TRUE THEN
		tyP0923Stopper.tyCom.tyBtnDCCtrl.bRtCompl := FALSE;

		IF tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0923Stopper.tyDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0923Stopper.tyFB.tyLyr.uiRtStat));	
		ELSE
			fUIInRtStatHide(ADR(tyP0923Stopper.tyDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0923Stopper.tyFB.tyLyr.uiRtStat));
		END_IF
	END_IF

END_ACTION
