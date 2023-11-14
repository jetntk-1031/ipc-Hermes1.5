(** 2019-01-21 **)
ACTION Act_Background:
	
	IF (eStatus1 = Error) AND bRstErr THEN
		eStatus1	:= Idle;
		udiStatus1	:= 0;
		fbDlyTm(IN := FALSE);
		fbGetTime1(enable := FALSE);
		fbGetTimeDT1(enable := FALSE);
	END_IF
	
	IF eStatus1 <> Error THEN
		
		fbDlyTm(IN := TRUE);
		
		IF fbDlyTm.Q = TRUE THEN
			
			fbGetTime1(enable := TRUE);
			fbGetTimeDT1(enable := TRUE);
			
			IF fbGetTime1.status = 0 AND fbGetTimeDT1.status = 0 THEN
				dtCurrDT	:= fbGetTime1.DT1;
				fbGetTime1(enable := FALSE);
				fbGetTimeDT1(enable := FALSE);
				fbDlyTm(IN := FALSE);
			ELSIF fbGetTime1.status > 0 AND fbGetTime1.status < 65534 THEN
				udiStatus1	:= 10005;	//Get Time Error In Background
				eStatus1	:= Error;
			ELSIF fbGetTimeDT1.status > 0 AND fbGetTimeDT1.status < 65534 THEN
				udiStatus1	:= 10006;	//Get Time Structure Error In Background
				eStatus1	:= Error;
			END_IF

		END_IF
		
	END_IF
	
END_ACTION
