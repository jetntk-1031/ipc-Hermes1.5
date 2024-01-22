#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
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

#ifndef __AS__TYPE_tyXMLTableDat
#define __AS__TYPE_tyXMLTableDat
typedef struct tyXMLTableDat
{	plcstring sTitle[3];
	plcstring sValue[255];
	unsigned short uiSize;
} tyXMLTableDat;
#endif

#ifndef __AS__TYPE_eHermesTransferState
#define __AS__TYPE_eHermesTransferState
typedef enum eHermesTransferState
{	HermesTransferStateNotStarted = 1,
	HermesTransferStateIncomplete = 2,
	HermesTransferStateComplete = 3,
} eHermesTransferState;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinishedData
#define __AS__TYPE_tyHermesTransportFinishedData
typedef struct tyHermesTransportFinishedData
{	eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesTransportFinishedData;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinishedAvl
#define __AS__TYPE_tyHermesTransportFinishedAvl
typedef struct tyHermesTransportFinishedAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesTransportFinishedAvl;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinished
#define __AS__TYPE_tyHermesTransportFinished
typedef struct tyHermesTransportFinished
{	tyHermesTransportFinishedData tyData;
	tyHermesTransportFinishedAvl tyAvl;
} tyHermesTransportFinished;
#endif

_BUR_PUBLIC plcbit fHermesParseTransportFinished(struct tyHermesTransportFinished(* p_tyTransportFinished), struct tyXMLTableDat(* tyXMLTableCurr), struct tyXMLTableDat(* tyXMLTableNxt), plcstring sCurrValueLowerCase[255]);
