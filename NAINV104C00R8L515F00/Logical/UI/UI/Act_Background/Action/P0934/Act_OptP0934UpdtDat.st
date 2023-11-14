
ACTION Act_OptP0934UpdtDat:
	
	tyP0934AW.tyMotionStd.tyNumCurrPos.diValue			:= p_diAWOpenActualPos;
	tyP0934AW.tyMotionStd.tyNumErrCode.diValue			:= UDINT_TO_DINT(p_udiAWOpenAxisErrID);
	tyP0934AW.tyMotionStd.tyBitmapPwr.usiValueIdx		:= BOOL_TO_USINT(p_bAWOpenPwrOn);
	tyP0934AW.tyMotionStd.tyBitmapRst.usiValueIdx		:= BOOL_TO_USINT(NOT p_bAWOpenAxisErr);
	tyP0934AW.tyMotionStd.tyBitmapOrigin.usiValueIdx	:= BOOL_TO_USINT(p_bAWOpenIsHomed);
	
	tyP0934AW.tyMotionStd.tyBtnOpenLmtSen.bValue		:= p_bAWOpenOpenSen;
	tyP0934AW.tyMotionStd.tyBtnCloseLmtSen.bValue		:= p_bAWOpenCloseSen;
	
	//Bitmap Machine
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
		IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
			IF p_bAWOpenIsHomed = TRUE THEN
				IF p_diAWOpenActualPos <= (p_tyNtParamCurr.tyProdRcpWidthLmt.diMax / 2) THEN
					tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 200;
				ELSE
					tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 201;
				END_IF
			ELSE
				tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 200;
			END_IF
		ELSE
			IF p_bAWOpenIsHomed = TRUE THEN
				IF p_diAWOpenActualPos <= (p_tyNtParamCurr.tyProdRcpWidthLmt.diMax / 2) THEN
					tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 100;
				ELSE
					tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 101;
				END_IF
			ELSE
				tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 100;
			END_IF
		END_IF
	ELSE
		IF p_bAWOpenIsHomed = TRUE THEN
			IF p_diAWOpenActualPos <= (p_tyNtParamCurr.tyProdRcpWidthLmt.diMax / 2) THEN
				tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 0;
			ELSE
				tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 1;
			END_IF
		ELSE
			tyP0934AW.tyMotionStd.tyBitmapMc.usiValueIdx	:= 0;
		END_IF
	END_IF
	
	
END_ACTION
