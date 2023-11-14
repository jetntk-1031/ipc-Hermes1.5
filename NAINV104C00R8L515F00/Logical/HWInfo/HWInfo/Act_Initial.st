(** 2020-09-22 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbGetIPAddr.pDevice	:= ADR(p_sDevice);
	fbGetIPAddr.pIPAddr	:= ADR(sIPAddr);
	fbGetIPAddr.Len		:= SIZEOF(sIPAddr);
	fbGetIPAddr(enable := FALSE);
	
	fbGetSubnetMask.pDevice		:= ADR(p_sDevice);
	fbGetSubnetMask.pSubnetMask	:= ADR(sSubnetMask);
	fbGetSubnetMask.Len			:= SIZEOF(sSubnetMask);
	fbGetSubnetMask(enable := FALSE);
	
	fbGetMacAddr.pDevice	:= ADR(p_sDevice);
	fbGetMacAddr.pMacAddr	:= ADR(a_usiMacAddr);
	fbGetMacAddr.Len		:= SIZEOF(a_usiMacAddr);
	fbGetMacAddr(enable := FALSE);
	
	fbSetIPAddr.pDevice	:= ADR(p_sDevice);
	fbSetIPAddr.pIPAddr	:= ADR(p_sSetIPAddr);
	fbSetIPAddr.Option	:= cfgOPTION_NON_VOLATILE;
	fbSetIPAddr(enable := FALSE);
	
	fbSetSubnetMask.pDevice		:= ADR(p_sDevice);
	fbSetSubnetMask.pSubnetMask	:= ADR(p_sSetSubnetMask);
	fbSetSubnetMask.Option		:= cfgOPTION_NON_VOLATILE;
	fbSetSubnetMask(enable := FALSE);
	
	fbGetETHConfigMode.pDevice	:= ADR(p_sDevice);
	fbGetETHConfigMode(enable := FALSE);
	
	fbSetETHConfigMode.pDevice		:= ADR(p_sDevice);
	fbSetETHConfigMode.Option		:= cfgOPTION_NON_VOLATILE;
	fbSetETHConfigMode(enable := FALSE);
	
END_ACTION
