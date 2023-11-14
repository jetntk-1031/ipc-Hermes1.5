
ACTION Act_OptP0922InletShutterChgLyr:
	
	IF tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bRtCompl THEN
		tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bRtCompl := FALSE;
		
		IF tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat));
		ELSE
			fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat));
		END_IF	
		
	END_IF
		

END_ACTION
