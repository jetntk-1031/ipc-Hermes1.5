
(* Hermes Add One Message Send Buffer *)
FUNCTION fHermesAddOneCmdTyp
	
	fHermesAddOneCmdTyp	:= TRUE;
	
	pa_eCmd[p_udiIdx]		:= eCmd;
	p_udiIdx				:= p_udiIdx + 1;
	
END_FUNCTION
