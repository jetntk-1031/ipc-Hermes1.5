(** 2020-09-22 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_tyNtParamCurr ACCESS ADR(tyNtParamCurr);
	p_tyMcParamCurr ACCESS ADR(tyMcParamCurr);
		
	p_bUIMismatchOverWriteConfig ACCESS ADR(bMismatchOverWriteConfig);
	p_bUITempAddrFillDone ACCESS ADR(bTempAddrFillDone);
	p_bUIChgConfigDone ACCESS ADR(bChgConfigDone);
	p_bUIOverwriteIP ACCESS ADR(bOverwriteIP);
	p_bUIOverwriteSubnet ACCESS ADR(bOverwriteSubnet);
	p_bUIOverwriteEthMode ACCESS ADR(bOverwriteEthMode);
	
END_ACTION
