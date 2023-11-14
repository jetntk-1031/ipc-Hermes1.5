(** 2018-12-21 **)
ACTION Act_Main_P0931:
	
	//Display
	tyP0931ConvInv.tyConvCom.tyBtnLft.uiRtStat.0	:= p_tyNtParamCurr.tyDISettings.diConvLftSen = 0;
	tyP0931ConvInv.tyConvCom.tyBtnRgt.uiRtStat.0	:= p_tyNtParamCurr.tyDISettings.diConvRgtSen = 0;
	
	tyP0931ConvInv.tyInvCom.tyBtnHomeSen.uiRtStat.0	:= p_tyNtParamCurr.tyDISettings.diInvertHomeSen = 0;
	tyP0931ConvInv.tyInvCom.tyBtnRemoteSen.uiRtStat.0	:= p_tyNtParamCurr.tyDISettings.diInvertRemoteSen = 0;
	
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
		IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
			tyP0931ConvInv.tyConvCom.tyBitmapMc.usiValueIdx := 200;
		ELSE
			tyP0931ConvInv.tyConvCom.tyBitmapMc.usiValueIdx := 100;
		END_IF
	ELSE
		tyP0931ConvInv.tyConvCom.tyBitmapMc.usiValueIdx := 0;
	END_IF
		
END_ACTION
