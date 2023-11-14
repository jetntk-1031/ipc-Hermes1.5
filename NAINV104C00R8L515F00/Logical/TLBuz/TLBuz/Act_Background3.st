(** 2020-10-05 **)
ACTION Act_Background3: //For BHTC Machines
	
	IF EDGEPOS(p_bManual) THEN
	
		fbBlink(bEn := FALSE);
		fbWarning(bEn := FALSE);
		
		bTLRed		:= FALSE;
		bTLAmber	:= FALSE;
		bTLWhite	:= TRUE;
		bTLGreen	:= FALSE;
		bBuzBeep	:= FALSE;
		
	ELSIF p_bManual THEN
		
		IF p_bErr = TRUE THEN
			
			fbBlink.tOnTm	:= p_tTLErrBlinkTm; //Error T#500ms (from NtParam)
			fbBlink.tOffTm	:= p_tTLErrBlinkTm; //Error T#500ms (from NtParam)
			
			fbWarning.tOnTm					:= p_tBuzErrOnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzErrOnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzErrRestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzErrOnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzErrStopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzErrStopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
		
			bTLAmber	:= fbBlink.bOut;
			bBuzBeep	:= (fbWarning.bOut) AND (p_bMuteBuz = FALSE);
			
			bManualErrOn := TRUE;
			
		ELSIF bManualErrOn THEN
			
			fbBlink(bEn := FALSE);
			fbWarning(bEn := FALSE);
		
			bTLAmber	:= FALSE;
			bBuzBeep	:= FALSE;
		
			bManualErrOn := FALSE;
			
		END_IF
			
	ELSIF p_bManual = FALSE THEN
		
		bManualErrOn := FALSE;
		
		IF p_bStartup = TRUE THEN //Startup, 3 colour ON
			
			fbBlink(bEn := FALSE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= TRUE;
			bTLAmber	:= TRUE;
			bTLWhite	:= TRUE;
			bTLGreen	:= TRUE;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bErr = TRUE THEN //Machine Error,Green TL Off, Red TL Blink 
			
			fbBlink.tOnTm	:= p_tTLErrBlinkTm; //Error T#500ms (from NtParam)
			fbBlink.tOffTm	:= p_tTLErrBlinkTm; //Error T#500ms (from NtParam)
			
			fbWarning.tOnTm					:= p_tBuzErrOnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzErrOnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzErrRestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzErrOnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzErrStopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzErrStopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;
			bTLAmber	:= fbBlink.bOut;
			bTLWhite	:= FALSE;
			bTLGreen	:= FALSE;
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);
			
		ELSIF p_bErrNoBuz = TRUE THEN //not used (Machine Error With No Buz)
			
			fbBlink.tOnTm	:= p_tTLErrBlinkTm; //Error T#500ms, not used (from NtParam)
			fbBlink.tOffTm	:= p_tTLErrBlinkTm; //Error T#500ms, not used (from NtParam)
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= fbBlink.bOut;
			bTLWhite	:= FALSE;
			bTLGreen	:= FALSE;
			bBuzBeep	:= FALSE;

			
		ELSIF p_bWarning = TRUE THEN //Warning or AlarmInfo; [Put Conditions in Act_Link.st]
			
			fbBlink.tOnTm	:= p_tTLWarnBlinkTm; //Warn T#500ms (from NtParam)
			fbBlink.tOffTm	:= p_tTLWarnBlinkTm; //Warn T#500ms (from NtParam)
			
			fbWarning.tOnTm					:= p_tBuzWarnOnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzWarnOnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzWarnRestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzWarnOnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzWarnStopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzWarnStopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;
			bTLAmber	:= p_bStandby; //[p_bStandby ACCESS p_OpsStatusStop], [p_OpsStatusStop	:= ADR(bStatusStop);]
			bTLWhite	:= fbBlink.bOut; 
			bTLGreen	:= p_bOps; //[p_bOps ACCESS p_OpsStatusRun],  [p_OpsStatusRun	:= ADR(bStatusRun)];
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);
			
		ELSIF p_bWarningNoBuz = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarnBlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarnBlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bWarning1 = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn1BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn1BlinkTm;  
		
			fbWarning.tOnTm					:= p_tBuzWarn1OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzWarn1OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzWarn1RestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzWarn1OnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzWarn1StopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzWarn1StopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;			
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);
			
		ELSIF p_bWarning1NoBuz = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn1BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn1BlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bWarning2 = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn2BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn2BlinkTm;  
		
			fbWarning.tOnTm					:= p_tBuzWarn2OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzWarn2OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzWarn2RestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzWarn2OnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzWarn2StopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzWarn2StopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;			
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);
			
		ELSIF p_bWarning2NoBuz = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn2BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn2BlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bWarning3 = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn3BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn3BlinkTm;  
		
			fbWarning.tOnTm					:= p_tBuzWarn3OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzWarn3OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzWarn3RestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzWarn3OnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzWarn3StopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzWarn3StopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;			
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);
			
		ELSIF p_bWarning3NoBuz = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn3BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn3BlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bWarning4 = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn4BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn4BlinkTm;  
		
			fbWarning.tOnTm					:= p_tBuzWarn4OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzWarn4OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzWarn4RestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzWarn4OnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzWarn4StopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzWarn4StopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;			
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);
		
		ELSIF p_bWarning4NoBuz = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn4BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn4BlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bWarning5 = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn5BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn5BlinkTm;  
		
			fbWarning.tOnTm					:= p_tBuzWarn5OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tOffTm				:= p_tBuzWarn5OnTm; //Warn T#500ms (from NtParam)
			fbWarning.tRstTm				:= p_tBuzWarn5RestTm; //Rest 5 seconds (from NtParam)
			fbWarning.usiOnCnt				:= p_usiBuzWarn5OnCntr; //Count 3 times (from NtParam)
			fbWarning.bStopAftRptSeqEn		:= p_bBuzWarn5StopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning.usiStopAftRptSeqCntr	:= p_usiBuzWarn5StopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbBlink(bEn := TRUE);
			fbWarning(bEn := TRUE);
			
			bTLBlue		:= FALSE;			
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= fbWarning.bOut AND (p_bMuteBuz = FALSE);		
			
		ELSIF p_bWarning5NoBuz = TRUE THEN //not used
			
			fbBlink.tOnTm	:= p_tTLWarn5BlinkTm; 
			fbBlink.tOffTm	:= p_tTLWarn5BlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;		
			bTLAmber	:= p_bStandby;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= p_bOps;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bSeqStop = TRUE THEN //[p_bSeqStop ACCESS p_OpsStatusCycleStop] ,[p_OpsStatusCycleStop	:= ADR(bStatusCycleStop);]
			
			fbBlink.tOnTm	:= tBlinkTm; //Local T#500ms
			fbBlink.tOffTm	:= tBlinkTm; //Local T#500ms
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);

			bTLBlue		:= FALSE;
			bTLAmber	:= fbBlink.bOut;
			bTLWhite	:= FALSE;
			bTLGreen	:= TRUE;
			bBuzBeep	:= FALSE;
		
		ELSIF p_bChgRcp = TRUE THEN //Change Rcp, Disco Light, not used
			
			fbBlink.tOnTm	:= p_tTLChgRcpBlinkTm; //Chg Rcp T#500ms (from NtParam)
			fbBlink.tOffTm	:= p_tTLChgRcpBlinkTm; //Chg Rcp T#500ms (from NtParam)
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
			
			IF EDGE(fbBlink.bOut) THEN
				IF bTLAmber = TRUE THEN
					bTLAmber	:= FALSE;
					bTLWhite	:= FALSE;
					bTLGreen	:= TRUE;
				ELSIF bTLWhite = TRUE THEN
					bTLAmber	:= TRUE;
					bTLWhite	:= FALSE;
					bTLGreen	:= FALSE;
				ELSE
					bTLAmber	:= FALSE;
					bTLWhite	:= TRUE;
					bTLGreen	:= FALSE;
				END_IF
			END_IF
			
			bBuzBeep	:= fbBlink.bOut AND (p_bMuteBuz = FALSE);

		ELSIF p_bStep = TRUE THEN //not used, [p_bStep ACCESS p_OpsStatusStep], [p_OpsStatusStep	:= ADR(bStatusStep);]
			
			fbBlink.tOnTm	:= tBlinkTm; 
			fbBlink.tOffTm	:= tBlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);

			bTLBlue		:= FALSE;			
			bTLAmber	:= FALSE;
			bTLWhite	:= FALSE;
			bTLGreen	:= fbBlink.bOut;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bOps = TRUE THEN //Auto Mode, Green TL only
			
			fbBlink(bEn := FALSE);
			fbWarning(bEn := FALSE);
		
			bTLRed		:= FALSE;
			bTLAmber	:= FALSE;
			bTLGreen	:= TRUE;
			bBuzBeep	:= FALSE;
			
		ELSIF p_bSimulation = TRUE THEN //For simulation
			
			fbBlink.tOnTm	:= tBlinkTm; 
			fbBlink.tOffTm	:= tBlinkTm; 
			fbBlink(bEn := TRUE);
			fbWarning(bEn := FALSE);
	
			bTLBlue		:= fbBlink.bOut;		
			bTLAmber	:= fbBlink.bOut;
			bTLWhite	:= fbBlink.bOut;
			bTLGreen	:= TRUE;
			bBuzBeep	:= FALSE;
		
			
		ELSIF p_bStandby = TRUE THEN //Stop Mode, On Red TL only
			
			fbBlink(bEn := FALSE);
			fbWarning(bEn := FALSE);

			bTLBlue		:= FALSE;		
			bTLAmber	:= TRUE;
			bTLWhite	:= FALSE;
			bTLGreen	:= FALSE;
			bBuzBeep	:= FALSE;
			
			
		ELSE //Resest if nothing else
			
			fbBlink(bEn := FALSE); 
			fbWarning(bEn := FALSE);
			
			bTLBlue		:= FALSE;			
			bTLAmber	:= FALSE;
			bTLWhite	:= FALSE;
			bTLGreen	:= FALSE;
			bBuzBeep	:= FALSE;

			
		END_IF
		
	END_IF
	
	IF p_bManual = FALSE AND p_bErr = FALSE THEN
		IF p_bTLAmberFlashEn THEN //Amber Flash 1 sec [Put Conditions in Act_Link.st]
			 
			fbBlink1.tOnTm	:= p_tTLAmberBlinkTm; //T#500ms (from NtParam)
			fbBlink1.tOffTm	:= p_tTLAmberBlinkTm; //T#500ms (from NtParam)
			fbBlink1(bEn := TRUE);
		
			bTLAmber	:= fbBlink1.bOut;
		
		ELSE
			fbBlink1(bEn := FALSE);
		END_IF
		
		IF p_bTLWhiteFlashEn THEN //White Flash 1 sec [Put Conditions in Act_Link.st]
			
			fbBlink2.tOnTm	:= p_tTLWhiteBlinkTm; //T#500ms (from NtParam)
			fbBlink2.tOffTm	:= p_tTLWhiteBlinkTm; //T#500ms (from NtParam)
			fbBlink2(bEn := TRUE);
		
			bTLWhite		:= fbBlink2.bOut;
		ELSE
			fbBlink2(bEn := FALSE);
		END_IF
		
		IF p_bTLGreenFlashEn THEN //Green Flash 1 sec [Put Conditions in Act_Link.st]
			
			fbBlink3.tOnTm	:= p_tTLGreenBlinkTm; //T#500ms (from NtParam)
			fbBlink3.tOffTm	:= p_tTLGreenBlinkTm; //T#500ms (from NtParam)
			fbBlink3(bEn := TRUE);
		
			bTLGreen	:= fbBlink3.bOut;
		ELSE
			fbBlink3(bEn := FALSE);
		END_IF
		
		IF p_bTLBlueFlashEn THEN //Blue Flash 1 sec [Put Conditions in Act_Link.st]
			
			fbBlink4.tOnTm	:= p_tTLBlueBlinkTm; //T#500ms (from NtParam)
			fbBlink4.tOffTm	:= p_tTLBlueBlinkTm; //T#500ms (from NtParam)
			fbBlink4(bEn := TRUE);
		
			bTLGreen	:= fbBlink4.bOut;
		ELSE
			fbBlink4(bEn := FALSE);
		END_IF
		
		IF p_bBuzAlertEn = TRUE AND fbWarning.bEn=FALSE THEN
		
			fbWarning1.tOnTm				:= p_tBuzAlertOnTm;
			fbWarning1.tOffTm				:= p_tBuzAlertOnTm;
			fbWarning1.tRstTm				:= p_tBuzAlertRestTm;
			fbWarning1.usiOnCnt				:= p_usiBuzAlertOnCntr;
			fbWarning1.bStopAftRptSeqEn		:= p_bBuzAlertStopSeqEn; //Enable Sequence Count (from NtParam)
			fbWarning1.usiStopAftRptSeqCntr	:= p_usiBuzAlertStopSeqCntr; //Sequence Counter  (from NtParam)
			
			fbWarning1(bEn := TRUE);
			
			bBuzBeep	:= fbWarning1.bOut AND (p_bMuteBuz = FALSE);
			
		ELSE
			fbWarning1(bEn := FALSE);
		END_IF
	ELSE
		fbBlink1(bEn := FALSE);
		fbBlink2(bEn := FALSE);
		fbBlink3(bEn := FALSE);
		fbBlink4(bEn := FALSE);
		fbWarning1(bEn := FALSE);
	END_IF
	
	//Arrange p_bWarning according to the severity of the warning or info (Err is prioritized)	
	IF p_bErr THEN
		usiWarnInfoStateNew	:= 1;
	ELSIF p_bWarning THEN
		usiWarnInfoStateNew	:= 2;
	ELSIF p_bWarning1 THEN
		usiWarnInfoStateNew	:= 3;
	ELSIF p_bWarning2 THEN
		usiWarnInfoStateNew	:= 4;
	ELSIF p_bWarning3 THEN
		usiWarnInfoStateNew	:= 5;
	ELSIF p_bWarning4 THEN
		usiWarnInfoStateNew	:= 6;
	ELSIF p_bWarning5 THEN
		usiWarnInfoStateNew	:= 7;
	ELSIF p_bBuzAlertEn AND fbWarning.bEn=FALSE THEN
		usiWarnInfoStateNew	:= 8;
	ELSE
		usiWarnInfoStateNew	:= 0;
	END_IF
	
	IF usiWarnInfoStateOld<>usiWarnInfoStateNew THEN
		usiWarnInfoStateOld:=usiWarnInfoStateNew;
		fbWarning(bEn := FALSE);
		fbWarning1(bEn := FALSE);
	END_IF
	
END_ACTION
