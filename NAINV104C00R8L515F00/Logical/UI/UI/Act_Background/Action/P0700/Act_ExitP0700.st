

ACTION Act_ExitP0700: 
	
	IF NOT(tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl OR tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl OR tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl OR tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl) THEN
		bLeaderRun	:= FALSE;
		bLFRunInBG	:= FALSE;
	ELSE
		bLFRunInBG	:= TRUE;
	END_IF
	
	usiChgPage	:= 1;
	
END_ACTION
