
TYPE
	tyOPCUAInternal : 	STRUCT  (*Local Variables*)
		fbConnect : UA_Connect := (SessionConnectInfo:=(MonitorConnection:=T#500ms)); (*OPCUA Connect*)
		fbDisconnect : UA_Disconnect; (*OPCua Disconnect*)
		fbGetNodeHdlList : UA_NodeGetHandleList; (*Get OPCUA Node Handles*)
		fbRlsNodeHdlList : UA_NodeReleaseHandleList; (*Release OPCUA Node Handles*)
		fbReadList : UA_ReadList; (*Read Data Through OPCUA*)
		fbWriteList : UA_WriteList; (*Write Data Through OPCUA*)
		fbGetConnectionStatus : UA_ConnectionGetStatus; (*Get OPCUA Connection Status*)
		ui : UINT;
	END_STRUCT;
	tyOPCUAParam : 	STRUCT  (*OPCUA Parameter*)
		sIPAddr : STRING[15]; (*IP Address*)
		sPort : STRING[10]; (*Port*)
	END_STRUCT;
END_TYPE
