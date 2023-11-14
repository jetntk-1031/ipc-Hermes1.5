
FUNCTION fLogRemoveOldMsg : BOOL (*Remove Old Log Message*)
	VAR_INPUT
		udiStartIdx : UDINT; (*Start Row Index To Remove (Start From 0)*)
		udiEndIdx : UDINT; (*End Row Index To Remove (Start From 0)*)
		p_AllMsg : UDINT; (*Pointer To All Message*)
		udiSingleMsgSize : UDINT; (*Single Message Size*)
		udiTotalMsgNo : UDINT; (*Total Number Of Message*)
	END_VAR
END_FUNCTION

FUNCTION fLogAlmFullMsg : BOOL (*Alarm Log Full Message*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sAlmLogFullMsg : REFERENCE TO STRING[300]; (*Pointer To Alarm Log Full Message*)
		dtDateTime : DATE_AND_TIME; (*Current Date And Time*)
		sAlmStat : STRING[15]; (*Alarm State*)
		udiErrID : UDINT; (*Error ID*)
		sErrMsg : STRING[220]; (*Error Message*)
	END_VAR
	VAR
		tyInternal : tyAlmLogFullMsgInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fLogAlmDispMsg : BOOL (*Alarm Log Full Message*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sAlmDispMsg : REFERENCE TO STRING[300]; (*Pointer To Alarm Log Full Message*)
		dtDateTime : DATE_AND_TIME; (*Current Date And Time*)
		sPrefix : STRING[10]; (*Prefix String*)
		udiErrID : UDINT; (*Error ID*)
		sErrMsg : STRING[200]; (*Error Message*)
	END_VAR
	VAR
		tyInternal : tyAlmDispMsgInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fLogBrdFullMsg : BOOL (*Board Info Log Full Message*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sBrdLogFullMsg : REFERENCE TO STRING[200]; (*Pointer To Board Info Log Full Message*)
		dtDateTime : DATE_AND_TIME; (*Current Date And Time*)
		sProdID : STRING[30]; (*Panel ID*)
		sBrdID : STRING[30]; (*Board ID*)
		bGdBrd : BOOL; (*Good Board / Bad Board*)
		sUsrNm : STRING[30]; (*User Name*)
	END_VAR
	VAR
		tyInternal : tyBrdLogFullMsgInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fLogEventFullMsg : BOOL (*Board Info Log Full Message*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sEventLogFullMsg : REFERENCE TO STRING[200]; (*Pointer To Board Info Log Full Message*)
		dtDateTime : DATE_AND_TIME; (*Current Date And Time*)
		sUsrNm : STRING[30]; (*User Name*)
		sEvent : STRING[120]; (*Event Info*)
	END_VAR
	VAR
		tyInternal : tyEventLogFullMsgInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fLogDTConvert : BOOL (*DT Convert To String*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sDTOut : REFERENCE TO STRING[80]; (*Output - DT String*)
		dtIn : DATE_AND_TIME; (*Date Time Input*)
	END_VAR
END_FUNCTION
