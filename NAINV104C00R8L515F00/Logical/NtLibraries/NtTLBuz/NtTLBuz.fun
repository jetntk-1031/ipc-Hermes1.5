
FUNCTION_BLOCK fbTLBuzBlink (*Tower Light & Buzzer Blink Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : {REDUND_UNREPLICABLE} BOOL; (*Enable*)
		tOffTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Sensor Off Time*)
		tOnTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Sensor On Time*)
	END_VAR
	VAR_OUTPUT
		bOut : BOOL; (*Output - Control Output*)
	END_VAR
	VAR
		tyInternal : {REDUND_UNREPLICABLE} tyTLBuzInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbTLBuzWarn (*Tower Light & Buzzer Warning Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tOffTm : TIME := T#500ms; (*Sensor Off Time*)
		tOnTm : TIME := T#500ms; (*Sensor On Time*)
		tRstTm : TIME := T#10s; (*Rest Time*)
		usiOnCnt : USINT := 3; (*On Count*)
		bStopAftRptSeqEn : BOOL := FALSE; (*Enable Stop Repeat Counter Function*)
		usiStopAftRptSeqCntr : USINT := 3; (*Stop Repeat Sequence Count*)
	END_VAR
	VAR_OUTPUT
		bOut : BOOL; (*Output - Control Output*)
	END_VAR
	VAR
		tyInternal : tyTLBuzInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
