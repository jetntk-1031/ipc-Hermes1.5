
ACTION Act_OptP0200ChgPage: 

	IF tyP0200OpsGen.tyOps.tyHotspotMc.bRtCompl = TRUE THEN
		tyP0200OpsGen.tyOps.tyHotspotMc.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0201OpsConv;
	END_IF
	
END_ACTION
