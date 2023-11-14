
(* ProcessCmd *)
FUNCTION fHermesSndCmdReqToLockConv
	
	IF p_tyHermesCmdLockCov.bOvenInfoTo <> p_tyHermesCmdLockCov.bPrevOvenInfoTo THEN
		IF p_tyHermesCmdLockCov.bOvenInfoTo = TRUE THEN 
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandLockInputConveyor);
		ELSE
			fHermesAddOneCmdTyp(ADR(p_tyHermesCmdParam.a_eCommandSndQ),ADR(p_tyHermesCmdParam.udiMsgCmdBffr),HermesCommandUnLockInputConveyor);
		END_IF
		p_tyHermesCmdLockCov.bPrevOvenInfoTo := p_tyHermesCmdLockCov.bOvenInfoTo;
	END_IF
	

END_FUNCTION
