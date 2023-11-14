(** 2020-08-06 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Physical Configuration
	bAutoUpdtData	:= TRUE;
	bInternalUse	:= FALSE;
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_LFFollowerStatus	:= ADR(eStatus);
	
	//Alarm
	p_LFFollowerAlmData		:= ADR(tyAlmData);
	p_LFFollowerInfoData	:= ADR(tyInfoData);
	p_LFFollowerInfoData1	:= ADR(tyInfoData1);
	
	//Output
	p_LFFollowerUSAllow			:= ADR(bUSAllow);
	p_LFFollowerDSAllow			:= ADR(bDSAllow);
	p_LFFollowerProdAccDataMnl	:= ADR(bProdAccDataMnl);
	p_LFFollowerProdUpdtDataMnl	:= ADR(bProdUpdtDataMnl);
	p_LFFollowerMagAccDataMnl	:= ADR(bMagAccDataMnl);
	p_LFFollowerTimeAct			:= ADR(eTimeAct);
	p_LFFollowerSetDT			:= ADR(tyLeaderToFollowerTag.dtTm);
	p_LFFollowerWaitRlsBrd		:= ADR(bWaitRlsBrd);
	p_LFFollowerUpdtProdRcp		:= ADR(tyUpdtProdRcp);
	p_LFFollowerLdrSeqCtrlInActive	:= ADR(bLeaderSeqCtrlInActive);
	
	(* Always Change If Project Change *)
	
END_PROGRAM
