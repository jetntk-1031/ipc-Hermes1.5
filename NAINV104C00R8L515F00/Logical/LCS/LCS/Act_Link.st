(** 2019-07-10 **)
ACTION Act_Link:
	
	//Check Limit
	IF p_bLCSMngRcpChkLmt OR p_bLCSLFChkLmt THEN
		
		IF tyTagNm.tyProdRcpInfo.sRcpNm = '' THEN
		
			bChkLmtOK	:= FALSE;
			bChkLmtNG	:= TRUE;
			sAddMsg		:= 'Recipe Name Empty ';
			
		ELSIF tyTagNm.tyProdRcpInfo.diWidthInUM < p_tyNtParamCurr.tyProdRcpWidthLmt.diMin THEN
		
			bChkLmtOK	:= FALSE;
			bChkLmtNG	:= TRUE;
			sAddMsg		:= 'Width Lower Limit ';
			
		ELSIF tyTagNm.tyProdRcpInfo.diWidthInUM > p_tyNtParamCurr.tyProdRcpWidthLmt.diMax THEN
		
			bChkLmtOK	:= FALSE;
			bChkLmtNG	:= TRUE;
			sAddMsg		:= 'Width Upper Limit ';
		ELSIF tyTagNm.tyProdRcpInfo.usiMcMod < DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMin) THEN
		
			bChkLmtOK	:= FALSE;
			bChkLmtNG	:= TRUE;
			sAddMsg		:= 'Machine Mode Lower Limit ';
			
		ELSIF tyTagNm.tyProdRcpInfo.usiMcMod > DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMax) THEN
		
			bChkLmtOK	:= FALSE;
			bChkLmtNG	:= TRUE;
			sAddMsg		:= 'Machine Mode Upper Limit ';
			
		ELSE
			
			bChkLmtOK	:= TRUE;
			bChkLmtNG	:= FALSE;
			sAddMsg		:= '';
		
		END_IF
		
	ELSE
		
		bChkLmtOK	:= FALSE;
		bChkLmtNG	:= FALSE;
	
	END_IF

	//Update LCS Enable
	tyTagNm.bMngRcpEn		:= p_bLinkNtParamLCSManageRcpPrep AND p_bLinkMcParamLCSManageRcpEn;
	tyTagNm.bLFEn			:= p_bLinkNtParamLCSLFPrep AND p_bLinkMcParamLCSLFEn;
	tyTagNm.bLiveData		:= p_bLinkNtParamLCSLiveDatPrep AND p_bLinkMcParamLCSLiveDatEn;
	tyTagNm.usiBrdStatus	:= BOOL_TO_USINT(p_bLinkConvHvBrd);
	
	//Action
	IF tyTagNm.eAct = LCSActRunProd THEN
		
		bLFRun		:= TRUE;
		bMngRcpRun	:= FALSE;
		
	ELSIF (tyTagNm.eAct = LCSActAddProd)
		OR (tyTagNm.eAct = LCSActAddMultiProd)
		OR (tyTagNm.eAct = LCSActEditProd)
		OR (tyTagNm.eAct = LCSActEditMultiProd)
		OR (tyTagNm.eAct = LCSActOverWriteProd)
		OR (tyTagNm.eAct = LCSActOverWriteMultiProd)
		OR (tyTagNm.eAct = LCSActDelProd)
		OR (tyTagNm.eAct = LCSActDelMultiProd)
		OR (tyTagNm.eAct = LCSActUploadProd)
		OR (tyTagNm.eAct = LCSActUploadMultiProd) THEN
		
		bLFRun		:= FALSE;
		bMngRcpRun	:= TRUE;
		
	ELSIF tyTagNm.eAct = LCSActIdle THEN
		
		bLFRun		:= FALSE;
		bMngRcpRun	:= FALSE;
		
	END_IF
	
	IF bLFRun = TRUE THEN
		eLCSLF_LCSAct			:= tyTagNm.eAct;
		tyLCSLF_LCSProdRcpInfo	:= tyTagNm.tyProdRcpInfo;
		
		
		sLastModifiedTemp	:= CONCAT('DT#' , tyTagNm.sLastModified);
		tyLCSLF_LCSProdRcpInfo.dtLastModified	:= STRING_TO_DT(sLastModifiedTemp);
		
		tyTagNm.eStat		:= p_eLCSLF_PLCStat;
		tyTagNm.udiStatus	:= p_udiLCSLF_PLCStatus;
		
		IF tyTagNm.udiStatus > 0 AND tyTagNm.udiStatus < 65534 THEN
			tyTagNm.sErrMsg	:= a_tyAlmText[tyTagNm.udiStatus].sAlmText;
			
			IF tyTagNm.udiStatus = 10010 OR tyTagNm.udiStatus = 10011 THEN
				tyTagNm.sErrMsg	:= CONCAT(sAddMsg , tyTagNm.sErrMsg);
			END_IF
		END_IF
		
	ELSIF bMngRcpRun = TRUE THEN
		eLCSMngRcp_LCSAct	:= tyTagNm.eAct;
		
		tyTagNm.eStat		:= p_eLCSMngRcp_PLCStat;
		tyTagNm.udiStatus	:= p_udiLCSMngRcp_PLCStatus;
		
		IF tyTagNm.udiStatus > 0 AND tyTagNm.udiStatus < 65534 THEN
			tyTagNm.sErrMsg	:= a_tyAlmText[tyTagNm.udiStatus].sAlmText;
			
			IF tyTagNm.udiStatus = 10010 OR tyTagNm.udiStatus = 10011 THEN
				tyTagNm.sErrMsg	:= CONCAT(sAddMsg , tyTagNm.sErrMsg);
			END_IF
		END_IF
		
		IF tyTagNm.eAct = LCSActUploadProd THEN
			IF tyTagNm.udiStatus = 0 THEN
				tyTagNm.tyProdRcpInfo	:= p_tyLCSMngRcp_PLCProdRcpInfo;
				
		
				tyTagNm.sLastModified	:= DT_TO_STRING(tyLCSMngRcp_LCSProdRcpInfo.dtLastModified);
				tyTagNm.sLastModified	:= RIGHT(tyTagNm.sLastModified , (LEN(tyTagNm.sLastModified) - 3));
		
			ELSE
				tyLCSMngRcp_LCSProdRcpInfo	:= tyTagNm.tyProdRcpInfo;
				
				tyLCSMngRcp_LCSProdRcpInfo.diWidthInUM2 := tyTagNm.tyProdRcpInfo.diWidthInUM; //Added
		
				sLastModifiedTemp	:= CONCAT('DT#' , tyTagNm.sLastModified);
				tyLCSMngRcp_LCSProdRcpInfo.dtLastModified	:= STRING_TO_DT(sLastModifiedTemp);
		
			END_IF
			
		ELSIF tyTagNm.eAct = LCSActUploadMultiProd THEN
			iLCSMngRcp_LCSIdxStat	:= tyTagNm.iIdxAct;
			
			tyTagNm.iIdxStat		:= p_iLCSMngRcp_PLCIdxAct;
		
			tyTagNm.tyProdRcpInfo	:= p_tyLCSMngRcp_PLCProdRcpInfo;
		
			tyTagNm.sLastModified	:= DT_TO_STRING(tyLCSMngRcp_LCSProdRcpInfo.dtLastModified);
			tyTagNm.sLastModified	:= RIGHT(tyTagNm.sLastModified , (LEN(tyTagNm.sLastModified) - 3));
		
		ELSE
			iLCSMngRcp_LCSIdxAct		:= tyTagNm.iIdxAct;
			tyLCSMngRcp_LCSProdRcpInfo	:= tyTagNm.tyProdRcpInfo;
			
			tyLCSMngRcp_LCSProdRcpInfo.diWidthInUM2 := tyTagNm.tyProdRcpInfo.diWidthInUM; //Added
		
			sLastModifiedTemp	:= CONCAT('DT#' , tyTagNm.sLastModified);
			tyLCSMngRcp_LCSProdRcpInfo.dtLastModified	:= STRING_TO_DT(sLastModifiedTemp);
		
			tyTagNm.iIdxStat	:= p_iLCSMngRcp_PLCIdxStat;
			
		END_IF
		
	ELSE
		
		eLCSLF_LCSAct		:= LCSActIdle;
		eLCSMngRcp_LCSAct	:= LCSActIdle;
		tyTagNm.eStat		:= LCSActIdle;
		tyTagNm.udiStatus	:= 65534;
		tyTagNm.sErrMsg		:= '';
		
	END_IF
					
END_ACTION
