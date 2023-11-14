
(* Hermes Generate UUID *)
FUNCTION fHermesGenerateUUID
	
	fHermesGenerateUUID	:= TRUE;
	
	memset(ADR(p_sUUID) , 0 , SIZEOF(p_sUUID));
	
	//Year Difference: From 1970
	fConvertUSINTToHex(ADR(sTemp2) , UINT_TO_USINT((tyDTStructure.year - 1970)));
	p_sUUID	:= sTemp2;
	
	//Month
	fConvertUSINTToHex(ADR(sTemp2) , tyDTStructure.month);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	//Day
	fConvertUSINTToHex(ADR(sTemp2) , tyDTStructure.day);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	//Hour
	fConvertUSINTToHex(ADR(sTemp2) , tyDTStructure.hour);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR('-') , 1);
	
	//Minute
	fConvertUSINTToHex(ADR(sTemp2) , tyDTStructure.minute);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	//Second
	fConvertUSINTToHex(ADR(sTemp2) , tyDTStructure.second);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR('-') , 1);
	
	//Millisec
	fConvertUINTToHex(ADR(sTemp4) , tyDTStructure.millisec);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp4) , 4);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR('-') , 1);
	
	//Microsec
	fConvertUINTToHex(ADR(sTemp4) , tyDTStructure.microsec);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp4) , 4);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR('-') , 1);
	
	//Mac Address
	fConvertUSINTToHex(ADR(sTemp2) , a_usiMacAddr[0]);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	fConvertUSINTToHex(ADR(sTemp2) , a_usiMacAddr[1]);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	fConvertUSINTToHex(ADR(sTemp2) , a_usiMacAddr[2]);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	fConvertUSINTToHex(ADR(sTemp2) , a_usiMacAddr[3]);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	fConvertUSINTToHex(ADR(sTemp2) , a_usiMacAddr[4]);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
	fConvertUSINTToHex(ADR(sTemp2) , a_usiMacAddr[5]);
	memcpy(ADR(p_sUUID) + LEN(p_sUUID) , ADR(sTemp2) , 2);
	
END_FUNCTION
