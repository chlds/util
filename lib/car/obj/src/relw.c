/* **** Notes

Release

Remarks:
Refer at fn. rl
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl relw(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
r = relw_r(argp);
rl(argp);
return(r);
}
