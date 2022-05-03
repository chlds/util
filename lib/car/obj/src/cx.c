/* **** Notes

Convert, concatenate and release.

Remarks:
Call fn. rl later to release buffer.
Refer at fn. cv.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed char *(__cdecl cx(signed(arg),signed char(*argp))) {

auto signed char *b;

if(!argp) return(0x00);

b = cx_r(arg,argp);
embed(0x00,argp);
rl(argp);
argp = (0x00);

return(b);
}
