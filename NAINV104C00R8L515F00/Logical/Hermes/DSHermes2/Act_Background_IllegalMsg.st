(** 2021-08-01 **)
ACTION Act_Background_IllegalMsg:
	
	IF eStatus2 <> Error THEN
		
		udiStatus2	:= fHermesIllegalMsgDS(fbSequenceDS.eState , tyMsgTypeRcv);
		
		IF udiStatus2 <> 0 THEN
			eStatus2	:= Error;
			
			IF udiStatus2 = 2840 THEN
				udiStatus2	:= 10016;	//Receive BoardAvailable While Downstream In Not Connected State
			ELSIF udiStatus2 = 2841 THEN
				udiStatus2	:= 10017;	//Receive RevokeBoardAvailable While Downstream In Not Connected State
			ELSIF udiStatus2 = 2842 THEN
				udiStatus2	:= 10018;	//Receive MachineReady While Downstream In Not Connected State
			ELSIF udiStatus2 = 2843 THEN
				udiStatus2	:= 10019;	//Receive RevokeMachineReady While Downstream In Not Connected State
			ELSIF udiStatus2 = 2844 THEN
				udiStatus2	:= 10020;	//Receive StartTransport While Downstream In Not Connected State
			ELSIF udiStatus2 = 2845 THEN
				udiStatus2	:= 10021;	//Receive StopTransport While Downstream In Not Connected State
			ELSIF udiStatus2 = 2846 THEN
				udiStatus2	:= 10022;	//Receive TransportFinished While Downstream In Not Connected State
			ELSIF udiStatus2 = 2847 THEN
				udiStatus2	:= 10023;	//Receive BoardForecast While Downstream In Not Connected State
			ELSIF udiStatus2 = 2848 THEN
				udiStatus2	:= 10024;	//Receive ServiceDescription While Downstream In Service Description State
			ELSIF udiStatus2 = 2849 THEN
				udiStatus2	:= 10025;	//Receive BoardAvailable While Downstream In Service Description State
			ELSIF udiStatus2 = 2850 THEN
				udiStatus2	:= 10026;	//Receive RevokeBoardAvailable While Downstream In Service Description State
			ELSIF udiStatus2 = 2851 THEN
				udiStatus2	:= 10027;	//Receive MachineReady While Downstream In Service Description State
			ELSIF udiStatus2 = 2852 THEN
				udiStatus2	:= 10028;	//Receive RevokeMachineReady While Downstream In Service Description State
			ELSIF udiStatus2 = 2853 THEN
				udiStatus2	:= 10029;	//Receive StartTransport While Downstream In Service Description State
			ELSIF udiStatus2 = 2854 THEN
				udiStatus2	:= 10030;	//Receive StopTransport While Downstream In Service Description State
			ELSIF udiStatus2 = 2855 THEN
				udiStatus2	:= 10031;	//Receive TransportFinished While Downstream In Service Description State
			ELSIF udiStatus2 = 2856 THEN
				udiStatus2	:= 10032;	//Receive BoardForecast While Downstream In Service Description State
			ELSIF udiStatus2 = 2857 THEN
				udiStatus2	:= 10033;	//Receive ServiceDescription While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2858 THEN
				udiStatus2	:= 10034;	//Receive BoardAvailable While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2859 THEN
				udiStatus2	:= 10035;	//Receive RevokeBoardAvailable While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2860 THEN
				udiStatus2	:= 10036;	//Receive RevokeMachineReady While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2861 THEN
				udiStatus2	:= 10037;	//Receive StartTransport While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2862 THEN
				udiStatus2	:= 10038;	//Receive StopTransport While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2863 THEN
				udiStatus2	:= 10039;	//Receive TransportFinished While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2864 THEN
				udiStatus2	:= 10040;	//Receive BoardForecast While Downstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2865 THEN
				udiStatus2	:= 10041;	//Receive ServiceDescription While Downstream In Board Available State
			ELSIF udiStatus2 = 2866 THEN
				udiStatus2	:= 10042;	//Receive BoardAvailable While Downstream In Board Available State
			ELSIF udiStatus2 = 2867 THEN
				udiStatus2	:= 10043;	//Receive RevokeBoardAvailable While Downstream In Board Available State
			ELSIF udiStatus2 = 2868 THEN
				udiStatus2	:= 10044;	//Receive RevokeMachineReady While Downstream In Board Available State
			ELSIF udiStatus2 = 2869 THEN
				udiStatus2	:= 10045;	//Receive StartTransport While Downstream In Board Available State
			ELSIF udiStatus2 = 2870 THEN
				udiStatus2	:= 10046;	//Receive StopTransport While Downstream In Board Available State
			ELSIF udiStatus2 = 2871 THEN
				udiStatus2	:= 10047;	//Receive TransportFinished While Downstream In Board Available State
			ELSIF udiStatus2 = 2872 THEN
				udiStatus2	:= 10048;	//Receive BoardForecast While Downstream In Board Available State
			ELSIF udiStatus2 = 2873 THEN
				udiStatus2	:= 10049;	//Receive ServiceDescription While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2874 THEN
				udiStatus2	:= 10050;	//Receive BoardAvailable While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2875 THEN
				udiStatus2	:= 10051;	//Receive RevokeBoardAvailable While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2876 THEN
				udiStatus2	:= 10052;	//Receive MachineReady While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2877 THEN
				udiStatus2	:= 10053;	//Receive StopTransport While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2878 THEN
				udiStatus2	:= 10054;	//Receive TransportFinished While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2879 THEN
				udiStatus2	:= 10055;	//Receive BoardForecast While Downstream In Machine Ready State
			ELSIF udiStatus2 = 2880 THEN
				udiStatus2	:= 10056;	//Receive ServiceDescription While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2881 THEN
				udiStatus2	:= 10057;	//Receive BoardAvailable While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2882 THEN
				udiStatus2	:= 10058;	//Receive RevokeBoardAvailable While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2883 THEN
				udiStatus2	:= 10059;	//Receive MachineReady While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2884 THEN
				udiStatus2	:= 10060;	//Receive StopTransport While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2885 THEN
				udiStatus2	:= 10061;	//Receive TransportFinished While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2886 THEN
				udiStatus2	:= 10062;	//Receive BoardForecast While Downstream In Available And Ready State
			ELSIF udiStatus2 = 2887 THEN
				udiStatus2	:= 10063;	//Receive ServiceDescription While Downstream In Transporting State
			ELSIF udiStatus2 = 2888 THEN
				udiStatus2	:= 10064;	//Receive BoardAvailable While Downstream In Transporting State
			ELSIF udiStatus2 = 2889 THEN
				udiStatus2	:= 10065;	//Receive RevokeBoardAvailable While Downstream In Transporting State
			ELSIF udiStatus2 = 2890 THEN
				udiStatus2	:= 10066;	//Receive MachineReady While Downstream In Transporting State
			ELSIF udiStatus2 = 2891 THEN
				udiStatus2	:= 10067;	//Receive RevokeMachineReady While Downstream In Transporting State
			ELSIF udiStatus2 = 2892 THEN
				udiStatus2	:= 10068;	//Receive StartTransport While Downstream In Transporting State
			ELSIF udiStatus2 = 2893 THEN
				udiStatus2	:= 10069;	//Receive TransportFinished While Downstream In Transporting State
			ELSIF udiStatus2 = 2894 THEN
				udiStatus2	:= 10070;	//Receive BoardForecast While Downstream In Transporting State
			ELSIF udiStatus2 = 2895 THEN
				udiStatus2	:= 10071;	//Receive ServiceDescription While In Transport Finished State
			ELSIF udiStatus2 = 2896 THEN
				udiStatus2	:= 10072;	//Receive BoardAvailable While In Transport Finished State
			ELSIF udiStatus2 = 2897 THEN
				udiStatus2	:= 10073;	//Receive RevokeBoardAvailable While In Transport Finished State
			ELSIF udiStatus2 = 2898 THEN
				udiStatus2	:= 10074;	//Receive MachineReady While In Transport Finished State
			ELSIF udiStatus2 = 2899 THEN
				udiStatus2	:= 10075;	//Receive RevokeMachineReady While In Transport Finished State
			ELSIF udiStatus2 = 2900 THEN
				udiStatus2	:= 10076;	//Receive StartTransport While In Transport Finished State
			ELSIF udiStatus2 = 2901 THEN
				udiStatus2	:= 10077;	//Receive TransportFinished While In Transport Finished State
			ELSIF udiStatus2 = 2902 THEN
				udiStatus2	:= 10078;	//Receive BoardForecast While In Transport Finished State
			ELSIF udiStatus2 = 2903 THEN
				udiStatus2	:= 10079;	//Receive ServiceDescription While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2904 THEN
				udiStatus2	:= 10080;	//Receive BoardAvailable While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2905 THEN
				udiStatus2	:= 10081;	//Receive RevokeBoardAvailable While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2906 THEN
				udiStatus2	:= 10082;	//Receive MachineReady While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2907 THEN
				udiStatus2	:= 10083;	//Receive RevokeMachineReady While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2908 THEN
				udiStatus2	:= 10084;	//Receive StartTransport While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2909 THEN
				udiStatus2	:= 10085;	//Receive StopTransport While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2910 THEN
				udiStatus2	:= 10108;	//Receive TransportFinished While Downstream In Transport Stopped State
			ELSIF udiStatus2 = 2911 THEN
				udiStatus2	:= 10109;	//Receive BoardForecast While Downstream In Transport Stopped State
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
