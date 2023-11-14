
(* Hermes Checking Parameter SendWorkOrderId & QueryWorkOrderId *)
FUNCTION fHermesAddOneCommandGate
	
	fHermesAddOneCommandGate	:= p_udiIdx;
	tyCommandProcessList[p_udiIdx].bUSTrueDSFalse :=  bUsTrueDsFalse;
	tyCommandProcessList[p_udiIdx].udiCommandParam :=  ADR(tyHermesCmdParam);
	tyCommandProcessList[p_udiIdx].udiComMode := ADR(udiComMode) ;
	tyCommandProcessList[p_udiIdx].udiInterfaceString :=  ADR(sInterface);
	p_udiIdx := p_udiIdx +1;
END_FUNCTION
