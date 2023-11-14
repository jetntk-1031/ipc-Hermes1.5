
FUNCTION_BLOCK fbMemDestroy (*Memory Destroy*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyMemDestroyInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbMemCreate (*Memory Create & Allocate*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		udiLen : {REDUND_UNREPLICABLE} UDINT; (*Length of the data to be read / write.*)
	END_VAR
	VAR_OUTPUT
		udiIdent : UDINT; (*Ident*)
		p_Dest : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyMemCreateInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
