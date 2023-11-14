
(* ProcessCmd *)
FUNCTION fHermesSndCmdReqToPause
	
	IF p_tyHermesCmdPause.bUnlockCoverSigTo <> p_tyHermesCmdPause.bPrevUnlockCoverSigTo THEN
		IF p_tyHermesCmdPause.bUnlockCoverSigTo = TRUE THEN 
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandRequestPause);
		ELSE
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandResumeOperation);
			p_tyHermesCmdPause.bMachineSafetySigFrom := FALSE;
		END_IF
		p_tyHermesCmdPause.bPrevUnlockCoverSigTo := p_tyHermesCmdPause.bUnlockCoverSigTo;
	END_IF
	

END_FUNCTION
