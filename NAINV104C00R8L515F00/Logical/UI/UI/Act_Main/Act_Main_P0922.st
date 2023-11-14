
ACTION Act_Main_P0922:
	
	//Display
	tyP0922InletNOutletShutter.tyInletShutterCom.tyLyr.uiRtStat.0	:= NOT(p_tyNtParamCurr.bProjInletShutPrep);
	tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat.0	:= TRUE;
	tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat.0	:= NOT(p_tyNtParamCurr.bProjInletShutPrep);
	
	tyP0922InletNOutletShutter.tyOutletShutterCom.tyLyr.uiRtStat.0	:= NOT(p_tyNtParamCurr.bProjOutletShutPrep);
	tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat.0	:= TRUE;
	tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat.0	:= NOT(p_tyNtParamCurr.bProjOutletShutPrep);
	tyP0922InletNOutletShutter.tyOutletShutterDis.tyLyr.uiRtStat.0	:= TRUE;
	
END_ACTION
