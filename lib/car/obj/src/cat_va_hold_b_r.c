/* **** Notes

Concatenate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_va_hold_b_r(signed char(***di),signed char(**si))) {
auto signed char **v;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
v = (*di);
r = ct_v_b(v);
r++;
r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
if(!v) return(0x00);
/*
r = (r/(sizeof(*v)));
b = (0x00);
*(--r+(v)) = (b);
*(--r+(v)) = (*si);
while(r) *(r+(v)) = (*(--r+(*di)));
//*/
b = (0x00);
r = cpy_va_b(v,*di);
*(r+(v)) = (*si);
r++;
*(r+(v)) = (b);
//*/
embed_v(0x00,*di);
rl(*di);
*di = (v);
si++;
return(0x01+(cat_va_hold_b_r(di,si)));
}
