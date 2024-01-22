/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_3_
#define _BUR_1700031252_3_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eUIAction
{	UIActIdle,
	UIActInitial
} eUIAction;

typedef enum eUIInitial
{	UIInitialC0005,
	UIInitialC0007,
	UIInitialP0000,
	UIInitialP0200,
	UIInitialP0201,
	UIInitialP0300,
	UIInitialP0400,
	UIInitialP0900,
	UIInitialP0910,
	UIInitialP0920,
	UIInitialP0922,
	UIInitialP0924,
	UIInitialP0927,
	UIInitialP0928,
	UIInitialP0931,
	UIInitialP0934,
	UIInitialP0935,
	UIInitialP0940,
	UIInitialP1000,
	UIInitialP1020,
	UIInitialP1021,
	UIInitialP1022,
	UIInitialP1023,
	UIInitialP1024,
	UIInitialP1026,
	UIInitialP1040,
	UIInitialP1050,
	UIInitialP1080,
	UIInitialP1081,
	UIInitialDone
} eUIInitial;

typedef struct tyUIAllAlm
{	plcbit bAlm[10000];
	plcbit bWarning[10000];
} tyUIAllAlm;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UI/UI.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_3_ */

