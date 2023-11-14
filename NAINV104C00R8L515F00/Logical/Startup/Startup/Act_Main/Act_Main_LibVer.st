(** 2019-03-28 **)
ACTION Act_Main_LibVer:

	CASE usiStep OF
		0:
			eLibVerAct	:= LibVerActCreateDir;
	
			IF (p_eLibVerStatus = Done) AND (p_eLibVerStat = LibVerActCreateDir) THEN
				
				eLibVerAct		:= LibVerActIdle;
				usiStep			:= 1;
				
			ELSIF p_eLibVerStatus = Error THEN
				
				eLibVerAct		:= LibVerActIdle;
				eStartupStep1	:= StartupStepRecipe;
				
			END_IF
			
		1:
			eLibVerAct	:= LibVerActReadChk;
			
			IF (p_eLibVerStatus = Done) AND (p_eLibVerStat = LibVerActReadChk) THEN
				
				eLibVerAct		:= LibVerActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepRecipe;
				
			ELSIF p_eLibVerStatus = Error THEN
				
				eLibVerAct		:= LibVerActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepRecipe;
				
			END_IF
			
	END_CASE
		
END_ACTION
