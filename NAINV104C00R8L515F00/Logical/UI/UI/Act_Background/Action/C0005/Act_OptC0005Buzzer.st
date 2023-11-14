
ACTION Act_OptC0005Buzzer: 

	IF tyCommon.tyMain.tyBtnMuteBuz.bRtCompl = TRUE THEN	
		tyCommon.tyMain.tyBtnMuteBuz.bRtCompl	:= FALSE;
		
		IF tyCommon.tyMain.tyBtnMuteBuz.bValue = TRUE THEN
			tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx	:= 2;
	
			bMuteBuz	:= TRUE;
		ELSE
			tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx	:= 1;
	
			bMuteBuz	:= FALSE;
		END_IF
		
	END_IF
	
	//Mute Buzzer
	IF EDGEPOS(p_bAlarmErr OR p_bAlarmWarning OR p_bAlarmInfo) (*AND NOT bUIManualMod)*) THEN
		tyCommon.tyMain.tyBtnMuteBuz.bValue				:= FALSE;
		tyCommon.tyMain.tyBtnMuteBuz.bRtLk				:= FALSE;
		tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx		:= 1;
		
		bMuteBuz	:= FALSE;
		
	ELSIF NOT(p_bAlarmErr OR p_bAlarmWarning OR p_bAlarmInfo) (*OR bUIManualMod*) THEN
		tyCommon.tyMain.tyBtnMuteBuz.bRtLk				:= TRUE;
		tyCommon.tyMain.tyBtnMuteBuz.usiBitmapIdx		:= 0;
		
		bMuteBuz	:= FALSE;
	END_IF
	
END_ACTION
