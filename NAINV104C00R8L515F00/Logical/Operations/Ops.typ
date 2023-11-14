(*2019-04-16*)
(**)

TYPE
	eOperationsAction : 
		(
		OperationsActIdle,
		OperationsActStart,
		OperationsActStop,
		OperationsActStep,
		OperationsActError
		);
END_TYPE

(**)

TYPE
	eOperationsStatus : 
		(
		OperationsStatusRun,
		OperationsStatusStop,
		OperationsStatusCycleStopping,
		OperationsStatusStep
		);
END_TYPE
