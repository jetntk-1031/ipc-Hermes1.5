(** 2020-10-06 **)
ACTION Act_OpsRun:
	IF p_usiLinkProdRcpCurrRcpMcMod = 4 THEN
		Act_OpsStandard_Hermes;
	ELSIF (p_bClampPrep = FALSE) OR ((p_bClampPrep=TRUE) AND (p_eClampOption=ClampNoRS)) THEN
		
		Act_OpsStandard;
	
	ELSIF (p_usiLinkProdRcpCurrRcpMcMod = 2 OR p_usiLinkProdRcpCurrRcpMcMod = 3) THEN
		
		Act_OpsClampNoStopperInvOnceAndTwice;

	ELSE
		
		Act_OpsClampNoStopper;
		
	END_IF
	
END_ACTION
