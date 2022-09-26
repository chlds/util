/* **** Notes

Duplicate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl dupl_offset(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (argp);
r = ct(b);
if(r<(arg)) return(0x00);
r = (r+(0x01+(~arg)));
argp = (arg+(argp));
return(dupl_offset_r(r,argp));
}
