(** 2021-08-01 **)
ACTION Act_Link:
	
	//Receive Alive Time
	p_tyParam.tRcvAlive	:= p_tyParam.tSndAlive * 2;
	
	// For BoardDeparted's BoardTransfer Parameter
	IF p_bFirstMcIntheLine = TRUE AND p_bNewBrdAvlLastZone THEN
		p_eBoardTransfer1 := HermesInserted;
	ELSIF p_bFirstMcIntheLine = TRUE AND p_bNewBrdAvlLastZone = FALSE THEN
		p_eBoardTransfer1 := HermesTransferred;
	ELSIF p_bFirstMcIntheLine = FALSE AND p_bNewBrdAvlLastZone THEN
		p_eBoardTransfer1 := HermesInserted;
	ELSIF p_bFirstMcIntheLine = FALSE AND p_bNewBrdAvlLastZone = FALSE THEN
		p_eBoardTransfer1 := HermesTransferred;
	END_IF
	
	
	//Info Message
	p_sInfoMsg		:= 'Hermes Configuration Received From Supervisory System';
	
	//Info Message 1
	p_sInfoMsg1     := 'Work Order Info Received From Supervisory System';
	p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , '$r$n');
	p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , 'PCB Work Order Info Will Be Overwritten');
	
	//Info Message 2
	p_sInfoMsg2     := 'Work Order Info Not Found From Supervisory System';
	p_sInfoMsg2		:= CONCAT(p_sInfoMsg2 , '$r$n');
	p_sInfoMsg2  	:= CONCAT(p_sInfoMsg2 , 'Please Try Again');
	
	//Info Message 3
	p_sInfoMsg3     := 'Query Work Order Not Possible';
	p_sInfoMsg3		:= CONCAT(p_sInfoMsg3 , '$r$n');
	p_sInfoMsg3  	:= CONCAT(p_sInfoMsg3 , 'Please Empty the Machines');
	p_sInfoMsg3		:= CONCAT(p_sInfoMsg3 , '$r$n');
	p_sInfoMsg3  	:= CONCAT(p_sInfoMsg3 , 'and Try Again');
	
	//Info Message 4
	p_sInfoMsg4     := 'Waiting For LCS';
	
	//Info Message 5
	p_sInfoMsg5     := 'Waiting for Board insert';
	
	//Info Message 6
	p_sInfoMsg6     := 'Remove Board';
	
	//Accept WorkOrderId from Supervisory System, adjust accordingly 
	//(Loader Machine: Magazine area empty, Lifter area empty)
	//(Destacker Machine: load pcb stack area empty and conveyor empty)
	p_bAcceptCondition := p_bAllZonesEmpty;
	
END_ACTION
