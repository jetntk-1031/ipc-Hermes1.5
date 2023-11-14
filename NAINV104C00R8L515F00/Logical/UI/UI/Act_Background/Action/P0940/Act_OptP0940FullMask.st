
ACTION Act_OptP0940FullMask: 
	
	IF eCurrPage = UIP0940CommCtrl THEN
	
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0940CommCtrl.tyFullMaskEStop);
		
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0940CommCtrl.tyFullMaskCWSig);
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0940CommCtrl.tyFullMaskSafetyRly);
			
		ELSE
			p_tyC0002FullMask ACCESS ADR(tyP0940CommCtrl.tyFullMaskHide);
			
		END_IF
		
	END_IF	
	
END_ACTION
