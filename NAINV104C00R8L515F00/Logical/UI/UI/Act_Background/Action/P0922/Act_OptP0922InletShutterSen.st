
ACTION Act_OptP0922InletShutterSen: 

	tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnOpenRS.bValue		:= p_tyDI.bInShutterOpenRS;
	tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnCloseRS.bValue	:= p_tyDI.bInShutterCloseRS;
	
	//Machine Bitmap
	IF p_tyDI.bInShutterOpenRS = TRUE THEN
		IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
			IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
				tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx	:= 200;
			ELSE
				tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx	:= 100;
			END_IF
		ELSE
			tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx	:= 0;
		END_IF		
	ELSE
		IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
			IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
				tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx	:= 201;
			ELSE
				tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx	:= 101;
			END_IF
		ELSE
			tyP0922InletNOutletShutter.tyInletShutterCom.tyBitmapMc.usiValueIdx	:= 1;
		END_IF
	END_IF
	
	
END_ACTION
