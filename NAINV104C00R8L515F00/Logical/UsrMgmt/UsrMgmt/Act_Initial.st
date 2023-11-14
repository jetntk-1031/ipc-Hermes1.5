(** 2019-05-04 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbDirCreate1.sDevice	:= 'F';
	fbDirCreate1.sDirName	:= 'User';
	fbDirCreate1(bEn := FALSE);
	
	fbDirCreate2.sDevice	:= 'F';
	fbDirCreate2.sDirName	:= 'Private';
	fbDirCreate2(bEn := FALSE);
	
	fbDirCreate3.sDevice	:= 'User';
	fbDirCreate3.sDirName	:= 'UserMgmt';
	fbDirCreate3(bEn := FALSE);
	
	fbFileRead1.sDevice			:= 'CustomerUser';
	fbFileRead1.sFile			:= 'User.dat';
	fbFileRead1.udiOffset		:= 0;
	fbFileRead1.p_Dest			:= ADR(tyFullData);
	fbFileRead1.udiLen			:= SIZEOF(tyFullData);
	fbFileRead1.usiEncryptCode	:= 130;
	fbFileRead1(bEn := FALSE);
	
	fbFileWrite1.sDevice		:= 'CustomerUser';
	fbFileWrite1.sFile			:= 'User.dat';
	fbFileWrite1.udiOffset		:= 0;
	fbFileWrite1.p_Src			:= ADR(tyFullDataTemp);
	fbFileWrite1.udiLen			:= SIZEOF(tyFullDataTemp);
	fbFileWrite1.udiOption		:= 0;
	fbFileWrite1.usiEncryptCode	:= 130;
	fbFileWrite1(bEn := FALSE);
	
END_ACTION
