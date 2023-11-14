(** 2019-05-09 **)
ACTION Act_Main_UsrFolder:

	CASE usiStep OF
		0:
			eUsrFolderAct	:= UsrFolderActCreateUsrDir;
	
			IF (p_eUsrFolderStatus = Done) AND (p_eUsrFolderStat = UsrFolderActCreateUsrDir) THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 1;
				
			ELSIF p_eUsrFolderStatus = Error THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				eStartupStep1	:= StartupStepParameter;
				
			END_IF
	
		1:
			eUsrFolderAct	:= UsrFolderActCreatePrivateDir;
	
			IF (p_eUsrFolderStatus = Done) AND (p_eUsrFolderStat = UsrFolderActCreatePrivateDir) THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 2;
				
			ELSIF p_eUsrFolderStatus = Error THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepParameter;
				
			END_IF
	
		2:
			eUsrFolderAct	:= UsrFolderActCreateLogDir;
	
			IF (p_eUsrFolderStatus = Done) AND (p_eUsrFolderStat = UsrFolderActCreateLogDir) THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 3;
				
			ELSIF p_eUsrFolderStatus = Error THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepParameter;
				
			END_IF
	
		3:
			eUsrFolderAct	:= UsrFolderActCreateLCSDir;
	
			IF (p_eUsrFolderStatus = Done) AND (p_eUsrFolderStat = UsrFolderActCreateLCSDir) THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepParameter;
				
			ELSIF p_eUsrFolderStatus = Error THEN
				
				eUsrFolderAct	:= UsrFolderActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepParameter;
				
			END_IF
	
	END_CASE
	
END_ACTION
