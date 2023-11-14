
ACTION Act_OptP0700Mask: 
	
	//Mask
	IF p_eLFLeaderStatus = Error THEN
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat));
		
	ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgAll.bRtCompl THEN
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat));
		
	ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.bRtCompl THEN
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat));
		
	ELSIF tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.bRtCompl THEN
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat));
		
	ELSIF tyP0700LFCtrl.tyLdr.tyBtnSyncTm.bRtCompl THEN
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat));
		
	ELSE
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgAll.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqAuto.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnChgSeqMnl.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0700LFCtrl.tyLdr.tyBtnSyncTm.uiMaskRtStat));
		
	END_IF
	
END_ACTION
