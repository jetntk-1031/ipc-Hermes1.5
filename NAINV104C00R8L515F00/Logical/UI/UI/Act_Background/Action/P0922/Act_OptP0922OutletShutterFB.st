
ACTION Act_OptP0922OutletShutterFB: 

	IF tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue = FALSE THEN
		// FB Control
		IF tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl = TRUE THEN
			tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl	:= FALSE;
				
			tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue	:= TRUE;
			tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue	:= FALSE;
				
		ELSIF tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl = TRUE THEN
			tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl	:= FALSE;
			
			tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue	:= TRUE;
			tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue	:= FALSE;
		END_IF
			
		IF tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue = TRUE THEN
			eOutShutterAct	:= PneuActRet;
				
			IF p_eOutShutterStat = PneuActRet AND p_eOutShutterStatus = Done THEN
				eOutShutterAct	:= PneuActIdle;
					
				tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue	:= FALSE;
			ELSIF p_eOutShutterStatus = Error THEN
				tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue	:= FALSE;
			END_IF	
					
		ELSIF tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue = TRUE THEN
			eOutShutterAct	:= PneuActExt;
				
			IF p_eOutShutterStat = PneuActExt AND p_eOutShutterStatus = Done THEN
				eOutShutterAct	:= PneuActIdle;
					
				tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue := FALSE; 
			ELSIF p_eOutShutterStatus = Error THEN	
				tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue := FALSE; 
			END_IF	
		END_IF
		
		//UpdateStatus
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue		:= p_bOutShutterExtCtrl;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue		:= p_bOutShutterRetCtrl;
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.uiMaskRtStat));	
		END_IF
	END_IF
			
END_ACTION
