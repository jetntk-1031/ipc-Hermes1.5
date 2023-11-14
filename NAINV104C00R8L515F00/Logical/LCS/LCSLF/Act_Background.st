(** 2019-06-12 **)
ACTION Act_Background:
	
	//Update To Leader Recipe
	CASE usiProdUpdtDatStep OF
		0:
			//Update New Recipe Condition
			IF sUpdtProdRcpNm <> '' THEN
				IF (p_tyCurrProdParam.sRcpNm <> sUpdtProdRcpNm) THEN
					IF p_bUpdtNewRcpCond = TRUE THEN
						usiProdUpdtDatStep	:= 1;
					END_IF
				END_IF
			ELSE
				sUpdtProdRcpNm	:= p_tyCurrProdParam.sRcpNm;
				diUpdtProdWidth	:= p_tyCurrProdParam.diWidthInUM;
			END_IF
			
		1:
			//Manual Update Data Check
			IF p_bAutoUpdtData = FALSE THEN
				bUpdtDataMnl	:= TRUE;
				
				IF p_bUIUpdtData = TRUE THEN
					bUpdtDataMnl	:= FALSE;
					usiProdUpdtDatStep	:= 2;
				END_IF
			ELSE
				bUpdtDataMnl	:= FALSE;
				usiProdUpdtDatStep	:= 2;
			END_IF
			
		2:
			//Update New Recipe
			sUpdtProdRcpNm	:= p_tyCurrProdParam.sRcpNm;
			diUpdtProdWidth	:= p_tyCurrProdParam.diWidthInUM;
			
			usiProdUpdtDatStep	:= 0;
			
	END_CASE
	
END_ACTION
