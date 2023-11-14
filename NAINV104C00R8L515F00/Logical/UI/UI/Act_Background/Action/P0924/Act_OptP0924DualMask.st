
ACTION Act_OptP0924DualMask: 
	
	IF eCurrPage = UIP0924ClampWithRS THEN
		
		IF p_tyDI.bEStopSig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0924ClampWithRS.tyDualMaskEStop);
			
			IF 	tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat.0=FALSE THEN			
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= FALSE;
			ELSE
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= TRUE;
			END_IF
			
		ELSIF p_tyDI.bCoverSWSig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0924ClampWithRS.tyDualMaskCWSig);
			
			IF 	tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat.0=FALSE THEN			
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= FALSE;
			ELSE
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= TRUE;
			END_IF
			
		ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
			p_tyC0003DualMask ACCESS ADR(tyP0924ClampWithRS.tyDualMaskSafetyRly);
			
			IF 	tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat.0=FALSE THEN			
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= FALSE;
			ELSE
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= TRUE;
			END_IF
			
		ELSIF p_eAWOpenStatus = Busy THEN
			p_tyC0003DualMask ACCESS ADR(tyP0924ClampWithRS.tyDualMaskAWMovInterrupt);
			
			IF 	tyP0924ClampWithRS.tyNaviLyr1.tyLyr.uiRtStat.0=FALSE THEN			
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= FALSE;
			ELSE
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnLeftMask.uiMaskRtStat.0	:= FALSE ;
				tyP0924ClampWithRS.tyDualMaskEStop.tyBtnRgtMask.uiMaskRtStat.0	:= TRUE;
			END_IF
			
		ELSE
			p_tyC0003DualMask ACCESS ADR(tyP0924ClampWithRS.tyDualMaskHide);
			
		END_IF
		
	END_IF
	
END_ACTION
