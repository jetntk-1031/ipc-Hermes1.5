
(* Hermes Remove One Message Send Buffer *)
FUNCTION fHermesRmvOneCmdTyp
	
	fHermesRmvOneCmdTyp	:= TRUE;
	
	memcpy(ADR(pa_eCmd[0]) , ADR(pa_eCmd[1]) , SIZEOF(pa_eCmd[0]) * 10);
	pa_eCmd[10]	:= HermesCommandUndefined;
	p_udiIdx		:= p_udiIdx - 1;
	
END_FUNCTION
