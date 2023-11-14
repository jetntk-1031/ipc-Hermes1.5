(** 2019-04-30 **)
ACTION Act_Link:
	
	IF (p_eAct = ProdRcpActAddEdit) OR (p_eAct = ProdRcpActAdd) OR (p_eAct = ProdRcpActEdit) THEN

		rWidthInMM				:= DINT_TO_REAL(p_tyInfoIn.diWidthInUM);
		rWidthInMM2				:= DINT_TO_REAL(p_tyInfoIn.diWidthInUM2);
		rWidthInMM				:= rWidthInMM / 1000;		
		rWidthInMM2				:= rWidthInMM2 / 1000;
		sWidthInMM				:= REAL_TO_STRING(rWidthInMM);
		sWidthInMM2				:= REAL_TO_STRING(rWidthInMM2);
		
		IF p_bWidth2Prep THEN
			p_tyInfoIn.sDisplayInfo	:= sWidthInMM;
			p_tyInfoIn.sDisplayInfo	:= CONCAT(p_tyInfoIn.sDisplayInfo , ' | ');
			p_tyInfoIn.sDisplayInfo	:= CONCAT(p_tyInfoIn.sDisplayInfo , sWidthInMM2);
			p_tyInfoIn.sDisplayInfo	:= CONCAT(p_tyInfoIn.sDisplayInfo , ' mm');
		ELSE
			p_tyInfoIn.sDisplayInfo	:= sWidthInMM;
			p_tyInfoIn.sDisplayInfo	:= CONCAT(p_tyInfoIn.sDisplayInfo , ' mm');
		END_IF
	END_IF
	
	
END_ACTION
