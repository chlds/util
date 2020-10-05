/*

Map on the RAM.

Along with C library

Remarks:
Please be sure to release.
*/


# define CAR
# include "../../../incl/config.h"
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

signed(__cdecl keep(signed char(**di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

r = ct(si);
r++;
r = (r*(sizeof(**di)));

i = (r);

p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = cpy(p,si);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

*di = (p);
p = (0x00);

return(i);
}
