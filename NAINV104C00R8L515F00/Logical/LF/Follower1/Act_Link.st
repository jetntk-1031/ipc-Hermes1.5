(** 2019-07-04 **)
ACTION Act_Link:
	
	//Temporary (Recipe No Save)
	IF p_tyCurrProdRcp.sRcpNm = '' AND p_tyCurrProdRcp.diWidthInUM = 0 THEN
		p_tyCurrProdRcp	:= p_tyInternalReqProdRcp;
	END_IF
	
	//Info Message
	p_sInfoMsg	:= '';
	
	//Accept New Recipe Condition (Before Loaded New Recipe)
	p_bAccNewRcpCond	:= (p_bLinkOpsRun = TRUE) AND (p_bLinkOpsInvertStepInitDone = TRUE) AND (p_bLinkConvHvBrd = FALSE) AND (p_eLinkOpsInvertCurrPos<>InvertPosInvalid);
	
	//Update New Recipe Condition (After Loaded New Recipe)
	p_bUpdtNewRcpCond	:= TRUE;

	//Recipe Different
	p_bInternalReqProdRcpDiff	:= memcmp(ADR(p_tyCurrProdRcp) , ADR(p_tyInternalReqProdRcp) , SIZEOF(p_tyCurrProdRcp)) <> 0;
	p_bUpdtProdRcpDiff			:= memcmp(ADR(p_tyCurrProdRcp) , ADR(tyUpdtProdRcp) , SIZEOF(p_tyCurrProdRcp)) <> 0;
	p_bRlsBrdProdRcpDiff		:= memcmp(ADR(p_tyCurrProdRcp) , ADR(tyRlsBrdProdRcpNm) , SIZEOF(p_tyCurrProdRcp)) <> 0;
	
	//Release New Product Condition
	p_bNewBrdEnteredCond	:= (p_bLinkOpsInvertStepInitDone = TRUE) AND (p_bLinkConvHvBrd = TRUE);
	p_bOldBrdExitedCond		:= (p_bLinkOpsInvertStepInitDone = TRUE) AND (p_bLinkConvHvBrd = FALSE);

	
	//US width check sensor selection
	IF p_bLinkDIInvertHomeSen THEN
		p_bUSWidthChkSen := p_bLinkUSWidthChkSen;
	ELSIF p_bLinkDIInvertRemoteSen THEN
		p_bUSWidthChkSen := p_bLinkUSWidthChkSen1;
	END_IF
	
END_ACTION
