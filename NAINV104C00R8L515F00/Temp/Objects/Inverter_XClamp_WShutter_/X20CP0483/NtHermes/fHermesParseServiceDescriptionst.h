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

#ifndef __AS__TYPE_tyHermesFeature
#define __AS__TYPE_tyHermesFeature
typedef struct tyHermesFeature
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeature;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescriptionData
#define __AS__TYPE_tyHermesServiceDescriptionData
typedef struct tyHermesServiceDescriptionData
{	plcstring sMachineId[81];
	plcstring sSystemId[81];
	signed short iLaneId;
	plcstring sInterfaceId[81];
	plcstring sVersion[8];
	tyHermesFeature tySupportedFeatures;
} tyHermesServiceDescriptionData;
#endif

#ifndef __AS__TYPE_tyHermesFeatureAvl
#define __AS__TYPE_tyHermesFeatureAvl
typedef struct tyHermesFeatureAvl
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeatureAvl;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescriptionAvl
#define __AS__TYPE_tyHermesServiceDescriptionAvl
typedef struct tyHermesServiceDescriptionAvl
{	plcbit bMachineId;
	plcbit bSystemId;
	plcbit bLaneId;
	plcbit bInterfaceId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	tyHermesFeatureAvl tySupportedFeatures;
} tyHermesServiceDescriptionAvl;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescription
#define __AS__TYPE_tyHermesServiceDescription
typedef struct tyHermesServiceDescription
{	tyHermesServiceDescriptionData tyData;
	tyHermesServiceDescriptionAvl tyAvl;
} tyHermesServiceDescription;
#endif

_BUR_PUBLIC signed short str2int(plcstring IN[81]);
_BUR_PUBLIC plcbit fHermesParseServiceDescription(struct tyHermesServiceDescription(* p_tyServiceDescription), struct tyXMLTableDat(* tyXMLTableCurr), struct tyXMLTableDat(* tyXMLTableNxt), plcstring sCurrValueLowerCase[255]);
