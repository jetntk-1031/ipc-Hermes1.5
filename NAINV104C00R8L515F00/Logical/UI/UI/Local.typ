(*2020-10-08*)
(**)

TYPE
	ePage : 
		(
		UIP0000SSaver := 0, (*Page Screen Saver*)
		UIP0001Startup := 1, (*Page Startup*)
		UIP0002Menu := 2, (*Page Menu*)
		UIP0100Login := 100, (*Page Login*)
		UIP0200OpsGen := 200, (*Page Operation*)
		UIP0201OpsConv := 201, (*Page Operation*)
		UIP0300McInfo := 300, (*Page Machine Info*)
		UIP0400ProdSel := 400, (*Page Product Selection*)
		UIP0600Alm := 600, (*Page Alarm*)
		UIP0700LFCtrl := 700, (*Page Leader Follower Control*)
		UIP0900GenIn := 900, (*Page General Input*)
		UIP0910GenOut := 910, (*Page General Output*)
		UIP0920MtrNPneuCtrl := 920, (*Page Motor And Pneumatic Control*)
		UIP0921ClampNoRS := 921, (*Page Stopper*)
		UIP0922Shutter := 922, (*Page Shutter*)
		UIP0923Stopper := 923, (*Page Stopper*)
		UIP0924ClampWithRS := 924, (*Page Stopper*)
		UIP0931ConvInv := 931, (*Page Conveyor*)
		UIP0934AW := 934, (*Page Auto Width*)
		UIP0940CommCtrl := 940, (*Page Communication Control*)
		UIP0950Simu := 950, (*Page Simu*)
		UIP1000Lang := 1000, (*Page Language And Setup*)
		UIP1020McSetNavi := 1020, (*Page Machine Setting - Navigation*)
		UIP1021McSetGen := 1021, (*Page Machine Setting - General*)
		UIP1022McSetVComm := 1022, (*Page Machine Setting - Vertical Communication*)
		UIP1023McSetHComm := 1023, (*Page Machine Setting - Horizontal Communication*)
		UIP1024McSetAntiGap := 1024, (*Page Machine Setting - Anti-Gap*)
		UIP1040ProdSet := 1040, (*Page Product Setting*)
		UIP1050LFSet := 1050, (*Page Leader Follower Setting*)
		UIP1080UsrMgmt := 1080, (*Page User Management*)
		UIP1081UsrMgmtUsrAccessRgt := 1081 (*Page User Management - Access Right*)
		);
	tyTable : 	STRUCT 
		bSliderActive : BOOL := FALSE;
		bTableActive : BOOL := FALSE;
		sVisuNm : STRING[80] := 'Visu';
		uiSelectedRow : UINT := 1;
		uiSelectedRowOld : UINT := 1;
		uiTablePos : UINT := 1;
	END_STRUCT;
END_TYPE
