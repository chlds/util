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
r = ct_vb(v);
*(r+(di)) = (b);

return(0x01);
}
