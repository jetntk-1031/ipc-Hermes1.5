(** 2019-06-12 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_LCSLFStat		:= ADR(eStat);
	p_LCSLFStatus	:= ADR(eStatus);
	p_LCSLFStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_LCSLFAlmData	:= ADR(tyAlmData);
	p_LCSLFInfoData	:= ADR(tyInfoData);
	
	//Output
	p_LCSLF_PLCStatus		:= ADR(udiPLCStatus);
	p_LCSLFChkLmt			:= ADR(bChkLmt);
	p_LCSLFAccDataMnl		:= ADR(bAccDataMnl);
	p_LCSLFUpdtDataMnl		:= ADR(bUpdtDataMnl);
	p_LCSLFUpdtProdRcpNm	:= ADR(sUpdtProdRcpNm);
	p_LCSLFUpdtProdWidth	:= ADR(diUpdtProdWidth);
	
	(* Always Change If Project Change *)
	
END_PROGRAM