(** 2019-04-08 **)
ACTION Act_Link:
	
	//Receive Alive Time
	p_tyParam.tRcvAlive	:= p_tyParam.tSndAlive * 2;
	
	//Ready Send //need to uncomment back
	p_bRdySnd ACCESS p_OpsInvertStepDSCommTmr;
	
	
	//boardforecast
	bNewProduct := EDGEPOS(p_sRecipeNm <> p_sRecipeZone1Nm) AND p_bLinkStartupRun = FALSE;
	bNewWidth := EDGEPOS(p_diWidthInUM <> p_diWidthZone1InUM) AND p_bLinkStartupRun = FALSE;
	bAllZoneEmpty := p_bLinkDIRightSen = FALSE AND p_bLinkDILeftSen = FALSE AND p_bLinkConvHvBrd = FALSE;
	

	
	//Transfer Finished
	IF NOT(p_bHermesSwitchtoRvrseTransport) THEN //(p_eLinkConvDir = ConvDirLToR) OR (p_eLinkConvDir = ConvDirRToR) THEN
		IF EDGENEG(p_bLinkDIRightSen) THEN
			p_bSndCompl	:= TRUE;
		END_IF
		bFirstZoneHaveBoard :=  p_bLinkDILeftSen= TRUE;
		bFirstZoneEndSen :=  p_bLinkDIRightSen = FALSE;
	ELSE
		IF EDGENEG(p_bLinkDILeftSen) THEN
			p_bSndCompl	:= TRUE;
		END_IF
		bFirstZoneHaveBoard := p_bLinkDIRightSen = TRUE;
		bFirstZoneEndSen :=  p_bLinkDILeftSen= FALSE;
	END_IF
	
	//Good Bad Board
	IF p_bLinkConvGdBrd = TRUE THEN
		p_eFailedBoard	:= HermesGoodBoard;
	ELSE
		p_eFailedBoard	:= HermesFailedBoard;
	END_IF
	
	//Flip Board
//	IF p_tyUSHermestyBoardAvailable.tyData.eFlippedBoard = 2 THEN
//		p_eFlippedBoard := 1;
//	
//	ELSIF p_tyUSHermestyBoardAvailable.tyData.eFlippedBoard = 1 THEN
//		p_eFlippedBoard := 2;
//	
//	ELSE
//		p_eFlippedBoard := 0;
//	END_IF
	
	
	
	//first zone have board
	//Machine First Zone have board
	//p_bFirstZoneHaveBoard := (p_bUSHermesStopTransport AND p_bOpsGConvHvBrd) OR (p_bOpsGConvHvBrd AND p_bUSHermesTransporting = FALSE); //Zone 1 have board, either PCB_In from upstream Or Manually load PCB at Zone 1
	
	
END_ACTION
