
ACTION Act_OptP0700LFLeaderCtrl:
	
	CASE usiLFLeaderCtrlStep OF
		0:	//Confirmation Message - Execute Ask
			IF tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl THEN
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxChgAllAsk);
				
				IF tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnYes.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue		:= TRUE;
					
					usiLFLeaderCtrlStep	:= 2;
					
				ELSIF tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP0700LFCtrl.tyMsgBoxChgAllAsk.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue		:= FALSE;
					tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl	:= FALSE;
					
				END_IF
				
			ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl THEN
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk);
				
				IF tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnYes.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue		:= TRUE;
					
					usiLFLeaderCtrlStep	:= 2;
					
				ELSIF tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP0700LFCtrl.tyMsgBoxChgSeqAutoAsk.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue		:= FALSE;
					tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl	:= FALSE;
					
				END_IF
				
			ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl THEN
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk);
				
				IF tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnYes.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue	:= TRUE;
					
					usiLFLeaderCtrlStep	:= 2;
					
				ELSIF tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnNo.bRtCompl		:= FALSE;
					tyP0700LFCtrl.tyMsgBoxChgSeqMnlAsk.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue	:= FALSE;
					tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl	:= FALSE;
					
				END_IF
				
			ELSIF tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl THEN
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk);
				
				IF tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnYes.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue		:= TRUE;
					
					usiLFLeaderCtrlStep	:= 2;
					
				ELSIF tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnNo.bRtCompl		:= FALSE;
					tyP0700LFCtrl.tyMsgBoxSyncPLCTmAsk.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
					
					tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue		:= FALSE;
					tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl	:= FALSE;
					
				END_IF
				
			END_IF
			
		1:	//Confirmation Message - Terminate Ask
			p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk);
			
			IF tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnYes.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
				
				usiLFLeaderCtrlStep	:= 3;
				
			ELSIF tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP0700LFCtrl.tyMsgBoxTerminateOpsAsk.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
				
				tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue		:= tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl;
				tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue	:= tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl;
				tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue	:= tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl;
				tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue		:= tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl;
				
				usiLFLeaderCtrlStep	:= 2;
				
			END_IF
			
			//Display
			tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx		:= BOOL_TO_USINT(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl);
			tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx	:= BOOL_TO_USINT(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl);
			tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx	:= BOOL_TO_USINT(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl);
			tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx		:= BOOL_TO_USINT(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl);
			
		2:	//Processing
			IF tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl THEN
				eLFLeaderAct	:= LFActChgAllAuto;
				
				IF p_eLFLeaderStat = LFActChgAllAuto AND (p_eLFLeaderStatus = Done OR p_eLFLeaderStatus = Error) THEN
					usiLFLeaderCtrlStep	:= 3;
				ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue = FALSE THEN
					usiLFLeaderCtrlStep	:= 1;
				END_IF
				
			ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl THEN
				eLFLeaderAct	:= LFActChgSeqAuto;
				
				IF p_eLFLeaderStat = LFActChgSeqAuto AND (p_eLFLeaderStatus = Done OR p_eLFLeaderStatus = Error) THEN
					usiLFLeaderCtrlStep	:= 3;
				ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue = FALSE THEN
					usiLFLeaderCtrlStep	:= 1;
				END_IF			
				
			ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl THEN
				eLFLeaderAct	:= LFActChgSeqMnl;
				
				IF p_eLFLeaderStat = LFActChgSeqMnl AND (p_eLFLeaderStatus = Done OR p_eLFLeaderStatus = Error) THEN
					usiLFLeaderCtrlStep	:= 3;
				ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue = FALSE THEN
					usiLFLeaderCtrlStep	:= 1;
				END_IF

			ELSIF tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl THEN
				eLFLeaderAct	:= LFActSyncPLCTm;
				
				IF p_eLFLeaderStat = LFActSyncPLCTm AND (p_eLFLeaderStatus = Done OR p_eLFLeaderStatus = Error) THEN
					usiLFLeaderCtrlStep	:= 3;
				ELSIF tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue = FALSE THEN
					usiLFLeaderCtrlStep	:= 1;
				END_IF
				
			END_IF
			
			//Display
			fbLFLeaderCtrlBlinkTm(IN := TRUE);
			IF fbLFLeaderCtrlBlinkTm.Q = TRUE THEN
				fbLFLeaderCtrlBlinkTm(IN := FALSE);
				
				tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx		:= BOOL_TO_USINT(USINT_TO_BOOL(tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx) XOR tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl);
				tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx	:= BOOL_TO_USINT(USINT_TO_BOOL(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx) XOR tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl);
				tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx	:= BOOL_TO_USINT(USINT_TO_BOOL(tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx) XOR tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl);
				tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx		:= BOOL_TO_USINT(USINT_TO_BOOL(tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx) XOR tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl);
			END_IF
			
		3:	//Complete Reset
			usiLFLeaderCtrlStep	:= 0;
			
			eLFLeaderAct	:= LFActIdle;
			
			fbLFLeaderCtrlBlinkTm(IN := FALSE);
			
			tyP0700LFCtrl.tyLdr.tyBitmapChgAll.usiValueIdx		:= 0;
			tyP0700LFCtrl.tyLdr.tyBitmapChgSeqAuto.usiValueIdx	:= 0;
			tyP0700LFCtrl.tyLdr.tyBitmapChgSeqMnl.usiValueIdx	:= 0;
			tyP0700LFCtrl.tyLdr.tyBitmapSyncTm.usiValueIdx		:= 0;
			
			tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl			:= FALSE;
			tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl		:= FALSE;
			tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl			:= FALSE;
			tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl			:= FALSE;
			
			tyP0700LFCtrl.tyLdr.tyBtnChgAll.bValue				:= FALSE;
			tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bValue			:= FALSE;
			tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bValue			:= FALSE;
			tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bValue				:= FALSE;
		
		4: 
			p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxErrorAsk);
			
			IF tyP0700LFCtrl.tyMsgBoxErrorAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP0700LFCtrl.tyMsgBoxErrorAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP0700LFCtrl.tyMsgBoxErrorAsk.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
				
				usiLFLeaderCtrlStep	:= 3;
				
			END_IF
			
	END_CASE
	
END_ACTION
