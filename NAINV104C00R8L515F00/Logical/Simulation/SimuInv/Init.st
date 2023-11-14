(** 2022-09-15 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)

	//Pass Address To Global Address For External Use
	//Action, State & Status
	
	//Alarm
	
	//Output
	p_SimuInvPaused				:= ADR(bPaused);
	
	p_SimuInvInvAct				:= ADR(eInverterAct);
	p_SimuInvConvAct			:= ADR(eConvAct);
	p_SimuInvInShutterAct		:= ADR(eInShutterAct);
	p_SimuInvOutShutterAct		:= ADR(eOutShutterAct);
	p_SimuInvStopperAct			:= ADR(eStopperAct);
	
	(* Always Change If Project Change *)
	
END_PROGRAM