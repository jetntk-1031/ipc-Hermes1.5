
FUNCTION_BLOCK fbTCPClntConnect (*TCP Client Connect*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sClntIP : STRING[15]; (*Client IP Address*)
		sSvrIP : STRING[15]; (*Server IP Address*)
		uiClntPort : UINT; (*Client Port Address*)
		uiSvrPort : UINT; (*Server Port Address*)
		udiSndBffrSize : UDINT; (*0 = Default, Not 0 = Send Buffer Size*)
		udiRcvBffrSize : UDINT; (*0 = Default, Not 0 = Receive Buffer Size*)
		udiAliveIdleTmInSec : UDINT; (*0 = OFF, Not 0 = Idle Time In Seconds*)
		tConnectTO : TIME := T#5s; (*Connect Time Out*)
	END_VAR
	VAR_OUTPUT
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
		udiErrorStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPClntConnectInternal; (*Group of Local Variable for fbTCPClntConnect*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPSvrListenFltr (*TCP Server Listen With Filter*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiSvrIdent : UDINT; (*Server Ident*)
		bFltrIP : BOOL; (*Filter IP Address*)
		bFltrPort : BOOL; (*Filter Port Address*)
		a_sConfigIP : ARRAY[1..c_diTCPClntNum] OF STRING[15]; (*Configure IP Address*)
		a_uiConfigPort : ARRAY[1..c_diTCPClntNum] OF UINT; (*Configure Port Address*)
	END_VAR
	VAR_OUTPUT
		sConnectedIP : STRING[15]; (*Connected IP*)
		uiConnectedPort : UINT; (*Connected Port*)
		udiClntIdent : UDINT; (*Client Ident*)
		diConnectedIdx : DINT; (*Connected Index*)
		bRejected : BOOL; (*Rejected*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPSvrListenInternal; (*Group of Local Variable for fbTCPSvrListen*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPCreateSvr (*TCP Create Server*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sSvrIP : STRING[15]; (*Server IP Address*)
		uiSvrPort : UINT; (*Server Port Address*)
		udiSndBffrSize : UDINT; (*0 = Default, Not 0 = Send Buffer Size*)
		udiRcvBffrSize : UDINT; (*0 = Default, Not 0 = Receive Buffer Size*)
		udiAliveIdleTmInSec : UDINT; (*0 = OFF, Not 0 = Idle Time In Seconds*)
	END_VAR
	VAR_OUTPUT
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPCreateSvrInternal; (*Group of Local Variable for fbTCPCreateSvr*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION_BLOCK fbTCPSnd (*TCP Send*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiSndSize : UDINT; (*Send Size*)
		p_BffrDest : UDINT; (*Buffer Destination*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPSndInternal; (*Group of Local Variable for fbTCPSnd*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPRcv (*TCP Receive*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiBffrSize : UDINT; (*Buffer Size*)
		p_BffrDest : UDINT; (*Buffer Destination*)
	END_VAR
	VAR_OUTPUT
		udiDataSizeRcv : UDINT; (*Data Size Receive*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPRcvInternal; (*Group of Local Variable for fbTCPRcv*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPConnect (*TCP Connect*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		sSvrIP : STRING[15]; (*Server IP*)
		uiSvrPort : UINT; (*Server Port*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPConnectInternal; (*Group of Local Variable for fbTCPConnect*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPListen (*TCP Listen*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiSvrIdent : UDINT; (*Server Ident*)
	END_VAR
	VAR_OUTPUT
		sConnectedIP : STRING[15]; (*Connected IP*)
		uiConnectedPort : UINT; (*Connected Port*)
		udiClntIdent : UDINT; (*Client Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPListenInternal; (*Group of Local Variable for fbTCPListen*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPClose (*TCP Close*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPCloseInternal; (*Group of Local Variable for fbTCPClose*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPOpenPort (*TCP Open Port*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sIP : STRING[15]; (*IP Address*)
		uiPort : UINT; (*Port Address*)
	END_VAR
	VAR_OUTPUT
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPOpenPortInternal; (*Group of Local Variable for fbTCPOpenPort*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPListenNoWaitingSet (*TCP No Waiting Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		bEnNoWaiting : BOOL; (*False = OFF, True = ON*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPAliveEnSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPSndBffrSet (*TCP Send Buffer Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiSndBffrSize : UDINT; (*0 = Default, Not 0 = Send Buffer Size*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPSndBffrSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPRcvBffrSet (*TCP Receive Buffer Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiRcvBffrSize : UDINT; (*0 = Default, Not 0 = Receive Buffer Size*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPRcvBffrSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPKeepAliveSet (*TCP Keep Alive Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiEn : UDINT := 1; (*0 = OFF, Not 0 = ON*)
		udiCnt : UDINT := 3; (*0 = OFF, Not 0 = Packet Count*)
		udiIdleTmInSec : UDINT := 1; (*0 = OFF, Not 0 = Idle Time In Seconds*)
		udiIntvlTmInSec : UDINT := 1; (*0 = OFF, Not 0 = Interval Time In Seconds*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPKeepAliveSetInternal; (*Group of Local Variable for fbTCPAliveEnSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPAliveEnSet (*TCP Keep Alive Enable Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiEn : UDINT := 1; (*0 = OFF, Not 0 = ON*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPAliveEnSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPAliveCntSet (*TCP Keep Alive Count Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiCnt : UDINT := 3; (*0 = OFF, Not 0 = Packet Count*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPAliveCntSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPAliveIdleSet (*TCP Keep Alive Idle Time Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiIdleTmInSec : UDINT := 1; (*0 = OFF, Not 0 = Idle Time In Seconds*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPAliveIdleSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPAliveIntvlSet (*TCP Keep Alive Interval Time Set*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiTCPIdent : UDINT; (*TCP Ident*)
		udiIntvlTmInSec : UDINT := 1; (*0 = OFF, Not 0 = Interval Time In Seconds*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPAliveIntvlSet*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTCPIdentListGet (*TCP Ident List Get*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
	END_VAR
	VAR_OUTPUT
		a_udiIdent : ARRAY[1..c_diTCPClntNum] OF UDINT; (*Ident List*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyTCPIoCtlSetInternal; (*Group of Local Variable for fbTCPIdentListGet*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION fTCPFltr : DINT (*TCP Filter*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		bFltrIP : BOOL; (*Filter IP Address*)
		bFltrPort : BOOL; (*Filter Port Address*)
		sIP : STRING[15]; (*IP Address*)
		uiPort : UINT; (*Port Address*)
		a_sConfigIP : ARRAY[1..c_diTCPClntNum] OF STRING[15]; (*Configure IP Address*)
		a_uiConfigPort : ARRAY[1..c_diTCPClntNum] OF UINT; (*Configure Port Address*)
	END_VAR
	VAR
		diMatchIP : DINT;
		diMatchPort : DINT;
	END_VAR
END_FUNCTION

FUNCTION fTCPFltrIP : DINT (*TCP Filter IP*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		sIP : STRING[15]; (*IP Address*)
		a_sConfigIP : ARRAY[1..c_diTCPClntNum] OF STRING[15]; (*Configure IP Address*)
	END_VAR
	VAR
		diMatchIP : DINT;
	END_VAR
END_FUNCTION

FUNCTION fTCPFltrPort : DINT (*TCP Filter Port*) (*$GROUP=Nutek,$CAT=Nutek,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		uiPort : UINT; (*Port Address*)
		a_uiConfigPort : ARRAY[1..c_diTCPClntNum] OF UINT; (*Configure Port Address*)
	END_VAR
	VAR
		diMatchPort : DINT;
	END_VAR
END_FUNCTION
