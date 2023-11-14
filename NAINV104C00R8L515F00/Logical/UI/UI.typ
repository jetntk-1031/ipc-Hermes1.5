(*2019-04-04*)
(**)

TYPE
	eUIAction : 
		(
		UIActIdle,
		UIActInitial
		);
	eUIInitial : 
		(
		UIInitialC0005,
		UIInitialC0007,
		UIInitialP0000,
		UIInitialP0200,
		UIInitialP0201,
		UIInitialP0300,
		UIInitialP0400,
		UIInitialP0900,
		UIInitialP0910,
		UIInitialP0920,
		UIInitialP0922,
		UIInitialP0924,
		UIInitialP0927,
		UIInitialP0928,
		UIInitialP0931,
		UIInitialP0934,
		UIInitialP0935,
		UIInitialP0940,
		UIInitialP1000,
		UIInitialP1020,
		UIInitialP1021,
		UIInitialP1022,
		UIInitialP1023,
		UIInitialP1024,
		UIInitialP1026,
		UIInitialP1040,
		UIInitialP1050,
		UIInitialP1080,
		UIInitialP1081,
		UIInitialDone
		);
END_TYPE

(*Global Alarm*)

TYPE
	tyUIAllAlm : 	STRUCT 
		bAlm : ARRAY[0..9999]OF BOOL;
		bWarning : ARRAY[0..9999]OF BOOL;
	END_STRUCT;
END_TYPE
