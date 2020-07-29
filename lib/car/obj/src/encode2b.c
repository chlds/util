/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CL_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl encode2b(signed(size),signed char(*di),signed short(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(size<(0x01)) {
*di = (0x00);
return(0x00);
}

if(!(*si)) {
*di = (0x00);
return(0x00);
}

r = encode2uni(size,di,*si);
if(!r) {
printf("%s\n","<< Error at fn. encode2uni()");
return(0x00);
}

size = (-r+(size));
di = (r+(di));
si++;

return(0x01+(encode2b(size,di,si)));
}
