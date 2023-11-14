(** 2019-04-28 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbDirCreate1.sDevice	:= 'F';
	fbDirCreate1.sDirName	:= 'User';
	fbDirCreate1(bEn := FALSE);
	
	fbDirCreate2.sDevice	:= 'User';
	fbDirCreate2.sDirName	:= 'ProductRecipeXml';
	fbDirCreate2(bEn := FALSE);
	
	tyMpProdRcpMpLink	:= gRecipeXml;
	
	fbMpRecipeRegPar.MpLink	:= ADR(p_tyMpProdRcpMpLink);
	fbMpRecipeRegPar.PVName	:= ADR(p_sPVName);
	fbMpRecipeRegPar(Enable := FALSE);
	
	fbMpRecipeXml.MpLink		:= ADR(p_tyMpProdRcpMpLink);
	fbMpRecipeXml.DeviceName	:= ADR('MpProdRcp');
	fbMpRecipeXml.FileName		:= ADR(p_sFileName);
	fbMpRecipeXml(Enable := FALSE);
	
END_ACTION
