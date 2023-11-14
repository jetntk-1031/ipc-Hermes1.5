
ACTION Act_OptP0910WriteDO:
	
	//Safety Relay
	IF tyP0910GenOut.tyGenOut.tyBtnSafety.bRtCompl = TRUE THEN
		
		IF tyP0910GenOut.tyGenOut.tyBtnSafety.bValue = TRUE THEN
			eRstErrAct	:= RstErrActSetSafetyRlyRst;
			
			IF p_eRstErrStat = RstErrActSetSafetyRlyRst AND p_eRstErrStatus = Done THEN
				eRstErrAct	:= RstErrActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnSafety.bRtCompl	:= FALSE;
			END_IF
			
		ELSE	
			eRstErrAct	:= RstErrActRstSafetyRlyRst;
			
			IF p_eRstErrStat = RstErrActRstSafetyRlyRst AND p_eRstErrStatus = Done THEN	
				eRstErrAct	:= RstErrActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnSafety.bRtCompl	:= FALSE;
			END_IF
			
		END_IF
		
	END_IF
	
	// TL Green
	IF tyP0910GenOut.tyGenOut.tyBtnTLGreen.bRtCompl = TRUE THEN
		IF tyP0910GenOut.tyGenOut.tyBtnTLGreen.bValue = TRUE THEN
			eTLBuzAct	:= TLBuzActSetGreen;
			
			IF p_eTLBuzStat = TLBuzActSetGreen AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLGreen.bRtCompl	:= FALSE;
			END_IF	
		ELSE	
			eTLBuzAct	:= TLBuzActRstGreen;
		
			IF p_eTLBuzStat = TLBuzActRstGreen AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLGreen.bRtCompl	:= FALSE;
			END_IF	
			
		END_IF
	END_IF
	
	//TL Amber
	IF tyP0910GenOut.tyGenOut.tyBtnTLAmber.bRtCompl = TRUE THEN
		IF tyP0910GenOut.tyGenOut.tyBtnTLAmber.bValue = TRUE THEN
			eTLBuzAct	:= TLBuzActSetAmber;
			
			IF p_eTLBuzStat = TLBuzActSetAmber AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLAmber.bRtCompl	:= FALSE;
			END_IF	
		ELSE	
			eTLBuzAct	:= TLBuzActRstAmber;
		
			IF p_eTLBuzStat = TLBuzActRstAmber AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLAmber.bRtCompl	:= FALSE;
			END_IF	
			
		END_IF
	END_IF
	
	//TL Red
	IF tyP0910GenOut.tyGenOut.tyBtnTLRed.bRtCompl = TRUE THEN
		IF tyP0910GenOut.tyGenOut.tyBtnTLRed.bValue = TRUE THEN
			eTLBuzAct	:= TLBuzActSetRed;
			
			IF p_eTLBuzStat = TLBuzActSetRed AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLRed.bRtCompl	:= FALSE;
			END_IF	
		ELSE	
			eTLBuzAct	:= TLBuzActRstRed;
		
			IF p_eTLBuzStat = TLBuzActRstRed AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLRed.bRtCompl	:= FALSE;
			END_IF	
			
		END_IF
	END_IF
	
	//TL Blue
	IF tyP0910GenOut.tyGenOut.tyBtnTLBlue.bRtCompl = TRUE THEN
		IF tyP0910GenOut.tyGenOut.tyBtnTLBlue.bValue = TRUE THEN
			eTLBuzAct	:= TLBuzActSetBlue;
			
			IF p_eTLBuzStat = TLBuzActSetBlue AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLBlue.bRtCompl	:= FALSE;
			END_IF	
		ELSE	
			eTLBuzAct	:= TLBuzActRstBlue;
		
			IF p_eTLBuzStat = TLBuzActRstBlue AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLBlue.bRtCompl	:= FALSE;
			END_IF	
			
		END_IF
	END_IF

	
	//TL White
	IF tyP0910GenOut.tyGenOut.tyBtnTLWhite.bRtCompl = TRUE THEN
		IF tyP0910GenOut.tyGenOut.tyBtnTLWhite.bValue = TRUE THEN
			eTLBuzAct	:= TLBuzActSetWhite;
			
			IF p_eTLBuzStat = TLBuzActSetWhite AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLWhite.bRtCompl	:= FALSE;
			END_IF	
		ELSE	
			eTLBuzAct	:= TLBuzActRstWhite;
		
			IF p_eTLBuzStat = TLBuzActRstWhite AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnTLWhite.bRtCompl	:= FALSE;
			END_IF	
			
		END_IF
	END_IF	
	
	//TL Buzzer
	IF tyP0910GenOut.tyGenOut.tyBtnBuzzer.bRtCompl = TRUE THEN
		IF tyP0910GenOut.tyGenOut.tyBtnBuzzer.bValue = TRUE THEN
			eTLBuzAct	:= TLBuzActSetBuz;
			
			IF p_eTLBuzStat = TLBuzActSetBuz AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnBuzzer.bRtCompl	:= FALSE;
			END_IF	
		ELSE	
			eTLBuzAct	:= TLBuzActRstBuz;
		
			IF p_eTLBuzStat = TLBuzActRstBuz AND p_eTLBuzStatus = Done THEN	
				eTLBuzAct	:= TLBuzActIdle;
				
				tyP0910GenOut.tyGenOut.tyBtnBuzzer.bRtCompl	:= FALSE;
			END_IF	
			
		END_IF
	END_IF
	
	
	// ADD
	// ADD

	//  Safety Sig to DS
	IF tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bRtCompl = TRUE THEN			
		IF tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bValue = TRUE THEN			
			bMnlModMachineSafetySigToDS		:= TRUE;										
			tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bRtCompl		:= FALSE;	
			//
		ELSE																		
			bMnlModMachineSafetySigToDS		:= FALSE;										
			tyP0910GenOut.tyGenOut.tyBtnSftSigToUSDS.bRtCompl		:= FALSE;  
			//
		END_IF																		
		//
	END_IF
	

	
	//  Top Cover Unlock Sig to DS
	IF 	tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bRtCompl = TRUE THEN			
		IF 	tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bValue = TRUE THEN		
			bMnlModUnlockCover1Req		:= TRUE;										
			tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bRtCompl		:= FALSE;	
		
		ELSE																		
			bMnlModUnlockCover1Req		:= FALSE;										
			tyP0910GenOut.tyGenOut.tyBtnTopCovUlkUSDS.bRtCompl		:= FALSE;   
		
		END_IF																			
	
	END_IF

	
	//  Unlock Cover PB led
	IF tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bRtCompl = TRUE THEN			
		IF tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bValue = TRUE THEN		
			bMnlModCoverPBLED1		:= TRUE;										
			tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bRtCompl		:= FALSE;	
			
		ELSE																		
			bMnlModCoverPBLED1		:= FALSE;											
			tyP0910GenOut.tyGenOut.tyBtnUlkCovPBLED.bRtCompl		:= FALSE;   
		
		END_IF																		
	
	END_IF
	
	//  ByPass Top Cover
	IF tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bRtCompl = TRUE THEN					
		IF tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bValue = TRUE THEN				
			bMnlModBypassTopCover1		:= TRUE;											
			tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bRtCompl		:= FALSE;		
		
		ELSE																			
			bMnlModBypassTopCover1		:= FALSE;											
			tyP0910GenOut.tyGenOut.tyBtnUlkCovHoldRely.bRtCompl		:= FALSE;		
		
		END_IF																		
		
	END_IF																				
	
	//  Safety Top Cover Switch Coil
	IF tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bRtCompl = TRUE THEN			
		IF tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bValue = TRUE THEN				
			bMnlModTopCoverSwitch1		:= TRUE;											
			tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bRtCompl		:= FALSE;		
		
		ELSE																		
			bMnlModTopCoverSwitch1		:= FALSE;											
			tyP0910GenOut.tyGenOut.tyBtnSftUlkCovSWCoil.bRtCompl		:= FALSE;		
		
		END_IF																			
		
	END_IF	
	
END_ACTION
