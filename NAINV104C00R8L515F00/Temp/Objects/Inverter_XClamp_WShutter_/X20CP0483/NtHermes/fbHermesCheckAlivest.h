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

#ifndef __AS__TYPE_eHermesCheckAliveType
#define __AS__TYPE_eHermesCheckAliveType
typedef enum eHermesCheckAliveType
{	HermesCheckAliveTypeUnknown = 0,
	HermesCheckAliveTypePing = 1,
	HermesCheckAliveTypePong = 2,
} eHermesCheckAliveType;
#endif

#ifndef __AS__TYPE_tyHermesCheckAliveData
#define __AS__TYPE_tyHermesCheckAliveData
typedef struct tyHermesCheckAliveData
{	eHermesCheckAliveType eType;
	plcstring sId[81];
} tyHermesCheckAliveData;
#endif

#ifndef __AS__TYPE_tyHermesCheckAliveAvl
#define __AS__TYPE_tyHermesCheckAliveAvl
typedef struct tyHermesCheckAliveAvl
{	plcbit bType;
	plcbit bId;
} tyHermesCheckAliveAvl;
#endif

#ifndef __AS__TYPE_tyHermesCheckAlive
#define __AS__TYPE_tyHermesCheckAlive
typedef struct tyHermesCheckAlive
{	tyHermesCheckAliveData tyData;
	tyHermesCheckAliveAvl tyAvl;
} tyHermesCheckAlive;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
struct fbHermesCheckAlive
{	plctime tSendTm;
	plctime tRcvTimeOut;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	struct TON fbSendTm;
	struct TON fbRcvTO;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
};
_BUR_PUBLIC void fbHermesCheckAlive(struct fbHermesCheckAlive* inst);
