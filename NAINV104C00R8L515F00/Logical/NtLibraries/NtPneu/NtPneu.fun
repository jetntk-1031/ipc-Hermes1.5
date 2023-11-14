
FUNCTION_BLOCK fbPneuExtRetSenRetChk (*Pneumatic Retract Sensor Enable Only, Retract Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bExtSen : {REDUND_UNREPLICABLE} BOOL; (*Extend Sensor*)
		bRetSen : {REDUND_UNREPLICABLE} BOOL; (*Retract Sensor*)
		bRetSafety : {REDUND_UNREPLICABLE} BOOL; (*Retract Safety*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#20s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuExtRetSenExtChk (*Pneumatic Extend Sensor Enable Only, Extend Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bExtSen : {REDUND_UNREPLICABLE} BOOL; (*Extend Sensor*)
		bRetSen : {REDUND_UNREPLICABLE} BOOL; (*Retract Sensor*)
		bExtSafety : {REDUND_UNREPLICABLE} BOOL; (*Extend Safety*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#20s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuRetSenExtChk (*Pneumatic Retract Sensor Enable Only, Extend Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bRetSen : {REDUND_UNREPLICABLE} BOOL; (*Retract Sensor*)
		bExtSafety : {REDUND_UNREPLICABLE} BOOL; (*Extend Safety*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#5s; (*Time Out*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*No Sensor Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuRetSenRetChk (*Pneumatic Retract Sensor Enable Only, Retract Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bRetSen : {REDUND_UNREPLICABLE} BOOL; (*Retract Sensor*)
		bRetSafety : {REDUND_UNREPLICABLE} BOOL; (*Retract Safety*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#20s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuExtSenRetChk (*Pneumatic Extend Sensor Enable Only, Retract Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bExtSen : {REDUND_UNREPLICABLE} BOOL; (*Extend Sensor*)
		bRetSafety : {REDUND_UNREPLICABLE} BOOL; (*Retract Safety*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#5s; (*Time Out*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*No Sensor Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuExtSenExtChk (*Pneumatic Extend Sensor Enable Only, Extend Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bExtSen : {REDUND_UNREPLICABLE} BOOL; (*Extend Sensor*)
		bExtSafety : {REDUND_UNREPLICABLE} BOOL; (*Extend Safety*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#20s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuNoSenRetChk (*Pneumatic No Sensor Enable, Retract Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bRetSafety : {REDUND_UNREPLICABLE} BOOL; (*Retract Safety*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*No Sensor Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuNoSenExtChk (*Pneumatic No Sensor Enable, Extend Control Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bExtSafety : {REDUND_UNREPLICABLE} BOOL; (*Extend Safety*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*No Sensor Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuFullSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuNoSenDlyWithSafety (*Pneumatic No Sensor Delay With Safety Sensor Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bSafetySenOn : {REDUND_UNREPLICABLE} BOOL; (*Safety Sensor On*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*No Sensor Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuSafetyChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuSenOnChkWithSafety (*Pneumatic Sensor On Check With Safety Sensor Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bSenOn : {REDUND_UNREPLICABLE} BOOL; (*Sensor On*)
		bSafetySenOn : {REDUND_UNREPLICABLE} BOOL; (*Safety Sensor On*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#20s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuSafetyChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuSenOffChk (*Pneumatic Sensor Off Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bSenOn : {REDUND_UNREPLICABLE} BOOL; (*Sensor On*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#5s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuSenOnChk (*Pneumatic Sensor On Check*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bSenOn : {REDUND_UNREPLICABLE} BOOL; (*Sensor On*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#20s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbPneuNoSenDly (*Pneumatic No Sensor Delay*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*No Sensor Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyPneuSenChkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
