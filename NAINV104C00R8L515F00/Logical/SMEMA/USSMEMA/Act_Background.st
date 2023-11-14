(** 2019-01-20 **)
ACTION Act_Background:
	
	fbTimeTrig(CLK := p_bTimerEnSenEdge);
	
	IF eStat = SMEMAActRun AND (p_bTimerEnSenEdge OR p_bTimerEnSen) THEN
		IF fbTimeTrig.Q = TRUE OR p_bTimerEnSen THEN
			fbTimerDlyTm.IN	:= TRUE;
		END_IF
	ELSE
		fbTimerDlyTm.IN	:= FALSE;
	END_IF
	
	IF bConvStart = FALSE AND bConvStop = FALSE THEN
		fbTimerDlyTm;

		IF fbTimerDlyTm.Q = TRUE AND eStat = SMEMAActRun THEN
			bTimer		:= TRUE;
			bVirtual	:= FALSE;
		ELSIF p_bVirtualEn = TRUE THEN
			bTimer		:= FALSE;
			bVirtual	:= TRUE;
		ELSE
			bTimer		:= FALSE;
			bVirtual	:= FALSE;
		END_IF
	ELSE
		fbTimerDlyTm(IN := FALSE);
	END_IF
	
	IF bTimer = TRUE THEN
		
		fbSigInChk.bNomSig			:= bConvStart = FALSE AND bConvStop = FALSE;
		fbSigInChk.bStatSig			:= FALSE;
		fbSigInChk.bStatSigSetGd	:= FALSE;
	
	ELSIF bVirtual = TRUE THEN
		
		fbSigInChk.bNomSig	:= p_bUBAVirtual;
	
		IF p_tyParam.eSelection = SMEMASelIPC9851Ext THEN
			fbSigInChk.bStatSig			:= p_bUBAStatVirtual;
			fbSigInChk.bStatSigSetGd	:= p_tyParam.bStatSigSetGd;
		ELSE
			fbSigInChk.bStatSig			:= FALSE;
			fbSigInChk.bStatSigSetGd	:= FALSE;
		END_IF
	
	ELSE
		
		fbSigInChk.bNomSig	:= p_bUBA;
	
		IF p_tyParam.eSelection = SMEMASelIPC9851Ext THEN
			fbSigInChk.bStatSig			:= p_bUBAStat;
			fbSigInChk.bStatSigSetGd	:= p_tyParam.bStatSigSetGd;
		ELSE
			fbSigInChk.bStatSig			:= FALSE;
			fbSigInChk.bStatSigSetGd	:= FALSE;
		END_IF
	
	END_IF
	
	fbSigInChk;
	
	bUSRdy		:= fbSigInChk.bSigInValid;
	bUSGdBrdRdy	:= fbSigInChk.bGdBrd;
	
END_ACTION
