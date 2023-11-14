
ACTION Act_OptP0002ToP1081UnlockCoverPB: 
	
		
	IF p_tyNtParamCurr.tyDOSettings.diBypassTopCover1 > 0 THEN
		
		IF p_bAlarmErr THEN
			bCoverPB1Timer := FALSE;
			fbCoverPB1CountDownTm( IN := FALSE);
			tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue 	:=FALSE;
			tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:=FALSE;
		END_IF
		
		//Physical Unlock Cover Button 1
		IF EDGENEG(p_tyDI.bCoverUnlockPB1) THEN																				
			IF p_tyDI.bCoverSWSig2 = TRUE THEN
				IF tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue = FALSE THEN												
					tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue 	:= TRUE;														
					tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue;
					bCoverPB1Timer := TRUE;																					
				ELSE																										
					tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue 	:= FALSE;										
					tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue;	
					bCoverPB1Timer := FALSE;																				
				END_IF																										
			END_IF																											
		END_IF																												
		
		//Control
		IF tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bRtCompl = TRUE THEN //ok
			tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bRtCompl	:= FALSE;
			IF p_tyDI.bCoverSWSig2 = TRUE THEN
				tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue;
				IF tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue = TRUE THEN
					bCoverPB1Timer := TRUE;																					
				ELSE
					bCoverPB1Timer := FALSE;																				
				END_IF
			ELSE																											
				tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue 	:= TRUE;												
				tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue;		
			END_IF																											
				
		ELSIF tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bRtCompl = TRUE THEN //ok
			tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bRtCompl	:= FALSE;
			IF p_tyDI.bCoverSWSig = TRUE THEN	
				tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue;
				IF tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue = TRUE THEN
					bCoverPB1Timer := TRUE;																					
				ELSE
					bCoverPB1Timer := FALSE;																				
				END_IF
			ELSE																											
				tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue 	:= TRUE;												
				tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue		:= tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue;	
			END_IF																											
			
		END_IF
		
		bBypassTopCover1	:= ( tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue) OR ( tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue);
		
		//Condition Allow	
		IF (tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue = TRUE) THEN
		
			IF p_tyNtParamCurr.tyDISettings.diSafetySigFromUS > 0 THEN 
				bUnlockCover1Req	:= TRUE;

				IF (p_bOpsInvertStepAWMove = FALSE) AND (p_eConvStatus <> Busy AND p_eInvertStatus <> Busy )AND
					(( p_tyDI.bInShutterCloseRS AND p_tyDI.bOutShutterCloseRS AND p_bOpsSafeMode) OR p_bOpsRun=FALSE) AND (p_tyDI.bSafetySigFromUS AND p_tyDI.bSafetySigFromDS )  THEN
				
					bTopCoverSwitchCoil1	:= FALSE;
				ELSE
					bTopCoverSwitchCoil1	:= TRUE;
				END_IF
				
			ELSE
				IF (p_bOpsInvertStepAWMove = FALSE) AND (p_eConvStatus <> Busy AND p_eInvertStatus <> Busy )AND
					((p_tyDI.bInShutterCloseRS AND p_tyDI.bOutShutterCloseRS AND p_bOpsSafeMode) OR p_bOpsRun=FALSE) THEN
				
	
					bTopCoverSwitchCoil1	:= FALSE;
				ELSE
					bTopCoverSwitchCoil1	:= TRUE;
				END_IF
			
			END_IF
				
		ELSE
			bTopCoverSwitchCoil1	:= TRUE;
			IF p_tyNtParamCurr.tyDISettings.diSafetySigFromUS > 0 THEN 
				bUnlockCover1Req	:= FALSE;
				//bTopCvrUnlckToDS	:= FALSE;
			END_IF
			
		END_IF
		
		//Button Appearance
		IF bCoverPBLED1 THEN //bTopCoverSwitchCoil1 = FALSE AND tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue = TRUE THEN
			tyP0201OpsConv.tyOps.tyBitmapBypassTopCover1.usiValueIdx	:= 0;
			tyP0200OpsGen.tyOps.tyBitmapBypassTopCover1.usiValueIdx		:= 0;
		ELSE
			tyP0201OpsConv.tyOps.tyBitmapBypassTopCover1.usiValueIdx	:= 2;
			tyP0200OpsGen.tyOps.tyBitmapBypassTopCover1.usiValueIdx		:= 2;
		END_IF
		
	END_IF
	
	
	//lED 1&2
	
	// LED 1 & 2
	IF bTopCoverSwitchCoil1 = FALSE AND tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue = TRUE THEN		
		bCoverPBLED1 := TRUE;												
		fbCoverPBLED1BlinkTm(IN := FALSE);									
	ELSIF bTopCoverSwitchCoil1 = TRUE AND tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue = TRUE THEN
		fbCoverPBLED1BlinkTm(IN := TRUE);									
		IF fbCoverPBLED1BlinkTm.Q = TRUE THEN								
			fbCoverPBLED1BlinkTm(IN := FALSE);								
			IF bCoverPBLED1 = FALSE THEN									
				bCoverPBLED1 := TRUE;										
			ELSE															
				bCoverPBLED1 := FALSE;										
			END_IF															
		END_IF																	
	ELSE																	
		bCoverPBLED1 := FALSE;													
		fbCoverPBLED1BlinkTm(IN := FALSE);										
	END_IF																	
			
			
		
	//5 Sec Time Out Cover PB1
	IF bTopCoverSwitchCoil1 = FALSE AND tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue = TRUE  OR bCoverPB1Timer = FALSE THEN //tyP0200OpsGen.tyOps.tyBitmapBypassTopCover1.usiValueIdx	= 1 OR bCoverPB1Timer = FALSE THEN											
		fbCoverPB1CountDownTm(IN := bCoverPB1Timer);																//
		IF p_tyDI.bCoverSWSig2 = FALSE THEN																			
			bCoverPB1Timer := FALSE;																				//
		END_IF																										//
		//
		IF fbCoverPB1CountDownTm.Q = TRUE THEN																		//
			fbCoverPB1CountDownTm(IN := FALSE);																		//
			bCoverPB1Timer := FALSE;																				//
			tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue 	:= FALSE;											//
			tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue;	//
		END_IF																										//
	END_IF																											//
		
	
	//Lock After Close Cover
	IF EDGEPOS(p_tyDI.bCoverSWSig2) THEN																			//
		tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue 	:= FALSE;											//
		tyP0201OpsConv.tyOps.tyBtnBypassTopCover1.bValue	:= tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.bValue;	//
	END_IF																										//

	////////////////////////////////////Machine Safety Signal To DS

	IF (p_tyDI.bUnlockCoverSigFromDS) AND (p_bOpsInvertStepAWMove = FALSE) AND 
		(p_bOpsDSStandby OR ( p_eConvStatus <> Busy) AND ( p_eInvertStatus<>Busy OR p_bOutShutterExtended)) THEN
	
		bMachineSafetySigToDS := TRUE;																						
	ELSE																													
		bMachineSafetySigToDS := FALSE;																						
	END_IF																													

	////////////////////////////////////Machine Safety Signal To US
	IF  (p_tyDI.bUnlockCoverSigFromUS) AND  (p_bOpsInvertStepAWMove = FALSE) AND (p_bOpsUSStandby  OR ( p_eConvStatus <> Busy) AND ( p_eInvertStatus<>Busy OR p_bInShutterExtended)) THEN
		
		bMachineSafetySigToUS := TRUE;																						
	ELSE																													
		bMachineSafetySigToUS := FALSE;																						
	END_IF	

	
END_ACTION
