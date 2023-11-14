
TYPE
	eSMEMAStat : 
		( (*State*)
		SMEMAStatOppNotRdyNCurrNotRdy, (*Opposite Not Ready & Current Machine Not Ready*)
		SMEMAStatOppRdyNCurrNotRdy, (*Opposite Ready & Current Machine Not Ready*)
		SMEMAStatOppNotRdyNCurrRdy, (*Opposite Not Ready & Current Machine Ready*)
		SMEMAStatOppRdyNCurrRdy, (*Opposite Ready & Current Machine Ready*)
		SMEMAStatTransportStart, (*Transport Start*)
		SMEMAStatTransportIdle, (*Transport Idle*)
		SMEMAStatTransporting, (*Transporting*)
		SMEMAStatOppTransportFinished, (*Opposite Transport Finished*)
		SMEMAStatCurrTransportFinished, (*Current Machine Transport Finished*)
		SMEMAStatTransportDone (*Transport Done*)
		);
	tySMEMAUSInternal : 	STRUCT  (*Local Variables*)
		usiStep : USINT;
		fbSMEMABrdSeq : fbSMEMABrdSeq;
		fbSMEMABrdSeq_OppFirst : fbSMEMABrdSeq_OppFirst;
		fbSMEMATransportIdle : fbSMEMATransportIdle;
		fbSMEMATransporting : fbSMEMATransporting;
		fbDlyTM : TON;
	END_STRUCT;
	tySMEMADSInternal : 	STRUCT  (*Local Variables*)
		usiStep : USINT;
		fbSMEMABrdSeq : fbSMEMABrdSeq;
		fbSMEMABrdSeq_OppFirst : fbSMEMABrdSeq_OppFirst;
		fbSMEMATransporting1 : fbSMEMATransporting1;
	END_STRUCT;
	tySMEMABrdSeqInternal : 	STRUCT  (*Local Variables*)
		eStat : eSMEMAStat; (*State*)
	END_STRUCT;
	tySMEMATransportIdleInternal : 	STRUCT  (*Local Variables*)
		eStat : eSMEMAStat; (*State*)
		fbTO : TON;
	END_STRUCT;
	tySMEMATransportingInternal : 	STRUCT  (*Local Variables*)
		eStat : eSMEMAStat; (*State*)
		fbTO : TON;
		fbRstDlyTm : TON;
	END_STRUCT;
	tySMEMASimpleInternal : 	STRUCT  (*Local Variables*)
		eStat : eSMEMAStat; (*State*)
		fbTO : TON;
	END_STRUCT;
	tySMEMASigInChkInternal : 	STRUCT  (*Local Variables*)
		bSigInValid : BOOL; (*Input Signal Valid*)
		bNomSigOld : BOOL; (*Normal Input Signal Old*)
		bStatSigOld : BOOL; (*State Input Signal Old*)
		fbSigInChkTm : TON; (*Signal In Check Time*)
	END_STRUCT;
END_TYPE
