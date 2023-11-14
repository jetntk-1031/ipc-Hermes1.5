

ACTION Act_OptP0924Clamp2DC: 
	
	IF tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue = TRUE THEN
		IF p_bClamp1TwoCtrlOut = FALSE THEN
			IF tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl = TRUE THEN
				tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue	:= TRUE;
				tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue	:= FALSE;
				
				eClamp2Act	:= PneuActSetExt;
				
				IF p_eClamp2Stat = PneuActSetExt AND p_eClamp2Status = Done THEN
					eClamp2Act	:= PneuActIdle;
					
					tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
				END_IF	
					
			ELSIF tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl = TRUE THEN	
				tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue	:= TRUE;
				tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue	:= FALSE;
				
				eClamp2Act	:= PneuActSetRet;
				
				IF p_eClamp2Stat = PneuActSetRet AND p_eClamp2Status = Done THEN
					eClamp2Act	:= PneuActIdle;
					
					tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
				END_IF	
			END_IF	
					
		ELSE
			IF (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl = TRUE) OR (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl = TRUE) THEN
				IF (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue = TRUE) AND (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue = TRUE) THEN
					eClamp2Act	:= PneuActSetAll;
					
					IF p_eClamp2Stat = PneuActSetAll AND p_eClamp2Status = Done THEN
						eClamp2Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF	
					
				ELSIF (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue = TRUE) AND (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue = FALSE) THEN	
					eClamp2Act	:= PneuActSetExt;
					
					IF p_eClamp2Stat = PneuActSetExt AND p_eClamp2Status = Done THEN
						eClamp2Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				ELSIF (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue = FALSE) AND (tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue = TRUE) THEN	
					eClamp2Act	:= PneuActSetRet;
					
					IF p_eClamp2Stat = PneuActSetRet AND p_eClamp2Status = Done THEN
						eClamp2Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				ELSE	
					eClamp2Act	:= PneuActRstAll;
					
					IF p_eClamp2Stat = PneuActRstAll AND p_eClamp2Status = Done THEN
						eClamp2Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				END_IF	
			END_IF	
		END_IF
		
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue		:= FALSE;
		
	END_IF
	

END_ACTION
