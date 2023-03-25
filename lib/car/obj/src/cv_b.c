/* **** Notes

Convert a signed double word into letters

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_b(signed char(**argp),signed(arg))) {
auto signed r;
auto signed col = (0x00);
auto signed bi = (0x02);
r = ct_v_b(argp);
if(r<(bi)) return(cv(col,arg));
return(cv_b_r(argp,r,arg));
}
