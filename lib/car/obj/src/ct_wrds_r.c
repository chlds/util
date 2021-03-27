/* **** Notes

Count arguments to the terminating null character.

Remarks:
Refer at fn. ct_ars2 and fn. ct_ars_r.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_wrds_r(signed short(flag),signed(*retv),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed short second = (0x02);
static signed short first = (0x01);
static signed char sym[] = {
SP,HT,0x00,
};
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

AND(flag,(~second));
r = ord(sym,*base);
if(r<(ct(sym))) OR(flag,second);
if(flag&(second)) AND(flag,(~first));
if(!(flag&(second|(first)))) {
OR(flag,first);
INC(*retv);
}

base++;

return(0x01+(ct_wrds_r(flag,retv,base)));
}
