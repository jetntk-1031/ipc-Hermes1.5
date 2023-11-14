
ACTION Act_OptP0931InvChgLyr:
		
	IF tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat));
	END_IF

END_ACTION
