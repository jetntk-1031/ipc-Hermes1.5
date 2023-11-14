(** 2020-10-06 **)
ACTION Act_OpsRst:
	
	eUSSMEMAAct			:= SMEMAActIdle;
	eDSSMEMAAct			:= SMEMAActIdle;
	eConvAct			:= ConvActIdle;
	eStopperAct			:= PneuActIdle;
	eAWAct				:= AWActIdle;
	eClampAct			:= PneuActIdle;
	eInletShutterAct	:= PneuActIdle;
	eOutletShutterAct	:= PneuActIdle;
	eClamp1Act			:= PneuActIdle;
	eClamp2Act			:= PneuActIdle;
	eClamp3Act			:= PneuActIdle;
	eInvertAct			:= MotorBrkActIdle;
	eUSSMEMA2Act		:= SMEMAActIdle;
	
	bBrdInserted		:= FALSE;
	bBrdRemoved			:= FALSE;
	
	bUSTimerRun			:= FALSE;
	bDSTimerRun			:= FALSE;
	bReachedEnd			:= FALSE;
	bHvBrd				:= FALSE;
	bGdBrd				:= FALSE;
	bUS2TimerRun		:= FALSE;
	
	bClampDisInitUnblk	:= FALSE;
	bInvertPosInvalidSkipInit := FALSE;
	bChangeBypassRetPneu:= FALSE;
	bChangeInvertExtPneu:= FALSE;
			
	fbFwdTimer(IN := FALSE);
	fbRevTimer(IN := FALSE);
	
END_ACTION
