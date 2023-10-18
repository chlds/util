/*

Retrieve

Remarks:
Call fn. rl later
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed char *(__cdecl get_env_beta(signed char *argp)) {
auto signed char *b;
auto signed r;
auto signed char a[0x04];
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
AND(r,0x00);
b = (argp);
r = GetEnvironmentVariable(b,a,r);
if(!r) return(0x00);
r++;
r = (r*(sizeof(*argp)));
b = (signed char *)(alloc(r));
if(!b) return(b);
r = GetEnvironmentVariable(argp,b,r);
if(!r) {
rl(b);
b = (0x00);
}
return(b);
}
