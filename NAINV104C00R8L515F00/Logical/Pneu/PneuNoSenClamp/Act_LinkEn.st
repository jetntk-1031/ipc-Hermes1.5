(** 2020-10-08 **)
ACTION Act_LinkEn:
	
	//Link bPrep, bEn & bDis
	p_bPrep := p_bClampPrep AND (p_eClampOption=ClampNoRS);
END_ACTION
