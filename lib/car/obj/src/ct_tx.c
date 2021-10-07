/* **** Notes

Count letters to a specific point or to the terminating null character.

Remarks:
Along with alignement of the tab.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_tx(signed(to),signed(arg/* align */),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

if(to<(0x01)) return(ct_txt(arg,argp));

r = ct(argp);
if(!r) return(0x00);

if(r<(to)) to = (r);

r = (to);
r++;
r = (r*(sizeof(*argp)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

AND(flag,0x00);
r = ncpy(--r,b,argp);
if(!r) INC(flag);

if(!flag) {
AND(i,0x00);
r = ct_txt_internal(arg,&i,b);
if(!r) INC(flag);
}

r = release(0x00,&b);
if(!r) return(0x00);

r = (i);
if(flag) AND(r,0x00);

return(r);
}
