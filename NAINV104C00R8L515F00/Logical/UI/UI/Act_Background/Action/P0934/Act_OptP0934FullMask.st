
ACTION Act_OptP0934FullMask: 
	
	IF eCurrPage = UIP0934AW THEN
	
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskEStop);
		
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskCWSig);
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskSafetyRly);
			
		ELSIF p_tyDI.bConvLftSen = TRUE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskLftSenInterrupt);
			
		ELSIF p_tyDI.bConvRgtSen = TRUE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskRgtSenInterrupt);
			
		ELSIF (p_tyNtParamCurr.bProjInletShutPrep AND p_tyMcParamCurr.bInShutterDis=FALSE AND p_tyDI.bInShutterCloseRS=FALSE) THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskInletShutterInterrupt);
			
		ELSIF (p_tyNtParamCurr.bProjOutletShutPrep AND p_tyMcParamCurr.bOutShutterDis=FALSE AND p_tyDI.bOutShutterCloseRS=FALSE) THEN	
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskOutletShutterInterrupt);
			
		ELSIF p_tyDI.bInvertHomeSen = FALSE AND p_tyDI.bInvertRemoteSen = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskHomeSenInterrupt);
	
		ELSE
			p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskHide);
			
		END_IF
		
	END_IF	
	
END_ACTION
