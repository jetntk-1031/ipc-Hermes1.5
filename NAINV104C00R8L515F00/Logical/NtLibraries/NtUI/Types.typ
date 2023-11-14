
TYPE
	tyTouchGetActionInternal : 	STRUCT  (*Local Variables*)
		udiHandle : UDINT; (*Visu Handle*)
		tyTouchAction : TouchAction; (*Output of Touch Action*)
	END_STRUCT;
	tyTouchFilterInternal : 	STRUCT  (*Local Variables*)
		udiXOld : UDINT; (*Old Coordinate X Value*)
		udiYOld : UDINT; (*Old Coordinate Y Value*)
	END_STRUCT;
	tyTouchGetSlideDistInternal : 	STRUCT  (*Local Variables*)
		fbPressedRise : R_TRIG; (*Rising Edge of Press Action*)
		fbInternalPressedRise : R_TRIG; (*Internal Rising Edge of Press Action*)
		bValidStartPress : BOOL; (*Valid of Start Press*)
		bPressed : BOOL; (*Touchscreen Pressed*)
		udiXTemp : UDINT; (*Temporary Coordinate X*)
		udiYTemp : UDINT; (*Temporary Coordinate Y*)
	END_STRUCT;
	tyTouchGetTapInternal : 	STRUCT  (*Local Variables*)
		fbInternalPressedRise : R_TRIG; (*Internal Rising Edge of Press Action*)
		fbInternalPressedFall : F_TRIG; (*Internal Falling Edge of Press Action*)
		bPressed : BOOL; (*Touchscreen Pressed*)
		tTmTemp : TIME; (*Time of Temporary*)
		udiXTemp : UDINT; (*Temporary Coordinate X*)
		udiYTemp : UDINT; (*Temporary Coordinate Y*)
		tTmPrev : TIME; (*Time of Previous*)
		udiXPrev : UDINT; (*Previous Coordinate X*)
		udiYPrev : UDINT; (*Previous Coordinate Y*)
	END_STRUCT;
	tyTableCtrlInternal : 	STRUCT  (*Local Variables*)
		fbSingleTapChkDlyTm : TON; (*Single Tap Check Delay Time*)
		fbSliderOffTm : TON; (*Slider Off Time*)
		fbSelectedRowMnlRise : R_TRIG; (*Rising Edge of Manual Select Row*)
		fbTablePosUpRise : R_TRIG; (*Rising Edge of Up Table Position*)
		fbTablePosDownRise : R_TRIG; (*Rising Edge of Down Table Position*)
		fbSliderRelease : F_TRIG; (*Falling Edge of Slider Active*)
		fbTouchFilter : fbTouchFilter;
		fbTouchGetAction : fbTouchGetAction;
		fbTouchGetSlideDist : fbTouchGetSlideDist;
		fbTouchGetTap : fbTouchGetTap;
		i : INT;
		iTablePos : INT; (*Table Position*)
		iTablePosTemp : INT; (*Temporary Table Position*)
	END_STRUCT;
END_TYPE

(**)
(*Basic Controls*)

TYPE
	tyUILine : 	STRUCT  (*UI Line*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUITxt : 	STRUCT  (*UI Text*)
		bHighlighting : BOOL := FALSE; (*Highlighting Datapoint*)
		sTxt : STRING[30] := ''; (*Text Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiValueIdx : USINT := 0; (*Value Index Datapoint*)
	END_STRUCT;
	tyUIAlmTxt : 	STRUCT  (*UI Text*)
		bHighlighting : BOOL := FALSE; (*Highlighting Datapoint*)
		sTxt : STRING[30] := ''; (*Text Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		udiValueIdx : UDINT := 0; (*Value Index Datapoint*)
	END_STRUCT;
	tyUIShape : 	STRUCT  (*UI Shape*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUIString : 	STRUCT  (*UI String*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		sValue : STRING[30] := ''; (*Value Datapoint*)
		sValueDisplay : STRING[10] := ''; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		sKeypadTitle : STRING[30]; (*Keypad Title*)
	END_STRUCT;
	tyUILString : 	STRUCT  (*UI String*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		sValue : STRING[254] := ''; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		sKeypadTitle : STRING[30]; (*Keypad Title*)
	END_STRUCT;
	tyUINum : 	STRUCT  (*UI Numeric*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		diValue : DINT := 0; (*Value Datapoint*)
		diValueMax : DINT := 0; (*Max Value Datapoint*)
		diValueMin : DINT := 0; (*Min Value Datapoint*)
		diValueTeach : DINT := 0; (*Teach Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiAddDigits : USINT := 0; (*Add Fraction Digits Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		sKeypadTitle : STRING[30]; (*Keypad Title*)
	END_STRUCT;
	tyUIBtn : 	STRUCT  (*UI Button*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		bValue : BOOL := FALSE; (*Boolean Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiBitmapIdx : USINT := 0; (*Bitmap Index Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiPressedColor : USINT := 0; (*Button Pressed Color Datapoint*)
		usiTxtIdx : USINT := 0; (*Text Index Datapoint*)
		uiBitmapIdx : UINT := 0; (*Bitmap Index Datapoint*)
	END_STRUCT;
	tyUIHotspot : 	STRUCT  (*UI Hotspot*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		bValue : BOOL := FALSE; (*Boolean Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
	END_STRUCT;
	tyUIBitmap : 	STRUCT  (*UI Bitmap*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiValueIdx : USINT := 0; (*Value Index Datapoint*)
		uiValueIdx : UINT := 0; (*Value Index Datapoint*)
	END_STRUCT;
	tyUIBarGraph : 	STRUCT  (*UI Bar Graph*)
		iValue : INT := 0; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUIDT : 	STRUCT  (*UI DateTime*)
		diValue : DINT := 0; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUIPw : 	STRUCT  (*UI Password*)
		a_sTxt : ARRAY[0..9]OF STRING[30] := [10('')]; (*Text Datapoint*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiLevel : USINT := 0; (*Level Datapoint*)
	END_STRUCT;
	tyUIListBox : 	STRUCT  (*UI List Box*)
		a_sTxt : ARRAY[0..9]OF STRING[30] := [10('')]; (*Text Datapoint*)
		a_usiValueOptionIdx : ARRAY[0..9]OF USINT := [10(0)]; (*Option Value Index Datapoint*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiDisabledColor : USINT := 0; (*Disabled Color Datapoint*)
		usiSelectedColor : USINT := 0; (*Selected Color Datapoint*)
		usiSliderColor : USINT := 0; (*Slider Color Datapoint*)
		usiValueIdx : USINT := 0; (*Value Index Datapoint*)
		usiValueMaxIdx : USINT := 0; (*Max Value Index Datapoint*)
		usiValueMinIdx : USINT := 0; (*Min Value Index Datapoint*)
	END_STRUCT;
	tyUIAlm : 	STRUCT  (*UI Alarm*)
		a_usiFltrTm : ARRAY[0..5]OF USINT := [6(0)]; (*Filter Time Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		uiFltrAlm : UINT := 0; (*Filter Alarm Datapoint*)
		uiFltrCtrl : UINT := 0; (*Filter Control Datapoint*)
		uiFltrGrp : UINT := 0; (*Filter Group Datapoint*)
		uiFltrPriority : UINT := 0; (*Filter Priority Datapoint*)
	END_STRUCT;
	tyUIDrawBox : 	STRUCT  (*UI Draw Box*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
	END_STRUCT;
	tyUITrend : 	STRUCT  (*UI Trend*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		iSelectItem : INT := 0; (*Select Item Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUIScale : 	STRUCT  (*UI Scale*)
		iMaxValue : INT := 0; (*Max Value Datapoint*)
		iMinValue : INT := 0; (*Min Value Datapoint*)
		iRangeEnd : INT := 0; (*Range End Datapoint*)
		iRangeSt : INT := 0; (*Range Start Datapoint*)
		iValue : INT := 0; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiRangeColor : USINT := 0; (*Range Color Datapoint*)
	END_STRUCT;
	tyUIEdit : 	STRUCT  (*UI Edit*)
		bLineEndings : BOOL := FALSE; (*Line Endings Datapoint*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtEditInsertMode : BOOL := FALSE; (*Edit Insert Mode Datapoint*)
		bRtEditModified : BOOL := FALSE; (*Edit Modified Datapoint*)
		bRtEditSelectionMode : BOOL := FALSE; (*Edit Selection Mode Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		iRtEditCursorColumn : INT := 0; (*Edit Cursor Column Datapoint*)
		iRtEditCursorLine : INT := 0; (*Edit Cursor Line Datapoint*)
		sRtCmdRequest : STRING[30] := ''; (*Command Request Datapoint*)
		sRtCmdResponse : STRING[30] := ''; (*Command Response Datapoint*)
		sURL : STRING[30] := ''; (*URL Datapoint*)
		sValue : STRING[30] := ''; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtBusy : UINT := 0; (*Busy Datapoint*)
		uiRtCmdStat : UINT := 0; (*Command Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiCursorColor : USINT := 0; (*Cursor Color Datapoint*)
		usiSelectedColor : USINT := 0; (*Selected Color Datapoint*)
	END_STRUCT;
	tyUIHTMLView : 	STRUCT  (*UI HTML View*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		sChgURL : STRING[30] := ''; (*Change URL Datapoint*)
		sCurrTitle : STRING[30] := ''; (*Current Title Datapoint*)
		sCurrURL : STRING[30] := ''; (*Current URL Datapoint*)
		sHTMLStream : STRING[30] := ''; (*HTML Stream*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtBusy : UINT := 0; (*Busy Datapoint*)
		uiRtHTTPErrCode : UINT := 0; (*HTTP Error Code*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiErrCnt : USINT := 0; (*Error Count Datapoint*)
	END_STRUCT;
	tyUIDrpDn : 	STRUCT  (*UI Dropdown*)
		a_usiValueOptionIdx : ARRAY[0..9]OF USINT := [10(0)]; (*Option Value Index Datapoint*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		sTxt : STRING[30] := ''; (*Text Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
		usiDisabledColor : USINT := 0; (*Disabled Color Datapoint*)
		usiDropdownColor : USINT := 0; (*Dropdown Color Datapoint*)
		usiSelectedColor : USINT := 0; (*Selected Color Datapoint*)
		usiValueIdx : USINT := 0; (*Value Index Datapoint*)
		usiValueMaxIdx : USINT := 0; (*Max Value Index Datapoint*)
		usiValueMinIdx : USINT := 0; (*Min Value Index Datapoint*)
	END_STRUCT;
	tyUIPieChart : 	STRUCT  (*UI Pie Chart*)
		a_uiValue : ARRAY[0..9]OF UINT := [10(0)]; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUISlider : 	STRUCT  (*UI Slider*)
		bRtCompl : BOOL := FALSE; (*Completion Datapoint*)
		bRtLk : BOOL := FALSE; (*Locking Datapoint*)
		iCurrValue : INT := 0; (*Current Value Datapoint*)
		iMaxValue : INT := 0; (*Max Value Datapoint*)
		iMinValue : INT := 0; (*Min Value Datapoint*)
		iValue : INT := 0; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUIGauge : 	STRUCT  (*UI Gauge*)
		iMaxValue : INT := 0; (*Max Value Datapoint*)
		iMinValue : INT := 0; (*Min Value Datapoint*)
		iValue : INT := 0; (*Value Datapoint*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
		usiColor : USINT := 0; (*Color Datapoint*)
	END_STRUCT;
	tyUITable : 	STRUCT  (*UI Table*)
		a_tyHotspot : ARRAY[1..15]OF tyUIHotspot; (*Array Of Hotspot*)
		a_tyStringDataCol0 : ARRAY[1..15]OF tyUILString; (*Array Of Number Listing (column: 0 / x = 0)*)
		a_tyStringDataCol1 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 1 / x = 1)*)
		a_tyStringDataCol2 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 2 / x = 2)*)
		a_tyStringDataCol3 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 3 / x = 3)*)
		a_tyStringDataCol4 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 4 / x = 4)*)
		tyUISlider : tyUISlider := (uiRtStat:=1); (*Scroll Bar Scale*)
		tyStringTitle0Col0Row0 : tyUIString; (*Number Listing Title (row: 0, column: 0 / x = 0, y = 0)*)
		tyStringTitle1Col1Row0 : tyUIString; (*Title (row: 0, column: 1 / x = 1, y = 0)*)
		tyStringTitle2Col2Row0 : tyUIString; (*Title (row: 0, column: 2 / x = 2, y = 0)*)
		tyStringTitle3Col3Row0 : tyUIString; (*Title (row: 0, column: 3 / x = 3, y = 0)*)
		tyStringTitle4Col4Row0 : tyUIString; (*Title (row: 0, column: 4 / x = 4, y = 0)*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
	END_STRUCT;
	tyUITable1 : 	STRUCT  (*UI Table*)
		a_tyHotspot : ARRAY[1..15]OF tyUIHotspot; (*Array Of Hotspot*)
		a_tyStringDataCol0 : ARRAY[1..15]OF tyUILString; (*Array Of Number Listing (column: 0 / x = 0)*)
		a_tyStringDataCol1 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 1 / x = 1)*)
		a_tyStringDataCol2 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 2 / x = 2)*)
		a_tyStringDataCol4 : ARRAY[1..15]OF tyUILString; (*Array Of Data (column: 4 / x = 4)*)
		a_tyTxtDataCol3 : ARRAY[1..15]OF tyUITxt; (*Array Of Data (column: 3 / x = 3)*)
		tyStringTitle0Col0Row0 : tyUIString; (*Number Listing Title (row: 0, column: 0 / x = 0, y = 0)*)
		tyStringTitle1Col1Row0 : tyUIString; (*Title (row: 0, column: 1 / x = 1, y = 0)*)
		tyStringTitle2Col2Row0 : tyUIString; (*Title (row: 0, column: 2 / x = 2, y = 0)*)
		tyStringTitle3Col3Row0 : tyUIString; (*Title (row: 0, column: 3 / x = 3, y = 0)*)
		tyStringTitle4Col4Row0 : tyUIString; (*Title (row: 0, column: 4 / x = 4, y = 0)*)
		tyUISlider : tyUISlider := (uiRtStat:=1); (*Scroll Bar Scale*)
		uiMaskRtStat : UINT := 1; (*Mask Status Datapoint*)
	END_STRUCT;
	tyUILyr : 	STRUCT  (*UI Layer*)
		uiRtStat : UINT := 0; (*Status Datapoint*)
	END_STRUCT;
	tyUIAlarm : 	STRUCT 
		tyUIAlmCur : tyAlm;
		tyUIAlmHis : tyAlm;
	END_STRUCT;
	tyAlm : 	STRUCT 
		usiColor : USINT;
		udiCntrllDp : INT;
		udiGrpDp : UDINT;
		udiAlrmDp : UDINT;
		udiPrioDp : UDINT;
		udiTimeDp : DATE_AND_TIME;
		uiRtStat : UINT;
	END_STRUCT;
	tyUIAlarmInfoGrp : 	STRUCT 
		udiOffsetInfo1 : UDINT;
		udiOffsetInfo2 : UDINT;
		tyUptTxtSnipp : tyUIAlmTextSnip;
		udiToggleAlarmInfo : UDINT;
	END_STRUCT;
	tyUIAlmTextSnip : 	STRUCT 
		CurrentRecipeName : STRING[80];
		CurrentRecipeWidth : STRING[80];
		SameRcpDiffWidName : STRING[80];
		MachineOutGoingWidth : STRING[80];
		LFNewRecipeName : STRING[80];
		LFNewRecipeWidth : STRING[80];
		LFOldRecipeName : STRING[80];
		LFOldRecipeWidth : STRING[80];
		HANewRecipeName : STRING[80];
		HANewRecipeWidth : STRING[80];
		HAOldRecipeName : STRING[80];
		HAOldRecipeWidth : STRING[80];
		HBNewRecipeName : STRING[80];
		HBNewRecipeWidth : STRING[80];
		HBOldRecipeName : STRING[80];
		HBOldRecipeWidth : STRING[80];
	END_STRUCT;
END_TYPE
