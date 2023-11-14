
ACTION Act_OptP0922DualMask: 
	
	IF eCurrPage = UIP0922Shutter THEN
		
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0922InletNOutletShutter.tyDualMaskEStop);
			
			tyP0922InletNOutletShutter.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjInletShutPrep;
			tyP0922InletNOutletShutter.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjOutletShutPrep;
			
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0922InletNOutletShutter.tyDualMaskCWSig);
			
			tyP0922InletNOutletShutter.tyDualMaskCWSig.tyBtnLeftMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjInletShutPrep;
			tyP0922InletNOutletShutter.tyDualMaskCWSig.tyBtnRgtMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjOutletShutPrep;
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0922InletNOutletShutter.tyDualMaskSafetyRly);
			
			tyP0922InletNOutletShutter.tyDualMaskSafetyRly.tyBtnLeftMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjInletShutPrep;
			tyP0922InletNOutletShutter.tyDualMaskSafetyRly.tyBtnRgtMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjOutletShutPrep;
			
			
		ELSIF p_eAWOpenStatus = Busy THEN
			p_tyC0003DualMask ACCESS ADR(tyP0922InletNOutletShutter.tyDualMaskAWMovInterrupt);
			
			tyP0922InletNOutletShutter.tyDualMaskAWMovInterrupt.tyBtnLeftMask.uiMaskRtStat.0	:= NOT p_tyNtParamCurr.bProjInletShutPrep;
			tyP0922InletNOutletShutter.tyDualMaskAWMovInterrupt.tyBtnRgtMask.uiMaskRtStat.0		:= NOT p_tyNtParamCurr.bProjOutletShutPrep;
			
			
		ELSE
			p_tyC0003DualMask ACCESS ADR(tyP0922InletNOutletShutter.tyDualMaskHide);
			
		END_IF
		
	END_IF
	
END_ACTION
