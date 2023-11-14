(** 2019-03-28 **)
ACTION Act_Main_UsrMgmt:

	CASE usiStep OF
		0:
			eUsrMgmtAct	:= UsrMgmtActCreateDir;
	
			IF (p_eUsrMgmtStatus = Done) AND (p_eUsrMgmtStat = UsrMgmtActCreateDir) THEN
				
				eUsrMgmtAct		:= UsrMgmtActIdle;
				usiStep			:= 1;
				
			ELSIF p_eUsrMgmtStatus = Error THEN
				
				eUsrMgmtAct		:= UsrMgmtActIdle;
				eStartupStep1	:= StartupStepBffr;
				
			END_IF
			
		1:
			eUsrMgmtAct	:= UsrMgmtActReadData;
	
			IF (p_eUsrMgmtStatus = Done) AND (p_eUsrMgmtStat = UsrMgmtActReadData) THEN
				
				eUsrMgmtAct		:= UsrMgmtActIdle;
				usiStep			:= 2;
				
			ELSIF p_eUsrMgmtStatus = Error THEN
				
				eUsrMgmtAct		:= UsrMgmtActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepBffr;
				
			END_IF
			
		2:
			eUsrMgmtAct	:= UsrMgmtActLogout;
	
			IF (p_eUsrMgmtStatus = Done) AND (p_eUsrMgmtStat = UsrMgmtActLogout) THEN
				
				eUsrMgmtAct		:= UsrMgmtActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepBffr;
				
			ELSIF p_eUsrMgmtStatus = Error THEN
				
				eUsrMgmtAct		:= UsrMgmtActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepBffr;
				
			END_IF
			
	END_CASE
	
END_ACTION
