
TYPE
	tyPneuFullSenChkInternal : 	STRUCT 
		fbPneuSenOnChkWithSafety : fbPneuSenOnChkWithSafety;
		fbPneuNoSenDlyWithSafety : {REDUND_UNREPLICABLE} fbPneuNoSenDlyWithSafety;
		fbPneuSenOffChk : fbPneuSenOffChk;
	END_STRUCT;
	tyPneuSafetyChkInternal : 	STRUCT 
		fbPneuNoSenDly : fbPneuNoSenDly;
		fbPneuSenOnChk : fbPneuSenOnChk;
	END_STRUCT;
	tyPneuSenChkInternal : 	STRUCT  (*Local Variables*)
		fbChkTm : TON; (*Check Timer*)
	END_STRUCT;
END_TYPE
