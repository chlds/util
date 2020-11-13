/* **** Notes

Read bytes to the delimiter.
//*/


# define CAR

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl read_b(signed char(delim),signed(fd),signed char(**b))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);

AND(flag,0x00);
*b = (0x00);
r = read_b_r(delim,flag,fd,b);
if(!r) return(0x00);

if(flag<(0x00)) {
if(*b) {
embed(0x00/* flag */,*b);
free(*b);
}
*b = (0x00);
r = (0x00);
}

if(0x00<(flag)) r = (0x01);
if(0x01<(flag)) r++;

return(r);
}
