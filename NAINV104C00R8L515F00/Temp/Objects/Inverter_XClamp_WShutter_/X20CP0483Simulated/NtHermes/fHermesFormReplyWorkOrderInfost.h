#ifndef __AS__TYPE_
#define __AS__TYPE_
static unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length);
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_DTStructure
#define __AS__TYPE_DTStructure
typedef struct DTStructure
{	unsigned short year;
	unsigned char month;
	unsigned char day;
	unsigned char wday;
	unsigned char hour;
	unsigned char minute;
	unsigned char second;
	unsigned short millisec;
	unsigned short microsec;
} DTStructure;
#endif

#ifndef __AS__TYPE_tyXMLTableDat
#define __AS__TYPE_tyXMLTableDat
typedef struct tyXMLTableDat
{	plcstring sTitle[3];
	plcstring sValue[255];
	unsigned short uiSize;
} tyXMLTableDat;
#endif

#ifndef __AS__TYPE_tyHermesReplyWorkOrderInfoData
#define __AS__TYPE_tyHermesReplyWorkOrderInfoData
typedef struct tyHermesReplyWorkOrderInfoData
{	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	signed short iStatus;
} tyHermesReplyWorkOrderInfoData;
#endif

#ifndef __AS__TYPE_tyHermesReplyWorkOrderInfoAvl
#define __AS__TYPE_tyHermesReplyWorkOrderInfoAvl
typedef struct tyHermesReplyWorkOrderInfoAvl
{	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bStatus;
} tyHermesReplyWorkOrderInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesReplyWorkOrderInfo
#define __AS__TYPE_tyHermesReplyWorkOrderInfo
typedef struct tyHermesReplyWorkOrderInfo
{	tyHermesReplyWorkOrderInfoData tyData;
	tyHermesReplyWorkOrderInfoAvl tyAvl;
} tyHermesReplyWorkOrderInfo;
#endif

_BUR_PUBLIC signed short LEN(plcstring IN[32768]);
_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC plcstring* int2str(signed short IN, plcstring pStr[81], unsigned long len);
_BUR_PUBLIC signed short fHermesFormReplyWorkOrderInfo(struct tyXMLTableDat pa_tyXMLTable[50], struct DTStructure(* tyDTStructure), struct tyHermesReplyWorkOrderInfo(* tyParameter));
_BUR_PUBLIC plcbit fHermesGetTimestamp(plcstring p_sTimestamp[24], struct DTStructure(* tyDTStructure));