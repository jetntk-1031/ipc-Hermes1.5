(** 2019-05-20 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupProdRcpAct;
	ELSE
		IF eStatus = Idle THEN
			IF p_bLinkNtParamLCSManageRcpPrep AND p_bLinkMcParamLCSManageRcpEn THEN
				IF p_eLinkLCSMngRcpProdRcpAct <> ProdRcpActIdle THEN
					p_eAct ACCESS p_LCSMngRcpProdRcpAct;
					p_tyInfoIn ACCESS p_LCSMngRcpProdRcpInfoIn;
				ELSIF p_eLinkUIProdRcpAct <> ProdRcpActIdle THEN
					p_eAct ACCESS p_UIProdRcpAct;
					p_tyInfoIn ACCESS p_UIProdRcpInfoIn;
					
					p_tyInfoIn.dtLastModified	:= p_dtCurrDT;
				END_IF
			ELSE
				p_eAct ACCESS p_UIProdRcpAct;
				p_tyInfoIn ACCESS p_UIProdRcpInfoIn;
					
				p_tyInfoIn.dtLastModified	:= p_dtCurrDT;
			END_IF
		END_IF
	END_IF
	
END_ACTION
