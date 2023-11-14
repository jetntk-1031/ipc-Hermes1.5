(** 2019-04-27 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbSMEMA_OppFirst(bEn := FALSE);
		fbSMEMA(bEn := FALSE);
		
		bTransporting	:= FALSE;
		bConvStart		:= FALSE;
		bConvStop		:= FALSE;
		bUSRdy			:= FALSE;
		bUSGdBrdRdy		:= FALSE;
		
		IF eStatOld <> SMEMAActIdle
			AND eStatOld <> SMEMAActSetSig
			AND eStatOld <> SMEMAActSetStatSig
			AND eStatOld <> SMEMAActRstSig
			AND eStatOld <> SMEMAActRstStatSig
			AND eStatOld <> SMEMAActSetAllSig
			AND eStatOld <> SMEMAActRstAllSig THEN
			
			bDBA		:= FALSE;
			bDBAStat	:= FALSE;
			
		END_IF
				
		sStatTxt	:= a_sStatText[eStat];
				
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		SMEMAActIdle:
			IF EDGENEG(p_bManual) THEN
				bDBA		:= FALSE;
				bDBAStat	:= FALSE;
			END_IF
			
			eStatus	:= Idle;
		
		SMEMAActRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				IF p_tyParam.eSelection <> SMEMASelStandard THEN
					
					fbSMEMA.bDSRdy		:= fbSigInChk.bSigInValid;
					fbSMEMA.bRdySend	:= p_bRdySend;
					fbSMEMA.bComplSigOn	:= p_bComplSigOn;
					
					fbSMEMA.tTimeOut	:= DINT_TO_TIME(p_diTransferOutTO);
					fbSMEMA(bEn := TRUE);
					
					bTransporting	:= fbSMEMA.bTransporting;
					bConvStart		:= fbSMEMA.bConvStart;
					bConvStop		:= fbSMEMA.bConvStop;
					bDBA			:= fbSMEMA.bSigToDS AND (bTimer = FALSE) AND (bVirtual = FALSE);
					bDBAStat		:= (fbSMEMA.bSigToDS) AND (fSMEMASigStatOut(p_tyParam.bStatSigSetGd, p_bGdBrd)) AND (p_tyParam.eSelection = SMEMASelIPC9851Ext);
					
					bUSRdy			:= fbSMEMA.bSigToDS;
					bUSGdBrdRdy		:= p_bGdBrd;
					
					IF fbSMEMA.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbSMEMA.udiStatus < 65534 THEN
						eStatus		:= Error;
						
						IF fbSMEMA.udiStatus = 1200 THEN
							udiStatus	:= 10000;	//SMEMA 9851 Transport Time Out While Transporting
						ELSIF fbSMEMA.udiStatus = 1201 THEN
							udiStatus	:= 10001;	//SMEMA 9851 Transport Time Out After Opposite Machine Transport Finished
						ELSIF fbSMEMA.udiStatus = 1202 THEN
							udiStatus	:= 10002;	//SMEMA 9851 Transport Time Out After Current Machine Transport Finished
						ELSIF fbSMEMA.udiStatus = 1203 THEN
							udiStatus	:= 10003;	//SMEMA 9851 Transport Time Out After Both Machine Transport Finished And Waiting Outlet Sensor
						ELSE
							udiStatus	:= fbSMEMA.udiStatus;
						END_IF
					END_IF
					
				ELSE
					
					fbSMEMA_OppFirst.bDSRdy			:= fbSigInChk.bSigInValid;
					fbSMEMA_OppFirst.bRdySend		:= p_bRdySend;
					fbSMEMA_OppFirst.bComplSigOn	:= p_bComplSigOn;
					
					fbSMEMA_OppFirst.tTimeOut	:= DINT_TO_TIME(p_diTransferOutTO);
					fbSMEMA_OppFirst(bEn := TRUE);
					
					bTransporting	:= fbSMEMA_OppFirst.bTransporting;
					bConvStart		:= fbSMEMA_OppFirst.bConvStart;
					bConvStop		:= fbSMEMA_OppFirst.bConvStop;
					bDBA			:= fbSMEMA_OppFirst.bSigToDS AND (bTimer = FALSE) AND (bVirtual = FALSE);
					bDBAStat		:= (fbSMEMA_OppFirst.bSigToDS) AND (fSMEMASigStatOut(p_tyParam.bStatSigSetGd, p_bGdBrd)) AND (p_tyParam.eSelection = SMEMASelIPC9851Ext);
					
					bUSRdy			:= fbSMEMA_OppFirst.bSigToDS;
					bUSGdBrdRdy		:= p_bGdBrd;
					
					IF fbSMEMA_OppFirst.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbSMEMA_OppFirst.udiStatus < 65534 THEN
						eStatus		:= Error;
						
						IF fbSMEMA_OppFirst.udiStatus = 1200 THEN
							udiStatus	:= 10004;	//Standard SMEMA Transport Time Out While Transporting
						ELSIF fbSMEMA_OppFirst.udiStatus = 1201 THEN
							udiStatus	:= 10005;	//Standard SMEMA Transport Time Out After Opposite Machine Transport Finished
						ELSIF fbSMEMA_OppFirst.udiStatus = 1202 THEN
							udiStatus	:= 10006;	//Standard SMEMA Transport Time Out After Current Machine Transport Finished
						ELSIF fbSMEMA_OppFirst.udiStatus = 1203 THEN
							udiStatus	:= 10007;	//Standard SMEMA Transport Time Out After Both Machine Transport Finished And Waiting Outlet Sensor
						ELSE
							udiStatus	:= fbSMEMA_OppFirst.udiStatus;
						END_IF
					END_IF
					
				END_IF
				
			END_IF
		
		SMEMAActSetSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_OppFirst(bEn := FALSE);
				fbSMEMA(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bDBA	:= TRUE;
				eStatus	:= Done;
		
			END_IF
		
		SMEMAActSetStatSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_OppFirst(bEn := FALSE);
				fbSMEMA(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bDBAStat	:= TRUE;
				eStatus		:= Done;
		
			END_IF
			
		SMEMAActRstSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_OppFirst(bEn := FALSE);
				fbSMEMA(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bDBA	:= FALSE;
				eStatus	:= Done;
		
			END_IF
		
		SMEMAActRstStatSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_OppFirst(bEn := FALSE);
				fbSMEMA(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bDBAStat	:= FALSE;
				eStatus		:= Done;
		
			END_IF
			
		SMEMAActSetAllSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_OppFirst(bEn := FALSE);
				fbSMEMA(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bDBA		:= TRUE;
				bDBAStat	:= TRUE;
				eStatus		:= Done;
		
			END_IF
		
		SMEMAActRstAllSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_OppFirst(bEn := FALSE);
				fbSMEMA(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bDBA		:= FALSE;
				bDBAStat	:= FALSE;
				eStatus		:= Done;
		
			END_IF
		
	END_CASE
	
END_ACTION
