(** 2021-04-20 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbSyncTm(bEn := FALSE);
		fbChgAll(bEn := FALSE);
		fbChgSeq(bEn := FALSE);
		
		sStatTxt	:= a_sStatText[eStat];
				
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		LFActIdle:
			eStatus	:= Idle;
		
		LFActBGStartRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				bRun1		:= TRUE;
				bRun2		:= TRUE;
				bStop		:= FALSE;
				bStop1Done	:= FALSE;
				bStop2Done	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
		LFActBGStopRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bStop	:= TRUE;
				
				IF bStop1Done AND bStop2Done THEN
				
					bRun1		:= FALSE;
					bRun2		:= FALSE;
					bStop		:= FALSE;
					bStop1Done	:= FALSE;
					bStop2Done	:= FALSE;
					eStatus		:= Done;
					
				END_IF
				
			END_IF
		
		LFActSyncPLCTm:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				IF bRun1 AND bRun2 THEN
					eStatus	:= Busy;
				
					fbSyncTm.dtCurrDT		:= p_dtCurrDT;
					fbSyncTm.diMcNum		:= diMcNum;
					fbSyncTm(bEn := TRUE);
					
					IF fbSyncTm.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbSyncTm.udiStatus < 65534 THEN
						eStatus		:= Error;
						udiStatus	:= fbSyncTm.udiStatus;
					END_IF
					
				ELSE
					eStatus		:= Error;
					udiStatus	:= 10000;	//Background Not Running While Calling Sync PLC Tm
				END_IF
				
			END_IF
		
		LFActChgAllAuto:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				IF bRun1 AND bRun2 THEN
					eStatus	:= Busy;
					
					fbChgAll.bChgAuto					:= TRUE;
					fbChgAll.a_bOnline					:= pa_bLFOnline;;
					fbChgAll.a_tyFollowerToLeaderTag	:= a_tyFollowerToLeaderTag;
					fbChgAll.sReqProdRcpNm				:= p_sReqProdRcpNm;
					fbChgAll.diReqProdRcpWidth			:= p_diReqProdWidth;
					fbChgAll.sReqMagRcpNm				:= p_sReqMagRcpNm;
					fbChgAll.diMcNum					:= diMcNum;
					fbChgAll(bEn := TRUE);
					
					IF fbChgAll.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbChgAll.udiStatus < 65534 THEN
						eStatus		:= Error;
						udiStatus	:= fbChgAll.udiStatus;
					END_IF
					
				ELSE
					eStatus		:= Error;
					udiStatus	:= 10001;	//Background Not Running While Changing All Recipe Automatically
				END_IF
				
			END_IF
		
		LFActChgAllMnl:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				IF bRun1 AND bRun2 THEN
					eStatus	:= Busy;
					
					fbChgAll.bChgAuto					:= FALSE;
					fbChgAll.a_bOnline					:= pa_bLFOnline;
					fbChgAll.a_tyFollowerToLeaderTag	:= a_tyFollowerToLeaderTag;
					fbChgAll.sReqProdRcpNm				:= p_sReqProdRcpNm;
					fbChgAll.diReqProdRcpWidth			:= p_diReqProdWidth;
					fbChgAll.sReqMagRcpNm				:= p_sReqMagRcpNm;
					fbChgAll.diMcNum					:= diMcNum;
					fbChgAll(bEn := TRUE);
					
					IF fbChgAll.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbChgAll.udiStatus < 65534 THEN
						eStatus		:= Error;
						udiStatus	:= fbChgAll.udiStatus;
					END_IF
					
				ELSE
					eStatus		:= Error;
					udiStatus	:= 10002;	//Background Not Running While Changing All Recipe Manually
				END_IF
				
			END_IF
		
		LFActChgSeqAuto:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				IF bRun1 AND bRun2 THEN
					eStatus	:= Busy;
					
					fbChgSeq.bChgAuto					:= TRUE;
					fbChgSeq.a_bOnline					:= pa_bLFOnline;;
					fbChgSeq.a_tyFollowerToLeaderTag	:= a_tyFollowerToLeaderTag;
					fbChgSeq.sReqProdRcpNm				:= p_sReqProdRcpNm;
					fbChgSeq.diReqProdRcpWidth			:= p_diReqProdWidth;
					fbChgSeq.sReqMagRcpNm				:= p_sReqMagRcpNm;
					fbChgSeq.diMcNum					:= diMcNum;
					fbChgSeq(bEn := TRUE);
					
					IF fbChgSeq.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbChgSeq.udiStatus < 65534 THEN
						eStatus		:= Error;
						udiStatus	:= fbChgSeq.udiStatus;
					END_IF
					
				ELSE
					eStatus		:= Error;
					udiStatus	:= 10003;	//Background Not Running While Changing Recipe In Sequence Automatically
				END_IF
				
			END_IF
		
		LFActChgSeqMnl:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				IF bRun1 AND bRun2 THEN
					eStatus	:= Busy;
					
					fbChgSeq.bChgAuto					:= FALSE;
					fbChgSeq.a_bOnline					:= pa_bLFOnline;;
					fbChgSeq.a_tyFollowerToLeaderTag	:= a_tyFollowerToLeaderTag;
					fbChgSeq.sReqProdRcpNm				:= p_sReqProdRcpNm;
					fbChgSeq.diReqProdRcpWidth			:= p_diReqProdWidth;
					fbChgSeq.sReqMagRcpNm				:= p_sReqMagRcpNm;
					fbChgSeq.diMcNum					:= diMcNum;
					fbChgSeq(bEn := TRUE);
					
					IF fbChgSeq.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbChgSeq.udiStatus < 65534 THEN
						eStatus		:= Error;
						udiStatus	:= fbChgSeq.udiStatus;
					END_IF
					
				ELSE
					eStatus		:= Error;
					udiStatus	:= 10004;	//Background Not Running While Changing Recipe In Sequence Manually
				END_IF
				
			END_IF
		
	END_CASE
	
END_ACTION
