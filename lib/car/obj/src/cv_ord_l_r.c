/* **** Notes

Check the ordinal number from behind.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord_l_r(signed(arg),signed char(**table),signed(*retv),signed char(*argp))) {

auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!table) return(0x00);
if(!retv) return(0x00);
if(!argp) return(0x00);

r = ords_part(table,--argp);
if(r<(ct_p(table))) {
*retv = (r);
return(0x00);
}

return(0x01+(cv_ord_l_r(--arg,table,retv,argp)));
}
