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

#ifndef __AS__TYPE_tyIPValidInternal
#define __AS__TYPE_tyIPValidInternal
typedef struct tyIPValidInternal
{	signed short i;
	signed short iCnt;
	signed short a_iDotPos[3];
	plcstring a_sIPPart[4][4];
	signed short a_iIPPart[4];
	plcstring sMismatchChar[2];
} tyIPValidInternal;
#endif

#ifndef __AS__TYPE_tyHermesUpstreamConfiguration
#define __AS__TYPE_tyHermesUpstreamConfiguration
typedef struct tyHermesUpstreamConfiguration
{	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sHostAddress[255];
	unsigned short uiPort;
} tyHermesUpstreamConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesDownstreamConfiguration
#define __AS__TYPE_tyHermesDownstreamConfiguration
typedef struct tyHermesDownstreamConfiguration
{	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sClientAddress[255];
	unsigned short uiPort;
} tyHermesDownstreamConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesSetConfigurationData
#define __AS__TYPE_tyHermesSetConfigurationData
typedef struct tyHermesSetConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationData;
#endif

#ifndef __AS__TYPE_tyHermesUpstreamConfigurationAvl
#define __AS__TYPE_tyHermesUpstreamConfigurationAvl
typedef struct tyHermesUpstreamConfigurationAvl
{	plcbit bUpstreamLaneId;
	plcbit bUpstreamInterfaceId;
	plcbit bHostAddress;
	plcbit bPort;
} tyHermesUpstreamConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesDnstreamConfigurationAvl
#define __AS__TYPE_tyHermesDnstreamConfigurationAvl
typedef struct tyHermesDnstreamConfigurationAvl
{	plcbit bDownstreamLaneId;
	plcbit bDownstreamInterfaceId;
	plcbit bClientAddress;
	plcbit bPort;
} tyHermesDnstreamConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesSetConfigurationAvl
#define __AS__TYPE_tyHermesSetConfigurationAvl
typedef struct tyHermesSetConfigurationAvl
{	plcbit bMachineId;
	plcbit bSupervisorySystemPort;
	plcbit bUpstreamConfigurations;
	plcbit bDownstreamConfigurations;
	signed short iUpstreamConfigurations;
	signed short iDownstreamConfigurations;
	struct tyHermesUpstreamConfigurationAvl a_tyUpstreamConfigurations[4];
	struct tyHermesDnstreamConfigurationAvl a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesSetConfiguration
#define __AS__TYPE_tyHermesSetConfiguration
typedef struct tyHermesSetConfiguration
{	tyHermesSetConfigurationData tyData;
	tyHermesSetConfigurationAvl tyAvl;
} tyHermesSetConfiguration;
#endif

_BUR_PUBLIC plcbit fIPValid(plcstring sIPAdd[16], signed short pa_iIPPart[4]);
_BUR_PUBLIC unsigned long fHermesChkParamSC(struct tyHermesSetConfiguration(* tySetConfiguration), plcstring sMachineId[81]);
