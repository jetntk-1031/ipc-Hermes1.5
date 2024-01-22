(** 2019-03-29 **)
ACTION Act_Link:
	
	    //new for Hermes 1.3
	IF p_bRmtHermesWriteConfig OR p_bSvyHermesWriteConfig THEN 
		p_tyMcParamWr.sMcNm := p_tyHermesConfigurationWr.tySvyParam.sMachineId;
	END_IF
	
END_ACTION
