
ACTION Act_OptP0921UpdtData: 
	
	//Update Bitmap
	IF p_bClampExtCtrl THEN		
		tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 1;		
	ELSE
		tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 0;		
	END_IF
	
END_ACTION
