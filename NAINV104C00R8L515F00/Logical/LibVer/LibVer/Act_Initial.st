(** 2020-08-17 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbDirCreate1.sDevice	:= 'F';
	fbDirCreate1.sDirName	:= 'User';
	fbDirCreate1(bEn := FALSE);
	
	fbDirCreate2.sDevice	:= 'User';
	fbDirCreate2.sDirName	:= 'LibrariesVersion';
	fbDirCreate2(bEn := FALSE);
	
	fbFileRead1.sDevice		:= 'LibVer';
	fbFileRead1.sFile		:= 'LibrariesVersion.dat';
	fbFileRead1.udiOffset	:= 0;
	fbFileRead1.p_Dest		:= ADR(a_tyInfoOut);
	fbFileRead1.udiLen		:= SIZEOF(a_tyInfoOut);
	fbFileRead1(bEn := FALSE);
	
	fbFileWrite1.sDevice	:= 'LibVer';
	fbFileWrite1.sFile		:= 'LibrariesVersion.dat';
	fbFileWrite1.udiOffset	:= 0;
	fbFileWrite1.p_Src		:= ADR(pa_tyInfoIn);
	fbFileWrite1.udiLen		:= SIZEOF(pa_tyInfoIn);
	fbFileWrite1.udiOption	:= 0;
	fbFileWrite1(bEn := FALSE);
	
	fbChkLibVerFile(bEn := FALSE);
	
	fbChkLibVer.pa_bVerMismatch := ADR(a_bVerMismatch);
	fbChkLibVer(bEn := FALSE);
	
END_ACTION
