
ACTION Act_OptP0931ConvDC:
	
	IF tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyConvDC.tyBtnStop.bValue	:= TRUE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk	:= TRUE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue	:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk	:= FALSE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue	:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
	
		eConvAct	:= ConvActStop;
		
		IF p_eConvStat = ConvActStop AND p_eConvStatus = Done THEN
			eConvAct	:= ConvActIdle;
			
			tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl	:= FALSE;
		END_IF	
		
	ELSIF tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue	:= TRUE;
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk		:= TRUE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue	:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk	:= FALSE;
		
		tyP0931ConvInv.tyConvDC.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk	:= FALSE;
		
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
		
		IF p_eOpsInvertCurrPos = InvertCurrPosAtRemote THEN 
		
			eConvAct	:= ConvActSetMtrDirOrRToL;
		
			IF p_eConvStat = ConvActSetMtrDirOrRToL AND p_eConvStatus = Done THEN
				eConvAct	:= ConvActIdle;
			
				tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl	:= FALSE;
			END_IF	
			
		ELSE
			eConvAct	:= ConvActSetMtrSigOnOrLToR;
		
			IF p_eConvStat = ConvActSetMtrSigOnOrLToR AND p_eConvStatus = Done THEN
				eConvAct	:= ConvActIdle;
			
				tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl	:= FALSE;
			END_IF	
		END_IF	
	ELSIF tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl = TRUE THEN	
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue	:= TRUE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk	:= TRUE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue	:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk		:= FALSE;
		
		tyP0931ConvInv.tyConvDC.tyBtnStop.bValue	:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk	:= FALSE;
		
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat));
		
		IF p_eOpsInvertCurrPos = InvertCurrPosAtRemote THEN 
			eConvAct	:= ConvActSetMtrSigOnOrLToR;
		
			IF p_eConvStat = ConvActSetMtrSigOnOrLToR AND p_eConvStatus = Done THEN
				eConvAct	:= ConvActIdle;
			
				tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl	:= FALSE;
			END_IF	
			
		ELSE
			eConvAct	:= ConvActSetMtrDirOrRToL;
		
			IF p_eConvStat = ConvActSetMtrDirOrRToL AND p_eConvStatus = Done THEN
				eConvAct	:= ConvActIdle;
			
				tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl	:= FALSE;
			END_IF		
		END_IF
	END_IF		
		
END_ACTION
