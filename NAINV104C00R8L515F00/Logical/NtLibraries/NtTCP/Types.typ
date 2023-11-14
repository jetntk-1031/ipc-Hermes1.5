
TYPE
	eTCPClntConnectStat : 
		( (*State*)
		TCPClntConnectStatOpen, (*Open*)
		TCPClntConnectStatSetup, (*Setup*)
		TCPClntConnectStatConnect, (*Open*)
		TCPClntConnectStatClose (*Open*)
		);
	eTCPCreateSvrStat : 
		( (*State*)
		TCPCreateSvrStatOpen, (*Open*)
		TCPCreateSvrStatSetup, (*Setup*)
		TCPCreateSvrStatClose (*Open*)
		);
	eTCPSvrListenStat : 
		( (*State*)
		TCPSvrListenStatListen, (*Open*)
		TCPSvrListenStatClose (*Setup*)
		);
END_TYPE

(**)

TYPE
	tyTCPClntConnectInternal : 	STRUCT  (*Local Variables*)
		eStat : eTCPClntConnectStat; (*State*)
		fbTCPOpenPort : fbTCPOpenPort; (*TCP Open Port*)
		fbTCPSndBffrSet : fbTCPSndBffrSet; (*TCP Send Buffer Set*)
		fbTCPRcvBffrSet : fbTCPRcvBffrSet; (*TCP Receive Buffer Set*)
		fbTCPKeepAliveSet : fbTCPKeepAliveSet; (*TCP Keep Alive Set*)
		fbTCPListenNoWaitingSet : fbTCPListenNoWaitingSet; (*TCP Keep Alive Set*)
		fbTCPConnect : fbTCPConnect; (*TCP Connect*)
		fbTCPClose : fbTCPClose; (*TCP Close*)
		fbConnectTO : TON; (*Connect Time Out*)
		usiSetupStep : USINT; (*Setup Step*)
		udiErrStatus : UDINT; (*Error Status*)
	END_STRUCT;
	tyTCPCreateSvrInternal : 	STRUCT  (*Local Variables*)
		eStat : eTCPCreateSvrStat; (*State*)
		fbTCPOpenPort : fbTCPOpenPort; (*TCP Open Port*)
		fbTCPSndBffrSet : fbTCPSndBffrSet; (*TCP Send Buffer Set*)
		fbTCPRcvBffrSet : fbTCPRcvBffrSet; (*TCP Receive Buffer Set*)
		fbTCPKeepAliveSet : fbTCPKeepAliveSet; (*TCP Keep Alive Set*)
		fbTCPListenNoWaitingSet : fbTCPListenNoWaitingSet; (*TCP Keep Alive Set*)
		fbTCPClose : fbTCPClose; (*TCP Close*)
		usiSetupStep : USINT; (*Setup Step*)
		udiErrStatus : UDINT; (*Error Status*)
	END_STRUCT;
	tyTCPSvrListenInternal : 	STRUCT  (*Local Variables*)
		eStat : eTCPSvrListenStat; (*State*)
		fbTCPListen : fbTCPListen; (*TCP Listen*)
		fbTCPClose : fbTCPClose; (*TCP Close*)
		di : DINT; (*i*)
		diFltr : DINT; (*Filter*)
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyTCPOpenPortInternal : 	STRUCT  (*Local Variables*)
		fbTCPOpen : TcpOpen; (*TCP Open*)
	END_STRUCT;
	tyTCPConnectInternal : 	STRUCT  (*Local Variables*)
		fbTCPConnect : TcpClient; (*TCP Connect*)
	END_STRUCT;
	tyTCPListenInternal : 	STRUCT  (*Local Variables*)
		fbTCPListen : TcpServer; (*TCP Listen*)
	END_STRUCT;
	tyTCPSndInternal : 	STRUCT  (*Local Variables*)
		fbTCPSnd : TcpSend; (*TCP Send*)
		usiRetryCnt : USINT; (*Retry Count*)
	END_STRUCT;
	tyTCPRcvInternal : 	STRUCT  (*Local Variables*)
		fbTCPRcv : TcpRecv; (*TCP Receive*)
	END_STRUCT;
	tyTCPCloseInternal : 	STRUCT  (*Local Variables*)
		fbTCPClose : TcpClose; (*TCP Close*)
	END_STRUCT;
	tyTCPIoCtlSetInternal : 	STRUCT  (*Local Variables*)
		fbTCPIoCtl : TcpIoctl; (*TCP Io Control*)
	END_STRUCT;
	tyTCPKeepAliveSetInternal : 	STRUCT  (*Local Variables*)
		fbTCPAliveEnSet : fbTCPAliveEnSet; (*TCP Alive Enable Set*)
		fbTCPAliveCntSet : fbTCPAliveCntSet; (*TCP Alive Count Set*)
		fbTCPAliveIdleSet : fbTCPAliveIdleSet; (*TCP Alive Idle Set*)
		fbTCPAliveIntvlSet : fbTCPAliveIntvlSet; (*TCP Alive Interval Set*)
		usiStep : USINT; (*Step*)
	END_STRUCT;
END_TYPE

(**)
