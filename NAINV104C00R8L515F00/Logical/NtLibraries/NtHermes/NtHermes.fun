(*Sequence*)

FUNCTION_BLOCK fbHermesSequenceUS (*Hermes Sequence For Upstream*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bRstState : {REDUND_UNREPLICABLE} BOOL; (*Reset State*)
		p_tyMsgTypeRcv : REFERENCE TO tyHermesMsgType; (*Hermes Message Type Receive*)
		bRdyRcv : BOOL; (*Ready Receive Board*)
		bBlkUS : BOOL; (*Block Upstream Communication*)
		bRdyTransport : BOOL; (*Ready Transport Board*)
		bRcvCompl : BOOL; (*Receive Board Completed*)
		bRcvIncompl : BOOL; (*Receive Board Incompleted*)
		bRcvNotStart : BOOL; (*Receive Board Not Started*)
		bProcessBoardForecastId : BOOL; (*Process Board Forecast with ID*)
	END_VAR
	VAR_OUTPUT
		eMsgTypeSnd : eHermesMsgType; (*Hermes Message Type Send*)
		bNotAvlNotRdy : BOOL; (*Not Available Not Ready*)
		bUSRdy : BOOL; (*US Ready*)
		bDSRdy : BOOL; (*DS Ready*)
		bTransporting : BOOL; (*Transporting Board*)
		bStopTransport : BOOL; (*Stop Transport Board*)
		bBoardAvailable : BOOL; (*Board Available*)
		eState : eHermesState; (*Hermes States*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		zzEdge00000 : BOOL;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbHermesSequenceDS (*Hermes Sequence For Downstream*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bRstState : {REDUND_UNREPLICABLE} BOOL; (*Reset State*)
		p_tyMsgTypeRcv : REFERENCE TO tyHermesMsgType; (*Hermes Message Type Receive*)
		bRdyRcv : BOOL; (*Have USB*)
		bRdySnd : BOOL; (*Have DBA*)
		bBlkDS : BOOL; (*Block Upstream Communication*)
		bSndCompl : BOOL;
		bSndIncompl : BOOL; (*Receive Board Incompleted*)
		bSndNotStart : BOOL; (*Receive Board Not Started*)
		bFeatureBoardForecast : BOOL; (*BoardForecast Feaature*)
		bOpsRun : BOOL;
		bSendBFId : BOOL;
		bBFIdSent : BOOL;
		bSendBFNoID : BOOL;
	END_VAR
	VAR_OUTPUT
		eMsgTypeSnd : eHermesMsgType; (*Hermes Message Type Send*)
		bUSRdy : BOOL; (*Opposite Ready*)
		bDSRdy : BOOL; (*Opposite Ready*)
		bTransporting : BOOL; (*Transporting Board*)
		bStopTransport : BOOL; (*Stop Transport Board*)
		eState : eHermesState; (*Hermes States*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		zzEdge00000 : BOOL;
		zzEdge00001 : BOOL;
		zzEdge00002 : BOOL;
		zzEdge00003 : BOOL;
		zzEdge00004 : BOOL;
		zzEdge00005 : BOOL;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbHermesSequenceSvy (*Hermes Sequence For Supervisory*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		bRstState : {REDUND_UNREPLICABLE} BOOL; (*Reset State*)
		p_tyMsgTypeRcv : REFERENCE TO tyHermesMsgType; (*Hermes Message Type Receive*)
	END_VAR
	VAR_OUTPUT
		eMsgTypeSnd : eHermesMsgType; (*Hermes Message Type Send*)
		eState : eHermesState; (*Hermes States*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbHermesSequenceTO (*Hermes Sequence Time Out*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		eState : eHermesState; (*Hermes States*)
		tConnTimeOut : TIME; (*Wait Connection Time Out*)
		tTransportTimeOut : TIME; (*Transport Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		fbConnTimeOut : TON;
		fbTransportTimeOut : TON;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbHermesSequenceSvyTO (*Hermes Sequence Supervisory Time Out*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		eState : eHermesState; (*Hermes States*)
		tConnTimeOut : TIME; (*Wait Connection Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		fbConnTimeOut : TON;
	END_VAR
END_FUNCTION_BLOCK
(**)
(*Board Available*)

FUNCTION fHermesCmpSlt : UDINT (*Hermes Compare Slot Parameter*)
	VAR_INPUT
		eHermesFlippedBrd : eHermesFlippedBoard; (*Flipped Board From Hermes Board Available*)
		rHermesThicknessInMM : REAL; (*Thickness In MM From Hermes Board Available*)
		rHermesTopClearanceHeightInMM : REAL; (*Top Clearance Height In MM From Hermes Board Available*)
		rHermesBtmClearanceHeightInMM : REAL; (*Bottom Clearance Height In MM From Hermes Board Available*)
		diRcpMinSltValue : DINT; (*Minimum Slot Value From Product Recipe*)
		diRcpMaxSltValue : DINT; (*Maximum Slot Value From Product Recipe*)
		diRcpPitch : DINT; (*Pitch Value From Product Recipe*)
		diRcpSltToSltInUM : DINT; (*Slot To Slot Distance In UM From Product Recipe*)
		diRcpTtlSlt : DINT; (*Total Slot Number From Magazine Recipe*)
	END_VAR
	VAR
		fbGetSlt : fbHermesGetSlt;
	END_VAR
END_FUNCTION

FUNCTION_BLOCK fbHermesGetSlt (*Hermes Get Slot Parameter*)
	VAR_INPUT
		eFlippedBrd : eHermesFlippedBoard; (*Flipped Board From Hermes Board Available*)
		rThicknessInMM : REAL; (*Thickness In MM From Hermes Board Available*)
		rTopClearanceHeightInMM : REAL; (*Top Clearance Height In MM From Hermes Board Available*)
		rBtmClearanceHeightInMM : REAL; (*Bottom Clearance Height In MM From Hermes Board Available*)
		diSltToSltInUM : DINT; (*Slot To Slot Distance In UM From Product Recipe*)
		diTtlSlt : DINT; (*Total Slot Number From Magazine Recipe*)
	END_VAR
	VAR_OUTPUT
		diMinSltValue : DINT; (*Minimum Slot Value From Product Recipe*)
		diMaxSltValue : DINT; (*Maximum Slot Value From Product Recipe*)
		diPitch : DINT; (*Pitch Value From Product Recipe*)
	END_VAR
	VAR
		diThicknessInUM : DINT;
		diTopClearanceHeightInUM : DINT;
		diBtmClearanceHeightInUM : DINT;
	END_VAR
END_FUNCTION_BLOCK
(**)
(*Configurations*)

FUNCTION_BLOCK fbHermesGetSndConfig (*Hermes Get & Send Configuration*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		p_tyMsgTypeRcv : REFERENCE TO tyHermesMsgType; (*Hermes Message Type Receive*)
		p_tyMsgTypeSnd : REFERENCE TO tyHermesMsgType; (*Hermes Message Type Send*)
		tyCurrentConfigurationData : tyHermesCurrentConfigurationData; (*Current Configuration Data Input*)
	END_VAR
	VAR_OUTPUT
		tyCurrentConfiguration : tyHermesCurrentConfiguration; (*Current Configuration*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		di : DINT;
	END_VAR
END_FUNCTION_BLOCK
(**)
(*Parse XML Table Data*)

FUNCTION_BLOCK fbHermesParseXMLTable (*Hermes Parse XML Table Data*)
	VAR_INPUT
		p_XMLTable : UDINT; (*Pointer To XML Table*)
		iTotalIdxWrite : INT; (*Total Index Written In Table*)
	END_VAR
	VAR_OUTPUT
		tyMsgType : tyHermesMsgType; (*Hermes Message Type*)
		tyCheckAlive : tyHermesCheckAlive; (*Check Alive*)
		iCheckAliveFirstIdx : INT; (*Check Alive First Index In Table*)
		iCheckAliveLastIdx : INT; (*Check Alive Last Index In Table*)
		tyCheckAlivePing : tyHermesCheckAlive; (*Check Alive Ping*)
		iCheckAlivePingFirstIdx : INT; (*Check Alive Ping First Index In Table*)
		iCheckAlivePingLastIdx : INT; (*Check Alive Ping Last Index In Table*)
		tyCheckAlivePong : tyHermesCheckAlive; (*Check Alive Pong*)
		iCheckAlivePongFirstIdx : INT; (*Check Alive Pong First Index In Table*)
		iCheckAlivePongLastIdx : INT; (*Check Alive Pong Last Index In Table*)
		tyServiceDescription : tyHermesServiceDescription; (*Service Description*)
		iServiceDescriptionFirstIdx : INT; (*Service Description First Index In Table*)
		iServiceDescriptionLastIdx : INT; (*Service Description Last Index In Table*)
		tySServiceDescription : tyHermesSServiceDescription; (*Supervisory Service Description*)
		iSServiceDescriptionFirstIdx : INT; (*Supervisory Service Description First Index In Table*)
		iSServiceDescriptionLastIdx : INT; (*Supervisory Service Description Last Index In Table*)
		tyNotification : tyHermesNotification; (*Notification*)
		iNotificationFirstIdx : INT; (*Notification First Index In Table*)
		iNotificationLastIdx : INT; (*Notification Last Index In Table*)
		tyBoardAvailable : tyHermesBoardAvailable; (*Board Available*)
		iBoardAvailableFirstIdx : INT; (*Board Available First Index In Table*)
		iBoardAvailableLastIdx : INT; (*Board Available Last Index In Table*)
		iRevokeBoardAvailableFirstIdx : INT; (*Revoke Board Available First Index In Table*)
		iRevokeBoardAvailableLastIdx : INT; (*Revoke Board Available Last Index In Table*)
		tyMachineReady : tyHermesMachineReady; (*Machine Ready*)
		iMachineReadyFirstIdx : INT; (*Machine Ready First Index In Table*)
		iMachineReadyLastIdx : INT; (*Machine Ready Last Index In Table*)
		iRevokeMachineReadyFirstIdx : INT; (*Revoke Machine Ready First Index In Table*)
		iRevokeMachineReadyLastIdx : INT; (*Revoke Machine Ready Last Index In Table*)
		tyStartTransport : tyHermesStartTransport; (*Start Transport*)
		iStartTransportFirstIdx : INT; (*Start Transport First Index In Table*)
		iStartTransportLastIdx : INT; (*Start Transport Last Index In Table*)
		tyStopTransport : tyHermesStopTransport; (*Stop Transport*)
		iStopTransportFirstIdx : INT; (*Stop Transport First Index In Table*)
		iStopTransportLastIdx : INT; (*Stop Transport Last Index In Table*)
		tyTransportFinished : tyHermesTransportFinished; (*Transport Finished*)
		iTransportFinishedFirstIdx : INT; (*Transport Finished First Index In Table*)
		iTransportFinishedLastIdx : INT; (*Transport Finished Last Index In Table*)
		tySetConfiguration : tyHermesSetConfiguration; (*Set Configuration*)
		iSetConfigurationFirstIdx : INT; (*Set Configuration First Index In Table*)
		iSetConfigurationLastIdx : INT; (*Set Configuration Last Index In Table*)
		iGetConfigurationFirstIdx : INT; (*Get Configuration First Index In Table*)
		iGetConfigurationLastIdx : INT; (*Get Configuration Last Index In Table*)
		tyCurrentConfiguration : tyHermesCurrentConfiguration; (*Current Configuration*)
		iCurrentConfigurationFirstIdx : INT; (*Current Configuration First Index In Table*)
		iCurrentConfigurationLastIdx : INT; (*Current Configuration Last Index In Table*)
		tyBoardForecast : tyHermesBoardForecast; (*Board Forecast*)
		iBoardForecastFirstIdx : INT; (*Board Forecast First Index In Table*)
		iBoardForecastLastIdx : INT; (*Board Forecast Last Index In Table*)
		tyBoardArrived : tyHermesBoardArrived; (*Board Arrived*)
		iBoardArrivedFirstIdx : INT; (*Board Arrived First Index In Table*)
		iBoardArrivedLastIdx : INT; (*Board Arrived Last Index In Table*)
		tyBoardDeparted : tyHermesBoardDeparted; (*Board Departed*)
		iBoardDepartedFirstIdx : INT; (*Board Departed First Index In Table*)
		iBoardDepartedLastIdx : INT; (*Board DepartedLast Index In Table*)
		tyQueryBoardInfo : tyHermesQueryBoardInfo; (*Query Board Info*)
		iQueryBoardInfoFirstIdx : INT; (*Query Board Info First Index In Table*)
		iQueryBoardInfoLastIdx : INT; (*Query Board Info Last Index In Table*)
		tySendBoardInfo : tyHermesSendBoardInfo; (*Send Board Info*)
		iSendBoardInfoFirstIdx : INT; (*Send Board Info First Index In Table*)
		iSendBoardInfoLastIdx : INT; (*Send Board Info Last Index In Table*)
		tyQueryWorkOrderInfo : tyHermesQueryWorkOrderInfo; (*Query Work Order Info*)
		iQueryWorkOrderInfoFirstIdx : INT; (*Query Work Order Info First Index In Table*)
		iQueryWorkOrderInfoLastIdx : INT; (*Query Work Order Info Last Index In Table*)
		tySendWorkOrderInfo : tyHermesSendWorkOrderInfo; (*Send Work Order Info*)
		iSendWorkOrderInfoFirstIdx : INT; (*Send Work Order Info First Index In Table*)
		iSendWorkOrderInfoLastIdx : INT; (*Send Work Order Info Last Index In Table*)
		tyCommand : tyHermesCommand; (*Send Work Order Info*)
		iCommandFirstIdx : INT; (*Send Work Order Info First Index In Table*)
		iCommandLastIdx1 : INT; (*Send Work Order Info Last Index In Table*)
	END_VAR
	VAR
		p_tyXMLTable : REFERENCE TO tyXMLTableDat; (*XML Table Data*)
		p_tyXMLTable1 : REFERENCE TO tyXMLTableDat; (*XML Table Data*)
		udi : UDINT;
		iHermesIdx : INT;
		eMsgType : eHermesMsgType;
		sLowerCase : {REDUND_UNREPLICABLE} STRING[254];
		bSetUpstream : BOOL;
		bSetDownstream : BOOL;
		bCurrUpstream : BOOL;
		bCurrDownstream : BOOL;
		iSubBoardCntr : INT;
	END_VAR
END_FUNCTION_BLOCK
(**)
(*Parse XML Table Data*)

FUNCTION fHermesParseCheckAlive : BOOL (*Hermes Parse XML Table Data For Check Alive*)
	VAR_INPUT
		p_tyCheckAlive : REFERENCE TO tyHermesCheckAlive; (*Check Alive*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseServiceDescription : BOOL (*Hermes Parse XML Table Data For Service Description*)
	VAR_INPUT
		p_tyServiceDescription : REFERENCE TO tyHermesServiceDescription; (*Service Description*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseSServiceDescription : BOOL (*Hermes Parse XML Table Data For Supervisory Service Description*)
	VAR_INPUT
		p_tySServiceDescription : REFERENCE TO tyHermesSServiceDescription; (*Supervisory Service Description*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseNotification : BOOL (*Hermes Parse XML Table Data For Notification*)
	VAR_INPUT
		p_tyNotification : REFERENCE TO tyHermesNotification; (*Notification*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseBoardAvailable : BOOL (*Hermes Parse XML Table Data For Board Available*)
	VAR_INPUT
		p_tyBoardAvailable : REFERENCE TO tyHermesBoardAvailable; (*Board Available*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
		iSubBoardCntr : REFERENCE TO INT;
	END_VAR
END_FUNCTION

FUNCTION fHermesParseMachineReady : BOOL (*Hermes Parse XML Table Data For Machine Ready*)
	VAR_INPUT
		p_tyMachineReady : REFERENCE TO tyHermesMachineReady; (*Machine Ready*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseStartTransport : BOOL (*Hermes Parse XML Table Data For Start Transport*)
	VAR_INPUT
		p_tyStartTransport : REFERENCE TO tyHermesStartTransport; (*Start Transport*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseStopTransport : BOOL (*Hermes Parse XML Table Data For Stop Transport*)
	VAR_INPUT
		p_tyStopTransport : REFERENCE TO tyHermesStopTransport; (*Stop Transport*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseTransportFinished : BOOL (*Hermes Parse XML Table Data For Transport Finished*)
	VAR_INPUT
		p_tyTransportFinished : REFERENCE TO tyHermesTransportFinished; (*Transport Finished*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseSetConfiguration : BOOL (*Hermes Parse XML Table Data For Set Configuration*)
	VAR_INPUT
		p_tySetConfiguration : REFERENCE TO tyHermesSetConfiguration; (*Set Configuration*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
	VAR_IN_OUT
		bUpstream : BOOL;
		bDownstream : BOOL;
	END_VAR
END_FUNCTION

FUNCTION fHermesParseCurrentConfiguration : BOOL (*Hermes Parse XML Table Data For Current Configuration*)
	VAR_INPUT
		p_tyCurrentConfiguration : REFERENCE TO tyHermesCurrentConfiguration; (*Current Configuration*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case *)
	END_VAR
	VAR_IN_OUT
		bUpstream : BOOL;
		bDownstream : BOOL;
	END_VAR
END_FUNCTION

FUNCTION fHermesParseBoardForecast : BOOL (*Hermes Parse XML Table Data For Board Forecast*)
	VAR_INPUT
		p_tyBoardForecast : REFERENCE TO tyHermesBoardForecast; (*Board Forecast*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseQueryBoardInfo : BOOL (*Hermes Parse XML Table Data For Query Board Info*)
	VAR_INPUT
		p_tyQueryBoardInfo : REFERENCE TO tyHermesQueryBoardInfo; (*Query Board Info*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseSendBoardInfo : BOOL (*Hermes Parse XML Table Data For Send Board Info*)
	VAR_INPUT
		p_tySendBoardInfo : REFERENCE TO tyHermesSendBoardInfo; (*Send Board Info*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseBoardArrived : BOOL (*Hermes Parse XML Table Data For Board Arrived*)
	VAR_INPUT
		p_tyBoardArrived : REFERENCE TO tyHermesBoardArrived; (*Board Arrived*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseBoardDeparted : BOOL (*Hermes Parse XML Table Data For Board Departed*)
	VAR_INPUT
		p_tyBoardDeparted : REFERENCE TO tyHermesBoardDeparted; (*Board Departed*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseQueryWorkOrderInfo : BOOL (*Hermes Parse XML Table Data For Query Work Order Info*)
	VAR_INPUT
		p_tyQueryWorkOrderInfo : REFERENCE TO tyHermesQueryWorkOrderInfo; (*Query Work Order Info*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseSendWorkOrderInfo : BOOL (*Hermes Parse XML Table Data For Send Work Order Info*)
	VAR_INPUT
		p_tySendWorkOrderInfo : REFERENCE TO tyHermesSendWorkOrderInfo; (*Send Work Order Info*)
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION

FUNCTION fHermesParseCommand : BOOL
	VAR_INPUT
		p_tyCommand : REFERENCE TO tyHermesCommand;
		tyXMLTableCurr : tyXMLTableDat; (*Pointer To XML Table Current Index*)
		tyXMLTableNxt : tyXMLTableDat; (*Pointer To XML Table Next Index*)
		sCurrValueLowerCase : STRING[254]; (*Current Table Value In Upper Case*)
	END_VAR
END_FUNCTION
(**)
(*Form XML Table Data*)

FUNCTION fHermesFormCheckAlive : INT (*Hermes Form Check Alive Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..11] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesCheckAlive; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormServiceDescription : INT (*Hermes Form Supervisory Service Description Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..29] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesServiceDescription; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormSServiceDescription : INT (*Hermes Form Service Description Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..29] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesSServiceDescription; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormNotification : INT (*Hermes Form Notification Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..13] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesNotification; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormBoardAvailable : INT (*Hermes Form Board Available Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..49] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesBoardAvailable; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
		usiSubBoardCntr : USINT;
	END_VAR
END_FUNCTION

FUNCTION fHermesFormRevokeBoardAvailable : INT (*Hermes Form Revoke Board Available Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..7] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormMachineReady : INT (*Hermes Form Machine Ready Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..49] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesMachineReady; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormRevokeMachineReady : INT (*Hermes Form Revoke Machine Ready Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..7] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormStartTransport : INT (*Hermes Form Start Transport Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..11] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesStartTransport; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormStopTransport : INT (*Hermes Form Stop Transport Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..11] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesStopTransport; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormTransportFinished : INT (*Hermes Form Transport Finished Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..11] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesTransportFinished; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormSetConfiguration : INT (*Hermes Form Set Configuration Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..79] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesSetConfiguration; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
		iConfiguration : INT;
		i : INT;
	END_VAR
END_FUNCTION

FUNCTION fHermesFormGetConfiguration : INT (*Hermes Form Get Configuration Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..7] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormCurrentConfiguration : INT (*Hermes Form Current Configuration Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..199] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesCurrentConfiguration; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
		iConfiguration : INT;
		iConfiguration1 : INT;
		i : INT;
	END_VAR
END_FUNCTION

FUNCTION fHermesFormBoardForecast : INT (*Hermes Form Board Forecast Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..49] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesBoardForecast; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormQueryBoardInfo : INT (*Hermes Form Query Board Info Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..11] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesQueryBoardInfo; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormSendBoardInfo : INT (*Hermes Form Send Board Info Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..39] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesSendBoardInfo; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormBoardArrived : INT (*Hermes Form Board Arrived Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..49] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesBoardArrived; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormBoardDeparted : INT (*Hermes Form Board Departed Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..49] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesBoardDeparted; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormQueryWorkOrderInfo : INT (*Hermes Form Query Work Order Info Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..19] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesQueryWorkOrderInfo; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormSendWorkOrderInfo : INT (*Hermes Form Send Work Order Info Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..49] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesSendWorkOrderInfo; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION

FUNCTION fHermesFormCommand : INT (*Hermes Form Query Board Info Table Data (Total Index Written In Table)*)
	VAR_INPUT
		pa_tyXMLTable : REFERENCE TO ARRAY[0..11] OF tyXMLTableDat; (*Output - XML Table Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tyParameter : tyHermesCommand; (*Table Data Parameter*)
	END_VAR
	VAR
		sTimestamp : STRING[23]; (*Time Stamp*)
		iTotalIdxWrite : INT; (*Total Index Written*)
	END_VAR
END_FUNCTION
(**)
(*Check Parameter*)

FUNCTION fHermesChkParamBAMR : UDINT (*Hermes Checking Parameter Board Available & Machine Ready*)
	VAR_INPUT
		tyBoardAvailable : tyHermesBoardAvailable; (*Board Available*)
		tyMachineReady : tyHermesMachineReady; (*Machine Ready*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamBAST : UDINT (*Hermes Checking Parameter Board Available & Start Transport*)
	VAR_INPUT
		tyBoardAvailable : tyHermesBoardAvailable; (*Board Available*)
		tyStartTransport : tyHermesStartTransport; (*Start Transport*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSTST : UDINT (*Hermes Checking Parameter Start Transport & Stop Transport*)
	VAR_INPUT
		tyStartTransport : tyHermesStartTransport; (*Start Transport*)
		tyStopTransport : tyHermesStopTransport; (*Stop Transport*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSTTF : UDINT (*Hermes Checking Parameter Start Transport & Transport Finished*)
	VAR_INPUT
		tyStartTransport : tyHermesStartTransport; (*Start Transport*)
		tyTransportFinished : tyHermesTransportFinished; (*Transport Finished*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamBFMR : UDINT (*Hermes Checking Parameter Board Forecast & Machine Ready*)
	VAR_INPUT
		tyBoardForecast : tyHermesBoardForecast; (*Board Forecast*)
		tyMachineReady : tyHermesMachineReady; (*Machine Ready*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSD : UDINT (*Hermes Checking Parameter Service Description*)
	VAR_INPUT
		tyServiceDescription : tyHermesServiceDescription; (*Service Description*)
		iLaneId : INT; (*Lane ID*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSSD : UDINT (*Hermes Checking Parameter Supervisory Service Description*)
	VAR_INPUT
		tyServiceDescription : tyHermesSServiceDescription; (*Supervisory Service Description*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamN : UDINT (*Hermes Checking Parameter Notification*)
	VAR_INPUT
		tyNotification : tyHermesNotification; (*Notification*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamBA : UDINT (*Hermes Checking Parameter Board Available*)
	VAR_INPUT
		tyBoardAvailable : tyHermesBoardAvailable; (*Board Available*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamMR : UDINT (*Hermes Checking Parameter Machine Ready*)
	VAR_INPUT
		tyMachineReady : tyHermesMachineReady; (*Machine Ready*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSAT : UDINT (*Hermes Checking Parameter Start Transport*)
	VAR_INPUT
		tyStartTransport : tyHermesStartTransport; (*Start Transport*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSOT : UDINT (*Hermes Checking Parameter Stop Transport*)
	VAR_INPUT
		tyStopTransport : tyHermesStopTransport; (*Stop Transport*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamTF : UDINT (*Hermes Checking Parameter Transport Finished*)
	VAR_INPUT
		tyTransportFinished : tyHermesTransportFinished; (*Transport Finished*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSC : UDINT (*Hermes Checking Parameter Set Configuration*)
	VAR_INPUT
		tySetConfiguration : tyHermesSetConfiguration; (*Set Configuration*)
		sMachineId : STRING[80]; (*Machine ID*)
	END_VAR
	VAR
		i : INT;
		a_iIPPart : ARRAY[1..4] OF INT;
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamCC : UDINT (*Hermes Checking Parameter Current Configuration*)
	VAR_INPUT
		tyCurrentConfiguration : tyHermesCurrentConfiguration; (*Current Configuration*)
		sMachineId : STRING[80]; (*Machine ID*)
	END_VAR
	VAR
		i : INT;
		a_iIPPart : ARRAY[1..4] OF INT;
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamBF : UDINT (*Hermes Checking Parameter Board Forecast*)
	VAR_INPUT
		tyBoardForecast : tyHermesBoardForecast; (*Board Forecast*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamQBI : UDINT (*Hermes Checking Parameter Query Board Info*)
	VAR_INPUT
		tyQueryBoardInfo : tyHermesQueryBoardInfo; (*Query Board Info*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSBIQBI : UDINT (*Hermes Checking Parameter Send Board Info & Query Board Info*)
	VAR_INPUT
		tySendBoardInfo : tyHermesSendBoardInfo; (*Send Board Info*)
		tyQueryBoardInfo : tyHermesQueryBoardInfo; (*Query Board Info*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamSWQW : UDINT (*Hermes Checking Parameter Send Work Order & Query Work Order*)
	VAR_INPUT
		tySendWorkOrderInfo : tyHermesSendWorkOrderInfo; (*Send Work Order Info*)
		tyQueryWorkOrderInfo : tyHermesQueryWorkOrderInfo; (*Query Work Order Info*)
	END_VAR
END_FUNCTION

FUNCTION fHermesChkParamCommand : UDINT (*Hermes Checking Parameter Send Work Order & Query Work Order*)
	VAR_INPUT
		tyCommand : tyHermesCommand; (*Send Work Order Info*)
	END_VAR
END_FUNCTION
(**)
(*Notification*)

FUNCTION fHermesNotificationRstConn : BOOL (*Hermes Notification Reset Connection*)
	VAR_INPUT
		tyNotification : tyHermesNotification; (*Notification*)
	END_VAR
END_FUNCTION

FUNCTION fHermesNotificationRstState : BOOL (*Hermes Notification Reset State*)
	VAR_INPUT
		tyNotification : tyHermesNotification; (*Notification*)
	END_VAR
END_FUNCTION
(**)
(*Check Alive*)

FUNCTION_BLOCK fbHermesCheckAlive (*Hermes Check Alive*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bDataRcv : BOOL; (*Check Alive Data Receive*)
		tSendTm : TIME; (*Send Check Alive Ping Timer*)
		tRcvTimeOut : TIME; (*Receive Check Alive Pong Time Out*)
	END_VAR
	VAR_OUTPUT
		bDataSend : BOOL; (*Check Alive Data Ping Send*)
		tyDataSend : tyHermesCheckAlive; (*Check Alive Sent Data Ping*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		fbSendTm : TON;
		fbRcvTO : TON;
		zzEdge00000 : BOOL;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbHermesCheckAliveSendPing (*Hermes Check Alive Send Ping Wait Pong*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bDataRcv : BOOL; (*Check Alive Data Receive*)
		tyDataRcv : tyHermesCheckAlive; (*Check Alive Received Data*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		tSendTm : TIME; (*Send Check Alive Ping Timer*)
		tRcvTimeOut : TIME; (*Receive Check Alive Pong Time Out*)
	END_VAR
	VAR_OUTPUT
		bDataSend : BOOL; (*Check Alive Data Ping Send*)
		tyDataSend : tyHermesCheckAlive; (*Check Alive Sent Data Ping*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		fbSendTm : TON;
		fbRcvTO : TON;
		zzEdge00000 : BOOL;
		zzEdge00001 : BOOL;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbHermesCheckAliveRcvPing (*Hermes Check Alive Receive Ping Send Pong*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bDataRcv : BOOL; (*Check Alive Data Receive*)
		tyDataRcv : tyHermesCheckAlive; (*Check Alive Received Data*)
	END_VAR
	VAR_OUTPUT
		bDataSend : BOOL; (*Check Alive Data Ping Send*)
		tyDataSend : tyHermesCheckAlive; (*Check Alive Sent Data Ping*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		zzEdge00000 : BOOL;
	END_VAR
END_FUNCTION_BLOCK
(**)
(*Illegal Message*)

FUNCTION fHermesIllegalMsgUS : UDINT (*Hermes Illegal Message - Upstream*)
	VAR_INPUT
		eState : eHermesState; (*Hermes States*)
		tyMsgType : tyHermesMsgType; (*Hermes Message Type*)
		bBoardAvailable : BOOL; (*Board Available*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgDS : UDINT (*Hermes Illegal Message - Downstream*)
	VAR_INPUT
		eState : eHermesState; (*Hermes States*)
		tyMsgType : tyHermesMsgType; (*Hermes Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgRmt : UDINT (*Hermes Illegal Message - Remote*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgSvy : UDINT (*Hermes Illegal Message - Supervisory*)
	VAR_INPUT
		eState : eHermesState; (*Hermes States*)
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgNotConnectedUS : UDINT (*Hermes Illegal Message - Not Connected For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgSrvcDescripUS : UDINT (*Hermes Illegal Message - Service Description For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgNotAvlNotRdyUS : UDINT (*Hermes Illegal Message - Not Available Not Ready For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgBrdAvlUS : UDINT (*Hermes Illegal Message - Board Available For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgMcRdyUS : UDINT (*Hermes Illegal Message - Machine Ready For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgAvlAndRdyUS : UDINT (*Hermes Illegal Message - Available And Ready For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgTransportingUS : UDINT (*Hermes Illegal Message - Transporting For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
		bBoardAvailable : BOOL; (*Board Available*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgTransportStopUS : UDINT (*Hermes Illegal Message - Transport Stopped For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
		bBoardAvailable : BOOL; (*Board Available*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgTransportFiniUS : UDINT (*Hermes Illegal Message - Transport Finished For Upstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgNotConnectedDS : UDINT (*Hermes Illegal Message - Not Connected For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgSrvcDescripDS : UDINT (*Hermes Illegal Message - Service Description For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgNotAvlNotRdyDS : UDINT (*Hermes Illegal Message - Not Available Not Ready For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgBrdAvlDS : UDINT (*Hermes Illegal Message - Board Available For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgMcRdyDS : UDINT (*Hermes Illegal Message - Machine Ready For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgAvlAndRdyDS : UDINT (*Hermes Illegal Message - Available And Ready For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgTransportingDS : UDINT (*Hermes Illegal Message - Transporting For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgTransportStopDS : UDINT (*Hermes Illegal Message - Transport Stopped For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgTransportFiniDS : UDINT (*Hermes Illegal Message - Transport Finished For Downstream*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgNotConnectedSvy : UDINT (*Hermes Illegal Message - Not Connected For Supervisory*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgSrvcDescripSvy : UDINT (*Hermes Illegal Message - Service Description For Supervisory*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesIllegalMsgConnectedSvy : UDINT (*Hermes Illegal Message - Connected For Supervisory*)
	VAR_INPUT
		tyMsgType : tyHermesMsgType; (*Message Type*)
	END_VAR
END_FUNCTION
(**)
(*Others*)

FUNCTION fHermesGenerateUUID : BOOL (*Hermes Generate UUID*)
	VAR_INPUT
		p_sUUID : REFERENCE TO STRING[36]; (*Output - UUID*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
		a_usiMacAddr : ARRAY[0..5] OF USINT; (*Mac Address*)
	END_VAR
	VAR
		sTemp4 : STRING[4];
		sTemp2 : STRING[2];
	END_VAR
END_FUNCTION

FUNCTION fHermesGetTimestamp : BOOL (*Hermes Get Timestamp*)
	VAR_INPUT
		p_sTimestamp : REFERENCE TO STRING[23]; (*Output - Timestamp*)
		tyDTStructure : DTStructure; (*Date And Time Structure*)
	END_VAR
	VAR
		sYear : STRING[4];
		sMonth : STRING[2];
		sDay : STRING[2];
		sHour : STRING[2];
		sMinute : STRING[2];
		sSecond : STRING[2];
		sMillisec : STRING[3];
	END_VAR
END_FUNCTION

FUNCTION fHermesRmvOneMsgSend : BOOL (*Hermes Remove One Message Send Buffer*)
	VAR_INPUT
		pa_eMsgSend : REFERENCE TO ARRAY[0..50] OF eHermesMsgType; (*Hermes Message Send Buffer*)
		p_udiIdx : REFERENCE TO UDINT; (*Index*)
	END_VAR
END_FUNCTION

FUNCTION fHermesAddOneMsgSend : BOOL (*Hermes Add One Message Send Buffer*)
	VAR_INPUT
		pa_eMsgSend : REFERENCE TO ARRAY[0..50] OF eHermesMsgType; (*Hermes Message Send Buffer*)
		p_udiIdx : REFERENCE TO UDINT; (*Index*)
		eMsgType : eHermesMsgType; (*New Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesBrdAvltoBF : BOOL
	VAR_INPUT
		tyHermesBoardForecast : REFERENCE TO tyHermesBoardForecast;
		tyHermesBoardAvailable : REFERENCE TO tyHermesBoardAvailable;
	END_VAR
END_FUNCTION
(*Command*)

FUNCTION fHermesRmvOneCmdTyp : BOOL (*Hermes Remove One Message Send Buffer*)
	VAR_INPUT
		pa_eCmd : REFERENCE TO ARRAY[0..20] OF eHermesCommand; (*Hermes Message Send Buffer*)
		p_udiIdx : REFERENCE TO UDINT; (*Index*)
	END_VAR
END_FUNCTION

FUNCTION fHermesAddOneCmdTyp : BOOL (*Hermes Add One Message Send Buffer*)
	VAR_INPUT
		pa_eCmd : REFERENCE TO ARRAY[0..20] OF eHermesCommand; (*Hermes Message Send Buffer*)
		p_udiIdx : REFERENCE TO UDINT; (*Index*)
		eCmd : eHermesCommand; (*New Message Type*)
	END_VAR
END_FUNCTION

FUNCTION fHermesAddOneCommandGate : USINT
	VAR_INPUT
		bUsTrueDsFalse : BOOL;
		tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		sInterface : REFERENCE TO STRING[80];
		udiComMode : REFERENCE TO UDINT;
		tyCommandProcessList : REFERENCE TO ARRAY[0..c_diHermesConfigMaxInterfaceIdx] OF tyHermesCmdProcessList;
		p_udiIdx : REFERENCE TO USINT; (*Index*)
	END_VAR
END_FUNCTION

FUNCTION fHermesProcessCmd : BOOL
	VAR_INPUT
		tyCommandProcessList : REFERENCE TO ARRAY[0..c_diHermesConfigMaxInterfaceIdx] OF tyHermesCmdProcessList;
		tyHermesCmdPause : REFERENCE TO ARRAY[0..c_diHermesConfigMaxInterfaceIdx] OF tyHermesCommandPause;
		a_usiCommandIdx : REFERENCE TO ARRAY[0..c_diHermesConfigMaxInterfaceIdx] OF USINT;
	END_VAR
	VAR
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_udiHermesCmpCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdPause : REFERENCE TO tyHermesCommandPause;
		p_sCmpInterface : REFERENCE TO STRING[80];
		p_sInterface : REFERENCE TO STRING[80];
		p_udiComMode : REFERENCE TO UDINT;
		usiIdx : USINT;
		usiCmpIdx : USINT;
		usiPrevCmdIdx : USINT;
	END_VAR
END_FUNCTION

FUNCTION fHermesBroadCastCommand : BOOL
	VAR_INPUT
		tyCommandProcessList : REFERENCE TO ARRAY[0..c_diHermesConfigMaxInterfaceIdx] OF tyHermesCmdProcessList;
		a_usiCommandIdx : REFERENCE TO ARRAY[0..c_diHermesConfigMaxInterfaceIdx] OF USINT;
	END_VAR
	VAR
		usiIdx : USINT;
		usiCmpIdx : USINT;
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_sInterface : REFERENCE TO STRING[80];
		p_sCmpInterface : REFERENCE TO STRING[80];
		p_udiComMode : REFERENCE TO UDINT;
	END_VAR
END_FUNCTION

FUNCTION fHermesRcvCmdReqToPause : BOOL
	VAR_INPUT
		p_usiCommandIdx : REFERENCE TO USINT;
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdPause : REFERENCE TO tyHermesCommandPause;
	END_VAR
END_FUNCTION

FUNCTION fHermesSndCmdReqToPause : BOOL
	VAR_INPUT
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdPause : REFERENCE TO tyHermesCommandPause;
	END_VAR
END_FUNCTION

FUNCTION fHermesRcvCmdReqFromPause : BOOL
	VAR_INPUT
		p_usiCommandIdx : REFERENCE TO USINT;
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdPause : REFERENCE TO tyHermesCommandPause;
	END_VAR
END_FUNCTION

FUNCTION fHermesSndCmdReqFromPause : BOOL
	VAR_INPUT
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdPause : REFERENCE TO tyHermesCommandPause;
	END_VAR
END_FUNCTION

FUNCTION fHermesRcvCmdReqFromLockCov : BOOL
	VAR_INPUT
		p_usiCommandIdx : REFERENCE TO USINT;
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdLockCov : REFERENCE TO tyHermesCommandLockConv;
	END_VAR
END_FUNCTION

FUNCTION fHermesSndCmdReqToLockConv : BOOL
	VAR_INPUT
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdLockCov : REFERENCE TO tyHermesCommandLockConv;
	END_VAR
END_FUNCTION

FUNCTION fHermesRcvCmdReqFromOvenInfeed : BOOL
	VAR_INPUT
		p_usiCommandIdx : REFERENCE TO USINT;
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdOvenInfeed : REFERENCE TO tyHermesCommandOvenInfeed;
	END_VAR
END_FUNCTION

FUNCTION fHermesSndCmdReqToOvenInfeed : BOOL
	VAR_INPUT
		p_tyHermesCmdParam : REFERENCE TO tyHermesCommandParam;
		p_tyHermesCmdOvenInfeed : REFERENCE TO tyHermesCommandOvenInfeed;
	END_VAR
END_FUNCTION
