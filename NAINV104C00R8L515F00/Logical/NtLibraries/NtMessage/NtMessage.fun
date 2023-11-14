
FUNCTION fXMLConvertToTable : UDINT (*XML Message Convert To Table Data*)
	VAR_INPUT
		p_XMLMsg : UDINT; (*Pointer To XML Message*)
		udiXMLMsgLen : UDINT; (*Length Of XML Message*)
		p_XMLAllTable : UDINT; (*Pointer To All XML Table*)
		p_XMLTableFirstTitle : UDINT; (*Pointer To First Title In XML Message*)
		udiXMLTableTitleSize : UDINT; (*Size Of Table Title*)
		p_XMLTableFirstValue : UDINT; (*Pointer To First Value In XML Message*)
		udiXMLTableValueSize : UDINT; (*Size Of Table Value*)
		p_XMLTableFirstSize : UDINT; (*Pointer To First Value Size In XML Message (UINT) (2 bytes)*)
		udiXMLSingleTableSize : UDINT; (*Size Of XML Single Table*)
		udiXMLTableTotalIdx : UDINT; (*Total Number Of XML Table Index*)
		p_udiXMLTableWriteIdx : REFERENCE TO UDINT; (*Total Number Of XML Table Written*)
	END_VAR
	VAR
		tyInternal : tyXMLConvertToTableInternal;
	END_VAR
END_FUNCTION

FUNCTION fTableConvertToXML : UDINT (*Table Data Convert To XML Message*)
	VAR_INPUT
		p_XMLMsg : UDINT; (*Pointer To XML Message*)
		p_udiXMLMsgLen : REFERENCE TO UDINT; (*Pointer to Length Of XML Message*)
		udiXMLMsgMaxLen : UDINT; (*Max Length Of XML Message*)
		p_XMLAllTable : UDINT; (*Pointer To All XML Table*)
		p_XMLTableFirstTitle : UDINT; (*Pointer To First Title In XML Message*)
		p_XMLTableFirstValue : UDINT; (*Pointer To First Value In XML Message*)
		p_XMLTableFirstSize : UDINT; (*Pointer To First Value Size In XML Message (UINT) (2 bytes)*)
		udiXMLSingleTableSize : UDINT; (*Size Of XML Single Table*)
		udiXMLTableTotalIdx : UDINT; (*Total Number Of XML Table Index*)
	END_VAR
	VAR
		tyInternal : tyTableConvertToXMLInternal;
	END_VAR
END_FUNCTION
