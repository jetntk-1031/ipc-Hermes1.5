(** 2019-03-25 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_udiMax ACCESS ADR(c_udiDInputMax);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_tyDISettings ACCESS ADR(tyDISettings);
	p_sProgNm ACCESS ADR(sProgNm);
	
	p_diConvLftSenOnTm ACCESS ADR(diConvLftSenOnTm);
	p_diConvLftSenOffTm ACCESS ADR(diConvLftSenOffTm);
	p_diConvRgtSenOnTm ACCESS ADR(diConvRgtSenOnTm);
	p_diConvRgtSenOffTm ACCESS ADR(diConvRgtSenOffTm);
	
	p_bHermesUSCmdFeaturePause ACCESS ADR(bHermesDummyMem);
	p_bHermesDSCmdFeaturePause ACCESS ADR(bHermesDummyMem);
END_ACTION
