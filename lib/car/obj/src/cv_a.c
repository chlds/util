/* **** Notes

Convert.

Remarks:
Release at the return pointer later.
Refer at fn. rl and/or fn. release.
//*/


# define CAR
# include "../../../incl/config.h"

signed char*(__cdecl cv_a(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *sm = ("abcdefghijklmnopqrstuvwxyz");
auto signed char *ca = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
auto signed char *di,*si;
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = ct(argp);
r++;
r = (r*(sizeof(*b)));
if(r<(0x01)) return(0x00);

b = (signed char(*)) alloc(r);
if(!b) return(0x00);

AND(flag,0x00);
r = cpy(b,argp);
if(!r) flag++;

di = (sm);
si = (ca);

if(arg) {
di = (ca);
si = (sm);
}

if(!flag) {
r = cv_l(di,si,b,argp);
if(!r) flag++;
}

if(flag) {
r = rl(b);
b = (0x00);
}

return(b);
}
