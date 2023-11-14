
ACTION Act_EntP0200Disp:
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0200OpsGen.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0010RcyMsg ACCESS ADR(tyP0200OpsGen.tyRcyMsgHide);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0200OpsGen ACCESS ADR(tyP0200OpsGen.tyOps);
	
	//Virtual Smema Layer For L to R
	p_tyP0200OpsUSVSMEMA ACCESS ADR(tyP0200OpsGen.tyUSVSMEMA);
	p_tyP0200OpsDSVSMEMA ACCESS ADR(tyP0200OpsGen.tyDSVSMEMA);
	
	//Virtual Smema Layer For R to L
	p_tyP0200OpsUSVSMEMA1 ACCESS ADR(tyP0200OpsGen.tyUSVSMEMA1);
	p_tyP0200OpsDSVSMEMA1 ACCESS ADR(tyP0200OpsGen.tyDSVSMEMA1);
	
	p_tyP0200OpsBypsInitConv ACCESS ADR(tyP0200OpsGen.tyBypsInitConv);
	
	//Display
	//Communication
	IF p_tyNtParamCurr.bUIConvDirRL= FALSE THEN
		IF p_tyMcParamCurr.eUSComm = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx := 1;
		ELSIF p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx := 0;
		END_IF
		IF p_tyMcParamCurr.eDSComm = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx := 1;
		ELSIF p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
			tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx := 0;
		END_IF
	ELSE
		IF p_tyMcParamCurr.eUSComm = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx := 1;
		ELSIF p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
			tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.usiValueIdx := 0;
		END_IF
		IF p_tyMcParamCurr.eDSComm = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx := 1;
		ELSIF p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.usiValueIdx := 0;
		END_IF
	END_IF
	
	//Conveyor Direction - SMEMA Arrow Indicator
	IF p_tyNtParamCurr.bUIConvDirRL THEN
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.uiRtStat));
		
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.uiRtStat));
		
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtUS1.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtDS1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtUS.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtDS.uiRtStat));
	ELSE
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIn.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommOut.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut.uiRtStat));
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.uiRtStat));
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtUS1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtDS1.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtUS.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtDS.uiRtStat));
	END_IF
	
	//Virtual SMEMA
	IF (p_tyUsrMgmtCurrUsr.eUsrLvl = UsrMgmtLvl1) OR p_tyNtParamCurr.bVSMEMAPrep = FALSE OR p_tyMcParamCurr.bVSMEMAEn = FALSE OR (p_tyMcParamCurr.eUSComm = McSetCommModHermes AND p_tyMcParamCurr.eDSComm = McSetCommModHermes) THEN
		
		tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue	:= FALSE;
		tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue	:= FALSE;
		tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.bValue	:= FALSE;
		tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bValue	:= FALSE;
		
		memset(ADR(tyP0200OpsGen.tyUSVSMEMA), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA));
		memset(ADR(tyP0200OpsGen.tyDSVSMEMA), 0, SIZEOF(tyP0200OpsGen.tyDSVSMEMA));
		memset(ADR(tyP0200OpsGen.tyUSVSMEMA1), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA1));
		memset(ADR(tyP0200OpsGen.tyDSVSMEMA1), 0, SIZEOF(tyP0200OpsGen.tyDSVSMEMA1));
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat));
		
		bVSMEMAUSEn	:= FALSE;
		bVSMEMADSEn	:= FALSE;
	ELSE
		//Upstream
		IF p_tyMcParamCurr.eUSComm = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue	:= FALSE;
			
			memset(ADR(tyP0200OpsGen.tyUSVSMEMA), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA));
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat));
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
			
		ELSIF p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
			
			IF p_tyNtParamCurr.bUIConvDirRL = FALSE THEN
				
				tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue	:= FALSE;
				
				memset(ADR(tyP0200OpsGen.tyUSVSMEMA1), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA1));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyLyr.uiRtStat));
				
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat));
			
				//Display - UBA Stat
				IF p_tyMcParamCurr.tyUSCommSMEMA.eSelection = SMEMASelIPC9851Ext THEN
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.uiRtStat));
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.uiRtStat));
				ELSE
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyBtnUBAStat.uiRtStat));
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyBtnDual.uiRtStat));
				END_IF	
				
			ELSE
				
				tyP0200OpsGen.tyOps.tyHotspotUSVirtual.bValue	:= FALSE;
				
				memset(ADR(tyP0200OpsGen.tyUSVSMEMA), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA.tyLyr.uiRtStat));
				
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual1.uiRtStat));
			
				//Display - UBA Stat
				IF p_tyMcParamCurr.tyUSCommSMEMA.eSelection = SMEMASelIPC9851Ext THEN
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.uiRtStat));
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.uiRtStat));
				ELSE
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyBtnUBAStat.uiRtStat));
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA1.tyBtnDual.uiRtStat));
				END_IF	
			END_IF
		END_IF
		
		
		//Downstream
		IF p_tyMcParamCurr.eDSComm = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue	:= FALSE;
			
			memset(ADR(tyP0200OpsGen.tyDSVSMEMA), 0, SIZEOF(tyP0200OpsGen.tyDSVSMEMA));
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat));
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
			
		ELSIF p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
			
			IF p_tyNtParamCurr.bUIConvDirRL = FALSE THEN
				
				tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.bValue	:= FALSE;
				
				memset(ADR(tyP0200OpsGen.tyDSVSMEMA1), 0, SIZEOF(tyP0200OpsGen.tyDSVSMEMA1));
			
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyLyr.uiRtStat));
				
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat));
				
				//Display - DBA Stat
				IF p_tyMcParamCurr.tyDSCommSMEMA.eSelection = SMEMASelIPC9851Ext THEN
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyDSVSMEMA.tyBtnDSBStat.uiRtStat));
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyDSVSMEMA.tyBtnDual.uiRtStat));
				ELSE
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyBtnDSBStat.uiRtStat));
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyBtnDual.uiRtStat));
				END_IF	
				
			ELSE
				
				tyP0200OpsGen.tyOps.tyHotspotDSVirtual.bValue	:= FALSE;
				
				memset(ADR(tyP0200OpsGen.tyDSVSMEMA), 0, SIZEOF(tyP0200OpsGen.tyDSVSMEMA));
			
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA.tyLyr.uiRtStat));
				
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyHotspotDSVirtual1.uiRtStat));
				
				//Display - DBA Stat
				IF p_tyMcParamCurr.tyDSCommSMEMA.eSelection = SMEMASelIPC9851Ext THEN
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSBStat.uiRtStat));
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyBtnDual.uiRtStat));
				ELSE
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyBtnDSBStat.uiRtStat));
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyDSVSMEMA1.tyBtnDual.uiRtStat));
				END_IF	
				
			END_IF
		END_IF
		
	END_IF
	
	
	//Virtual Semma Layer for Upstream2 (InvertOnce & InvertTwice_2023_0032B01)
	p_tyP0200OpsUSVSMEMA2 ACCESS ADR(tyP0200OpsGen.tyUSVSMEMA2);
	
	//Conveyor Direction - SMEMA Arrow Indicator (InvertOnce & InvertTwice_2023_0032B01)
	IF p_tyNtParamCurr.bProjInvertOncePrep OR p_tyNtParamCurr.bProjInvertTwicePrep THEN	
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.uiRtStat));
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.uiRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.uiRtStat));
	
	END_IF
	
	//Communication for Upstream 2 (InvertOnce & InvertTwice_2023_0032B01)
	IF p_tyNtParamCurr.bProjInvertOncePrep OR p_tyNtParamCurr.bProjInvertTwicePrep THEN
		IF p_tyMcParamCurr.eUSComm2 = McSetCommModHermes THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.usiValueIdx	:= 1;
		ELSIF p_tyMcParamCurr.eUSComm2 = McSetCommModSMEMA THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.usiValueIdx	:= 0;
		END_IF		
	
	//Virtual SMEMA(InvertOnce & InvertTwice_2023_0032B01)
		IF (p_tyUsrMgmtCurrUsr.eUsrLvl = UsrMgmtLvl1) OR p_tyNtParamCurr.bVSMEMAPrep = FALSE OR p_tyMcParamCurr.bVSMEMAEn = FALSE OR (p_tyMcParamCurr.eUSComm2 = McSetCommModHermes) THEN
			
			tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue	:= FALSE;
			
			memset(ADR(tyP0200OpsGen.tyUSVSMEMA2), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA2));
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat));
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat));
			bVSMEMAUS2En	:= FALSE;
			
		ELSE
			//Upstream2
			IF p_tyMcParamCurr.eUSComm2 = McSetCommModHermes THEN
				tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue	:= FALSE;
				
				memset(ADR(tyP0200OpsGen.tyUSVSMEMA2), 0, SIZEOF(tyP0200OpsGen.tyUSVSMEMA2));
				
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat));
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat));
				
			ELSIF p_tyMcParamCurr.eUSComm2 = McSetCommModSMEMA THEN
				
				tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.bValue	:= FALSE;
					
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat));
				
				//Display - UBA Stat
				IF p_tyMcParamCurr.tyUSCommSMEMA2.eSelection = SMEMASelIPC9851Ext THEN
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.uiRtStat));
					fUIInRtStatOff(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.uiRtStat));
				ELSE
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyBtnUBAStat.uiRtStat));
					fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyBtnDual.uiRtStat));
				END_IF	
			END_IF
		END_IF
	
	END_IF
	
	
END_ACTION
