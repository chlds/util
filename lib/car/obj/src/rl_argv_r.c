/* **** Notes

Release

Remarks:
Refer at fn. cv_argv_bw.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rl_argv_r(signed char(**argp))) {

auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = release(0x00,argp);
if(!r) return(0x00);

argp++;

return(0x01+(rl_argv_r(argp)));
}
