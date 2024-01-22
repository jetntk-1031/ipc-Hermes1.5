(*2019-05-04*)
(**)
(*Action*)

TYPE
	eHermesAction : 
		(
		HermesActIdle,
		HermesActBGStartRun,
		HermesActBGStopRun,
		HermesActDeleteOldLog,
		HermesActCreateDir,
		HermesActWriteRetain,
		HermesActWriteRetainLane1,
		HermesActWriteRetainLane2,
		HermesActWriteRetainLane3,
		HermesActWriteRetainLane4,
		HermesActReadRetain,
		HermesActReadRetainLane1,
		HermesActReadRetainLane2,
		HermesActReadRetainLane3,
		HermesActReadRetainLane4,
		HermesActWriteConfig,
		HermesActReadConfig
		);
END_TYPE

(**)

TYPE
	tyHermesConfiguration : 	STRUCT 
		a_tyUSParam : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesUSParam;
		a_tyDSParam : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesDSParam;
		tySvyParam : tyHermesSvyParam;
	END_STRUCT;
	tyHermesDSParam : 	STRUCT 
		tSndAlive : TIME;
		tRcvAlive : TIME;
		sDownstreamInterfaceId : STRING[80]; (*The ID of the transportation interface on the downstream side*)
		uiSvrPort : UINT;
		iLaneID : INT;
		sMachineId : STRING[80] := '';
		sClientAddress : STRING[15] := '';
		uiClientPort : UINT;
		bFeatureCheckAliveResponse : BOOL;
		bFeatureBoardForecast : BOOL;
		bFeatureSendBoardInfo : BOOL;
		bFeatureCommand : BOOL;
	END_STRUCT;
	tyHermesUSParam : 	STRUCT 
		tSndAlive : TIME;
		tRcvAlive : TIME;
		uiClntPort : UINT;
		iLaneID : INT;
		sMachineId : STRING[80] := '';
		sHostAddress : STRING[15] := '';
		uiHostPort : UINT;
		sUpstreamInterfaceId : STRING[80]; (*The ID of the transportation interface on the upstream side*)
		bFeatureCheckAliveResponse : BOOL;
		bFeatureBoardForecast : BOOL;
		bFeatureQueryBoardInfo : BOOL;
		bFeatureCommand : BOOL;
		bCmpTypeId : BOOL;
		bCmpParam : BOOL;
		bOverwrite : BOOL;
	END_STRUCT;
	tyHermesRmtParam : 	STRUCT 
		uiSvrPort : UINT;
	END_STRUCT;
	tyHermesSvyParam : 	STRUCT 
		tSndAlive : TIME;
		tRcvAlive : TIME;
		uiSvySvstemPort : UINT;
		iLaneID : INT;
		sMachineId : STRING[80];
		sClientAddress : STRING[15];
		uiClientPort : UINT;
		bFeatureCheckAliveResponse : BOOL;
		bFeatureConfiguration : BOOL;
		bFeatureBoardTracking : BOOL;
		bFeatureQueryWorkOrderInfo : BOOL;
		bFeatureSendWorkOrderInfo : BOOL;
		bFeatureReplyWorkOrderInfo : BOOL;
		bFeatureInsertBrd : BOOL;
	END_STRUCT;
END_TYPE

(*Action Reserved By Zone*)

TYPE
	tyActionByZone : 	STRUCT 
		sBoardId : STRING[254];
		iAttributeIdx : INT;
		iAction : INT;
		bActionCompl : BOOL;
	END_STRUCT;
END_TYPE

(*Query Queue*)

TYPE
	tyHermesQueryQueue : 	STRUCT 
		udiTracedSubjectAddr : UDINT;
		usiPriority : USINT; (*Higher number = higher priority*)
		tyQueryWorkOrder : tyHermesQueryWorkOrderInfo;
	END_STRUCT;
END_TYPE
