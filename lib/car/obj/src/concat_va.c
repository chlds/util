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

signed(__cdecl concat_va(signed char(***di),signed char(**si))) {

auto signed char **v;
auto signed char *b;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
// if(*di) return(0x00);

b = (*si);
si++;
r = cat_va(di,b);
b = (0x00);
if(!r) return(0x00);

return(0x01+(concat_va(di,si)));
}
