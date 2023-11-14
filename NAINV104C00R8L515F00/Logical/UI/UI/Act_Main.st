(** 2019-04-04 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		UIActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
		
				sStatTxt	:= a_sStatText[eStat];
				
				eUIInit	:= UIInitialC0005; 
			END_IF
		
			eStatus	:= Idle;
		
		UIActInitial:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				CASE eUIInit OF
					UIInitialC0005:
						Act_Main_C0005;
						eUIInit	 		:= UIInitialC0007;
						
					UIInitialC0007:
						Act_Main_C0007;
						eUIInit	 		:= UIInitialP0000;
						
					UIInitialP0000:
						Act_Main_P0000;
						eUIInit	 		:= UIInitialP0200;
						
					UIInitialP0200:
						Act_Main_P0200;
						eUIInit	 		:= UIInitialP0201;
						
					UIInitialP0201:
						Act_Main_P0201;
						eUIInit	 		:= UIInitialP0300;
						
					UIInitialP0300:
						Act_Main_P0300;
						eUIInit	 		:= UIInitialP0400;
						
					UIInitialP0400:
						Act_Main_P0400;
						eUIInit		 	:= UIInitialP0900;
						
					UIInitialP0900:
						Act_Main_P0900;
						eUIInit		 	:= UIInitialP0910;
						
					UIInitialP0910:
						Act_Main_P0910;
						eUIInit		 	:= UIInitialP0920;
						
					UIInitialP0920:
						Act_Main_P0920;
						eUIInit		 	:= UIInitialP0922;
						
					UIInitialP0922:
						Act_Main_P0922;
						eUIInit		 	:= UIInitialP0931;
						
					UIInitialP0931:
						Act_Main_P0931;
						eUIInit		 	:= UIInitialP0934;
						
					UIInitialP0934:
						Act_Main_P0934;
						eUIInit		 	:= UIInitialP0940;	
					
					UIInitialP0940:
						Act_Main_P0940;
						eUIInit		 	:= UIInitialP1000;	
						
						
					UIInitialP1000:
						Act_Main_P1000;
						eUIInit		 	:= UIInitialP1020;
						
					UIInitialP1020:
						Act_Main_P1020;
						eUIInit		 	:= UIInitialP1021;
						
					UIInitialP1021:
						Act_Main_P1021;
						eUIInit		 	:= UIInitialP1022;
						
					UIInitialP1022:
						Act_Main_P1022;
						eUIInit		 	:= UIInitialP1023;	
						
					UIInitialP1023:
						Act_Main_P1023;
						eUIInit		 	:= UIInitialP1024;	
						
					UIInitialP1024:
						Act_Main_P1024;
						eUIInit			:= UIInitialP1040;		
					
					UIInitialP1040:
						Act_Main_P1040;
						eUIInit		 	:= UIInitialP1050;	
						
					UIInitialP1050:
						Act_Main_P1050;
						eUIInit		 	:= UIInitialP1080;	
						
					UIInitialP1080:
						Act_Main_P1080;
						eUIInit		 	:= UIInitialP1081;	
						
					UIInitialP1081:
						Act_Main_P1081;
						eUIInit		 	:= UIInitialDone;	
						
					UIInitialDone:
						tyMcParamWr					:= p_tyMcParamCurr;
						
						tyProdRcpCurrRcpWr			:= p_tyProdRcpCurrRcp0;
						
						tyUsrMgmtAccessRightLvl1Wr	:= p_tyUsrMgmtFullData.tyAccessRightLvl1;
						tyUsrMgmtAccessRightLvl2Wr	:= p_tyUsrMgmtFullData.tyAccessRightLvl2;
						tyUsrMgmtAccessRightLvl3Wr	:= p_tyUsrMgmtFullData.tyAccessRightLvl3;
						
						a_tyHermesUSParamWr			:= p_tyHermesConfiguration.a_tyUSParam;
						a_tyHermesDSParamWr			:= p_tyHermesConfiguration.a_tyDSParam;
						
						eStatus	:= Done;
					
				END_CASE
				
			END_IF
		
	END_CASE
	
END_ACTION
