/*

Decode to Unicode characters in UTF-16 out of Unicode bytes in UTF-8.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CL_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si))) {

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

r = decode2uni(&i,si);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

si = (r+(si));
*di = (signed short) (i);
di++;
r = (sizeof(*di));
size = (-r+(size));

return(0x01+(decode2w(size,di,si)));
}
