(*Library Status*)

TYPE
	eFBStatus : 
		( (*Function Block Status*)
		Idle, (*Library In Idle Status*)
		Done, (*Library In Done Status*)
		Busy, (*Library In Busy Status*)
		Error (*Library In Error Status*)
		);
END_TYPE

(**)
(*Alarm*)

TYPE
	tyAlmTxt : 	STRUCT 
		sAlmText : STRING[200]; (*Alarm Text*)
		sRcyText : STRING[200]; (*Recovery Text*)
	END_STRUCT;
	tyAlmDat : 	STRUCT 
		udiCode : UDINT; (*Alarm Code*)
		eSeverity : eAlmSeverity; (*Alarm Severity*)
		sProgNm : STRING[15]; (*Program Title Name*)
		sAlmMsg : STRING[200]; (*Alarm Message*)
		sRcyMsg : STRING[200]; (*Recovery Message*)
		udiRunTime : UDINT; (*Run Time*)
		udiModuleNum : UDINT;
		bAlm : BOOL;
		bWarning : BOOL;
	END_STRUCT;
	eAlmSeverity : 
		(
		AlmSeverityNA, (*Error*)
		AlmSeverityError, (*Error*)
		AlmSeverityWarning, (*Warning*)
		AlmSeverityInfo (*Information*)
		);
	tyAlmInputProps : 	STRUCT 
		uiModuleOrder : UINT;
	END_STRUCT;
END_TYPE

(*Others*)

TYPE
	tyValidCharChkrInternal : {REDUND_UNREPLICABLE} 	STRUCT  (*Local Variables*)
		sValidChar : {REDUND_UNREPLICABLE} STRING[1]; (*Valid Characters For Checking*)
		sCharChk : {REDUND_UNREPLICABLE} STRING[1]; (*Character On Checking*)
		i : {REDUND_UNREPLICABLE} INT;
		j : {REDUND_UNREPLICABLE} INT;
	END_STRUCT;
	tyInvalidCharChkrInternal : {REDUND_UNREPLICABLE} 	STRUCT  (*Local Variables*)
		sInvalidChar : {REDUND_UNREPLICABLE} STRING[1]; (*Invalid Characters For Checking*)
		sCharChk : {REDUND_UNREPLICABLE} STRING[1]; (*Character On Checking*)
		i : {REDUND_UNREPLICABLE} INT;
		j : {REDUND_UNREPLICABLE} INT;
	END_STRUCT;
	tyCheckDuplicateInternal : {REDUND_UNREPLICABLE} 	STRUCT  (*Local Variables*)
		i : {REDUND_UNREPLICABLE} USINT;
		j : {REDUND_UNREPLICABLE} USINT;
		usiCnt : {REDUND_UNREPLICABLE} USINT; (*Counter*)
	END_STRUCT;
	tyStringSearchInternal : {REDUND_UNREPLICABLE} 	STRUCT  (*Local Variables*)
		i : {REDUND_UNREPLICABLE} UDINT;
		usiZero : {REDUND_UNREPLICABLE} USINT; (*Counter*)
	END_STRUCT;
	tyCheckExistInternal : {REDUND_UNREPLICABLE} 	STRUCT  (*Local Variables*)
		i : {REDUND_UNREPLICABLE} USINT;
		j : {REDUND_UNREPLICABLE} USINT;
		usiCnt : {REDUND_UNREPLICABLE} USINT; (*Counter*)
	END_STRUCT;
	tySenFltrInternal : {REDUND_UNREPLICABLE} 	STRUCT  (*Local Variables*)
		fbSigFltrTm : {REDUND_UNREPLICABLE} TON; (*Signal Filter Time*)
	END_STRUCT;
	tyIPValidInternal : 	STRUCT  (*Local Variables*)
		i : INT;
		iCnt : INT; (*Counter*)
		a_iDotPos : ARRAY[1..3]OF INT; (*IP Address Dot Position*)
		a_sIPPart : ARRAY[1..4]OF STRING[3]; (*IP Address Part in String*)
		a_iIPPart : ARRAY[1..4]OF INT; (*IP Address Part in Integer*)
		sMismatchChar : STRING[1]; (*Mismatch Character*)
	END_STRUCT;
END_TYPE
