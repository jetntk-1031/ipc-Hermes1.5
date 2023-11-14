
ACTION Act_OptP1022DisLF:
	
	IF tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue=FALSE OR (tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue AND tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue=FALSE) THEN		
		IF bLFRunInBG THEN
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
			
			bLFRunInBG	:= FALSE;
			
		END_IF		
	END_IF
		
END_ACTION