/* **** Notes

Convert, concatenate and release.

Remarks:
Call fn. rl later to release buffer.
A 3-digit number at least
Refer at fn. cv.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed char *(__cdecl cx3d(signed(arg),signed char(*et),signed char(*argp))) {

auto signed char *b;

if(!argp) return(0x00);
// if(!et) return(0x00);

b = cx3d_r(arg,et,argp);
embed(0x00,argp);
rl(argp);
argp = (0x00);

return(b);
}
