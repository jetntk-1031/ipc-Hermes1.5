(** 2019-03-25 **)
ACTION Act_OpsRun:
	
	IF eSimuInvGotoStep	<> eSimuInvStep THEN
		CASE eSimuInvGotoStep OF
	
			ELSE
				fbInvChgDirDlyTm(IN := FALSE);
				fbConvChgDirDlyTm(IN := FALSE);
				eSimuInvStep	:= eSimuInvGotoStep;
		END_CASE
		
	END_IF
	
	IF eSimuInvGotoStep = eSimuInvStep THEN
	
		IF bPaused = FALSE THEN
		
			CASE eSimuInvStep OF
				
				SimuInvStepChkCondition :
				
					IF p_bInletShutterCloseRs = FALSE OR p_bOutletShutterCloseRs = FALSE THEN
						eSimuInvGotoStep := SimuInvStepInitShutterCls;
						
					ELSE
						IF p_bStopperExtended = FALSE THEN
							eSimuInvGotoStep	:= SimuInvStepInitStopperExt;
						END_IF
						
					END_IF
					
					bPaused	 := p_bStop OR p_bStep;
					
				SimuInvStepInitShutterCls:
				
					eInShutterAct 	:= PneuActExt;
					eOutShutterAct	:= PneuActExt;
				
					IF (p_eInletShutterStat = PneuActExt AND p_eInletShutterStatus = Done) AND (p_eOutletShutterStat = PneuActExt AND p_eOutletShutterStatus = Done) THEN
						
						eInShutterAct := PneuActIdle;
						eOutShutterAct := PneuActIdle;
						
						eSimuInvGotoStep := SimuInvStepInitStopperExt;
						
						bPaused	:= p_bStop OR p_bStep;
					
					END_IF
				
				SimuInvStepInitStopperExt:
				
					eStopperAct	:= PneuActExt;
				
					IF (p_eStopperStat = PneuActExt AND p_eStopperStatus = Done) THEN
						
						eStopperAct	 := PneuActIdle;
						
						IF  p_bInverterHomeSen AND p_bConvRightSen THEN
							eSimuInvGotoStep	:= SimuInvStepInvertRemote;
						
						ELSIF p_bInverterHomeSen AND (p_bConvLeftSen OR NOT (p_bConvLeftSen OR p_bConvRightSen) ) THEN
							eSimuInvGotoStep 	:= SimuInvStepConvToRightSen;
												
						ELSIF p_bInverterRemoteSen AND p_bConvLeftSen THEN
							eSimuInvGotoStep	:= SimuInvStepInvertHome;
						
						ELSIF p_bInverterRemoteSen AND (p_bConvRightSen OR NOT (p_bConvLeftSen OR p_bConvRightSen) ) THEN
							eSimuInvGotoStep	:= SimuInvStepConvToLeftSen;
							
						ELSIF NOT(p_bInverterHomeSen OR p_bInverterRemoteSen) THEN
							eSimuInvGotoStep	:= SimuInvStepInvertHome;
						
						END_IF
							
						bPaused	:= p_bStop OR p_bStep;
						
					END_IF
					
				SimuInvStepInvertHome:	
				
					eInverterAct := MotorBrkActCCW;
					
					IF (p_eInvertStat = MotorBrkActCCW AND p_eInvertStatus = Done) THEN
						
						eInverterAct 	:= MotorBrkActIdle;
						
						fbInvChgDirDlyTm(IN := TRUE);
						
						IF fbInvChgDirDlyTm.Q THEN //After Inverter invert to Home postion and time up the Waiting Time , Board go to conv Exit sensor
							
							eConvAct := ConvActEnt;
							fbInvChgDirDlyTm(IN := FALSE);
							
							IF (p_eConvStat = ConvActEnt AND p_eConvStatus = Done) THEN
								fbConvChgDirDlyTm (IN := TRUE);
							END_IF
							
						END_IF
						
						IF fbConvChgDirDlyTm.Q THEN // Board reach the Conv Exit sensor and time up the Waiting Time , Board go back to the conv Inlet sensor
							
							eConvAct	:= ConvActRev;
							fbConvChgDirDlyTm(IN := FALSE);
							
							IF (p_eConvStat = ConvActRev AND p_eConvStatus = Done) THEN // Board Reach the conv Inlet sensor, will go back to conv Exit sensor
								eConvAct	:= ConvActRevImmedStart;
							END_IF
						END_IF
						
						IF p_ConvStat = ConvActRevImmedStart AND p_eConvStatus = Done THEN
							
							eConvAct	:= ConvActIdle;
							
							fbInvChgDirDlyTm(IN := TRUE);
						
							IF fbInvChgDirDlyTm.Q THEN // Board Reach the conv Exit sensor and time up the Waiting Time, Inverter will start Invert to Remote Position
								eSimuInvGotoStep	:= SimuInvStepInvertRemote;
								fbInvChgDirDlyTm(IN := FALSE);
							END_IF
						
						END_IF
							
							
						
						bPaused	:= p_bStop OR p_bStep;
						
					END_IF			
				
				SimuInvStepInvertRemote:
					
					eInverterAct	:= MotorBrkActCW;
					
					IF (p_eInvertStat = MotorBrkActCW AND p_eInvertStatus = Done) THEN
					
						eInverterAct	:= MotorBrkActIdle;
						
						fbInvChgDirDlyTm(IN := TRUE);
						
						IF fbInvChgDirDlyTm.Q THEN
							
							eConvAct	:=  ConvActEnt;
							fbInvChgDirDlyTm(IN := FALSE);
							
							IF p_eConvStat= ConvActEnt AND p_eConvStatus = Done THEN
								fbConvChgDirDlyTm (IN := TRUE);
							END_IF
							
							IF fbConvChgDirDlyTm.Q THEN
								fbConvChgDirDlyTm (IN := FALSE);
								eConvAct	:= ConvActRev;
							END_IF
							
							IF p_eConvStat = ConvActRev AND p_eConvStatus = Done THEN
								eConvAct	:= ConvActIdle;
								fbInvChgDirDlyTm (IN := TRUE);
							END_IF
							
							IF fbInvChgDirDlyTm.Q THEN
								eSimuInvGotoStep := SimuInvStepInvertHome;
								fbInvChgDirDlyTm (IN:= FALSE);
							
							END_IF
								
							
						END_IF
						
						bPaused	:= p_bStop OR p_bStep;
					
					END_IF
						
					
				SimuInvStepConvToRightSen:
					
					eConvAct	:= ConvActInit;
				
					IF (p_eConvStat = ConvActInit AND p_eConvStatus = Done) THEN
						
						eConvAct :=	ConvActIdle;
						
						eSimuInvGotoStep	:= SimuInvStepInvertRemote;
						
						bPaused := p_bStop OR p_bStep;
					
					END_IF
				
				SimuInvStepConvToLeftSen:
					
					eConvAct	:= ConvActRev;
					
					IF (p_eConvStat = ConvActRev AND p_eConvStatus = Done) THEN
						
						eConvAct	:= ConvActIdle;
						
						eSimuInvGotoStep	:= SimuInvStepInvertHome;
						
						bPaused := p_bStop OR p_bStep;
					
					END_IF		
				
					
			END_CASE
					
					
		END_IF
		
	
	
	END_IF
		
		
		
END_ACTION
