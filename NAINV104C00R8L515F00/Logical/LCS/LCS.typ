(*2019-07-10*)
(**)
(*Action*)

TYPE
	eLCSAction : 
		(
		LCSActIdle := 0,
		LCSActAddProd := 1,
		LCSActAddMultiProd := 2,
		LCSActEditProd := 3,
		LCSActEditMultiProd := 4,
		LCSActOverWriteProd := 5,
		LCSActOverWriteMultiProd := 6,
		LCSActDelProd := 7,
		LCSActDelMultiProd := 8,
		LCSActRunProd := 9,
		LCSActUploadProd := 10,
		LCSActUploadMultiProd := 11
		);
END_TYPE

(**)
(*Data*)

TYPE
	eLCSOpsStatus : 
		(
		LCSOpsStatusAuto,
		LCSOpsStatusManual,
		LCSOpsStatusStop,
		LCSOpsStatusError,
		LCSOpsStatusWarning
		);
	tyLCSTagNm : 	STRUCT 
		eAct : eLCSAction;
		eStat : eLCSAction;
		udiStatus : UDINT;
		sErrMsg : STRING[200];
		iIdxAct : INT;
		iIdxStat : INT;
		tyProdRcpInfo : tyProdRcpParam;
		tyCurrProdRcpParam : tyProdRcpParam;
		sCurrRcpNm : STRING[30];
		rCurrWidth : REAL;
		eCurrOpsStatus : eLCSOpsStatus;
		usiBrdStatus : USINT;
		usiMode : USINT;
		sLastModified : STRING[80];
		bMngRcpEn : BOOL;
		bLiveData : BOOL;
		bLFEn : BOOL;
		sMcAlmMsg : ARRAY[1..c_udiAlarmCurrMax]OF STRING[255];
		bSectionLeaderEn : BOOL;
	END_STRUCT;
END_TYPE
