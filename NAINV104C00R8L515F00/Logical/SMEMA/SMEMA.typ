(*2018-12-13*)
(**)
(*Action*)

TYPE
	eSMEMAAction : 
		(
		SMEMAActIdle,
		SMEMAActRun,
		SMEMAActSetSig,
		SMEMAActSetStatSig,
		SMEMAActRstSig,
		SMEMAActRstStatSig,
		SMEMAActSetAllSig,
		SMEMAActRstAllSig
		);
END_TYPE

(**)

TYPE
	tySMEMAParam : 	STRUCT 
		eSelection : eSMEMASelection;
		bStatSigSetGd : BOOL;
	END_STRUCT;
	eSMEMASelection : 
		(
		SMEMASelStandard,
		SMEMASelIPC9851,
		SMEMASelIPC9851Ext
		);
END_TYPE
