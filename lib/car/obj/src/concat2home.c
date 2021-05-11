/* **** Notes

Concatenate with.

Remarks:
Release at the *b.
//*/


# define CAR

# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl concat2home(signed char(**b),signed char(*argp))) {

auto signed char *p;
auto signed i,r;
auto signed short flag;

if(!b) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);

p = rf_env("USERPROFILE");
if(!p) {
printf("%s \n","<< Error at fn. rf_env()");
return(0x00);
}

r = ct(p);
if(!r) {
printf("%s \n","<< Error at fn. ct()");
return(0x00);
}

i = (r);
r = ct(argp);
if(!r) {
printf("%s \n","<< Error at fn. ct()");
return(0x00);
}

i = (i+(r));
i++;
i = (i*(sizeof(**b)));
*b = (signed char(*)) alloc(i);
if(!(*b)) {
printf("%s \n","<< Error at fn. alloc()");
return(0x00);
}

r = concat_b(*b,p,argp,(void*) 0x00);
if(!r) {
printf("%s \n","<< Error at fn. concat_b()");
flag++;
}

if(flag) {
rl(*b);
*b = (0x00);
return(0x00);
}

return(i);
}
