
(* Hermes Get Timestamp *)
FUNCTION fHermesGetTimestamp
	
	fHermesGetTimestamp	:= TRUE;
	
	memset(ADR(p_sTimestamp) , 0 , SIZEOF(p_sTimestamp));
	memset(ADR(sYear) , 0 , SIZEOF(sYear));
	memset(ADR(sMonth) , 0 , SIZEOF(sMonth));
	memset(ADR(sDay) , 0 , SIZEOF(sDay));
	memset(ADR(sHour) , 0 , SIZEOF(sHour));
	memset(ADR(sMinute) , 0 , SIZEOF(sMinute));
	memset(ADR(sSecond) , 0 , SIZEOF(sSecond));
	memset(ADR(sMillisec) , 0 , SIZEOF(sMillisec));
	
	
	sYear	:= UINT_TO_STRING(tyDTStructure.year);
	
	IF tyDTStructure.year < 10 THEN
		memcpy(ADR(sYear) + 3 , ADR(sYear) , 1);
		memcpy(ADR(sYear) , ADR('000') , 3);
	ELSIF tyDTStructure.year < 100 THEN
		memcpy(ADR(sYear) + 2 , ADR(sYear) , 2);
		memcpy(ADR(sYear) , ADR('000') , 2);
	ELSIF tyDTStructure.year < 1000 THEN
		memcpy(ADR(sYear) + 1 , ADR(sYear) , 3);
		memcpy(ADR(sYear) , ADR('000') , 1);
	END_IF
	
	
	sMonth	:= USINT_TO_STRING(tyDTStructure.month);
	
	IF tyDTStructure.month < 10 THEN
		memcpy(ADR(sMonth) + 1 , ADR(sMonth) , 1);
		memcpy(ADR(sMonth) , ADR('0') , 1);
	END_IF
	
	
	sDay	:= USINT_TO_STRING(tyDTStructure.day);
	
	IF tyDTStructure.day < 10 THEN
		memcpy(ADR(sDay) + 1 , ADR(sDay) , 1);
		memcpy(ADR(sDay) , ADR('0') , 1);
	END_IF
	
	
	sHour	:= USINT_TO_STRING(tyDTStructure.hour);
	
	IF tyDTStructure.hour < 10 THEN
		memcpy(ADR(sHour) + 1 , ADR(sHour) , 1);
		memcpy(ADR(sHour) , ADR('0') , 1);
	END_IF
	
	
	sMinute	:= USINT_TO_STRING(tyDTStructure.minute);
	
	IF tyDTStructure.minute < 10 THEN
		memcpy(ADR(sMinute) + 1 , ADR(sMinute) , 1);
		memcpy(ADR(sMinute) , ADR('0') , 1);
	END_IF
	
	
	sSecond	:= USINT_TO_STRING(tyDTStructure.second);
	
	IF tyDTStructure.second < 10 THEN
		memcpy(ADR(sSecond) + 1 , ADR(sSecond) , 1);
		memcpy(ADR(sSecond) , ADR('0') , 1);
	END_IF
	
	
	sMillisec	:= UINT_TO_STRING(tyDTStructure.millisec);
	
	
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sYear) , 4);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR('-') , 1);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sMonth) , 2);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR('-') , 1);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sDay) , 2);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR('T') , 1);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sHour) , 2);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(':') , 1);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sMinute) , 2);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(':') , 1);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sSecond) , 2);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR('.') , 1);
	memcpy(ADR(p_sTimestamp) + LEN(p_sTimestamp) , ADR(sMillisec) , LEN(sMillisec));
	
END_FUNCTION
