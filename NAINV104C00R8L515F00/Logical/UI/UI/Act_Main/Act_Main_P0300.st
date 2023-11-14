(** 2018-12-21 **)
ACTION Act_Main_P0300:
	
	//Display
	tyP0300McInfo.tyMcInfo.tyStringSoftwareVer.sValue	:= sSWVersion;
	tyP0300McInfo.tyMcInfo.tyTxtNtAddr.usiValueIdx		:= p_tyNtParamCurr.usiNtAddr;
	tyP0300McInfo.tyMcInfo.tyStringJobNo.sValue			:= CONCAT('(', CONCAT(p_tyNtParamCurr.sJobNo, ')'));
	
END_ACTION
