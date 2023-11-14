
TYPE
	tyInvalidCharChkInFileNm : 	STRUCT 
		sVersion : STRING[10];
		sName : STRING[10];
		bSkipVersionChk : BOOL;
		i : INT;
		j : INT;
	END_STRUCT;
	tyLibrariesInternal : 	STRUCT 
		sVersion : STRING[10];
		sName : STRING[10];
		sInvalidChar : STRING[1];
		bLibMismatch : BOOL;
		bFileCheckDone : BOOL;
		bLibCheckDone : BOOL;
		di : DINT;
		tyMoVer : MoVerStruc_typ;
	END_STRUCT;
	tyLibrariesVer : 	STRUCT  (*Library Version Info*)
		sName : STRING[10]; (*Library Name*)
		sVersion : STRING[10]; (*Library Version*)
	END_STRUCT;
END_TYPE
