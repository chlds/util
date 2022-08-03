/* **** Notes

Append

Remarks:
Call fn. rl_v later
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl append_va_b(signed char(***di),signed char(*si))) {
auto signed char **v;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
// if(!(*di)) return(0x00);
b = (si);
r = ct(b);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
*b = (0x00);
r = cpy(b,si);
v = (*di);
r = ct_v_b(v);
r++;
r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
if(!v) {
rl(b);
return(0x00);
}
*v = (0x00);
r = cpy_v_b(v,*di);
*(r+(v)) = (b);
r++;
*(r+(v)) = (0x00);
rl(*di);
*di = (v);
v = (0x00);
return(r);
}
