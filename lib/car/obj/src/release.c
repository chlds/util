/* **** Notes

Release.

Remarks:
Refer at fn. keep and fn. keep_w.
*/


# define CAR
# include "../../../incl/config.h"
# include <stdio.h>
# include <stdlib.h>

signed(__cdecl release(signed(n),void(**argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(n<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

p = (signed char(*)) (*argp);

r = embed(n,p);
if(!r) {
printf("%s \n","<< Error at fn. embed()");
return(0x00);
}

free(p);
p = (0x00);
*argp = (p);

return(r);
}
