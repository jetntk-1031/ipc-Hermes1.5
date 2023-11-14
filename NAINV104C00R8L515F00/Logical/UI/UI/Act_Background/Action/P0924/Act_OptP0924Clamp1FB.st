
ACTION Act_OptP0924Clamp1FB: 

	IF tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue = FALSE THEN
		
		IF tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl = TRUE THEN
			tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
				
			tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= TRUE;
			tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue	:= FALSE;
				
		ELSIF tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl = TRUE THEN
			tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
			
			tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue	:= TRUE;
			tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= FALSE;
		END_IF
			
		IF tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue = TRUE THEN
			eClamp1Act	:= PneuActExt;
				
			IF p_eClamp1Stat = PneuActExt AND p_eClamp1Status = Done THEN
				eClamp1Act	:= PneuActIdle;
					
				tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= FALSE;
				
			ELSIF p_eClamp1Status = Error THEN
				tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= FALSE;
			END_IF	
					
		ELSIF tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue = TRUE THEN
			eClamp1Act	:= PneuActRet;
				
			IF p_eClamp1Stat = PneuActRet AND p_eClamp1Status = Done THEN
				eClamp1Act	:= PneuActIdle;
					
				tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue := FALSE; 
			ELSIF p_eClamp1Status = Error THEN	
				tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue := FALSE; 
			END_IF	
		END_IF
		
		//Update Direct Control Status
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;	
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue		:= p_bClamp1ExtCtrl;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue		:= p_bClamp1RetCtrl;	
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.uiMaskRtStat));	
		END_IF
		
	END_IF
		
	
END_ACTION
