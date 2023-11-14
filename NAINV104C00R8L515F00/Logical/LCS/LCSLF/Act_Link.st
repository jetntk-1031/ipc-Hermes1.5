(** 2019-06-28 **)
ACTION Act_Link:
	
	p_sInfoMsg		:= 'LCS Request New Recipe';
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Name : ');
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_tyCurrProdParam.sRcpNm);
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Width : ');
	sWidthInUMTemp	:= DINT_TO_STRING(p_tyCurrProdParam.diWidthInUM / 1000);
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Name : ');
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_tyLCSProdRcpInfo.sRcpNm);
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Width : ');
	sWidthInUMTemp	:= DINT_TO_STRING(p_tyLCSProdRcpInfo.diWidthInUM / 1000);
	p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
	
	//Accept New Recipe Condition
	p_bAccNewRcpCond	:= p_bLinkOpsRun = TRUE AND p_bLinkConvHvBrd = FALSE;
		
END_ACTION
