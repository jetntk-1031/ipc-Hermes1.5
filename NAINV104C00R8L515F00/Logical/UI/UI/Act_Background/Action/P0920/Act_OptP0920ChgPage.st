
ACTION Act_OptP0920ChgPage:
	
	IF tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.bRtCompl THEN
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.bRtCompl	:= FALSE;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnStopper.bValue		:= FALSE;
		
		eChgPage			:= UIP0923Stopper;
		
		
	ELSIF tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnConv.bRtCompl THEN
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnConv.bRtCompl		:= FALSE;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnConv.bValue			:= FALSE;
		
		eChgPage			:= UIP0931ConvInv;
		
	ELSIF tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.bRtCompl = TRUE THEN
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.bRtCompl			:= FALSE;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnAW.bValue			:= FALSE;
		
		eChgPage			:= UIP0934AW;
		
	ELSIF tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.bRtCompl = TRUE THEN
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.bRtCompl		:= FALSE;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampNoRS.bValue		:= FALSE;
		
		eChgPage			:= UIP0921ClampNoRS;
		
	ELSIF tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.bRtCompl = TRUE THEN
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.bRtCompl	:= FALSE;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnClampWithRS.bValue		:= FALSE;
		
		eChgPage			:= UIP0924ClampWithRS;
		
	ELSIF tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.bRtCompl = TRUE THEN
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.bRtCompl	:= FALSE;
		tyP0920MtrNPneuCtrl.tyMtrNPneuCtrl.tyBtnShutter.bValue		:= FALSE;
		
		eChgPage			:= UIP0922Shutter;
		
	END_IF

END_ACTION
