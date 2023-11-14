(**)
(*Alarm Log*)

TYPE
	tyAlmLogFullMsgInternal : 	STRUCT  (*Local Variables*)
		sAlmTm : STRING[20]; (*Alarm Time*)
		sErrCode : STRING[80]; (*Error Code*)
	END_STRUCT;
	tyAlmDispMsgInternal : 	STRUCT  (*Local Variables*)
		sAlmTm : STRING[80]; (*Alarm Time*)
		sErrCode : STRING[80]; (*Error Code*)
	END_STRUCT;
	tyBrdLogFullMsgInternal : 	STRUCT  (*Local Variables*)
		sBrdTm : STRING[20]; (*Board Time*)
	END_STRUCT;
	tyEventLogFullMsgInternal : 	STRUCT  (*Local Variables*)
		sEventTm : STRING[20]; (*Event Time*)
	END_STRUCT;
END_TYPE
