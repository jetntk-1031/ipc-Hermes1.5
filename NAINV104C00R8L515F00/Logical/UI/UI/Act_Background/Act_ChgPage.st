(** 2020-10-08 **)
ACTION Act_ChgPage:

	(*Exit Page*)
	IF (eChgPage <> eChgPageOld) OR (usiChgPage = 2) AND p_bStartupRun = FALSE THEN
		
		usiChgPage	:= 2;
		
		CASE eChgPageOld OF
			UIP0700LFCtrl:
				Act_ExitP0700;
				
			UIP1000Lang:
				Act_ExitP1000;
				
			UIP1021McSetGen:
				Act_ExitP1021;
				
			UIP1022McSetVComm:
				Act_ExitP1022;
				
			UIP1023McSetHComm:
				Act_ExitP1023;
				
			UIP1024McSetAntiGap:
				Act_ExitP1024;
				
			UIP1080UsrMgmt:
				Act_ExitP1080;
				
			UIP1081UsrMgmtUsrAccessRgt:
				Act_ExitP1081;
				
			ELSE 
				usiChgPage	:= 1;
			
		END_CASE
		
		IF usiChgPage = 1 THEN
			eChgPageOld		:= eChgPage;
		END_IF
		
	(*Enter Page*)
	ELSIF usiChgPage = 1 THEN
		
		CASE eChgPage OF
			
			UIP0001Startup:
				Act_EntP0001Disp;
			
			UIP0002Menu:
				Act_EntP0002Disp;
				
			UIP0100Login:
				Act_EntP0100Disp;
			
			UIP0200OpsGen:
				Act_EntP0200Disp;
			
			UIP0201OpsConv:
				Act_EntP0201Disp;
				
			UIP0300McInfo:
				Act_EntP0300Disp;
			
			UIP0400ProdSel:
				Act_EntP0400Disp;
				
			UIP0600Alm:
				Act_EntP0600Disp;
			
			UIP0700LFCtrl:
				Act_EntP0700Disp;
				
			UIP0900GenIn:
				Act_EntP0900Disp;
			
			UIP0910GenOut:
				Act_EntP0910Disp;
			
			UIP0920MtrNPneuCtrl:
				Act_EntP0920Disp;
				
			UIP0921ClampNoRS:
				Act_EntP0921Disp;
				
			UIP0922Shutter:
				Act_EntP0922Disp;
				
			UIP0923Stopper:
				Act_EntP0923Disp;
				
			UIP0924ClampWithRS:
				Act_EntP0924Disp;
				
			UIP0931ConvInv:	
				Act_EntP0931Disp;
				
			UIP0934AW:
				Act_EntP0934Disp;
				
			UIP0940CommCtrl:
				Act_EntP0940Disp;
				
			UIP0950Simu:
				Act_EntP0950Disp;	
				
			UIP1000Lang:
				Act_EntP1000Disp;		
						
			UIP1020McSetNavi:
				Act_EntP1020Disp;
				
			UIP1021McSetGen:
				Act_EntP1021Disp;
				
			UIP1022McSetVComm:
				Act_EntP1022Disp;
				
			UIP1023McSetHComm:
				Act_EntP1023Disp;
				
			UIP1024McSetAntiGap:
				Act_EntP1024Disp;	
				
			UIP1040ProdSet:
				Act_EntP1040Disp;
				
			UIP1050LFSet:
				Act_EntP1050Disp;
				
			UIP1080UsrMgmt:
				Act_EntP1080Disp;
				
			UIP1081UsrMgmtUsrAccessRgt:
				Act_EntP1081Disp;
			
		END_CASE
		
		usiChgPage	:= 0;
		
		tyProperty.tyVisu.uiChgPage	:= UDINT_TO_UINT(eChgPage);
		
	END_IF
	
END_ACTION
