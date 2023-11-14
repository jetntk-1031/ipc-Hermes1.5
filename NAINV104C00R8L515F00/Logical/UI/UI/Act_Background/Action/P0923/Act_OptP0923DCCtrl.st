
ACTION Act_OptP0923DCCtrl: 

	IF tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue = TRUE THEN
	
		IF p_bStopperTwoCtrlOut = FALSE THEN
			
			IF tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl = TRUE THEN
				tyP0923Stopper.tyDC.tyBtnRetract.bValue	:= TRUE;
				tyP0923Stopper.tyDC.tyBtnExtend.bValue	:= FALSE;
				
				eStopperAct	:= PneuActSetRet;
				
				IF p_eStopperStat = PneuActSetRet AND p_eStopperStatus = Done THEN
					eStopperAct	:= PneuActIdle;
					
					tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 0;
					tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl	:= FALSE;	
				END_IF	
					
			ELSIF tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl = TRUE THEN	
				tyP0923Stopper.tyDC.tyBtnExtend.bValue	:= TRUE;
				tyP0923Stopper.tyDC.tyBtnRetract.bValue	:= FALSE;
				
				eStopperAct	:= PneuActSetExt;
				
				IF p_eStopperStat = PneuActSetExt AND p_eStopperStatus = Done THEN
					eStopperAct	:= PneuActIdle;
					
					tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 1;
					tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl	:= FALSE;
				END_IF	
			END_IF	
					
		ELSE	
			
			IF (tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl = TRUE) OR (tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl = TRUE) THEN
				IF (tyP0923Stopper.tyDC.tyBtnRetract.bValue = TRUE) AND (tyP0923Stopper.tyDC.tyBtnExtend.bValue = TRUE) THEN
					eStopperAct	:= PneuActSetAll;
					
					IF p_eStopperStat = PneuActSetAll AND p_eStopperStatus = Done THEN
						eStopperAct	:= PneuActIdle;
						
						tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl	:= FALSE;
						tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl	:= FALSE;
					END_IF	
					
				ELSIF (tyP0923Stopper.tyDC.tyBtnRetract.bValue = TRUE) AND (tyP0923Stopper.tyDC.tyBtnExtend.bValue = FALSE) THEN	
					eStopperAct	:= PneuActSetRet;
					
					IF p_eStopperStat = PneuActSetRet AND p_eStopperStatus = Done THEN
						eStopperAct	:= PneuActIdle;
						
						tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 0;
						tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl	:= FALSE;
						tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl	:= FALSE;
					END_IF
					
				ELSIF (tyP0923Stopper.tyDC.tyBtnRetract.bValue = FALSE) AND (tyP0923Stopper.tyDC.tyBtnExtend.bValue = TRUE) THEN	
					eStopperAct	:= PneuActSetExt;
					
					IF p_eStopperStat = PneuActSetExt AND p_eStopperStatus = Done THEN
						eStopperAct	:= PneuActIdle;
						
						tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 1;
						tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl	:= FALSE;
						tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl	:= FALSE;
					END_IF
					
				ELSE	
					eStopperAct	:= PneuActRstAll;
					
					IF p_eStopperStat = PneuActRstAll AND p_eStopperStatus = Done THEN
						eStopperAct	:= PneuActIdle;
						
						tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl	:= FALSE;
						tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl	:= FALSE;	
					END_IF
					
				END_IF	
				
			END_IF	
			
		END_IF
		
		tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl	:= FALSE;
		tyP0923Stopper.tyFB.tyBtnExtend.bValue		:= FALSE;
		tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl	:= FALSE;
		tyP0923Stopper.tyFB.tyBtnRetract.bValue		:= FALSE;
		
		
		
	END_IF	
		
END_ACTION
