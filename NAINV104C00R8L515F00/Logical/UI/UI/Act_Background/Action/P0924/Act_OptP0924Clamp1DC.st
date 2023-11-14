
ACTION Act_OptP0924Clamp1DC: 
	
	IF tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue = TRUE THEN
		IF p_bClamp1TwoCtrlOut = FALSE THEN
			IF tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl = TRUE THEN
				tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue	:= TRUE;
				tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue	:= FALSE;
				
				eClamp1Act	:= PneuActSetExt;
				
				IF p_eClamp1Stat = PneuActSetExt AND p_eClamp1Status = Done THEN
					eClamp1Act	:= PneuActIdle;
					
					tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
				END_IF	
					
			ELSIF tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl = TRUE THEN	
				tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue	:= TRUE;
				tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue	:= FALSE;
				
				eClamp1Act	:= PneuActSetRet;
				
				IF p_eClamp1Stat = PneuActSetRet AND p_eClamp1Status = Done THEN
					eClamp1Act	:= PneuActIdle;
					
					tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
				END_IF	
			END_IF	
					
		ELSE
			IF (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl = TRUE) OR (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl = TRUE) THEN
				IF (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue = TRUE) AND (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue = TRUE) THEN
					eClamp1Act	:= PneuActSetAll;
					
					IF p_eClamp1Stat = PneuActSetAll AND p_eClamp1Status = Done THEN
						eClamp1Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF	
					
				ELSIF (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue = TRUE) AND (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue = FALSE) THEN	
					eClamp1Act	:= PneuActSetExt;
					
					IF p_eClamp1Stat = PneuActSetExt AND p_eClamp1Status = Done THEN
						eClamp1Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				ELSIF (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue = FALSE) AND (tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue = TRUE) THEN	
					eClamp1Act	:= PneuActSetRet;
					
					IF p_eClamp1Stat = PneuActSetRet AND p_eClamp1Status = Done THEN
						eClamp1Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				ELSE	
					eClamp1Act	:= PneuActRstAll;
					
					IF p_eClamp1Stat = PneuActRstAll AND p_eClamp1Status = Done THEN
						eClamp1Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				END_IF	
			END_IF	
		END_IF
		
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= FALSE;
		
	END_IF
	

END_ACTION
