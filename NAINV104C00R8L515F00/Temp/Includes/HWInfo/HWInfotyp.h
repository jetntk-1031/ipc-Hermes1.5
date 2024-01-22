/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_15_
#define _BUR_1700031252_15_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eHWInfoAction
{	HWInfoActIdle,
	HWInfoActGetIPAddr,
	HWInfoActGetSubnetMask,
	HWInfoActGetMacAddr,
	HWInfoActSetIPAddr,
	HWInfoActSetSubnetMask,
	HWInfoActGetEthConfigMode,
	HWInfoActSetEthConfigMode
} eHWInfoAction;

typedef enum eNetworkConfigMod
{	SetIPManually = 0,
	IPFromDHCPServer = 1
} eNetworkConfigMod;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/HWInfo/HWInfo.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_15_ */

