
FUNCTION_BLOCK fbChkFileValidity (*Check For File Corruption*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		a_tyLibraryVer : {REDUND_UNREPLICABLE} ARRAY[0..c_diLibNum] OF tyLibrariesVer; (*Library Version Info*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : {REDUND_UNREPLICABLE} tyLibrariesInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbChkLibrariesVer (*Check For Mismatch Libaries Version*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_bVerMismatch : REFERENCE TO ARRAY[0..c_diLibNum] OF BOOL; (*Output – Library Check Result*)
		a_tyLibraryVer : {REDUND_UNREPLICABLE} ARRAY[0..c_diLibNum] OF tyLibrariesVer; (*Library Version Info*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : {REDUND_UNREPLICABLE} tyLibrariesInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fGetLibrariesVer : BOOL (*Get Library Version Number*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		pa_sVersion : REFERENCE TO ARRAY[0..c_diLibNum] OF STRING[10]; (*Output - Library Version*)
		a_sName : ARRAY[0..c_diLibNum] OF STRING[10]; (*Library Name*)
	END_VAR
	VAR
		tyInternal : tyLibrariesInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fInvalidCharInFileChk : BOOL (*Invalid Character For String Input Checker*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		sNameChk : STRING[10]; (*String Input To Be Checked*)
		sVersionChk : STRING[10]; (*String Input To Be Checked*)
		sInvalidChar : STRING[1]; (*Invalid String Members For Checking*)
	END_VAR
	VAR
		tyInternal : tyInvalidCharChkInFileNm; (*Local Variables*)
	END_VAR
END_FUNCTION
