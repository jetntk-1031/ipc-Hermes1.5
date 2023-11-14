
ACTION Act_OptP0921FBCtrl: 
	
	IF tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue = FALSE THEN
		
		IF tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl = TRUE THEN
			tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl	:= FALSE;
			
			tyP0921ClampNoRS.tyFB.tyBtnRet.bValue		:= TRUE;
			tyP0921ClampNoRS.tyFB.tyBtnExt.bValue		:= FALSE;
			
		ELSIF tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl = TRUE THEN
			tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl	:= FALSE;
			
			tyP0921ClampNoRS.tyFB.tyBtnExt.bValue		:= TRUE;
			tyP0921ClampNoRS.tyFB.tyBtnRet.bValue		:= FALSE;
		END_IF
		
		IF tyP0921ClampNoRS.tyFB.tyBtnRet.bValue = TRUE THEN
			eClampAct	:= PneuActRet;
			
			IF p_eClampStat = PneuActRet AND p_eClampStatus = Done THEN
				eClampAct	:= PneuActIdle;
				
				tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 0;
				tyP0921ClampNoRS.tyFB.tyBtnRet.bValue	:= FALSE;
				
			ELSIF p_eClampStatus = Error THEN
				
				tyP0921ClampNoRS.tyFB.tyBtnRet.bValue	:= FALSE;
			END_IF
			
		ELSIF tyP0921ClampNoRS.tyFB.tyBtnExt.bValue = TRUE THEN
			eClampAct	:= PneuActExt;
			
			IF p_eClampStat = PneuActExt AND p_eClampStatus = Done THEN
				eClampAct	:= PneuActIdle;
				
				tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 1;
				tyP0921ClampNoRS.tyFB.tyBtnExt.bValue := FALSE;
				
			ELSIF p_eClampStatus = Error THEN
				
				tyP0921ClampNoRS.tyFB.tyBtnExt.bValue := FALSE;
			END_IF
		END_IF
		
		//Update Direct Control Status
		
		tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnRet.bValue		:= p_bClampRetCtrl;
		tyP0921ClampNoRS.tyDC.tyBtnExt.bValue		:= p_bClampExtCtrl;
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.uiMaskRtStat));
	
		END_IF
		
	END_IF
	
END_ACTION
