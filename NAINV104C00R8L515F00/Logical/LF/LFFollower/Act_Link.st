(** 2021-05-18 **)
ACTION Act_Link:
	
	bFollowerInfo	:= tyFollowerToLeaderTag.bProdWidthErr OR bProdRcpErrNotExist OR bProdRcpErrWidthMismatch;
	
	bLeaderInfo		:= (tyLeaderToFollowerTag.bProdWidthUSWarn OR tyLeaderToFollowerTag.bProdWidthDSWarn
						OR ((tyLeaderToFollowerTag.bProdNameUSWarn OR tyLeaderToFollowerTag.bProdNameDSWarn) 
						AND (p_bAWPrep = TRUE) AND (p_bAWDis = FALSE) AND (p_eAWStat<>AWActGoWidthOff)));
	
	//Info Message
	IF bFollowerInfo THEN
		IF tyFollowerToLeaderTag.bProdWidthErr = TRUE OR bProdRcpErrWidthMismatch THEN
			
			p_sInfoMsg		:= 'Product Recipe Width Does Not Match';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Check Product Width And');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Leader Request Width');
			
		ELSIF bProdRcpErrNotExist THEN
			
			p_sInfoMsg		:= 'New Product Not Found';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'In Product Recipe List');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Create New Product');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'In Product Setting');
		END_IF
	ELSE
		
		IF (tyLeaderToFollowerTag.sReqProdRcpNm<>p_tyCurrProdRcp.sRcpNm) AND (tyLeaderToFollowerTag.sReqProdRcpNm<>'') 
			AND bLeaderInfo=FALSE THEN
			
			p_sInfoMsg		:= 'Leader Request New Recipe';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Name : ');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_tyDispProdRcp.sRcpNm);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Width : ');
			sWidthInUMTemp	:= DINT_TO_STRING(p_tyDispProdRcp.diWidthInUM / 1000);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Name : ');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , tyLeaderToFollowerTag.sReqProdRcpNm);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Width : ');
			sWidthInUMTemp	:= DINT_TO_STRING(tyLeaderToFollowerTag.diReqProdRcpWidth / 1000);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
			
		ELSIF tyLeaderToFollowerTag.bProdNameUSWarn THEN
			p_sInfoMsg		:= 'US Machine Request New Recipe';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Name : ');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_tyDispProdRcp.sRcpNm);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Width : ');
			sWidthInUMTemp	:= DINT_TO_STRING(p_tyDispProdRcp.diWidthInUM / 1000);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Name : ');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , tyLeaderToFollowerTag.sReqProdRcpNm);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Width : ');
			sWidthInUMTemp	:= DINT_TO_STRING(tyLeaderToFollowerTag.diReqProdRcpWidth / 1000);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
			
		ELSIF tyLeaderToFollowerTag.bProdNameDSWarn THEN
			p_sInfoMsg		:= 'Different Recipe';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'From DS Machine');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Current Recipe Name : ');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_tyCurrProdRcp.sRcpNm);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Current Recipe Width : ');
			sWidthInUMTemp	:= DINT_TO_STRING(p_tyCurrProdRcp.diWidthInUM2 / 1000);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
			
		ELSIF tyLeaderToFollowerTag.bProdWidthUSWarn THEN
			p_sInfoMsg		:= 'Product Recipe Width Does Not Match';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Check Product Width And');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Leader Request Width');
	
		ELSIF tyLeaderToFollowerTag.bProdWidthDSWarn THEN
			p_sInfoMsg		:= 'Same Recipe : ';
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_tyDispProdRcp.sRcpNm);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'But Different Width');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'With DS Machine');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Machine Outgoing Width : ');
			sWidthInUMTemp	:= DINT_TO_STRING(p_tyDispProdRcp.diWidthInUM2 / 1000);
			p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
		
		END_IF
	END_IF		
		
	
	//Accept New Recipe Condition (Before Loaded New Recipe)
	p_bAccNewRcpCond	:= p_bLinkOpsRun = TRUE AND p_bLinkConvHvBrd = FALSE;
	
	//Update New Recipe Condition (After Loaded New Recipe)
	p_bUpdtNewRcpCond	:= TRUE;
	
	//Recipe Different
	//p_bInternalReqProdRcpDiff	:= memcmp(ADR(p_tyCurrProdRcp) , ADR(p_tyInternalReqProdRcp) , SIZEOF(p_tyCurrProdRcp)) <> 0;
	//p_bUpdtProdRcpDiff		:= memcmp(ADR(p_tyCurrProdRcp) , ADR(tyUpdtProdRcp) , SIZEOF(p_tyCurrProdRcp)) <> 0;
	//p_bRlsBrdProdRcpDiff		:= memcmp(ADR(p_tyCurrProdRcp) , ADR(tyRlsBrdProdRcpNm) , SIZEOF(p_tyCurrProdRcp)) <> 0;
	
	IF p_bErr THEN
		eCurrMachineStat := InError;
	ELSE
		IF p_bWarning THEN
			eCurrMachineStat := Warning;
		ELSE
			IF p_bOps THEN
				eCurrMachineStat := Run;
			ELSE
				IF p_bManual THEN
					eCurrMachineStat := Manual;
				ELSE
					eCurrMachineStat := Stop;
				END_IF
			END_IF
		END_IF
	END_IF
	
	
	
	//US width check sensor selection
	IF p_bLinkDIInvertHomeSen THEN
		p_bUSWidthChkSen := p_bLinkUSWidthChkSen;
	ELSIF p_bLinkDIInvertRemoteSen THEN
		p_bUSWidthChkSen := p_bLinkUSWidthChkSen1;
	END_IF
	
	
END_ACTION
