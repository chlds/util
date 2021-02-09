/* **** Notes

Count letters to a specific point or to the terminating null character.

Remarks:
Along with alignement of the tab.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_tx(signed(to),signed(align),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(align<(0x00)) return(0x00);
if(!argp) return(0x00);

if(to<(0x01)) return(ct_txt(align,argp));

r = ct(argp);
if(!r) return(0x00);
if(r<(to)) to = (r);

r = (0x01+(to));
r = alloc(r,&b);
if(!r) return(0x00);

AND(flag,0x00);
r = ncpy(b,argp,--r);
if(!r) INC(flag);

if(!flag) {
AND(i,0x00);
r = ct_txt_internal(align,&i,b);
if(!r) INC(flag);
}

r = release(0x00,&b);
if(!r) return(0x00);

r = (i);
if(flag) AND(r,0x00);

return(r);
}
