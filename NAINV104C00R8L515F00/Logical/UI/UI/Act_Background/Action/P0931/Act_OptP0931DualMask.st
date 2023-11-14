
ACTION Act_OptP0931DualMask: 
	
	IF eCurrPage = UIP0931ConvInv THEN 
	
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskEStop);
		
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskCWSig);
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskSafetyRly);
			
		ELSIF (p_tyNtParamCurr.bProjInletShutPrep AND p_tyMcParamCurr.bInShutterDis=FALSE AND p_tyDI.bInShutterCloseRS=FALSE) THEN
			IF  p_eOpsInvertCurrPos = InvertPosInvalid THEN
				p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskInletNInvalid);
			ELSE
				p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskInletShutterInterrupt);
			END_IF			
		ELSIF (p_tyNtParamCurr.bProjOutletShutPrep AND p_tyMcParamCurr.bOutShutterDis=FALSE AND p_tyDI.bOutShutterCloseRS=FALSE) THEN	
			IF  p_eOpsInvertCurrPos = InvertPosInvalid THEN
				p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskOutletNInvalid);
			ELSE
				p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskOutletShutterInterrupt);
			END_IF
		
		ELSIF (p_tyDI.bInvertHomeSen AND p_tyDI.bConvLftSen) OR (p_tyDI.bInvertRemoteSen AND p_tyDI.bConvRgtSen) THEN
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskInvertInterrupt);
		
		ELSIF (p_tyDI.bInvertHomeSen AND p_tyDI.bConvRgtSen AND p_bStopperExtended = FALSE) 
			OR (p_tyDI.bInvertRemoteSen AND p_tyDI.bConvLftSen AND p_bStopperExtended = FALSE) 
			THEN
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskStopperInterruptInv);
			
		ELSIF  p_eOpsInvertCurrPos = InvertPosInvalid THEN
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskInvalidPos);

		ELSE
			p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskHide);
			
		END_IF
		
	END_IF	
	
END_ACTION
