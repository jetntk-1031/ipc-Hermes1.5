
ACTION Act_EntP0931Disp:
	
	//Access Address
	p_tyC0003DualMask ACCESS ADR(tyP0931ConvInv.tyDualMaskHide);
	
	p_tyC0004Navi ACCESS ADR(tyP0931ConvInv.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0931ConvInv.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyP0931ConvCom ACCESS ADR(tyP0931ConvInv.tyConvCom);
	
	p_tyP0931ConvDC ACCESS ADR(tyP0931ConvInv.tyConvDC);
	
	p_tyP0931ConvFB ACCESS ADR(tyP0931ConvInv.tyConvFB);
	
	p_tyP0931InvCom ACCESS ADR(tyP0931ConvInv.tyInvCom);
	
	p_tyP0931InvDC ACCESS ADR(tyP0931ConvInv.tyInvDC);
	
	p_tyP0931InvFB ACCESS ADR(tyP0931ConvInv.tyInvFB);
	
	//Display
	IF tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat));
	ELSE	
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat));
	END_IF
	
	IF tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat));
	ELSE	
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat));
	END_IF
	
	//On Brake when Enter
	tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue := FALSE;
	
END_ACTION
