
ACTION Act_OptP0934FBStat: 

	IF p_bAWOpenAxisErr = TRUE THEN
		tyP0934AW.tyMotionStd.tyStringStat.sValue	:= p_sAWOpenAxisErrTxt;
	ELSE
		IF NOT (p_bAWOpenJogging AND p_eAWOpenStat = AWActIdle) THEN 
			
			tyP0934AW.tyMotionStd.tyStringStat.sValue	:= p_sAWOpenStatTxt;
		END_IF
		
	END_IF
	
END_ACTION
