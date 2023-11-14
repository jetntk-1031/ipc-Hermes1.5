
FUNCTION_BLOCK fbFrmFullReadUntilValid (*Frame Full Read Data Until Valid*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tyCommParam : {REDUND_UNREPLICABLE} tyFrmParam; (*Address of a string which uniquely identifies the interface used.*)
		tyXOpenConfig : {REDUND_UNREPLICABLE} XOPENCONFIG := (idle:=10,delimc:=0,delim:=[2(0)],tx_cnt:=2,rx_cnt:=2,tx_len:=256,rx_len:=256,argc:=0,argv:=0); (*xopen configuration*)
		p_Data : UDINT; (*Pointer To Data Read*)
		uiMaxLen : UINT; (*Data Read Maximum Length*)
	END_VAR
	VAR_OUTPUT
		uiLen : UINT; (*Data Read Length*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal1; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFrmFullRead (*Frame Full Read Data*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tyCommParam : {REDUND_UNREPLICABLE} tyFrmParam; (*Address of a string which uniquely identifies the interface used.*)
		tyXOpenConfig : {REDUND_UNREPLICABLE} XOPENCONFIG := (idle:=10,delimc:=0,delim:=[2(0)],tx_cnt:=2,rx_cnt:=2,tx_len:=256,rx_len:=256,argc:=0,argv:=0); (*xopen configuration*)
		p_Data : UDINT; (*Pointer To Data Read*)
		uiMaxLen : UINT; (*Data Read Maximum Length*)
	END_VAR
	VAR_OUTPUT
		bReadValid : BOOL; (*Message Received*)
		uiLen : UINT; (*Data Read Length*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal1; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFrmFullWrite (*Frame Full Write Data*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tyCommParam : {REDUND_UNREPLICABLE} tyFrmParam; (*Address of a string which uniquely identifies the interface used.*)
		tyXOpenConfig : {REDUND_UNREPLICABLE} XOPENCONFIG := (idle:=10,delimc:=0,delim:=[2(0)],tx_cnt:=2,rx_cnt:=2,tx_len:=256,rx_len:=256,argc:=0,argv:=0); (*xopen configuration*)
		p_Data : {REDUND_UNREPLICABLE} UDINT; (*Pointer To Data Write*)
		uiLen : {REDUND_UNREPLICABLE} UINT; (*Data Write Length*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal1; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION_BLOCK fbFrmOpen (*Frame Open Port*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tyCommParam : {REDUND_UNREPLICABLE} tyFrmParam; (*Address of a string which uniquely identifies the interface used.*)
		tyXOpenConfig : {REDUND_UNREPLICABLE} XOPENCONFIG := (idle:=10,delimc:=0,delim:=[2(0)],tx_cnt:=2,rx_cnt:=2,tx_len:=256,rx_len:=256,argc:=0,argv:=0); (*xopen configuration*)
	END_VAR
	VAR_OUTPUT
		udiIdent : UDINT; (*Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFrmWrite (*Frame Write*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
		p_Data : {REDUND_UNREPLICABLE} UDINT; (*Pointer To Data Write*)
		uiLen : {REDUND_UNREPLICABLE} UINT; (*Data Write Length*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFrmRead (*Frame Read*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
	END_VAR
	VAR_OUTPUT
		bReadValid : BOOL; (*Message Received*)
		p_Data : UDINT; (*Pointer To Data Read*)
		uiLen : UINT; (*Data Read Length*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFrmRlsBufRead (*Frame Release Buffer Read*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
		p_Data : {REDUND_UNREPLICABLE} UDINT; (*Pointer To Data Read*)
		uiLen : {REDUND_UNREPLICABLE} UINT; (*Data Read Length*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFrmClose (*Frame  Close Port*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFrmInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION_BLOCK fbFltFullReadUntilValid (*Flatstream Full Read Data Until Valid*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		p_Data : UDINT; (*Pointer To Data Read*)
		uiMaxLen : UINT; (*Data Read Maximum Length*)
		pa_usiTxBytes : REFERENCE TO ARRAY[0..7] OF USINT; (*Pointer to ARRAY for output MTU including output sequence*)
		pa_usiRxBytes : REFERENCE TO ARRAY[0..7] OF USINT; (*Pointer to the input MTU including the input sequence*)
	END_VAR
	VAR_OUTPUT
		uiLen : UINT; (*Data Read Length*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFltInternal1; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFltFullRead (*Flatstream Full Read Data*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		p_Data : UDINT; (*Pointer To Data Read*)
		uiMaxLen : UINT; (*Data Read Maximum Length*)
		pa_usiTxBytes : REFERENCE TO ARRAY[0..7] OF USINT; (*Pointer to ARRAY for output MTU including output sequence*)
		pa_usiRxBytes : REFERENCE TO ARRAY[0..7] OF USINT; (*Pointer to the input MTU including the input sequence*)
	END_VAR
	VAR_OUTPUT
		bReadValid : BOOL; (*Message Received*)
		uiLen : UINT; (*Data Read Length*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFltInternal1; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFltFullWrite (*Flatstream Full Write Data*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		p_Data : {REDUND_UNREPLICABLE} UDINT; (*Pointer To Data Write*)
		uiLen : {REDUND_UNREPLICABLE} UINT; (*Data Write Length*)
		pa_usiTxBytes : REFERENCE TO ARRAY[0..7] OF USINT; (*Pointer to ARRAY for output MTU including output sequence*)
		pa_usiRxBytes : REFERENCE TO ARRAY[0..7] OF USINT; (*Pointer to the input MTU including the input sequence*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFltInternal1; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION_BLOCK fbFltWrite (*Flatstream Write*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		p_Data : UDINT; (*Address that points to the send buffer*)
		uiLen : UINT; (*Length of the buffer to be filled*)
		usiReadSequ : USINT; (*Confirmation sequence counter for the fltRead() function block*)
		p_TxBytes : UDINT; (*Pointer to ARRAY for output MTU including output sequence*)
		usiTxBytesLen : USINT; (*Length of p_TxBytes*)
		p_Sequ : UDINT; (*Pointer to the module's input sequence*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFltInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFltRead (*Flatstream Read*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiCfg : UDINT; (*Function block's configuration parameter*)
		p_Data : UDINT; (*Pointer To Data Read*)
		uiMaxLen : UINT; (*Data Read Maximum Length*)
		p_RxBytes : UDINT; (*Pointer to the input MTU including the input sequence*)
		usiRxBytesLen : USINT; (*Length of p_RxBytes*)
	END_VAR
	VAR_OUTPUT
		uiPendBytes : UINT; (*Number of pending bytes for next call*)
		usiReadSequ : USINT; (*Confirmation sequence counter for the fltwrite() function block*)
		bReadValid : BOOL; (*Message Received*)
		uiLen : UINT; (*Data Read Length*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFltInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
