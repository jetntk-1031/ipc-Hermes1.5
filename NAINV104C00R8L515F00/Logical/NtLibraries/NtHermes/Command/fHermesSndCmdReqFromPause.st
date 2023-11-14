
(* ProcessCmd *)
FUNCTION fHermesSndCmdReqFromPause

	IF p_tyHermesCmdPause.bMachineSafetySigTo <> p_tyHermesCmdPause.bPrevMachineSafetySigTo THEN
		IF p_tyHermesCmdPause.bMachineSafetySigTo = TRUE THEN 
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandConfirmPause);
		END_IF
		p_tyHermesCmdPause.bPrevMachineSafetySigTo := p_tyHermesCmdPause.bMachineSafetySigTo;
	END_IF
	

END_FUNCTION
