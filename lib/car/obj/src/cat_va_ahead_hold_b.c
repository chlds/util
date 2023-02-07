/* **** Notes

Concatenate

Remarks:
Call fn. rl_v later
Based on UTF-8
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit)
*/


# define CAR_H
# include <stdarg.h>
# include "./../../../config.h"

signed(__cdecl /* __attribute__((ms_abi)) */ cat_va_ahead_hold_b(signed char ***argp,...)) {
auto signed char **b;
if(!argp) return(0x00);
b = (signed char(**)) (&argp);
b++;
return(cat_va_ahead_hold_b_r(argp,b));
}
