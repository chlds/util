/* **** Notes

Check the ordinal number.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord_f(signed char(**table),signed char(*argp))) {

auto signed i,r;

if(!table) return(0x00);
if(!argp) return(0x00);

i = (~0x00);
r = cv_ord_f_r(table,&i,argp);
r = (i);

return(r);
}
