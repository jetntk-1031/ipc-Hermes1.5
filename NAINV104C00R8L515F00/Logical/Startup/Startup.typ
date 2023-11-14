(*2019-04-04*)
(**)

TYPE
	eStartupAction : 
		(
		StartupActIdle,
		StartupActRun
		);
	eStartupStep : 
		(
		StartupStepUsrFolder,
		StartupStepParameter,
		StartupStepGetHWInfo,
		StartupStepLibVer,
		StartupStepRecipe,
		StartupStepUsrMgmt,
		StartupStepBffr,
		StartupStepAlarm,
		StartupStepHermes,
		StartupStepSDOWrite,
		StartupStepSetupUI,
		StartupStepDone
		);
END_TYPE
