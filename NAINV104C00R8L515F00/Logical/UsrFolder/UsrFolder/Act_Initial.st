(** 2019-05-09 **)
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
	fbDirCreate3.sDirName	:= 'Log';
	fbDirCreate3(bEn := FALSE);
	
	fbDirCreate4.sDevice	:= 'User';
	fbDirCreate4.sDirName	:= 'LCS';
	fbDirCreate4(bEn := FALSE);
	
END_ACTION
