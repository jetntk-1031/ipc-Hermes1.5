(** 2018-12-21 **)
ACTION Act_Main_C0007:
	
	IF p_tyNtParamCurr.bLeaderMc = TRUE THEN
		tyCommon.tyNotif.tyTxtLFMc.usiValueIdx	:= 0;
	ELSE
		tyCommon.tyNotif.tyTxtLFMc.usiValueIdx	:= 1;
	END_IF
	
END_ACTION
