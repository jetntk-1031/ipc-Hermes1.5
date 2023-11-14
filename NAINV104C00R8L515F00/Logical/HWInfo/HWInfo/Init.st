(** 2020-09-22 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_HWInfoStat	:= ADR(eStat);
	p_HWInfoStatus	:= ADR(eStatus);
	p_HWInfoStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_HWInfoAlmData	:= ADR(tyAlmData);
	
	//Output
	p_HWInfoIPAddr		:= ADR(sIPAddr);
	p_HWInfoSubnetMask	:= ADR(sSubnetMask);
	p_HWInfoMacAddr		:= ADR(a_usiMacAddr);
	p_HWInfoEthMode		:= ADR(udiConfigMode);
	
	(* Always Change If Project Change *)
	
END_PROGRAM