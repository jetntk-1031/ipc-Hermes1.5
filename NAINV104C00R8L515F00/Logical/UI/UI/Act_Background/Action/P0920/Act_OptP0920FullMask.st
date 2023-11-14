
ACTION Act_OptP0920FullMask: 
	
	IF eCurrPage = UIP0920MtrNPneuCtrl THEN
		
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0920MtrNPneuCtrl.tyFullMaskEStop);
		
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0920MtrNPneuCtrl.tyFullMaskCWSig);
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0002FullMask ACCESS ADR(tyP0920MtrNPneuCtrl.tyFullMaskSafetyRly);
			
		ELSE
			p_tyC0002FullMask ACCESS ADR(tyP0920MtrNPneuCtrl.tyFullMaskHide);
			
		END_IF
	
	END_IF
		
END_ACTION
