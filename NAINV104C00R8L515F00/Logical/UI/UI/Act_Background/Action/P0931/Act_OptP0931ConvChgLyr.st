
ACTION Act_OptP0931ConvChgLyr:
	
	IF tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat));
	END_IF

END_ACTION
