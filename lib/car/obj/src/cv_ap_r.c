/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_ap_r(signed(arg),signed char(**di),pg_t(*si))) {
auto signed char *b;
auto signed char *p;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
p = (*(CLI_B+(R(b,*si))));
if(!p) return(0x00);
b = (*di);
r = cat_b(&b,p,(void*)0x00);
if(!r) {
embed(0x00,b);
rl(b);
b = (0x00);
}
*di = (b);
if(!b) return(0x00);
si = (*(CLIH_DI+(R(p,*si))));
return(0x01+(cv_ap_r(arg,di,si)));
}
