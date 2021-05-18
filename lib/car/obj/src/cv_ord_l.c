/* **** Notes

Check the ordinal number from behind.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord_l(signed char(**table),signed char(*argp))) {

auto signed i,r;

if(!table) return(0x00);
if(!argp) return(0x00);

i = (~0x00);
r = ct(argp);
r = cv_ord_l_r(r,table,&i,r+(argp));
r = (i);

return(r);
}
