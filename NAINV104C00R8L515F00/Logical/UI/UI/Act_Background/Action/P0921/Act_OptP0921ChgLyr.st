
ACTION Act_OptP0921ChgLyr: 
	
	IF tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bRtCompl = TRUE THEN
		tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bRtCompl := FALSE;

		IF tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat));	
		ELSE
			fUIInRtStatHide(ADR(tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat));
		END_IF
	END_IF

END_ACTION
