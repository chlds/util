/* **** Notes

Check the ordinal number.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord_f_r(signed char(**table),signed(*retv),signed char(*argp))) {

auto signed i,r;

if(!table) return(0x00);
if(!retv) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = reords_part(table,argp);
if(r<(ct_p(table))) {
*retv = (r);
return(0x00);
}

argp++;

return(0x01+(cv_ord_f_r(table,retv,argp)));
}
