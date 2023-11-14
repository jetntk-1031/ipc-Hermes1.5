
ACTION Act_OptP0931InvFB:
	
	IF tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl = TRUE THEN	
		eInvertAct	:= MotorBrkActStop;
		
		IF p_eInvertStat = MotorBrkActStop AND p_eInvertStatus = Done THEN
			eInvertAct	:= MotorBrkActIdle;
				
			tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnCW.bValue		:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk		:= FALSE;
		
			tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue		:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk		:= FALSE;
			
			tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue 	:= FALSE;
		
			tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnStop.bValue	:= TRUE;
			tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk		:= TRUE;
			
		END_IF	
			
	ELSIF tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyInvFB.tyBtnCW.bValue		:= TRUE;
		tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk		:= TRUE;
		
		tyP0931ConvInv.tyInvFB.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk		:= FALSE;
		
		
					
		eInvertAct	:= MotorBrkActCW;
			
		IF p_eInvertStat = MotorBrkActCW AND p_eInvertStatus = Done THEN
			eInvertAct	:= MotorBrkActIdle;
				
			tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl	:= FALSE;
			
			tyP0931ConvInv.tyInvFB.tyBtnCW.bValue		:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk		:= FALSE;
			
			tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue 	:= FALSE;
				
			tyP0931ConvInv.tyInvFB.tyBtnStop.bValue	:= TRUE;
			tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk		:= TRUE;
				
		END_IF	
			
			
	ELSIF tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue		:= TRUE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk		:= TRUE;
		
		tyP0931ConvInv.tyInvFB.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk		:= FALSE;
		
	
					
		eInvertAct	:= MotorBrkActCCW;
			
		IF p_eInvertStat = MotorBrkActCCW AND p_eInvertStatus = Done THEN
			eInvertAct	:= MotorBrkActIdle;
				
			tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl	:= FALSE;
			
			tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue		:= FALSE;
			tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk		:= FALSE;
			
			tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue 	:= FALSE;
				
			tyP0931ConvInv.tyInvFB.tyBtnStop.bValue	:= TRUE;
			tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk		:= TRUE;
				
		END_IF	
		
	END_IF	
	
	//Mask
	tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat.0		:= NOT( p_eInvertStatus = Error OR tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl);
	tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat.0		:= NOT( p_eInvertStatus = Error OR tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl);
	
	IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN
		
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat));
		
		IF (p_eInvertStatus = Error) OR NOT p_tyDI.bSafetyRlySig THEN
			
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl = TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl =TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			
		ELSE
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			
		END_IF
		
	ELSE
		//Mask
		IF (p_eInvertStatus = Error) OR NOT p_tyDI.bSafetyRlySig THEN
			
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl = TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl =TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		ELSE
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		END_IF
		
		
	END_IF
	
	
END_ACTION
