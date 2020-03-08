/* **** Notes

Unmap and map.

Remarks:
Return the number of copied bytes.
Along with C library
//*/


# define CL_MACRO

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl extend(signed char(**argp),signed(*total),signed(extra))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,l,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!total) return(0x00);
if(extra<(0x01)) return(0x00);

if(!(*argp)) return(0x00);

r = ct(*argp);
i = (r+(extra));
l = (i);
if(0x01&(l)) i++;
if(i<(0x01)) return(0x00);

*total = (i);

INC(r);
r = (r*(sizeof(signed char)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = cpy(p,*argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = recharge(argp,*total);
if(!r) {
printf("%s\n","<< Error at fn. recharge()");
return(0x00);
}

r = cpy(*argp,p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

free(p);

return(r);
}
