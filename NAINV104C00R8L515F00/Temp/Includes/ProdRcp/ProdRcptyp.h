/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_23_
#define _BUR_1700031252_23_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eProdRcpAction
{	ProdRcpActIdle,
	ProdRcpActCreateDir,
	ProdRcpActAddEdit,
	ProdRcpActDel,
	ProdRcpActGetInfo,
	ProdRcpActGetList,
	ProdRcpActFilter,
	ProdRcpActLoadRcp,
	ProdRcpActAdd,
	ProdRcpActEdit,
	ProdRcpActReadCurrRcp,
	ProdRcpActWriteCurrRcpParam,
	ProdRcpActSaveList,
	ProdRcpActSort,
	ProdRcpActEndCharFilter
} eProdRcpAction;

typedef struct tyProdRcpParam
{	plcstring sRcpNm[255];
	signed long diWidthInUM;
	signed long diWidthInUM2;
	unsigned char usiMcMod;
	plcstring sDisplayInfo[31];
	plcdt dtLastModified;
	unsigned char usiFlippedBrd;
	plcstring sMatchCode[31];
} tyProdRcpParam;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ProdRcp/ProdRcp.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_23_ */

