
ACTION Act_OptP0300Song: 
	
	IF EDGENEG(bSongEn) THEN
		tyP0300McInfo.tyMcInfo.tyBtnPlaySong.bValue := FALSE;
	ELSE
		bSongEn := tyP0300McInfo.tyMcInfo.tyBtnPlaySong.bValue;
	END_IF	
	
	uiSongIndex := USINT_TO_UINT(tyP0300McInfo.tyMcInfo.tyDrpDnSong.usiValueIdx);
	
END_ACTION
