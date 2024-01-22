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

#ifndef __AS__TYPE_eHermesMsgType
#define __AS__TYPE_eHermesMsgType
typedef enum eHermesMsgType
{	HermesMsgTypeNA = 0,
	HermesMsgTypeCheckAlive = 1,
	HermesMsgTypeCheckAlivePing = 2,
	HermesMsgTypeCheckAlivePong = 3,
	HermesMsgTypeServiceDescription = 4,
	HermesMsgTypeSServiceDescription = 5,
	HermesMsgTypeNotification = 6,
	HermesMsgTypeBoardAvailable = 7,
	HermesMsgTypeRevokeBoardAvl = 8,
	HermesMsgTypeMachineReady = 9,
	HermesMsgTypeRevokeMachineReady = 10,
	HermesMsgTypeStartTransport = 11,
	HermesMsgTypeStopTransport = 12,
	HermesMsgTypeTransportFinished = 13,
	HermesMsgTypeSetConfiguration = 14,
	HermesMsgTypeGetConfiguration = 15,
	HermesMsgTypeCurrConfiguration = 16,
	HermesMsgTypeBoardForecast = 17,
	HermesMsgTypeBoardForecastId = 18,
	HermesMsgTypeBoardForecastNoId = 19,
	HermesMsgTypeBoardArrived = 20,
	HermesMsgTypeBoardArrived1 = 21,
	HermesMsgTypeBoardArrived2 = 22,
	HermesMsgTypeBoardArrived3 = 23,
	HermesMsgTypeBoardArrived4 = 24,
	HermesMsgTypeBoardDeparted = 25,
	HermesMsgTypeBoardDeparted1 = 26,
	HermesMsgTypeBoardDeparted2 = 27,
	HermesMsgTypeBoardDeparted3 = 28,
	HermesMsgTypeBoardDeparted4 = 29,
	HermesMsgTypeQueryBoardInfo = 30,
	HermesMsgTypeSendBoardInfo = 31,
	HermesMsgTypeQueryWorkOrderInfo = 32,
	HermesMsgTypeSendWorkOrderInfo = 33,
	HermesMsgTypeReplyWorkOrderInfo = 34,
	HermesMsgTypeCommand = 35,
} eHermesMsgType;
#endif

_BUR_PUBLIC plcbit fHermesAddOneMsgSend(eHermesMsgType pa_eMsgSend[51], unsigned long(* p_udiIdx), eHermesMsgType eMsgType);
