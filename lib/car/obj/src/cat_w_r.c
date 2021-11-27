/* **** Notes

Concatenate to the terminating null pointer.

Remarks:
Release buffer later.
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit).
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl /* __attribute__((ms_abi)) */ cat_w_r(signed short(**di),signed short(**si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = concatenate_w(0x00,di,*si);
if(!r) return(0x00);

si++;

return(0x01+(cat_w_r(di,si)));
}
