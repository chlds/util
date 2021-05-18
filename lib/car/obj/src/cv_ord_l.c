/* **** Notes

Check the ordinal number from behind.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord_l(signed char(**table),signed(*retv),signed char(*argp))) {

auto signed i,r;

if(!table) return(0x00);
if(!retv) return(0x00);
if(!argp) return(0x00);

*retv = (~0x00);
r = ct(argp);

r = cv_ord_l_r(r,table,retv,r+(argp));
r = (0x01+(~r));
r = (r+(ct(argp)));

return(r);
}
