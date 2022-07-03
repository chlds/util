/* **** Notes

Concatenate pointers.

Remarks:
Release buffer later.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_p(signed char(***di),signed char(*si))) {
auto signed char **b;
auto signed char *p;
auto signed i,r;
if(!di) return(0x00);
if(!si) return(0x00);
// if(!(*di)) return(0x00);
p = (si);
r = ct(p);
r++;
r = (r*(sizeof(*p)));
p = (signed char(*)) alloc(r);
if(!p) return(0x00);
*p = (0x00);
r = cpy(p,si);
b = (*di);
r = ct_p(b);
r++;
r++;
r = (r*(sizeof(*b)));
b = (signed char(**)) alloc(r);
if(!b) {
rl(p);
return(0x00);
}
*b = (0x00);
r = cpy_p(b,*di);
*(r+(b)) = (p);
*(0x01+(r+(b))) = (0x00);
rl(*di);
*di = (b);
b = (0x00);
r++;
return(r);
}
