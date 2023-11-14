(** 2019-05-04 **)
ACTION Act_Main_Hermes:

	CASE usiStep OF
		0:
			eHermesAct	:= HermesActCreateDir;
	
			IF (p_eHermesStatus = Done) AND (p_eHermesStat = HermesActCreateDir) THEN
				
				eHermesAct		:= HermesActIdle;
				usiStep			:= 1;
				
			ELSIF p_eHermesStatus = Error THEN
				
				eHermesAct		:= HermesActIdle;
				usiStep			:= 10;
				
			END_IF
			
		1:
			eHermesAct	:= HermesActReadRetainLane1; //HermesActReadRetain;
	
			IF (p_eHermesStatus = Done) AND (p_eHermesStat = HermesActReadRetainLane1) THEN
				
				eHermesAct		:= HermesActIdle;
				usiStep			:= 2;
				
			ELSIF p_eHermesStatus = Error THEN
				
				eHermesAct		:= HermesActIdle;
				usiStep			:= 10;
				
			END_IF
			
		2:
			eHermesAct	:= HermesActReadConfig;
	
			IF (p_eHermesStatus = Done) AND (p_eHermesStat = HermesActReadConfig) THEN
				
				eHermesAct		:= HermesActIdle;
				usiStep			:= 10;
				
			ELSIF p_eHermesStatus = Error THEN
				
				eHermesAct		:= HermesActIdle;
				usiStep			:= 10;
				
			END_IF
			
		10:
			eRmtHermesAct	:= HermesActDeleteOldLog;
	
			IF (p_eRmtHermesStatus = Done) AND (p_eRmtHermesStat = HermesActDeleteOldLog) THEN
				
				eRmtHermesAct	:= HermesActIdle;
				usiStep			:= 20;
				
			ELSIF p_eRmtHermesStatus = Error THEN
				
				eRmtHermesAct	:= HermesActIdle;
				usiStep			:= 20;
				
			END_IF
		20:
			eDSHermesAct	:= HermesActReadRetain; 
	
			IF (p_eDSHermesStatus = Done) AND (p_eDSHermesStat = HermesActReadRetain) THEN
				
				eDSHermesAct	:= HermesActIdle;
				usiStep			:= 21; 
				
			ELSIF p_eDSHermesStatus = Error THEN //when there is no Retain file created, then p_eDSHermesStatus will be error, skip to startup)
				
				eDSHermesAct	:= HermesActIdle;
				usiStep			:= 21;
				
			END_IF
			

				
		21:
			eDSHermesAct	:= HermesActDeleteOldLog;
	
			IF (p_eDSHermesStatus = Done) AND (p_eDSHermesStat = HermesActDeleteOldLog) THEN
				
				eDSHermesAct	:= HermesActIdle;
				usiStep			:= 30;
	
				
			ELSIF p_eDSHermesStatus = Error THEN
				
				eDSHermesAct	:= HermesActIdle;
				usiStep			:= 30;
				
			END_IF
			
		30:
			eRmtHermesAct	:= HermesActDeleteOldLog;
	
			IF (p_eRmtHermesStatus = Done) AND (p_eRmtHermesStat = HermesActDeleteOldLog) THEN
				
				eRmtHermesAct	:= HermesActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepSetupUI;
			ELSIF p_eRmtHermesStatus = Error THEN
				
				eRmtHermesAct	:= HermesActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepSetupUI;
			END_IF
			
//		40:
//			eSvyHermesAct	:= HermesActDeleteOldLog;
//	
//			IF (p_eSvyHermesStatus = Done) AND (p_eSvyHermesStat = HermesActDeleteOldLog) THEN
//				
//				eSvyHermesAct	:= HermesActIdle;
//				usiStep			:= 41;
//				
//			ELSIF p_eSvyHermesStatus = Error THEN
//				
//				eSvyHermesAct	:= HermesActIdle;
//				usiStep			:= 41;
//				
//			END_IF
		
//		41:	
//			bWaitDecision := TRUE; 
//			
//			IF p_bUIReadWorkOrder THEN
//				eSvyHermesAct	:= HermesActReadRetain;
//		
//				IF (p_eSvyHermesStatus = Done) AND (p_eSvyHermesStat = HermesActReadRetain) THEN
//					
//					eSvyHermesAct	:= HermesActIdle;
//					usiStep			:= 0;
//					eStartupStep1	:= StartupStepSetupUI;
//					bWaitDecision := FALSE;
//					
//				ELSIF p_eSvyHermesStatus = Error THEN
//					
//					eSvyHermesAct	:= HermesActIdle;
//					usiStep			:= 0;
//					eStartupStep1	:= StartupStepSetupUI;
//					bWaitDecision := FALSE;
//					
//				END_IF
//				
//			ELSIF p_bUISkipWorkOrder THEN
//				usiStep			:= 0;
//				eStartupStep1	:= StartupStepSetupUI;
//				bWaitDecision := FALSE;
//			END_IF	
	END_CASE
	
END_ACTION
