
FUNCTION_BLOCK fbSenFltr (*Filter Sensor With Time*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bSigIn : {REDUND_UNREPLICABLE} BOOL; (*Sensor Input*)
		tSigOnFltrTm : {REDUND_UNREPLICABLE} TIME; (*Sensor Signal On Filter Time*)
		tSigOffFltrTm : {REDUND_UNREPLICABLE} TIME; (*Sensor Signal Off Filter Time*)
	END_VAR
	VAR_OUTPUT
		bSigOut : BOOL; (*Output - Sensor Output*)
	END_VAR
	VAR
		tyInternal : {REDUND_UNREPLICABLE} tySenFltrInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fValidCharStringInChkr : BOOL (*Valid Character For String Input Checker*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sMismatchChar : REFERENCE TO STRING[1]; (*Output - Mismatch Character*)
		sInChk : STRING[255]; (*String Input To Be Checked*)
		sValidMember : STRING[128]; (*Valid String Members For Checking*)
	END_VAR
	VAR
		tyInternal : tyValidCharChkrInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fInvalidCharStringInChkr : BOOL (*Invalid Character For String Input Checker*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sInvalidChar : REFERENCE TO STRING[1]; (*Output - Invalid Character*)
		sInChk : STRING[255]; (*String Input To Be Checked*)
		sInvalidMember : STRING[128]; (*Invalid String Members For Checking*)
	END_VAR
	VAR
		tyInternal : tyInvalidCharChkrInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fCheckDuplicate : USINT (*Check Input Value Duplicate*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		a_usiValue : ARRAY[1..100] OF USINT; (*Value to Check*)
		a_bChkValue : ARRAY[1..100] OF BOOL; (*True = Check Value, False = No Need Check*)
	END_VAR
	VAR
		tyInternal : tyCheckDuplicateInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fCheckExist : USINT (*Check Exist Of Value*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		a_usiValue : ARRAY[1..50] OF USINT; (*Value to Check*)
		a_bChkValue : ARRAY[1..50] OF BOOL; (*True = Check Value, False = No Need Check*)
	END_VAR
	VAR
		tyInternal : tyCheckExistInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fStringSearch : UDINT (*String Search*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_StringChk : UDINT; (*Address Of String Input To Be Checked*)
		udiStringChkSize : UDINT; (*Size of String Input To Be Checked*)
		sSearch : STRING[255]; (*String Search*)
	END_VAR
	VAR
		tyInternal : tyStringSearchInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fIPValid : BOOL (*Check IP Address Validation*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		sIPAdd : STRING[15] := ''; (*IP Address*)
		pa_iIPPart : REFERENCE TO ARRAY[1..4] OF INT; (*IP Address Part in Integer*)
	END_VAR
	VAR
		tyInternal : tyIPValidInternal;
	END_VAR
END_FUNCTION

FUNCTION fConvertUINTToHex : BOOL (*Convert UINT To Hex*)
	VAR_INPUT
		p_sHexOut : REFERENCE TO STRING[4]; (*Output - Hex*)
		uiDecimalIn : UINT; (*Decimal Input*)
	END_VAR
	VAR
		uiTemp1 : UINT;
		uiTemp2 : UINT;
	END_VAR
END_FUNCTION

FUNCTION fConvertUSINTToHex : BOOL (*Convert USINT To Hex*)
	VAR_INPUT
		p_sHexOut : REFERENCE TO STRING[2]; (*Output - Hex*)
		usiDecimalIn : USINT; (*Decimal Input*)
	END_VAR
	VAR
		usiTemp1 : USINT;
		usiTemp2 : USINT;
	END_VAR
END_FUNCTION

FUNCTION fConvertToLower_254 : BOOL (*Convert Input STRING to Lower Case*)
	VAR_INPUT
		p_sOutput : REFERENCE TO STRING[254]; (*Output - String*)
		sInput : STRING[254]; (*Input String*)
	END_VAR
	VAR
		udi : UDINT;
		si : SINT;
	END_VAR
END_FUNCTION
