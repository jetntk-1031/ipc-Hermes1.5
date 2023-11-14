(** 2019-03-25 **)
ACTION Act_OpsRst:

	eInverterAct			:= MotorBrkActIdle;
	eConvAct				:= ConvActIdle;
	eInShutterAct			:= PneuActIdle;
	eOutShutterAct			:= PneuActIdle;
	eStopperAct				:= PneuActIdle;
		
	fbInvChgDirDlyTm(IN:=FALSE);
	fbConvChgDirDlyTm(IN:=FALSE);

END_ACTION
