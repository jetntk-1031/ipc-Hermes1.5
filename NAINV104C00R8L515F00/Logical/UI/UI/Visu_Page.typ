(*2020-10-08*)
(**)
(*Page*)

TYPE
	tyUIP0000SSaver : 	STRUCT 
		tySSaver : tyLyrP0000SSaver := (tyTxtMcStat:=(usiValueIdx:=3));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1));
		tyMsgBoxLoginAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=1),tyTxtMsg:=(usiValueIdx:=173),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnNo:=(usiBitmapIdx:=4,usiTxtIdx:=6),tyLyr:=(uiRtStat:=0));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0001Startup : 	STRUCT 
		tyStartup : tyLyrP0001Startup;
		tyInitial : tyLyrP0001Initial;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1));
		tyMsgBoxIPConfig : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyTxtTitle:=(usiValueIdx:=25));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0002Menu : 	STRUCT 
		tyMenu : tyLyrP0002Menu := (tyBtnAlm:=(uiMaskRtStat:=0),tyBtnCommCtrl:=(uiMaskRtStat:=0),tyBtnGenInput:=(uiMaskRtStat:=0),tyBtnGenOutput:=(uiMaskRtStat:=0),tyBtnLang:=(uiMaskRtStat:=0),tyBtnLFCtrl:=(uiMaskRtStat:=0),tyBtnLFSet:=(uiMaskRtStat:=0),tyBtnMcInfo:=(uiMaskRtStat:=0),tyBtnMcSet:=(uiMaskRtStat:=0),tyBtnMnlRst:=(uiRtStat:=1),tyBtnMovCtrl:=(uiMaskRtStat:=0),tyBtnOpt:=(uiMaskRtStat:=0),tyBtnProdSel:=(uiMaskRtStat:=0),tyBtnProdSet:=(uiMaskRtStat:=0),tyBtnSimu:=(uiMaskRtStat:=0,uiRtStat:=1),tyBtnUsrMgmt:=(uiMaskRtStat:=0),tyGenMaskLyr:=(uiRtStat:=1),tySetMaskLyr:=(uiRtStat:=1));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxSelRcpWaitingBrd : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=2),tyTxtMsg:=(usiValueIdx:=100),tyBtnYes:=(uiRtStat:=1,usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0100Login : 	STRUCT 
		tyLogin : tyLyrP0100Login := (tyStringPw:=(sKeypadTitle:='Password'),tyStringUsrNm:=(sKeypadTitle:='User Name'));
		tyLogout : tyLyrP0100Logout := (tyLyr:=(uiRtStat:=1));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxNmNotExist : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=23),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxPwMismatch : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=24),tyTxtTitle:=(usiValueIdx:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0200OpsGen : 	STRUCT 
		tyOps : tyLyrP0200OpsGen := (tyBitmapDSCommIcon:=(uiMaskRtStat:=0),tyBitmapUSCommIcon:=(uiMaskRtStat:=0),tyBitmapRlsNewProd:=(uiRtStat:=1),tyBtnRlsNewProd:=(uiRtStat:=1));
		tyUSVSMEMA : tyLyrP0200OpsUSVSMEMA := (tyBtnUBAStat:=(uiRtStat:=1),tyBtnDual:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyDSVSMEMA : tyLyrP0200OpsDSVSMEMA := (tyBtnDSBStat:=(uiRtStat:=1),tyBtnDual:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyUSVSMEMA1 : tyLyrP0200OpsUSVSMEMA1 := (tyBtnUBAStat:=(uiRtStat:=1),tyBtnDual:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyDSVSMEMA1 : tyLyrP0200OpsDSVSMEMA1 := (tyBtnDSBStat:=(uiRtStat:=1),tyBtnDual:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyUSVSMEMA2 : tyLyrP0200OpsUSVSMEMA2 := (tyBtnUBAStat:=(uiRtStat:=1),tyBtnDual:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyBypsInitConv : tyLyrP0200OpsBypsInitConv := (tyLyr:=(uiRtStat:=1));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxRcpSelMsg : tyLyrC0008MsgBox;
		tyMsgBoxRstWaitingBrdAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=23),tyTxtMsg:=(usiValueIdx:=125),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyLyr:=(uiRtStat:=0));
		tyRcyMsgHide : tyLyrC0010RcyMsg := (tyHotspotClose:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyRcyMsg : tyLyrC0010RcyMsg;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0201OpsConv : 	STRUCT 
		tyOps : tyLyrP0201OpsConv := (tyBitmapRlsNewProd:=(uiRtStat:=1),tyBtnRlsNewProd:=(uiRtStat:=1));
		tyIOMonitor : tyLyrP0201OpsConvIOMonitor := (tyLyr:=(uiRtStat:=1));
		tyIOMonitorXStd : tyLyrP0201OpsConvIOMonitorXStd := (tyLyr:=(uiRtStat:=1));
		tyIOMonitorXStdMachineSafety : tyLyrP0201OpsConvIOMonitorMSafe;
		tyBypsInitConv : tyLyrP0200OpsBypsInitConv := (tyLyr:=(uiRtStat:=1));
		tyChgParam : tyLyrP0201OpsConvChgParam := (tyNumProdWidth:=(sKeypadTitle:='Product Width'),tyLyr:=(uiRtStat:=1));
		tyChgParamBkUp : tyLyrP0201OpsConvChgParam;
		tyNaviHide : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=1));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBitmapPageDisp:=(uiRtStat:=1));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=7),tyTxtMsg:=(usiValueIdx:=71),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
		tyRcpPopUp : tyLyrC0012RcpPopUp := (tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0300McInfo : 	STRUCT 
		tyMcInfo : tyLyrP0300McInfo;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0400ProdSel : 	STRUCT 
		tyProdSel : tyLyrP0400ProdSel := (tyStringSearch:=(sKeypadTitle:='Search Keyword'),tyTableRecipe:=(a_tyHotspot:=[(bRtCompl:=TRUE,bValue:=TRUE),14((0))],a_tyStringDataCol0:=[(sValue:='1'),(sValue:='2'),(sValue:='3'),(sValue:='4'),(sValue:='5'),(sValue:='6'),(sValue:='7'),(sValue:='8'),(sValue:='9'),2((sValue:='10')),4((0))],a_tyStringDataCol1:=[(usiColor:=1),14((0))],a_tyStringDataCol2:=[(usiColor:=1),14((0))],tyUISlider:=(iMaxValue:=1991,iMinValue:=1,iValue:=1),tyStringTitle0Col0Row0:=(sValue:='No'),tyStringTitle1Col1Row0:=(sValue:='Program Name'),tyStringTitle2Col2Row0:=(sValue:='Width')));
		tyRcpDet : tyLyrP0400RcpDet := (tyLyr:=(uiRtStat:=1));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxListErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=42),tyTxtTitle:=(usiValueIdx:=2));
		tyMsgBoxRcpParamErr : tyLyrC0008MsgBox;
		tyMsgBoxLoadErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=41),tyTxtTitle:=(usiValueIdx:=2));
		tyMsgBoxSelRcpAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=43),tyTxtTitle:=(usiValueIdx:=2));
		tyMsgBoxSelRcpNoNm : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=44),tyTxtTitle:=(usiValueIdx:=2));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=71),tyTxtTitle:=(usiValueIdx:=2));
		tyMsgBoxGoToLFCtrlAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=2),tyTxtMsg:=(usiValueIdx:=163),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyLyr:=(uiRtStat:=0));
		tyRcpPopUp : tyLyrC0012RcpPopUp := (tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0600Alm : 	STRUCT 
		tyAlm : tyLyrP0600Alm := (tyBtnCurr:=(bValue:=TRUE));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyRcyMsg : tyLyrC0010RcyMsg;
		tyRcyMsgHide : tyLyrC0010RcyMsg := (tyLyr:=(uiRtStat:=1));
		tyBtnCurr : tyUIBtn;
		tyBtnHistory : tyUIBtn;
		tyAlarm : tyUIAlarm;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0700LFCtrl : 	STRUCT 
		tyLdr : tyLyrP0700LFCtrl := (tyBtnChgSeqAuto:=(uiMaskRtStat:=1),tyBtnChgSeqMnl:=(uiMaskRtStat:=1),tyTable1List:=(a_tyHotspot:=[(bRtCompl:=TRUE,bValue:=TRUE),14(0)],a_tyStringDataCol0:=[(sValue:='1'),(sValue:='2'),(sValue:='3'),(sValue:='4'),(sValue:='5'),(sValue:='6'),(sValue:='7'),(sValue:='8'),(sValue:='9'),(sValue:='10'),(sValue:='11'),(sValue:='12'),3((0))],a_tyStringDataCol1:=[0,14((0))],a_tyStringDataCol2:=[0,14((0))],a_tyStringDataCol4:=[(usiColor:=0),14((0))],a_tyTxtDataCol3:=[(usiColor:=1),14((0))],tyStringTitle0Col0Row0:=(sValue:='No'),tyStringTitle1Col1Row0:=(sValue:='Machine Name'),tyStringTitle2Col2Row0:=(sValue:='IP Address'),tyStringTitle3Col3Row0:=(sValue:='Status'),tyStringTitle4Col4Row0:=(sValue:='Recipe No'),tyUISlider:=(iMaxValue:=50,iMinValue:=1,iValue:=1,uiRtStat:=0)),tyLyr:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxChgAllAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=156),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2));
		tyMsgBoxChgSeqAutoAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=157),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2));
		tyMsgBoxChgSeqMnlAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=158),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2));
		tyMsgBoxSyncPLCTmAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=159),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2));
		tyMsgBoxTerminateOpsAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=160),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2));
		tyMsgBoxErrorAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=165),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0900GenIn : 	STRUCT 
		tyGenIn : tyLyrP0900GenIn;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0910GenOut : 	STRUCT 
		tyGenOut : tyLyrP0910GenOut;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0920MtrNPneuCtrl : 	STRUCT 
		tyMtrNPneuCtrl : tyLyrP0920MtrNPneuCtrl;
		tyFullMaskHide : tyLyrC0002FullMask := (tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=20),tyLyr:=(uiRtStat:=0));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=21),tyLyr:=(uiRtStat:=0));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=12),tyLyr:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0921ClampNoRS : 	STRUCT 
		tyCom : tyLyrP0921ClampNoRSCom;
		tyDC : tyLyrP0921ClampNoRSDC := (tyLyr:=(uiRtStat:=1));
		tyFB : tyLyrP0921ClampNoRSFB;
		tyFullMaskHide : tyLyrC0002FullMask := (tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=20),tyLyr:=(uiRtStat:=0));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=21),tyLyr:=(uiRtStat:=0));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=12),tyLyr:=(uiRtStat:=0));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0922InletNOutletShutter : 	STRUCT 
		tyInletShutterCom : tyLyrP0922InletShutterCom;
		tyInletShutterDC : tyLyrP0922InletShutterDC := (tyLyr:=(uiRtStat:=1));
		tyInletShutterFB : tyLyrP0922InletShutterFB;
		tyInletShutterDis : tyLyrP0922InletShutterDis := (tyLyr:=(uiRtStat:=1));
		tyOutletShutterCom : tyLyrP0922OutletShutterCom;
		tyOutletShutterDC : tyLyrP0922OutletShutterDC := (tyLyr:=(uiRtStat:=1));
		tyOutletShutterFB : tyLyrP0922OutletShutterFB;
		tyOutletShutterDis : tyLyrP0922OutletShutterDis := (tyLyr:=(uiRtStat:=1));
		tyDualMaskHide : tyLyrC0003DualMask := (tyLyr:=(uiRtStat:=1));
		tyDualMaskEStop : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=20),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=20));
		tyDualMaskCWSig : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=21),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=21));
		tyDualMaskSafetyRly : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=12),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=12));
		tyDualMaskAWMovInterrupt : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=17),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=17));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0923Stopper : 	STRUCT 
		tyCom : tyLyrP0923StopperCom;
		tyDC : tyLyrP0923StopperDC := (tyLyr:=(uiRtStat:=1));
		tyFB : tyLyrP0923StopperFB;
		tyFullMaskHide : tyLyrC0002FullMask := (tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=20),tyLyr:=(uiRtStat:=0));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=21),tyLyr:=(uiRtStat:=0));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=12),tyLyr:=(uiRtStat:=0));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0924ClampWithRS : 	STRUCT 
		tyClamp1WithRSCom : tyLyrP0924Clamp1WithRSCom;
		tyClamp1WithRSDC : tyLyrP0924Clamp1WithRSDC := (tyLyr:=(uiRtStat:=1));
		tyClamp1WithRSFB : tyLyrP0924Clamp1WithRSFB;
		tyClamp1WithRSDis : tyLyrP0924Clamp1WithRSDis := (tyLyr:=(uiRtStat:=1));
		tyClamp2WithRSCom : tyLyrP0924Clamp2WithRSCom;
		tyClamp2WithRSDC : tyLyrP0924Clamp2WithRSDC := (tyLyr:=(uiRtStat:=1));
		tyClamp2WithRSFB : tyLyrP0924Clamp2WithRSFB;
		tyClamp2WithRSDis : tyLyrP0924Clamp2WithRSDis := (tyLyr:=(uiRtStat:=1));
		tyClamp3WithRSCom : tyLyrP0924Clamp3WithRSCom;
		tyClamp3WithRSDC : tyLyrP0924Clamp3WithRSDC := (tyLyr:=(uiRtStat:=1));
		tyClamp3WithRSFB : tyLyrP0924Clamp3WithRSFB;
		tyClamp3WithRSDis : tyLyrP0924Clamp3WithRSDis := (tyLyr:=(uiRtStat:=1));
		tyDualMaskHide : tyLyrC0003DualMask := (tyLyr:=(uiRtStat:=1));
		tyDualMaskEStop : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=20),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=20));
		tyDualMaskCWSig : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=21),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=21));
		tyDualMaskSafetyRly : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=12),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=12));
		tyDualMaskAWMovInterrupt : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=17),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=17));
		tyNaviLyr1 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=1));
		tyNaviLyr2 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=2));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0931ConvInv : 	STRUCT 
		tyConvCom : tyLyrP0931ConvCom;
		tyConvDC : tyLyrP0931ConvDC;
		tyConvFB : tyLyrP0931ConvFB := (tyBtnStop:=(bRtLk:=TRUE,bValue:=TRUE));
		tyInvCom : tyLyrP0931InvCom;
		tyInvDC : tyLyrP0931InvDC;
		tyInvFB : tyLyrP0931InvFB := (tyBtnStop:=(bRtLk:=TRUE,bValue:=TRUE));
		tyDualMaskHide : tyLyrC0003DualMask := (tyLyr:=(uiRtStat:=1));
		tyDualMaskEStop : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=20),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=20));
		tyDualMaskCWSig : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=21),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=21));
		tyDualMaskSafetyRly : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=12),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=12));
		tyDualMaskInletShutterInterrupt : tyLyrC0003DualMask := (tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=27));
		tyDualMaskOutletShutterInterrupt : tyLyrC0003DualMask := (tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=28));
		tyDualMaskInletNInvalid : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=23),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=27));
		tyDualMaskOutletNInvalid : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=23),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=28));
		tyDualMaskInvalidPos : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=0,usiTxtIdx:=23));
		tyDualMaskInvertInterrupt : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=1),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=29));
		tyDualMaskStopperInterruptInv : tyLyrC0003DualMask := (tyBtnLeftMask:=(uiMaskRtStat:=1),tyBtnRgtMask:=(uiMaskRtStat:=0,usiTxtIdx:=30));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0934AW : 	STRUCT 
		tyAW : tyLyrP0934AW := (tyNumNewWidth:=(sKeypadTitle:='New Width'));
		tyMotionStd : tyLyrC0001MotionStdAW := (tyBitmapMc:=(usiValueIdx:=2),tyBtnOpenLmtSen:=(usiTxtIdx:=3),tyBtnCloseLmtSen:=(usiTxtIdx:=1),tyBtnJogOpen:=(usiBitmapIdx:=2,usiTxtIdx:=2),tyBtnJogClose:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnStop:=(bValue:=TRUE),tyNumNomSpd:=(sKeypadTitle:='Normal Speed'),tyNumSlwSpd:=(sKeypadTitle:='Slow Speed'),tyNumStepSize:=(sKeypadTitle:='Step Size'),tyNumTargetPos:=(sKeypadTitle:='Target Position'));
		tyFullMaskHide : tyLyrC0002FullMask := (tyBtnMask:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=20),tyLyr:=(uiRtStat:=0));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=21),tyLyr:=(uiRtStat:=0));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=12),tyLyr:=(uiRtStat:=0));
		tyFullMaskLftSenInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=1),tyLyr:=(uiRtStat:=0));
		tyFullMaskRgtSenInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=2),tyLyr:=(uiRtStat:=0));
		tyFullMaskInletShutterInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=25),tyLyr:=(uiRtStat:=0));
		tyFullMaskOutletShutterInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=26),tyLyr:=(uiRtStat:=0));
		tyFullMaskHomeSenInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=23),tyLyr:=(uiRtStat:=0));
		tyFullMaskRemoteSenInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=23),tyLyr:=(uiRtStat:=0));
		tyFullMaskInterrupt : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=26),tyLyr:=(uiRtStat:=0));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0940CommCtrl : 	STRUCT 
		tyUSSMEMA : tyLyrP0940CommCtrlUSSMEMA;
		tyDSSMEMA : tyLyrP0940CommCtrlDSSMEMA;
		tyUSSMEMA2 : tyLyrP0940CommCtrlUSSMEMA2;
		tyFullMaskHide : tyLyrC0002FullMask := (tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=20),tyLyr:=(uiRtStat:=0));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=21),tyLyr:=(uiRtStat:=0));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=12),tyLyr:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP0950Simu : 	STRUCT 
		tySimu : tyLyrP0950Simu;
		tyFullMaskHide : tyLyrC0002FullMask := (tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=1));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=2));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=3));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1000Lang : 	STRUCT 
		tyLang : tyLyrP1000Lang := (tyBtnEnglish:=(bRtLk:=TRUE,bValue:=TRUE),tyNumYear:=(sKeypadTitle:='Year'),tyNumMonth:=(sKeypadTitle:='Month'),tyNumDay:=(sKeypadTitle:='Day'),tyNumHour:=(sKeypadTitle:='Hour'),tyNumMinute:=(sKeypadTitle:='Minute'),tyNumSecond:=(sKeypadTitle:='Second'));
		tyLangBkUp : tyLyrP1000Lang;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=65),tyTxtTitle:=(usiValueIdx:=20));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1020McSetNavi : 	STRUCT 
		tyNavi : tyLyrP1020McSetNavi;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1021McSetGen : 	STRUCT 
		tyGen : tyLyrP1021McSetGen := (tyDrpDnDefaultMcMod:=(usiValueMaxIdx:=1),tyDrpDnDefaultFlippedBrd:=(usiValueMaxIdx:=2),tyNumConvInitTm:=(sKeypadTitle:='Conveyor Initialize Time'),tyNumTranInErrDlyTm:=(sKeypadTitle:='Transfer In Error Dly Tm'),tyNumTranOutErrDlyTm:=(sKeypadTitle:='Transfer Out Error Dly Tm'),tyNumWidthAtHm:=(sKeypadTitle:='Width At Home Position'),tyNumWidthOffset:=(sKeypadTitle:='Width Offset'),tyStringMcNm:=(sKeypadTitle:='Machine Name'),tyNumSSaverTm:=(sKeypadTitle:='Screen Saver Time'),tyStringSubnetMask:=(sKeypadTitle:='Subnet Mask'),tyStringIPAddr:=(sKeypadTitle:='IP Address'),tyNumStopperAtLftPos:=(sKeypadTitle:='Stopper At Left Pos'),tyNumStopperAtRgtPos:=(sKeypadTitle:='Stopper At Right Pos'));
		tyGenBkUp : tyLyrP1021McSetGen;
		tyNetwork : tyLyrP1021McSetNetwork := (tyStringIPAddr:=(sKeypadTitle:='IP Address'),tyStringSubnetMask:=(sKeypadTitle:='Subnet Mask'),tyLyr:=(uiRtStat:=1));
		tyNaviLyr1 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=1));
		tyNaviLyr2 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=2));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxExitAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyTxtMsg:=(usiValueIdx:=70),tyTxtTitle:=(usiValueIdx:=14),tyLyr:=(uiRtStat:=0));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(usiValueIdx:=71),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxUpdtSubnetAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyTxtMsg:=(usiValueIdx:=75),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxUpdtSubnetErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(usiValueIdx:=76),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxSubnetInvalid : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(usiValueIdx:=77),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxUpdtIPAddrAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyTxtMsg:=(usiValueIdx:=72),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxUpdtIPAddrErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(usiValueIdx:=73),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxIPAddrInvalid : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(usiValueIdx:=74),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxChgNetworkAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyTxtTitle:=(usiValueIdx:=14));
		tyMsgBoxIPAddrInvalidEdit : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=14),tyTxtMsg:=(usiValueIdx:=184),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
		tyMsgBoxSubnetInvalidEdit : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=14),tyTxtMsg:=(usiValueIdx:=185),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
		tyMsgBoxGetIPAddrErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=14),tyTxtMsg:=(usiValueIdx:=186),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
		tyMsgBoxGetSubnetErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=14),tyTxtMsg:=(usiValueIdx:=187),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
		tyMsgBoxSetDHCPError : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=14),tyTxtMsg:=(usiValueIdx:=188),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1022McSetVComm : 	STRUCT 
		tyVComSel : tyLyrP1022McSetVCommSel;
		tyVComSelBkUp : tyLyrP1022McSetVCommSel;
		tyLF : tyLyrP1022McSetVCommLF;
		tyLFBkUp : tyLyrP1022McSetVCommLF;
		tyVComSvy : tyLyrP1022McSetVCommSvy := (tyNumSndAliveTm:=(diValueMax:=1800000,diValueMin:=5000,sKeypadTitle:='Send Alive Tm'),tyNumSvySystemPort:=(diValueMin:=65535,sKeypadTitle:='System Port'),tyLyr:=(uiRtStat:=1));
		tyVComSvyBkUp : tyLyrP1022McSetVCommSvy;
		tyNaviLyr1 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=1,usiValueIdx:=0),tyLyr:=(uiRtStat:=0));
		tyNaviLyr2 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=1,usiValueIdx:=1),tyLyr:=(uiRtStat:=0));
		tyNaviLyr3 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=0));
		tyNaviLyr4 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=0));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxExitAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=70),tyTxtTitle:=(usiValueIdx:=16));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1023McSetHComm : 	STRUCT 
		tyGen : tyLyrP1023McSetHCommGen := (tyLyr:=(uiRtStat:=1));
		tyUSSel : tyLyrP1023McSetHCommSel := (tyBtnSMEMA:=(bRtLk:=TRUE,bValue:=TRUE));
		tyUSSMEMA : tyLyrP1023McSetHCommSMEMA := (tyDrpDnSMEMAMod:=(usiValueMaxIdx:=1),tyLyr:=(uiRtStat:=1));
		tyUSHermes : tyLyrP1023McSetHCommUSHermes := (tyNumSndAliveTm:=(diValueMax:=1800000,diValueMin:=5000,sKeypadTitle:='Send Alive Time'),tyNumLaneID:=(diValueMax:=1000,diValueMin:=1,sKeypadTitle:='Lane ID'),tyNumHostPort:=(diValueMax:=65535,sKeypadTitle:='Host Port'),tyStringHostAddr:=(sKeypadTitle:='Host Address'));
		tyDSSel : tyLyrP1023McSetHCommSel := (tyBtnSMEMA:=(bRtLk:=TRUE,bValue:=TRUE),tyLyr:=(uiRtStat:=1));
		tyDSSel2 : tyLyrP1023McSetHCommSel := (tyBtnSMEMA:=(bRtLk:=TRUE,bValue:=TRUE),tyLyr:=(uiRtStat:=1));
		tyDSSMEMA : tyLyrP1023McSetHCommSMEMA := (tyDrpDnSMEMAMod:=(usiValueMaxIdx:=1),tyLyr:=(uiRtStat:=1));
		tyDSSMEMA2 : tyLyrP1023McSetHCommSMEMA := (tyDrpDnSMEMAMod:=(usiValueMaxIdx:=1),tyLyr:=(uiRtStat:=1));
		tyDSHermes : tyLyrP1023McSetHCommDSHermes := (tyNumLaneID:=(diValueMax:=1000,diValueMin:=1,sKeypadTitle:='Lane ID'),tyNumSvrPort:=(diValueMax:=65535,sKeypadTitle:='Server Port'),tyNumSndAliveTm:=(diValueMax:=1800000,diValueMin:=5000,sKeypadTitle:='Send Alive Time'));
		tyDSHermes2 : tyLyrP1023McSetHCommDSHermes := (tyNumLaneID:=(diValueMax:=1000,diValueMin:=1,sKeypadTitle:='Lane ID'),tyNumSvrPort:=(diValueMax:=65535,sKeypadTitle:='Server Port'),tyNumSndAliveTm:=(diValueMax:=1800000,diValueMin:=5000,sKeypadTitle:='Send Alive Time'));
		tyUSSelBkUp : tyLyrP1023McSetHCommSel;
		tyUSSMEMABkUp : tyLyrP1023McSetHCommSMEMA;
		tyUSHermesBkUp : tyLyrP1023McSetHCommUSHermes;
		tyDSSelBkUp : tyLyrP1023McSetHCommSel;
		tyDSSelBkUp2 : tyLyrP1023McSetHCommSel;
		tyDSSMEMABkUp : tyLyrP1023McSetHCommSMEMA;
		tyDSSMEMABkUp2 : tyLyrP1023McSetHCommSMEMA;
		tyDSHermesBkUp : tyLyrP1023McSetHCommDSHermes;
		tyDSHermesBkUp2 : tyLyrP1023McSetHCommDSHermes;
		tyUSSel2 : tyLyrP1023McSetHCommSel := (tyBtnSMEMA:=(bRtLk:=TRUE,bValue:=TRUE));
		tyUSSMEMA2 : tyLyrP1023McSetHCommSMEMA := (tyDrpDnSMEMAMod:=(usiValueMaxIdx:=1),tyLyr:=(uiRtStat:=1));
		tyUSHermes2 : tyLyrP1023McSetHCommUSHermes := (tyNumSndAliveTm:=(diValueMax:=1800000,diValueMin:=5000,sKeypadTitle:='Send Alive Time'),tyNumLaneID:=(diValueMax:=1000,diValueMin:=1,sKeypadTitle:='Lane ID'),tyNumHostPort:=(diValueMax:=65535,sKeypadTitle:='Host Port'),tyStringHostAddr:=(sKeypadTitle:='Host Address'));
		tyUSSelBkUp2 : tyLyrP1023McSetHCommSel;
		tyUSSMEMABkUp2 : tyLyrP1023McSetHCommSMEMA;
		tyUSHermesBkUp2 : tyLyrP1023McSetHCommUSHermes;
		tyNaviLyr1 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=1));
		tyNaviLyr2 : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=0),tyBtnRgt:=(uiRtStat:=0),tyBtnBack:=(uiRtStat:=0),tyBitmapPageDisp:=(uiRtStat:=0,usiValueIdx:=2));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxExitAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=70),tyTxtTitle:=(usiValueIdx:=16));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=71),tyTxtTitle:=(usiValueIdx:=15));
		tyMsgBoxIPAddrInvalid : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=74),tyTxtTitle:=(usiValueIdx:=14));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1024McSetAntiGap : 	STRUCT 
		tyAntiGap : tyLyrP1024McSetAntiGap := (tyNumLftSenOff:=(sKeypadTitle:='Left Sensor Signal'),tyNumRgtSenOff:=(sKeypadTitle:='Right Sensor Signal'));
		tyAntiGapBkUp : tyLyrP1024McSetAntiGap;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxExitAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=70),tyTxtTitle:=(usiValueIdx:=17));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(usiValueIdx:=71),tyTxtTitle:=(usiValueIdx:=17));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1026McSetTeach : 	STRUCT 
		tyTeachStopperAtLftPos : tyLyrP1026McSetTeach := (tyBtnGet:=(usiTxtIdx:=200),tyBtnGo:=(usiTxtIdx:=201));
		tyTeachStopperAtRgtPos : tyLyrP1026McSetTeach := (tyBtnGet:=(usiTxtIdx:=202),tyBtnGo:=(usiTxtIdx:=203));
		tyMotionStd : tyLyrC0001MotionStdInvert := (tyBitmapMc:=(usiValueIdx:=2),tyBtnHmLmtSen:=(usiTxtIdx:=4),tyBtnRmtLmtSen:=(usiTxtIdx:=4),tyBtnJogHm:=(usiTxtIdx:=4),tyBtnJogRmt:=(usiBitmapIdx:=1,usiTxtIdx:=4),tyNumNomSpd:=(sKeypadTitle:='Normal Speed'),tyNumSlwSpd:=(sKeypadTitle:='Slow Speed'),tyNumStepSize:=(sKeypadTitle:='Step Size'),tyNumTargetPos:=(sKeypadTitle:='Target Position'));
		tyFullMaskHide : tyLyrC0002FullMask := (tyBtnMask:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyFullMaskEStop : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=20),tyLyr:=(uiRtStat:=0));
		tyFullMaskCWSig : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=21),tyLyr:=(uiRtStat:=0));
		tyFullMaskSafetyRly : tyLyrC0002FullMask := (tyBtnMask:=(usiTxtIdx:=12),tyLyr:=(uiRtStat:=0));
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxUpdtStopperAtLftPos : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=22),tyTxtMsg:=(usiValueIdx:=85),tyBtnYes:=(uiRtStat:=1,usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
		tyMsgBoxUpdtStopperAtRgtPos : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=22),tyTxtMsg:=(usiValueIdx:=86),tyBtnYes:=(uiRtStat:=1,usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1040ProdSet : 	STRUCT 
		tyProdSet : tyLyrP1040ProdSet := (tyBtnSave:=(uiMaskRtStat:=0),tyNumProdWidth:=(sKeypadTitle:='Product Width'),tyStringRecipeNm:=(sKeypadTitle:='Recipe Name'),tyStringSearch:=(sKeypadTitle:='Search Keyword'),tyTableRecipe:=(a_tyHotspot:=[(bRtCompl:=TRUE,bValue:=TRUE),14((0))],a_tyStringDataCol0:=[(sValue:='1'),(sValue:='2'),(sValue:='3'),(sValue:='4'),(sValue:='5'),(sValue:='6'),(sValue:='7'),(sValue:='8'),(sValue:='9'),(sValue:='10'),5((0))],a_tyStringDataCol1:=[(usiColor:=1),14(0)],a_tyStringDataCol2:=[(usiColor:=1),14(0)],tyUISlider:=(iMaxValue:=2000,iMinValue:=1,iValue:=1),tyStringTitle0Col0Row0:=(sValue:='No'),tyStringTitle1Col1Row0:=(sValue:='Product Name'),tyStringTitle2Col2Row0:=(sValue:='Width'),uiMaskRtStat:=1),tyDrpDnMcMode:=(usiValueMaxIdx:=1),tyDrpDnFlippedBrd:=(usiValueMaxIdx:=2),tyStringMatchCode:=(sKeypadTitle:='Match Code'));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxSaveAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=46),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=40),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxListFull : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=59),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxListErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=42),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxSaveNoNm : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=47),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxReloadCurrRcp : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=50),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxDelCurrRcpAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=51),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxDelNmNotExist : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=54),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxDelNmEmpty : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=60),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxDelErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=52),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxDelAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=53),tyTxtTitle:=(usiValueIdx:=8));
		tyMsgBoxToXMLAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=8),tyTxtMsg:=(usiValueIdx:=61),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyLyr:=(uiRtStat:=0));
		tyMsgBoxToXMLErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=8),tyTxtMsg:=(usiValueIdx:=62),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
		tyMsgBoxFromXMLAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=8),tyTxtMsg:=(usiValueIdx:=63),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyLyr:=(uiRtStat:=0));
		tyMsgBoxFromXMLErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=8),tyTxtMsg:=(usiValueIdx:=64),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
		tyMsgBoxSaveListErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=8),tyTxtMsg:=(usiValueIdx:=66),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
		tyRcpPopUp : tyLyrC0012RcpPopUp := (tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1050LFSet : 	STRUCT 
		tyLdr : tyLyrP1050LFSetLdr := (tyTable1List:=(a_tyHotspot:=[(bRtCompl:=TRUE,bValue:=TRUE),14(0)],a_tyStringDataCol0:=[(sValue:='1'),(sValue:='2'),(sValue:='3'),(sValue:='4'),(sValue:='5'),(sValue:='6'),(sValue:='7'),(sValue:='8'),(sValue:='9'),(sValue:='10'),(sValue:='11'),(sValue:='12'),(sValue:='13'),(sValue:='14'),(sValue:='15')],a_tyStringDataCol1:=[(usiColor:=1),14(0)],a_tyStringDataCol2:=[(usiColor:=1),14(0)],a_tyTxtDataCol3:=[(usiColor:=1),14(0)],tyStringTitle0Col0Row0:=(sValue:='No'),tyStringTitle1Col1Row0:=(sValue:='Machine Name'),tyStringTitle2Col2Row0:=(sValue:='IP Address'),tyStringTitle3Col3Row0:=(sValue:='Status'),tyUISlider:=(iMaxValue:=c_diLFClntNum-c_uiP1050TableSize+1,iMinValue:=1,iValue:=1)),tyNumBeforeOven:=(sKeypadTitle:='Machine Index Before Oven 1'),tyNumBeforeOven2:=(sKeypadTitle:='Machine Index Before Oven 2'),tyNumAfterOven:=(sKeypadTitle:='Machine Index After Oven 1'),tyNumAfterOven2:=(sKeypadTitle:='Machine Index After Oven 2'));
		tyLdrEdit : tyLyrP1050LFSetLdrEdit := (tyStringIPAddr:=(sKeypadTitle:='IP Address'),tyTxtLblInfoThirdParty:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyLdrBkUp : tyLyrP1050LFSetLdr;
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=71),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
		tyMsgBoxDelAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=153),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyLyr:=(uiRtStat:=0));
		tyMsgBoxIPAddrInvalid : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=155),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
		tyMsgBoxIPAddrDuplicate : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyTxtTitle:=(usiValueIdx:=9),tyTxtMsg:=(usiValueIdx:=163),tyBtnYes:=(uiRtStat:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyLyr:=(uiRtStat:=0));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1080UsrMgmt : 	STRUCT 
		tyActHide : tyLyrP1080UsrMgmtAct := (tyLyr:=(uiRtStat:=1));
		tyEdit : tyLyrP1080UsrMgmtAct := (tyStringPw:=(sKeypadTitle:='Password'),tyStringUsrNm:=(uiMaskRtStat:=0));
		tyCreate : tyLyrP1080UsrMgmtAct := (tyStringPw:=(sKeypadTitle:='Password'),tyStringUsrNm:=(sKeypadTitle:='User Name'));
		tyUsrMgmt : tyLyrP1080UsrMgmt := (tyTableList:=(a_tyHotspot:=[11((bRtCompl:=TRUE,bValue:=TRUE)),4((0))],a_tyStringDataCol0:=[(sValue:='1'),(sValue:='2'),(sValue:='3'),(sValue:='4'),(sValue:='5'),(sValue:='6'),(sValue:='7'),(sValue:='8'),(sValue:='9'),(sValue:='10'),(sValue:='11'),4((0))],a_tyStringDataCol1:=[(usiColor:=1),8((0)),2(0),4((0))],a_tyStringDataCol2:=[0,14((0))],a_tyTxtDataCol3:=[(usiColor:=1),8((0)),2(0),4((0))],tyStringTitle0Col0Row0:=(sValue:='No'),tyStringTitle1Col1Row0:=(sValue:='Username'),tyStringTitle3Col3Row0:=(sValue:='Level Title'),uiMaskRtStat:=1));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxAddErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=27),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxEditErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=28),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxAddNmExist : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=22),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxEditParamErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=24),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxAddParamErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=21),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxListFull : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=35),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxDelNmNotExist : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=37),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxDelParamErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=31),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxDelLastAdminErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=26),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxDelAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=25),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxDelErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=30),tyTxtTitle:=(usiValueIdx:=1));
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyUIP1081UsrAccessRgt : 	STRUCT 
		tyUsrAccessRgtSel : tyLyrP1081UsrMgmtUsrAccessRgtSel := (tyDrpDnLevel:=(usiValueMaxIdx:=2));
		tyUsrAccessRgtLvl1 : tyLyrP1081UsrMgmtUsrAccessRgt := (tyStringNm:=(sKeypadTitle:='Level Name'),tyTxtTitle:=(usiValueIdx:=0));
		tyUsrAccessRgtLvl2 : tyLyrP1081UsrMgmtUsrAccessRgt := (tyStringNm:=(sKeypadTitle:='Level Name'),tyTxtTitle:=(usiValueIdx:=1));
		tyUsrAccessRgtLvl3 : tyLyrP1081UsrMgmtUsrAccessRgt := (tyStringNm:=(sKeypadTitle:='Level Name'),tyTxtTitle:=(usiValueIdx:=2));
		tyUsrAccessRgtLvl1BkUp : tyLyrP1081UsrMgmtUsrAccessRgt;
		tyUsrAccessRgtLvl2BkUp : tyLyrP1081UsrMgmtUsrAccessRgt;
		tyUsrAccessRgtLvl3BkUp : tyLyrP1081UsrMgmtUsrAccessRgt;
		tyNaviBack : tyLyrC0004Navi := (tyBtnLeft:=(uiRtStat:=1),tyBtnRgt:=(uiRtStat:=1),tyBtnBack:=(uiRtStat:=0));
		tyMsgBoxHide : tyLyrC0008MsgBox := (tyBitmapIcon:=(uiRtStat:=1),tyBtnNo:=(uiRtStat:=1),tyBtnYes:=(uiRtStat:=1),tyTxtMsg:=(uiRtStat:=1),tyTxtTitle:=(uiRtStat:=1),tyLyr:=(uiRtStat:=1));
		tyMsgBoxExitAsk : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=3,usiTxtIdx:=2),tyBtnYes:=(usiBitmapIdx:=1,usiTxtIdx:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=70),tyTxtTitle:=(usiValueIdx:=1));
		tyMsgBoxSaveErr : tyLyrC0008MsgBox := (tyBitmapIcon:=(usiValueIdx:=1),tyBtnNo:=(usiBitmapIdx:=1,usiTxtIdx:=3),tyBtnYes:=(uiRtStat:=1),tyLyr:=(uiRtStat:=0),tyTxtMsg:=(usiValueIdx:=34),tyTxtTitle:=(usiValueIdx:=1));
	END_STRUCT;
END_TYPE

(**)
(*Common Layers*)

TYPE
	tyUICom : 	STRUCT 
		tyMain : tyLyrC0005Main := (tyBtnStep:=(uiRtStat:=1),tyBtnReset:=(uiMaskRtStat:=0),tyBtnStop:=(uiMaskRtStat:=0));
		tySet : tyLyrC0006Set := (tyBtnSave:=(uiMaskRtStat:=0));
		tyNotif : tyLyrC0007Notif := (tyLyr:=(uiRtStat:=1));
		tyInfo : tyLyrC0009Info := (tyLyr:=(uiRtStat:=1));
		tyLoading : tyLyrC0011Loading := (tyLyr:=(uiRtStat:=1));
	END_STRUCT;
END_TYPE

(**)
(*Visu Property*)

TYPE
	tyUIProperty : 	STRUCT 
		tyVisu : tyVisu;
		tyKeypad : tyKeypad;
		tyUITxtSnippets : tyTxtSnippets;
	END_STRUCT;
END_TYPE
