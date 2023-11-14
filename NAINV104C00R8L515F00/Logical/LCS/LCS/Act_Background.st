(** 2019-05-21 **)
ACTION Act_Background:
	
	Act_Background_LiveData;
	
	IF udiFlagNo = 0 THEN
		memset(ADR(tyTagNm.sMcAlmMsg),0,SIZEOF(tyTagNm.sMcAlmMsg));
		FOR udi := 1 TO c_udiAlarmCurrMax DO
			IF 	p_tyLinkAlarmCurrList[udi].sMsg <> '' THEN
				tyTagNm.sMcAlmMsg[udi] := p_tyLinkAlarmCurrList[udi].sMsg;
			ELSIF udi =1 THEN
				EXIT;
			ELSE
				udiFlagNo := udi;
				EXIT;
			END_IF
		END_FOR
	ELSE //For additional alarm occur
		FOR udi := 1 TO c_udiAlarmCurrMax DO
			IF 	p_tyLinkAlarmCurrList[udi].sMsg <> '' THEN
			ELSE
				IF udiFlagNo <> udi THEN
					udiFlagNo := 0;
				END_IF
				EXIT;
			END_IF
		END_FOR
	END_IF
	
	IF EDGENEG(p_bError) THEN
		udiFlagNo := 0;
		memset(ADR(tyTagNm.sMcAlmMsg),0,SIZEOF(tyTagNm.sMcAlmMsg));
	END_IF
	
END_ACTION
