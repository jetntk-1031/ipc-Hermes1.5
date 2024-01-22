/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_83_
#define _BUR_1700031253_83_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ePage
{	UIP0000SSaver = 0,
	UIP0001Startup = 1,
	UIP0002Menu = 2,
	UIP0100Login = 100,
	UIP0200OpsGen = 200,
	UIP0201OpsConv = 201,
	UIP0300McInfo = 300,
	UIP0400ProdSel = 400,
	UIP0600Alm = 600,
	UIP0700LFCtrl = 700,
	UIP0900GenIn = 900,
	UIP0910GenOut = 910,
	UIP0920MtrNPneuCtrl = 920,
	UIP0921ClampNoRS = 921,
	UIP0922Shutter = 922,
	UIP0923Stopper = 923,
	UIP0924ClampWithRS = 924,
	UIP0931ConvInv = 931,
	UIP0934AW = 934,
	UIP0940CommCtrl = 940,
	UIP0950Simu = 950,
	UIP1000Lang = 1000,
	UIP1020McSetNavi = 1020,
	UIP1021McSetGen = 1021,
	UIP1022McSetVComm = 1022,
	UIP1023McSetHComm = 1023,
	UIP1024McSetAntiGap = 1024,
	UIP1040ProdSet = 1040,
	UIP1050LFSet = 1050,
	UIP1080UsrMgmt = 1080,
	UIP1081UsrMgmtUsrAccessRgt = 1081
} ePage;

typedef struct tyTable
{	plcbit bSliderActive;
	plcbit bTableActive;
	plcstring sVisuNm[81];
	unsigned short uiSelectedRow;
	unsigned short uiSelectedRowOld;
	unsigned short uiTablePos;
} tyTable;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UI/UI/Local.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_83_ */

