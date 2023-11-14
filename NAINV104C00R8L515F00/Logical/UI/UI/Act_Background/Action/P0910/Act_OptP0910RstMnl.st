
ACTION Act_OptP0910RstMnl:
	
	IF EDGEPOS((bUIManualMod = FALSE) OR (p_eTLBuzStatus = Error) OR (p_eRstErrStatus = Error)) THEN
		
		eTLBuzAct	:= TLBuzActIdle;
		
		tyP0910GenOut.tyGenOut.tyBtnTLGreen.bValue	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnTLAmber.bValue	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnTLWhite.bValue	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnTLRed.bValue	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnBuzzer.bValue	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnSafety.bValue	:= FALSE;

		// ADD
		tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bValue 	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bValue	:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bValue	:=FALSE;
		tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bValue		:= FALSE;
		tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bValue	:= FALSE;
	END_IF	
	
END_ACTION
