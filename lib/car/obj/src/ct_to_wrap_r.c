/* **** Notes

Count to wrap words.

Remarks:
Refer at fn. cf.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_to_wrap_r(signed short(arg),signed(*retv),signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x01)) return(0x00);
if(!retv) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*cache)) return(0x00);

r = ctdn_to(cache,argp);
if(r<(arg)) {
*retv = (r);
return(0x01);
}

r = embed(0x00,r+(argp));
if(!r) return(0x00);

return(0x01+(ct_to_wrap_r(arg,retv,cache,argp)));
}
