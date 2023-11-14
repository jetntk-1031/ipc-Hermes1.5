
ACTION Act_OptP0200VSMEMA:
	
	// Virtual SMEMA - Upstream Enable/Disable
	IF p_tyNtParamCurr.bUIConvDirRL = FALSE THEN
		IF tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue = TRUE THEN		
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat));
				
				bVSMEMAUSEn	:= TRUE;
			ELSE
				tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue		:= FALSE;
				tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue	:= FALSE;
				tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue		:= FALSE;
				
				bVSMEMAUSEn	:= FALSE;
			
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat));
			END_IF
		END_IF
	ELSE
		
		IF tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bValue = TRUE THEN		
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
				
				bVSMEMAUSEn	:= TRUE;
			ELSE
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue		:= FALSE;
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue	:= FALSE;
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue	:= FALSE;
				
				bVSMEMAUSEn	:= FALSE;
			
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat));
			END_IF
		END_IF
		
	END_IF
	
	// Virtual SMEMA - Downstream Enable/Disable
	IF p_tyNtParamCurr.bUIConvDirRL = FALSE THEN
		
		IF tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue = TRUE THEN		
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat));
				
				bVSMEMADSEn	:= TRUE;
			ELSE
				tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bValue		:= FALSE;
		
				bVSMEMADSEn	:= FALSE;
			
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat));
			END_IF
		END_IF
	ELSE
		
		IF tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bValue = TRUE THEN		
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
				
				bVSMEMADSEn	:= TRUE;
			ELSE
				tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bValue		:= FALSE;
		
				bVSMEMADSEn	:= FALSE;
			
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat));
			END_IF
		END_IF
		
		
	END_IF
	
	// Virtual SMEMA - Upstream Control
	IF p_tyNtParamCurr.bUIConvDirRL =FALSE THEN 
		IF tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue = TRUE THEN
				tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue		:= TRUE;
				tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue	:= TRUE;
			ELSE
				tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue		:= FALSE;
				tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue	:= FALSE;
			END_IF	
		
		ELSIF tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue = TRUE THEN
				IF tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue =  TRUE THEN
					tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue	:= TRUE;	
				END_IF	
			ELSE	
				tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue	:= FALSE;	
			END_IF
		
		ELSIF tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue = TRUE THEN
				IF tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue =  TRUE THEN
					tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue	:= TRUE;	
				END_IF	
			ELSE	
				tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.bValue	:= FALSE;	
			END_IF	
		
		END_IF	
	ELSE
		
		IF tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue = TRUE THEN
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue		:= TRUE;
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue	:= TRUE;
			ELSE
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue		:= FALSE;
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue	:= FALSE;
			END_IF	
		
		ELSIF tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue = TRUE THEN
				IF tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue =  TRUE THEN
					tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue	:= TRUE;	
				END_IF	
			ELSE	
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue	:= FALSE;	
			END_IF
		
		ELSIF tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bRtCompl	:= FALSE;
		
			IF tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue = TRUE THEN
				IF tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue =  TRUE THEN
					tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue	:= TRUE;	
				END_IF	
			ELSE	
				tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.bValue	:= FALSE;	
			END_IF	
		
		END_IF	
		
	END_IF
	
	//Virtual SMEMA - Downtream Control
	IF p_tyNtParamCurr.bUIConvDirRL =FALSE THEN 
		
		IF tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bRtCompl	:= FALSE;
		END_IF	
	ELSE
		
		IF tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bRtCompl = TRUE THEN
			tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bRtCompl	:= FALSE;
		END_IF	
		
	END_IF
	
	//Virtual SMEMA - Data
	IF p_tyNtParamCurr.bUIConvDirRL =FALSE THEN 
		
		bVSMEMAUBA		:= tyP0200OpsGen.tyUSVSMEMA.tyBtnUBA.bValue;
		bVSMEMAUBAStat	:= tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.bValue;
		bVSMEMADSB		:= tyP0200OpsGen.tyDSVSMEMA.tyBtnDSB.bValue;
		
	ELSE
		
		bVSMEMAUBA		:= tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBA.bValue;
		bVSMEMAUBAStat	:= tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.bValue;
		bVSMEMADSB		:= tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSB.bValue;
		
	END_IF
	
	// Virtual SMEMA - Upstream 2 Enable/Disable (InvertOnce & InvertTwice_2023_0032B01)
	IF tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bRtCompl = TRUE THEN
		tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bRtCompl	:= FALSE;
	
		IF tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue = TRUE THEN		
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat));
			bVSMEMAUS2En	:= TRUE;
		ELSE
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue		:= FALSE;
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue	:= FALSE;
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue		:= FALSE;
			
			bVSMEMAUS2En	:= FALSE;
		
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat));
			
		END_IF
	END_IF
	
	// Virtual SMEMA - Upstream2 Control (InvertOnce & InvertTwice_2023_0032B01)
	IF tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bRtCompl = TRUE THEN
		tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bRtCompl	:= FALSE;
	
		IF tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue = TRUE THEN
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue		:= TRUE;
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue	:= TRUE;
		ELSE
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue		:= FALSE;
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue	:= FALSE;
		END_IF	
	
	ELSIF tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bRtCompl = TRUE THEN
		tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bRtCompl	:= FALSE;
	
		IF tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue = TRUE THEN
			IF tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue =  TRUE THEN
				tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue	:= TRUE;	
			END_IF	
		ELSE	
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue	:= FALSE;	
		END_IF
	
	ELSIF tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bRtCompl = TRUE THEN
		tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bRtCompl	:= FALSE;
	
		IF tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue = TRUE THEN
			IF tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue =  TRUE THEN
				tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue	:= TRUE;	
			END_IF	
		ELSE	
			tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.bValue	:= FALSE;	
		END_IF	
	
	END_IF	
	
	
	//Virtual SMEMA Upstream2 - Data
		
		bVSMEMAUBA2		:= tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBA.bValue;
		bVSMEMAUBAStat2	:= tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.bValue;

	
END_ACTION
