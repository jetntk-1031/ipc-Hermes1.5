(** 2019-05-04 **)
ACTION Act_Background_Command:

	
	
	//principal echo command
	
	

	
	//fHermesProcessCmd(ADR(a_tyCommandProcessList),ADR(a_tyCommandPause),ADR(a_usiCommandIdx));

	
	FOR usiIdx  := 0 TO SIZEOF(a_tyCommandProcessList)/SIZEOF(a_tyCommandProcessList[0]) DO
		IF a_tyCommandProcessList[usiIdx].udiCommandParam = 0 OR a_tyCommandProcessList[usiIdx].udiComMode = 0 OR a_tyCommandProcessList[usiIdx].udiInterfaceString = 0 THEN 
			EXIT; //exit if address empty
		END_IF	
		p_tyHermesCmdParam ACCESS a_tyCommandProcessList[usiIdx].udiCommandParam;	
		p_tyHermesCmdPause ACCESS ADR(a_tyCommandPause[usiIdx]);
		p_tyHermesCmdLockConv ACCESS ADR(a_tyCommandLockInputConv[usiIdx]);
		p_tyHermesCmdOvenInfeed ACCESS ADR(a_tyCommandOvenInfeed[usiIdx]);
		p_udiComMode ACCESS a_tyCommandProcessList[usiIdx].udiComMode;
		//------- Process Rcv and BoardCast if not suppported ------//
		IF p_tyHermesCmdParam.usiCommandIdx <> a_usiCommandIdx[usiIdx] AND p_udiComMode =1 THEN //track command idx
			//Checking Processability and feature	
			usiPrevCmdIdx := a_usiCommandIdx[usiIdx];
						
			//--------------Rcv------------// 			
			IF p_tyHermesCmdPause.bFeatureRequestTo THEN 
				fHermesRcvCmdReqToPause(ADR(a_usiCommandIdx[usiIdx]),ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause));
			END_IF
					
			IF  p_tyHermesCmdPause.bFeatureRequestFrom THEN
				fHermesRcvCmdReqFromPause(ADR(a_usiCommandIdx[usiIdx]),ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause))	;
			END_IF
			
			IF p_tyHermesCmdLockConv.bFeatureLockConvFrom THEN
				fHermesRcvCmdReqFromLockCov(ADR(a_usiCommandIdx[usiIdx]),ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdLockConv))	;
			END_IF
			
			IF p_tyHermesCmdOvenInfeed.bFeatureOvenInfeedFrom THEN 
				fHermesRcvCmdReqFromOvenInfeed(ADR(a_usiCommandIdx[usiIdx]),ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdOvenInfeed));
			END_IF
			
			//--------------End of Rcv------------//
			
			
			//Adding Command to other interface if not able to execute, Polling
			IF a_usiCommandIdx[usiIdx] = usiPrevCmdIdx THEN 	//if not supported, then broadcast 
				FOR usiCmpIdx  := 0 TO SIZEOF(a_tyCommandProcessList)/SIZEOF(a_tyCommandProcessList[0]) DO //loop other
					IF a_tyCommandProcessList[usiCmpIdx].udiCommandParam = 0 OR a_tyCommandProcessList[usiCmpIdx].udiComMode = 0 OR a_tyCommandProcessList[usiCmpIdx].udiInterfaceString = 0 THEN
						EXIT; //exit if address empty
					END_IF
					IF usiIdx <> usiCmpIdx  THEN //not self
						p_sInterface ACCESS a_tyCommandProcessList[usiIdx].udiInterfaceString;
						p_sCmpInterface ACCESS a_tyCommandProcessList[usiCmpIdx].udiInterfaceString;
						p_udiComMode ACCESS a_tyCommandProcessList[usiCmpIdx].udiComMode;
						IF p_sInterface <> p_sCmpInterface AND p_udiComMode = 1 THEN //not same interface and is Hermes Communication
							//message dependant, the oven info need to boardcast to UP only
							p_udiHermesCmpCmdParam ACCESS a_tyCommandProcessList[usiCmpIdx].udiCommandParam;
							IF p_tyHermesCmdParam.eCommand = HermesCommandLockInputConveyor OR p_tyHermesCmdParam.eCommand = HermesCommandUnLockInputConveyor THEN
								IF a_tyCommandProcessList[usiCmpIdx].bUSTrueDSFalse THEN // only to US 
									fHermesAddOneCmdTyp(ADR(p_udiHermesCmpCmdParam.a_eCommandSndQ),ADR(p_udiHermesCmpCmdParam.udiMsgCmdBffr),p_tyHermesCmdParam.eCommand);
								END_IF 
							ELSIF p_tyHermesCmdParam.eCommand =  HermesCommandOvenInfeed THEN 
								IF a_tyCommandProcessList[usiCmpIdx].bUSTrueDSFalse = FALSE THEN // only to DS
									fHermesAddOneCmdTyp(ADR(p_udiHermesCmpCmdParam.a_eCommandSndQ),ADR(p_udiHermesCmpCmdParam.udiMsgCmdBffr),p_tyHermesCmdParam.eCommand);
								END_IF 
							ELSE //else dont care up or down
								fHermesAddOneCmdTyp(ADR(p_udiHermesCmpCmdParam.a_eCommandSndQ),ADR(p_udiHermesCmpCmdParam.udiMsgCmdBffr),p_tyHermesCmdParam.eCommand);
							END_IF 
						END_IF
					END_IF
				END_FOR	
				a_usiCommandIdx[usiIdx] := a_usiCommandIdx[usiIdx] + 1;	
			END_IF
		END_IF

		

		//------- Process Send if supported  ------//		
		IF p_tyHermesCmdPause.bFeatureRequestTo THEN 
			fHermesSndCmdReqToPause(ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause));
		END_IF
					
		IF  p_tyHermesCmdPause.bFeatureRequestFrom THEN
			fHermesSndCmdReqFromPause(ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdPause));
		END_IF
			
		IF p_tyHermesCmdLockConv.bFeatureLockConvTo THEN
			fHermesSndCmdReqToLockConv(ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdLockConv));
		END_IF	
		
		IF p_tyHermesCmdOvenInfeed.bFeatureOvenInfeedTo THEN
			fHermesSndCmdReqToOvenInfeed(ADR(p_tyHermesCmdParam),ADR(p_tyHermesCmdOvenInfeed));
		END_IF
		
	END_FOR
	

END_ACTION
