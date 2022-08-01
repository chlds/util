/* **** Notes

Concatenate to the terminating null pointer

Remarks:
Call fn. rl later
Based on UTF-16
Put a null pointer at the end of arguments
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit)
*/


# define CAR_H
# include <stdarg.h>
# include "./../../../config.h"

signed(__cdecl /* __attribute__((ms_abi)) */ cat_w(signed short **argp,...)) {
auto signed short **w;
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
w = (signed short(**)) (&argp);
w++;
return(cat_w_r(argp,w));
}
