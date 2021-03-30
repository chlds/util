/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
Along with no surrogate pairs.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl encode2b(signed char(**di),signed short(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = encode2b_r(di,si);
if(!(*di)) AND(r,0x00);

return(r);
}
