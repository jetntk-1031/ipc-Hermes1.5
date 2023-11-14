
FUNCTION fConvMtrSigOnOrLToR : BOOL (*Conveyor Motor Signal On Or Left To Right Signal Control*)
	VAR_INPUT
		bConvLToR : BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		bOnDirMod : BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
	END_VAR
END_FUNCTION

FUNCTION fConvMtrDirOrRToL : BOOL (*Conveyor Motor Direction Or Right To Left Signal Control*)
	VAR_INPUT
		bConvLToR : BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		bOnDirMod : BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
	END_VAR
END_FUNCTION

FUNCTION fConvLongBrd : BOOL (*Conveyor Long Board Detection*)
	VAR_INPUT
		bSen1 : BOOL; (*Sensor*)
		bSen2 : BOOL; (*Sensor*)
		bSen3 : BOOL; (*Sensor*)
		bSen4 : BOOL; (*Sensor*)
	END_VAR
END_FUNCTION

FUNCTION_BLOCK fbConvSenToSenTmLmt (*Conveyor Motor From Sensor To Sensor With Transfer Time Begin Immediately & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenTm1Lmt (*Conveyor Motor From Sensor To Sensor With Transfer Time Begin When Start Sensor Off & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenTm1 (*Conveyor Motor From Sensor To Sensor With Transfer Time Begin When Start Sensor Off*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenTm (*Conveyor Motor From Sensor To Sensor With Transfer Time Begin Immediately*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOffTmLmt (*Conveyor Motor From Sensor To Sensor Off With Transfer Time Begin Immediately & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOffTm1Lmt (*Conveyor Motor From Sensor To Sensor Off With Transfer Time Begin When Start Sensor Off & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOffTm1 (*Conveyor Motor From Sensor To Sensor Off With Transfer Time Begin When Start Sensor Off*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOffTm (*Conveyor Motor From Sensor To Sensor Off With Transfer Time Begin Immediately*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOffLmt (*Conveyor Motor From Sensor To Sensor Off With Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOff1 (*Conveyor Motor From Sensor To Sensor Off*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenOff (*Conveyor Motor From Sensor To Sensor Off (Edge Negative)*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenLmt (*Conveyor Motor From Sensor To Sensor With Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrkTmLmt (*Conveyor Motor From Sensor To Sensor With Brake With Transfer Time Begin Immediately & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrSigOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrDirOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrSigOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrkTm1Lmt (*Conveyor Motor From Sensor To Sensor With Brake With Transfer Time Begin When Start Sensor Off & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrkTm2Lmt (*Conveyor Motor From Sensor To Sensor With Brake With Transfer Time Begin Immediately & Limit*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bLmtSen : {REDUND_UNREPLICABLE} BOOL; (*Limit Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrDirOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0.5s; (*Time Out*)
		tMtrSigOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0.1s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		bLmtActivated : BOOL; (*Output - Limit Sensor Activated*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrkTm (*Conveyor Motor From Sensor To Sensor With Brake With Transfer Time Begin Immediately*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrkTm1 (*Conveyor Motor From Sensor To Sensor With Brake With Transfer Time Begin When Start Sensor Off*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tTxDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Transfer Delay Time*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal1;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrk (*Conveyor Motor From Sensor To Sensor With Brake*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSenBrk2 (*Conveyor Motor From Sensor To Sensor With Brake*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tBrkOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrDirOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
		tMtrBrkOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvSenToSen (*Conveyor Motor From Sensor To Sensor*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bStartSen : {REDUND_UNREPLICABLE} BOOL; (*Start Sensor*)
		bEndSen : {REDUND_UNREPLICABLE} BOOL; (*End Sensor*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tTimeOut : {REDUND_UNREPLICABLE} TIME := T#0s; (*Time Out*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrSenToSenInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvMtrOn (*Conveyor Motor On Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Delay Time*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrOnOffInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvMtrOff (*Conveyor Motor Off Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Delay Time*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : {REDUND_UNREPLICABLE} tyConvMtrOnOffInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvMtrCtrl (*Conveyor Motor Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		bMtrOn : BOOL; (*Turn Motor On*)
		bOnDirMod : {REDUND_UNREPLICABLE} BOOL; (*True = On & Direction Mode, False = LToR & RToL Mode*)
		bConvLToR : {REDUND_UNREPLICABLE} BOOL; (*True = Left to Right Direction, False = Right to Left Direction*)
		tMtrOnDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor On Delay Time*)
		tMtrOffDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Motor Off Delay Time*)
		tMtrChgDirDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Motor Change Direction Delay Time*)
	END_VAR
	VAR_OUTPUT
		bMtrSigOnOrLToR : BOOL; (*Output - On & Dir Mode: Motor On / LToR & RToL Mode: Left To Right*)
		bMtrDirOrRToL : BOOL; (*Output - On & Dir Mode: True = L To R, False = R To L / LToR & RToL Mode: Right To Left*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrCtrlInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvLongBrd (*Conveyor Long Board Detection*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bSen1 : {REDUND_UNREPLICABLE} BOOL; (*Sensor*)
		bSen2 : {REDUND_UNREPLICABLE} BOOL; (*Sensor*)
		bSen3 : {REDUND_UNREPLICABLE} BOOL; (*Sensor*)
		bSen4 : {REDUND_UNREPLICABLE} BOOL; (*Sensor*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#500ms; (*Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvLongBrdInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvBrkOn (*Conveyor Motor Brake On Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tDlyTm : TIME := T#0s; (*Delay Time*)
	END_VAR
	VAR_OUTPUT
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : tyConvMtrOnOffInternal;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbConvBrkOff (*Conveyor Motor Brake Off Control*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tDlyTm : {REDUND_UNREPLICABLE} TIME := T#0s; (*Delay Time*)
	END_VAR
	VAR_OUTPUT
		bMtrBrk : BOOL; (*Output - Motor Brake Control*)
		udiStatus : UDINT; (*FB Status*)
	END_VAR
	VAR
		tyInternal : {REDUND_UNREPLICABLE} tyConvMtrOnOffInternal;
	END_VAR
END_FUNCTION_BLOCK
