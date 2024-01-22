#ifndef __AS__TYPE_
#define __AS__TYPE_
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

#ifndef __AS__TYPE_eTLBuzAction
#define __AS__TYPE_eTLBuzAction
typedef enum eTLBuzAction
{	TLBuzActIdle = 0,
	TLBuzActSetGreen = 1,
	TLBuzActSetAmber = 2,
	TLBuzActSetRed = 3,
	TLBuzActSetWhite = 4,
	TLBuzActSetBlue = 5,
	TLBuzActSetBuz = 6,
	TLBuzActRstGreen = 7,
	TLBuzActRstAmber = 8,
	TLBuzActRstRed = 9,
	TLBuzActRstWhite = 10,
	TLBuzActRstBlue = 11,
	TLBuzActRstBuz = 12,
	TLBuzActSetAll = 13,
	TLBuzActRstAll = 14,
} eTLBuzAction;
#endif

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
#endif

_BUR_LOCAL eTLBuzAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcbit bTLRed;
_BUR_LOCAL plcbit bTLAmber;
_BUR_LOCAL plcbit bTLGreen;
_BUR_LOCAL plcbit bTLBlue;
_BUR_LOCAL plcbit bTLWhite;
_BUR_LOCAL plcbit bBuzBeep;
_GLOBAL unsigned long p_TLBuzStat;
_GLOBAL unsigned long p_TLBuzStatus;
_GLOBAL unsigned long p_TLBuzStatTxt;
_GLOBAL unsigned long p_TLBuzRed;
_GLOBAL unsigned long p_TLBuzAmber;
_GLOBAL unsigned long p_TLBuzGreen;
_GLOBAL unsigned long p_TLBuzBlue;
_GLOBAL unsigned long p_TLBuzWhite;
_GLOBAL unsigned long p_TLBuzBeep;
