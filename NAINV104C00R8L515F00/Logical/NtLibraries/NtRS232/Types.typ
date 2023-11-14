(*Main*)

TYPE
	tyFrmInternal : 	STRUCT  (*Local Variables*)
		sMode : STRING[80]; (*Mode*)
		fbFrmXopen : FRM_xopen;
		fbFrmRead : FRM_read;
		fbFrmWrite : FRM_write;
		fbFrmRelBufRead : FRM_rbuf;
		fbFrmClose : FRM_close;
	END_STRUCT;
	tyFrmInternal1 : 	STRUCT  (*Local Variables*)
		fbFrmOpen : fbFrmOpen;
		fbFrmRead : fbFrmRead;
		fbFrmWrite : fbFrmWrite;
		fbFrmRlsBufRead : fbFrmRlsBufRead;
		fbFrmClose : fbFrmClose;
		usiStep : USINT;
		udiIdent : UDINT;
		p_DataRead : UDINT;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyFrmParam : 	STRUCT  (*Communication Parameter*)
		sDevice : STRING[30] := 'IF1'; (*Device Name*)
		eBaudRate : eRS232BaudRate := RS232BaudRate9600; (*Baud Rate*)
		eParity : eRS232Parity := RS232ParityNone; (*Parity*)
		eDataBits : eRS232DataBits := RS232DataBits8; (*Data Bits*)
		eStopBits : eRS232StopBits := RS232StopBits1; (*Stop Bits*)
	END_STRUCT;
	eRS232BaudRate : 
		( (*Baud Rate*)
		RS232BaudRate2400, (*2400*)
		RS232BaudRate4800, (*4800*)
		RS232BaudRate9600, (*9600*)
		RS232BaudRate19200, (*19200*)
		RS232BaudRate38400, (*38400*)
		RS232BaudRate57600, (*57600*)
		RS232BaudRate115200 (*115200*)
		);
	eRS232Parity : 
		( (*Parity*)
		RS232ParityNone, (*None*)
		RS232ParityEven, (*Even*)
		RS232ParityOdd (*Odd*)
		);
	eRS232DataBits : 
		( (*Data Bits*)
		RS232DataBits7, (*7*)
		RS232DataBits8 (*8*)
		);
	eRS232StopBits : 
		( (*Stop Bits*)
		RS232StopBits1, (*1*)
		RS232StopBits2 (*2*)
		);
END_TYPE

(**)

TYPE
	tyFltInternal : 	STRUCT  (*Local Variables*)
		fbFltRead : fltRead;
		fbFltWrite : fltWrite;
	END_STRUCT;
	tyFltInternal1 : 	STRUCT  (*Local Variables*)
		fbFltRead : fbFltRead;
		fbFltWrite : fbFltWrite;
	END_STRUCT;
END_TYPE
