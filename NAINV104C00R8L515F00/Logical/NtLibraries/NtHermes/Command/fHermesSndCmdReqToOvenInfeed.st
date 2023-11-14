
(* ProcessCmd *)
FUNCTION fHermesSndCmdReqToOvenInfeed
	
	IF p_tyHermesCmdOvenInfeed.bOvenInfeedTo <> p_tyHermesCmdOvenInfeed.bFeatureOvenInfeedFrom THEN
		IF p_tyHermesCmdOvenInfeed.bOvenInfeedTo = TRUE THEN 
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandOvenInfeed);
		ELSE
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandOvenInfeed);
		END_IF
		p_tyHermesCmdOvenInfeed.bPrevOvenInfeedTo := p_tyHermesCmdOvenInfeed.bOvenInfeedTo;
	END_IF
	

END_FUNCTION
