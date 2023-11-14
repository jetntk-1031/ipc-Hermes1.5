(** 2020-10-06 **)
ACTION Act_OpsStandard_Hermes:
	//InvertStepUSStandby
	//InvertStepAWMov 
	IF eGotoOpsStep <> eOpsStep THEN 
	
		CASE eGotoOpsStep OF 		 
				
			ELSE
				eOpsStep	:= eGotoOpsStep;	
				
		END_CASE	
		
	END_IF	
	
	Act_LogStep;
	
	IF eOpsStep = eGotoOpsStep THEN
		
		IF bPaused = FALSE THEN
			
			CASE eOpsStep OF
				
				InvertStepInitChkCondition:
					sStepTxt	:= 'Init Check Condition';
					
					IF p_bClampPrep THEN
						IF eInvertCurrPos	= InvertPosInvalid THEN
							bInvertPosInvalidSkipInit := TRUE;
							
							IF p_bClampDis THEN
								bClampDisInitUnblk	:= TRUE;							
							END_IF
							
							eGotoOpsStep	:= InvertStepClampBlkBefInvert;
						ELSE
							eGotoOpsStep	:= InvertStepInitClampUnblk;
						END_IF
					ELSE
						IF eInvertCurrPos	= InvertPosInvalid THEN
							bInvertPosInvalidSkipInit := TRUE;
							
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF
						ELSE
							eGotoOpsStep	:= InvertStepInitInvertComplChk;
						END_IF
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepInitClampUnblk:
					sStepTxt	:= 'Init Clamp Unblock';
					
					eClampAct	:= PneuActRet;
					
					IF p_eClampStatus = Done AND p_eClampStat = PneuActRet THEN
						
						eClampAct		:= PneuActIdle;
						eGotoOpsStep	:= InvertStepInitInvertComplChk;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepInitInvertComplChk:
					sStepTxt	:= 'Init Checking Invert Complete Condition';
				
					IF bInvertCompl = FALSE THEN
						IF eInvertCurrPos = InvertCurrPosAtRemote THEN
							IF p_bLeftSen = TRUE THEN
								eGotoOpsStep	:= InvertStepInitConvAwayLftSen;
							ELSE
								eGotoOpsStep	:= InvertStepInitStopperBlk;
							END_IF	
							
						ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
							IF p_bRightSen = TRUE THEN
								eGotoOpsStep	:= InvertStepInitConvAwayRgtSen;
							ELSE	
								eGotoOpsStep	:= InvertStepInitStopperBlk;
							END_IF	
							
						ELSE
							eGotoOpsStep	:= InvertStepInitStopperBlk;
						END_IF	
						
					ELSE
						eGotoOpsStep	:= InvertStepInitStopperUnblk;
					END_IF	
				
					bPaused	:= p_bStop OR p_bStep;
							
				InvertStepInitConvAwayLftSen:
					sStepTxt	:= 'Init Conveyor Away Stopper At Left';
					
					eConvAct	:= ConvActInit;
					
					fbFwdTimer(IN := TRUE, PT := DINT_TO_TIME(p_diFwdDlyTm));
					
					IF fbFwdTimer.Q = TRUE THEN
						fbFwdTimer(IN := FALSE);
						
						bHvBrd			:= FALSE;
						p_bConvHvBrd	:= FALSE;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep	:= InvertStepInitStopperBlk;
							
						bPaused	:= p_bStop OR p_bStep;						
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActInit THEN
						fbFwdTimer(IN := FALSE);
						
						bHvBrd 			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep	:= InvertStepInitStopperBlk;	
							
						bPaused	:= p_bStop OR p_bStep;
					END_IF					
					
				InvertStepInitConvAwayRgtSen:
					sStepTxt	:= 'Init Conveyor Away Stopper At Right';
					
					eConvAct	:= ConvActRevImmedStart;
					
					fbRevTimer(IN := TRUE, PT := DINT_TO_TIME(p_diRevDlyTm));
					
					IF fbRevTimer.Q = TRUE THEN
						fbRevTimer(IN := FALSE);
						
						bHvBrd			:= FALSE;
						p_bConvHvBrd	:= FALSE;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep	:= InvertStepInitStopperBlk;	
							
						bPaused	:= p_bStop OR p_bStep;						
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
						fbRevTimer(IN := FALSE);
						
						bHvBrd 			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep	:= InvertStepInitStopperBlk;	
							
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepInitStopperBlk:
					sStepTxt	:= 'Init Stopper Block';           
					
					eStopperAct	:= PneuActExt;                            

					IF p_eStopperStatus = Done AND p_eStopperStat = PneuActExt THEN
						eStopperAct := PneuActIdle;                       

						IF eInvertCurrPos = InvertCurrPosAtRemote THEN
							eGotoOpsStep  := InvertStepInitConvTwdLftSen;

						ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
							eGotoOpsStep  := InvertStepInitConvTwdRgtSen;							
						END_IF                                                
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF				
					
				InvertStepInitConvTwdLftSen:
					sStepTxt	:= 'Init Conveyor Toward Stopper At Left';
					
					eConvAct	:= ConvActRevImmedStart;
					
					fbRevTimer(IN := TRUE, PT := DINT_TO_TIME(p_diRevDlyTm));
					
					IF fbRevTimer.Q = TRUE THEN
						fbRevTimer(IN := FALSE);
						
						bHvBrd			:= FALSE;
						p_bConvHvBrd	:= FALSE;
						
						eConvAct		:= ConvActIdle;
						
						IF p_bClampPrep AND p_bClampDis=FALSE THEN								
							eGotoOpsStep	:= InvertStepClampBlkBefInvert;								
						ELSE
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
						fbRevTimer(IN := FALSE);
						eConvAct	:= ConvActIdle;
						
						bHvBrd			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						IF p_bClampPrep AND p_bClampDis=FALSE THEN								
							eGotoOpsStep	:= InvertStepClampBlkBefInvert;								
						ELSE								
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF						
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
						
					END_IF
					
				InvertStepInitConvTwdRgtSen:
					sStepTxt	:= 'Init Conveyor Toward Stopper at Right';
					
					eConvAct	:= ConvActInit;
					
					fbFwdTimer(IN := TRUE, PT := DINT_TO_TIME(p_diFwdDlyTm));
					
					IF fbFwdTimer.Q = TRUE THEN
						fbFwdTimer(IN := FALSE);
						
						bHvBrd			:= FALSE;
						p_bConvHvBrd	:= FALSE;
						
						eConvAct	:= ConvActIdle;
						
						IF p_bClampPrep AND p_bClampDis=FALSE THEN								
							eGotoOpsStep	:= InvertStepClampBlkBefInvert;								
						ELSE								
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActInit THEN
						fbFwdTimer(IN := FALSE);
						eConvAct	:= ConvActIdle;
						
						bHvBrd			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						IF p_bClampPrep AND p_bClampDis=FALSE THEN								
							eGotoOpsStep	:= InvertStepClampBlkBefInvert;								
						ELSE								
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF							
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF							
					
				InvertStepInitStopperUnblk:
					sStepTxt	:= 'Init Stopper Unblock';
					
					eStopperAct	:= PneuActRet;
					
					IF p_eStopperStatus = Done AND p_eStopperStat = PneuActRet THEN
						eStopperAct		:= PneuActIdle;
						eGotoOpsStep	:= InvertStepInitConvToRgt;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepInitConvToRgt:
					sStepTxt	:= 'Init Conveyor to Right';
					
					eConvAct	:= ConvActInit;
					
					IF p_eConvStatus = Done AND p_eConvStat = ConvActInit THEN
						eConvAct		:= ConvActIdle;
						
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							eGotoOpsStep	:= InvertStepInitShuttersInOutClose;
						ELSE
							IF (p_bRightSen = TRUE AND NOT(p_bUSReversal)) OR (p_bLeftSen AND p_bUSReversal)   THEN //changed
								bHvBrd 	:= TRUE;
								bGdBrd	:= p_bInitGdBrd;
							
								eGotoOpsStep	:= InvertStepDSStandby;	
							ELSE					
								IF p_bAWWidthPosDiff = TRUE THEN
									eGotoOpsStep	:= InvertStepAWMov;
								ELSE
									eGotoOpsStep	:= InvertStepChkCondition;
								END_IF
							END_IF
						
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepInitShuttersInOutClose:
					sStepTxt			:= 'Init Closing Shutters';
					
					eInletShutterAct	:= PneuActExt;
					eOutletShutterAct	:= PneuActExt;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActExt) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActExt) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						IF (p_bRightSen = TRUE AND NOT(p_bUSReversal)) OR (p_bLeftSen AND p_bUSReversal)  THEN //changed
							
							bHvBrd 	:= TRUE;
							bGdBrd	:= p_bInitGdBrd;
							
							IF p_bOutletShutterOpen THEN
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								IF p_iHermesAction= 1 THEN
									eGotoOpsStep	:= InvertStepOutletShutterOpen;
								ELSE
									eGotoOpsStep	:= InvertStepDSInOutletShutterOpen;
								END_IF
							END_IF
							
						ELSE										
							IF p_bAWWidthPosDiff = TRUE THEN
								eGotoOpsStep	:= InvertStepAWMov;
							ELSE
								eGotoOpsStep	:= InvertStepChkCondition;
							END_IF
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepShuttersInOutClose:
					sStepTxt			:= 'Closing Shutters Prior to Auto Width Change';
					
					eInletShutterAct	:= PneuActExt;
					eOutletShutterAct	:= PneuActExt;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActExt) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActExt) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepAWMov;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepAWMov:	
					sStepTxt	:= 'Moving Auto Width';
					
					eAWAct	:= AWActGoWidthOff;
					
					IF (p_eAWStatus = Done AND p_eAWStat = AWActGoWidthOff) THEN
						eAWAct			:= AWActIdle;		
					
						eGotoOpsStep	:= InvertStepChkCondition;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepChkCondition:
					sStepTxt	:= 'Check Condition';
					
					IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
						IF p_bUSAllow THEN
							eGotoOpsStep	:= InvertStepChkShutterCond;
						END_IF
					ELSE
						eGotoOpsStep	:= InvertStepStopperPosChk;
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepChkShutterCond:
					sStepTxt	:= 'Check Initial Shutter Condition';
					
					IF p_iHermesAction = 1 THEN
						IF p_bInletShutterOpen AND p_bOutletShutterOpen THEN//p_bOutletShutterClose THEN
							eGotoOpsStep:= InvertStepStopperPosChk;
						ELSE
							eGotoOpsStep:= InvertStepShuttersInOpenOutClose;
						END_IF
					ELSE	
						IF p_bInletShutterOpen AND p_bOutletShutterOpen THEN
							eGotoOpsStep:= InvertStepStopperPosChk;
						ELSE
							eGotoOpsStep:= InvertStepShuttersInOutOpen;
						END_IF
						
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
					//Open both shutters if bypass mode
				InvertStepShuttersInOutOpen:
					sStepTxt			:= 'Opening Shutters Prior After Auto Width Change';
					
					eInletShutterAct	:= PneuActRet;
					eOutletShutterAct	:= PneuActRet;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActRet) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepStopperPosChk;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
					//Open inlet shutter close outlet if invert mode
				InvertStepShuttersInOpenOutClose:
					sStepTxt			:= 'Opening Inlet Shutter and Closing Outlet Shutter';
					
					eInletShutterAct	:= PneuActRet;
					eOutletShutterAct	:= PneuActRet; //temporary testing
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActRet) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet) THEN //PneuActExt
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepStopperPosChk;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF			
					
				InvertStepStopperPosChk:	
					sStepTxt	:= 'Checking Stopper Position';
					
					IF eInvertCurrPos = InvertCurrPosAtRemote THEN
						IF NOT(p_iHermesAction = 1) THEN
							eGotoOpsStep	:= InvertStepStopperUnblk;
						ELSE
							IF NOT(p_bUSReversal) THEN
								eGotoOpsStep	:= InvertStepStopperUnblk;
							ELSE
								eGotoOpsStep	:= InvertStepStopperBlk;
							END_IF
						END_IF
					ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN	//create condition if reversal 
						IF NOT(p_iHermesAction = 1) THEN
							eGotoOpsStep	:= InvertStepStopperUnblk;
						ELSE
							IF NOT(p_bUSReversal) THEN
								eGotoOpsStep	:= InvertStepStopperBlk;
							ELSE
								eGotoOpsStep	:= InvertStepStopperUnblk;
							END_IF
						END_IF
					END_IF	
						
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepStopperBlk:	
					sStepTxt	:= 'Stopper Block';
					
					eStopperAct	:= PneuActExt;
					
					IF p_eStopperStatus = Done AND p_eStopperStat = PneuActExt THEN
						eStopperAct		:= PneuActIdle;
						eGotoOpsStep	:= InvertStepUSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepStopperUnblk:
					sStepTxt	:= 'Stopper Unblock';
					
					eStopperAct	:= PneuActRet;
					
					IF p_eStopperStatus = Done AND p_eStopperStat = PneuActRet THEN
						eStopperAct		:= PneuActIdle;
						eGotoOpsStep	:= InvertStepUSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepUSStandby:
					sStepTxt	:= 'In Upstream Standby Condition';
					
					bUSTimerRun	:= FALSE;
					
					bConvSen	:= p_bLeftSen OR p_bRightSen OR p_bMidSen;
					
					IF p_bAWWidthPosDiff = TRUE  THEN
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							eGotoOpsStep	:= InvertStepShuttersInOutClose;
						ELSE
							eGotoOpsStep	:= InvertStepAWMov;
						END_IF
					ELSIF p_bUSAllow = TRUE THEN
						eGotoOpsStep	:= InvertStepUSCommTmr;
					ELSIF bConvSen = TRUE THEN
						eGotoOpsStep	:= InvertStepUSTmr;
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
				
				InvertStepUSTmr:	
					sStepTxt	:= 'Inserting Board By Timer';
					
					bConvSen	:= p_bLeftSen OR p_bRightSen OR p_bMidSen;
					
					fbUSTimer(IN := bConvSen);
					
					IF fbUSTimer.Q = TRUE THEN
						bUSTimerRun	:= TRUE;
						fbUSTimer(IN := FALSE);
						
						bGdBrd	:= p_bInsertGdBrd;
						
						IF p_iHermesAction = 1 THEN
							IF eInvertCurrPos = InvertCurrPosAtRemote THEN
								eGotoOpsStep	:= InvertStepEntToInOff;
							ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
								eGotoOpsStep	:= InvertStepEntToEnd;
							END_IF
						ELSE
							eGotoOpsStep	:= InvertStepEntToEnd;
							
						END_IF
							
					ELSIF bConvSen = FALSE THEN
						bUSTimerRun	:= FALSE;
						fbUSTimer(IN := FALSE);
						
						IF p_bAWWidthPosDiff = TRUE THEN
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersInOutClose;
							ELSE
								eGotoOpsStep	:= InvertStepAWMov;
							END_IF
						ELSE	
							eGotoOpsStep	:= InvertStepUSStandby;
						END_IF	
						
					ELSE
						bPaused	:= p_bStop;
						
						IF bPaused = TRUE THEN
							bUSTimerRun	:= FALSE;
							fbUSTimer(IN := FALSE);
							
							eGotoOpsStep	:= InvertStepUSStandby;
						END_IF
						
					END_IF
					
				InvertStepUSCommTmr:
					sStepTxt	:= 'Communicating Upstream Machine';
					
					CASE p_eUSCommMod OF
						McSetCommModSMEMA:
							fbUSTimer(IN := p_bLeftSen OR p_bRightSen OR p_bMidSen);
							
							eUSSMEMAAct	:= SMEMAActRun;
							
							IF p_bUSSMEMATransporting = TRUE THEN
								bUSTimerRun	:= FALSE;
								fbUSTimer(IN := FALSE);
								
								bGdBrd			:= p_bUSSMEMAUSGdBrdRdy;
								
								sStepTxt		:= 'Conveyor Entering Board';
	
								IF p_iHermesAction = 1 THEN
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
									
							
								ELSE	
									eGotoOpsStep	:= InvertStepEntToEnd;
							
								END_IF
								
							ELSIF fbUSTimer.Q = TRUE THEN	
								bUSTimerRun	:= TRUE;
								fbUSTimer(IN := FALSE);
									
								bGdBrd	:= p_bInsertGdBrd;
								
								IF p_iHermesAction = 1 THEN
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
								ELSE 
									eGotoOpsStep	:= InvertStepEntToEnd;
								END_IF
								
							ELSIF (p_bAWWidthPosDiff = TRUE) OR (p_bUSAllow = FALSE) THEN
								bUSTimerRun	:= FALSE;
								fbUSTimer(IN := FALSE);
								
								eUSSMEMAAct	:= SMEMAActIdle;
								
								IF p_bAWWidthPosDiff = TRUE THEN
									IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
										eGotoOpsStep	:= InvertStepShuttersInOutClose;
									ELSE
										eGotoOpsStep	:= InvertStepAWMov;
									END_IF
								ELSE	
									eGotoOpsStep	:= InvertStepUSStandby;
								END_IF	
									
							ELSE	
								
								bPaused	:= p_bStop;
								
								IF bPaused = TRUE THEN
									bUSTimerRun	:= FALSE;
									fbUSTimer(IN := FALSE);
									
									eUSSMEMAAct	:= SMEMAActIdle;
									
									eGotoOpsStep	:= InvertStepUSStandby;
								END_IF
								
							END_IF	
							
						McSetCommModHermes:	
							fbUSTimer(IN := p_bLeftSen OR p_bRightSen OR p_bMidSen);
						
							IF p_bUSHermesTransporting = TRUE  THEN
								bUSTimerRun	:= FALSE;
								fbUSTimer(IN := FALSE);
								
								bGdBrd	:= p_bUSHermesUSGdRdy;
								
								IF p_iHermesAction = 1 THEN
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										IF NOT (p_bUSReversal) THEN
											eGotoOpsStep	:= InvertStepEntToInOff;
										ELSE
											eGotoOpsStep	:= InvertStepEntToEnd;
										END_IF
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										IF NOT (p_bUSReversal) THEN
											eGotoOpsStep	:= InvertStepEntToEnd;
										ELSE
											eGotoOpsStep	:= InvertStepEntToInOff;
										END_IF
									END_IF
								ELSE //when bypass + reversal then check ds allow from which sided
									IF bReverseStoppingPos THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSE
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
								END_IF
								
							ELSIF fbUSTimer.Q = TRUE THEN
								bUSTimerRun	:= TRUE;
								fbUSTimer(IN := FALSE);
									
								bGdBrd	:= p_bInsertGdBrd;
								
								IF p_iHermesAction = 1 THEN
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										IF NOT (p_bUSReversal) THEN
											eGotoOpsStep	:= InvertStepEntToInOff;
										ELSE
											eGotoOpsStep	:= InvertStepEntToEnd;
										END_IF
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										IF NOT (p_bUSReversal) THEN
											eGotoOpsStep	:= InvertStepEntToEnd;
										ELSE
											eGotoOpsStep	:= InvertStepEntToInOff;
										END_IF
									END_IF			
								ELSE //when bypass + reversal then
									eGotoOpsStep	:= InvertStepEntToEnd;
								END_IF	
								
							ELSIF (p_bAWWidthPosDiff = TRUE) OR (p_bUSAllow = FALSE) THEN
								bUSTimerRun	:= FALSE;
								fbUSTimer(IN := FALSE);
								
								IF p_bAWWidthPosDiff = TRUE THEN
									IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
										eGotoOpsStep	:= InvertStepShuttersInOutClose;
									ELSE
										eGotoOpsStep	:= InvertStepAWMov;
									END_IF
								ELSE	
									eGotoOpsStep	:= InvertStepUSStandby;
								END_IF	
								
							ELSE	
				
								bPaused	:= p_bStop;	
								
								IF bPaused = TRUE THEN
									bUSTimerRun	:= FALSE;
									fbUSTimer(IN := FALSE);
									
									eGotoOpsStep	:= InvertStepUSStandby;
								END_IF
								
							END_IF	
								
					END_CASE		
					
				InvertStepEntToEnd:
					CASE p_eUSCommMod OF
						McSetCommModSMEMA:
							IF p_bUSSMEMATransporting = FALSE AND bUSTimerRun = FALSE THEN
								eConvAct	:= ConvActStop;
						
								IF p_eConvStatus = Done AND p_eConvStat = ConvActStop THEN
									eConvAct		:= ConvActIdle;
									
									eGotoOpsStep	:= InvertStepUSStandby;	
							
									bPaused	:= p_bStop OR p_bStep;
									
								END_IF
							
							ELSE	
								IF p_bUSSMEMAConvStart OR bUSTimerRun THEN
									sStepTxt	:= 'Conveyor Entering Board';
									eConvAct	:= ConvActEnt;	
								END_IF
								
								IF (p_bConvHvBrd = TRUE) OR bUSTimerRun THEN 
									bHvBrd := TRUE;
								END_IF
					
								IF p_bUSSMEMAConvStop AND bUSTimerRun = FALSE THEN
									sStepTxt	:= 'Conveyor Stopping';
									eConvAct	:= ConvActStop;
								END_IF
								
								//Waiting Conveyor Reach End for Invert Mode
								IF p_iHermesAction = 1 THEN
									IF ((p_eUSSMEMAStatus = Done AND p_eUSSMEMAStat = SMEMAActRun) OR (bUSTimerRun = TRUE)) AND p_eConvStatus = Done AND p_eConvStat = ConvActEnt THEN
										eUSSMEMAAct		:= SMEMAActIdle;
										eGotoOpsStep	:= InvertStepInvertComplChk;
									
										IF p_eConvStatus <> Busy THEN
											bPaused	:= p_bStop OR p_bStep;
										END_IF
									END_IF

									
								ELSE
									IF (p_eUSSMEMAStatus = Done AND p_eUSSMEMAStat = SMEMAActRun) OR (bUSTimerRun = TRUE) THEN
										eUSSMEMAAct		:= SMEMAActIdle;
										eGotoOpsStep	:= InvertStepInvertComplChk;
									
										IF p_eConvStatus <> Busy THEN
											bPaused	:= p_bStop OR p_bStep;
										END_IF
									END_IF
									
								END_IF	
									
							END_IF
							
						McSetCommModHermes:	
							IF p_bUSHermesTransporting  OR bUSTimerRun = TRUE THEN
								sStepTxt	:= 'Conveyor Entering Board';
								eConvAct	:= ConvActEnt;
							END_IF
									
							IF p_bUSHermesStopTransport = TRUE AND bUSTimerRun = FALSE THEN
								sStepTxt	:= 'Conveyor Stopping';
								eConvAct	:= ConvActStop;
							END_IF
							
							IF (p_bConvHvBrd = TRUE) OR (bUSTimerRun = TRUE) THEN 
								bHvBrd := TRUE;
							END_IF
							
							//Waiting Conveyor Reach End for Invert Mode
							IF p_iHermesAction = 1 THEN
								IF p_bUSHermesTransporting = FALSE OR (bUSTimerRun) THEN
									IF p_eConvStat = ConvActStop THEN
										IF p_eConvStatus = Done THEN
											eConvAct		:= ConvActIdle;
											eGotoOpsStep	:= InvertStepUSStandby;
										END_IF	
									ELSE	
										IF p_eConvStatus = Done AND p_eConvStat = ConvActEnt THEN
											eGotoOpsStep	:= InvertStepInvertComplChk;
										END_IF	
									END_IF	
									
									IF p_eConvStatus <> Busy THEN
										bPaused	:= p_bStop OR p_bStep;
									END_IF
								END_IF

								
							ELSE	
								IF p_bUSHermesTransporting = FALSE OR (bUSTimerRun) THEN
									IF p_eConvStat = ConvActStop THEN
										IF p_eConvStatus = Done THEN
											eConvAct		:= ConvActIdle;
											eGotoOpsStep	:= InvertStepUSStandby;
										END_IF	
									ELSE	
										eGotoOpsStep	:= InvertStepInvertComplChk;
									END_IF
										
									IF p_eConvStatus <> Busy THEN
										bPaused	:= p_bStop OR p_bStep;
									END_IF
								END_IF
								
						
							END_IF	
								
					END_CASE
			
				InvertStepEntToInOff:
					CASE p_eUSCommMod OF
						McSetCommModSMEMA:
							IF p_bUSSMEMATransporting = FALSE AND bUSTimerRun = FALSE THEN
								eConvAct	:= ConvActStop;
						
								IF p_eConvStatus = Done AND p_eConvStat = ConvActStop THEN
									eConvAct		:= ConvActIdle;
									eGotoOpsStep	:= InvertStepUSStandby;
							
									bPaused	:= p_bStop OR p_bStep;
									
								END_IF
							
							ELSE	
								IF p_bUSSMEMAConvStart OR bUSTimerRun THEN
									sStepTxt	:= 'Conveyor Entering Board';
									eConvAct	:= ConvActEntToInOff;	
								END_IF
								
								IF (p_bConvHvBrd = TRUE) OR (bUSTimerRun = TRUE) THEN 
									bHvBrd := TRUE;
								END_IF
					
								IF p_bUSSMEMAConvStop AND bUSTimerRun = FALSE THEN
									sStepTxt	:= 'Conveyor Stopping';
									eConvAct	:= ConvActStop;
								END_IF
								
								IF ((p_eUSSMEMAStatus = Done AND p_eUSSMEMAStat = SMEMAActRun) OR (bUSTimerRun = TRUE)) AND p_eConvStatus = Done AND p_eConvStat = ConvActEntToInOff THEN
									eUSSMEMAAct		:= SMEMAActIdle;
									eGotoOpsStep	:= InvertStepStopperBlkAftEnt;
								
									IF p_eConvStatus <> Busy THEN
										bPaused	:= p_bStop OR p_bStep;
									END_IF
								END_IF
									
							END_IF
							
						McSetCommModHermes:	
							IF p_bUSHermesTransporting  OR bUSTimerRun = TRUE THEN
								sStepTxt	:= 'Conveyor Entering Board';
								eConvAct	:= ConvActEntToInOff;
							END_IF
									
							IF p_bUSHermesStopTransport = TRUE AND bUSTimerRun = FALSE THEN
								sStepTxt	:= 'Conveyor Stopping';
								eConvAct	:= ConvActStop;
							END_IF
							
							IF (p_bConvHvBrd = TRUE) OR (bUSTimerRun = TRUE) THEN
								bHvBrd	:= TRUE;
							END_IF
										
							IF (p_bUSHermesTransporting = FALSE  OR (bUSTimerRun)) THEN
								IF p_eConvStat = ConvActStop THEN
									IF p_eConvStatus = Done THEN
										eConvAct		:= ConvActIdle;
										eGotoOpsStep	:= InvertStepUSStandby;
									END_IF
								ELSE
									IF p_eConvStatus = Done AND p_eConvStat = ConvActEntToInOff THEN
										eGotoOpsStep	:= InvertStepStopperBlkAftEnt; 
									END_IF	
								END_IF	
								
								IF p_eConvStatus <> Busy THEN
									bPaused	:= p_bStop OR p_bStep;
								END_IF
							END_IF
						
					END_CASE		
					
				InvertStepStopperBlkAftEnt:	
					sStepTxt	:= 'Stopper Block After Entering Board';
					
					eStopperAct	:= PneuActExt;
					
					IF p_eStopperStatus = Done AND p_eStopperStat = PneuActExt THEN
						eStopperAct		:= PneuActIdle;
						eGotoOpsStep	:= InvertStepRev;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepRev:	
					sStepTxt	:= 'Conveyor Reverse Board';
					
					eConvAct	:= ConvActRevImmedStart;
					
					IF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
						eConvAct		:= ConvActIdle;
					
						eGotoOpsStep	:= InvertStepInvertComplChk;
					
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepInvertComplChk:
					sStepTxt		:= 'Checking Invert Complete Condition';
					
					IF eInvertCurrPos <> eInvertReqPos THEN
						IF p_bClampPrep AND p_bClampDis=FALSE THEN							
							eGotoOpsStep	:= InvertStepClampBlkBefInvert;		
						ELSE
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF											
						END_IF
					ELSE
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							IF p_bOutletShutterOpen THEN	
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepOutletShutterOpen;
							END_IF
						ELSE //standby on right or left sensor ?
							eGotoOpsStep	:= InvertStepDSStandby;
						END_IF
					END_IF	
						
					IF p_eConvStatus <> Busy THEN
						bPaused	:= p_bStop OR p_bStep;
					END_IF
				
				InvertStepClampBlkBefInvert:
					sStepTxt	:= 'Clamp Block Prior to Inversion';
					
					eClampAct	:= PneuActExt;
					
					IF p_eClampStatus = Done AND p_eClampStat = PneuActExt THEN
						
						eClampAct		:= PneuActIdle;
						
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
						ELSE
							eGotoOpsStep	:= InvertStepInvert;
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepShuttersCloseBefInvert:
					sStepTxt			:= 'Closing Shutters Prior to Inversion';
					
					eInletShutterAct	:= PneuActExt;
					eOutletShutterAct	:= PneuActExt;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActExt) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActExt) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepInvert;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepInvert:	
					sStepTxt	:= 'Inverter Turning';
					
					IF eInvertReqPos = InvertCurrPosAtRemote THEN
						eInvertAct	:= MotorBrkActCW;
					ELSIF eInvertReqPos = InvertCurrPosAtHome THEN
						eInvertAct	:= MotorBrkActCCW;
					END_IF	
					
					IF p_eInvertStatus = Done AND (p_eInvertStat = MotorBrkActCW OR p_eInvertStat = MotorBrkActCCW)THEN
						eInvertAct		:= MotorBrkActIdle;
						
						IF (p_bClampPrep AND p_bClampDis=FALSE) OR bClampDisInitUnblk THEN
							
							bClampDisInitUnblk	:= FALSE;
							
							eGotoOpsStep	:= InvertStepClampUnblkAftInvert;
							
						ELSE 
							IF eInvertCurrPos = InvertCurrPosAtRemote THEN
								
								IF bInvertPosInvalidSkipInit THEN
									eGotoOpsStep	:= InvertStepInvalidPosRecoverBrd;
								ELSE
									IF p_bLeftSen = TRUE THEN										
										eGotoOpsStep	:= InvertStepPreExit;
									ELSE
										eGotoOpsStep	:= InvertStepChkCondition;
									END_IF	
								END_IF
								
							ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN	
								
								IF bInvertPosInvalidSkipInit THEN
									eGotoOpsStep	:= InvertStepInvalidPosRecoverBrd;
								ELSE
									IF p_bRightSen = TRUE THEN										
										eGotoOpsStep	:= InvertStepStopperUnblkAftInvert;
									ELSE
										eGotoOpsStep	:= InvertStepChkCondition;
									END_IF	
								END_IF	
							END_IF			
						END_IF
					
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepClampUnblkAftInvert:	
					sStepTxt	:= 'Clamp Unblock After Invert';
					
					eClampAct	:= PneuActRet;
					
					IF p_eClampStatus = Done AND p_eClampStat = PneuActRet THEN
						eClampAct		:= PneuActIdle;
						
						IF eInvertCurrPos = InvertCurrPosAtRemote THEN
								
							IF bInvertPosInvalidSkipInit THEN
								eGotoOpsStep	:= InvertStepInvalidPosRecoverBrd;
							ELSE
								IF p_bLeftSen = TRUE THEN										
									eGotoOpsStep	:= InvertStepPreExit;
								ELSE
									eGotoOpsStep	:= InvertStepChkCondition;
								END_IF	
							END_IF
								
						ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN	
								
							IF bInvertPosInvalidSkipInit THEN
								eGotoOpsStep	:= InvertStepInvalidPosRecoverBrd;
							ELSE
								IF p_bRightSen = TRUE THEN										
									eGotoOpsStep	:= InvertStepStopperUnblkAftInvert;
								ELSE
									eGotoOpsStep	:= InvertStepChkCondition;
								END_IF	
							END_IF	
						END_IF		
						
						bPaused	:= p_bStop OR p_bStep;
						
					END_IF
					
				InvertStepInvalidPosRecoverBrd:
					sStepTxt		:= 'Conveyor Recovering Board Status';
					
					eConvAct	:= ConvActInit;
					
					IF p_eConvStatus = Done AND p_eConvStat = ConvActInit THEN
						eConvAct		:= ConvActIdle;
					
						IF (p_bRightSen = TRUE AND NOT(p_bUSReversal)) OR (p_bLeftSen AND p_bUSReversal) THEN //changed
							bHvBrd := TRUE;
							bGdBrd			:= p_bInitGdBrd;
								
							bInvertPosInvalidSkipInit := FALSE;
								
							IF eInvertCurrPos = InvertCurrPosAtRemote THEN
								IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
									IF p_bOutletShutterOpen THEN	
										eGotoOpsStep	:= InvertStepDSStandby;
									ELSE
										eGotoOpsStep	:= InvertStepOutletShutterOpen;
									END_IF
								ELSE
									eGotoOpsStep	:= InvertStepDSStandby;
								END_IF
							ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN	
								eGotoOpsStep	:= InvertStepStopperUnblkAftInvert;
							END_IF
					
						ELSE
							bInvertPosInvalidSkipInit := FALSE;
							eGotoOpsStep	:= InvertStepChkCondition;
						END_IF
					
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepStopperUnblkAftInvert:	
					sStepTxt	:= 'Stopper Unblock After Invert';
					
					eStopperAct	:= PneuActRet;
					
					IF p_eStopperStatus = Done AND p_eStopperStat = PneuActRet THEN
						eStopperAct		:= PneuActIdle;
						
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							IF p_bOutletShutterOpen THEN	
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepOutletShutterOpen;
							END_IF
						ELSE
							eGotoOpsStep	:= InvertStepDSStandby;
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepPreExit:	
					sStepTxt		:= 'Conveyor Pre-Exiting Board';
					
					eConvAct	:= ConvActPreExit;
					
					IF p_eConvStatus = Done AND p_eConvStat = ConvActPreExit THEN
						eConvAct		:= ConvActIdle;
					
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							IF p_bOutletShutterOpen THEN	
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepOutletShutterOpen;
							END_IF
						ELSE
							eGotoOpsStep	:= InvertStepDSStandby;
						END_IF
					
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepDSInOutletShutterOpen:
					sStepTxt	:= 'DS: Opening Inlet & Outlet Shutter';
					
					eInletShutterAct	:= PneuActRet;
					eOutletShutterAct	:= PneuActRet;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActRet)
						AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet)THEN
						
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepDSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepOutletShutterOpen:
					sStepTxt	:= 'Opening Outlet Shutter';
					
					eOutletShutterAct	:= PneuActRet;
					
					IF p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet THEN
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepDSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepDSStandby:	
					sStepTxt	:= 'In Downstream Standby Condition';
					
					bDSTimerRun	:= FALSE;
					
					IF p_bUSReversal THEN//p_eConvDirection = ConvDirLToL OR p_eConvDirection = ConvDirRToL THEN //tight with ds reversal
						bConvSen	:= p_bLeftSen;
					ELSE
						bConvSen	:= p_bRightSen;
					END_IF
					
					IF bConvSen = TRUE OR p_eConvStatus <> Busy THEN
						bReachedEnd	:= TRUE;
					END_IF
					
					IF p_bDBAOnRgtSen THEN 
						IF p_bDSAllow = TRUE AND bReachedEnd = TRUE THEN
							bReachedEnd		:= FALSE;
							eGotoOpsStep	:= InvertStepDSCommTmr;
						ELSIF (bReachedEnd = TRUE) AND (bConvSen = FALSE) THEN
							bReachedEnd		:= FALSE;
							eGotoOpsStep	:= InvertStepDSTmr;
						END_IF
					ELSE
						IF p_bDSAllow = TRUE THEN
							bReachedEnd		:= FALSE;
							eGotoOpsStep	:= InvertStepDSCommTmr;
						ELSIF (bReachedEnd = TRUE) AND (bConvSen = FALSE) THEN
							bReachedEnd		:= FALSE;
							eGotoOpsStep	:= InvertStepDSTmr;
						END_IF
					END_IF
					
					IF p_eConvStatus <> Busy THEN
						bPaused	:= p_bStop OR p_bStep;
					END_IF
		
				InvertStepDSTmr:	
					sStepTxt	:= 'Removing Board By Timer';
					
					IF p_bUSReversal THEN// p_eConvDirection = ConvDirLToL OR p_eConvDirection = ConvDirRToL THEN
						bConvSen	:= p_bLeftSen;
					ELSE
						bConvSen	:= p_bRightSen;
					END_IF
					
					fbDSTimer(IN := NOT bConvSen);
					
					IF fbDSTimer.Q = TRUE THEN
						bDSTimerRun		:= TRUE;
						fbDSTimer(IN := FALSE);
						
						bHvBrd := FALSE;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep	:= InvertStepChkCondition;
						
					ELSIF bConvSen = TRUE THEN
						bDSTimerRun		:= FALSE;
						fbDSTimer(IN := FALSE);
						
						eGotoOpsStep	:= InvertStepDSStandby;
						
					ELSE
						IF p_eConvStatus <> Busy THEN
							bPaused	:= p_bStop;
							
							IF bPaused = TRUE THEN
								bDSTimerRun	:= FALSE;
								fbDSTimer(IN := FALSE);
							END_IF
						END_IF
							
					END_IF
					
				InvertStepDSCommTmr:
					sStepTxt	:= 'Communicating Downstream Machine';
					
					IF p_bUSReversal THEN// p_eConvDirection = ConvDirLToL OR p_eConvDirection = ConvDirRToL THEN
						IF p_bLeftSen = TRUE OR p_eConvStatus <> Busy THEN
							bReachedEnd	:= TRUE;
						END_IF
						
						IF bReachedEnd = TRUE THEN
							fbDSTimer(IN := NOT p_bLeftSen);
						END_IF
					ELSE
						IF p_bRightSen = TRUE OR p_eConvStatus <> Busy THEN
							bReachedEnd	:= TRUE;
						END_IF
						
						IF bReachedEnd = TRUE THEN
							fbDSTimer(IN := NOT p_bRightSen);
						END_IF
					END_IF
					
					CASE p_eDSCommMod OF
						McSetCommModSMEMA:
							eDSSMEMAAct	:= SMEMAActRun;
					
							IF p_bDSSMEMAConvStart = TRUE THEN
								bDSTimerRun	:= FALSE;
								fbDSTimer(IN := FALSE);
								
								bReachedEnd	:= FALSE;
								
								eGotoOpsStep	:= InvertStepExitBrd;
						
							ELSIF fbDSTimer.Q = TRUE THEN
								bDSTimerRun		:= TRUE;
								fbDSTimer(IN := FALSE);
								bHvBrd := FALSE;
								
								bReachedEnd		:= FALSE;
								eDSSMEMAAct		:= SMEMAActIdle;
								eConvAct		:= ConvActIdle;
								
								eGotoOpsStep	:= InvertStepChkCondition;
						
							ELSIF p_bDSAllow = FALSE THEN	
								bDSTimerRun		:= FALSE;
								fbDSTimer(IN := FALSE);
								
								bReachedEnd		:= FALSE;
								eDSSMEMAAct		:= SMEMAActIdle;
								eConvAct		:= ConvActIdle;
								
								eGotoOpsStep	:= InvertStepDSStandby;	
								
							ELSE
								IF p_eConvStatus <> Busy THEN
									bPaused	:= p_bStop;
							
									IF bPaused = TRUE THEN
										fbDSTimer(IN := FALSE);
										
										eDSSMEMAAct	:= SMEMAActIdle;
									END_IF
								END_IF
						
							END_IF
							
						McSetCommModHermes:
							IF p_bDSHermesTransporting = TRUE THEN
								bDSTimerRun	:= FALSE;
								fbDSTimer(IN := FALSE);
								
								bReachedEnd	:= FALSE;
								
								eGotoOpsStep	:= InvertStepExitBrd;
								
							ELSIF fbDSTimer.Q = TRUE THEN
								bDSTimerRun	:= TRUE;
								fbDSTimer(IN := FALSE);
								bHvBrd := FALSE;
								
								bReachedEnd	:= FALSE;
								eConvAct		:= ConvActIdle;
								
								eGotoOpsStep	:= InvertStepChkCondition;
								
							ELSIF p_bDSAllow = FALSE THEN
								bDSTimerRun	:= FALSE;
								fbDSTimer(IN := FALSE);
								
								bReachedEnd	:= FALSE;
								
								eGotoOpsStep	:= InvertStepDSStandby;
								
							ELSE			
								IF p_eConvStatus <> Busy THEN
									bPaused	:= p_bStop;
									
									IF bPaused = TRUE THEN
										fbDSTimer(IN := FALSE);
									END_IF
								END_IF
								
							END_IF
						
					END_CASE		
							
				InvertStepExitBrd:
					CASE p_eDSCommMod OF
						McSetCommModSMEMA:
							eConvAct	:= ConvActExit;
							
							IF ((p_eDSSMEMAStatus = Done AND p_eDSSMEMAStat = SMEMAActRun) OR (bDSTimerRun)) AND (p_eConvStatus = Done AND p_eConvStat = ConvActExit) THEN
							
								eDSSMEMAAct		:= SMEMAActIdle;
								eConvAct		:= ConvActIdle;
								
								bHvBrd := FALSE;
								p_bConvHvBrd := FALSE;
								eGotoOpsStep	:= InvertStepChkCondition;
							
								
								bPaused	:= p_bStop OR p_bStep;
							
							END_IF 
				
						McSetCommModHermes:
							eConvAct := ConvActExit;

							IF ((p_bDSHermesTransporting = FALSE) OR (bDSTimerRun)) AND (p_eConvStatus = Done AND p_eConvStat = ConvActExit) THEN
								eConvAct := ConvActIdle;

								bHvBrd := FALSE;
								p_bConvHvBrd := FALSE;

								eGotoOpsStep := InvertStepChkCondition;

								bPaused := p_bStop OR p_bStep;
							END_IF
								
					END_CASE	
					
			END_CASE	
			
		END_IF

	END_IF	
	
	//Board Inserted/Removed
	bBrdInserted		:= bUSTimerRun;
	bBrdRemoved			:= bDSTimerRun;
	
	//Operation Step Status
	IF (eOpsStep = InvertStepInitConvAwayLftSen) OR (eOpsStep = InvertStepInitConvAwayRgtSen) OR (eOpsStep = InvertStepInitConvTwdLftSen) OR (eOpsStep = InvertStepInitConvTwdRgtSen) OR (eOpsStep = InvertStepInitConvToRgt) THEN
		bStepInitConv	:= TRUE;
	ELSE	
		bStepInitConv	:= FALSE;
	END_IF	
		
	bStepInitAwayStopper		:= (eOpsStep = InvertStepInitConvAwayLftSen) OR (eOpsStep = InvertStepInitConvAwayRgtSen);
	bStepInitTwdStopper			:= (eOpsStep = InvertStepInitConvTwdLftSen) OR (eOpsStep = InvertStepInitConvTwdRgtSen);
	bStepInitDone				:= (eOpsStep > InvertStepInitShuttersInOutClose) AND bInvertPosInvalidSkipInit=FALSE;
	bStepUSStandby				:= eOpsStep = InvertStepUSStandby;
	bStepUSCommTmr				:= eOpsStep = InvertStepUSCommTmr;
	bStepEntToEnd				:= eOpsStep = InvertStepEntToEnd;
	bStepEntToInOff				:= eOpsStep = InvertStepEntToInOff;
	bStepRev					:= eOpsStep = InvertStepRev;
	bStepPreExit				:= eOpsStep = InvertStepPreExit;
	bStepDSStandby				:= eOpsStep = InvertStepDSStandby;
	bStepDSCommTmr				:= eOpsStep = InvertStepDSCommTmr;
	bStepExitBrd				:= eOpsStep = InvertStepExitBrd;
	bStepInvert					:= eOpsStep = InvertStepInvert;
	bStepAWMov					:= eOpsStep = InvertStepAWMov;
END_ACTION
