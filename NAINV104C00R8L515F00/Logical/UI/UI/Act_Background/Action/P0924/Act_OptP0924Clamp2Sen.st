
ACTION Act_OptP0924Clamp2Sen: 

	tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnClampRS.bValue		:= p_tyDI.bClampRS2;
	tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnUnClampRS.bValue		:= p_tyDI.bUnClampRS2;
	
	//Machine Bitmap
	IF p_tyDI.bClampRS2 = TRUE THEN
		tyP0924ClampWithRS.tyClamp2WithRSCom.tyBitmapMc.usiValueIdx	:= 1;
	ELSE
		tyP0924ClampWithRS.tyClamp2WithRSCom.tyBitmapMc.usiValueIdx	:= 0;
	END_IF
	
	
END_ACTION
