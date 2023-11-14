
ACTION Act_OptP0924Clamp3FB: 

	IF tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue = FALSE THEN
		
		IF tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl = TRUE THEN
			tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
				
			tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue	:= TRUE;
			tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue	:= FALSE;
				
		ELSIF tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl = TRUE THEN
			tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
			
			tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue	:= TRUE;
			tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue	:= FALSE;
		END_IF
			
		IF tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue = TRUE THEN
			eClamp3Act	:= PneuActExt;
				
			IF p_eClamp3Stat = PneuActExt AND p_eClamp3Status = Done THEN
				eClamp3Act	:= PneuActIdle;
					
				tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue	:= FALSE;
				
			ELSIF p_eClamp3Status = Error THEN
				tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue	:= FALSE;
			END_IF	
					
		ELSIF tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue = TRUE THEN
			eClamp3Act	:= PneuActRet;
				
			IF p_eClamp3Stat = PneuActRet AND p_eClamp3Status = Done THEN
				eClamp3Act	:= PneuActIdle;
					
				tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue := FALSE; 
			ELSIF p_eClamp3Status = Error THEN	
				tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue := FALSE; 
			END_IF	
		END_IF
		
		//Update Direct Control Status
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl	:= FALSE;	
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue	:= p_bClamp3ExtCtrl;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue	:= p_bClamp3RetCtrl;	
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.uiMaskRtStat));	
		END_IF
		
	END_IF
		
	
END_ACTION
