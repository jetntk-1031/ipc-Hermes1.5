(*2018-12-11*)
(**)
(*Action*)

TYPE
	ePneuAction : 
		(
		PneuActIdle,
		PneuActSetAll,
		PneuActRstAll,
		PneuActSetExt,
		PneuActSetRet,
		PneuActExt,
		PneuActRet,
		PneuActExtSenToMidSen,
		PneuActMidSenToRetSen,
		PneuActRetSenToMidSen,
		PneuActMidSenToExtSen
		);
END_TYPE

(**)

TYPE
	eClampType : 
		(
		ClampNoRS := 0,
		ThreeClampsWithRS := 1
		);
END_TYPE
