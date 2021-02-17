/* **** Notes

Count down to wrap words.

Remarks:
Refer at fn. cf.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_to_wrap_r(signed short(edge),signed(arg/* align */),signed(*retv),signed char(*cache/* sym */),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(edge<(0x01)) return(0x00);
if(arg<(0x00)) return(0x00);
if(!retv) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*cache)) return(0x00);

r = ctdn_to(cache/* sym */,argp);
i = (r);
if(r<(edge)) {
r = ct_tx(r,arg,argp);
if(r<(edge)) {
*retv = (i);
return(0x01);
}}

r = embed(0x00,i+(argp));
if(!r) return(0x00);

return(0x01+(ctdn_to_wrap_r(edge,arg,retv,cache,argp)));
}
