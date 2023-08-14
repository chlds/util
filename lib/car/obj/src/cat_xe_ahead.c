/* **** Notes

Concatenate to the terminating null pointer

Remarks:
Call fn. rl later
Based on UTF-8
Put a null pointer at the end of arguments
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit)
*/


# define CAR_H
# include <stdarg.h>
# include "./../../../config.h"

signed char *(__cdecl /* __attribute__((ms_abi)) */ cat_xe_ahead(signed char *argp,...)) {
auto signed char **b;
if(!argp) return(0x00);
b = (&argp);
return(cat_xe_ahead_r(b));
}
