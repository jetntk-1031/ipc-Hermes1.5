(** 2023-5-29 **)
ACTION Act_OpsClampNoStopperInvOnceAndTwice:
	
	IF eGotoOpsStep <> eOpsStep THEN 
	
		CASE eGotoOpsStep OF 		 
				
			ELSE
				eOpsStep	:= eGotoOpsStep;	
				
		END_CASE	
		
	END_IF	
		
	IF eOpsStep = eGotoOpsStep THEN
		
		IF bPaused = FALSE THEN
			
			CASE eOpsStep OF
				
				InvertStepInitChkCondition:
					sStepTxt	:= 'Init Check Condition_InvOnce';
					
					IF eInvertCurrPos	= InvertPosInvalid THEN
						bInvertPosInvalidSkipInit := TRUE;
						eGotoOpsStep	:= InvertStepClampBlkBefInvert;	
					ELSE
						eGotoOpsStep	:= InvertStepInitClampUnblk;
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepInitClampUnblk:
					sStepTxt	:= 'Init Clamp Unblock';
					
					eClamp1Act	:= PneuActRet;
					eClamp2Act	:= PneuActRet;
					eClamp3Act	:= PneuActRet;
					
					IF p_eClamp1Status = Done AND p_eClamp1Stat = PneuActRet AND 
						p_eClamp2Status = Done AND p_eClamp2Stat = PneuActRet AND
						p_eClamp3Status = Done AND p_eClamp3Stat = PneuActRet THEN
			
						eClamp1Act		:= PneuActIdle;
						eClamp2Act		:= PneuActIdle;
						eClamp3Act		:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepInitInvertComplChk;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepInitInvertComplChk:
					sStepTxt	:= 'Init Checking Invert Complete Condition';
				
					IF bInvertCompl = FALSE AND bInvOnceTwicePCBOut = FALSE THEN
						IF eInvertCurrPos = InvertCurrPosAtRemote THEN
							IF p_bLeftSen = TRUE THEN
								eGotoOpsStep	:= InvertStepInitConvAwayLftSen;
							ELSE
								eGotoOpsStep  := InvertStepInitConvTwdLftSen;
							END_IF	
							
						ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
							IF p_bRightSen = TRUE THEN
								eGotoOpsStep	:= InvertStepInitConvAwayRgtSen;
							ELSE	
								eGotoOpsStep  := InvertStepInitConvTwdRgtSen;
							END_IF	
						END_IF	
					
					ELSIF bInvOnceTwicePCBOut = TRUE THEN
						eGotoOpsStep	:= InvertStepInitInvRtrnConv;
						
					ELSE
						eGotoOpsStep	:= InvertStepInitConvToRgt;
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
						
						eGotoOpsStep  := InvertStepInitConvTwdLftSen;
							
						bPaused	:= p_bStop OR p_bStep;						
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActInit THEN
						fbFwdTimer(IN := FALSE);
						
						bHvBrd 			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep  := InvertStepInitConvTwdLftSen;	
							
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
						
						eGotoOpsStep  := InvertStepInitConvTwdRgtSen;	
							
						bPaused	:= p_bStop OR p_bStep;						
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
						fbRevTimer(IN := FALSE);
						
						bHvBrd 			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						eConvAct		:= ConvActIdle;
						
						eGotoOpsStep  := InvertStepInitConvTwdRgtSen;	
							
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
						
						eGotoOpsStep	:= InvertStepClampBlkBefInvert;
						
						bPaused	:= p_bStop OR p_bStep;
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
						fbRevTimer(IN := FALSE);
						eConvAct	:= ConvActIdle;
						
						bHvBrd			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						eGotoOpsStep	:= InvertStepClampBlkBefInvert;
						
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
						
						eGotoOpsStep	:= InvertStepClampBlkBefInvert;
						
						bPaused	:= p_bStop OR p_bStep;
						
					ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActInit THEN
						fbFwdTimer(IN := FALSE);
						eConvAct	:= ConvActIdle;
						
						bHvBrd			:= TRUE;
						bGdBrd			:= p_bInitGdBrd;
						
						eGotoOpsStep	:= InvertStepClampBlkBefInvert;
						
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
							IF p_bRightSen = TRUE THEN
							
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
					
				InvertStepInitInvRtrnConv:
					sStepTxt	:= 'Return Board Init Conveyor ';
					
					IF eInvertCurrPos = InvertCurrPosAtRemote THEN

						IF eInvertCurrPos = eInvertReqPos THEN
							eGotoOpsStep	:= InvertStepPreExit;
						ELSE	
							eConvAct	:=	ConvActInit;
							
							IF p_eConvStatus = Done AND p_eConvStat	= ConvActInit THEN
								eConvAct	:= ConvActIdle;
								
								IF 	(p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
									eGotoOpsStep	:= InvertStepInitShuttersInOutClose;
								END_IF	
								
							END_IF
						END_IF
					
					ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
						IF eInvertCurrPos <> eInvertReqPos AND p_bRightSen = FALSE THEN
						
							eConvAct	:=	ConvActRevImmedStart;
							
							fbRevTimer(IN := TRUE, PT := DINT_TO_TIME(p_diRevDlyTm));
						
							IF fbRevTimer.Q = TRUE THEN
								fbRevTimer(IN := FALSE);
							
								bHvBrd			:= FALSE;
								p_bConvHvBrd	:= FALSE;
							
								eConvAct		:= ConvActIdle;
							
								eGotoOpsStep	:= InvertStepClampBlkBefInvert;
							
								bPaused	:= p_bStop OR p_bStep;
							
							ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
								fbRevTimer(IN := FALSE);
								eConvAct	:= ConvActIdle;
							
								bHvBrd			:= TRUE;
								bGdBrd			:= p_bInitGdBrd;
							
								eGotoOpsStep	:= InvertStepClampBlkBefInvert;
							 
								bPaused	:= p_bStop OR p_bStep;
							
							END_IF
						ELSE
							IF p_bRightSen = TRUE THEN
								IF eInvertCurrPos <> eInvertReqPos THEN	
									eConvAct	:=	ConvActRevImmedStart;
							
									fbRevTimer(IN := TRUE, PT := DINT_TO_TIME(p_diRevDlyTm));
						
									IF fbRevTimer.Q = TRUE THEN
										fbRevTimer(IN := FALSE);
							
										bHvBrd			:= FALSE;
										p_bConvHvBrd	:= FALSE;
							
										eConvAct		:= ConvActIdle;
							
										eGotoOpsStep	:= InvertStepClampBlkBefInvert;
							
										bPaused	:= p_bStop OR p_bStep;
							
									ELSIF p_eConvStatus = Done AND p_eConvStat = ConvActRevImmedStart THEN
										fbRevTimer(IN := FALSE);
										eConvAct	:= ConvActIdle;
							
										bHvBrd			:= TRUE;
										bGdBrd			:= p_bInitGdBrd;
							
										eGotoOpsStep	:= InvertStepClampBlkBefInvert;
							 
										bPaused	:= p_bStop OR p_bStep;
							
									END_IF
								ELSE	
									IF p_bOutletShutterOpen THEN
										eGotoOpsStep	:= InvertStepDSStandby;
									ELSE 
										eGotoOpsStep	:= InvertStepOutletShutterOpen;
									END_IF
								END_IF
							END_IF	
						END_IF
					END_IF
						
				InvertStepInitShuttersInOutClose:
						sStepTxt			:= 'Init Closing Shutters';
					
					eInletShutterAct	:= PneuActExt;
					eOutletShutterAct	:= PneuActExt;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActExt) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActExt) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						IF p_bRightSen = TRUE THEN
							
							bHvBrd 	:= TRUE;
							bGdBrd	:= p_bInitGdBrd;
							
							IF p_bOutletShutterOpen AND bInvOnceTwicePCBOut = FALSE THEN
								eGotoOpsStep	:= InvertStepDSStandby;
							
							ELSIF bInvOnceTwicePCBOut = FALSE THEN
								eGotoOpsStep	:= InvertStepOutletShutterOpen;
							
							ELSE
								IF bInvOnceTwicePCBOut THEN

									IF eInvertCurrPos <> eInvertReqPos THEN
										IF p_bInletShutterClose AND p_bOutletShutterClose THEN
											eGotoOpsStep	:= InvertStepInvertComplChk;
										ELSE
											eGotoOpsStep	:= InvertStepShuttersCloseBefInvert ;
										END_IF
										
									ELSE
										eGotoOpsStep	:= InvertStepOutletShutterOpen;
									
									END_IF
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
						IF p_bGoToStandby = TRUE THEN 
							eGotoOpsStep   := InvertStepShutterCloseWaitForSig;
						ELSE
							eGotoOpsStep	:= InvertStepAWMov;
						END_IF
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
				InvertStepShutterCloseWaitForSig:
					sStepTxt			:= 'Main In Standy Position For Safety';

					IF p_bGoToStandby=FALSE THEN	
						IF p_bAWWidthPosDiff = TRUE AND bHvBrd = FALSE THEN
							eGotoOpsStep:=  InvertStepAWMov;
						ELSE
							eGotoOpsStep:= InvertStepChkCondition;
						END_IF						
					END_IF
						
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepAWMov:	
					sStepTxt	:= 'Moving Auto Width';
					
					eAWAct	:= AWActGoWidthOff;
					
					IF p_eAWStatus = Done AND p_eAWStat = AWActGoWidthOff THEN
						eAWAct			:= AWActIdle;		
					
						eGotoOpsStep	:= InvertStepChkCondition;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
									
				InvertStepChkCondition:
					sStepTxt	:= 'Check Condition';
					
					IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
					
							eGotoOpsStep	:= InvertStepChkShutterCond;
					
					ELSIF bInvOnceTwicePCBOut = TRUE THEN
						eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
						
					ELSE
						eGotoOpsStep	:= InvertStepUSStandby;
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepChkShutterCond:
					sStepTxt	:= 'Check Initial Shutter Condition';
					
					IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN

						IF p_bInletShutterOpen AND p_bOutletShutterOpen THEN
							IF  bHvBrd = FALSE THEN
								eGotoOpsStep:= InvertStepUSStandby;
							ELSE
								eGotoOpsStep:= InvertStepDSStandby;
							END_IF
						ELSE
							eGotoOpsStep:= InvertStepShuttersInOutOpen;
						END_IF
						
					ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE THEN	
						IF bHvBrd = FALSE THEN 
							IF p_bInletShutterOpen AND p_bOutletShutterClose THEN
								eGotoOpsStep	:= InvertStepUSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepShuttersInOpenOutClose;
							END_IF
						ELSIF eInvertCurrPos <> eInvertReqPos THEN
							IF p_bInletShutterClose AND p_bOutletShutterClose THEN
								eGotoOpsStep	:= InvertStepInvertComplChk;
							ELSE
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert ;
							END_IF
						ELSE //hv board
							IF p_bInletShutterClose AND p_bOutletShutterOpen THEN
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepDSInOutletShutterOpen;
							END_IF	
						END_IF
						
					ELSIF (p_usiLinkProdRcpCurrRcpMcMod = 2 OR p_usiLinkProdRcpCurrRcpMcMod = 3) AND bInvOnceTwicePCBOut = TRUE THEN
						IF bHvBrd = FALSE THEN
							IF p_bInletShutterClose AND p_bOutletShutterOpen THEN
								eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepShuttersInCloseOutOpen;
							END_IF
						ELSIF bHvBrd THEN
							IF p_bInletShutterClose AND p_bOutletShutterOpen THEN
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepShuttersInCloseOutOpen;
							END_IF
						END_IF			
					
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
					//Open both shutters for invert Once Mode
				InvertStepShuttersInOutOpen:
					sStepTxt			:= 'Opening Shutters Prior After Auto Width Change';
					
					eInletShutterAct	:= PneuActRet;
					eOutletShutterAct	:= PneuActRet;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActRet) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepChkShutterCond;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
					//Open inlet shutter close outlet when Invert
				InvertStepShuttersInOpenOutClose:
					sStepTxt			:= 'Opening Inlet Shutter and Closing Outlet Shutter';
					
					eInletShutterAct	:= PneuActRet;
					eOutletShutterAct	:= PneuActExt;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActRet) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActExt) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepUSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF	
					
					//Close inlet Shutter Open Outlet Shtutter for Invert Once and Twice Mode
				InvertStepShuttersInCloseOutOpen:
					sStepTxt			:= 'Closing Inlet Shutter and Open Outlet Shutter for Return Board';
					
					eInletShutterAct	:= PneuActExt;
					eOutletShutterAct	:= PneuActRet;
					
					IF (p_eInletShutterStatus = Done AND p_eInletShutterStat = PneuActExt) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet) THEN
					
						eInletShutterAct	:= PneuActIdle;
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
					
				InvertStepUSStandby:
					sStepTxt	:= 'In Upstream Standby Condition';
					
					bUSTimerRun	:= FALSE;
					
					bConvSen	:= p_bLeftSen OR p_bRightSen OR p_bMidSen;

					IF  p_bAWWidthPosDiff = TRUE OR p_bGoToStandby THEN
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
						
						IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE  THEN	
							
							eGotoOpsStep	:= InvertStepEntToEnd;
							
						ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE  THEN		
							IF eInvertCurrPos = InvertCurrPosAtRemote THEN
								eGotoOpsStep	:= InvertStepEntToInOff;
							ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
								eGotoOpsStep	:= InvertStepEntToEnd;
							END_IF
							
						END_IF
							
					ELSIF bConvSen = FALSE THEN
						bUSTimerRun	:= FALSE;
						fbUSTimer(IN := FALSE);
						
						IF p_bAWWidthPosDiff = TRUE THEN
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersInOutClose; //back to US Standby
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
	
								IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN
									eGotoOpsStep	:= InvertStepEntToEnd;
							
								ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE THEN	
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
							
								END_IF
								
							ELSIF fbUSTimer.Q = TRUE THEN	
								bUSTimerRun	:= TRUE;
								fbUSTimer(IN := FALSE);
									
								bGdBrd	:= p_bInsertGdBrd;
								
								IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN
										
									eGotoOpsStep	:= InvertStepEntToEnd;
								
								ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE THEN	
									
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
							
								END_IF
								
							ELSIF (p_bAWWidthPosDiff = TRUE) OR (p_bUSAllow = FALSE)  THEN
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
								
								IF bPaused = TRUE  THEN
									bUSTimerRun	:= FALSE;
									fbUSTimer(IN := FALSE);
									
									eUSSMEMAAct	:= SMEMAActIdle;
									
									eGotoOpsStep	:= InvertStepUSStandby;
								END_IF
								
							END_IF	
							
						McSetCommModHermes:	
							fbUSTimer(IN := p_bLeftSen OR p_bRightSen OR p_bMidSen);
						
							IF p_bUSHermesTransporting = TRUE THEN
								bUSTimerRun	:= FALSE;
								fbUSTimer(IN := FALSE);
								
								bGdBrd	:= p_bUSHermesUSGdRdy;
								
								IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN
									eGotoOpsStep	:= InvertStepEntToEnd;
									
								ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE  THEN	
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
							
								END_IF
								
							ELSIF fbUSTimer.Q = TRUE THEN
								bUSTimerRun	:= TRUE;
								fbUSTimer(IN := FALSE);
									
								bGdBrd	:= p_bInsertGdBrd;
								
								IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN
									eGotoOpsStep	:= InvertStepEntToEnd;
									
								ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE  THEN	
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
							
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
								
								eConvAct		:= ConvActStop;
								eUSSMEMAAct		:= SMEMAActIdle;
								
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
								
								IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN
								
									IF (p_eUSSMEMAStatus = Done AND p_eUSSMEMAStat = SMEMAActRun) OR (bUSTimerRun = TRUE) THEN
										eUSSMEMAAct		:= SMEMAActIdle;
										eGotoOpsStep	:= InvertStepInvertComplChk;
									
										IF p_eConvStatus <> Busy THEN
											bPaused	:= p_bStop OR p_bStep;
										END_IF
									
									END_IF
									
								//Waiting Conveyor Reach End for Invert Mode
								ELSIF  p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE THEN
									IF ((p_eUSSMEMAStatus = Done AND p_eUSSMEMAStat = SMEMAActRun) OR (bUSTimerRun = TRUE)) AND p_eConvStatus = Done AND p_eConvStat = ConvActEnt THEN
										eUSSMEMAAct		:= SMEMAActIdle;
										eGotoOpsStep	:= InvertStepInvertComplChk;
									
										IF p_eConvStatus <> Busy THEN
											bPaused	:= p_bStop OR p_bStep;
										END_IF
									END_IF
									
								END_IF	
									
							END_IF
							
						McSetCommModHermes:	
							IF p_bUSHermesTransporting OR bUSTimerRun = TRUE THEN
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
							IF p_usiLinkProdRcpCurrRcpMcMod = 2 AND bInvOnceTwicePCBOut = FALSE THEN
							
								IF (p_bUSHermesTransporting = FALSE) OR (bUSTimerRun) THEN
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
							ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 AND bInvOnceTwicePCBOut = FALSE THEN	
						
								IF ((p_bUSHermesTransporting = FALSE ) OR (bUSTimerRun)) THEN
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
									eGotoOpsStep	:= InvertStepRev;
								
									IF p_eConvStatus <> Busy THEN
										bPaused	:= p_bStop OR p_bStep;
									END_IF
								END_IF
									
							END_IF
							
						McSetCommModHermes:	
							IF p_bUSHermesTransporting OR bUSTimerRun = TRUE THEN
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
										
							IF ((p_bUSHermesTransporting = FALSE) OR (bUSTimerRun)) THEN
								IF p_eConvStat = ConvActStop THEN
									IF p_eConvStatus = Done THEN
										eConvAct		:= ConvActIdle;
										eGotoOpsStep	:= InvertStepUSStandby;
									END_IF
								ELSE
									IF p_eConvStatus = Done AND p_eConvStat = ConvActEntToInOff THEN
										eGotoOpsStep	:= InvertStepRev; 
									END_IF	
								END_IF	
								
								IF p_eConvStatus <> Busy THEN
									bPaused	:= p_bStop OR p_bStep;
								END_IF
							END_IF
						
					END_CASE		
					
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
					
						eGotoOpsStep	:= InvertStepClampBlkBefInvert;										
					
					ELSE
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							IF p_bOutletShutterOpen THEN	
								eGotoOpsStep	:= InvertStepDSStandby;
							ELSE
								eGotoOpsStep	:= InvertStepOutletShutterOpen;
							END_IF
						ELSE
							eGotoOpsStep	:= InvertStepDSStandby;
						END_IF
					END_IF	
						
					IF p_eConvStatus <> Busy THEN
						bPaused	:= p_bStop OR p_bStep;
					END_IF
				
				InvertStepClampBlkBefInvert:
					sStepTxt	:= 'Clamp Block Prior to Inversion';
					
					IF p_bClamp3Sen THEN
						
						eClamp1Act	:= PneuActExt;
						eClamp2Act	:= PneuActExt;
						eClamp3Act	:= PneuActExt;
			
						IF p_eClamp1Status = Done AND p_eClamp1Stat = PneuActExt AND
							p_eClamp2Status = Done AND p_eClamp2Stat = PneuActExt AND
							p_eClamp3Status = Done AND p_eClamp3Stat = PneuActExt THEN
				
							eClamp1Act		:= PneuActIdle;
							eClamp2Act		:= PneuActIdle;
							eClamp3Act		:= PneuActIdle;
							IF  p_bGoToStandby  THEN 
								eGotoOpsStep	:= InvertStepShuttersInOutClose;				
							ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF
				
							bPaused	:= p_bStop OR p_bStep;
						END_IF

					ELSIF p_bClamp2Sen THEN
						eClamp1Act	:= PneuActExt;
						eClamp2Act	:= PneuActExt;
			
						IF p_eClamp1Status = Done AND p_eClamp1Stat = PneuActExt AND
							p_eClamp2Status = Done AND p_eClamp2Stat = PneuActExt THEN
			
							eClamp1Act		:= PneuActIdle;
							eClamp2Act		:= PneuActIdle;				
							IF  p_bGoToStandby THEN 
								eGotoOpsStep	:= InvertStepShuttersInOutClose;
							ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF
			
							bPaused	:= p_bStop OR p_bStep;
						END_IF
						
					ELSE
						eClamp1Act	:= PneuActExt;
				
						IF p_eClamp1Status = Done AND p_eClamp1Stat = PneuActExt THEN
				
							eClamp1Act		:= PneuActIdle;		
							IF  p_bGoToStandby THEN 
								eGotoOpsStep	:= InvertStepShuttersInOutClose;		
							ELSIF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersCloseBefInvert;
							ELSE
								eGotoOpsStep	:= InvertStepInvert;
							END_IF
				
							bPaused	:= p_bStop OR p_bStep;
						END_IF
						
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
						
						eGotoOpsStep	:= InvertStepClampUnblkAftInvert;	
						
						bPaused	:= p_bStop OR p_bStep;
						
					END_IF					
					
				InvertStepClampUnblkAftInvert:	
					sStepTxt	:= 'Clamp Unblock After Invert';
			
					eClamp1Act	:= PneuActRet;
					eClamp2Act	:= PneuActRet;
					eClamp3Act	:= PneuActRet;		
			
					IF p_eClamp1Status = Done AND p_eClamp1Stat = PneuActRet AND 
						p_eClamp2Status = Done AND p_eClamp2Stat = PneuActRet AND 
						p_eClamp3Status = Done AND p_eClamp3Stat = PneuActRet  THEN
				
						eClamp1Act		:= PneuActIdle;
						eClamp2Act		:= PneuActIdle;
						eClamp3Act		:= PneuActIdle;
						
						IF eInvertCurrPos = InvertCurrPosAtRemote THEN
								
							IF bInvertPosInvalidSkipInit AND NOT(p_bLeftSen) THEN
								eGotoOpsStep	:= InvertStepInvalidPosRecoverBrd;
							ELSE
								IF p_bLeftSen = TRUE THEN	
									
									bInvertPosInvalidSkipInit := FALSE;
									
									eGotoOpsStep	:= InvertStepPreExit;
									
								ELSIF p_bRightSen = TRUE AND bInvOnceTwicePCBOut = TRUE THEN
									IF p_bOutletShutterOpen THEN
										eGotoOpsStep	:= InvertStepDSStandby;
									ELSE
										eGotoOpsStep	:= InvertStepOutletShutterOpen;
									END_IF
									
								ELSE
									eGotoOpsStep	:= InvertStepChkCondition;
								END_IF	
							END_IF
								
						ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN	
								
							IF bInvertPosInvalidSkipInit AND NOT(p_bRightSen) THEN
								eGotoOpsStep	:= InvertStepInvalidPosRecoverBrd;
							ELSE
								IF p_bRightSen = TRUE THEN		
									bInvertPosInvalidSkipInit := FALSE; 
									IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
										IF p_bOutletShutterOpen THEN	
											eGotoOpsStep	:= InvertStepDSStandby;
										ELSE
											eGotoOpsStep	:= InvertStepOutletShutterOpen;
										END_IF
										
									ELSE
										eGotoOpsStep	:= InvertStepDSStandby; 
									END_IF
									
								ELSIF p_bLeftSen = TRUE AND bInvOnceTwicePCBOut = TRUE THEN
									eGotoOpsStep	:= InvertStepPreExit;
									
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
					
						IF p_bRightSen = TRUE AND bInvOnceTwicePCBOut = FALSE THEN
							bHvBrd := TRUE;
							bGdBrd			:= p_bInitGdBrd;
								
							bInvertPosInvalidSkipInit := FALSE;
							
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								IF p_bOutletShutterOpen THEN	
									eGotoOpsStep	:= InvertStepDSStandby;
								ELSE
									eGotoOpsStep	:= InvertStepOutletShutterOpen;
								END_IF
							ELSE
								eGotoOpsStep	:= InvertStepDSStandby;
							END_IF
						
						ELSIF bInvOnceTwicePCBOut = TRUE THEN
							
							IF eInvertCurrPos = eInvertReqPos THEN
								
								bInvertPosInvalidSkipInit := FALSE;
								
								IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
									IF p_bOutletShutterOpen THEN	
										eGotoOpsStep	:= InvertStepDSStandby;
									ELSE
										eGotoOpsStep	:= InvertStepOutletShutterOpen;
									END_IF
								ELSE
									eGotoOpsStep	:= InvertStepDSStandby;
								END_IF
							END_IF
												
						ELSE
							bInvertPosInvalidSkipInit := FALSE;
							eGotoOpsStep	:= InvertStepChkCondition;
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
					sStepTxt	:= 'DS: Opening Outlet Shutter';
					
					eOutletShutterAct	:= PneuActRet;
					
					IF p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet THEN
						eOutletShutterAct	:= PneuActIdle;
						
						eGotoOpsStep	:= InvertStepDSStandby;
						
						bPaused	:= p_bStop OR p_bStep;
					END_IF
					
				InvertStepDSStandby:	
					sStepTxt	:= 'In Downstream Standby Condition';
					
					IF p_bGoToStandby = FALSE THEN
						bDSTimerRun	:= FALSE;
						
						IF p_eConvDirection = ConvDirLToL OR p_eConvDirection = ConvDirRToL THEN
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
					ELSE
						eGotoOpsStep	:= InvertStepShuttersInOutClose; //All Shutterclose When Inverting
					END_IF
					IF p_eConvStatus <> Busy THEN
						bPaused	:= p_bStop OR p_bStep;
					END_IF
		
				InvertStepDSTmr:	
					sStepTxt	:= 'Removing Board By Timer';
					
					IF p_eConvDirection = ConvDirLToL OR p_eConvDirection = ConvDirRToL THEN
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
					
					IF p_eConvDirection = ConvDirLToL OR p_eConvDirection = ConvDirRToL THEN
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
						
							ELSIF p_bDSAllow = FALSE OR p_bGoToStandby THEN	
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
							
								eDSSMEMAAct			:= SMEMAActIdle;
								eConvAct			:= ConvActIdle;
								
								bHvBrd			 	:= FALSE;
								p_bConvHvBrd 		:= FALSE;
								
																
								IF bBoardInFromUS1 AND NOT(bInvOnceTwicePCBOut) THEN
									eGotoOpsStep		:= InvertStepPCBOut;
								ELSE
									eGotoOpsStep		:= InvertStepChkCondition;
									bInvOnceTwicePCBOut	:= FALSE;
								END_IF
								
								bPaused	:= p_bStop OR p_bStep;
							
							END_IF 
				
						McSetCommModHermes:
							eConvAct := ConvActExit;

							IF ((p_bDSHermesTransporting = FALSE) OR (bDSTimerRun)) AND (p_eConvStatus = Done AND p_eConvStat = ConvActExit) THEN
								eConvAct := ConvActIdle;

								bHvBrd				:= FALSE;
								p_bConvHvBrd 		:= FALSE;
								
								IF bBoardInFromUS1 AND NOT(bInvOnceTwicePCBOut) THEN
									eGotoOpsStep 	:= InvertStepPCBOut;
								ELSE
									eGotoOpsStep	:= InvertStepChkCondition;
									bInvOnceTwicePCBOut := FALSE;
								END_IF
								
								bPaused := p_bStop OR p_bStep;
							END_IF
								
					END_CASE	
				
				InvertStepPCBOut:
					sStepTxt	:= 'Waiting for Retun Board ';
					
					bInvOnceTwicePCBOut := TRUE;
					
					eGotoOpsStep	:= InvertStepChkShutterCond;
					
					bPaused	:= p_bStop OR p_bStep;
				
				InvertStepInvRtrnUSStandby:
					sStepTxt	:= 'In Upstream 2 Standby Condition';
					
					bUS2TimerRun	:= FALSE;
					
					bConvSen	:= p_bLeftSen OR p_bRightSen OR p_bMidSen;

					IF  p_bAWWidthPosDiff = TRUE OR p_bGoToStandby THEN
						IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
							eGotoOpsStep	:= InvertStepShuttersInOutClose;
						ELSE
							eGotoOpsStep	:= InvertStepAWMov;
						END_IF
					ELSIF p_bRtrnUSAllow = TRUE THEN
						eGotoOpsStep	:= InvertStepInvRtrnUSCommTmr;
					ELSIF bConvSen = TRUE THEN
						eGotoOpsStep	:= InvertStepInvRtrnUSTmr;
					ELSIF bInvOnceTwicePCBOut = FALSE THEN 
						eGotoOpsStep	:= InvertStepChkCondition;
					END_IF
					
					bPaused	:= p_bStop OR p_bStep;
					
				InvertStepInvRtrnUSTmr:	
					sStepTxt	:= 'Inserting Board By Timer';
					
					bConvSen	:= p_bLeftSen OR p_bRightSen OR p_bMidSen;
					
					fbUS2Timer(IN := bConvSen);
					
					IF fbUS2Timer.Q = TRUE THEN
						bUS2TimerRun	:= TRUE;
						fbUS2Timer(IN := FALSE);
						
						bGdBrd	:= p_bInsertGdBrd;
						
						IF eInvertCurrPos = InvertCurrPosAtRemote THEN
							eGotoOpsStep	:= InvertStepInvRtrnEntToEnd;
						ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
							eGotoOpsStep	:= InvertStepInvRtrnEntToInOff;
						END_IF
							
					ELSIF bConvSen = FALSE THEN
						bUSTimerRun	:= FALSE;
						fbUSTimer(IN := FALSE);
						
						IF p_bAWWidthPosDiff = TRUE THEN
							IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
								eGotoOpsStep	:= InvertStepShuttersInOutClose; //back to US2 Standby
							ELSE
								eGotoOpsStep	:= InvertStepAWMov;
							END_IF
						ELSE	
							eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
						END_IF	
						
					ELSIF bInvOnceTwicePCBOut = FALSE THEN 
						eGotoOpsStep	:= InvertStepChkCondition;
						
					ELSE
						bPaused	:= p_bStop;
						
						IF bPaused = TRUE THEN
							bUSTimerRun	:= FALSE;
							fbUSTimer(IN := FALSE);
							
							eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
						END_IF
						
					END_IF
					
				InvertStepInvRtrnUSCommTmr:
					sStepTxt	:= 'Communicating Upstream 2 Machine';
					
					CASE p_eUSComm2Mod OF
						McSetCommModSMEMA:
							fbUS2Timer(IN := p_bLeftSen OR p_bRightSen OR p_bMidSen);
							
							eUSSMEMA2Act	:= SMEMAActRun;
							
							IF p_bUSSMEMA2Transporting = TRUE THEN
								bUS2TimerRun	:= FALSE;
								fbUS2Timer(IN := FALSE);
								
								bGdBrd			:= p_bUSSMEMA2USGdBrdRdy;
								
								sStepTxt		:= 'Conveyor Entering Return Board';
		
								IF eInvertCurrPos = InvertCurrPosAtRemote THEN
									eGotoOpsStep	:= InvertStepInvRtrnEntToEnd;
								ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
									eGotoOpsStep	:= InvertStepInvRtrnEntToInOff;
								END_IF
								
							ELSIF fbUS2Timer.Q = TRUE THEN	
								bUS2TimerRun	:= TRUE;
								fbUS2Timer(IN := FALSE);
									
								bGdBrd	:= p_bInsertGdBrd;
								
								IF eInvertCurrPos = InvertCurrPosAtRemote THEN
									eGotoOpsStep	:= InvertStepInvRtrnEntToEnd;
								ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
									eGotoOpsStep	:= InvertStepInvRtrnEntToInOff;
								END_IF
								
							ELSIF (p_bAWWidthPosDiff = TRUE) OR (p_bRtrnUSAllow = FALSE)  THEN
								bUS2TimerRun	:= FALSE;
								fbUS2Timer(IN := FALSE);
								
								eUSSMEMA2Act	:= SMEMAActIdle;
								
								IF p_bAWWidthPosDiff = TRUE THEN
									IF (p_bInletShutterPrep AND p_bInletShutterDis=FALSE) OR (p_bOutletShutterPrep AND p_bOutletShutterDis=FALSE) THEN
										eGotoOpsStep	:= InvertStepShuttersInOutClose;
									ELSE
										eGotoOpsStep	:= InvertStepAWMov;
									END_IF
								ELSE	
									eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
								END_IF
								
							ELSIF bInvOnceTwicePCBOut = FALSE THEN 
								eGotoOpsStep	:= InvertStepChkCondition;
									
							ELSE	
								
								bPaused	:= p_bStop;
								
								IF bPaused = TRUE  THEN
									bUS2TimerRun	:= FALSE;
									fbUS2Timer(IN := FALSE);
									
									eUSSMEMA2Act	:= SMEMAActIdle;
									
									eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
								END_IF
								
							END_IF	
				
					(*	McSetCommModHermes:	
							fbUSTimer(IN := p_bLeftSen OR p_bRightSen OR p_bMidSen);
						
							IF p_bUSHermesTransporting = TRUE THEN
								bUSTimerRun	:= FALSE;
								fbUSTimer(IN := FALSE);
								
								bGdBrd	:= p_bUSHermesUSGdRdy;
								
								IF p_usiLinkProdRcpCurrRcpMcMod = 0 THEN
									eGotoOpsStep	:= InvertStepEntToEnd;
							
								ELSIF p_usiLinkProdRcpCurrRcpMcMod = 1 THEN	
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
							
								END_IF
								
							ELSIF fbUSTimer.Q = TRUE THEN
								bUSTimerRun	:= TRUE;
								fbUSTimer(IN := FALSE);
									
								bGdBrd	:= p_bInsertGdBrd;
								
								IF p_usiLinkProdRcpCurrRcpMcMod = 0 THEN
									eGotoOpsStep	:= InvertStepEntToEnd;
							
								ELSIF p_usiLinkProdRcpCurrRcpMcMod = 1 THEN	
									IF eInvertCurrPos = InvertCurrPosAtRemote THEN
										eGotoOpsStep	:= InvertStepEntToInOff;
									ELSIF eInvertCurrPos = InvertCurrPosAtHome THEN
										eGotoOpsStep	:= InvertStepEntToEnd;
									END_IF
							
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
								
							END_IF*)	
								
					END_CASE	
				
				InvertStepInvRtrnEntToEnd:
					CASE p_eUSComm2Mod OF
						McSetCommModSMEMA:
							IF p_bUSSMEMA2Transporting = FALSE AND bUS2TimerRun = FALSE THEN
								
								eConvAct		:= ConvActStop;
								eUSSMEMA2Act	:= SMEMAActIdle;
								
								IF p_eConvStatus = Done AND p_eConvStat = ConvActStop THEN
									eConvAct		:= ConvActIdle;
									
									eGotoOpsStep	:= InvertStepInvRtrnUSStandby;	
							
									bPaused	:= p_bStop OR p_bStep;
									
								END_IF
							
							ELSE	
								IF p_bUSSMEMA2ConvStart OR bUS2TimerRun THEN
									sStepTxt	:= 'Conveyor Entering Return Board';
									eConvAct	:= ConvActEnt;
								END_IF
								
								IF (p_bConvHvBrd = TRUE) OR bUS2TimerRun THEN 
									bHvBrd := TRUE;
								END_IF
					
								IF p_bUSSMEMA2ConvStop AND bUS2TimerRun = FALSE THEN
									sStepTxt	:= 'Conveyor Stopping';
									eConvAct	:= ConvActStop;
								END_IF
								
								//Waiting Conveyor Reach End 
								IF ((p_eUSSMEMA2Status = Done AND p_eUSSMEMA2Stat = SMEMAActRun) OR (bUS2TimerRun = TRUE)) AND p_eConvStatus = Done AND p_eConvStat = ConvActEnt THEN
									eUSSMEMA2Act	:= SMEMAActIdle;
									eGotoOpsStep	:= InvertStepInvertComplChk;
									
									IF p_eConvStatus <> Busy THEN
										bPaused	:= p_bStop OR p_bStep;
									END_IF
								END_IF
																
							END_IF
							
					(*	McSetCommModHermes:	
							IF p_bUSHermesTransporting OR bUSTimerRun = TRUE THEN
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
							IF (p_usiLinkProdRcpCurrRcpMcMod = 2 OR p_usiLinkProdRcpCurrRcpMcMod = 3) AND bInvOnceTwicePCBOut = FALSE THEN	
						
								IF ((p_bUSHermesTransporting = FALSE ) OR (bUSTimerRun)) THEN
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
						
							END_IF	*)
								
					END_CASE
				
				InvertStepInvRtrnEntToInOff:
					CASE p_eUSComm2Mod OF
						McSetCommModSMEMA:
							IF p_bUSSMEMA2Transporting = FALSE AND bUS2TimerRun = FALSE THEN
								eConvAct	:= ConvActStop;
						
								IF p_eConvStatus = Done AND p_eConvStat = ConvActStop THEN
									eConvAct		:= ConvActIdle;
									eGotoOpsStep	:= InvertStepInvRtrnUSStandby;
							
									bPaused	:= p_bStop OR p_bStep;
									
								END_IF
							
							ELSE	
								IF p_bUSSMEMA2ConvStart OR bUS2TimerRun THEN
									sStepTxt	:= 'Conveyor Entering Return Board';
									eConvAct	:= ConvActEntToInOff;	
								END_IF
								
								IF (p_bConvHvBrd = TRUE) OR (bUS2TimerRun = TRUE) THEN 
									bHvBrd := TRUE;
								END_IF
					
								IF p_bUSSMEMA2ConvStop AND bUS2TimerRun = FALSE THEN
									sStepTxt	:= 'Conveyor Stopping';
									eConvAct	:= ConvActStop;
								END_IF
																
								IF ((p_eUSSMEMA2Status = Done AND p_eUSSMEMA2Stat = SMEMAActRun) OR (bUS2TimerRun = TRUE)) AND p_eConvStatus = Done AND p_eConvStat = ConvActEntToInOff THEN
									eUSSMEMA2Act	:= SMEMAActIdle;
									
									eGotoOpsStep	:= InvertStepRev;
									
									IF p_eConvStatus <> Busy THEN
										bPaused	:= p_bStop OR p_bStep;
									END_IF
								END_IF
									
							END_IF
							
					(*	McSetCommModHermes:	
							IF p_bUSHermesTransporting OR bUSTimerRun = TRUE THEN
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
										
							IF ((p_bUSHermesTransporting = FALSE) OR (bUSTimerRun)) THEN
								IF p_eConvStat = ConvActStop THEN
									IF p_eConvStatus = Done THEN
										eConvAct		:= ConvActIdle;
										eGotoOpsStep	:= InvertStepUSStandby;
									END_IF
								ELSE
									IF p_eConvStatus = Done AND p_eConvStat = ConvActEntToInOff THEN
										eGotoOpsStep	:= InvertStepRev; 
									END_IF	
								END_IF	
								
								IF p_eConvStatus <> Busy THEN
									bPaused	:= p_bStop OR p_bStep;
								END_IF
							END_IF *)
						
					END_CASE

			END_CASE	
			
		END_IF

	END_IF	
	
	//Board Inserted/Removed
	bBrdInserted		:= bUSTimerRun;
	bBrdRemoved			:= bDSTimerRun;
	
	//Operation Step Status
	IF (eOpsStep = InvertStepInitConvAwayLftSen) OR (eOpsStep = InvertStepInitConvAwayRgtSen) OR (eOpsStep = InvertStepInitConvTwdLftSen) OR (eOpsStep = InvertStepInitConvTwdRgtSen) OR (eOpsStep = InvertStepInitConvToRgt) OR (eOpsStep = InvertStepInitInvRtrnConv) THEN
		bStepInitConv	:= TRUE;
	ELSE	
		bStepInitConv	:= FALSE;
	END_IF	
		
	bStepInitAwayStopper		:= (eOpsStep = InvertStepInitConvAwayLftSen) OR (eOpsStep = InvertStepInitConvAwayRgtSen);
	bStepInitTwdStopper			:= (eOpsStep = InvertStepInitConvTwdLftSen) OR (eOpsStep = InvertStepInitConvTwdRgtSen);
	bStepInitDone				:= eOpsStep > InvertStepInitShuttersInOutClose AND bInvertPosInvalidSkipInit=FALSE;;
	bStepUSStandby				:= eOpsStep = InvertStepUSStandby;
	bStepUSCommTmr				:= eOpsStep = InvertStepUSCommTmr;
	bStepEntToEnd				:= eOpsStep = InvertStepEntToEnd;
	bStepEntToInOff				:= eOpsStep = InvertStepEntToInOff;
	bStepRev					:= eOpsStep = InvertStepRev;
	bStepPreExit				:= eOpsStep = InvertStepPreExit;
	bStepDSStandby				:= eOpsStep = InvertStepDSStandby;
	bStepDSCommTmr				:= eOpsStep = InvertStepDSCommTmr;
	bStepExitBrd				:= eOpsStep = InvertStepExitBrd;
	bStepSafeMode				:= eOpsStep = InvertStepShutterCloseWaitForSig;
	bStepInvRtrnUSCommTmr		:= eOpsStep = InvertStepInvRtrnUSCommTmr;
	bStepInvRtrnUSStandby		:= eOpsStep = InvertStepInvRtrnUSStandby;
	bStepInvRtrnEntToEnd		:= eOpsStep = InvertStepInvRtrnEntToEnd;				
	bStepInvRtrnEntToInOff		:= eOpsStep = InvertStepInvRtrnEntToInOff;									
					
END_ACTION
