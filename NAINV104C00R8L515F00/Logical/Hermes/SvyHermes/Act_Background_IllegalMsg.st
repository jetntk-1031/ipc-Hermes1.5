(** 2021-08-01 **)
ACTION Act_Background_IllegalMsg:
	
	IF eStatus2 <> Error THEN
		
		udiStatus2	:= fHermesIllegalMsgSvy(fbSequenceSvy.eState , tyMsgTypeRcv);
		
		IF udiStatus2 <> 0 THEN
			eStatus2	:= Error;
			
			IF udiStatus2 = 2940 THEN
				udiStatus2	:= 10016;	//Receive SetConfiguration While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2941 THEN
				udiStatus2	:= 10017;	//Receive GetConfiguration While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2942 THEN
				udiStatus2	:= 10018;	//Receive CurrConfiguration While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2943 THEN
				udiStatus2	:= 10019;	//Receive SendWorkOrderInfo While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2944 THEN
				udiStatus2	:= 10020;	//Receive QueryWorkOrderInfo While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2945 THEN
				udiStatus2	:= 10021;	//Receive BoardArrived While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2946 THEN
				udiStatus2	:= 10022;	//Receive BoardDeparted While Supervisory In Not Connected State
			ELSIF udiStatus2 = 2947 THEN
				udiStatus2	:= 10023;	
			ELSIF udiStatus2 = 2948 THEN
				udiStatus2	:= 10024;	
			ELSIF udiStatus2 = 2949 THEN
				udiStatus2	:= 10025;	
			ELSIF udiStatus2 = 2950 THEN
				udiStatus2	:= 10026;	
			ELSIF udiStatus2 = 2951 THEN
				udiStatus2	:= 10027;	//Receive Supervisory ServiceDescription While Supervisory In Service Description State
			ELSIF udiStatus2 = 2952 THEN
				udiStatus2	:= 10028;	//Receive SetConfiguration While Supervisory In Service Description State
			ELSIF udiStatus2 = 2953 THEN
				udiStatus2	:= 10029;	//Receive GetConfiguration While Supervisory In Service Description State
			ELSIF udiStatus2 = 2954 THEN
				udiStatus2	:= 10030;	//Receive CurrConfiguration While Supervisory In Service Description State
			ELSIF udiStatus2 = 2955 THEN
				udiStatus2	:= 10031;	//Receive SendWorkOrderInfo While Supervisory In Service Description State
			ELSIF udiStatus2 = 2956 THEN
				udiStatus2	:= 10032;	//Receive QueryWorkOrderInfo While Supervisory In Service Description State
			ELSIF udiStatus2 = 2957 THEN
				udiStatus2	:= 10033;	//Receive BoardArrived While Supervisory In Service Description State
			ELSIF udiStatus2 = 2958 THEN
				udiStatus2	:= 10034;	//Receive BoardDeparted While Supervisory In Service Description State
			ELSIF udiStatus2 = 2959 THEN
				udiStatus2	:= 10035;	
			ELSIF udiStatus2 = 2960 THEN
				udiStatus2	:= 10036;	
			ELSIF udiStatus2 = 2961 THEN
				udiStatus2	:= 10037;	
			ELSIF udiStatus2 = 2962 THEN
				udiStatus2	:= 10038;	
			ELSIF udiStatus2 = 2963 THEN
				udiStatus2	:= 10039;	//Receive Supervisory ServiceDescription While Supervisory In Connected State
			ELSIF udiStatus2 = 2964 THEN
				udiStatus2	:= 10040;	//Receive CurrConfiguration While Supervisory In Connected State
			ELSIF udiStatus2 = 2965 THEN
				udiStatus2	:= 10041;	//Receive QueryWorkOrderInfo While Supervisory In Connected State
			ELSIF udiStatus2 = 2966 THEN
				udiStatus2	:= 10042;	//Receive BoardArrived While Supervisory In Connected State
			ELSIF udiStatus2 = 2967 THEN
				udiStatus2	:= 10043;	//Receive BoardDeparted While Supervisory In Connected State
			ELSIF udiStatus2 = 2968 THEN
				udiStatus2	:= 10044;	
			ELSIF udiStatus2 = 2969 THEN
				udiStatus2	:= 10045;	
			ELSIF udiStatus2 = 2970 THEN
				udiStatus2	:= 10046;
			ELSIF udiStatus2 = 2971 THEN
				udiStatus2	:= 10047;
			END_IF
			
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
			tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
			tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
			tyNotificationSnd.tyAvl.bDescription		:= TRUE;
			tyNotificationSnd.tyData.eSeverity			:= HermesSeverityFatalError;
			tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus2);
			tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus2].sAlmText;
			
		END_IF
		
	END_IF

END_ACTION
