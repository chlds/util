/*

Decode to Unicode character in UTF-16 out of Unicode bytes in UTF-8.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CAR
# include "../../../incl/config.h"
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

signed(__cdecl decode_surrogate_second(signed short(*di),signed(si))) {

/* **** DATA, BSS and STACK */
auto signed ADDITIONAL = (0x10000);
auto signed SECOND = (0xDC00);

auto signed char *p;
auto signed surrog;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);

surrog = (si);
surrog = (-ADDITIONAL+(surrog));
AND(surrog,0x3FF);
OR(surrog,SECOND);

*di = (signed short) (surrog);

return(0x02);
}
