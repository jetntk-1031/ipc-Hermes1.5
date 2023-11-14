(** 2021-05-18 **)
ACTION Act_Background:
	
	IF p_bInternalUse = TRUE THEN
		tyLeaderToFollowerTag.sReqProdRcpNm		:= p_tyInternalReqProdRcp.sRcpNm;
		IF p_bWidth2Prep THEN
			tyLeaderToFollowerTag.diReqProdRcpWidth	:= p_tyInternalReqProdRcp.diWidthInUM2;
		ELSE
			tyLeaderToFollowerTag.diReqProdRcpWidth	:= p_tyInternalReqProdRcp.diWidthInUM;
		END_IF
		tyLeaderToFollowerTag.sReqMagRcpNm		:= '';
		tyLeaderToFollowerTag.bMnlAccData		:= FALSE;
		tyLeaderToFollowerTag.bBypassMnlAccData	:= FALSE;
		tyLeaderToFollowerTag.bBlkDS			:= FALSE;
		tyLeaderToFollowerTag.bBlkUS			:= FALSE;
		tyLeaderToFollowerTag.bBypassWidthChk	:= TRUE;
		tyLeaderToFollowerTag.bSetTm			:= FALSE;
		tyLeaderToFollowerTag.dtTm				:= 0;
		tyLeaderToFollowerTag.uiTmZone			:= 0;
		tyLeaderToFollowerTag.usiRunTm			:= 0;
		tyLeaderToFollowerTag.bProdNameUSWarn	:= FALSE;
		tyLeaderToFollowerTag.bProdNameDSWarn	:= FALSE;
		tyLeaderToFollowerTag.bProdWidthUSWarn	:= FALSE;
		tyLeaderToFollowerTag.bProdWidthDSWarn	:= FALSE;
		tyLeaderToFollowerTag.bLeaderSeqCtrlInActive	:= FALSE;
	END_IF
	
	Act_Background_UpdtData;
	
	//FB
	fbFollower.tyLeaderToFollowerTag	:= tyLeaderToFollowerTag;
	fbFollower.sMcNm					:= p_sMcNm;
	fbFollower.sIPAddr					:= p_sIPAddr;
	fbFollower.bSectionLeader			:= p_bSectionLeader;
	fbFollower.sCurrProdRcpNm			:= p_tyCurrProdRcp.sRcpNm;
	fbFollower.diCurrProdWidthUS		:= p_tyCurrProdRcp.diWidthInUM;
	fbFollower.diCurrProdWidthDS		:= p_tyCurrProdRcp.diWidthInUM2;
	fbFollower.sCurrMagRcpNm			:= p_sCurrMagRcpNm;
	fbFollower.sUpdtLeaderProdRcpNm		:= p_tyToLeaderProdRcp.sRcpNm;
	fbFollower.diUpdtLeaderProdWidthUS	:= p_tyToLeaderProdRcp.diWidthInUM;
	fbFollower.diUpdtLeaderProdWidthDS	:= p_tyToLeaderProdRcp.diWidthInUM2;
	fbFollower.sUpdtLeaderMagRcpNm		:= p_sMagRcpNm;
	fbFollower.bMnlAccDat				:= p_bMnlAccData;
	fbFollower.bAWEn					:= (p_bAWPrep = TRUE) AND (p_bAWDis = FALSE);
	fbFollower.bUSWidthChkEn			:= p_bUSWidthChkPrep AND p_bUSWidthChkEn;
	fbFollower.bUSWidthChkSen			:= p_bUSWidthChkSen;
	fbFollower.bDSWidthChkEn			:= p_bDSWidthChkPrep AND p_bDSWidthChkEn;
	fbFollower.bDSWidthChkSen			:= p_bDSWidthChkSen;
	fbFollower.bProdWidthChk			:= p_bProdWidthChk;
	fbFollower.bProdRcpErr				:= bProdRcpErr;
	fbFollower.bMagRcpErr				:= bMagRcpErr;
	fbFollower.bSetTmErr				:= bSetTmErr;
	fbFollower.eCurrMachineStat			:= eCurrMachineStat;
	fbFollower.bProdChgOverActive		:= (p_eAWStat = AWActGoWidthOff);
	fbFollower.bDBAOnWOAlign			:= p_bDBAOnWOAlign;

	fbFollower(bEn := TRUE);
	
	tyFollowerToLeaderTag	:= fbFollower.tyFollowerToLeaderTag;
	bProdAccDataReq			:= fbFollower.bProdAccDataReq OR (p_bInternalReqProdRcpDiff = TRUE) ;
	bMagAccDataReq			:= fbFollower.bMagAccDataReq;
	bAutoAccData			:= fbFollower.bAutoAccData;

	IF p_bInternalUse THEN
		bLeaderOnline			:= TRUE;
	ELSE
		bLeaderOnline			:= tyLeaderInfo.bOnline;
	END_IF
	
	IF bLeaderOnline=FALSE THEN
		bUSAllow				:= TRUE;
		bDSAllow				:= TRUE;
		bLeaderSeqCtrlInActive	:= FALSE;
	ELSE
		bUSAllow				:= fbFollower.bUSAllow AND (p_bInternalReqProdRcpDiff = FALSE);
		bDSAllow				:= fbFollower.bDSAllow;
		bLeaderSeqCtrlInActive	:= tyLeaderToFollowerTag.bLeaderSeqCtrlInActive;
	END_IF
		
	fbOnlineChk.tyLeaderToFollowerTag	:= tyLeaderToFollowerTag;
	fbOnlineChk(bEn := TRUE);
	
	Act_Background_AccData;
	Act_Background_ChkRlsBrd;		
	
	//Set Time
	IF EDGEPOS(tyLeaderToFollowerTag.bSetTm) THEN
		bSetTm	:= TRUE;
	END_IF
	
	IF bSetTm = TRUE THEN
		eTimeAct	:= TimeActSetTime;
		
		IF (p_eTimeStat = TimeActSetTime) AND (p_eTimeStatus = Done) THEN
			eTimeAct		:= TimeActIdle;
			bSetTm			:= FALSE;
		ELSIF p_eTimeStatus = Error THEN
			eTimeAct		:= TimeActIdle;
			bSetTm			:= FALSE;
		END_IF
	END_IF
	
	bSetTmErr	:= p_eTimeStatus = Error;
	
	IF (eStatus = Error) AND bRstErr THEN
		eStatus		:= Idle;
		udiStatus	:= 0;
		bProdRcpErr	:= FALSE;
		bProdRcpErrNotExist	:= FALSE;
		bProdRcpErrWidthMismatch:= FALSE;	
		bMagRcpErr	:= FALSE;
	END_IF
	
END_ACTION
