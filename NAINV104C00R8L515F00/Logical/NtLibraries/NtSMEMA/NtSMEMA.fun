
FUNCTION_BLOCK fbSMEMASimple (*SMEMA - Simple*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bOppRdy : {REDUND_UNREPLICABLE} BOOL; (*Opposite Ready*)
		bCurrRdy : {REDUND_UNREPLICABLE} BOOL; (*Current Machine Ready*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bSigOut : BOOL; (*Output - Output Signal*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMASimpleInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMAUS_9851 (*SMEMA - Upstream - IPCSMEMA9851*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bUSRdy : {REDUND_UNREPLICABLE} BOOL; (*Upstream Machine Ready*)
		bRdyRcv : {REDUND_UNREPLICABLE} BOOL; (*Machine Ready Receive*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		bInletSen : {REDUND_UNREPLICABLE} BOOL; (*Inlet Sensor*)
		bOutletSen : {REDUND_UNREPLICABLE} BOOL; (*Outlet Sensor*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
		tRstDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Signal Reset Delay Time*)
	END_VAR
	VAR_OUTPUT
		bTransporting : BOOL; (*Output - Transporting*)
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bSigToUS : BOOL; (*Signal To Upstream Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMAUSInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMAUS_Std (*SMEMA - Upstream - Standard*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bUSRdy : {REDUND_UNREPLICABLE} BOOL; (*Upstream Machine Ready*)
		bRdyRcv : {REDUND_UNREPLICABLE} BOOL; (*Machine Ready Receive*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		bInletSen : {REDUND_UNREPLICABLE} BOOL; (*Inlet Sensor*)
		bOutletSen : {REDUND_UNREPLICABLE} BOOL; (*Outlet Sensor*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
		tRstDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Signal Reset Delay Time*)
	END_VAR
	VAR_OUTPUT
		bTransporting : BOOL; (*Output - Transporting*)
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bSigToUS : BOOL; (*Signal To Upstream Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMAUSInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMADS (*SMEMA - Downstream*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bDSRdy : {REDUND_UNREPLICABLE} BOOL; (*Downstream Machine Ready*)
		bRdySend : {REDUND_UNREPLICABLE} BOOL; (*Machine Ready Send*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
		tRstDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Signal Reset Delay Time*)
	END_VAR
	VAR_OUTPUT
		bTransporting : BOOL; (*Output - Transporting*)
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bSigToDS : BOOL; (*Signal To Downstream Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMADSInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMADS_OppFirst (*SMEMA - Downstream - Opposite Request First*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bDSRdy : {REDUND_UNREPLICABLE} BOOL; (*Downstream Machine Ready*)
		bRdySend : {REDUND_UNREPLICABLE} BOOL; (*Machine Ready Send*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
		tRstDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Signal Reset Delay Time*)
	END_VAR
	VAR_OUTPUT
		bTransporting : BOOL; (*Output - Transporting*)
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bSigToDS : BOOL; (*Signal To Downstream Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMADSInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMABrdSeq (*SMEMA - Board Sequence - Ready Then Send*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bOppRdy : {REDUND_UNREPLICABLE} BOOL; (*Opposite Machine Ready*)
		bCurrRdy : {REDUND_UNREPLICABLE} BOOL; (*Current Machine Ready*)
	END_VAR
	VAR_OUTPUT
		bSigToOppOn : BOOL; (*Turn On Signal To Opposite Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMABrdSeqInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMABrdSeq_OppFirst (*SMEMA - Board Sequence - Receive Opposite Signal First*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bOppRdy : {REDUND_UNREPLICABLE} BOOL; (*Opposite Machine Ready*)
		bCurrRdy : {REDUND_UNREPLICABLE} BOOL; (*Current Machine Ready*)
	END_VAR
	VAR_OUTPUT
		bSigToOppOn : BOOL; (*Turn On Signal To Opposite Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMABrdSeqInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMATransportIdle (*SMEMA - Transport Idle*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bOppRdy : {REDUND_UNREPLICABLE} BOOL; (*Opposite Machine Ready*)
		bInletSen : {REDUND_UNREPLICABLE} BOOL; (*Inlet Sensor*)
		bOutletSen : {REDUND_UNREPLICABLE} BOOL; (*Outlet Sensor*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bContinue : BOOL; (*Output - Continue Transport (False = Go Back To Board Sequence)*)
		tElapseTimeOut : TIME; (*Output - Elapsed Time Out*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMATransportIdleInternal; (*Local Variables*)
		zzEdge00000 : BOOL;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMATransporting (*SMEMA - Transporting Sequence*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bOppRdy : {REDUND_UNREPLICABLE} BOOL; (*Opposite Machine Ready*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
		tRstDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Signal Reset Delay Time*)
	END_VAR
	VAR_OUTPUT
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bSigToOppOff : BOOL; (*Turn Off Signal To Opposite Machine*)
		bCompl : BOOL;
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMATransportingInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMATransporting1 (*SMEMA - Transporting Sequence*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bOppRdy : {REDUND_UNREPLICABLE} BOOL; (*Opposite Machine Ready*)
		bComplSigOn : {REDUND_UNREPLICABLE} BOOL; (*Complete Signal To Indicate That Board Are Transfer Completely*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#45s; (*Time Out*)
		tRstDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Signal Reset Delay Time*)
	END_VAR
	VAR_OUTPUT
		bConvStart : BOOL; (*Output - Conveyor Start Run*)
		bConvStop : BOOL; (*Output - Conveyor Stop Run*)
		bSigToOppOff : BOOL; (*Turn Off Signal To Opposite Machine*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tySMEMATransportingInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbSMEMASigInChk (*SMEMA - Input Signal Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bNomSig : {REDUND_UNREPLICABLE} BOOL; (*Normal Input Signal*)
		bStatSig : {REDUND_UNREPLICABLE} BOOL; (*State Input Signal*)
		bStatSigSetGd : {REDUND_UNREPLICABLE} BOOL; (*True = State Signal Is Good Signal, False = State Signal Is Bad Signal*)
		tSigInChkTm : {REDUND_UNREPLICABLE} TIME := T#0ms; (*Signal In Delay Time, Make Sure All Signal Already Transmitted*)
	END_VAR
	VAR_OUTPUT
		bGdBrd : BOOL; (*Output - True = Good Board, False = Bad Board*)
		bSigInValid : BOOL; (*Output - Input Signal Is Valid*)
	END_VAR
	VAR
		tyInternal : tySMEMASigInChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fSMEMASigStatOut : BOOL (*SMEMA - Output Signal Stat*)
	VAR_INPUT
		bStatSigSetGd : BOOL; (*True = State Signal Is Good Signal, False = State Signal Is Bad Signal*)
		bGdBrd : BOOL; (*True = Good Board, False = Bad Board*)
	END_VAR
END_FUNCTION
