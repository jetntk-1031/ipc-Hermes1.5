(** 2019-03-29 **)
ACTION Act_Link:
	
	p_bWarning			:= p_bLinkAlarmWarning OR (p_bLinkAlarmInfo AND NOT (p_bLinkAlarmInfoLF AND p_bLinkLFBuzMute));
	
	p_bWarningNoBuz		:= p_bLinkAlarmInfoLF AND p_bLinkLFBuzMute;
	
END_ACTION
