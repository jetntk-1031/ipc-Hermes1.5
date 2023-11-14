(** 2019-06-27 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Physical Configuration
	bAutoUpdtData	:= TRUE;
	bInternalUse	:= TRUE;
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_Follower1Status	:= ADR(eStatus);
	
	//Alarm
	p_Follower1AlmData			:= ADR(tyAlmData);
	p_Follower1InfoData			:= ADR(tyInfoData);
	p_Follower1InfoData1		:= ADR(tyInfoData1);
	
	//Output
	p_Follower1USAllow			:= ADR(bUSAllow);
	p_Follower1DSAllow			:= ADR(bDSAllow);
	p_Follower1ProdAccDataMnl	:= ADR(bProdAccDataMnl);
	p_Follower1ProdUpdtDataMnl	:= ADR(bProdUpdtDataMnl);
	p_Follower1MagAccDataMnl	:= ADR(bMagAccDataMnl);
	p_Follower1TimeAct			:= ADR(eTimeAct);
	p_Follower1SetDT			:= ADR(tyLeaderToFollowerTag.dtTm);
	p_Follower1WaitRlsBrd		:= ADR(bWaitRlsBrd);
	p_Follower1UpdtProdRcp		:= ADR(tyUpdtProdRcp);
	
	(* Always Change If Project Change *)
	
END_PROGRAM
