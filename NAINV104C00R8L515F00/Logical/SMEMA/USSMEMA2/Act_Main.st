(** 2019-03-22 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbSMEMA_Std(bEn := FALSE);
		fbSMEMA_9851(bEn := FALSE);
			
		bTransporting	:= FALSE;
		bConvStart		:= FALSE;
		bConvStop		:= FALSE;
		bDSRdy			:= FALSE;
			
		IF eStatOld <> SMEMAActIdle
			AND eStatOld <> SMEMAActSetSig
			AND eStatOld <> SMEMAActSetStatSig
			AND eStatOld <> SMEMAActRstSig
			AND eStatOld <> SMEMAActRstStatSig
			AND eStatOld <> SMEMAActSetAllSig
			AND eStatOld <> SMEMAActRstAllSig THEN
			
			bUSB	:= FALSE;
			
		END_IF
			
		sStatTxt	:= a_sStatText[eStat];
				
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		SMEMAActIdle:
			IF EDGENEG(p_bManual) THEN
				bUSB	:= FALSE;
			END_IF
			
			eStatus	:= Idle;
		
		SMEMAActRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				IF p_tyParam.eSelection <> SMEMASelStandard THEN
					
					fbSMEMA_9851.bUSRdy			:= fbSigInChk.bSigInValid;
					fbSMEMA_9851.bRdyRcv		:= p_bRdyRcv;
					fbSMEMA_9851.bComplSigOn	:= p_bComplSigOn;
					
					IF p_bDirLToR = TRUE THEN
						
						fbSMEMA_9851.bInletSen		:= p_bLeftSen;
						fbSMEMA_9851.bOutletSen		:= p_bRightSen;
						
					ELSE
						
						fbSMEMA_9851.bInletSen		:= p_bRightSen;
						fbSMEMA_9851.bOutletSen		:= p_bLeftSen;
						
					END_IF
					
					fbSMEMA_9851.tTimeOut	:= DINT_TO_TIME(p_diTransferInTO);
					fbSMEMA_9851(bEn := TRUE);
					
					bTransporting	:= fbSMEMA_9851.bTransporting;
					bConvStart		:= fbSMEMA_9851.bConvStart;
					bConvStop		:= fbSMEMA_9851.bConvStop;
					bUSB			:= fbSMEMA_9851.bSigToUS AND (bTimer = FALSE) AND (bVirtual = FALSE);
					bDSRdy			:= fbSMEMA_9851.bSigToUS;
					
					IF fbSMEMA_9851.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbSMEMA_9851.udiStatus < 65534 THEN
						eStatus		:= Error;
						
						IF fbSMEMA_9851.udiStatus = 1200 THEN
							udiStatus	:= 10000;	//SMEMA 9851 Transport Time Out While Transporting
						ELSIF fbSMEMA_9851.udiStatus = 1201 THEN
							udiStatus	:= 10001;	//SMEMA 9851 Transport Time Out After Opposite Machine Transport Finished
						ELSIF fbSMEMA_9851.udiStatus = 1202 THEN
							udiStatus	:= 10002;	//SMEMA 9851 Transport Time Out After Current Machine Transport Finished
						ELSIF fbSMEMA_9851.udiStatus = 1203 THEN
							udiStatus	:= 10003;	//SMEMA 9851 Transport Time Out After Both Machine Transport Finished And Waiting Outlet Sensor
						ELSE
							udiStatus	:= fbSMEMA_9851.udiStatus;
						END_IF
					END_IF
					
				ELSE
					
					fbSMEMA_Std.bUSRdy		:= fbSigInChk.bSigInValid;
					fbSMEMA_Std.bRdyRcv		:= p_bRdyRcv;
					fbSMEMA_Std.bComplSigOn	:= p_bComplSigOn;
					
					IF p_bDirLToR = TRUE THEN
						
						fbSMEMA_Std.bInletSen	:= p_bLeftSen;
						fbSMEMA_Std.bOutletSen	:= p_bRightSen;
						
					ELSE
						
						fbSMEMA_Std.bInletSen	:= p_bRightSen;
						fbSMEMA_Std.bOutletSen	:= p_bLeftSen;
						
					END_IF
					
					fbSMEMA_Std.tTimeOut	:= DINT_TO_TIME(p_diTransferInTO);
					fbSMEMA_Std(bEn := TRUE);
					
					bTransporting	:= fbSMEMA_Std.bTransporting;
					bConvStart		:= fbSMEMA_Std.bConvStart;
					bConvStop		:= fbSMEMA_Std.bConvStop;
					bUSB			:= fbSMEMA_Std.bSigToUS AND (bTimer = FALSE) AND (bVirtual = FALSE);
					bDSRdy			:= fbSMEMA_Std.bSigToUS;
					
					IF fbSMEMA_Std.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbSMEMA_Std.udiStatus < 65534 THEN
						eStatus		:= Error;
						
						IF fbSMEMA_Std.udiStatus = 1200 THEN
							udiStatus	:= 10004;	//Standard SMEMA Transport Time Out While Transporting
						ELSIF fbSMEMA_Std.udiStatus = 1201 THEN
							udiStatus	:= 10005;	//Standard SMEMA Transport Time Out After Opposite Machine Transport Finished
						ELSIF fbSMEMA_Std.udiStatus = 1202 THEN
							udiStatus	:= 10006;	//Standard SMEMA Transport Time Out After Current Machine Transport Finished
						ELSIF fbSMEMA_Std.udiStatus = 1203 THEN
							udiStatus	:= 10007;	//Standard SMEMA Transport Time Out After Both Machine Transport Finished And Waiting Outlet Sensor
						ELSE
							udiStatus	:= fbSMEMA_Std.udiStatus;
						END_IF
					END_IF
					
				END_IF
				
			END_IF
		
		SMEMAActSetSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_Std(bEn := FALSE);
				fbSMEMA_9851(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bUSB	:= TRUE;
				eStatus	:= Done;
		
			END_IF
		
		SMEMAActSetStatSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_Std(bEn := FALSE);
				fbSMEMA_9851(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				eStatus	:= Done;
		
			END_IF
			
		SMEMAActRstSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_Std(bEn := FALSE);
				fbSMEMA_9851(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bUSB	:= FALSE;
				eStatus	:= Done;
		
			END_IF
		
		SMEMAActRstStatSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_Std(bEn := FALSE);
				fbSMEMA_9851(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				eStatus	:= Done;
		
			END_IF
			
		SMEMAActSetAllSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_Std(bEn := FALSE);
				fbSMEMA_9851(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bUSB	:= TRUE;
				eStatus	:= Done;
		
			END_IF
		
		SMEMAActRstAllSig:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbSMEMA_Std(bEn := FALSE);
				fbSMEMA_9851(bEn := FALSE);
				
				bConvStart	:= FALSE;
				bConvStop	:= FALSE;
				
				bUSB	:= FALSE;
				eStatus	:= Done;
		
			END_IF
		
	END_CASE
	
END_ACTION
