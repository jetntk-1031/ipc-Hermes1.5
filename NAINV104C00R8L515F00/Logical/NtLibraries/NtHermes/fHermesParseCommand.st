
(* Hermes Parse XML Table Data For Send Work Order Info*)
FUNCTION fHermesParseCommand
	
	fHermesParseCommand	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'command') THEN
						
	    p_tyCommand.tyAvl.bCommand	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '0' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandUndefined;
			ELSIF tyXMLTableNxt.sValue = '1' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandLockInputConveyor;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandUnLockInputConveyor;
			ELSIF tyXMLTableNxt.sValue = '3' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandRequestPause;
			ELSIF tyXMLTableNxt.sValue = '4' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandConfirmPause;
			ELSIF tyXMLTableNxt.sValue = '5' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandResumeOperation;
			ELSIF tyXMLTableNxt.sValue = '1000' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandOvenInfeed;
			ELSIF tyXMLTableNxt.sValue = '1001' THEN
				p_tyCommand.tyData.eCommand	:= HermesCommandSelfDefine;	
			END_IF 
		END_IF
				
	
	END_IF
		
END_FUNCTION
