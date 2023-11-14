
TYPE
	tyBffrSetFullInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		dj : DINT;
		diPitchCntr : DINT;
		dtTmNow : DATE_AND_TIME; (*Time Now*)
		diMinSlt : DINT;
		diMaxSlt : DINT;
	END_STRUCT;
	tyBffrSetMtyInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		dj : DINT;
		diPitchCntr : DINT;
		diMinSlt : DINT;
		diMaxSlt : DINT;
	END_STRUCT;
	tyBffrLoadInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		bSltFull : BOOL; (*Slot is Full of Board*)
	END_STRUCT;
	tyBffrUnloadInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		iLastProdCntr : INT;
	END_STRUCT;
	tyDispBffrInternal : 	STRUCT  (*Local Variables*)
		dtSltTm : DATE_AND_TIME; (*Board Enter Slot Time*)
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		di : DINT;
		diCnt : DINT; (*Counter*)
		diDispIdx : DINT; (*Display Index*)
		dj : DINT;
		sMainSltIdx : STRING[80]; (*Main Slot Index in String*)
		sSubSltIdx : STRING[80]; (*Sub Slot Index in String*)
		tBrdStoreTm : TIME; (*Board Store In Buffer Time*)
		tRemainCoolTm : TIME; (*Remain Cool Time*)
	END_STRUCT;
	tyBffrNxtLoadInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		diDist : DINT;
		diLastLoadPos : DINT;
		diCurrSlt : DINT;
	END_STRUCT;
	tyBffrChkCoolBrdInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		dj : DINT;
	END_STRUCT;
	tyBffrNxtUnloadInternal : 	STRUCT  (*Local Variables*)
		dtTemp : DATE_AND_TIME; (*Temporary Date & Time*)
		di : DINT;
		dj : DINT;
	END_STRUCT;
	tyBffrStatInternal : 	STRUCT  (*Local Variables*)
		di : DINT;
		dj : DINT;
	END_STRUCT;
	tyBffrDTConvertInternal : 	STRUCT  (*Local Variables*)
		sDay : STRING[2]; (*Day in String*)
		sMonth : STRING[2]; (*Month in String*)
		sYear : STRING[4]; (*Year in String*)
		sTm : STRING[8]; (*Time in String*)
		sDT : STRING[80]; (*Date Time in String*)
	END_STRUCT;
END_TYPE

(**)
(*Others*)

TYPE
	tyBffrParam : 	STRUCT  (*Buffer Parameter*)
		bAscending : BOOL := TRUE; (*Ascending Order*)
		diMinSlt : DINT := 1; (*Smallest Slot Number in Buffer*)
		diMaxSlt : DINT := 50; (*Biggest Slot Number in Buffer*)
		diPitch : DINT := 1; (*Buffer Pitch*)
		diSltCap : DINT := 1; (*Slot Capacity*)
		diBffrTtlSlt : DINT := 50; (*Total Slot Available in Buffer*)
		a_bSkip : ARRAY[1..c_diBffrSize]OF BOOL := [60(FALSE)]; (*Slot To Skip*)
	END_STRUCT;
	tyBffrStat : 	STRUCT  (*Buffer Status*)
		bBffrFull : BOOL; (*Buffer Full*)
		bBffrMty : BOOL; (*Buffer Empty*)
		diTtlBrdCap : DINT; (*Total Board Capacity in Buffer*)
		diTtlGdBrd : DINT; (*Total Good Board in Buffer*)
		diTtlBadBrd : DINT; (*Total Bad Board in Buffer*)
	END_STRUCT;
	tyBrdUnloadStat : 	STRUCT  (*Board Unload Status*)
		bGdSigBrd : BOOL; (*True = Good Board, False = Bad Board*)
		dtSltTm : DATE_AND_TIME; (*Board Loaded Time*)
		sProdNm : STRING[15];
		sBarcode1 : STRING[80];
		sBarcode2 : STRING[80];
	END_STRUCT;
END_TYPE

(**)
(*Buffer*)

TYPE
	tyBffr : 	STRUCT  (*Buffer, Bottom is Smallest Slot Value & Top is Biggest Slot Value (If There Is Any Different In Physical Magazine, Programmer Need to Create Program To Convert It.)*)
		sName : STRING[15];
		a_tyBffrDat : ARRAY[1..c_diBffrSize]OF tyBffrDat; (*Array of Buffer Data*)
	END_STRUCT;
	tyBffrDat : 	STRUCT  (*Buffer Data*)
		bSltForBrd : BOOL; (*True = Slot for Board, False = Slot not for Board*)
		bBrdAvl : BOOL; (*True = Slot Have Board, False = Slot Empty*)
		bSltFull : BOOL; (*True = Slot Full, False = Slot Not Full*)
		bGdSigBrd : BOOL; (*True = Good Board, False = Bad Board*)
		bSkip : BOOL; (*Skip This Slot*)
		diSltCap : DINT; (*Slot Capacity*)
		diBrdQty : DINT; (*Board Quantity in Slot*)
		a_tySubBffrDat : ARRAY[1..c_diBffrSubSize]OF tySubBffrDat; (*Array of Sub Buffer Data, Outer Will be First Index & Inner Will be Last Index*)
	END_STRUCT;
	tySubBffrDat : 	STRUCT  (*Sub Buffer Data*)
		bSubForBrd : BOOL; (*True = Sub Slot for Board, False = Sub Slot not for Board*)
		bBrdAvl : BOOL; (*True = Sub Slot Have Board, False = Sub Slot Empty*)
		dtSltTm : DATE_AND_TIME; (*Board Loaded Time*)
		sProdNm : STRING[15];
		sBarcode1 : STRING[80];
		sBarcode2 : STRING[80];
	END_STRUCT;
END_TYPE

(**)
(*Display Buffer*)

TYPE
	tyDispBffr : 	STRUCT  (*Buffer Display in HMI*)
		diDispIdxSt : DINT; (*Start Index Display in HMI*)
		diDispIdxEnd : DINT; (*End Index Display in HMI*)
		a_tyDispBffrDat : ARRAY[1..c_diDispBffrSize]OF tyDispBffrDat; (*Array of Buffer Data Display in HMI*)
	END_STRUCT;
	tyDispBffrDat : 	STRUCT  (*Display Buffer Data*)
		sSltIdx : STRING[80]; (*Slot Index*)
		sSltTm : STRING[80]; (*Board Loaded Time*)
		sBrdStoreTm : STRING[10]; (*Board Store In Buffer Time*)
		sRemainCoolTm : STRING[10]; (*Remaining Cool Time*)
		dwColor : DWORD; (*Color For Good & Bad Board*)
	END_STRUCT;
END_TYPE
