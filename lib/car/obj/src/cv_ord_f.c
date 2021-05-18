/* **** Notes

Check the ordinal number.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord_f(signed char(**table),signed(*retv),signed char(*argp))) {

auto signed i,r;

if(!table) return(0x00);
if(!retv) return(0x00);
if(!argp) return(0x00);

*retv = (~0x00);

return(cv_ord_f_r(table,retv,argp));
}
