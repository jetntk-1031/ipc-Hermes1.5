
FUNCTION fBffrSetFull : UDINT (*Set Buffer To Full Condition, According To Buffer Parameter*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyBffr : REFERENCE TO tyBffr; (*Output - Buffer*)
		tyBffrParam : tyBffrParam; (*Buffer Parameter*)
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		sBffrNm : STRING[15]; (*Buffer Name*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrSetFullInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrSetMty : UDINT (*Set Buffer To Emtpy Condition, According To Buffer Parameter*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyBffr : REFERENCE TO tyBffr; (*Output - Buffer*)
		tyBffrParam : tyBffrParam; (*Buffer Parameter*)
		sBffrNm : STRING[15]; (*Buffer Name*)
	END_VAR
	VAR
		tyInternal : tyBffrSetMtyInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrLoad : UDINT (*Load Board Data Into Buffer*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyBffr : REFERENCE TO tyBffr; (*Buffer*)
		p_bNewProduct : REFERENCE TO BOOL; (*New Product Entered*)
		diSlt : DINT; (*Slot To Load*)
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		bGdBrd : BOOL; (*Good Board*)
		sProdNm : STRING[15]; (*Board Product Name*)
		sBarcode1 : STRING[80]; (*Barcode*)
		sBarcode2 : STRING[80]; (*Barcode*)
	END_VAR
	VAR
		tyInternal : tyBffrLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrUnload : UDINT (*Unload Board Data From Buffer*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyBrdUnloadStat : REFERENCE TO tyBrdUnloadStat; (*Output - Board Unload Status*)
		p_tyBffr : REFERENCE TO tyBffr; (*Buffer*)
		p_bLastProdUnload : REFERENCE TO BOOL; (*Last Product Unload From Buffer*)
		p_bLastProdLeftInBffr : REFERENCE TO BOOL; (*Last Product Left In Buffer After Unload*)
		diSlt : DINT; (*Slot To Unload*)
	END_VAR
	VAR
		tyInternal : tyBffrUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fDispBffrAscending : BOOL (*Generate Buffer Display In Ascending Order*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyDispBffr : REFERENCE TO tyDispBffr; (*Output - Buffer Display in HMI*)
		tyBffrParam : tyBffrParam; (*Buffer Parameter*)
		tyBffr : tyBffr; (*Buffer*)
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		tCoolTm : TIME; (*Cooling Time*)
		dwNAColor : DWORD; (*No Board Color*)
		dwGdColor : DWORD; (*Good Board Color*)
		dwBadColor : DWORD; (*Bad Board Color*)
	END_VAR
	VAR
		tyInternal : tyDispBffrInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fDispBffrDescending : BOOL (*Generate Buffer Display In Descending Order*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyDispBffr : REFERENCE TO tyDispBffr; (*Output - Buffer Display in HMI*)
		tyBffrParam : tyBffrParam; (*Buffer Parameter*)
		tyBffr : tyBffr; (*Buffer*)
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		tCoolTm : TIME; (*Cooling Time*)
		dwNAColor : DWORD; (*No Board Color*)
		dwGdColor : DWORD; (*Good Board Color*)
		dwBadColor : DWORD; (*Bad Board Color*)
	END_VAR
	VAR
		tyInternal : tyDispBffrInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtLoadSeqAny : DINT (*Buffer Next Load Sequential Any Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bAscending : BOOL; (*Ascending Order*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtLoadSeqGd : DINT (*Buffer Next Load Sequential Good Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bAscending : BOOL; (*Ascending Order*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtLoadSeqBad : DINT (*Buffer Next Load Sequential Bad Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bAscending : BOOL; (*Ascending Order*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtLoadNearbyAny : DINT (*Buffer Next Load Nearby Any Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		diCurrSlt : DINT; (*Physical Slot Position Ready to Receive or Send Board*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtLoadNearbyGd : DINT (*Buffer Next Load Nearby Good Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		diCurrSlt : DINT; (*Physical Slot Position Ready to Receive or Send Board*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtLoadNearbyBad : DINT (*Buffer Next Load Nearby Bad Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		diCurrSlt : DINT; (*Physical Slot Position Ready to Receive or Send Board*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtLoadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrChkCoolTmRdy : BOOL (*Check Cool Time Ready*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		diSlt : DINT; (*Slot Number*)
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		tCoolTm : TIME; (*Cool Time (0 = Disable)*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
END_FUNCTION

FUNCTION fBffrChkCoolBrdAny : DINT (*Check Quantity of Any Board Is Still Cooling*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		tCoolTm : TIME; (*Cool Time (0 = Disable)*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrChkCoolBrdInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrChkCoolBrdGd : DINT (*Check Quantity of Good Board Is Still Cooling*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		tCoolTm : TIME; (*Cool Time (0 = Disable)*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrChkCoolBrdInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrChkCoolBrdBad : DINT (*Check Quantity of Bad Board Is Still Cooling*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		dtTimeNow : DATE_AND_TIME; (*Current Time*)
		tCoolTm : TIME; (*Cool Time (0 = Disable)*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrChkCoolBrdInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtUnloadFIFOAny : DINT (*Buffer FIFO Next Unload Any Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		tyBffr : tyBffr; (*Buffer*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtUnloadFIFOGd : DINT (*Buffer FIFO Next Unload Good Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		tyBffr : tyBffr; (*Buffer*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtUnloadFIFOBad : DINT (*Buffer FIFO Next Unload Bad Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		tyBffr : tyBffr; (*Buffer*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtUnloadLIFOAny : DINT (*Buffer LIFO Next Unload Any Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		tyBffr : tyBffr; (*Buffer*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtUnloadLIFOGd : DINT (*Buffer LIFO Next Unload Good Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		tyBffr : tyBffr; (*Buffer*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrNxtUnloadLIFOBad : DINT (*Buffer LIFO Next Unload Bad Board*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		tyBffr : tyBffr; (*Buffer*)
		sProdNm : STRING[15]; (*Board Product Name*)
	END_VAR
	VAR
		tyInternal : tyBffrNxtUnloadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrStat : BOOL (*Update Buffer Status*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_tyBffrStat : REFERENCE TO tyBffrStat; (*Output - Buffer Status*)
		tyBffr : tyBffr; (*Buffer*)
	END_VAR
	VAR
		tyInternal : tyBffrStatInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fBffrDTConvert : INT (*Convert DT To String (Date:31-01-2000, Time:12:59:59)*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sDTOut : REFERENCE TO STRING[30]; (*Output - DT String*)
		dtIn : DATE_AND_TIME; (*Date Time Input*)
	END_VAR
	VAR
		tyInternal : tyBffrDTConvertInternal; (*Local Variables*)
	END_VAR
END_FUNCTION
