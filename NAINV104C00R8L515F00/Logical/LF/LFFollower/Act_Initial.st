(** 2020-08-06 **)
ACTION Act_Initial:
	
	//Initial
	fbFollower.diWidthLimit	:= p_diWidthLimit;
	fbFollower(bEn := FALSE);
	
	fbOnlineChk.p_tyLeaderInfo		:= ADR(tyLeaderInfo);
	fbOnlineChk.tDlyTm				:= p_tOnlineChkDlyTm;
	fbOnlineChk(bEn := FALSE);
	
END_ACTION
