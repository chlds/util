/* **** Notes

Convert, concatenate and release.

Remarks:
Call fn. rl later to release buffer.
An n-digit number at least
Refer at fn. cv.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed char *(__cdecl cx_r(signed(digit),signed(arg),signed char(*et),signed char(*argp))) {

auto signed char *b;

if(!argp) return(0x00);

b = cv(digit,arg);
if(!b) return(0x00);

return(cx_rr(b,et,argp));
}
