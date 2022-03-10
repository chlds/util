/* **** Notes

Concatenate.

Remarks:
Call fn. unmap_rule later to release buffer.
Put a null pointer at the end of arguments.
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit).
Based on UTF-8
*/


# define CAR
# include <stdarg.h>
# include "./../../../incl/config.h"

signed(__cdecl cat_rule(rule_t *argp,...)) {

auto signed char **v;
auto signed char *b;
auto signed r;

if(!argp) return(0x00);

v = (signed char(**)) (&argp);
v++;

return(cat_rule_r(argp,v));
}
