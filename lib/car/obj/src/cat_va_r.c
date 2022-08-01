/* **** Notes

Concatenate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_va_r(signed char(**di),signed char(*si))) {
auto signed char **v;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
b = (si);
r = ct(b);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
*b = (0x00);
r = cpy(b,si);
v = (di);
r = ct_v_b(v);
*(r+(di)) = (b);
return(0x01);
}
