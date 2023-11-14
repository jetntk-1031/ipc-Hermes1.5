(** 2019-03-29 **)
ACTION Act_Link:
	
	//Ready Receive
	IF p_bLinkNtParamUSWidthChkPrep AND p_bLinkMcParamUSWidthChkEn THEN
		p_bRdyRcv	:= p_bLinkDIUSWidthChkSen;
	ELSE
		p_bRdyRcv	:= TRUE;
	END_IF
	
	//Receive Complete Signal
	//p_bComplSigOn	:= p_bLeftSen = FALSE;
	
	IF EDGENEG(p_bLeftSen) THEN
		p_bComplSigOn	:= TRUE;
	END_IF
	
	IF eStat <> SMEMAActRun THEN
		p_bComplSigOn	:= FALSE;
	END_IF
	
	//Direction
	p_bDirLToR	:= p_eLinkConvDir = ConvDirLToR OR p_eLinkConvDir = ConvDirLToL;
	
END_ACTION
