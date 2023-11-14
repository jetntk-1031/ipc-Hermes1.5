(** 2018-12-21 **)
ACTION Act_Main_P0910:
	
	//Display
	tyP0910GenOut.tyGenOut.tyBtnBuzzer.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDOSettings.diBuz > 0);
	
	tyP0910GenOut.tyGenOut.tyBtnTLGreen.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDOSettings.diTLGreen > 0);
	tyP0910GenOut.tyGenOut.tyBtnTLAmber.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDOSettings.diTLAmber > 0);
	tyP0910GenOut.tyGenOut.tyBtnTLRed.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDOSettings.diTLRed > 0);
	tyP0910GenOut.tyGenOut.tyBtnTLWhite.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDOSettings.diTLWhite > 0);
	tyP0910GenOut.tyGenOut.tyBtnTLBlue.uiRtStat.0	:= NOT(p_tyNtParamCurr.tyDOSettings.diTLBlue > 0);
	
	
	tyP0910GenOut.tyGenOut.tyTLLyr.uiRtStat.0		:= NOT(p_tyNtParamCurr.tyDOSettings.diTLGreen > 0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber > 0 OR p_tyNtParamCurr.tyDOSettings.diTLRed > 0 OR p_tyNtParamCurr.tyDOSettings.diTLWhite > 0 OR p_tyNtParamCurr.tyDOSettings.diTLBlue > 0);
	tyP0910GenOut.tyGenOut.tyBtnTLRed1.uiRtStat.0	:= TRUE;
	
	//ADD 
	tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.uiRtStat.0		:= NOT(p_tyNtParamCurr.tyDOSettings.diCoverPBLED1 > 0);
	tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.uiRtStat.0 	:= NOT(p_tyNtParamCurr.tyDOSettings.diTopCvrUnlckToDS > 0);
	tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.uiRtStat.0:= NOT(p_tyNtParamCurr.tyDOSettings.diBypassTopCover1 > 0);
	tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.uiRtStat.0 := NOT(p_tyNtParamCurr.tyDOSettings.diMachineSafetySigToDS > 0);
	tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.uiRtStat.0 := NOT(p_tyNtParamCurr.tyDOSettings.diSafetyTopCoverSWCoil1 > 0);

	tyP0910GenOut.tyGenOut.tyUlkCovLyr.uiRtStat.0 := NOT(p_tyNtParamCurr.tyDOSettings.diCoverPBLED1 > 0 OR p_tyNtParamCurr.tyDOSettings.diTopCvrUnlckToDS > 0 OR p_tyNtParamCurr.tyDOSettings.diBypassTopCover1 > 0 );
	tyP0910GenOut.tyGenOut.tyMacSafetyLyr.uiRtStat.0:= NOT(p_tyNtParamCurr.tyDOSettings.diMachineSafetySigToDS > 0 OR p_tyNtParamCurr.tyDOSettings.diSafetyTopCoverSWCoil1 > 0);
END_ACTION
