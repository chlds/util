/* **** Notes

Count down to wrap words.

Remarks:
Refer at fn. cf.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_to_wrap_r(signed short(arg/* edge */),signed(*retv),signed(align),signed char(*cache/* sym */),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x01)) return(0x00);
if(!retv) return(0x00);
if(align<(0x00)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*cache)) return(0x00);

r = ctdn_to(cache/* sym */,argp);
i = (r);
if(r<(arg)) {
r = ct_tx(r,align,argp);
if(r<(arg)) {
*retv = (i);
return(0x01);
}}

r = embed(0x00,i+(argp));
if(!r) return(0x00);

return(0x01+(ctdn_to_wrap_r(arg,retv,align,cache,argp)));
}
