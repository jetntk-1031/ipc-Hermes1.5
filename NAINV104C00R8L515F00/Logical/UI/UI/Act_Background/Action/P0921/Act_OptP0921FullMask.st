
ACTION Act_OptP0921FullMask: 
	
	IF eCurrPage = UIP0921ClampNoRS THEN 
	
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0921ClampNoRS.tyFullMaskEStop);
		
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0921ClampNoRS.tyFullMaskCWSig);
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0921ClampNoRS.tyFullMaskSafetyRly);
					
		ELSE
			p_tyC0002FullMask ACCESS ADR(tyP0921ClampNoRS.tyFullMaskHide);
			
		END_IF
		
	END_IF	
	
END_ACTION
