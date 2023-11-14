(** 2019-07-10 **)
ACTION Act_Background_LiveData:
	
	IF p_bLinkNtParamLCSLiveDatPrep AND p_bLinkMcParamLCSLiveDatEn THEN
		
		tyTagNm.sCurrRcpNm	:= p_tyProdRcpCurrRcp.sRcpNm;
		tyTagNm.rCurrWidth	:= DINT_TO_REAL(p_tyProdRcpCurrRcp.diWidthInUM) / 1000;
		tyTagNm.usiMode		:= BOOL_TO_USINT(p_bLinkNtParamLCSLFPrep AND p_bLinkMcParamLCSLFEn);
		
		IF p_bError = TRUE THEN
			tyTagNm.eCurrOpsStatus	:= LCSOpsStatusError;
		ELSIF p_bWarning = TRUE OR p_bInfo = TRUE THEN
			tyTagNm.eCurrOpsStatus	:= LCSOpsStatusWarning;
		ELSIF p_bOpsRun = TRUE THEN
			tyTagNm.eCurrOpsStatus	:= LCSOpsStatusAuto;
		ELSIF p_bUIManual = TRUE THEN
			tyTagNm.eCurrOpsStatus	:= LCSOpsStatusManual;
		ELSE
			tyTagNm.eCurrOpsStatus	:= LCSOpsStatusStop;
		END_IF
		
	END_IF
	
END_ACTION
