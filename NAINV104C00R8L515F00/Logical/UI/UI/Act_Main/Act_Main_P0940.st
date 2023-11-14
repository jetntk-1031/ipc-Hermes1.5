
ACTION Act_Main_P0940:
	
	//Display
	tyP0940CommCtrl.tyUSSMEMA2.tyLyr.uiRtStat.0	:= NOT(p_tyNtParamCurr.bProjInvertOncePrep  OR p_tyNtParamCurr.bProjInvertTwicePrep);
	
	tyP0940CommCtrl.tyUSSMEMA.tyBtnUBA.uiRtStat.0		:= p_tyNtParamCurr.tyDISettings.diUBA = 0;
	tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.uiRtStat.0	:= p_tyNtParamCurr.tyDISettings.diUBAStat = 0;
	tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.uiRtStat.0		:= p_tyNtParamCurr.tyDOSettings.diUSB = 0;
		
	tyP0940CommCtrl.tyDSSMEMA.tyBtnDSB.uiRtStat.0		:= p_tyNtParamCurr.tyDISettings.diDSB = 0;
	tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.uiRtStat.0		:= p_tyNtParamCurr.tyDOSettings.diDBA = 0;
	tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.uiRtStat.0	:= p_tyNtParamCurr.tyDOSettings.diDBAStat = 0;
		
	tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBA.uiRtStat.0		:= p_tyNtParamCurr.tyDISettings.diUBA2 = 0;
	tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.uiRtStat.0	:= p_tyNtParamCurr.tyDISettings.diUBAStat2 = 0;
	tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.uiRtStat.0		:= p_tyNtParamCurr.tyDOSettings.diUSB2 = 0;
	
END_ACTION
