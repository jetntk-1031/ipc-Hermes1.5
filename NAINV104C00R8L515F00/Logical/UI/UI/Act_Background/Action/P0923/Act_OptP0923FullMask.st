
ACTION Act_OptP0923FullMask: 
	
	IF eCurrPage = UIP0923Stopper THEN 
	
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0923Stopper.tyFullMaskEStop);
		
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0923Stopper.tyFullMaskCWSig);
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0923Stopper.tyFullMaskSafetyRly);
					
		ELSE
			p_tyC0002FullMask ACCESS ADR(tyP0923Stopper.tyFullMaskHide);
			
		END_IF
		
	END_IF	
	
END_ACTION
