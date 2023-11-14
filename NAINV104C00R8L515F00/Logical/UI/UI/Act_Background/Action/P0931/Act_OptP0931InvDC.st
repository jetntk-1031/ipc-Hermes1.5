
ACTION Act_OptP0931InvDC:
	
	IF tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl = TRUE THEN	
		
		IF tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue = TRUE THEN
			eInvertAct	:= MotorBrkActSetMtrBrkRls;
		
			IF p_eInvertStat = MotorBrkActSetMtrBrkRls AND p_eInvertStatus = Done THEN
				eInvertAct	:= MotorBrkActIdle;
			
				tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl	:= FALSE;
				
			END_IF			
			
		ELSE
			eInvertAct:= MotorBrkActRstMtrBrkRls;
			
			IF p_eInvertStat = MotorBrkActRstMtrBrkRls AND p_eInvertStatus = Done THEN
				eInvertAct	:= MotorBrkActIdle;
			
				tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl	:= FALSE;
					
			END_IF
		
			
		END_IF
		
	END_IF
	
	//Turn Clockwise		
	IF EDGEPOS(tyP0931ConvInv.tyInvDC.tyBtnCW.bValue = TRUE) THEN
		eInvertAct	:= MotorBrkActSetMtrSigOnOrCW;
		
	ELSIF tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl = TRUE THEN
		eInvertAct	:= MotorBrkActRstMtrSigOnOrCW;
		
		IF p_eInvertStat = MotorBrkActRstMtrSigOnOrCW AND p_eInvertStatus = Done THEN
			eInvertAct	:= MotorBrkActIdle;
			
			tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl	:= FALSE;
		END_IF	
	END_IF
	
	IF p_eInvertStat = MotorBrkActSetMtrSigOnOrCW AND p_eInvertStatus = Done THEN
		eInvertAct	:= MotorBrkActIdle;
	END_IF
	
	
	
	//Turn Counter-clockwise		
	IF EDGEPOS(tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue = TRUE) THEN
		eInvertAct	:= MotorBrkActSetMtrDirOrCCW;
		
	ELSIF tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl = TRUE THEN
		eInvertAct	:= MotorBrkActRstMtrDirOrCCW;
		
		IF p_eInvertStat = MotorBrkActRstMtrDirOrCCW AND p_eInvertStatus = Done THEN
			eInvertAct	:= MotorBrkActIdle;
			
			tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl	:= FALSE;
		END_IF	
	END_IF
	
	IF p_eInvertStat = MotorBrkActSetMtrDirOrCCW AND p_eInvertStatus = Done THEN
		eInvertAct	:= MotorBrkActIdle;
	END_IF	
	
	//Mask and Unmask condition
	
	IF tyP0931ConvInv.tyInvDC.tyBtnCW.bValue THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat));
	END_IF
	
	IF tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat));
	END_IF
	
	//Mask CW and CCW when Brake is On
	IF (tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue=FALSE) THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat));
	END_IF
	
	
END_ACTION
