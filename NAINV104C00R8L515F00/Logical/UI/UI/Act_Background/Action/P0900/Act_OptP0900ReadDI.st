
ACTION Act_OptP0900ReadDI:

	tyP0900GenIn.tyGenIn.tyBtnSafety.bValue		:= p_tyDI.bSafetyRlySig;
	tyP0900GenIn.tyGenIn.tyBtnEStop.bValue		:= p_tyDI.bEStopSig;
	tyP0900GenIn.tyGenIn.tyBtnCoverSW.bValue	:= p_tyDI.bCoverSWSig;
	
	tyP0900GenIn.tyGenIn.tyBtnThermalPrtSig.bValue	:= p_tyDI.bThermalPrtSig;
	tyP0900GenIn.tyGenIn.tyBtnUSWidthChkSen.bValue	:= p_tyDI.bUSWidthChkSen;
	tyP0900GenIn.tyGenIn.tyBtnDSWidthChkSen.bValue	:= p_tyDI.bDSWidthChkSen;
	
	// ADD
	tyP0900GenIn.tyGenIn.tyBtnSafetySigFromDS.bValue  := p_tyDI.bSafetySigFromDS;
	tyP0900GenIn.tyGenIn.tyBtnSafetySigFromUS.bValue  := p_tyDI.bSafetySigFromUS;
	tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromDS.bValue   := p_tyDI.bUnlockCoverSigFromDS;
	tyP0900GenIn.tyGenIn.tyBtnUlkCoverFromUS.bValue   := p_tyDI.bUnlockCoverSigFromUS;
	tyP0900GenIn.tyGenIn.tyBtnUnlkCovPB.bValue        := p_tyDI.bCoverUnlockPB1;
	tyP0900GenIn.tyGenIn.tyBtnTopCovSwSIg.bValue      :=  p_tyDI.bCoverSWSig2;
END_ACTION
