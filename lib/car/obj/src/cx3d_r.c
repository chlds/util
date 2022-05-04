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

signed char *(__cdecl cx3d_r(signed(arg),signed char(*et),signed char(*argp))) {

auto signed char *b;

if(!argp) return(0x00);

b = cv3d(arg);
if(!b) return(0x00);

return(cx_rr(b,et,argp));
}