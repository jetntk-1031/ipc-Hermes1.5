(** 2019-03-29 **)
ACTION Act_Link:
	
	//Ready Send
	IF p_bLinkNtParamDSWidthChkPrep AND p_bLinkMcParamDSWidthChkEn THEN
		p_bRdySend	:= p_bLinkDIDSWidthChkSen;
	ELSE
		p_bRdySend	:= TRUE;
	END_IF
	
	//Send Complete Signal
	IF EDGENEG(p_bRightSen) THEN
		p_bComplSigOn	:= TRUE;
	END_IF
	
	IF eStat <> SMEMAActRun THEN
		p_bComplSigOn	:= FALSE;
	END_IF
	
	//Direction
	p_bDirLToR	:= p_eLinkConvDir = ConvDirLToR OR p_eLinkConvDir = ConvDirLToL;
	
	//Good Board Access
	IF p_usiLinkMcMod = 0 AND p_usiLinkMcMod = 1 THEN
		p_bGdBrd ACCESS p_OpsInvertGdBrd;
	ELSE
		p_bGdBrd ACCESS p_OpsInvertGdBrd;
	END_IF
	
END_ACTION
