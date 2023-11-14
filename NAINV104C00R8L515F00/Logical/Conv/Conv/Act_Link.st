(** 2019-03-29 **)
ACTION Act_Link:
	
	IF p_bLinkUIBypsInitConv THEN
		p_diInitTm ACCESS ADR(diInitTm);
	ELSE
		p_diInitTm ACCESS p_McParamConvInitTm;
	END_IF
	
	IF EDGEPOS(eStatus = Error) THEN
		bMtrSigOnOrLToR	:= FALSE;
		bMtrDirOrRToL	:= FALSE;
	END_IF
	
	//Update Good/Bad Board
	IF p_eLinkMcParamUSCommMod = McSetCommModSMEMA THEN
		IF p_bLinkOpsInvertBrdInserted = TRUE THEN
			p_bGdBrdEnt	:= TRUE;
		ELSE	
			p_bGdBrdEnt ACCESS p_USSMEMAUSGdBrdRdy;
		END_IF	
	ELSIF p_eLinkMcParamUSCommMod = McSetCommModHermes THEN
		IF p_bLinkOpsInvertBrdInserted = TRUE THEN
			p_bGdBrdEnt	:= TRUE;
		ELSE	
			p_bGdBrdEnt ACCESS p_USHermesUSGdRdy;
		END_IF	
	END_IF	
	
	IF p_eLinkMcParamUSComm2Mod = McSetCommModSMEMA THEN
		IF p_bLinkOpsInvertBrdInserted = TRUE THEN
			p_bGdBrdEnt := TRUE;
		ELSE
			p_bGdBrdEnt ACCESS p_USSMEMA2USGdBrdRdy;
		END_IF
	ELSIF p_eLinkMcParamUSComm2Mod = McSetCommModHermes THEN
		IF p_bLinkOpsInvertBrdInserted = TRUE THEN
			p_bGdBrdEnt	:= TRUE;
		ELSE	
			p_bGdBrdEnt ACCESS p_USHermesUSGdRdy;
		END_IF	
	END_IF		
	
	//Reverse timeout
	fbRev.tTimeOut:= DINT_TO_TIME(p_diTxInTimeOut);
	
	//Conveyor Direction
	IF (p_usiLinkMcMod = 0 OR p_usiLinkMcMod = 1) OR ((p_usiLinkMcMod = 2 OR p_usiLinkMcMod = 3) AND NOT(p_bLinkOpsInvertOnceTwicePCBOut))   THEN
		p_eDirection ACCESS p_NtParamProjConvDir;
	ELSIF (p_usiLinkMcMod = 2 OR p_usiLinkMcMod = 3) AND p_bLinkOpsInvertOnceTwicePCBOut THEN		
		p_eDirection ACCESS p_NtParamProjRtrnBrdConvDir;
	ELSIF p_usiLinkMcMod =4   THEN//USReversalRdy or DSReversalRdy
		IF EDGEPOS(p_bUSHermesReversalDSRdy OR p_bDSHermesReversalUSRdy) THEN 
			p_eDirection ACCESS p_NtParamProjRtrnBrdConvDir;
		ELSIF  EDGEPOS(p_bUSHermesDSRdy OR p_bDSHermesUSRdy) THEN
			p_eDirection ACCESS p_NtParamProjConvDir;
		END_IF
	END_IF
		
END_ACTION
