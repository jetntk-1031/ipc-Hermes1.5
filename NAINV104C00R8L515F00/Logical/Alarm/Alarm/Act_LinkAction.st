(** 2019-03-29 **)
ACTION Act_LinkAction:
		
	//Delete Old Alarm Log File for 24 hours After Machine is Continuous Running 30 Days.
	
	fbDlyTmr(IN := TRUE);
	IF fbDlyTmr.Q THEN
		fbDeleteLogTmr (IN := TRUE);
		IF fbDeleteLogTmr.Q AND eStatus <> Busy THEN
			p_eAct := AlarmActDeleteOldLog;
			IF eStat = AlarmActDeleteOldLog AND eStatus = Done THEN
				p_eAct := AlarmActIdle;
				fbDlyTmr (IN := FALSE);
				fbDeleteLogTmr (IN := FALSE);
			END_IF
		END_IF
	END_IF
	
END_ACTION
