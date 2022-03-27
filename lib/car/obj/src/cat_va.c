/* **** Notes

Concatenate.

Remarks:
Call fn. rl_v later to release buffer.
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit).
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cat_va(signed char(***di),signed char(*si))) {

auto signed char **v;
auto signed char *b;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
// if(*di) return(0x00);

v = (*di);
r = ct_vb(v);
r++;
r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
if(!v) return(0x00);

b = (0x00);
r = (r/(sizeof(*v)));
*(--r+(v)) = (b);
*(--r+(v)) = (b);
while(r) *(r+(v)) = (*(--r+(*di)));

r = cat_va_r(v,si);
if(!r) {
embed_v(0x00,v);
rl(v);
v = (0x00);
return(0x00);
}

r = (r+(embed_v(0x00,*di)));
rl(*di);
*di = (v);

return(r);
}