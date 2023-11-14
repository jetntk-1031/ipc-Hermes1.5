
ACTION Act_OptP0931RstMnl:

	//Conveyor	
	IF EDGEPOS(p_eConvStatus = Error) THEN
		
		eConvAct	:= ConvActIdle;
		
		usiConvStep	:= 0;
		
		//FB
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl			:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl				:= FALSE;
		
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue					:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bValue				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bValue				:= TRUE;
		
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk					:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk					:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat.0		:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat.0		:= TRUE;
		tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
			
		//Direct
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl				:= FALSE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bValue				:= TRUE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk				:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk				:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat.0	:= TRUE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat.0	:= TRUE;	
		tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
		
	END_IF
	
	IF EDGEPOS(p_eInvertStatus = Error) THEN
		
		eInvertAct	:= MotorBrkActIdle;		
		
		//Inverter FB
		tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl				:= FALSE;

		tyP0931ConvInv.tyInvFB.tyBtnCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bValue					:= TRUE;
		
		tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
			
		//Inverter Direct
		tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl				:= FALSE;
		
		tyP0931ConvInv.tyInvDC.tyBtnCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue				:= TRUE;
		
		tyP0931ConvInv.tyInvDC.tyBtnCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.uiMaskRtStat.0		:= TRUE;
		tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
		
	END_IF	
	
	IF EDGEPOS(bManualMod = FALSE) THEN
		tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue := FALSE;
		
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyConvDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyConvFB.tyLyr.uiRtStat)); 
		
		tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue := FALSE;
		
		fUIInRtStatHide(ADR(tyP0931ConvInv.tyInvDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0931ConvInv.tyInvFB.tyLyr.uiRtStat)); 
		
		eConvAct	:= ConvActIdle;
		
		usiConvStep	:= 0;
		
		//FB
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtCompl			:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtCompl				:= FALSE;
		
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bValue					:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bValue				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bValue				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bValue				:= TRUE;
		
		tyP0931ConvInv.tyConvFB.tyBtnEnt.bRtLk					:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.bRtLk					:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.bRtLk				:= FALSE;
		tyP0931ConvInv.tyConvFB.tyBtnStop.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyConvFB.tyBtnEnt.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnExit.uiMaskRtStat.0		:= TRUE;
		tyP0931ConvInv.tyConvFB.tyBtnPreExit.uiMaskRtStat.0		:= TRUE;
		tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
			
		//Direct
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtCompl			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtCompl			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtCompl				:= FALSE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bValue			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bValue			:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bValue				:= TRUE;
		
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.bRtLk				:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.bRtLk				:= FALSE;
		tyP0931ConvInv.tyConvDC.tyBtnStop.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyConvDC.tyBtnConvLToR.uiMaskRtStat.0	:= TRUE;
		tyP0931ConvInv.tyConvDC.tyBtnConvRToL.uiMaskRtStat.0	:= TRUE;	
		tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
		
		eInvertAct	:= MotorBrkActIdle;		
		
		//Inverter FB
		tyP0931ConvInv.tyInvFB.tyBtnCW.bRtCompl					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bRtCompl				:= FALSE;

		tyP0931ConvInv.tyInvFB.tyBtnCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bValue					:= TRUE;
		
		tyP0931ConvInv.tyInvFB.tyBtnCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvFB.tyBtnStop.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyInvFB.tyBtnCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvFB.tyBtnCCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
			
		//Inverter Direct
		tyP0931ConvInv.tyInvDC.tyBtnCW.bRtCompl					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtCompl				:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtCompl				:= FALSE;
		
		tyP0931ConvInv.tyInvDC.tyBtnCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.bValue					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue				:= TRUE;
		
		tyP0931ConvInv.tyInvDC.tyBtnCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.bRtLk					:= FALSE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.bRtLk					:= TRUE;
			
		tyP0931ConvInv.tyInvDC.tyBtnCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvDC.tyBtnCCW.uiMaskRtStat.0			:= TRUE;
		tyP0931ConvInv.tyInvDC.tyBtnBrake.uiMaskRtStat.0		:= TRUE;
		tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.uiMaskRtStat.0		:= TRUE;
		
	END_IF
	
END_ACTION
