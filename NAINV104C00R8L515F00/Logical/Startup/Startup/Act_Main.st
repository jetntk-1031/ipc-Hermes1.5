(** 2019-03-28 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		StartupActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				eStartupStep1	:= StartupStepUsrFolder;
				bRun			:= FALSE;
				usiStep			:= 0;
		
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		StartupActRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				bRun	:= TRUE;
				
				CASE eStartupStep1 OF
					
					StartupStepUsrFolder:
						Act_Main_UsrFolder;
					
					StartupStepParameter:
						Act_Main_Parameter;
					
					StartupStepGetHWInfo:
						Act_Main_GetHWInfo;
					
					StartupStepLibVer:
						Act_Main_LibVer;
					
					StartupStepRecipe:
						Act_Main_Recipe;
					
					StartupStepUsrMgmt:
						Act_Main_UsrMgmt;
					
					StartupStepBffr:
						Act_Main_Bffr;
					
					StartupStepAlarm:
						Act_Main_Alarm;
					
					StartupStepHermes:
						Act_Main_Hermes;
					
					StartupStepSDOWrite:
						Act_Main_SDOWrite;
					
					StartupStepSetupUI:
						Act_Main_SetupUI;
					
					StartupStepDone:
						Act_Main_Done;
					
				END_CASE
				
				sStepTxt	:= a_sStepText[eStartupStep1];
				
			END_IF
		
	END_CASE
	
END_ACTION
