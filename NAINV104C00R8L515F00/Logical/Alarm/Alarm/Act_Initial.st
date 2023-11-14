(** 2019-01-03 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbDirCreate1.sDevice	:= 'F';
	fbDirCreate1.sDirName	:= 'User';
	fbDirCreate1(bEn := FALSE);
	
	fbDirCreate2.sDevice	:= 'User';
	fbDirCreate2.sDirName	:= 'Alarm';
	fbDirCreate2(bEn := FALSE);
	
	fbFileAppend1.sDevice	:= 'Alarm';
	fbFileAppend1(bEn := FALSE);
	
	fbFileOldDel1.sDevice	:= 'Alarm';
	fbFileOldDel1.sPath		:= '';
	fbFileOldDel1.sKeyword	:= 'ALARM_';
	fbFileOldDel1(bEn := FALSE);
	
	fbFileRead1.sDevice		:= 'Alarm';
	fbFileRead1.sFile		:= 'History.dat';
	fbFileRead1.udiOffset	:= 0;
	fbFileRead1.p_Dest		:= ADR(a_tyHistoryList);
	fbFileRead1.udiLen		:= SIZEOF(a_tyHistoryList);
	fbFileRead1(bEn := FALSE);
	
	fbFileWrite1.sDevice	:= 'Alarm';
	fbFileWrite1.sFile		:= 'History.dat';
	fbFileWrite1.udiOffset	:= 0;
	fbFileWrite1.p_Src		:= ADR(a_tyHistoryList);
	fbFileWrite1.udiLen		:= SIZEOF(a_tyHistoryList);
	fbFileWrite1.udiOption	:= 0;
	fbFileWrite1(bEn := FALSE);
	
END_ACTION
