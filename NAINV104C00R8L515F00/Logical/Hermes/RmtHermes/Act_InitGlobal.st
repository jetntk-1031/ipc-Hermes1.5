(** 2021-08-01 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamHermesPrep;
	p_sIPAddr ACCESS p_HWInfoIPAddr;
	p_tyDTStructure ACCESS p_TimeCurrDTStruct;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	p_sMcId ACCESS p_McParamMcNm;
	p_bRmtPrep ACCESS p_NtParamHermesRmtPrep;
	p_bRmtEn ACCESS p_McParamHermesRmtEn;
	p_udiSndBffrSize ACCESS p_NtParamRmtHermesSndBffrSize;
	p_udiRcvBffrSize ACCESS p_NtParamRmtHermesRcvBffrSize;
	p_udiAliveIdleTimeInSec ACCESS p_NtParamRmtHermesAliveTmInSec;
	p_udiFileKeepDay ACCESS p_NtParamRmtHermesFileKeepDay;
	p_sConfigFileName ACCESS p_NtParamRmtHermesConfigFileNm;
	p_sProgNm ACCESS p_NtParamRmtHermesProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_tyHermesConfiguration ACCESS p_HermesConfiguration;
	p_eHermesStat ACCESS p_HermesStat;
	p_eHermesStatus ACCESS p_HermesStatus;
	p_eMcParamStat ACCESS p_McParamStat;
	p_eMcParamStatus ACCESS p_McParamStatus;
	p_iInput ACCESS p_NtParamHermesInput;
	p_iOutput ACCESS p_NtParamHermesOutput;
	
	(* Always Change If Project Change *)
END_ACTION
