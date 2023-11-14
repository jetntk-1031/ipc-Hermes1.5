(** 2020-10-05 **)
ACTION Act_Background_Process:
	
	IF bRun2 = TRUE AND bStop = FALSE THEN
		fbOnlineChk.a_bOnline				:= pa_bLFOnline;
		fbOnlineChk.a_tyFollowerToLeaderTag	:= a_tyFollowerToLeaderTag;
		fbOnlineChk.diMcNum					:= diMcNum;
		fbOnlineChk(bEn := TRUE);
		
		fbBlkUSDS.a_tyFollowerToLeaderTag	:= a_tyFollowerToLeaderTag;
		fbBlkUSDS.diBeforeOven1			:= p_diBeforeOven;
		fbBlkUSDS.diAfterOven1			:= p_diAfterOven;
		fbBlkUSDS.diBeforeOven2			:= p_diBeforeOven2;
		fbBlkUSDS.diAfterOven2			:= p_diAfterOven2;
		fbBlkUSDS.diMcNum				:= diMcNum;
		fbBlkUSDS.pa_bLFOnline			:= pa_bLFOnline;
		fbBlkUSDS.bSeqMode				:= (eStat= LFActChgSeqAuto) OR (eStat= LFActChgSeqMnl);
		fbBlkUSDS(bEn := TRUE);
		
		fbDataUpdt.a_bOnline			:= pa_bLFOnline;
		fbDataUpdt.diMcNum				:= diMcNum;
		fbDataUpdt(bEn := TRUE);
		
		
	ELSIF bStop = TRUE THEN
		fbOnlineChk(bEn := FALSE);
		fbBlkUSDS(bEn := FALSE);
		fbDataUpdt(bEn := FALSE);
		bStop2Done	:= TRUE;
		
	END_IF
	
END_ACTION
