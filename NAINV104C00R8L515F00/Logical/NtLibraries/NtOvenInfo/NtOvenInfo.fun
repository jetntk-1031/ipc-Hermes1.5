
FUNCTION_BLOCK fbOvenInfoStd (*Oven Info Standard Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		diBffrMtySlt : {REDUND_UNREPLICABLE} DINT; (*Buffer Empty Slot*)
		diMinBffrMtySlt : {REDUND_UNREPLICABLE} DINT; (*Minimum Buffer Empty Slot*)
	END_VAR
	VAR_OUTPUT
		bOvenAllow : BOOL; (*Output - Oven Info Allow*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbOvenInfoExtdd (*Oven Info Extended Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		diAddBffr : {REDUND_UNREPLICABLE} DINT; (*Additional Buffer*)
		diBffrMtySlt : {REDUND_UNREPLICABLE} DINT; (*Buffer Empty Slot*)
		diBrdInOven : {REDUND_UNREPLICABLE} DINT; (*Current Boards Quantity In Oven*)
		diBrdPerSlt : {REDUND_UNREPLICABLE} DINT; (*Board Available Per Buffer Slot*)
	END_VAR
	VAR_OUTPUT
		bOvenAllow : BOOL; (*Output - Oven Info Allow*)
	END_VAR
END_FUNCTION_BLOCK
(**)
(*Formula*)

FUNCTION fOvenInfoExtddForm : BOOL (*Oven Info Extended Formula*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		diAddBffr : DINT := 1; (*Additional Buffer*)
		diBrdInOven : DINT := 0; (*Current Boards Quantity In Oven*)
		diBffrMtySlt : DINT := 1; (*Buffer Empty Slot*)
		diBrdPerSlt : DINT := 1; (*Board Available Per Buffer Slot*)
	END_VAR
END_FUNCTION

FUNCTION fOvenInfoStdForm : BOOL (*Oven Info Standard Formula*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		diBffrMtySlt : DINT := 1; (*Buffer Empty Slot*)
		diMinBffrMtySlt : DINT := 1; (*Minimum Buffer Empty Slot*)
	END_VAR
END_FUNCTION
