(** 2019-06-10 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_ProdRcpStat		:= ADR(eStat);
	p_ProdRcpStatus		:= ADR(eStatus);
	p_ProdRcpStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_ProdRcpAlmData	:= ADR(tyAlmData);
	
	//Output
	p_ProdRcpNmExist				:= ADR(bNmExist);
	p_ProdRcpNmNotExist				:= ADR(bNmNotExist);
	p_ProdRcpNmEmpty				:= ADR(bNmEmpty);
	p_ProdRcpListFull				:= ADR(bListFull);
	p_ProdRcpCurrList				:= ADR(a_tyCurrList);
	p_ProdRcpFilterList				:= ADR(a_tyFilterList);
	p_ProdRcpSortedList				:= ADR(a_tySortList);
	p_ProdRcpScanList				:= ADR(a_tyScanList);
	p_ProdRcpInfoOut				:= ADR(tyInfoOut);
	p_ProdRcpFileNotFound			:= ADR(bFileNotFound);
	p_ProdRcpCurrRcpAll				:= ADR(a_tyCurrRcp);
	p_ProdRcpCurrRcp0				:= ADR(a_tyCurrRcp[0]);
	p_ProdRcpCurrRcp0Nm				:= ADR(a_tyCurrRcp[0].sRcpNm);
	p_ProdRcpCurrRcp0Width			:= ADR(a_tyCurrRcp[0].diWidthInUM);
	p_ProdRcpCurrRcp0McMod			:= ADR(a_tyCurrRcp[0].usiMcMod);
	p_ProdRcpCurrRcp0FlippedBrd		:= ADR(a_tyCurrRcp[0].usiFlippedBrd);
	p_ProdRcpCurrRcp0MatchCode		:= ADR(a_tyCurrRcp[0].sMatchCode);
	p_ProdRcpCurrRcp0DisplayInfo	:= ADR(a_tyCurrRcp[0].sDisplayInfo);
	p_ProdRcpCurrRcp0LastModified	:= ADR(a_tyCurrRcp[0].dtLastModified);
	p_ProdRcpCurrRcp0Width2			:= ADR(a_tyCurrRcp[0].diWidthInUM2);
	
	p_ProdRcpCurrRcp1				:= ADR(a_tyCurrRcp[1]);
	p_ProdRcpCurrRcp1Nm				:= ADR(a_tyCurrRcp[1].sRcpNm);
	p_ProdRcpCurrRcp1Width			:= ADR(a_tyCurrRcp[1].diWidthInUM);
	p_ProdRcpCurrRcp1McMod			:= ADR(a_tyCurrRcp[1].usiMcMod);
	p_ProdRcpCurrRcp1FlippedBrd		:= ADR(a_tyCurrRcp[1].usiFlippedBrd);
	p_ProdRcpCurrRcp1MatchCode		:= ADR(a_tyCurrRcp[1].sMatchCode);
	p_ProdRcpCurrRcp1DisplayInfo	:= ADR(a_tyCurrRcp[1].sDisplayInfo);
	p_ProdRcpCurrRcp1LastModified	:= ADR(a_tyCurrRcp[1].dtLastModified);
	p_ProdRcpCurrRcp1Width2			:= ADR(a_tyCurrRcp[1].diWidthInUM2);
	
	p_ProdRcpCurrRcp2				:= ADR(a_tyCurrRcp[2]);
	p_ProdRcpCurrRcp2Nm				:= ADR(a_tyCurrRcp[2].sRcpNm);
	p_ProdRcpCurrRcp2Width			:= ADR(a_tyCurrRcp[2].diWidthInUM);
	p_ProdRcpCurrRcp2McMod			:= ADR(a_tyCurrRcp[2].usiMcMod);
	p_ProdRcpCurrRcp2FlippedBrd		:= ADR(a_tyCurrRcp[2].usiFlippedBrd);
	p_ProdRcpCurrRcp2MatchCode		:= ADR(a_tyCurrRcp[2].sMatchCode);
	p_ProdRcpCurrRcp2DisplayInfo	:= ADR(a_tyCurrRcp[2].sDisplayInfo);
	p_ProdRcpCurrRcp2LastModified	:= ADR(a_tyCurrRcp[2].dtLastModified);
	p_ProdRcpCurrRcp2Width2			:= ADR(a_tyCurrRcp[2].diWidthInUM2);
	
	p_ProdRcpCurrRcp3				:= ADR(a_tyCurrRcp[3]);
	p_ProdRcpCurrRcp3Nm				:= ADR(a_tyCurrRcp[3].sRcpNm);
	p_ProdRcpCurrRcp3Width			:= ADR(a_tyCurrRcp[3].diWidthInUM);
	p_ProdRcpCurrRcp3McMod			:= ADR(a_tyCurrRcp[3].usiMcMod);
	p_ProdRcpCurrRcp3FlippedBrd		:= ADR(a_tyCurrRcp[3].usiFlippedBrd);
	p_ProdRcpCurrRcp3MatchCode		:= ADR(a_tyCurrRcp[3].sMatchCode);
	p_ProdRcpCurrRcp3DisplayInfo	:= ADR(a_tyCurrRcp[3].sDisplayInfo);
	p_ProdRcpCurrRcp3LastModified	:= ADR(a_tyCurrRcp[3].dtLastModified);
	p_ProdRcpCurrRcp3Width2			:= ADR(a_tyCurrRcp[3].diWidthInUM2);
	
	p_ProdRcpCurrRcp4				:= ADR(a_tyCurrRcp[4]);
	p_ProdRcpCurrRcp4Nm				:= ADR(a_tyCurrRcp[4].sRcpNm);
	p_ProdRcpCurrRcp4Width			:= ADR(a_tyCurrRcp[4].diWidthInUM);
	p_ProdRcpCurrRcp4McMod			:= ADR(a_tyCurrRcp[4].usiMcMod);
	p_ProdRcpCurrRcp4FlippedBrd		:= ADR(a_tyCurrRcp[4].usiFlippedBrd);
	p_ProdRcpCurrRcp4MatchCode		:= ADR(a_tyCurrRcp[4].sMatchCode);
	p_ProdRcpCurrRcp4DisplayInfo	:= ADR(a_tyCurrRcp[4].sDisplayInfo);
	p_ProdRcpCurrRcp4LastModified	:= ADR(a_tyCurrRcp[4].dtLastModified);
	p_ProdRcpCurrRcp4Width2			:= ADR(a_tyCurrRcp[4].diWidthInUM2);
	
	p_ProdRcpCurrRcp5				:= ADR(a_tyCurrRcp[5]);
	p_ProdRcpCurrRcp5Nm				:= ADR(a_tyCurrRcp[5].sRcpNm);
	p_ProdRcpCurrRcp5Width			:= ADR(a_tyCurrRcp[5].diWidthInUM);
	p_ProdRcpCurrRcp5McMod			:= ADR(a_tyCurrRcp[5].usiMcMod);
	p_ProdRcpCurrRcp5FlippedBrd		:= ADR(a_tyCurrRcp[5].usiFlippedBrd);
	p_ProdRcpCurrRcp5MatchCode		:= ADR(a_tyCurrRcp[5].sMatchCode);
	p_ProdRcpCurrRcp5DisplayInfo	:= ADR(a_tyCurrRcp[5].sDisplayInfo);
	p_ProdRcpCurrRcp5LastModified	:= ADR(a_tyCurrRcp[5].dtLastModified);
	p_ProdRcpCurrRcp5Width2			:= ADR(a_tyCurrRcp[5].diWidthInUM2);
	
	(* Always Change If Project Change *)
	
END_PROGRAM