
TYPE
	tyConvLongBrdInternal : 	STRUCT  (*Local Variables*)
		fbDlyTm : TON;
	END_STRUCT;
	tyConvMtrSenToSenInternal1 : 	STRUCT  (*Local Variables*)
		fbConvSenToSen : fbConvSenToSen;
		fbConvSenToSenBrk : fbConvSenToSenBrk2;
		fbFTrig : F_TRIG;
		fbMtrBrkOnDlyTm : TON;
		fbMtrDirOffDlyTm : TON;
		fbMtrSigOnDlyTm : TON;
		fbDlyTm : TON;
	END_STRUCT;
	tyConvMtrSenToSenInternal : 	STRUCT  (*Local Variables*)
		fbConvMtrOff : fbConvMtrOff;
		fbConvMtrOn : fbConvMtrOn;
		fbConvBrkOn : fbConvBrkOn;
		fbConvBrkOff : fbConvBrkOff;
		fbMtrDirOffDlyTm : TON;
		fbTO : TON;
	END_STRUCT;
	tyConvMtrCtrlInternal : 	STRUCT  (*Local Variables*)
		fbConvMtrOn : fbConvMtrOn;
		fbConvMtrOff1 : fbConvMtrOff;
		fbConvMtrOff : fbConvMtrOff;
		fbMtrChgDirDlyTm : TON;
		bConvLToRTemp : BOOL;
		bChangingDir : BOOL;
		bNotFirstMtrOn : BOOL;
	END_STRUCT;
	tyConvMtrOnOffInternal : 	STRUCT  (*Local Variables*)
		fbDlyTm : TON; (*Motor On Delay Timer*)
	END_STRUCT;
END_TYPE
