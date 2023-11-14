
(* ProcessCmd *)
FUNCTION fHermesProcessCmd
	
	FOR usiIdx  := 0 TO SIZEOF(tyCommandProcessList)/SIZEOF(tyCommandProcessList[0]) DO
		IF tyCommandProcessList[usiIdx].udiCommandParam <> 0 AND tyCommandProcessList[usiIdx].udiComMode <> 0 AND tyCommandProcessList[usiIdx].udiInterfaceString <> 0 THEN 
			p_tyHermesCmdParam ACCESS tyCommandProcessList[usiIdx].udiCommandParam;	
			p_tyHermesCmdPause ACCESS ADR(tyHermesCmdPause[usiIdx]);
			
			//------- Process Rcv and BoardCast if not suppported ------//
			IF p_tyHermesCmdParam.usiCommandIdx <> a_usiCommandIdx[usiIdx] THEN //track command idx
				//Checking Processability and feature	
				usiPrevCmdIdx := a_usiCommandIdx[usiIdx];
							
				//Rcv			
				IF p_tyHermesCmdPause.bFeatureRequestTo THEN 
					fHermesRcvCmdReqToPause(ADR(a_usiCommandIdx[usiIdx]),ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause));
				END_IF
						
				IF  p_tyHermesCmdPause.bFeatureRequestFrom THEN
					fHermesRcvCmdReqFromPause(ADR(a_usiCommandIdx[usiIdx]),ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause))	;
				END_IF
				
				//Adding Command to other interface if not able to execute, Polling
				IF usiPrevCmdIdx <> a_usiCommandIdx[usiIdx] THEN 	//if not supported, then broadcast 
					FOR usiCmpIdx  := 0 TO SIZEOF(tyCommandProcessList)/SIZEOF(tyCommandProcessList[0]) DO //loop other
						IF usiIdx <> usiCmpIdx  THEN //not self
							p_sCmpInterface ACCESS tyCommandProcessList[usiCmpIdx].udiCommandParam;
							p_udiComMode ACCESS tyCommandProcessList[usiCmpIdx].udiComMode;
							IF p_sInterface <> p_sCmpInterface AND p_udiComMode = 0 THEN //not same interfafce and is Hermes Communication
								p_udiHermesCmpCmdParam ACCESS tyCommandProcessList[usiCmpIdx].udiCommandParam;
								fHermesAddOneCmdTyp(ADR(p_udiHermesCmpCmdParam.a_eCommandSndQ),ADR(p_udiHermesCmpCmdParam.udiMsgCmdBffr),p_tyHermesCmdParam.eCommand);
							END_IF
						END_IF
					END_FOR	
				END_IF
			END_IF
	
			
	
				//------- Process Send if supported  ------//		
			IF p_tyHermesCmdPause.bFeatureRequestTo THEN 
				fHermesSndCmdReqToPause(ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause));
			END_IF
						
			IF  p_tyHermesCmdPause.bFeatureRequestFrom THEN
				fHermesSndCmdReqFromPause(ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause));
			END_IF
			
			
		END_IF
	END_FOR
	
	



END_FUNCTION
