
FUNCTION_BLOCK fbOPCUAConnect (*OPCUA Connect*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tyOPCUAParam : tyOPCUAParam; (*OPCUA Parameter*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
	END_VAR
	VAR_OUTPUT
		dwConnectionHdl : DWORD; (*Connection Handle*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOPCUADisconnect (*OPCUA Disconnect*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		dwConnectionHdl : DWORD; (*Connection Handle*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOPCUAGetConnectionStatus (*OPCUA Get Connection Status*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		dwConnectionHdl : DWORD; (*Connection Handle*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
	END_VAR
	VAR_OUTPUT
		eConnectionStat : UAConnectionStatus; (*OPCUA Connection Status*)
		eServerStat : UAServerState; (*OPCUA Server State*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOPCUAGetNodeHdlList (*OPCUA Get Node Handle List*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		dwConnectionHdl : DWORD; (*Connection Handle*)
		uiTagNmCnt : UINT; (*Tag Name Counter*)
		a_sServerTagNm : ARRAY[0..MAX_INDEX_NODELIST] OF STRING[255]; (*Server Tag Name List*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
	END_VAR
	VAR_OUTPUT
		a_dwNodeHdlList : ARRAY[0..MAX_INDEX_NODELIST] OF DWORD; (*Node Handle List*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOPCUARlsNodeHdlList (*OPCUA Release Node Handle List*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		dwConnectionHdl : DWORD; (*Connection Handle*)
		uiTagNmCnt : UINT; (*Tag Name Counter*)
		a_dwNodeHdlList : ARRAY[0..MAX_INDEX_NODELIST] OF DWORD; (*Node Handle List*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOPCUAReadList (*OPCUA Read*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		dwConnectionHdl : DWORD; (*Connection Handle*)
		uiTagNmCnt : UINT; (*Tag Name Counter*)
		a_dwNodeHdlList : ARRAY[0..MAX_INDEX_NODELIST] OF DWORD; (*Node Handle List*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
		a_sClientTagNm : ARRAY[0..MAX_INDEX_NODELIST] OF STRING[255]; (*Client Tag Name List*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOPCUAWriteList (*OPCUA Write*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		dwConnectionHdl : DWORD; (*Connection Handle*)
		uiTagNmCnt : UINT; (*Tag Name Counter*)
		a_dwNodeHdlList : ARRAY[0..MAX_INDEX_NODELIST] OF DWORD; (*Node Handle List*)
		tTimeOut : TIME := T#10s; (*OPCUA Time Out*)
		a_sClientTagNm : ARRAY[0..MAX_INDEX_NODELIST] OF STRING[255]; (*Client Tag Name List*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyOPCUAInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
