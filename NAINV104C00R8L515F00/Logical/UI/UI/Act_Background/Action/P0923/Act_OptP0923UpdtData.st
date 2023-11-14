
ACTION Act_OptP0923UpdtData: 
	
	//Update Bitmap
	IF p_bStopperExtCtrl THEN		
		tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 1;		
	ELSE
		tyP0923Stopper.tyCom.tyBitmapMc.usiValueIdx	:= 0;		
	END_IF
	
END_ACTION
