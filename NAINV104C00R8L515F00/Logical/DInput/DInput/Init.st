(** 2020-10-08 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	
	//Alarm
	p_DIAlmData1	:= ADR(tyAlmData1);
	p_DIAlmData2	:= ADR(tyAlmData2);
	
	//Output
	p_DI							:= ADR(tyDInput);
	p_DISafetyRlySig				:= ADR(tyDInput.bSafetyRlySig);
	p_DIEStopSig					:= ADR(tyDInput.bEStopSig);
	p_DICoverSWSig					:= ADR(tyDInput.bCoverSWSig);
	p_DIUBA							:= ADR(tyDInput.bUBA);
	p_DIUBAStat						:= ADR(tyDInput.bUBAStat);
	p_DIDSB							:= ADR(tyDInput.bDSB);	
	p_DIUBA2						:= ADR(tyDInput.bUBA2); //ADD_2023-0032B
	p_DIUBAStat2					:= ADR(tyDInput.bUBAStat2); //ADD_2023-0032B
	p_DIConvLftSen					:= ADR(tyDInput.bConvLftSen);
	p_DIConvRgtSen					:= ADR(tyDInput.bConvRgtSen);
	p_DIThermalPrtSig				:= ADR(tyDInput.bThermalPrtSig);	
	p_DIUSWidthChkSen				:= ADR(tyDInput.bUSWidthChkSen);	
	p_DIDSWidthChkSen				:= ADR(tyDInput.bDSWidthChkSen);
	p_DIInvertHomeSen				:= ADR(tyDInput.bInvertHomeSen);
	p_DIInvertRemoteSen				:= ADR(tyDInput.bInvertRemoteSen);
	p_DICoatingSen					:= ADR(tyDInput.bCoatingSen);
	p_DIPressureSW					:= ADR(tyDInput.bPressureSW);
	p_DIInShutterOpenRS				:= ADR(tyDInput.bInShutterOpenRS);
	p_DIInShutterCloseRS			:= ADR(tyDInput.bInShutterCloseRS);
	p_DIOutShutterOpenRS			:= ADR(tyDInput.bOutShutterOpenRS);
	p_DIOutShutterCloseRS			:= ADR(tyDInput.bOutShutterCloseRS);
	p_DIClamp2Sen					:= ADR(tyDInput.bClamp2Sen);
	p_DIClamp3Sen					:= ADR(tyDInput.bClamp3Sen);
	p_DIClampRS1					:= ADR(tyDInput.bClampRS1);
	p_DIUnClampRS1					:= ADR(tyDInput.bUnClampRS1);
	p_DIClampRS2					:= ADR(tyDInput.bClampRS2);
	p_DIUnClampRS2					:= ADR(tyDInput.bUnClampRS2);
	p_DIClampRS3					:= ADR(tyDInput.bClampRS3);
	p_DIUnClampRS3					:= ADR(tyDInput.bUnClampRS3);
	p_DIUSWidthChkSen1				:= ADR(tyDInput.bUSWidthChkSen1);
	
	p_DICoverSWSig2					:= ADR(tyDInput.bCoverSWSig2); // ADD
	p_DIUnlockCoverSigFromDS		:= ADR(tyDInput.bUnlockCoverSigFromDS); // ADD
	p_DIUnlockCoverSigFromUS		:= ADR(tyDInput.bUnlockCoverSigFromUS); // ADD
	p_DIUnlockSafetySigFromDS		:= ADR(tyDInput.bSafetySigFromDS);
	p_DIUnlockSafetySigFromUS		:= ADR(tyDInput.bSafetySigFromUS);
	(* Always Change If Project Change *)
	
END_PROGRAM