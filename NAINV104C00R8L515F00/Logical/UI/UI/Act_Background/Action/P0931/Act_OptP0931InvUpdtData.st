
ACTION Act_OptP0931InvUpdtData: 
	
	//Machine Bitmap
	IF p_tyDI.bInvertHomeSen THEN
		IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
			IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
				tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx	:= 200;
			ELSE
				tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx	:= 100;
			END_IF
		ELSE
			tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx	:= 0;
		END_IF	
	ELSE
		IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
			IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
				tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx	:= 201;
			ELSE
				tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx	:= 101;
			END_IF
		ELSE
			tyP0931ConvInv.tyInvCom.tyBitmapMc.usiValueIdx	:= 1;
		END_IF
	END_IF

END_ACTION
