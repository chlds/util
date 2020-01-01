/*

Support for function and arrow keys

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_in and fn. cli_ctrl_at_beta.
*/


# define CL_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl cli_support_meta_keys(signed char(first),signed char(second))) {

/* **** DATA, BSS and STACK */
auto signed char const low = (0xE0);

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
flag = (0x00);
if(!(low^(first))) flag = (0x01);
if(!first) flag = (0x01);
if(!flag) return(0x00);

r = (second);
r = (r<<(0x08));
r = (r|(first));

return(r);
}
