
ACTION Act_OptP0922InletShutterFB: 

	IF tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue = FALSE THEN
		
		IF tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl = TRUE THEN
			tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl	:= FALSE;
				
			tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue	:= TRUE;
			tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue	:= FALSE;
				
		ELSIF tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl = TRUE THEN
			tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl	:= FALSE;
			
			tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue	:= TRUE;
			tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue	:= FALSE;
		END_IF
			
		IF tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue = TRUE THEN
			eInShutterAct	:= PneuActRet;
				
			IF p_eInShutterStat = PneuActRet AND p_eInShutterStatus = Done THEN
				eInShutterAct	:= PneuActIdle;
					
				tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue	:= FALSE;
			ELSIF p_eInShutterStatus = Error THEN
				tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue	:= FALSE;
			END_IF	
					
		ELSIF tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue = TRUE THEN
			eInShutterAct	:= PneuActExt;
				
			IF p_eInShutterStat = PneuActExt AND p_eInShutterStatus = Done THEN
				eInShutterAct	:= PneuActIdle;
					
				tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue := FALSE; 
			ELSIF p_eInShutterStatus = Error THEN	
				tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue := FALSE; 
			END_IF	
		END_IF
		
		//Update Direct Control Status
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl	:= FALSE;	
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue	:= p_bInShutterRetCtrl;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue	:= p_bInShutterExtCtrl;	
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.uiMaskRtStat));
	
		END_IF
		
	END_IF
		
	
END_ACTION
