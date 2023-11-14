(** 2019-10-21 **)
ACTION Act_Main_SDOWrite:
	
	CASE usiStep OF
		0:
//			eAWAct	:= AWActBGStartModOKChk;
//			
//			IF (p_eAWStatus = Done) AND (p_eAWStat = AWActBGStartModOKChk) THEN
//				
//				eAWAct		:= AWActIdle;
//				usiStep		:= 0;
//				eStartupStep1 := StartupStepSetupUI;
//				
//			ELSIF p_eAWStatus = Error THEN
//				
//				eAWAct		:= AWActIdle;
//				usiStep		:= 0;
				eStartupStep1 := StartupStepSetupUI;
				
//			END_IF
				
				
	END_CASE

END_ACTION
