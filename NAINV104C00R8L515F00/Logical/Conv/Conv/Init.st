(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Physical Configuration
	diInitTm	:= 0;
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_ConvStat		:= ADR(eStat);
	p_ConvStatus	:= ADR(eStatus);
	p_ConvStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_ConvAlmData	:= ADR(tyAlmData);
	
	//Output
	p_ConvHvBrd						:= ADR(bHvBrd);
	p_ConvRejHvBrd					:= ADR(bRejHvBrd);
	p_ConvInspHvBrd					:= ADR(bInspHvBrd);
	p_ConvGdBrd						:= ADR(bGdBrd);
	p_ConvLmtSenActivated			:= ADR(bLmtSenActivated);
	p_ConvMtrSigOnOrLToR			:= ADR(bMtrSigOnOrLToR);
	p_ConvMtrDirOrRToL				:= ADR(bMtrDirOrRToL);
	
	p_ConvPshrExtCtrl				:= ADR(bPshrExtCtrl);
	p_ConvPshrTwoOutputControl		:= ADR(bPshrTwoOutputControl);
	p_ConvPshrExtended				:= ADR(bPshrExtended);
	p_ConvPshrRetracted				:= ADR(bPshrRetracted);
	
	p_ConvPullerExtCtrl				:= ADR(bPullerExtCtrl);
	p_ConvPullerRetCtrl				:= ADR(bPullerRetCtrl);
	p_ConvPullerTwoOutputControl	:= ADR(bPullerTwoOutputControl);
	p_ConvPullerExtended			:= ADR(bPullerExtended);
	p_ConvPullerRetracted			:= ADR(bPullerRetracted);
	
	p_ConvRotRemoteCtrl				:= ADR(bRotRemoteCtrl);
	p_ConvRotTwoOutputControl		:= ADR(bRotTwoOutputControl);
	p_ConvRotAtRemote				:= ADR(bRotAtRemote);
	p_ConvRotAtHome					:= ADR(bRotAtHome);
	
	p_ConvRejectUpCtrl				:= ADR(bRejectUpCtrl);
	p_ConvRejectDownCtrl			:= ADR(bRejectDownCtrl);
	p_ConvRejectTwoOutputControl	:= ADR(bRejectTwoOutputControl);
	p_ConvRejectAtUp				:= ADR(bRejectAtUp);
	p_ConvRejectAtDown				:= ADR(bRejectAtDown);
	
	(* Always Change If Project Change *)
	
END_PROGRAM