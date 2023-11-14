(** 2020-03-16 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_bManual ACCESS ADR(bManual);
	p_bStartup ACCESS ADR(bStartup);
	p_bErr ACCESS ADR(bErr);
	p_bErrNoBuz ACCESS ADR(bErrNoBuz);
	p_bWarning ACCESS ADR(bWarning);
	p_bWarningNoBuz ACCESS ADR(bWarningNoBuz);
	p_bWarning1 ACCESS ADR(bWarning1);
	p_bWarning1NoBuz ACCESS ADR(bWarning1NoBuz);
	p_bWarning2 ACCESS ADR(bWarning2);
	p_bWarning2NoBuz ACCESS ADR(bWarning2NoBuz);
	p_bWarning3 ACCESS ADR(bWarning3);
	p_bWarning3NoBuz ACCESS ADR(bWarning3NoBuz);
	p_bWarning4 ACCESS ADR(bWarning4);
	p_bWarning4NoBuz ACCESS ADR(bWarning4NoBuz);
	p_bWarning5 ACCESS ADR(bWarning5);
	p_bWarning5NoBuz ACCESS ADR(bWarning5NoBuz);
	p_bChgRcp ACCESS ADR(bChgRcp);
	p_bSeqStop ACCESS ADR(bSeqStop);
	p_bStep ACCESS ADR(bStep);
	p_bOps ACCESS ADR(bOps);
	p_bStandby ACCESS ADR(bStandby);
	p_bSimulation ACCESS ADR(bSimulation);
	p_bMuteBuz ACCESS ADR(bMuteBuz);
	
	// ADD START
	p_tTLChgRcpBlinkTm ACCESS ADR(tTLChgRcpBlinkTm);
	
	p_tTLErrBlinkTm ACCESS ADR(tTLErrBlinkTm);
	p_tBuzErrOnTm ACCESS ADR(tBuzErrOnTm);
	p_tBuzErrRestTm ACCESS ADR(tBuzErrRestTm);
	p_usiBuzErrOnCntr ACCESS ADR(usiBuzErrOnCntr);
	p_bBuzErrStopSeqEn ACCESS ADR(bBuzErrStopSeqEn);
	p_usiBuzErrStopSeqCntr ACCESS ADR(usiBuzErrStopSeqCntr);
	
	p_tTLWarnBlinkTm ACCESS ADR(tTLWarnBlinkTm);
	p_tBuzWarnOnTm ACCESS ADR(tBuzWarnOnTm);
	p_tBuzWarnRestTm ACCESS ADR(tBuzWarnRestTm);
	p_usiBuzWarnOnCntr ACCESS ADR(usiBuzWarnOnCntr);
	p_bBuzWarnStopSeqEn ACCESS ADR(bBuzWarnStopSeqEn);
	p_usiBuzWarnStopSeqCntr ACCESS ADR(usiBuzWarnStopSeqCntr);
	
	p_tTLWarn1BlinkTm ACCESS ADR(tTLWarn1BlinkTm);
	p_tBuzWarn1OnTm ACCESS ADR(tBuzWarn1OnTm);
	p_tBuzWarn1RestTm ACCESS ADR(tBuzWarn1RestTm);
	p_usiBuzWarn1OnCntr ACCESS ADR(usiBuzWarn1OnCntr);
	p_bBuzWarn1StopSeqEn ACCESS ADR(bBuzWarn1StopSeqEn);
	p_usiBuzWarn1StopSeqCntr ACCESS ADR(usiBuzWarn1StopSeqCntr);
	
	p_tTLWarn2BlinkTm ACCESS ADR(tTLWarn2BlinkTm);
	p_tBuzWarn2OnTm ACCESS ADR(tBuzWarn2OnTm);
	p_tBuzWarn2RestTm ACCESS ADR(tBuzWarn2RestTm);
	p_usiBuzWarn2OnCntr ACCESS ADR(usiBuzWarn2OnCntr);
	p_bBuzWarn2StopSeqEn ACCESS ADR(bBuzWarn2StopSeqEn);
	p_usiBuzWarn2StopSeqCntr ACCESS ADR(usiBuzWarn2StopSeqCntr);
	
	p_tTLWarn3BlinkTm ACCESS ADR(tTLWarn3BlinkTm);
	p_tBuzWarn3OnTm ACCESS ADR(tBuzWarn3OnTm);
	p_tBuzWarn3RestTm ACCESS ADR(tBuzWarn3RestTm);
	p_usiBuzWarn3OnCntr ACCESS ADR(usiBuzWarn3OnCntr);
	p_bBuzWarn3StopSeqEn ACCESS ADR(bBuzWarn3StopSeqEn);
	p_usiBuzWarn3StopSeqCntr ACCESS ADR(usiBuzWarn3StopSeqCntr);
	
	p_tTLWarn4BlinkTm ACCESS ADR(tTLWarn4BlinkTm);
	p_tBuzWarn4OnTm ACCESS ADR(tBuzWarn4OnTm);
	p_tBuzWarn4RestTm ACCESS ADR(tBuzWarn4RestTm);
	p_usiBuzWarnOnCntr ACCESS ADR(usiBuzWarn4OnCntr);
	p_bBuzWarn4StopSeqEn ACCESS ADR(bBuzWarn4StopSeqEn);
	p_usiBuzWarn4StopSeqCntr ACCESS ADR(usiBuzWarn4StopSeqCntr);
	
	p_tTLWarn5BlinkTm ACCESS ADR(tTLWarn5BlinkTm);
	p_tBuzWarn5OnTm ACCESS ADR(tBuzWarn5OnTm);
	p_tBuzWarn5RestTm ACCESS ADR(tBuzWarn5RestTm);
	p_usiBuzWarn5OnCntr ACCESS ADR(usiBuzWarn5OnCntr);
	p_bBuzWarn5StopSeqEn ACCESS ADR(bBuzWarn5StopSeqEn);
	p_usiBuzWarn5StopSeqCntr ACCESS ADR(usiBuzWarn5StopSeqCntr);
	
	p_tBuzAlertOnTm ACCESS ADR(tBuzAlertOnTm);
	p_tBuzAlertRestTm ACCESS ADR(tBuzAlertRestTm);
	p_usiBuzAlertOnCntr ACCESS ADR(usiBuzAlertOnCntr);
	p_bBuzAlertStopSeqEn ACCESS ADR(bBuzAlertStopSeqEn);
	p_usiBuzAlertStopSeqCntr ACCESS ADR(usiBuzAlertStopSeqCntr);
	
	p_tTLBlueBlinkTm ACCESS ADR(tTLBlueBlinkTm);
	p_tTLAmberBlinkTm ACCESS ADR(tTLAmberBlinkTm);
	p_tTLWhiteBlinkTm ACCESS ADR(tTLWhiteBlinkTm);
	p_tTLRedBlinkTm ACCESS ADR(tTLRedBlinkTm);
	p_tTLGreenBlinkTm ACCESS ADR(tTLGreenBlinkTm);
	// ADD END
	
	p_tErrBlinkTm ACCESS ADR(tErrBlinkTm);
	p_tChgRcpBlinkTm ACCESS ADR(tChgRcpBlinkTm);
	p_tWarnBlinkTm ACCESS ADR(tWarnBlinkTm);
	p_tWarnRestTm ACCESS ADR(tWarnRestTm);
	p_usiWarnOnTm ACCESS ADR(usiWarnOnTm);
	p_tWarn1BlinkTm ACCESS ADR(tWarn1BlinkTm);
	p_tWarn1RestTm ACCESS ADR(tWarn1RestTm);
	p_usiWarn1OnTm ACCESS ADR(usiWarn1OnTm);
	p_tWarn2BlinkTm ACCESS ADR(tWarn2BlinkTm);
	p_tWarn2RestTm ACCESS ADR(tWarn2RestTm);
	p_usiWarn2OnTm ACCESS ADR(usiWarn2OnTm);
	p_tWarn3BlinkTm ACCESS ADR(tWarn3BlinkTm);
	p_tWarn3RestTm ACCESS ADR(tWarn3RestTm);
	p_usiWarn3OnTm ACCESS ADR(usiWarn3OnTm);
	p_tWarn4BlinkTm ACCESS ADR(tWarn4BlinkTm);
	p_tWarn4RestTm ACCESS ADR(tWarn4RestTm);
	p_usiWarn4OnTm ACCESS ADR(usiWarn4OnTm);
	p_tWarn5BlinkTm ACCESS ADR(tWarn5BlinkTm);
	p_tWarn5RestTm ACCESS ADR(tWarn5RestTm);
	p_usiWarn5OnTm ACCESS ADR(usiWarn5OnTm);
	
	p_bCoverSwitchSig ACCESS ADR(bCoveSwitchSig);
	p_eTLBuzMode ACCESS ADR(eTLBuzMode);
	
	p_bAOIErrSig ACCESS ADR(bAOIErrSig);
	p_bAOIOriginSig ACCESS ADR(bAOIOriginSig);
	
	p_bBuzAlertEn ACCESS ADR(bBuzAlertEn);	
	p_bTLBlueFlashEn ACCESS ADR(bTLBlueFlashEn);
	p_bTLAmberFlashEn ACCESS ADR(bTLAmberFlashEn);
	p_bTLWhiteFlashEn ACCESS ADR(bTLWhiteFlashEn);
	p_bTLRedFlashEn ACCESS ADR(bTLRedFlashEn);
	p_bTLGreenFlashEn ACCESS ADR(bTLGreenFlashEn);
	

END_ACTION
