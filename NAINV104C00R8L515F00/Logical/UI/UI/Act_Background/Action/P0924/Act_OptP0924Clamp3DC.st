
ACTION Act_OptP0924Clamp3DC: 
	IF tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue = TRUE THEN
		IF p_bClamp3TwoCtrlOut = FALSE THEN
			IF tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl = TRUE THEN
				tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue	:= TRUE;
				tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue	:= FALSE;
				
				eClamp3Act	:= PneuActSetExt;
				
				IF p_eClamp3Stat = PneuActSetExt AND p_eClamp3Status = Done THEN
					eClamp3Act	:= PneuActIdle;
					
					tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
				END_IF	
					
			ELSIF tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl = TRUE THEN	
				tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue	:= TRUE;
				tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue	:= FALSE;
				
				eClamp3Act	:= PneuActSetRet;
				
				IF p_eClamp3Stat = PneuActSetRet AND p_eClamp3Status = Done THEN
					eClamp3Act	:= PneuActIdle;
					
					tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
				END_IF	
			END_IF	
					
		ELSE
			IF (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl = TRUE) OR (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl = TRUE) THEN
				IF (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue = TRUE) AND (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue = TRUE) THEN
					eClamp3Act	:= PneuActSetAll;
					
					IF p_eClamp3Stat = PneuActSetAll AND p_eClamp3Status = Done THEN
						eClamp3Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF	
					
				ELSIF (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue = TRUE) AND (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue = FALSE) THEN	
					eClamp3Act	:= PneuActSetExt;
					
					IF p_eClamp3Stat = PneuActSetExt AND p_eClamp3Status = Done THEN
						eClamp3Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				ELSIF (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue = FALSE) AND (tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue = TRUE) THEN	
					eClamp3Act	:= PneuActSetRet;
					
					IF p_eClamp3Stat = PneuActSetRet AND p_eClamp3Status = Done THEN
						eClamp3Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				ELSE	
					eClamp3Act	:= PneuActRstAll;
					
					IF p_eClamp3Stat = PneuActRstAll AND p_eClamp3Status = Done THEN
						eClamp3Act	:= PneuActIdle;
						
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
						tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
					END_IF
					
				END_IF	
			END_IF	
		END_IF
		
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue	:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue	:= FALSE;
		
	END_IF
	
	

END_ACTION
