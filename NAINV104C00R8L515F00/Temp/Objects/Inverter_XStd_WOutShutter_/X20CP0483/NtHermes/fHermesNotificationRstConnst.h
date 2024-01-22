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

#ifndef __AS__TYPE_eHermesSeverity
#define __AS__TYPE_eHermesSeverity
typedef enum eHermesSeverity
{	HermesSeverityFatalError = 1,
	HermesSeverityError = 2,
	HermesSeverityWarning = 3,
	HermesSeverityInfo = 4,
} eHermesSeverity;
#endif

#ifndef __AS__TYPE_tyHermesNotificationData
#define __AS__TYPE_tyHermesNotificationData
typedef struct tyHermesNotificationData
{	signed short iNotificationCode;
	eHermesSeverity eSeverity;
	plcstring sDescription[255];
} tyHermesNotificationData;
#endif

#ifndef __AS__TYPE_tyHermesNotificationAvl
#define __AS__TYPE_tyHermesNotificationAvl
typedef struct tyHermesNotificationAvl
{	plcbit bNotificationCode;
	plcbit bSeverity;
	plcbit bDescription;
} tyHermesNotificationAvl;
#endif

#ifndef __AS__TYPE_tyHermesNotification
#define __AS__TYPE_tyHermesNotification
typedef struct tyHermesNotification
{	tyHermesNotificationData tyData;
	tyHermesNotificationAvl tyAvl;
} tyHermesNotification;
#endif

_BUR_PUBLIC plcbit fHermesNotificationRstConn(struct tyHermesNotification(* tyNotification));
