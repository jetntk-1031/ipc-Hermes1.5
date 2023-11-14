
ACTION Act_OptP0931ConvFB:
		
	IF tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl = TRUE THEN	
		eConvAct	:= ConvActStop;
		
		IF p_eConvStat = ConvActStop AND p_eConvStatus = Done THEN
			eConvAct	:= ConvActIdle;
				
			tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk		:= FALSE;
		
			tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnExit.bValue	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk	:= FALSE;
		
			tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk		:= FALSE;
			
			tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= TRUE;
			tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= TRUE;
			
			//Unmask
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
		END_IF	
			
	ELSIF tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue	:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk		:= TRUE;
		
		tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= FALSE;
		
	
		
		IF p_eOpsInvertCurrPos = InvertCurrPosAtRemote THEN
			
			CASE usiConvStep OF
				0:
					eConvAct	:= ConvActEntToInOff;
			
					IF p_eConvStat = ConvActEntToInOff AND p_eConvStatus = Done THEN
						eConvAct	:= ConvActIdle;	
						
						usiConvStep	:= 1;
					END_IF	
				
				1:
					eConvAct	:= ConvActRevImmedStart;
				
					IF p_eConvStat = ConvActRevImmedStart AND p_eConvStatus = Done THEN
						eConvAct	:= ConvActIdle;	
						
						usiConvStep	:= 0;
						
						tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl	:= FALSE;
			
						tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue	:= FALSE;
						tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk		:= FALSE;
				
						tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= TRUE;
						tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= TRUE;
				
					END_IF	
				
			END_CASE	
			
		ELSIF p_eOpsInvertCurrPos = InvertCurrPosAtHome THEN	
			
			eConvAct	:= ConvActEnt;
			
			IF p_eConvStat = ConvActEnt AND p_eConvStatus = Done THEN
				eConvAct	:= ConvActIdle;
				
				tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl	:= FALSE;
			
				tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue	:= FALSE;
				tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk		:= FALSE;
				
				tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= TRUE;
				tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= TRUE;
				
			END_IF	
		
		END_IF	
			
	ELSIF tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyConvFB.tyBtnExit.bValue	:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk	:= TRUE;
		
		tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= FALSE;
		
		eConvAct	:= ConvActExit;
		
		IF p_eConvStat = ConvActExit AND p_eConvStatus = Done THEN
			eConvAct	:= ConvActIdle;
			
			tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl	:= FALSE;
			
			tyP0931ConvInv.tyConvFB.tyBtnExit.bValue	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk	:= FALSE;
			
			tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= TRUE;
			tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= TRUE;
			
		END_IF	
		
	ELSIF tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl = TRUE THEN		
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue	:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk		:= TRUE;
		
		tyP0931ConvInv.tyConvFB.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk	:= FALSE;
		
		eConvAct	:= ConvActPreExit;
		
		IF p_eConvStat = ConvActPreExit AND p_eConvStatus = Done THEN
			eConvAct	:= ConvActIdle;
			
			tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl	:= FALSE;
			
			tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue	:= FALSE;
			tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk		:= FALSE;
			
			tyP0931ConvInv.tyConvFB.tyBtnStop.bValue		:= TRUE;
			tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk		:= TRUE;

		END_IF	
		
	END_IF	
	
	//Mask	
	IF p_tyUsrMgmtCurrAccessRgt.bManualFBOnly THEN
		
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
		
		IF (p_eConvStatus = Error) OR NOT p_tyDI.bSafetyRlySig THEN
			
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl = TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl = TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl = TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			
		ELSE	
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			
			IF p_eOpsInvertCurrPos=InvertCurrPosAtRemote THEN
				fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			ELSE
				fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			END_IF
		
		END_IF	
		
	ELSE
		//Mask
		IF (p_eConvStatus = Error) OR NOT p_tyDI.bSafetyRlySig THEN
			
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl = TRUE THEN
			
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl =TRUE THEN
			
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		ELSIF tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl = TRUE THEN
			
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
			
		ELSE
		//Unmask	
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
			
			IF p_eOpsInvertCurrPos=InvertCurrPosAtRemote THEN
				fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			ELSE
				fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat));
			END_IF
			
		END_IF	
		
	END_IF
	
END_ACTION
