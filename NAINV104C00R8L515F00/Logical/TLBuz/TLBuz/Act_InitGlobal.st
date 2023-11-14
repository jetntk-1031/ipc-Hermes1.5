(** 2019-05-20 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkAlarmWarning ACCESS p_AlarmWarning;
	p_bLinkAlarmInfo ACCESS p_AlarmInfo;
	p_bLinkAlarmInfoLF ACCESS p_AlarmInfoLF;
	p_bLinkLFBuzMute ACCESS p_McParamLFBuzMute;
	
	//Pass Data To Internal Use
	p_bManual ACCESS p_UIUIMnlMod;
	p_bStartup ACCESS p_StartupRun;
	p_bErr ACCESS p_AlarmErr;
	p_bSeqStop ACCESS p_OpsStatusCycleStop;
	p_bStep ACCESS p_OpsStatusStep;
	p_bOps ACCESS p_OpsStatusRun;
	p_bStandby ACCESS p_OpsStatusStop;
	p_bMuteBuz ACCESS p_UIMuteBuz;
	// ADD START
	p_tTLChgRcpBlinkTm ACCESS p_NtParamTLChgRcpBlinkTm;
	
	p_tTLErrBlinkTm ACCESS p_NtParamTLErrBlinkTm;
	p_tBuzErrOnTm ACCESS p_NtParamBuzErrOnTm;
	p_tBuzErrRestTm ACCESS p_NtParamBuzErrRestTm;
	p_usiBuzErrOnCntr ACCESS p_NtParamBuzErrOnCntr;
	p_bBuzErrStopSeqEn ACCESS p_NtParamBuzErrStopSeqEn;
	p_usiBuzErrStopSeqCntr ACCESS p_NtParamBuzErrStopSeqCntr;
	
	p_tTLWarnBlinkTm ACCESS p_NtParamTLWarnBlinkTm;
	p_tBuzWarnOnTm ACCESS p_NtParamBuzWarnOnTm;
	p_tBuzWarnRestTm ACCESS p_NtParamBuzWarnRestTm;
	p_usiBuzWarnOnCntr ACCESS p_NtParamBuzWarnOnCntr;
	p_bBuzWarnStopSeqEn ACCESS p_NtParamBuzWarnStopSeqEn;
	p_usiBuzWarnStopSeqCntr ACCESS p_NtParamBuzWarnStopSeqCntr;
	
	p_tTLWarn1BlinkTm ACCESS p_NtParamTLWarn1BlinkTm;
	p_tBuzWarn1OnTm ACCESS p_NtParamBuzWarn1OnTm;
	p_tBuzWarn1RestTm ACCESS p_NtParamBuzWarn1RestTm;
	p_usiBuzWarn1OnCntr ACCESS p_NtParamBuzWarn1OnCntr;
	p_bBuzWarn1StopSeqEn ACCESS p_NtParamBuzWarn1StopSeqEn;
	p_usiBuzWarn1StopSeqCntr ACCESS p_NtParamBuzWarn1StopSeqCntr;
	
	p_tTLWarn2BlinkTm ACCESS p_NtParamTLWarn2BlinkTm;
	p_tBuzWarn2OnTm ACCESS p_NtParamBuzWarn2OnTm;
	p_tBuzWarn2RestTm ACCESS p_NtParamBuzWarn2RestTm;
	p_usiBuzWarn2OnCntr ACCESS p_NtParamBuzWarn2OnCntr;
	p_bBuzWarn2StopSeqEn ACCESS p_NtParamBuzWarn2StopSeqEn;
	p_usiBuzWarn2StopSeqCntr ACCESS p_NtParamBuzWarn2StopSeqCntr;
	
	p_tTLWarn3BlinkTm ACCESS p_NtParamTLWarn3BlinkTm;
	p_tBuzWarn3OnTm ACCESS p_NtParamBuzWarn3OnTm;
	p_tBuzWarn3RestTm ACCESS p_NtParamBuzWarn3RestTm;
	p_usiBuzWarn3OnCntr ACCESS p_NtParamBuzWarn3OnCntr;
	p_bBuzWarn3StopSeqEn ACCESS p_NtParamBuzWarn3StopSeqEn;
	p_usiBuzWarn3StopSeqCntr ACCESS p_NtParamBuzWarn3StopSeqCntr;
	
	p_tTLWarn4BlinkTm ACCESS p_NtParamTLWarn4BlinkTm;
	p_tBuzWarn4OnTm ACCESS p_NtParamBuzWarn4OnTm;
	p_tBuzWarn4RestTm ACCESS p_NtParamBuzWarn4RestTm;
	p_usiBuzWarn4OnCntr ACCESS p_NtParamBuzWarn4OnCntr;
	p_bBuzWarn4StopSeqEn ACCESS p_NtParamBuzWarn4StopSeqEn;
	p_usiBuzWarn4StopSeqCntr ACCESS p_NtParamBuzWarn4StopSeqCntr;
	
	p_tTLWarn5BlinkTm ACCESS p_NtParamTLWarn5BlinkTm;
	p_tBuzWarn5OnTm ACCESS p_NtParamBuzWarn5OnTm;
	p_tBuzWarn5RestTm ACCESS p_NtParamBuzWarn5RestTm;
	p_usiBuzWarn5OnCntr ACCESS p_NtParamBuzWarn5OnCntr;
	p_bBuzWarn5StopSeqEn ACCESS p_NtParamBuzWarn5StopSeqEn;
	p_usiBuzWarn5StopSeqCntr ACCESS p_NtParamBuzWarn5StopSeqCntr;
	
	p_tBuzAlertOnTm ACCESS p_NtParamBuzAlertOnTm;
	p_tBuzAlertRestTm ACCESS p_NtParamBuzAlertRestTm;
	p_usiBuzAlertOnCntr ACCESS p_NtParamBuzAlertOnCntr;
	p_bBuzAlertStopSeqEn ACCESS p_NtParamBuzAlertStopSeqEn;
	p_usiBuzAlertStopSeqCntr ACCESS p_NtParamBuzAlertStopSeqCntr;
	
	p_tTLBlueBlinkTm ACCESS p_NtParamTLBlueBlinkTm;
	p_tTLAmberBlinkTm ACCESS p_NtParamTLAmberBlinkTm;
	p_tTLWhiteBlinkTm ACCESS p_NtParamTLWhiteBlinkTm;
	p_tTLRedBlinkTm ACCESS p_NtParamTLRedBlinkTm;
	p_tTLGreenBlinkTm ACCESS p_NtParamTLGreenBlinkTm;
	// ADD END
	//p_tChgRcpBlinkTm ACCESS p_NtParamTLBuzChgRcpBlinkTm;
	//p_tWarnBlinkTm ACCESS p_NtParamTLBuzWarnBlinkTm;
	//p_tWarnRestTm ACCESS p_NtParamTLBuzWarnRestTm;
	//p_usiWarnOnTm ACCESS p_NtParamTLBuzWarnOnTm;
	//p_tWarn1BlinkTm ACCESS p_NtParamTLBuzWarn1BlinkTm;
	//p_tWarn1RestTm ACCESS p_NtParamTLBuzWarn1RestTm;
	//p_usiWarn1OnTm ACCESS p_NtParamTLBuzWarn1OnTm;
	//p_tWarn2BlinkTm ACCESS p_NtParamTLBuzWarn2BlinkTm;
	//p_tWarn2RestTm ACCESS p_NtParamTLBuzWarn2RestTm;
	//p_usiWarn2OnTm ACCESS p_NtParamTLBuzWarn2OnTm;
	//p_tWarn3BlinkTm ACCESS p_NtParamTLBuzWarn3BlinkTm;
	//p_tWarn3RestTm ACCESS p_NtParamTLBuzWarn3RestTm;
	//p_usiWarn3OnTm ACCESS p_NtParamTLBuzWarn3OnTm;
	//p_tWarn4BlinkTm ACCESS p_NtParamTLBuzWarn4BlinkTm;
	//p_tWarn4RestTm ACCESS p_NtParamTLBuzWarn4RestTm;
	//p_usiWarn4OnTm ACCESS p_NtParamTLBuzWarn4OnTm;
	//p_tWarn5BlinkTm ACCESS p_NtParamTLBuzWarn5BlinkTm;
	//p_tWarn5RestTm ACCESS p_NtParamTLBuzWarn5RestTm;
	//p_usiWarn5OnTm ACCESS p_NtParamTLBuzWarn5OnTm;
	
	p_bCoverSwitchSig ACCESS p_DICoverSWSig;
	p_eTLBuzMode ACCESS p_NtParamTLBuzMode;
	
	(* Always Change If Project Change *)
	
END_ACTION
