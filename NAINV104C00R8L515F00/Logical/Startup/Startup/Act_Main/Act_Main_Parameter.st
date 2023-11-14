(** 2019-03-28 **)
ACTION Act_Main_Parameter:

	CASE usiStep OF
		0:
			eNtParamAct	:= NtParamActCreateDir;
	
			IF (p_eNtParamStatus = Done) AND (p_eNtParamStat = NtParamActCreateDir) THEN
				
				eNtParamAct			:= NtParamActIdle;
				usiStep				:= 1;
				
			ELSIF p_eNtParamStatus = Error THEN
				
				bNtSettingsLoadDone	:= TRUE;
				eNtParamAct			:= NtParamActIdle;
				usiStep				:= 2;
				
			END_IF
			
		1:
			eNtParamAct	:= NtParamActRead;
	
			IF (p_eNtParamStatus = Done) AND (p_eNtParamStat = NtParamActRead) THEN
				
				bNtSettingsLoadDone	:= TRUE;
				eNtParamAct			:= NtParamActIdle;
				usiStep				:= 2;
				
			ELSIF p_eNtParamStatus = Error THEN
				
				bNtSettingsLoadDone	:= TRUE;
				eNtParamAct			:= NtParamActIdle;
				usiStep				:= 2;
				
			END_IF
		
		2:
			eMcParamAct	:= McParamActCreateDir;
	
			IF (p_eMcParamStatus = Done) AND (p_eMcParamStat = McParamActCreateDir) THEN
				
				eMcParamAct		:= McParamActIdle;
				usiStep			:= 3;
				
			ELSIF p_eMcParamStatus = Error THEN
				
				eMcParamAct		:= McParamActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepGetHWInfo;
				
			END_IF
			
		3:
			eMcParamAct	:= McParamActRead;
			
			IF (p_eMcParamStatus = Done) AND (p_eMcParamStat = McParamActRead) THEN
				
				eMcParamAct		:= McParamActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepGetHWInfo;
				
			ELSIF p_eMcParamStatus = Error THEN
				
				eMcParamAct		:= McParamActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepGetHWInfo;
				
			END_IF
			
	END_CASE
				
END_ACTION
