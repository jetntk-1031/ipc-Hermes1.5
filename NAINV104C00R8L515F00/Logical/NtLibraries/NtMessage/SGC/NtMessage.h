/* Automation Studio generated header file */
/* Do not edit ! */
/* NtMessage 5.00.1 */

#ifndef _NTMESSAGE_
#define _NTMESSAGE_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtMessage_VERSION
#define _NtMessage_VERSION 5.00.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyXMLConvertToTableInternal
{	unsigned long udi;
	unsigned long udj;
	unsigned long udiTitleOffset;
	unsigned long udiValueOffset;
	unsigned long udiSizeOffset;
	unsigned long udiStartAddr;
	unsigned long udiEndAddr;
	unsigned long udiTableValueSize;
	unsigned short uiSize;
	plcbit bSymbolStart;
	plcbit bSymbolEnd;
	plcbit bSymbolQuestion;
	plcbit bSymbolSlash;
	plcbit bSymbolEqual;
	plcbit bSymbolQuotation;
	plcbit bSymbolSpace;
	plcbit bSymbolChar;
	plcbit bFirstStart;
	plcbit bInTag;
	plcbit bInStartTag;
	plcbit bInEndTag;
	plcbit bInDeclarationTag;
	plcbit bInTagNm;
	plcbit bInTagNmDone;
	plcbit bInTagAttribute;
	plcbit bInTagAttributeDone;
	plcbit bInTagValue;
	plcbit bInTagEndShort;
	plcbit bInTagEndDeclaration;
	plcbit bInElement;
	plcbit bWriteStartTag;
	plcbit bWriteEndTag;
	plcbit bWriteDeclarationTag;
	plcbit bWriteAttribute;
	plcbit bWriteValue;
	plcbit bWriteEnd;
	plcbit bWriteEndShort;
	plcbit bWriteEndDeclaration;
	plcbit bWriteElement;
} tyXMLConvertToTableInternal;

typedef struct tyTableConvertToXMLInternal
{	unsigned long udi;
	unsigned long udj;
	unsigned long udiTitleOffset;
	unsigned long udiValueOffset;
	unsigned long udiSizeOffset;
	unsigned long udiAddr;
	unsigned long udiLvl;
	unsigned short uiSize;
	unsigned long udiSize;
	unsigned long udiCurrTitleAddr;
	unsigned long udiCurrValueAddr;
} tyTableConvertToXMLInternal;

typedef struct tyXMLTableDat
{	plcstring sTitle[3];
	plcstring sValue[255];
	unsigned short uiSize;
} tyXMLTableDat;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC unsigned long fXMLConvertToTable(unsigned long p_XMLMsg, unsigned long udiXMLMsgLen, unsigned long p_XMLAllTable, unsigned long p_XMLTableFirstTitle, unsigned long udiXMLTableTitleSize, unsigned long p_XMLTableFirstValue, unsigned long udiXMLTableValueSize, unsigned long p_XMLTableFirstSize, unsigned long udiXMLSingleTableSize, unsigned long udiXMLTableTotalIdx, unsigned long* p_udiXMLTableWriteIdx);
_BUR_PUBLIC unsigned long fTableConvertToXML(unsigned long p_XMLMsg, unsigned long* p_udiXMLMsgLen, unsigned long udiXMLMsgMaxLen, unsigned long p_XMLAllTable, unsigned long p_XMLTableFirstTitle, unsigned long p_XMLTableFirstValue, unsigned long p_XMLTableFirstSize, unsigned long udiXMLSingleTableSize, unsigned long udiXMLTableTotalIdx);


#ifdef __cplusplus
};
#endif
#endif /* _NTMESSAGE_ */

