

ACTION Act_OptP0924Clamp2FB: 

	IF tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue = FALSE THEN
		
		IF tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl = TRUE THEN
			tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
				
			tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue	:= TRUE;
			tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue	:= FALSE;
				
		ELSIF tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl = TRUE THEN
			tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
			
			tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue	:= TRUE;
			tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue	:= FALSE;
		END_IF
			
		IF tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue = TRUE THEN
			eClamp2Act	:= PneuActExt;
				
			IF p_eClamp2Stat = PneuActExt AND p_eClamp2Status = Done THEN
				eClamp2Act	:= PneuActIdle;
					
				tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue	:= FALSE;
				
			ELSIF p_eClamp2Status = Error THEN
				tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue	:= FALSE;
			END_IF	
					
		ELSIF tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue = TRUE THEN
			eClamp2Act	:= PneuActRet;
				
			IF p_eClamp2Stat = PneuActRet AND p_eClamp2Status = Done THEN
				eClamp2Act	:= PneuActIdle;
					
				tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue := FALSE; 
			ELSIF p_eClamp2Status = Error THEN	
				tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue := FALSE; 
			END_IF	
		END_IF
		
		//Update Direct Control Status
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl	:= FALSE;	
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue	:= p_bClamp2ExtCtrl;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue	:= p_bClamp2RetCtrl;
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.uiMaskRtStat));	
		END_IF
		
	END_IF
		
	
END_ACTION
