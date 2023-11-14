(** 2020-10-14 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamAWPrep;
	p_bDis ACCESS p_McParamAWDis;
	p_bOps ACCESS p_OpsStatusRun;
	p_bManual ACCESS p_UIMnlMod;
	p_diWidthAtHmPos ACCESS p_McParamWidthAtHmPos;
	p_tyTuning ACCESS p_NtParamAWTuning;
	p_diJogVelInUMPS ACCESS p_UIMnlAWJogSpd;
	p_diMovePosInUM ACCESS p_UIMnlAWTargetPos;
	p_diMoveDistInUM ACCESS p_UIMnlAWStepSize;
	p_diMoveAcc ACCESS p_NtParamAWAcc;
	p_diMoveDec ACCESS p_NtParamAWDec;
	p_diMinWidthInUM ACCESS p_NtParamProdRcpMinWidth;
	p_diMaxWidthInUM ACCESS p_NtParamProdRcpMaxWidth;
	//p_diWidthOffsetInUM ACCESS p_NtParamWidthOffset;
	p_diWidthOffsetInUM ACCESS p_McParamWidthOffset;
	p_bInletSensor ACCESS p_DIConvLftSen;
	p_bOutletSensor ACCESS p_DIConvRgtSen;
	p_bDir ACCESS p_NtParamAWDir;
	p_bDirBl ACCESS p_NtParamAWDirBl;
	p_usiNode ACCESS p_NtParamAWNode;
	p_sDevice ACCESS p_NtParamAWDevice;
	p_sProgNm ACCESS p_NtParamAWProgNm;
	p_diMoveBacklashDistInUM ACCESS p_NtParamAWMovBlDistInUM;
	p_diPitchInUM ACCESS p_NtParamAWPitchInUM;
	p_tyParamInHm ACCESS p_NtParamAWParamInHm;
	p_tyParamInConvert ACCESS p_NtParamAWParamInConvert;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_eNtParamMotorType ACCESS p_NtParamAWMotorType;
	
	p_bClamp2Sensor ACCESS p_DIClamp2Sen;
	p_bClamp3Sensor ACCESS p_DIClamp3Sen;
	
	p_bInletShutterCloseRS ACCESS p_DIInShutterCloseRS;
	p_bOutletShutterCloseRS ACCESS p_DIOutShutterCloseRS;
	p_bInletShutterPrep ACCESS p_NtParamProjInletShutPrep;
	p_bInletShutterDis ACCESS p_McParamInShutterDis;
	p_bOutletShutterPrep ACCESS p_NtParamProjOutletShutPrep;
	p_bOutletShutterDis ACCESS p_McParamOutShutterDis;
	(* Always Change If Project Change *)
	
END_ACTION
