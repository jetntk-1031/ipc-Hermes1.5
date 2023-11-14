(** 2019-04-24 **)
ACTION Act_LinkEn:
	
	//Link bPrep, bEn & bDis
	p_bDis	:= (p_bLinkStartupRun = TRUE) OR (p_eLinkMcParamUSCommMod = McSetCommModHermes);
	
END_ACTION
