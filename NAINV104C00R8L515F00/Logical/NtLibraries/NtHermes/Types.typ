(*HermesState*)

TYPE
	eHermesState : 
		(
		HermesStateNotConnected,
		HermesStateConnected,
		HermesStateServiceDescription,
		HermesStateSServiceDescription,
		HermesStateNotAvailableNotReady,
		HermesStateBoardAvailable,
		HermesStateMachineReady,
		HermesStateAvailableAndReady,
		HermesStateTransporting,
		HermesStateTransportStopped,
		HermesStateTransportFinished
		);
END_TYPE

(**)
(*Hermes Message Type*)

TYPE
	tyHermesMsgType : 	STRUCT 
		bCheckAlive : BOOL; (*Check Alive*)
		bCheckAlivePing : BOOL; (*Check Alive Ping*)
		bCheckAlivePong : BOOL; (*Check Alive Pong*)
		bServiceDescription : BOOL; (*Service Description*)
		bSServiceDescription : BOOL; (*Supervisory Service Description*)
		bNotification : BOOL; (*Notification*)
		bBoardAvailable : BOOL; (*Board Available*)
		bRevokeBoardAvailable : BOOL; (*Revoke Board Available*)
		bMachineReady : BOOL; (*Machine Ready*)
		bRevokeMachineReady : BOOL; (*Revoke Machine Ready*)
		bStartTransport : BOOL; (*Start Transport*)
		bStopTransport : BOOL; (*Stop Transport*)
		bTransportFinished : BOOL; (*Transport Finished*)
		bSetConfiguration : BOOL; (*Set Configuration*)
		bGetConfiguration : BOOL; (*Get Configuration*)
		bCurrentConfiguration : BOOL; (*Current Configuration*)
		bBoardForecast : BOOL; (*Board Forecast*)
		bBoardArrived : BOOL; (*Board Arrived*)
		bBoardDeparted : BOOL; (*Board Departed*)
		bQueryBoardInfo : BOOL; (*Query Board Info*)
		bSendBoardInfo : BOOL; (*Send Board Info*)
		bQueryWorkOrderInfo : BOOL; (*Query Work Order*)
		bSendWorkOrderInfo : BOOL; (*Send Work Order*)
		bCommand : BOOL;
	END_STRUCT;
	eHermesMsgType : 
		(
		HermesMsgTypeNA, (*NA*)
		HermesMsgTypeCheckAlive, (*Check Alive*)
		HermesMsgTypeCheckAlivePing, (*Check Alive Ping*)
		HermesMsgTypeCheckAlivePong, (*Check Alive Pong*)
		HermesMsgTypeServiceDescription, (*Service Description*)
		HermesMsgTypeSServiceDescription, (*Supervisory Service Description*)
		HermesMsgTypeNotification, (*Notification*)
		HermesMsgTypeBoardAvailable, (*Board Available*)
		HermesMsgTypeRevokeBoardAvl, (*Revoke Board Available*)
		HermesMsgTypeMachineReady, (*Machine Ready*)
		HermesMsgTypeRevokeMachineReady, (*Revoke Machine Ready*)
		HermesMsgTypeStartTransport, (*Start Transport*)
		HermesMsgTypeStopTransport, (*Stop Transport*)
		HermesMsgTypeTransportFinished, (*Transport Finished*)
		HermesMsgTypeSetConfiguration, (*Set Configuration*)
		HermesMsgTypeGetConfiguration, (*Get Configuration*)
		HermesMsgTypeCurrConfiguration, (*Current Configuration*)
		HermesMsgTypeBoardForecast, (*Board Forecast*)
		HermesMsgTypeBoardForecastId, (*Board Forecast with Id*)
		HermesMsgTypeBoardForecastNoId, (*Board Forecast with no Id*)
		HermesMsgTypeBoardArrived, (*Board Arrived*)
		HermesMsgTypeBoardArrived1, (*Board Arrived Lane 1*)
		HermesMsgTypeBoardArrived2, (*Board Arrived Lane 2*)
		HermesMsgTypeBoardArrived3, (*Board Arrived Lane 3*)
		HermesMsgTypeBoardArrived4, (*Board Arrived Lane 4*)
		HermesMsgTypeBoardDeparted, (*Board Departed*)
		HermesMsgTypeBoardDeparted1, (*Board Departed Lane 1*)
		HermesMsgTypeBoardDeparted2, (*Board Departed Lane 2*)
		HermesMsgTypeBoardDeparted3, (*Board Departed Lane 3*)
		HermesMsgTypeBoardDeparted4, (*Board Departed Lane 4*)
		HermesMsgTypeQueryBoardInfo, (*Query Board Info*)
		HermesMsgTypeSendBoardInfo, (*Send Board Info*)
		HermesMsgTypeQueryWorkOrderInfo, (*Query Work Order Info*)
		HermesMsgTypeSendWorkOrderInfo, (*Send Work Order Info*)
		HermesMsgTypeReplyWorkOrderInfo,
		HermesMsgTypeCommand
		);
END_TYPE

(**)

TYPE
	eHermesCheckAliveType : 
		(
		HermesCheckAliveTypeUnknown := 0, (*CheckAlive unknown*)
		HermesCheckAliveTypePing := 1, (*CheckAlive request*)
		HermesCheckAliveTypePong := 2 (*CheckAlive response*)
		);
	eHermesBoardTransfer : 
		(
		HermesTransferred := 1, (*Transferred from upstream*)
		HermesLoaded := 2, (*Loaded from Magazine or a stack of Boards*)
		HermesInserted := 3 (*Inserted*)
		);
	eHermesFailedBoard : 
		(
		HermesUnknownBoard := 0, (*Board of unknown quality available / Ready to accept any board*)
		HermesGoodBoard := 1, (*Good board available / Ready to accept good boards*)
		HermesFailedBoard := 2 (*Failed board available / Ready to accept failed boards*)
		);
	eHermesFlippedBoard : 
		(
		HermesFlippedBoardUnknownSide := 0, (*Side up is unknown*)
		HermesFlippedBoardTopSideUp := 1, (*Board top side is up*)
		HermesFlippedBoardBtmSideUp := 2 (*Board bottom side is up*)
		);
	eHermesSeverity : 
		(
		HermesSeverityFatalError := 1, (*Fatal Error*)
		HermesSeverityError := 2, (*Error*)
		HermesSeverityWarning := 3, (*Warning*)
		HermesSeverityInfo := 4 (*Info*)
		);
	eHermesTransferState : 
		(
		HermesTransferStateNotStarted := 1, (*The PCB never left and hence is fully inside the upstream machine*)
		HermesTransferStateIncomplete := 2, (*The transfer was cancelled in progress*)
		HermesTransferStateComplete := 3 (*The transfer ended successfully*)
		);
END_TYPE

(**)
(*Hermes1.5*)
(*For Intermediate Board Data Generation*)

TYPE
	tyHermesBrdAvlDat : 	STRUCT 
		a_tyXMLTableDataBrdAvl : ARRAY[0..200]OF tyXMLTableDat;
		iXMLTableDataBrdAvlTtlIdx : INT;
		bNewBrdAvl : BOOL := TRUE;
	END_STRUCT;
	tyHermesBAMsgAttribAddr : 	STRUCT 
		udiMacAddrForGUID : UDINT;
		udiDateTimeForGUID : UDINT;
		udiBoardIdCreatedBy : UDINT;
		udiFailedBoard : UDINT;
		udiProductTypeId : UDINT;
		udiFlippedBoard : UDINT;
		udiTopBarcode : UDINT;
		udiBtmBarcode : UDINT;
		udiLength : UDINT;
		udiWidth : UDINT;
		udiThickness : UDINT;
		udiConveyorSpeed : UDINT;
		udiTopClearanceHeight : UDINT;
		udiBottomClearanceHeight : UDINT;
		udiWeight : UDINT;
		udiWorkOrderId : UDINT;
		udiBathId : UDINT;
	END_STRUCT;
END_TYPE

(*Action*)

TYPE
	eHermesBAMsgAction : 
		(
		HermesActionNA,
		HermesActionBypass,
		HermesActionInspect,
		HermesActionInvert,
		HermesActionFIFO,
		HermesActionLIFO
		);
END_TYPE

(* *)
(*Command*)

TYPE
	tyHermesCmdProcessList : 	STRUCT 
		bUSTrueDSFalse : BOOL;
		udiInterfaceString : UDINT;
		udiComMode : UDINT;
		udiCommandParam : UDINT;
	END_STRUCT;
	tyHermesCommandParam : 	STRUCT 
		usiCommandIdx : USINT;
		eCommand : eHermesCommand;
		udiMsgCmdBffr : UDINT;
		a_eCommandSndQ : ARRAY[0..20]OF eHermesCommand;
	END_STRUCT;
	eHermesCommand : 
		(
		HermesCommandUndefined := 0,
		HermesCommandLockInputConveyor := 1,
		HermesCommandUnLockInputConveyor := 2,
		HermesCommandRequestPause := 3,
		HermesCommandConfirmPause := 4,
		HermesCommandResumeOperation := 5,
		HermesCommandOvenInfeed := 1000,
		HermesCommandSelfDefine := 1001
		);
	tyHermesCommandPause : 	STRUCT 
		bFeatureRequestTo : BOOL;
		bUnlockCoverSigTo : BOOL;
		bPrevUnlockCoverSigTo : BOOL;
		bMachineSafetySigFrom : BOOL;
		bFeatureRequestFrom : BOOL;
		bUnlockCoverSigFrom : BOOL;
		bMachineSafetySigTo : BOOL;
		bPrevMachineSafetySigTo : BOOL;
	END_STRUCT;
	tyHermesCommandLockConv : 	STRUCT 
		bFeatureLockConvFrom : BOOL;
		bOvenInfoFrom : BOOL;
		bFeatureLockConvTo : BOOL;
		bOvenInfoTo : BOOL;
		bPrevOvenInfoTo : BOOL;
	END_STRUCT;
	tyHermesCommandOvenInfeed : 	STRUCT 
		bFeatureOvenInfeedFrom : BOOL;
		bOvenInfeedFrom : BOOL;
		bFeatureOvenInfeedTo : BOOL;
		bOvenInfeedTo : BOOL;
		bPrevOvenInfeedTo : BOOL;
	END_STRUCT;
END_TYPE

(**)
(*Hermes Message Full Data*)

TYPE
	tyHermesNotification : 	STRUCT 
		tyData : tyHermesNotificationData; (*Data*)
		tyAvl : tyHermesNotificationAvl; (*Availability*)
	END_STRUCT;
	tyHermesServiceDescription : 	STRUCT 
		tyData : tyHermesServiceDescriptionData; (*Data*)
		tyAvl : tyHermesServiceDescriptionAvl; (*Availability*)
	END_STRUCT;
	tyHermesSServiceDescription : 	STRUCT 
		tyData : tyHermesSServiceDescriptionData; (*Data*)
		tyAvl : tyHermesSServiceDescriptionAvl; (*Availability*)
	END_STRUCT;
	tyHermesCheckAlive : 	STRUCT 
		tyData : tyHermesCheckAliveData; (*Data*)
		tyAvl : tyHermesCheckAliveAvl; (*Availability*)
	END_STRUCT;
	tyHermesBoardAvailable : 	STRUCT 
		tyData : tyHermesBoardAvailableData; (*Data*)
		tyAvl : tyHermesBoardAvailableAvl; (*Availability*)
	END_STRUCT;
	tyHermesMachineReady : 	STRUCT 
		tyData : tyHermesMachineReadyData; (*Data*)
		tyAvl : tyHermesMachineReadyAvl; (*Availability*)
	END_STRUCT;
	tyHermesStartTransport : 	STRUCT 
		tyData : tyHermesStartTransportData; (*Data*)
		tyAvl : tyHermesStartTransportAvl; (*Availability*)
	END_STRUCT;
	tyHermesStopTransport : 	STRUCT 
		tyData : tyHermesStopTransportData; (*Data*)
		tyAvl : tyHermesStopTransportAvl; (*Availability*)
	END_STRUCT;
	tyHermesTransportFinished : 	STRUCT 
		tyData : tyHermesTransportFinishedData; (*Data*)
		tyAvl : tyHermesTransportFinishedAvl; (*Availability*)
	END_STRUCT;
	tyHermesBoardForecast : 	STRUCT 
		tyData : tyHermesBoardForecastData; (*Data*)
		tyAvl : tyHermesBoardForecastAvl; (*Availability*)
	END_STRUCT;
	tyHermesQueryBoardInfo : 	STRUCT 
		tyData : tyHermesQueryBoardInfoData; (*Data*)
		tyAvl : tyHermesQueryBoardInfoAvl; (*Availability*)
	END_STRUCT;
	tyHermesSendBoardInfo : 	STRUCT 
		tyData : tyHermesSendBoardInfoData; (*Data*)
		tyAvl : tyHermesSendBoardInfoAvl; (*Availability*)
	END_STRUCT;
	tyHermesBoardArrived : 	STRUCT 
		tyData : tyHermesBoardArrivedData; (*Data*)
		tyAvl : tyHermesBoardArrivedAvl; (*Availability*)
	END_STRUCT;
	tyHermesBoardDeparted : 	STRUCT 
		tyData : tyHermesBoardDepartedData; (*Data*)
		tyAvl : tyHermesBoardDepartedAvl; (*Availability*)
	END_STRUCT;
	tyHermesSetConfiguration : 	STRUCT 
		tyData : tyHermesSetConfigurationData; (*Data*)
		tyAvl : tyHermesSetConfigurationAvl; (*Availability*)
	END_STRUCT;
	tyHermesCurrentConfiguration : 	STRUCT 
		tyData : tyHermesCurrentConfigurationData; (*Data*)
		tyAvl : tyHermesCurrentConfigurationAvl; (*Availability*)
	END_STRUCT;
	tyHermesQueryWorkOrderInfo : 	STRUCT 
		tyData : tyHermesQueryWorkOrderInfoData; (*Data*)
		tyAvl : tyHermesQueryWorkOrderInfoAvl; (*Availability*)
	END_STRUCT;
	tyHermesSendWorkOrderInfo : 	STRUCT 
		tyData : tyHermesSendWorkOrderInfoData; (*Data*)
		tyAvl : tyHermesSendWorkOrderInfoAvl; (*Availability*)
	END_STRUCT;
	tyHermesReplyWorkOrderInfo : 	STRUCT 
		tyData : tyHermesReplyWorkOrderInfoData; (*Data*)
		tyAvl : tyHermesReplyWorkOrderInfoAvl; (*Availability*)
	END_STRUCT;
	tyHermesCommand : 	STRUCT 
		tyData : tyHermesCommandData; (*Data*)
		tyAvl : tyHermesCommandAvl; (*Availability*)
	END_STRUCT;
END_TYPE

(**)
(*Hermes Message Data*)

TYPE
	tyHermesNotificationData : 	STRUCT 
		iNotificationCode : INT; (*A notification code of the list below. Notification codes above 1000 are not defined by this protocol and may be used by the application.*)
		eSeverity : eHermesSeverity; (*Notification Severity*)
		sDescription : STRING[254]; (*An English textual description of the notification.*)
	END_STRUCT;
	tyHermesServiceDescriptionData : 	STRUCT 
		sMachineId : STRING[80]; (*ID/name of the sending machine for identifying it in a Hermes enabled production line.*)
		sSystemId : STRING[80]; (*ID / name of the sending machine or supervisory system for identifying it in a Hermes enabled production line. 	*)
		iLaneId : INT; (*The sending machine's lane to which this connection is relating to. Lanes are enumerated looking downstream from right to left beginning with 1.*)
		sInterfaceId : STRING[80]; (*The ID of the sending machine's transportation interface to which this connection is relating to.*)
		sVersion : STRING[7]; (*The implemented interface version of the machine.*)
		tySupportedFeatures : tyHermesFeature; (*List of supported features (empty for version 1.0)*)
	END_STRUCT;
	tyHermesSServiceDescriptionData : 	STRUCT 
		sSystemId : STRING[80]; (*ID / name of the sending machine or supervisory system for identifying it in a Hermes enabled production line. 	*)
		sMachineId : STRING[80]; (*ID/name of the sending machine for identifying it in a Hermes enabled production line.*)
		sVersion : STRING[7]; (*The implemented interface version of the machine.*)
		tySupportedFeatures : tyHermesSvyFeature; (*List of supported features (empty for version 1.0)*)
	END_STRUCT;
	tyHermesFeature : 	STRUCT 
		bFeatureCheckAliveResponse : BOOL; (*Indication of CheckAliveResponse function implementation.*)
		bFeatureBoardForecast : BOOL; (*Indication of BoardForecastfunction implementation.*)
		bFeatureConfiguration : BOOL; (*Indication of Configuration function implementation.*)
		bFeatureBoardTracking : BOOL; (*Indication of BoardTracking function implementation.*)
		bFeatureQueryWorkOrderInfo : BOOL; (*Indication of QueryWorkOrderInfo function implementation.*)
		bFeatureSendWorkOrderInfo : BOOL; (*Indication of SendWorkOrderInfo function implementation.*)
		bFeatureQueryBoardInfo : BOOL; (*Indication of QueryBoardInfo function implementation.*)
		bFeatureSendBoardInfo : BOOL; (*Indication of SendBoardInfo function implementation.*)
		bFeatureCommand : BOOL; (*Indication of SendBoardInfo function implementation.*)
	END_STRUCT;
	tyHermesSvyFeature : 	STRUCT 
		bFeatureCheckAliveResponse : BOOL; (*Indication of CheckAliveResponse function implementation.*)
		bFeatureConfiguration : BOOL; (*Indication of Configuration  function implementation.*)
		bFeatureBoardTracking : BOOL; (*Indication of BoardTracking function implementation.*)
		bFeatureQueryWorkOrderInfo : BOOL; (*Indication of QueryWorkOrderInfo function implementation.*)
		bFeatureSendWorkOrderInfo : BOOL; (*Indication of SendWorkOrderInfo function implementation.*)
		bFeatureReplyWorkOrderInfo : BOOL;
	END_STRUCT;
	tyHermesCheckAliveData : 	STRUCT 
		eType : eHermesCheckAliveType; (*Ping / Pong message type*)
		sId : STRING[80]; (*Identifier of the message*)
	END_STRUCT;
	tyHermesBoardAvailableData : 	STRUCT 
		sBoardId : STRING[36]; (*Indicating the ID of the available board*)
		sBoardIdCreatedBy : STRING[80]; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes Configuration.*)
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		sTopBarcode : STRING[254]; (*The barcode of the top side of the PCB*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the PCB*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rConveyorSpeed : REAL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		sWorkOrderId : STRING[80]; (*The work order for the production of PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
		iRoute : INT; (*The routing instuction to DS machine*)
		iAction : INT; (*The action instuction to DS machine (mode change)*)
		tySubBoards : tyHermesBASubBoardsData;
	END_STRUCT;
	tyHermesBASubBoardsData : 	STRUCT 
		iSubBoardsPos : ARRAY[0..4]OF INT; (*A value of Unknown Board, Good Board & Failed Board*)
		sSubBoardsBc : ARRAY[0..4]OF STRING[80]; (*If responding to a BoardForecast message mandatory. It indicates the ID of the original BoardForecast message.*)
		iSubBoardsSt : ARRAY[0..4]OF INT; (*Indicating the ID of the board that will be handed over as next. In case of product change this attribute will not be sent.*)
	END_STRUCT;
	tyHermesMachineReadyData : 	STRUCT 
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board*)
		sForecastId : STRING[80]; (*If responding to a BoardForecast message mandatory. It indicates the ID of the original BoardForecast message.*)
		sBoardId : STRING[36]; (*Indicating the ID of the board that will be handed over as next. In case of product change this attribute will not be sent.*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rConveyorSpeed : REAL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		sWorkOrderId : STRING[80]; (*The work order for the production of PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
	END_STRUCT;
	tyHermesStartTransportData : 	STRUCT 
		sBoardId : STRING[36]; (*The ID of the board for which the transport shall be started.*)
		rConveyorSpeed : REAL; (*Optional parameter indicating the selected conveyor speed for the handover in millimeter per second.*)
	END_STRUCT;
	tyHermesStopTransportData : 	STRUCT 
		eTransferState : eHermesTransferState; (*Transfer States*)
		sBoardId : STRING[36]; (*The ID of the board to which the message relates to.*)
	END_STRUCT;
	tyHermesTransportFinishedData : 	STRUCT 
		eTransferState : eHermesTransferState; (*Transfer States*)
		sBoardId : STRING[36]; (*The ID of the board to which the message relates to.*)
	END_STRUCT;
	tyHermesBoardForecastData : 	STRUCT 
		sForecastId : STRING[80]; (*Indicating the ID of forecast message. The ID must be unambiguous and e.g. can be a timetamp or a GUID.*)
		rTimeUntilAvailable : REAL; (*Number of seconds until a board may be available at downstream machine.*)
		sBoardId : STRING[36]; (*Indicating the ID of the board that will be handed over as next. In case of product change this field will not be sent.*)
		sBoardIdCreatedBy : STRING[80]; (*MachineId of the machine which created the BoardId*)
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		sTopBarcode : STRING[254]; (*The barcode of the top side of the next PCB*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the next PCB*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rConveyorSpeed : REAL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		sWorkOrderId : STRING[80]; (*The work order for the production of PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
	END_STRUCT;
	tyHermesQueryBoardInfoData : 	STRUCT 
		sTopBarcode : STRING[254]; (*The barcode of the top side of the PCB. Either top or bottom barcode must be specified.*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the PCB. Either top or bottom barcode must be specified.*)
	END_STRUCT;
	tyHermesSendBoardInfoData : 	STRUCT 
		sBoardId : STRING[36]; (*The ID of the board which data has been requested. This attribute will not be sent if the board information has not been found.*)
		sBoardIdCreatedBy : STRING[80]; (*MachineId of the machine which created the BoardId. This attribute will not be sent if the board information has not been found.*)
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board. This attribute will not be sent if the board information has not been found.*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up. This attribute will not be sent if the board information has not been found.*)
		sTopBarcode : STRING[254]; (*The barcode of the top side of the next PCB. This attribute is mandatory if it has been in the QueryBoardInfo message.*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the next PCB. This attribute is mandatory if it has been in the QueryBoardInfo message.*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		sWorkOrderId : STRING[80]; (*The work order for the production of PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
	END_STRUCT;
	tyHermesBoardArrivedData : 	STRUCT 
		sMachineId : STRING[80]; (*ID / name of this machine for identifying it in a Hermes enabled production line. 	*)
		iUpstreamLaneId : INT; (*The lane on the upstream side. Lanes are enumerated looking downstream from right to left beginning with 1.*)
		sUpstreamInterfaceId : STRING[80]; (*The ID of the transportation interface on the upstream side.*)
		sMagazineId : STRING[80]; (*Barcode of a magazine, required to identify the magazine from which the Board was transferred.*)
		iSlotId : INT; (*Indicates the slot in the magazine, enumerated from bottom to top, beginning with 1.*)
		eBoadTransfer : eHermesBoardTransfer; (*A value of BoardTransferred or Board Loaded or Board Inserted.*)
		sBoardId : STRING[36]; (*Indicating the ID of the available board. 	*)
		sBoardIdCreatedBy : STRING[80]; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		sTopBarcode : STRING[254]; (*The barcode of the top side of the next PCB*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the next PCB*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rConveyorSpeed : REAL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		sWorkOrdedId : STRING[80]; (*The work order for the production of PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
		iRoute : INT;
		iAction : INT;
	END_STRUCT;
	tyHermesBoardDepartedData : 	STRUCT 
		sMachineId : STRING[80]; (*ID / name of this machine for identifying it in a Hermes enabled production line. 	*)
		iDownstreamLaneId : INT; (*The lane on the downstream side. Lanes are enumerated looking downstream from right to left beginning with 1.*)
		sDownstreamInterfaceId : STRING[80]; (*The ID of the transportation interface on the downstream side.*)
		sMagazineId : STRING[80]; (*Barcode of a magazine, required to identify the magazine from which the Board was transferred.*)
		iSlotId : INT; (*Indicates the slot in the magazine, enumerated from bottom to top, beginning with 1.*)
		eBoadTransfer : eHermesBoardTransfer; (*A value of BoardTransferred or Board Loaded or Board Inserted.*)
		sBoardId : STRING[36]; (*Indicating the ID of the available board. 	*)
		sBoardIdCreatedBy : STRING[80]; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		sTopBarcode : STRING[254]; (*The barcode of the top side of the next PCB*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the next PCB*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rConveyorSpeed : REAL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		sWorkOrdedId : STRING[80]; (*The work order for the production of PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
		iRoute : INT;
		iAction : INT;
	END_STRUCT;
	tyHermesQueryWorkOrderInfoData : 	STRUCT 
		sQueryId : STRING[80]; (*Indicates the ID of QueryWorkOrder message. The ID must be unambiguous and e.g. can be a timestamp or a GUID.*)
		sMachineId : STRING[80]; (*ID / name of this machine for identifying it in a Hermes enabled production line.*)
		sMagazineId : STRING[80]; (*Barcode of a magazine, required to identify the magazine.*)
		iSlotId : INT; (*Indicates the slot in the magazine, enumerated from bottom to top, beginning with 1.*)
		sBarcode : STRING[254]; (*The barcode of the PCB.*)
		sWorkOrderId : STRING[80];
		sBatchId : STRING[80];
	END_STRUCT;
	tyHermesSendWorkOrderInfoData : 	STRUCT 
		sQueryId : STRING[80]; (*ID of QueryWorkOrderInfo this message refers to. This attribute is mandatory if it has been in the QueryWorkOrderInfo message.*)
		sWorkOrderId : STRING[80]; (*Identifies the work order for production of the PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
		sBoardId : STRING[36]; (*Indicating the ID of the available board.*)
		sBoardIdCreatedBy : STRING[80]; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		eFailedBoard : eHermesFailedBoard; (*A value of Unknown Board, Good Board & Failed Board. This attribute will not be sent if the board information has not been found.*)
		sProductTypeId : STRING[254]; (*Identifies a collection of PCBs sharing common properties.*)
		eFlippedBoard : eHermesFlippedBoard; (*A value of Unknown Side, Top Side Up & Bottom Side Up. This attribute will not be sent if the board information has not been found.*)
		sTopBarcode : STRING[254]; (*The barcode of the top side of the next PCB. This attribute is mandatory if it has been in the QueryBoardInfo message.*)
		sBottomBarcode : STRING[254]; (*The barcode of the bottom side of the next PCB. This attribute is mandatory if it has been in the QueryBoardInfo message.*)
		rLength : REAL; (*The length of the PCB in millimeter.*)
		rWidth : REAL; (*The width of the PCB in millimeter.*)
		rThickness : REAL; (*The thickness of the PCB in millimeter.*)
		rConveyorSpeed : REAL; (*The thickness of the PCB in millimeter.*)
		rTopClearanceHeight : REAL; (*The clearance height for the top side of the PCB in millimeter.*)
		rBottomClearanceHeight : REAL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		rWeight : REAL; (*The weight of the PCB in grams.*)
		iRoute : INT;
	END_STRUCT;
	tyHermesReplyWorkOrderInfoData : 	STRUCT 
		sWorkOrderId : STRING[80]; (*Identifies the work order for production of the PCB.*)
		sBatchId : STRING[80]; (*The batch id of a splitted work order.*)
		iStatus : INT; (*Indicating the ID of the available board.*)
	END_STRUCT;
	tyHermesCommandData : 	STRUCT 
		eCommand : eHermesCommand;
	END_STRUCT;
	tyHermesSetConfigurationData : 	STRUCT 
		sMachineId : STRING[80]; (*ID/name of this machine for identifying it in a Hermes enabled production line*)
		uiSupervisorySystemPort : UINT; (*Supervisory system port number.*)
		a_tyUpstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesUpstreamConfiguration; (*Configuration for upstream lanes*)
		a_tyDownstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesDownstreamConfiguration; (*Configuration for downstream lanes*)
	END_STRUCT;
	tyHermesCurrentConfigurationData : 	STRUCT 
		sMachineId : STRING[80]; (*ID/name of this machine for identifying it in a Hermes enabled production line*)
		uiSupervisorySystemPort : UINT; (*Supervisory system port number.*)
		a_tyUpstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesUpstreamConfiguration; (*Configuration for upstream lanes*)
		a_tyDownstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesDownstreamConfiguration; (*Configuration for downstream lanes*)
	END_STRUCT;
	tyHermesUpstreamConfiguration : 	STRUCT 
		iUpstreamLaneId : INT; (*The lane on the upstream side Lanes are enumerated looking downstream from right to left beginning with 1*)
		sUpstreamInterfaceId : STRING[80]; (*The ID of the transportation interface on the upstream side*)
		sHostAddress : STRING[254]; (*The IP address or hostname of the upstream machine for this lane and transportation interface*)
		uiPort : UINT; (*Port number on which connections shall be established*)
	END_STRUCT;
	tyHermesDownstreamConfiguration : 	STRUCT 
		iDownstreamLaneId : INT; (*The lane on the downstream side Lanes are enumerated looking downstream from right to left beginning with 1*)
		sDownstreamInterfaceId : STRING[80]; (*The ID of the transportation interface on the downstream side*)
		sClientAddress : STRING[254]; (*The IP address or hostname of the downstream machine for this lane and transportation interface. If not specified, then connections from any IP address are accepted.*)
		uiPort : UINT; (*Port number on which the server shall accept connections for this lane*)
	END_STRUCT;
END_TYPE

(**)
(*Hermes Message Data Availability*)

TYPE
	tyHermesNotificationAvl : 	STRUCT 
		bNotificationCode : BOOL; (*A notification code of the list below. Notification codes above 1000 are not defined by this protocol and may be used by the application.*)
		bSeverity : BOOL; (*Notification Severity*)
		bDescription : BOOL; (*An English textual description of the notification.*)
	END_STRUCT;
	tyHermesServiceDescriptionAvl : 	STRUCT 
		bMachineId : BOOL; (*ID/name of the sending machine for identifying it in a Hermes enabled production line.*)
		bSystemId : BOOL; (*ID / name of the sending machine or supervisory system for identifying it in a Hermes enabled production line. 	*)
		bLaneId : BOOL; (*The sending machine's lane to which this connection is relating to. Lanes are enumerated looking downstream from right to left beginning with 1.*)
		bInterfaceId : BOOL; (*The ID of the sending machine's transportation interface to which this connection is relating to.*)
		bVersion : BOOL; (*The implemented interface version of the machine.*)
		bSupportedFeatures : BOOL; (*List of supported features (empty for version 1.0)*)
		tySupportedFeatures : tyHermesFeatureAvl; (*List of supported features (empty for version 1.0)*)
	END_STRUCT;
	tyHermesSServiceDescriptionAvl : 	STRUCT 
		bSystemId : BOOL; (*ID / name of the sending machine or supervisory system for identifying it in a Hermes enabled production line. 	*)
		bMachineId : BOOL; (*ID/name of the sending machine for identifying it in a Hermes enabled production line.*)
		bVersion : BOOL; (*The implemented interface version of the machine.*)
		bSupportedFeatures : BOOL; (*List of supported features (empty for version 1.0)*)
		tySupportedFeatures : tyHermesSvyFeatureAvl; (*List of supported features (empty for version 1.0)*)
	END_STRUCT;
	tyHermesFeatureAvl : 	STRUCT 
		bFeatureCheckAliveResponse : BOOL; (*Indication of CheckAliveResponse function implementation.*)
		bFeatureBoardForecast : BOOL; (*In the upstream role: Machine emits BoardForecast messages.*)
		bFeatureQueryBoardInfo : BOOL; (*Indication of QueryBoardInfo function implementation.*)
		bFeatureSendBoardInfo : BOOL; (*Indication of SendBoardInfo function implementation.*)
		bFeatureCommand : BOOL;
	END_STRUCT;
	tyHermesSvyFeatureAvl : 	STRUCT 
		bFeatureConfiguration : BOOL; (*Indication of configuration functions implementation.*)
		bFeatureCheckAliveResponse : BOOL; (*Indication of CheckAliveResponse function implementation.*)
		bFeatureBoardTracking : BOOL; (*Indication of board tracking functions implementation.*)
		bFeatureQueryWorkOrderInfo : BOOL; (*Indication of QueryWorkOrderInfo function implementation.*)
		bFeatureSendWorkOrderInfo : BOOL; (*Indication of SendWorkOrderInfo function implementation.*)
		bFeatureReplyWorkOrderInfo : BOOL; (*Indication of SendWorkOrderInfo function implementation.*)
	END_STRUCT;
	tyHermesCheckAliveAvl : 	STRUCT 
		bType : BOOL; (*Ping / Pong message type*)
		bId : BOOL; (*Identifier of the message*)
	END_STRUCT;
	tyHermesBoardAvailableAvl : 	STRUCT 
		bBoardId : BOOL; (*Indicating the ID of the available board*)
		bBoardIdCreatedBy : BOOL; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		bTopBarcode : BOOL; (*The barcode of the top side of the PCB*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the PCB*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bConveyorSpeed : BOOL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bWorkOrderId : BOOL; (*The work order for the production of PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
		bRoute : BOOL;
		bAction : BOOL;
		tySubBoards : tyHermesBASubBoardsAvl;
	END_STRUCT;
	tyHermesBASubBoardsAvl : 	STRUCT 
		bSubBoardsPos : ARRAY[0..4]OF BOOL; (*A value of Unknown Board, Good Board & Failed Board*)
		bSubBoardsBc : ARRAY[0..4]OF BOOL; (*If responding to a BoardForecast message mandatory. It indicates the ID of the original BoardForecast message.*)
		bSubBoardsSt : ARRAY[0..4]OF BOOL; (*Indicating the ID of the board that will be handed over as next. In case of product change this attribute will not be sent.*)
	END_STRUCT;
	tyHermesMachineReadyAvl : 	STRUCT 
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board*)
		bForecastId : BOOL; (*If responding to a BoardForecast message mandatory. It indicates the ID of the original BoardForecast message.*)
		bBoardId : BOOL; (*Indicating the ID of the board that will be handed over as next. In case of product change this attribute will not be sent.*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bConveyorSpeed : BOOL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bWorkOrderId : BOOL; (*The work order for the production of PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
	END_STRUCT;
	tyHermesStartTransportAvl : 	STRUCT 
		bBoardId : BOOL; (*The ID of the board for which the transport shall be started.*)
		bConveyorSpeed : BOOL; (*Optional parameter indicating the selected conveyor speed for the handover in millimeter per second.*)
	END_STRUCT;
	tyHermesStopTransportAvl : 	STRUCT 
		bTransferState : BOOL; (*Transfer States*)
		bBoardId : BOOL; (*The ID of the board to which the message relates to.*)
	END_STRUCT;
	tyHermesTransportFinishedAvl : 	STRUCT 
		bTransferState : BOOL; (*Transfer States*)
		bBoardId : BOOL; (*The ID of the board to which the message relates to.*)
	END_STRUCT;
	tyHermesBoardForecastAvl : 	STRUCT 
		bForecastId : BOOL; (*Indicating the ID of forecast message. The ID must be unambiguous and e.g. can be a timetamp or a GUID.*)
		bTimeUntilAvailable : BOOL; (*Number of seconds until a board may be available at downstream machine.*)
		bBoardId : BOOL; (*Indicating the ID of the board that will be handed over as next. In case of product change this field will not be sent.*)
		bBoardIdCreatedBy : BOOL; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		bTopBarcode : BOOL; (*The barcode of the top side of the next PCB*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the next PCB*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bConveyorSpeed : BOOL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bWorkOrderId : BOOL; (*The work order for the production of PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
	END_STRUCT;
	tyHermesQueryBoardInfoAvl : 	STRUCT 
		bTopBarcode : BOOL; (*The barcode of the top side of the PCB. Either top or bottom barcode must be specified.*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the PCB. Either top or bottom barcode must be specified.*)
	END_STRUCT;
	tyHermesSendBoardInfoAvl : 	STRUCT 
		bBoardId : BOOL; (*The ID of the board which data has been requested. This attribute will not be sent if the board information has not been found.*)
		bBoardIdCreatedBy : BOOL; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board. This attribute will not be sent if the board information has not been found.*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up. This attribute will not be sent if the board information has not been found.*)
		bTopBarcode : BOOL; (*The barcode of the top side of the next PCB. This attribute is mandatory if it has been in the QueryBoardInfo message.*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the next PCB. This attribute is mandatory if it has been in the QueryBoardInfo message.*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bWorkOrderId : BOOL; (*The work order for the production of PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
	END_STRUCT;
	tyHermesBoardArrivedAvl : 	STRUCT 
		bMachineId : BOOL; (*ID / name of this machine for identifying it in a Hermes enabled production line. 	*)
		bUpstreamLaneId : BOOL; (*The lane on the upstream side. Lanes are enumerated looking downstream from right to left beginning with 1.*)
		bUpstreamInterfaceId : BOOL; (*The ID of the transportation interface on the upstream side.*)
		bMagazineId : BOOL; (*Barcode of a magazine, required to identify the magazine from which the Board was transferred.*)
		bSlotId : BOOL; (*Indicates the slot in the magazine, enumerated from bottom to top, beginning with 1.*)
		bBoardTransfer : BOOL; (*A value of BoardTransferred or Board Loaded or Board Inserted.*)
		bBoardId : BOOL; (*Indicating the ID of the available board. 	*)
		bBoardIdCreatedBy : BOOL; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		bTopBarcode : BOOL; (*The barcode of the top side of the next PCB*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the next PCB*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bConveyorSpeed : BOOL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bWorkOrderId : BOOL; (*The work order for the production of PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
		bRoute : BOOL;
		bAction : BOOL;
	END_STRUCT;
	tyHermesBoardDepartedAvl : 	STRUCT 
		bMachineId : BOOL; (*ID / name of this machine for identifying it in a Hermes enabled production line. 	*)
		bDownstreamLaneId : BOOL; (*The lane on the downstream side. Lanes are enumerated looking downstream from right to left beginning with 1.*)
		bDownstreamInterfaceId : BOOL; (*The ID of the transportation interface on the downstream side.*)
		bMagazineId : BOOL; (*Barcode of a magazine, required to identify the magazine to which the Board was transferred.*)
		bSlotId : BOOL; (*Indicates the slot in the magazine, enumerated from bottom to top, beginning with 1.*)
		bBoardTransfer : BOOL; (*A value of BoardTransferred or Board Loaded or Board Inserted.*)
		bBoardId : BOOL; (*Indicating the ID of the available board. 	*)
		bBoardIdCreatedBy : BOOL; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up.*)
		bTopBarcode : BOOL; (*The barcode of the top side of the next PCB*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the next PCB*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bConveyorSpeed : BOOL; (*The conveyor speed preferred by the upstream machine in millimeter per second.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bWorkOrderId : BOOL; (*The work order for the production of PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
		bRoute : BOOL;
		bAction : BOOL;
	END_STRUCT;
	tyHermesQueryWorkOrderInfoAvl : 	STRUCT 
		bQueryId : BOOL; (*Indicates the ID of QueryWorkOrder message. The ID must be unambiguous and e.g. can be a timestamp or a GUID.*)
		bMachineId : BOOL; (*ID / name of this machine for identifying it in a Hermes enabled production line.*)
		bMagazineId : BOOL; (*Barcode of a magazine, required to identify the magazine.*)
		bSlotId : BOOL; (*Indicates the slot in the magazine, enumerated from bottom to top, beginning with 1.*)
		bBarcode : BOOL; (*The barcode of the PCB.*)
		bWorkOrderId : BOOL;
		bBatchId : BOOL;
	END_STRUCT;
	tyHermesSendWorkOrderInfoAvl : 	STRUCT 
		bQueryId : BOOL; (*ID of QueryWorkOrderInfo this message refers to. This attribute is mandatory if it has been in the QueryWorkOrderInfo message.*)
		bWorkOrderId : BOOL; (*Identifies the work order for production of the PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
		bBoardId : BOOL; (*Indicating the ID of the available board.*)
		bBoardIdCreatedBy : BOOL; (*MachineId of the machine which created the BoardId (the first machine in a consecutive row of machines implementing this protocol). The MachineId is part of the Hermes configuration.*)
		bFailedBoard : BOOL; (*A value of Unknown Board, Good Board & Failed Board. This attribute will not be sent if the board information has not been found.*)
		bProductTypeId : BOOL; (*Identifies a collection of PCBs sharing common properties.*)
		bFlippedBoard : BOOL; (*A value of Unknown Side, Top Side Up & Bottom Side Up. This attribute will not be sent if the board information has not been found.*)
		bTopBarcode : BOOL; (*The barcode of the top side of the next PCB. This attribute is mandatory if it has been in the QueryWorkOrderInfo message.*)
		bBottomBarcode : BOOL; (*The barcode of the bottom side of the next PCB. This attribute is mandatory if it has been in the QueryWorkOrderInfo message.*)
		bLength : BOOL; (*The length of the PCB in millimeter.*)
		bWidth : BOOL; (*The width of the PCB in millimeter.*)
		bThickness : BOOL; (*The thickness of the PCB in millimeter.*)
		bConveyorSpeed : BOOL; (*The thickness of the PCB in millimeter.*)
		bTopClearanceHeight : BOOL; (*The clearance height for the top side of the PCB in millimeter.*)
		bBottomClearanceHeight : BOOL; (*The clearance height for the bottom side of the PCB in millimeter.*)
		bWeight : BOOL; (*The weight of the PCB in grams.*)
		bRoute : BOOL;
	END_STRUCT;
	tyHermesReplyWorkOrderInfoAvl : 	STRUCT 
		bWorkOrderId : BOOL; (*Identifies the work order for production of the PCB.*)
		bBatchId : BOOL; (*The batch id of a splitted work order.*)
		bStatus : BOOL; (*Indicating the ID of the available board.*)
	END_STRUCT;
	tyHermesCommandAvl : 	STRUCT 
		bCommand : BOOL;
	END_STRUCT;
	tyHermesSetConfigurationAvl : 	STRUCT 
		bMachineId : BOOL; (*ID/name of this machine for identifying it in a Hermes enabled production line*)
		bSupervisorySystemPort : BOOL; (*Supervisory system port number.*)
		bUpstreamConfigurations : BOOL; (*Upstream configurations*)
		bDownstreamConfigurations : BOOL; (*Downstream configurations*)
		iUpstreamConfigurations : INT; (*Number of upstream configurations*)
		iDownstreamConfigurations : INT; (*Number of downstream configurations*)
		a_tyUpstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesUpstreamConfigurationAvl; (*Configuration for upstream lanes*)
		a_tyDownstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesDnstreamConfigurationAvl; (*Configuration for downstream lanes*)
	END_STRUCT;
	tyHermesCurrentConfigurationAvl : 	STRUCT 
		bMachineId : BOOL; (*ID/name of this machine for identifying it in a Hermes enabled production line*)
		bSupervisorySystemPort : BOOL; (*Supervisory system port number.*)
		bUpstreamConfigurations : BOOL; (*Upstream configurations*)
		bDownstreamConfigurations : BOOL; (*Downstream configurations*)
		iUpstreamConfigurations : INT; (*Number of upstream configurations*)
		iDownstreamConfigurations : INT; (*Number of downstream configurations*)
		a_tyUpstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesUpstreamConfigurationAvl; (*Configuration for upstream lanes*)
		a_tyDownstreamConfigurations : ARRAY[0..c_diHermesConfigMaxIdx]OF tyHermesDnstreamConfigurationAvl; (*Configuration for downstream lanes*)
	END_STRUCT;
	tyHermesUpstreamConfigurationAvl : 	STRUCT 
		bUpstreamLaneId : BOOL; (*The lane on the upstream side Lanes are enumerated looking downstream from right to left beginning with 1*)
		bUpstreamInterfaceId : BOOL; (*The ID of the transportation interface on the upstream side*)
		bHostAddress : BOOL; (*The IP address or hostname of the upstream machine for this lane and transportation interface*)
		bPort : BOOL; (*Port number on which connections shall be established*)
	END_STRUCT;
	tyHermesDnstreamConfigurationAvl : 	STRUCT 
		bDownstreamLaneId : BOOL; (*The lane on the downstream side Lanes are enumerated looking downstream from right to left beginning with 1*)
		bDownstreamInterfaceId : BOOL; (*The ID of the transportation interface on the downstream side*)
		bClientAddress : BOOL; (*The IP address or hostname of the downstream machine for this lane and transportation interface. If not specified, then connections from any IP address are accepted.*)
		bPort : BOOL; (*Port number on which the server shall accept connections for this lane*)
	END_STRUCT;
END_TYPE
