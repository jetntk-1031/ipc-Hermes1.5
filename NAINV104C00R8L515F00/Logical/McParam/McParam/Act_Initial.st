(** 2019-01-15 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbDirCreate1.sDevice	:= 'F';
	fbDirCreate1.sDirName	:= 'User';
	fbDirCreate1(bEn := FALSE);
	
	fbDirCreate2.sDevice	:= 'User';
	fbDirCreate2.sDirName	:= 'MachineParameter';
	fbDirCreate2(bEn := FALSE);
	
	fbFileRead1.sDevice			:= 'McParam';
	fbFileRead1.sFile			:= p_sFileName;
	fbFileRead1.udiOffset		:= 0;
	fbFileRead1.p_Dest			:= ADR(tyMcParamCurr);
	fbFileRead1.udiLen			:= SIZEOF(tyMcParamCurr);
	fbFileRead1(bEn := FALSE);
	
	fbFileWrite1.sDevice		:= 'McParam';
	fbFileWrite1.sFile			:= p_sFileName;
	fbFileWrite1.udiOffset		:= 0;
	fbFileWrite1.p_Src			:= ADR(p_tyMcParamWr);
	fbFileWrite1.udiLen			:= SIZEOF(p_tyMcParamWr);
	fbFileWrite1.udiOption		:= 0;
	fbFileWrite1(bEn := FALSE);
	
	fbFileWrite2.sDevice		:= 'McParam';
	fbFileWrite2.sFile			:= p_sFileName;
	fbFileWrite2.udiOffset		:= 0;
	fbFileWrite2.p_Src			:= ADR(tyMcParamTemp);
	fbFileWrite2.udiLen			:= SIZEOF(tyMcParamTemp);
	fbFileWrite2.udiOption		:= 0;
	fbFileWrite2(bEn := FALSE);
	
END_ACTION
