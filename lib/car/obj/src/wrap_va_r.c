/* **** Notes

Count.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wrap_va_r(signed short(cols),signed short(arg/* align */),signed char(**argp))) {

auto signed r;

if(cols<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(*argp);
if(!r) return(r);
if(EQ(HT,**argp)) r = cli_reckon(arg);

cols = (cols+(0x01+(~r)));
argp++;
if(cols<(0x00)) return(0x00);

return(0x01+(wrap_va_r(cols,arg,argp)));
}
