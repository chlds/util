/* **** Notes

Count down to wrap words.

Remarks:
Refer at fn. cf.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_to_wrap(signed short(edge),signed(arg/* align */),signed char(*cache/* sym */),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(edge<(0x01)) return(0x00);
if(arg<(0x00)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*cache)) return(0x00);

r = keep(&b,argp);
if(!r) return(0x00);

AND(flag,0x00);
AND(i,0x00);
r = ctdn_to_wrap_r(edge,arg,&i,cache,b);
if(!r) OR(flag,0x01);

r = release(0x00,&b);
if(!r) return(0x00);

r = (i);
AND(i,0x00);
if(flag) AND(r,i);

return(r);
}
