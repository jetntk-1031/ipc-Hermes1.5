(** 2019-03-28 **)
ACTION Act_Main_Alarm:

	CASE usiStep OF
		0:
			eAlarmAct	:= AlarmActCreateDir;
	
			IF (p_eAlarmStatus = Done) AND (p_eAlarmStat = AlarmActCreateDir) THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 1;
				
			ELSIF p_eAlarmStatus = Error THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepHermes;
				
			END_IF
			
		1:
			eAlarmAct	:= AlarmActDeleteOldLog;
	
			IF (p_eAlarmStatus = Done) AND (p_eAlarmStat = AlarmActDeleteOldLog) THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 2;
				
			ELSIF p_eAlarmStatus = Error THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepHermes;
				
			END_IF
		
		2:
			eAlarmAct	:= AlarmActReadHistory;
			
			IF (p_eAlarmStatus = Done) AND (p_eAlarmStat = AlarmActReadHistory) THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 3;
				
			ELSIF p_eAlarmStatus = Error THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepHermes;
				
			END_IF
			
		3:
			eAlarmAct	:= AlarmActBGStartLog;
			
			IF (p_eAlarmStatus = Done) AND (p_eAlarmStat = AlarmActBGStartLog) THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepHermes;
				
			ELSIF p_eAlarmStatus = Error THEN
				
				eAlarmAct		:= AlarmActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepHermes;
				
			END_IF
			
	END_CASE
	
END_ACTION
