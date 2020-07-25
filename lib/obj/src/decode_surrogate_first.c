/*

Decode to Unicode character in UTF-16 out of Unicode bytes in UTF-8.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CL_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl decode_surrogate_first(signed short(*di),signed(si))) {

/* **** DATA, BSS and STACK */
auto signed ADDITIONAL = (0x10000);
auto signed FIRST = (0xD800);

auto signed char *p;
auto signed surrog;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);

surrog = (si);
surrog = (-ADDITIONAL+(surrog));
SHR(surrog,0x0A);
AND(surrog,0x3FF);
OR(surrog,FIRST);

*di = (signed short) (surrog);

return(0x02);
}