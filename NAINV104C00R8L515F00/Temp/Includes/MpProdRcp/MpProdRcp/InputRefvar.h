/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_119_
#define _BUR_1700031253_119_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcstring (*p_sFileName)[256];
_BUR_LOCAL plcstring (*p_sPVName)[101];
_BUR_LOCAL struct MpComIdentType *p_tyMpProdRcpMpLink;
_BUR_LOCAL struct tyProdRcpParam (*pa_tyMpProdRcp)[2000];
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eMpProdRcpAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/MpProdRcp/MpProdRcp/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/MpProdRcp/MpProdRcp/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_119_ */

