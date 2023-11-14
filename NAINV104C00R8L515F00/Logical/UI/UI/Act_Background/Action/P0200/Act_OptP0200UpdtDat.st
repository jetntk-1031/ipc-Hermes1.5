
ACTION Act_OptP0200UpdtDat: 
	
	//Communication - Mask
	IF p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat));
	ELSIF p_tyMcParamCurr.eUSComm = McSetCommModHermes THEN
		
		IF p_tyNtParamCurr.bUIConvDirRL= FALSE THEN
			IF p_bUSHermesConnected = TRUE THEN
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat));
			ELSE
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat));
			END_IF
		ELSE
			IF p_bUSHermesConnected = TRUE THEN
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat));
			ELSE
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat));
			END_IF
		END_IF
	END_IF
	
	IF p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat));
	ELSIF p_tyMcParamCurr.eDSComm = McSetCommModHermes THEN
		IF p_tyNtParamCurr.bUIConvDirRL= FALSE THEN
			IF p_bDSHermesConnected = TRUE THEN
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat));
			ELSE
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapDSCommIcon.uiMaskRtStat));
			END_IF
		ELSE
			IF p_bDSHermesConnected = TRUE THEN
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat));
			ELSE
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon.uiMaskRtStat));
			END_IF
		END_IF
	END_IF

	//Conv PCB Status
	IF p_bConvHvBrd = TRUE THEN
		IF p_bConvGdBrd = TRUE THEN
			tyP0200OpsGen.tyOps.tyBitmapConvPCB.usiValueIdx		:= 1;
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapConvPCB.usiValueIdx		:= 2;
		END_IF	
	ELSE
		tyP0200OpsGen.tyOps.tyBitmapConvPCB.usiValueIdx			:= 0;
	END_IF

	//SMEMA
	IF p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
		
		IF p_tyNtParamCurr.bUIConvDirRL = FALSE THEN
			//USB (Upstream <--- Machine)
			IF p_bUSSMEMADSRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx		:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx		:= 0;
			END_IF
		
			//UBA (Upstream ---> Machine)
			IF p_bUSSMEMAUSRdy = TRUE THEN
				IF p_bUSSMEMAUSGdBrdRdy = TRUE THEN
					tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx	:= 1;
				ELSE
					tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx	:= 2;	
				END_IF	
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx		:= 0;
			END_IF
		ELSE
			// USB (Upstream <--- Machine) R TO L
			
			IF p_bUSSMEMADSRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.usiValueIdx		:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut1.usiValueIdx		:= 0;
			END_IF
			
			//UBA (Upstream ---> Machine) R To L
			IF p_bUSSMEMAUSRdy = TRUE THEN
				IF p_bUSSMEMAUSGdBrdRdy = TRUE THEN
					tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.usiValueIdx	:= 1;
				ELSE
					tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.usiValueIdx	:= 2;	
				END_IF	
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn1.usiValueIdx		:= 0;
			END_IF
			
		END_IF
		
	ELSIF p_tyMcParamCurr.eUSComm = McSetCommModHermes THEN	
		IF p_bUSHermesDSRdy = TRUE THEN
			IF p_bUSHermesDSGdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx	:= 2;
			END_IF
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapUSCommOut.usiValueIdx	:= 0;
		END_IF
			
		IF p_bUSHermesUSRdy = TRUE THEN
			IF p_bUSHermesUSGdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx	:= 2;
			END_IF
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapUSCommIn.usiValueIdx	:= 0;
		END_IF
		
	END_IF	
	
	IF p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
		IF p_tyNtParamCurr.bUIConvDirRL = FALSE AND NOT(p_tyNtParamCurr.bProjInvertOncePrep OR p_tyNtParamCurr.bProjInvertTwicePrep) THEN
			//DBA (Machine --> Downstream)
			IF p_bDSSMEMAUSRdy = TRUE THEN
				IF p_bDSSMEMAUSGdBrdRdy = TRUE THEN
					tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 1;
				ELSE
					tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 2;
				END_IF	
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx		:= 0;
			END_IF
		
			//DSB (Machine <--- Downstream)
			IF p_bDSSMEMADSRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx		:= 1;		
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx		:= 0;
			END_IF
			
		ELSIF p_tyNtParamCurr.bProjInvertOncePrep OR p_tyNtParamCurr.bProjInvertTwicePrep THEN
			IF p_bDSSMEMAUSRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 0;
			END_IF
			
			//DSB (Machine <--- Downstream)
			IF p_bDSSMEMADSRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx		:= 1;		
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx		:= 0;
			END_IF
			
		ELSE
			
			//DBA (Machine --> Downstream) R To L
			IF p_bDSSMEMAUSRdy = TRUE THEN
				IF p_bDSSMEMAUSGdBrdRdy = TRUE THEN
					tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.usiValueIdx	:= 1;
				ELSE
					tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.usiValueIdx	:= 2;
				END_IF	
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommOut1.usiValueIdx		:= 0;
			END_IF
		
			//DSB (Machine <--- Downstream) R TO L
			IF p_bDSSMEMADSRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.usiValueIdx		:= 1;		
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn1.usiValueIdx		:= 0;
			END_IF
			
		END_IF
		
	ELSIF p_tyMcParamCurr.eDSComm = McSetCommModHermes THEN
		IF p_bDSHermesUSRdy = TRUE THEN
			IF p_bDSHermesUSGdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 2;
			END_IF
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapDSCommOut.usiValueIdx	:= 0;
		END_IF
		
		IF p_bDSHermesDSRdy = TRUE THEN
			IF p_bDSHermesDSGdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx	:= 2;
			END_IF
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapDSCommIn.usiValueIdx	:= 0;
		END_IF		
	END_IF	
		
	//Alarm
	IF NOT p_bAlarmErr THEN
		memset(ADR(tyUIAlmData.bAlm) , 0 , SIZEOF(tyUIAlmData.bAlm));
	END_IF 
	
	IF NOT p_bAlarmWarning THEN
		memset(ADR(tyUIAlmData.bWarning) , 0 , SIZEOF(tyUIAlmData.bWarning));
	ELSE
		IF (p_bUSHermesConnected) OR p_tyMcParamCurr.eUSComm = McSetCommModSMEMA THEN
			tyUIAlmData.bWarning[3114] := FALSE;
		END_IF
		IF (p_bDSHermesConnected) OR p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
			tyUIAlmData.bWarning[3363] := FALSE;
		END_IF	
	END_IF
	
	FOR i := 1 TO c_uiP0200TableSize DO
		IF p_bStartupUISettingsLoadDone THEN
			IF p_tyAlarmCurrList[i].eSeverity = AlmSeverityError THEN
				tyUIAlmData.bAlm[p_tyAlarmCurrList[i].udiErrorCode] := p_tyAlarmCurrList[i].bAlm;
			ELSIF p_tyAlarmCurrList[i].eSeverity = AlmSeverityWarning THEN
				tyUIAlmData.bWarning[p_tyAlarmCurrList[i].udiErrorCode] := p_tyAlarmCurrList[i].bWarning;
			END_IF
		END_IF
	END_FOR
	
	//Communication (Upstream 2) - Mask (InvertOnce & InvertTwice_2023_0032B01)
	IF p_tyMcParamCurr.eUSComm2 = McSetCommModSMEMA THEN
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiMaskRtStat));
	ELSIF p_tyMcParamCurr.eUSComm2 = McSetCommModHermes THEN
		IF p_bUSHermesConnected = TRUE THEN
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiMaskRtStat));
		ELSE
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiMaskRtStat));
		END_IF
	END_IF
	//SMEMA (Upstream 2)(InvertOnce & InvertTwice_2023_0032B01)
	IF p_tyMcParamCurr.eUSComm2 = McSetCommModSMEMA THEN
		
		//USB2 (Upstream <--- Machine)
		IF p_bUSSMEMA2DSRdy = TRUE THEN
			tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx		:= 1;
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx		:= 0;
		END_IF
		
		//UBA2 (Upstream ---> Machine)
		IF p_bUSSMEMA2USRdy = TRUE THEN
			IF p_bUSSMEMA2USGdBrdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx	:= 2;	
			END_IF	
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx		:= 0;
		END_IF
			
		
	ELSIF p_tyMcParamCurr.eUSComm2 = McSetCommModHermes THEN	
		IF p_bUSHermesDSRdy = TRUE THEN
			IF p_bUSHermesDSGdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx	:= 2;
			END_IF
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.usiValueIdx	:= 0;
		END_IF
			
		IF p_bUSHermesUSRdy = TRUE THEN
			IF p_bUSHermesUSGdRdy = TRUE THEN
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx	:= 1;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx	:= 2;
			END_IF
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.usiValueIdx	:= 0;
		END_IF
		
	END_IF	
	
		
END_ACTION
