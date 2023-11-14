
(* Hermes Checking Parameter SendWorkOrderId & QueryWorkOrderId *)
FUNCTION fHermesChkParamCommand
	
	fHermesChkParamCommand	:= 0;
	
	IF tyCommand.tyAvl.bCommand = TRUE THEN
		//(tyCommand.tyData.eCommand < 0 OR tyCommand.tyData.eCommand > 9999)
		IF tyCommand.tyData.eCommand < 0 OR tyCommand.tyData.eCommand > 9999  THEN
			
			fHermesChkParamCommand	:= 8888;	//Command not supported
			
		END_IF
		
	ELSE
		
		fHermesChkParamCommand	:= 7777;	//Command Message missing Attribute Command
		
	END_IF
	
END_FUNCTION
