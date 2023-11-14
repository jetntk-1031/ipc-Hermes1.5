(*2019-01-20*)
(**)

TYPE
	eSimulationsAction : 
		(
		SimulationsActIdle,
		SimulationsActStart,
		SimulationsActStop,
		SimulationsActStep,
		SimulationsActError
		);
END_TYPE

(**)

TYPE
	eSimulationsStatus : 
		(
		SimulationsStatusRun,
		SimulationsStatusStop,
		SimulationsStatusCycleStopping,
		SimulationsStatusStep
		);
END_TYPE
