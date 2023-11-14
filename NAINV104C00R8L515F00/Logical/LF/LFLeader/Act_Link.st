(** 2020-08-06 **)
ACTION Act_Link:
	IF p_bWidth2Prep THEN
		p_diReqProdWidth ACCESS p_ProdRcpCurrRcp0Width2;
	ELSE
		p_diReqProdWidth ACCESS p_ProdRcpCurrRcp0Width;
	END_IF
	
END_ACTION
