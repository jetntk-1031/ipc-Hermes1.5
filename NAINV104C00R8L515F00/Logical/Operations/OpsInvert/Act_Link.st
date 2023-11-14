(** 2018-12-11 **)
ACTION Act_Link:
	//test
	p_bAWWidthPosDiff ACCESS ADR(btest);
	// ADD Go to Standby
	p_bGoToStandby	:= (p_bLinkUIBypsCoverSWPress1 AND p_bUnlockCovPrep) OR ((p_bLinkDIUnlockCoverSigFromDS = TRUE OR p_bLinkDIUnlockCoverSigFromUS = TRUE) AND p_bMachineSafetyPrep) ;
	
	IF p_bRun = TRUE AND EDGEPOS(p_bLinkDICoverSwitchSig2) THEN	// ADD
		eGotoOpsStep	:=	InvertStepInitChkCondition;			
	END_IF		
	
	//Upstream Allow
	p_bUSAllow		:= p_bLinkFollower1USAllow AND (p_bLinkUSHermesBlkUS = FALSE OR p_bLinkUSHermes2BlkUS = FALSE) AND p_bLinkLFFollowerUSAllow AND (p_bGoToStandby = FALSE);
	
	p_bRtrnUSAllow	:= p_bLinkFollower1USAllow AND p_bLinkUSHermesBlkUS = FALSE AND p_bLinkLFFollowerUSAllow AND (p_bGoToStandby = FALSE) AND (p_bLinkUIRtnBrdResetBtn = FALSE AND p_bLinkUIRtnBrdReset = FALSE);
	
	//Downstream Allow
	p_bDSAllow		:= p_bLinkFollower1DSAllow AND (NOT p_bLinkFollower1WaitRlsBrd)AND p_bLinkLFFollowerDSAllow;
	
	p_bRtrnDSAllow 	:= p_bLinkFollower1DSAllow AND (NOT p_bLinkFollower1WaitRlsBrd)AND p_bLinkLFFollowerDSAllow;
	
	//Update Request Invert Position
	IF p_usiLinkProdRcpCurrRcpMcMod = 0 THEN
		IF eInvertCurrPos <> InvertPosInvalid THEN
			eInvertReqPos	:= eInvertCurrPos;
		END_IF
	ELSIF p_usiLinkProdRcpCurrRcpMcMod = 1 THEN //Inverter Mode
		IF bStepEntToInOff = TRUE AND p_bLinkConvHvBrd = TRUE THEN
			eInvertReqPos	:= InvertCurrPosAtHome;
		ELSIF bStepEntToEnd = TRUE AND p_bLinkConvHvBrd = TRUE THEN
			eInvertReqPos	:= InvertCurrPosAtRemote;
		END_IF
		
	ELSIF p_usiLinkProdRcpCurrRcpMcMod = 2 THEN // Invert Once Mode
		
		IF bInvOnceTwicePCBOut = FALSE THEN
			IF eInvertCurrPos <> InvertPosInvalid THEN
				eInvertReqPos	:= eInvertCurrPos;
			END_IF
		ELSE
			IF bStepInvRtrnEntToEnd = TRUE AND p_bLinkConvHvBrd = TRUE THEN
				eInvertReqPos	:= InvertCurrPosAtHome;
			ELSIF bStepInvRtrnEntToInOff = TRUE AND p_bLinkConvHvBrd = TRUE THEN
				eInvertReqPos	:= InvertCurrPosAtRemote;
			END_IF
		END_IF
		
	ELSIF p_usiLinkProdRcpCurrRcpMcMod = 3 THEN // Invert Twice Mode
		IF bStepEntToInOff = TRUE AND p_bLinkConvHvBrd = TRUE AND bInvOnceTwicePCBOut = FALSE THEN
			eInvertReqPos	:= InvertCurrPosAtHome;
		ELSIF bStepEntToEnd = TRUE AND p_bLinkConvHvBrd = TRUE AND bInvOnceTwicePCBOut = FALSE THEN
			eInvertReqPos	:= InvertCurrPosAtRemote;
		ELSIF bStepInvRtrnEntToEnd = TRUE AND p_bLinkConvHvBrd = TRUE AND bInvOnceTwicePCBOut = TRUE THEN
			eInvertReqPos	:=  InvertCurrPosAtHome;
		ELSIF bStepInvRtrnEntToInOff = TRUE AND p_bLinkConvHvBrd = TRUE AND bInvOnceTwicePCBOut = TRUE THEN
			eInvertReqPos	:=  InvertCurrPosAtRemote;
		END_IF
	ELSIF p_usiLinkProdRcpCurrRcpMcMod = 4 THEN  
	//	bReversalTransport 
		IF NOT(p_iHermesAction = 1) THEN 
			IF eInvertCurrPos <> InvertPosInvalid THEN //as a bypass
				eInvertReqPos	:= eInvertCurrPos;
			END_IF
		ELSE //when action = 1 
			IF bStepEntToInOff = TRUE  AND p_bUSReversal = FALSE AND EDGEPOS(p_bLinkConvHvBrd)  THEN
				eInvertReqPos	:= InvertCurrPosAtHome;
			ELSIF bStepEntToEnd = TRUE  AND p_bUSReversal = FALSE AND EDGEPOS(p_bLinkConvHvBrd) THEN
				eInvertReqPos	:= InvertCurrPosAtRemote;
			ELSIF bStepEntToEnd = TRUE AND p_bUSReversal = TRUE AND EDGEPOS(p_bLinkConvHvBrd)  THEN //enter from Rear US
				eInvertReqPos	:=  InvertCurrPosAtHome;
			ELSIF bStepEntToInOff = TRUE AND p_bUSReversal = TRUE AND EDGEPOS(p_bLinkConvHvBrd)  THEN 
				eInvertReqPos	:=  InvertCurrPosAtRemote;
			END_IF
		END_IF
	END_IF	
	
	IF p_bUSReversal THEN
		p_bUSHermesTransporting ACCESS p_USHermes2Transporting;
		p_bUSHermesStopTransport ACCESS p_USHermes2StopTransport;
	ELSE
		p_bUSHermesTransporting ACCESS p_USHermesTransporting;
		p_bUSHermesStopTransport ACCESS p_USHermesStopTransport;
	END_IF	
	bReverseStoppingPos := p_bHermesEntToReversePosition; // XOR p_bUSReversal;
	
	//Update Current Invert Position
	IF p_bLinkInvertHomeSen = TRUE AND p_bLinkInvertRemoteSen = FALSE THEN
		eInvertCurrPos	:= InvertCurrPosAtHome;
	ELSIF p_bLinkInvertHomeSen = FALSE AND p_bLinkInvertRemoteSen = TRUE THEN
		eInvertCurrPos	:= InvertCurrPosAtRemote;
	ELSE
		eInvertCurrPos	:= InvertPosInvalid;
	END_IF	
		
	//Update Invert Complete
	bInvertCompl	:= (eInvertCurrPos = eInvertReqPos) AND (eInvertReqPos <> InvertPosInvalid);
	
	//Update Pneumatic when change rcp prompt externally (leader follower change recipe)
	IF p_bRun THEN
		IF p_usiLinkProdRcpCurrRcpMcMod = 0 THEN
			bChangeInvertExtPneu	:= TRUE;
		ELSIF p_usiLinkProdRcpCurrRcpMcMod = 1 THEN
			bChangeBypassRetPneu	:= TRUE;
		END_IF
	END_IF
	
	IF bChangeBypassRetPneu AND p_usiLinkProdRcpCurrRcpMcMod = 0 AND eOpsStep>=InvertStepUSCommTmr THEN
		eStopperAct		:= PneuActRet;
		eOutletShutterAct:= PneuActRet;
		
		IF (p_eStopperStatus = Done AND p_eStopperStat = PneuActRet) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActRet)   THEN
			eStopperAct			:= PneuActIdle;	
			eOutletShutterAct	:= PneuActIdle;	
			bChangeBypassRetPneu:= FALSE;
		END_IF
	END_IF
	
	IF bChangeInvertExtPneu  AND  p_usiLinkProdRcpCurrRcpMcMod = 1  AND eOpsStep>=InvertStepUSCommTmr THEN
		
		IF eInvertCurrPos= InvertCurrPosAtHome THEN
			eStopperAct			:= PneuActExt;
			eOutletShutterAct	:= PneuActExt;
	
			IF (p_eStopperStatus = Done AND p_eStopperStat = PneuActExt) AND (p_eOutletShutterStatus = Done AND p_eOutletShutterStat = PneuActExt)   THEN
				eStopperAct			:= PneuActIdle;	
				eOutletShutterAct	:= PneuActIdle;	
				bChangeInvertExtPneu:= FALSE;
			END_IF	
		ELSE
			bChangeInvertExtPneu:= FALSE;
		END_IF
	END_IF

	// Board In Memory from Upstream 1 for Invert One and Twice Mode
	IF (p_usiLinkProdRcpCurrRcpMcMod = 2 OR p_usiLinkProdRcpCurrRcpMcMod = 3) AND eOpsStep>InvertStepUSCommTmr AND bHvBrd AND bInvOnceTwicePCBOut = FALSE THEN
		bBoardInFromUS1	:= TRUE;
	ELSIF (p_usiLinkProdRcpCurrRcpMcMod = 2 OR p_usiLinkProdRcpCurrRcpMcMod = 3) AND bInvOnceTwicePCBOut THEN		
		bBoardInFromUS1 := FALSE;	
	END_IF
		
	//Reset Return Board from Reset Buttom
	IF p_bLinkUIRtnBrdReset  THEN 
		bInvOnceTwicePCBOut := FALSE;
	END_IF
	
	//Waiting Return Board Status
	IF bInvOnceTwicePCBOut AND bStepInvRtrnUSCommTmr THEN
		udiStatus1 	:= 10009;
	ELSIF bInvOnceTwicePCBOut AND bStepDSCommTmr THEN
		udiStatus1	:= 10010;
	ELSIF bInvOnceTwicePCBOut THEN
		udiStatus1 	:= 10009;
	ELSE
		udiStatus1 	:= 0;
	END_IF	

	
END_ACTION
