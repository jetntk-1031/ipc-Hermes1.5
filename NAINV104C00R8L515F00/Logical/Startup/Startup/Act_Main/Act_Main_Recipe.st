(** 2019-05-04 **)
ACTION Act_Main_Recipe:
	
	CASE usiStep OF
		0:
			eProdRcpAct	:= ProdRcpActCreateDir;
	
			IF (p_eProdRcpStatus = Done) AND (p_eProdRcpStat = ProdRcpActCreateDir) THEN
				
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 1;
				
			ELSIF p_eProdRcpStatus = Error THEN
				
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 10;
				
			END_IF
			
		1:
			eProdRcpAct	:= ProdRcpActGetList;
	
			IF (p_eProdRcpStatus = Done) AND (p_eProdRcpStat = ProdRcpActGetList) THEN
				
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 2;
				
			ELSIF p_eProdRcpStatus = Error THEN
				
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 10;
				
			END_IF
		
		2:
			eProdRcpAct	:= ProdRcpActReadCurrRcp;
	
			IF (p_eProdRcpStatus = Done) AND (p_eProdRcpStat = ProdRcpActReadCurrRcp) THEN
				
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 10;
				
			ELSIF p_eProdRcpStatus = Error THEN
				
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 10;
				
			END_IF
		
		10:
			eMpProdRcpAct	:= MpProdRcpActCreateDir;
	
			IF (p_eMpProdRcpStatus = Done) AND (p_eMpProdRcpStat = MpProdRcpActCreateDir) THEN
				
				eMpProdRcpAct	:= MpProdRcpActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepUsrMgmt;
				
			ELSIF p_eProdRcpStatus = Error THEN
				
				eMpProdRcpAct	:= MpProdRcpActIdle;
				usiStep			:= 0;
				eStartupStep1	:= StartupStepUsrMgmt;
				
			END_IF
			
	END_CASE
		
END_ACTION
