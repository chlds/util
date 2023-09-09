/*

Convert out of times of day

Remarks:
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvhr_td(signed char *argp)) {
auto signed char *b;
auto signed r;
auto signed(__cdecl*f)(signed char *argp);
auto signed(__cdecl**ff)(signed char *argp);
auto signed(__cdecl*(fn[]))(signed char *argp) = {
cvhr_midnight,
cvhr_midday,
cvhr_noon,
0x00,
};
if(!argp) return(~0x00);
b = (argp);
ff = (fn);
while(*ff) {
f = (*ff);
r = f(b);
if(0x01+(r)) return(r);
ff++;
}
return(~0x00);
}
