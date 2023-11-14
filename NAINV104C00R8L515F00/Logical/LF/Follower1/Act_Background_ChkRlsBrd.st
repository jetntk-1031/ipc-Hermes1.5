(** 2019-07-04 **)
ACTION Act_Background_ChkRlsBrd:
	
	IF tyRlsBrdProdRcpNm.sRcpNm = '' THEN
		tyRlsBrdProdRcpNm	:= p_tyCurrProdRcp;
		
	ELSIF (tyRlsBrdProdRcpNm.sRcpNm <> p_tyCurrProdRcp.sRcpNm) OR (p_bRlsBrdProdRcpDiff = TRUE) THEN
		
		IF p_bNewBrdEnteredCond = TRUE THEN
			bNewBrdEntered	:= TRUE;
		END_IF
		
		IF p_bOldBrdExitedCond = TRUE THEN
			bOldBrdExited	:= TRUE;
		END_IF
		
		IF bNewBrdEntered AND bOldBrdExited THEN
			bWaitRlsBrd	:= TRUE;
		END_IF
		
		IF bWaitRlsBrd AND p_bRlsBrd THEN
			tyRlsBrdProdRcpNm	:= p_tyCurrProdRcp;
		END_IF
		
	ELSE
		bNewBrdEntered	:= FALSE;
		bOldBrdExited	:= FALSE;
		bWaitRlsBrd		:= FALSE;
		
	END_IF
	
END_ACTION
