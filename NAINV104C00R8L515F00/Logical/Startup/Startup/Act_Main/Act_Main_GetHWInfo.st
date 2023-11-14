(** 2020-10-05 **)
ACTION Act_Main_GetHWInfo:

	CASE usiStep OF
		0:
			eHWInfoAct	:= HWInfoActGetIPAddr;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActGetIPAddr) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 1;
				
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
			
		1:
			eHWInfoAct	:= HWInfoActGetMacAddr;
			
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActGetMacAddr) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 2;
				
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
		
		2:
			eHWInfoAct	:= HWInfoActGetSubnetMask;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActGetSubnetMask) THEN
				
				eHWInfoAct		:= HWInfoActIdle;

				IF DiagCpuIsSimulated() = TRUE THEN
					usiStep			:= 0;
					eStartupStep1	:= StartupStepLibVer;
				ELSE
					usiStep			:= 3;
				END_IF								
				
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
			
		3:
			eHWInfoAct	:= HWInfoActGetEthConfigMode;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActGetEthConfigMode) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				
				bGetConfigDone	:= TRUE;
				
				IF (p_tyMcParamCurr.eNetworkMod = UDINT_TO_DINT(p_udiHWInfoEthMode))  THEN
					IF p_udiHWInfoEthMode = DINT_TO_UDINT(IPFromDHCPServer) THEN
						usiStep			:= 0;
						eStartupStep1	:= StartupStepLibVer;
					ELSE
						IF (p_tyMcParamCurr.sIPAddr <> p_sHWInfoIPAddr) OR (p_tyMcParamCurr.sSubnetMask <> p_sHWInfoSubnetMask) THEN
							IF p_bUITempAddrFillDone AND p_bUIMismatchOverWriteConfig THEN
								IF (p_tyMcParamCurr.sIPAddr <> p_sHWInfoIPAddr) THEN
									usiStep			:= 5;  //mismatch ip
								ELSE
									usiStep			:= 6;  //mismatch subnet
								END_IF
							END_IF		
						ELSE
							usiStep			:= 0;
							eStartupStep1	:= StartupStepLibVer;
						END_IF
					END_IF
		
				ELSE
					IF p_bUITempAddrFillDone AND p_bUIMismatchOverWriteConfig THEN
						usiStep			:= 4;				
					END_IF							
				END_IF						
				
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
			
		4:
			eHWInfoAct	:= HWInfoActSetEthConfigMode;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActSetEthConfigMode) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				
				IF (p_tyMcParamCurr.eNetworkMod = IPFromDHCPServer) THEN
					usiStep			:= 7;
					bMismatchSetConfigDone	:= TRUE;
				ELSE
					usiStep			:= 5;
				END_IF
								
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
				
			
		5:
			eHWInfoAct	:= HWInfoActSetIPAddr;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActSetIPAddr) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				
				IF (p_tyMcParamCurr.sSubnetMask <> p_sHWInfoSubnetMask) THEN
					usiStep			:= 6;
				ELSE
					usiStep			:= 7;					
					bMismatchSetConfigDone	:= TRUE;
				END_IF
								
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
		
		6:
			eHWInfoAct	:= HWInfoActSetSubnetMask;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActSetSubnetMask) THEN
				
				eHWInfoAct		:= HWInfoActIdle;	
				usiStep			:= 7;
				
				bMismatchSetConfigDone	:= TRUE;
								
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF			
		
		7:			
			IF p_bUIChgConfigDone THEN
				IF p_bUIOverwriteEthMode THEN
					usiStep			:= 8; //Overwrite Network Mode
				ELSIF p_bUIOverwriteIP THEN
					usiStep			:= 9; //Overwrite IP
				ELSIF p_bUIOverwriteSubnet THEN
					usiStep			:= 10; //Overwrite Subnet
				ELSE
					usiStep			:= 12; //Load Machine Setting
				END_IF
			END_IF
			
		8:
			eHWInfoAct	:= HWInfoActSetEthConfigMode;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActSetEthConfigMode) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				
				IF p_bUIOverwriteIP THEN
					usiStep			:= 9;
				ELSIF p_bUIOverwriteSubnet THEN
					usiStep			:= 10;
				ELSE
					usiStep			:= 11;
				END_IF
								
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
		
		
		9:
			eHWInfoAct	:= HWInfoActSetIPAddr;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActSetIPAddr) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				
				IF p_bUIOverwriteSubnet THEN
					usiStep			:= 10;
				ELSE
					usiStep			:= 11;
				END_IF
								
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
		
		10:
			eHWInfoAct	:= HWInfoActSetSubnetMask;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActSetSubnetMask) THEN
				
				eHWInfoAct		:= HWInfoActIdle;	
				usiStep			:= 11;
								
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
		
		11: 
				
			eMcParamAct	:= McParamActWrite;
		
			IF (p_eMcParamStatus = Done) AND (p_eMcParamStat = McParamActWrite) THEN
			
				eMcParamAct		:= McParamActIdle;
				
				usiStep			:= 12;
			
			ELSIF p_eMcParamStatus = Error THEN
			
				eMcParamAct		:= McParamActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
			
			END_IF
		
		12:
			eHWInfoAct	:= HWInfoActGetIPAddr;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActGetIPAddr) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 13;
				
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
			
		13:
			eHWInfoAct	:= HWInfoActGetSubnetMask;
	
			IF (p_eHWInfoStatus = Done) AND (p_eHWInfoStat = HWInfoActGetSubnetMask) THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			ELSIF p_eHWInfoStatus = Error THEN
				
				eHWInfoAct		:= HWInfoActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepLibVer;
				
			END_IF
					
			
	END_CASE
	
				
END_ACTION

