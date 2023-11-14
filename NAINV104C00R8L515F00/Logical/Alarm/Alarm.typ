(*2019-03-25*)
(**)

TYPE
	eAlarmAction : 
		(
		AlarmActIdle,
		AlarmActCreateDir,
		AlarmActDeleteOldLog,
		AlarmActReadHistory,
		AlarmActWriteHistory,
		AlarmActAppendLog,
		AlarmActAppendLogWriteHistory,
		AlarmActResetHistory,
		AlarmActBGStartLog,
		AlarmActBGStopLog
		);
END_TYPE

(**)

TYPE
	tyAlarmCurr : 	STRUCT 
		eSeverity : eAlmSeverity;
		sMsg : STRING[300];
		bAlm : BOOL;
		bWarning : BOOL;
		udiErrorCode : UDINT;
		sProgNm : STRING[15];
		sDT : STRING[80];
		udiModErrCode : UDINT;
	END_STRUCT;
	tyHistory : 	STRUCT 
		sDT : STRING[80];
		sProgNm : STRING[15];
		udiModErrCode : UDINT;
		udiErrorCode : UDINT;
	END_STRUCT;
END_TYPE
