
ACTION Act_OptP0924Clamp3Sen: 

	tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnClampRS.bValue		:= p_tyDI.bClampRS3;
	tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnUnClampRS.bValue	:= p_tyDI.bUnClampRS3;
	
	//Machine Bitmap
	IF p_tyDI.bClampRS3 = TRUE THEN
		tyP0924ClampWithRS.tyClamp3WithRSCom.tyBitmapMc.usiValueIdx	:= 1;
	ELSE
		tyP0924ClampWithRS.tyClamp3WithRSCom.tyBitmapMc.usiValueIdx	:= 0;
	END_IF
	
	
END_ACTION
