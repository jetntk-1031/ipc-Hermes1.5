
ACTION Act_OptP0924Clamp1Sen: 

	tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnClampRS.bValue		:= p_tyDI.bClampRS1;
	tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnUnClampRS.bValue		:= p_tyDI.bUnClampRS1;
	
	//Machine Bitmap
	IF p_tyDI.bClampRS1 = TRUE THEN
		tyP0924ClampWithRS.tyClamp1WithRSCom.tyBitmapMc.usiValueIdx	:= 1;
	ELSE
		tyP0924ClampWithRS.tyClamp1WithRSCom.tyBitmapMc.usiValueIdx	:= 0;
	END_IF
	
	
END_ACTION
