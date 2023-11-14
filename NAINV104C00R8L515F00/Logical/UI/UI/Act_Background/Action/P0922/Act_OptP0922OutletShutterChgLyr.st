
ACTION Act_OptP0922OutletShutterChgLyr:
	
	IF	tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bRtCompl THEN
			tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bRtCompl := FALSE;
		
		IF tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue = TRUE THEN
			fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat));
		ELSE
			fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat));
		END_IF	
		
	END_IF
	

END_ACTION
