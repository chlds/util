/* **** Notes

Read bytes to the delimiter.

Remarks:
Return values, 0x00 (for an error), 0x01 (for an end) and Others (for the end).
//*/


# define CAR

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl read_b(signed(fd),signed char(delim),signed char(**b))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);

AND(flag,0x00);
*b = (0x00);
r = read_b_r(fd,delim,&flag,b);
if(!r) return(0x00);

if(!flag) {
if(*b) {
embed(0x00,*b);
free(*b);
}
*b = (0x00);
}

r = (signed) (flag);

return(r);
}
