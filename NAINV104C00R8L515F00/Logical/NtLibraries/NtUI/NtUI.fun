
FUNCTION fUIInRtStatOff : UINT (*Runtime Status Datapoint Off All Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIInRtStatHide : UINT (*Runtime Status Datapoint Hide Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIInRtStatLock : UINT (*Runtime Status Datapoint Lock Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIInRtStatFocus : UINT (*Runtime Status Datapoint Focus Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIInRtStatOpenTP : UINT (*Runtime Status Datapoint Open Touchpad Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIOutRtStatCursor1Valid : BOOL (*Runtime Status Datapoint Cursor 1 Valid Output*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIOutRtStatCursor2Valid : BOOL (*Runtime Status Datapoint Cursor 2 Valid Output*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIOutRtStatTPIsOpen : BOOL (*Runtime Status Datapoint Touchpad Is Open Output*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIOutRtStatOnLock : BOOL (*Runtime Status Datapoint Touch On Lock Output*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIOutRtStatHasFocus : BOOL (*Runtime Status Datapoint Has Focus Output*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION

FUNCTION fUIOutRtStatInEdit : BOOL (*Runtime Status Datapoint In Edit Output*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		uiRtStat : REFERENCE TO UINT; (*Runtime Status Datapoint*)
	END_VAR
END_FUNCTION
(**)

FUNCTION_BLOCK fbTouchGetAction (*Get Touch Action Coordinate*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		sVisuNm : STRING[80]; (*Visualization Object Name*)
	END_VAR
	VAR_OUTPUT
		bPressed : BOOL; (*Touch Pressed*)
		udiX : UDINT; (*X Coordinate*)
		udiY : UDINT; (*Y Coordinate*)
	END_VAR
	VAR
		tyInternal : tyTouchGetActionInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTouchFilter (*Filter Touch Action*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bPressedIn : BOOL; (*Touch Pressed*)
		udiXIn : UDINT; (*X Coordinate*)
		udiYIn : UDINT; (*Y Coordinate*)
	END_VAR
	VAR_OUTPUT
		bPressedOut : BOOL; (*Touch Pressed*)
		udiXOut : UDINT; (*X Coordinate*)
		udiYOut : UDINT; (*Y Coordinate*)
	END_VAR
	VAR
		tyInternal : tyTouchFilterInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTouchGetSlideDist (*Record Touch Action*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		udiWorkAreaStartX : UDINT; (*Valid Area Start X*)
		udiWorkAreaStartY : UDINT; (*Valid Area Start Y*)
		udiWorkAreaEndX : UDINT; (*Valid Area End X*)
		udiWorkAreaEndY : UDINT; (*Valid Area End Y*)
		udiMinXDist : UDINT; (*Minimum X Real Time Distance*)
		udiMinYDist : UDINT; (*Minimum Y Real Time Distance*)
		bPressed : BOOL; (*Touch Pressed*)
		udiX : UDINT; (*X Coordinate*)
		udiY : UDINT; (*Y Coordinate*)
	END_VAR
	VAR_OUTPUT
		diXDist : DINT; (*X Real Time Distance*)
		diYDist : DINT; (*Y Real Time Distance*)
	END_VAR
	VAR
		tyInternal : tyTouchGetSlideDistInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTouchGetTap (*Get Double Tap*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		udiWorkAreaStartX : UDINT; (*Valid Area Start X*)
		udiWorkAreaStartY : UDINT; (*Valid Area Start Y*)
		udiWorkAreaEndX : UDINT; (*Valid Area End X*)
		udiWorkAreaEndY : UDINT; (*Valid Area End Y*)
		udiMinSingleTapXDiff : UDINT := 20; (*Minimum Single Tap X Difference*)
		udiMinSingleTapYDiff : UDINT := 20; (*Minimum Single Tap Y Difference*)
		tMaxDoubleTapTm : TIME := T#900ms; (*Minimum Double Tap Time*)
		udiMinDoubleTapXDiff : UDINT := 20; (*Minimum Double Tap X Difference*)
		udiMinDoubleTapYDiff : UDINT := 20; (*Minimum Double Tap Y Difference*)
		bPressed : BOOL; (*Touch Pressed*)
		udiX : UDINT; (*X Coordinate*)
		udiY : UDINT; (*Y Coordinate*)
	END_VAR
	VAR_OUTPUT
		bSingleTap : BOOL; (*Single Tap Valid*)
		udiSingleTapX : UDINT; (*Single Tap X Coordinate*)
		udiSingleTapY : UDINT; (*Single Tap Y Coordinate*)
		bDoubleTap : BOOL; (*Double Tap Valid*)
		udiDoubleTapX : UDINT; (*Double Tap X Coordinate*)
		udiDoubleTapY : UDINT; (*Double Tap Y Coordinate*)
	END_VAR
	VAR
		tyInternal : tyTouchGetTapInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTableCtrl (*Table Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		sVisuNm : STRING[80]; (*Visualization Object Name*)
		udiWorkAreaStartX : UDINT; (*Valid Area Start X*)
		udiWorkAreaStartY : UDINT; (*Valid Area Start Y*)
		udiWorkAreaEndX : UDINT; (*Valid Area End X*)
		udiWorkAreaEndY : UDINT; (*Valid Area End Y*)
		udiMinXDist : UDINT; (*Minimum X Real Time Distance*)
		udiMinYDist : UDINT; (*Minimum Y Real Time Distance*)
		uiSlideScale : UINT := 1; (*Slider Scale*)
		iTotalData : INT; (*Total Number of Data*)
		iTotalRow : INT; (*Total Number of Row*)
		bSelectedRowMnl : BOOL; (*Manual Selected Row*)
		uiSelectedRowMnl : UINT := 1; (*Manual Selected Row*)
		bTablePosPlus : BOOL; (*Plus Table Position*)
		bTablePosMinus : BOOL; (*Minus Table Position*)
	END_VAR
	VAR_OUTPUT
		bTableActive : BOOL; (*Table Active*)
		bSliderActive : BOOL; (*Slider Active*)
		uiSelectedRow : UINT := 1; (*Selected Row*)
	END_VAR
	VAR_IN_OUT
		uiSliderStatus : UINT; (*Slider Status*)
		a_tyUIHotspot : ARRAY[1..15] OF tyUIHotspot; (*Array of Hotspot on Table*)
		uiTablePos : UINT; (*Table Position*)
		iSliderPos : INT; (*Slider Position*)
	END_VAR
	VAR
		tyInternal : tyTableCtrlInternal := (fbSingleTapChkDlyTm:=(PT:=T#500ms),fbSliderOffTm:=(PT:=T#5s),fbTouchGetTap:=(udiMinSingleTapXDiff:=20,udiMinSingleTapYDiff:=20,tMaxDoubleTapTm:=T#900ms,udiMinDoubleTapXDiff:=20,udiMinDoubleTapYDiff:=20),iTablePos:=1,iTablePosTemp:=1); (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTableCtrl_v2 (*Table Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		sVisuNm : STRING[80]; (*Visualization Object Name*)
		udiWorkAreaStartX : UDINT; (*Valid Area Start X*)
		udiWorkAreaStartY : UDINT; (*Valid Area Start Y*)
		udiWorkAreaEndX : UDINT; (*Valid Area End X*)
		udiWorkAreaEndY : UDINT; (*Valid Area End Y*)
		udiMinXDist : UDINT; (*Minimum X Real Time Distance*)
		udiMinYDist : UDINT; (*Minimum Y Real Time Distance*)
		uiSlideScale : UINT := 1; (*Slider Scale*)
		iTotalData : INT; (*Total Number of Data*)
		iTotalRow : INT; (*Total Number of Row*)
		bSelectedRowMnl : BOOL; (*Manual Selected Row*)
		uiSelectedRowMnl : UINT := 1; (*Manual Selected Row*)
		bTablePosPlus : BOOL; (*Plus Table Position*)
		bTablePosMinus : BOOL; (*Minus Table Position*)
		p_bTableActive : REFERENCE TO BOOL; (*Table Active*)
		p_bSliderActive : REFERENCE TO BOOL; (*Slider Active*)
		p_uiSelectedRow : REFERENCE TO UINT; (*Selected Row*)
		p_uiSliderStatus : REFERENCE TO UINT; (*Slider Status*)
		pa_tyUIHotspot : REFERENCE TO ARRAY[1..15] OF tyUIHotspot; (*Array of Hotspot on Table*)
		p_uiTablePos : REFERENCE TO UINT; (*Table Position*)
		p_iSliderPos : REFERENCE TO INT; (*Slider Position*)
	END_VAR
	VAR
		tyInternal : tyTableCtrlInternal := (fbSingleTapChkDlyTm:=(PT:=T#500ms),fbSliderOffTm:=(PT:=T#5s),fbTouchGetTap:=(udiMinSingleTapXDiff:=20,udiMinSingleTapYDiff:=20,tMaxDoubleTapTm:=T#900ms,udiMinDoubleTapXDiff:=20,udiMinDoubleTapYDiff:=20),iTablePos:=1,iTablePosTemp:=1); (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
