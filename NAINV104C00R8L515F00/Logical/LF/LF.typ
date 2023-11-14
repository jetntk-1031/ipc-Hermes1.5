(*2019-04-25*)
(**)
(*Action*)

TYPE
	eLFAction : 
		(
		LFActIdle,
		LFActBGStartRun,
		LFActBGStopRun,
		LFActSyncPLCTm,
		LFActChgAllAuto,
		LFActChgAllMnl,
		LFActChgSeqAuto,
		LFActChgSeqMnl
		);
	eLFOPCUAStep : 
		(
		LFOPCUAStepIncCntr,
		LFOPCUAStepChkHdls,
		LFOPCUAStepConnect,
		LFOPCUAStepWriteHdls,
		LFOPCUAStepReadHdls,
		LFOPCUAStepWrite,
		LFOPCUAStepRead,
		LFOPCUAStepStopChk
		);
	tyOPCUAHdlList : 	STRUCT 
		a_dwHdls : ARRAY[0..MAX_INDEX_NODELIST]OF DWORD;
	END_STRUCT;
END_TYPE
