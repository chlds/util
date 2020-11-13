/* **** Notes

Concatenate with.

Remarks:
Release at the *b.
//*/


# define CAR

# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl concat2home(signed char(**b),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);

p = getenv("USERPROFILE");
if(!p) {
printf("%s\n","<< Error at fn. getenv()");
return(0x00);
}

r = ct(p);
if(!r) {
printf("%s\n","<< Error at fn. ct()");
return(0x00);
}

i = (r);
r = ct(argp);
if(!r) {
printf("%s\n","<< Error at fn. ct()");
return(0x00);
}

i = (i+(r));
i++;
i = (i*(sizeof(**b)));
*b = (signed char(*)) malloc(i);
if(!(*b)) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = concats(*b,p,argp,(void*) 0x00);
if(!r) {
printf("%s \n","<< Error at fn. concats()");
flag++;
}

if(flag) {
free(*b);
*b = (0x00);
return(0x00);
}

return(i);
}
