(** 2020-10-08 **)
ACTION Act_OptPage:
	
	//Prevent Screen Saver Interupt Program
	IF tyProperty.tyVisu.uiCurrPage <> 0 THEN
		eCurrPage := tyProperty.tyVisu.uiCurrPage;
	ELSE
		Act_OptP0000McStatus;
		Act_OptP0000RunningNm;
		Act_OptP0000StatDisp;
	END_IF
	
	Act_OptP0000DisableSSaver;
	Act_OptP0000TouchTimer;
	
	Act_OptP0002ToP1081UnlockCoverPB;
	
	IF (tyProperty.tyVisu.uiChgPage = 65535) AND (usiChgPage = 0) THEN
		
		Act_OptC0005GoHomeCtrl;
		Act_OptC0005ShowNotif;
		Act_OptC0005AutoCtrl;
		Act_OptC0005RstErr;
		Act_OptC0005StatBarCtrl;
		Act_OptC0005Buzzer;
		Act_OptC0005ChgPage;
		Act_OptC0007Notif;
		Act_OptC0009Info;
		Act_OptC0011Loading;
		
		CASE eCurrPage OF
			UIP0001Startup:
				Act_OptP0001Startup;
				
			UIP0100Login:
				Act_OptP0100Keypad;
				Act_OptP0100NomLogin;	
				Act_OptP0100BypassLogin;
				Act_OptP0100Logout;
			
			UIP0200OpsGen:
				Act_OptP0200ChgPage;
				Act_OptP0200UpdtDat;
				Act_OptP0200VSMEMA;
				Act_OptP0200RcyMsg;
				Act_OptP0200ToP0201AccDat;
				Act_OptP0200ToP0201BypsInitConv;
				Act_OptP0200ToP0201RlsNewProd;
				Act_OptP0200PCBReset;
				
			UIP0201OpsConv:
				Act_OptP0201Navi;
				Act_OptP0201UpdtDat;
				Act_OptP0201IOMonitor;
				Act_OptP0201ChgParam;
				Act_OptP0201Keypad;
				Act_OptP0200ToP0201AccDat;
				Act_OptP0200ToP0201BypsInitConv;
				Act_OptP0200ToP0201RlsNewProd;			
				
			UIP0300McInfo:
				Act_OptP0300Song;
				
			UIP0400ProdSel:
				Act_OptP0400Search;
				Act_OptP0400Load;
				Act_OptP0400Preview;
				Act_OptP0400Table;
				Act_OptP0400Keypad;
				Act_OptP0400Mask;
				Act_OptP0400Sort;
				Act_OptP0400RcpPopUp;
				
			UIP0600Alm:
				Act_OptP0600Alm;
				Act_OptP0600RcyMsg;
			
			UIP0700LFCtrl:
				Act_OptP0700LFLeaderCtrl;
				Act_OptP0700Mask;
				Act_OptP0700Table;
				
			UIP0002Menu, UIP0900GenIn, UIP0910GenOut, UIP0920MtrNPneuCtrl,UIP0921ClampNoRS, UIP0922Shutter, UIP0923Stopper, UIP0924ClampWithRS, UIP0931ConvInv, UIP0934AW, UIP0940CommCtrl:
				IF eCurrPage = UIP0002Menu THEN
					Act_OptP0002ChgPage;
					Act_OptP0002Mask;
					Act_OptP0002UpdtData;
					Act_OptP0002PCBReset;
				END_IF
				
				Act_OptP0002ManualCtrl;
				Act_OptP0910RstMnl;
				Act_OptP0921RstMnl;
				Act_OptP0922RstMnl;
				Act_OptP0923RstMnl;
				Act_OptP0924RstMnl;
				Act_OptP0931RstMnl;
				Act_OptP0934RstMnl;
				Act_OptP0940RstMnl;
				
				IF bUIManualMod THEN
					//General Input
					Act_OptP0900ReadDI;
					
					//General Output
					Act_OptP0910WriteDO;
					
					//MtrNPneuCtrl
					Act_OptP0920FullMask;
					Act_OptP0920ChgPage;
					
					//Clamp No RS Ctrl
					Act_OptP0921FullMask;
					Act_OptP0921Navi;
					Act_OptP0921ChgLyr;
					Act_OptP0921UpdtData;
					Act_OptP0921FBCtrl;
					Act_OptP0921FBStat;
					Act_OptP0921DCCtrl;
					
					//Inlet & Outlet Shutter
					Act_OptP0922DualMask;
					Act_OptP0922Navi;
					Act_OptP0922InletShutterChgLyr;
					Act_OptP0922InletShutterSen;
					Act_OptP0922InletShutterFB;
					Act_OptP0922InletShutterFBStat;
					Act_OptP0922InletShutterDC;
					Act_OptP0922OutletShutterChgLyr;
					Act_OptP0922OutletShutterSen;
					Act_OptP0922OutletShutterFB;
					Act_OptP0922OutletShutterFBStat;
					Act_OptP0922OutletShutterDC;
					
				
					//Stopper Ctrl
					Act_OptP0923FullMask;
					Act_OptP0923Navi;
					Act_OptP0923ChgLyr;
					Act_OptP0923UpdtData;
					Act_OptP0923FBCtrl;
					Act_OptP0923FBStat;
					Act_OptP0923DCCtrl;
					
					//Clamp With RS 1&2&3
					Act_OptP0924DualMask;
					Act_OptP0924Navi;
					Act_OptP0924Clamp1ChgLyr;
					Act_OptP0924Clamp1Sen;
					Act_OptP0924Clamp1FB;
					Act_OptP0924Clamp1FBStat;
					Act_OptP0924Clamp1DC;
					
					Act_OptP0924Clamp2ChgLyr;
					Act_OptP0924Clamp2Sen;
					Act_OptP0924Clamp2FB;
					Act_OptP0924Clamp2FBStat;
					Act_OptP0924Clamp2DC;
					
					Act_OptP0924Clamp3ChgLyr;
					Act_OptP0924Clamp3Sen;
					Act_OptP0924Clamp3FB;
					Act_OptP0924Clamp3FBStat;
					Act_OptP0924Clamp3DC;
							
					//Conveyor and Inverter
					Act_OptP0931DualMask;
					Act_OptP0931Navi;
					Act_OptP0931Sen;
					Act_OptP0931ConvChgLyr;
					Act_OptP0931ConvFB;
					Act_OptP0931ConvFBStat;
					Act_OptP0931ConvDC;
					Act_OptP0931InvChgLyr;
					Act_OptP0931InvUpdtData;
					Act_OptP0931InvFB;
					Act_OptP0931InvFBStat;
					Act_OptP0931InvDC;				
					
					//AutoWidth
					Act_OptP0934FullMask;
					Act_OptP0934Navi;
					Act_OptP0934FB;
					Act_OptP0934FBStat;
					Act_OptP0934Mask;
					Act_OptP0934UpdtDat;
					Act_OptP0934Keypad;
					
					
					//Communication
					Act_OptP0940FullMask;
					Act_OptP0940ReadDI;
					Act_OptP0940WriteDO;
					
				END_IF
			
			UIP0950Simu:
				Act_OptP0950Control;
				Act_OptP0950SimulationMod;
			
			UIP1000Lang:
				Act_OptP1000SelectLang;
				Act_OptP1000Keypad;
				
			UIP1020McSetNavi:
				Act_OptP1020Navi;
				
			UIP1021McSetGen:
				Act_OptP1021Navi;
				Act_OptP1021Save;
				Act_OptP1021Keypad;
				Act_OptP1021IPAddr;
				Act_OptP1021SubnetMask;
				Act_OptP1021DHCPSetting;
				
			UIP1022McSetVComm:
				Act_OptP1022Navi;
				Act_OptP1022Save;
				Act_OptP1022DisLF;
	
			UIP1023McSetHComm:
				Act_OptP1023Navi;
				Act_OptP1023ShowLyr;
				Act_OptP1023Save;
				Act_OptP1023USSel;
				Act_OptP1023DSSel;		
				Act_OptP1023Keypad;
				
			UIP1024McSetAntiGap:
				Act_OptP1024Navi;
				Act_OptP1024Save;
				Act_OptP1024Keypad;
				
				
			UIP1040ProdSet:
				Act_OptP1040Mask;
				Act_OptP1040Save;
				Act_OptP1040Del;
				Act_OptP1040Table;
				Act_OptP1040LoadData;
				Act_OptP1040Search;
				Act_OptP1040Keypad;
				Act_OptP1040ToXML;
				Act_OptP1040FromXML;
				Act_OptP1040Sort;
				Act_OptP1040RcpPopUp;
				
			UIP1050LFSet:
				Act_OptP1050Keypad;
				Act_OptP1050Edit;
				Act_OptP1050Online;
				Act_OptP1050Offline;
				Act_OptP1050Delete;	
				Act_OptP1050ShftUp;
				Act_OptP1050ShftDwn;	
				Act_OptP1050Mask;
				Act_OptP1050Table;
				
			UIP1080UsrMgmt:
				Act_OptP1080AddUsr;		
				Act_OptP1080DelUsr;		
				Act_OptP1080EditUsr;
				Act_OptP1080EditAccess;
				Act_OptP1080Table;	
				Act_OptP1080Keypad;
				
			UIP1081UsrMgmtUsrAccessRgt:
				Act_OptP1081Navi;
				Act_OptP1081Load;
				Act_OptP1081Save;
				Act_OptP1081Keypad;
			
		END_CASE
		
	END_IF
	
END_ACTION
