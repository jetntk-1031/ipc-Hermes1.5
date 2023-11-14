
ACTION Act_OptP0923FBCtrl: 

	IF tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue = FALSE THEN
	
		//Control
		IF tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl = TRUE THEN
			tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl	:= FALSE;
				
			tyP0923Stopper.tyFB.tyBtnRetract.bValue		:= TRUE;
			tyP0923Stopper.tyFB.tyBtnExtend.bValue		:= FALSE;
				
		ELSIF tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl = TRUE THEN
			tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl	:= FALSE;
			
			tyP0923Stopper.tyFB.tyBtnExtend.bValue		:= TRUE;
			tyP0923Stopper.tyFB.tyBtnRetract.bValue		:= FALSE;
			
		END_IF
			
		//Action
		IF tyP0923Stopper.tyFB.tyBtnRetract.bValue = TRUE THEN
			eStopperAct	:= PneuActRet;
			
			IF p_eStopperStat = PneuActRet AND p_eStopperStatus = Done THEN
				eStopperAct	:= PneuActIdle;
				
				tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 0;	
				tyP0923Stopper.tyFB.tyBtnRetract.bValue	:= FALSE;
				
			ELSIF p_eStopperStatus = Error THEN
				tyP0923Stopper.tyFB.tyBtnRetract.bValue	:= FALSE;
				
			END_IF	
					
		ELSIF tyP0923Stopper.tyFB.tyBtnExtend.bValue = TRUE THEN
			eStopperAct	:= PneuActExt;
				
			IF p_eStopperStat = PneuActExt AND p_eStopperStatus = Done THEN
				eStopperAct	:= PneuActIdle;
				
				tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 1;
				tyP0923Stopper.tyFB.tyBtnExtend.bValue := FALSE; 
				
			ELSIF p_eStopperStatus = Error THEN	
				tyP0923Stopper.tyFB.tyBtnExtend.bValue := FALSE; 
				
			END_IF	
		END_IF
		
		//Update Status
		tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl	:= FALSE;
		tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl	:= FALSE;
		tyP0923Stopper.tyDC.tyBtnRetract.bValue		:= p_bStopperRetCtrl;
		tyP0923Stopper.tyDC.tyBtnExtend.bValue		:= p_bStopperExtCtrl;	
		
		IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN	
			fUIInRtStatOff(ADR(tyP0923Stopper.tyCom.tyBtnDCCtrl.uiMaskRtStat));
		ELSE		
			fUIInRtStatHide(ADR(tyP0923Stopper.tyCom.tyBtnDCCtrl.uiMaskRtStat));	
		END_IF
		
	END_IF	
		
END_ACTION
