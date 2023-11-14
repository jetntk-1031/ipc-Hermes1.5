(** 2018-12-21 **)
ACTION Act_Main_P0900:
	
	//Display
	tyP0900GenIn.tyGenIn.tyBtnCoverSW.uiRtStat.0		:= NOT(p_tyNtParamCurr.tyDISettings.diCoverSWSig > 0);

	tyP0900GenIn.tyGenIn.tyBtnThermalPrtSig.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDISettings.diThermalPrtSig > 0);
	tyP0900GenIn.tyGenIn.tyBtnPressureSW.uiRtStat.0		:= NOT(p_tyNtParamCurr.tyDISettings.diPressureSW > 0);
	tyP0900GenIn.tyGenIn.tySigLyr.uiRtStat.0			:= NOT(p_tyNtParamCurr.tyDISettings.diThermalPrtSig > 0 OR p_tyNtParamCurr.tyDISettings.diPressureSW > 0);
		
	tyP0900GenIn.tyGenIn.tyBtnUSWidthChkSen.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDISettings.diUSWidthChkSen > 0);
	tyP0900GenIn.tyGenIn.tyBtnDSWidthChkSen.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDISettings.diDSWidthChkSen > 0);
	tyP0900GenIn.tyGenIn.tyWidthChkLyr.uiRtStat.0		:= NOT(p_tyNtParamCurr.tyDISettings.diUSWidthChkSen > 0 OR p_tyNtParamCurr.tyDISettings.diDSWidthChkSen > 0);

	// ADD
	tyP0900GenIn.tyGenIn.tyBtnSafetySigFromDS.uiRtStat := NOT(p_tyNtParamCurr.tyDISettings.diSafetySigFromDS >0 );
	tyP0900GenIn.tyGenIn.tyBtnSafetySigFromUS.uiRtStat := NOT(p_tyNtParamCurr.tyDISettings.diSafetySigFromUS >0 );
	tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromDS.uiRtStat := NOT(p_tyNtParamCurr.tyDISettings.diUnlockCoverSigFromDS >0);
	tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromUS.uiRtStat := NOT(p_tyNtParamCurr.tyDISettings.diUnlockCoverSigFromUS >0);
	tyP0900GenIn.tyGenIn.tyBtnUnlkCovPB.uiRtStat  := NOT(p_tyNtParamCurr.tyDISettings.diCoverUnlockPB1 >0);
	tyP0900GenIn.tyGenIn.tyBtnTopCovSwSIg.uiRtStat := NOT(p_tyNtParamCurr.tyDISettings.diCoverSWSig2 >0);
	tyP0900GenIn.tyGenIn.tyMachSafetyLyr.uiRtStat := NOT(p_tyNtParamCurr.tyDISettings.diSafetySigFromDS >0 OR p_tyNtParamCurr.tyDISettings.diSafetySigFromUS >0  );
END_ACTION
