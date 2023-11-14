
ACTION Act_OptP0934RstMnl:

	IF EDGEPOS((bManualMod = FALSE) OR (p_eAWOpenStatus = Error)) THEN
		
		eAWOpenAct	:= AWActIdle;
		
		bJogSlow					:= FALSE;
		bJogFast					:= FALSE;
		fbJogSlowToFastDlyTm.IN		:= FALSE;
		
		tyP0934AW.tyAW.tyBtnGo.bRtCompl					:= FALSE;
		tyP0934AW.tyAW.tyBtnGo.bValue					:= FALSE;
		tyP0934AW.tyAW.tyBtnGo.bRtLk					:= FALSE;
		tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat.0			:= FALSE;
		
		tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnStop.bRtCompl			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnRst.bRtCompl				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl		:= FALSE;
			
		tyP0934AW.tyMotionStd.tyBtnPwr.bValue				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnStop.bValue				:= TRUE;
		tyP0934AW.tyMotionStd.tyBtnOrigin.bValue			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnRst.bValue				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovAbs.bValue			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovRel.bValue			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogClose.bValue			:= FALSE;
				
		tyP0934AW.tyMotionStd.tyBtnPwr.bRtLk				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnStop.bRtLk				:= TRUE;
		tyP0934AW.tyMotionStd.tyBtnOrigin.bRtLk				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnRst.bRtLk				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtLk				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovRel.bRtLk				:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtLk			:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogClose.bRtLk			:= FALSE;
		
		tyP0934AW.tyMotionStd.tyBtnPwr.uiMaskRtStat			:= TRUE;
		tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat		:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnRst.uiMaskRtStat			:= TRUE;
		tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat		:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat		:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat		:= FALSE;
		tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat	:= FALSE;
		
	END_IF	
	
END_ACTION
