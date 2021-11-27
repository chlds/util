/* **** Notes

Concatenate to the terminating null pointer.

Remarks:
Put a null pointer at the end of arguments.
Release buffer later.
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit).
Based on UTF-8
*/


# define CAR
# include <stdarg.h>
# include "./../../../incl/config.h"

signed(__cdecl /* __attribute__((ms_abi)) */ cat_b(signed char(**argp),...)) {

auto signed char **b;

if(!argp) return(0x00);
// if(!(*argp)) return(0x00);

b = (signed char(**)) (&argp);
b++;

return(cat_b_r(argp,b));
}
