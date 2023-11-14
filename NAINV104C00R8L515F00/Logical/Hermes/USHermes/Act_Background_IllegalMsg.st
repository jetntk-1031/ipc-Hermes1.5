(** 2019-05-04 **)
ACTION Act_Background_IllegalMsg:
	
	IF eStatus2 <> Error THEN
		
		udiStatus2	:= fHermesIllegalMsgUS(fbSequenceUS.eState , tyMsgTypeRcv , fbSequenceUS.bBoardAvailable);
		
		IF udiStatus2 <> 0 THEN
			eStatus2	:= Error;
			
			IF udiStatus2 = 2770 THEN
				udiStatus2	:= 10016;	//Receive ServiceDescription While Upstream In Not Connected State
			ELSIF udiStatus2 = 2771 THEN
				udiStatus2	:= 10017;	//Receive BoardAvailable While Upstream In Not Connected State
			ELSIF udiStatus2 = 2772 THEN
				udiStatus2	:= 10018;	//Receive RevokeBoardAvailable While Upstream In Not Connected State
			ELSIF udiStatus2 = 2773 THEN
				udiStatus2	:= 10019;	//Receive MachineReady While Upstream In Not Connected State
			ELSIF udiStatus2 = 2774 THEN
				udiStatus2	:= 10020;	//Receive RevokeMachineReady While Upstream In Not Connected State
			ELSIF udiStatus2 = 2775 THEN
				udiStatus2	:= 10021;	//Receive StartTransport While Upstream In Not Connected State
			ELSIF udiStatus2 = 2776 THEN
				udiStatus2	:= 10022;	//Receive StopTransport While Upstream In Not Connected State
			ELSIF udiStatus2 = 2777 THEN
				udiStatus2	:= 10023;	//Receive TransportFinished While Upstream In Not Connected State
			ELSIF udiStatus2 = 2778 THEN
				udiStatus2	:= 10024;	//Receive BoardForecast While Upstream In Not Connected State
			ELSIF udiStatus2 = 2779 THEN
				udiStatus2	:= 10025;	//Receive BoardAvailable While Upstream In Service Description State
			ELSIF udiStatus2 = 2780 THEN
				udiStatus2	:= 10026;	//Receive RevokeBoardAvailable While Upstream In Service Description State
			ELSIF udiStatus2 = 2781 THEN
				udiStatus2	:= 10027;	//Receive MachineReady While Upstream In Service Description State
			ELSIF udiStatus2 = 2782 THEN
				udiStatus2	:= 10028;	//Receive RevokeMachineReady While Upstream In Service Description State
			ELSIF udiStatus2 = 2783 THEN
				udiStatus2	:= 10029;	//Receive StartTransport While Upstream In Service Description State
			ELSIF udiStatus2 = 2784 THEN
				udiStatus2	:= 10030;	//Receive StopTransport While Upstream In Service Description State
			ELSIF udiStatus2 = 2785 THEN
				udiStatus2	:= 10031;	//Receive TransportFinished While Upstream In Service Description State
			ELSIF udiStatus2 = 2786 THEN
				udiStatus2	:= 10032;	//Receive BoardForecast While Upstream In Service Description State
			ELSIF udiStatus2 = 2787 THEN
				udiStatus2	:= 10033;	//Receive ServiceDescription While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2788 THEN
				udiStatus2	:= 10034;	//Receive RevokeBoardAvailable While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2789 THEN
				udiStatus2	:= 10035;	//Receive MachineReady While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2790 THEN
				udiStatus2	:= 10036;	//Receive RevokeMachineReady While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2791 THEN
				udiStatus2	:= 10037;	//Receive StartTransport While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2792 THEN
				udiStatus2	:= 10038;	//Receive StopTransport While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2793 THEN
				udiStatus2	:= 10039;	//Receive TransportFinished While Upstream In Not Available Not Ready State
			ELSIF udiStatus2 = 2794 THEN
				udiStatus2	:= 10040;	//Receive ServiceDescription While Upstream In Board Available State
			ELSIF udiStatus2 = 2795 THEN
				udiStatus2	:= 10041;	//Receive BoardAvailable While Upstream In Board Available State
			ELSIF udiStatus2 = 2796 THEN
				udiStatus2	:= 10042;	//Receive MachineReady While Upstream In Board Available State
			ELSIF udiStatus2 = 2797 THEN
				udiStatus2	:= 10043;	//Receive RevokeMachineReady While Upstream In Board Available State
			ELSIF udiStatus2 = 2798 THEN
				udiStatus2	:= 10044;	//Receive StartTransport While Upstream In Board Available State
			ELSIF udiStatus2 = 2799 THEN
				udiStatus2	:= 10045;	//Receive StopTransport While Upstream In Board Available State
			ELSIF udiStatus2 = 2800 THEN
				udiStatus2	:= 10046;	//Receive TransportFinished While Upstream In Board Available State
			ELSIF udiStatus2 = 2801 THEN
				udiStatus2	:= 10047;	//Receive BoardForecast While Upstream In Board Available State
			ELSIF udiStatus2 = 2802 THEN
				udiStatus2	:= 10048;	//Receive ServiceDescription While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2803 THEN
				udiStatus2	:= 10049;	//Receive RevokeBoardAvailable While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2804 THEN
				udiStatus2	:= 10050;	//Receive MachineReady While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2805 THEN
				udiStatus2	:= 10051;	//Receive RevokeMachineReady While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2806 THEN
				udiStatus2	:= 10052;	//Receive StartTransport While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2807 THEN
				udiStatus2	:= 10053;	//Receive StopTransport While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2808 THEN
				udiStatus2	:= 10054;	//Receive TransportFinished While Upstream In Machine Ready State
			ELSIF udiStatus2 = 2809 THEN
				udiStatus2	:= 10055;	//Receive ServiceDescription While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2810 THEN
				udiStatus2	:= 10056;	//Receive BoardAvailable While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2811 THEN
				udiStatus2	:= 10057;	//Receive MachineReady While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2812 THEN
				udiStatus2	:= 10058;	//Receive RevokeMachineReady While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2813 THEN
				udiStatus2	:= 10059;	//Receive StartTransport While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2814 THEN
				udiStatus2	:= 10060;	//Receive StopTransport While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2815 THEN
				udiStatus2	:= 10061;	//Receive TransportFinished While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2816 THEN
				udiStatus2	:= 10062;	//Receive BoardForecast While Upstream In Available And Ready State
			ELSIF udiStatus2 = 2817 THEN
				udiStatus2	:= 10063;	//Receive ServiceDescription While Upstream In Transporting State
			ELSIF udiStatus2 = 2818 THEN
				udiStatus2	:= 10064;	//Receive Twice Board Available While Upstream In Transporting State
			ELSIF udiStatus2 = 2819 THEN
				udiStatus2	:= 10065;	//Receive RevokeBoardAvailable Without BoardAvailable While Upstream In Transporting State
			ELSIF udiStatus2 = 2820 THEN
				udiStatus2	:= 10066;	//Receive MachineReady While Upstream In Transporting State
			ELSIF udiStatus2 = 2821 THEN
				udiStatus2	:= 10067;	//Receive RevokeMachineReady While Upstream In Transporting State
			ELSIF udiStatus2 = 2822 THEN
				udiStatus2	:= 10068;	//Receive StartTransport While Upstream In Transporting State
			ELSIF udiStatus2 = 2823 THEN
				udiStatus2	:= 10069;	//Receive StopTransport While Upstream In Transporting State
			ELSIF udiStatus2 = 2824 THEN
				udiStatus2	:= 10070;	//Receive ServiceDescription While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2825 THEN
				udiStatus2	:= 10071;	//Receive BoardAvailable While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2826 THEN
				udiStatus2	:= 10072;	//Receive RevokeBoardAvailable While UpstreamWhile Upstream In Transport Finished State
			ELSIF udiStatus2 = 2827 THEN
				udiStatus2	:= 10073;	//Receive MachineReady While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2828 THEN
				udiStatus2	:= 10074;	//Receive RevokeMachineReady While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2829 THEN
				udiStatus2	:= 10075;	//Receive StartTransport While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2830 THEN
				udiStatus2	:= 10076;	//Receive TransportFinished While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2831 THEN
				udiStatus2	:= 10077;	//Receive StopTransport While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2832 THEN
				udiStatus2	:= 10078;	//Receive BoardForecast While Upstream In Transport Finished State
			ELSIF udiStatus2 = 2833 THEN
				udiStatus2	:= 10079;	//Receive ServiceDescription While Upstream In Transport Stopped State
			ELSIF udiStatus2 = 2834 THEN
				udiStatus2	:= 10080;	//Receive Twice Board Available While Upstream In Transport Stopped State
			ELSIF udiStatus2 = 2835 THEN
				udiStatus2	:= 10081;	//Receive RevokeBoardAvailable Without BoardAvailable While Upstream In Transport Stopped State
			ELSIF udiStatus2 = 2836 THEN
				udiStatus2	:= 10082;	//Receive MachineReady While Upstream In Transport Stopped State
			ELSIF udiStatus2 = 2837 THEN
				udiStatus2	:= 10083;	//Receive RevokeMachineReady While Upstream In Transport Stopped State
			ELSIF udiStatus2 = 2838 THEN
				udiStatus2	:= 10084;	//Receive StartTransport While Upstream In Transport Stopped State
			ELSIF udiStatus2 = 2839 THEN
				udiStatus2	:= 10085;	//Receive StopTransport While Upstream In Transport Stopped State
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
