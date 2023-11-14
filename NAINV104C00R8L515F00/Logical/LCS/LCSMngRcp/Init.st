(** 2019-04-24 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_LCSMngRcpStat		:= ADR(eStat);
	p_LCSMngRcpStatus	:= ADR(eStatus);
	p_LCSMngRcpStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_LCSMngRcpAlmData	:= ADR(tyAlmData);
	
	//Output
	p_LCSMngRcp_PLCStatus		:= ADR(udiPLCStatus);
	p_LCSMngRcp_PLCIdxAct		:= ADR(iPLCIdxAct);
	p_LCSMngRcp_PLCIdxStat		:= ADR(iPLCIdxStat);
	p_LCSMngRcp_PLCProdRcpInfo	:= ADR(tyPLCProdRcpInfo);
	p_LCSMngRcpProdRcpAct		:= ADR(eProdRcpAct);
	p_LCSMngRcpProdRcpInfoIn	:= ADR(tyProdRcpInfoIn);
	p_LCSMngRcpChkLmt			:= ADR(bChkLmt);
	
	(* Always Change If Project Change *)
	
END_PROGRAM